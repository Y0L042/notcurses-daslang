#!/usr/bin/env bash
#
# bootstrap.sh — one-shot build invoked by `daspkg install` via custom_build().
#
# daspkg runs this from the package root (the cloned repo, which after a global
# install IS  <das_root>/modules/notcurses-daslang/). It must turn a bare clone
# into a runnable module:
#
#   1. locate the MSYS2 / clang-cl / ninja toolchain
#   2. clone notcurses (pinned) into vendors/notcurses  (gitignored, not shipped)
#   3. build notcurses-core.dll + import lib with the UCRT64 gcc toolchain
#   4. configure + build the daslang shared modules (clang-cl, MSVC ABI)
#   5. copy libnotcurses-core.dll and every UCRT64 DLL it transitively needs
#      next to the .shared_module, so daslang's LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR
#      resolves them at load time without touching PATH.
#
# Re-running is cheap: each step is skipped if its output already exists.
# Override any path with an environment variable (see the block below).

set -euo pipefail

# Resolve the package root from this script's location, so the script works
# regardless of the caller's cwd.
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
cd "$ROOT"

log() { printf '[bootstrap] %s\n' "$*"; }
die() { printf '[bootstrap] ERROR: %s\n' "$*" >&2; exit 1; }

# --- 0. Configuration -------------------------------------------------------

# Pinned notcurses revision (the commit this binding was generated against).
# Bump deliberately and regenerate the bindings if you change it.
NOTCURSES_REPO="${NOTCURSES_REPO:-https://github.com/dankamongmen/notcurses.git}"
NOTCURSES_REV="${NOTCURSES_REV:-b26048eebc74d5d254717d3332fa484718f9efe6}"

# daslang SDK. daspkg builds with -DDASLANG_DIR set by the CMake invocation it
# runs itself, but our custom build drives CMake directly, so resolve it here.
DASLANG_DIR="${DASLANG_DIR:-C:/Programs/daslang}"

# MSYS2 UCRT64 toolchain root and the tools we need from it.
MSYS_UCRT64="${MSYS_UCRT64:-C:/msys64/ucrt64}"
CLANG_CL="${CLANG_CL:-$MSYS_UCRT64/bin/clang-cl.exe}"
NINJA="${NINJA:-$MSYS_UCRT64/bin/ninja.exe}"
OBJDUMP="${OBJDUMP:-$MSYS_UCRT64/bin/objdump.exe}"
GCC_CMAKE_C="${GCC_CMAKE_C:-$MSYS_UCRT64/bin/gcc.exe}"
GCC_CMAKE_CXX="${GCC_CMAKE_CXX:-$MSYS_UCRT64/bin/g++.exe}"

# A cmake that can drive Ninja. Prefer $CMAKE, then PATH, then common installs.
if [ -n "${CMAKE:-}" ]; then
    :
elif command -v cmake >/dev/null 2>&1; then
    CMAKE=cmake
else
    for c in "C:/Programs/CMake/bin/cmake.exe" \
             "C:/Program Files/CMake/bin/cmake.exe" \
             "$MSYS_UCRT64/bin/cmake.exe"; do
        if [ -x "$c" ]; then CMAKE="$c"; break; fi
    done
    CMAKE="${CMAKE:-cmake}"
fi

# MSVC + Windows SDK for clang-cl (it needs the MSVC CRT/STL + SDK headers/libs).
MSVC_DIR="${MSVC_DIR:-C:/Program Files/Microsoft Visual Studio/18/Community/VC/Tools/MSVC/14.50.35717}"
WINSDK_DIR="${WINSDK_DIR:-C:/Program Files (x86)/Windows Kits/10}"
WINSDK_VER="${WINSDK_VER:-10.0.26100.0}"

NOTCURSES_SRC="$ROOT/vendors/notcurses"
NOTCURSES_BUILD="$NOTCURSES_SRC/build"
MODULE_BUILD="$ROOT/build"

# The cmake/clang-cl on Windows want native (C:\... or C:/...) paths, but this
# script uses MSYS paths (/c/...) for its own file tests. Convert with cygpath
# when present (MSYS/Cygwin); otherwise assume paths are already native.
winpath() {
    if command -v cygpath >/dev/null 2>&1; then
        cygpath -m "$1"      # -m => forward-slash mixed form, safe for cmake
    else
        printf '%s' "$1"
    fi
}
ROOT_W="$(winpath "$ROOT")"
NOTCURSES_SRC_W="$(winpath "$NOTCURSES_SRC")"
NOTCURSES_BUILD_W="$(winpath "$NOTCURSES_BUILD")"
MODULE_BUILD_W="$(winpath "$MODULE_BUILD")"
DASLANG_DIR_W="$(winpath "$DASLANG_DIR")"

# The UCRT64 toolchain DLLs (gcc's libwinpthread, etc.) live in $MSYS_UCRT64/bin.
# gcc/clang-cl can't even compile a test program unless that dir is on PATH so
# they can load their own runtime. Prepend it for every native tool below.
export PATH="$MSYS_UCRT64/bin:$PATH"

# Native Windows toolchains (gcc, the MSVC linker via cmake -E vs_link_exe) write
# temp files into %TMP%/%TEMP%. A bare MSYS2 bash often has neither set, so they
# fall back to C:\Windows (unwritable) and die ("Cannot create temporary file" /
# LNK1104). Point both at a writable native path before any compiler runs.
if [ -z "${TMP:-}" ] && [ -z "${TEMP:-}" ]; then
    _tmp_native="$(winpath "${TMPDIR:-/tmp}")"
    export TMP="$_tmp_native"
    export TEMP="$_tmp_native"
fi

# --- 1. Toolchain checks ----------------------------------------------------

log "package root: $ROOT"
[ -d "$DASLANG_DIR" ]      || die "DASLANG_DIR not found: $DASLANG_DIR (set DASLANG_DIR=...)"
[ -x "$CLANG_CL" ]         || die "clang-cl not found: $CLANG_CL (install MSYS2 ucrt64 clang, or set CLANG_CL=...)"
[ -x "$NINJA" ]            || die "ninja not found: $NINJA (pacman -S mingw-w64-ucrt-x86_64-ninja, or set NINJA=...)"
[ -x "$OBJDUMP" ]          || die "objdump not found: $OBJDUMP"
command -v "$CMAKE" >/dev/null 2>&1 || [ -x "$CMAKE" ] || die "cmake not found on PATH (set CMAKE=...)"
[ -d "$MSVC_DIR" ]         || die "MSVC toolchain not found: $MSVC_DIR (set MSVC_DIR=...)"
[ -d "$WINSDK_DIR/Include/$WINSDK_VER" ] || die "Windows SDK $WINSDK_VER not found under $WINSDK_DIR (set WINSDK_DIR / WINSDK_VER)"

# --- 2. Clone notcurses (pinned) --------------------------------------------

if [ ! -e "$NOTCURSES_SRC/.git" ]; then
    log "cloning notcurses @ $NOTCURSES_REV"
    # Shallow fetch of just the pinned revision.
    git init -q "$NOTCURSES_SRC"
    git -C "$NOTCURSES_SRC" remote add origin "$NOTCURSES_REPO"
    if ! git -C "$NOTCURSES_SRC" fetch -q --depth 1 origin "$NOTCURSES_REV"; then
        # Some servers refuse fetch-by-sha; fall back to a full fetch.
        log "shallow fetch-by-sha refused; doing full fetch"
        git -C "$NOTCURSES_SRC" fetch -q origin
    fi
    git -C "$NOTCURSES_SRC" checkout -q "$NOTCURSES_REV"
else
    log "notcurses already cloned, skipping (rev $(git -C "$NOTCURSES_SRC" rev-parse --short HEAD))"
fi

# --- 3. Build notcurses-core (UCRT64 gcc) -----------------------------------
#
# notcurses' headers use GCC attributes and it expects a POSIX-ish toolchain, so
# the C library itself is built with UCRT64 gcc. Multimedia/tests/pandoc off:
# this binding targets the core terminal API only.

CORE_DLL="$NOTCURSES_BUILD/libnotcurses-core.dll"
if [ ! -f "$CORE_DLL" ]; then
    log "configuring notcurses (gcc/Ninja)"
    "$CMAKE" -S "$NOTCURSES_SRC_W" -B "$NOTCURSES_BUILD_W" -G Ninja \
        -DCMAKE_MAKE_PROGRAM="$(winpath "$NINJA")" \
        -DCMAKE_C_COMPILER="$(winpath "$GCC_CMAKE_C")" \
        -DCMAKE_CXX_COMPILER="$(winpath "$GCC_CMAKE_CXX")" \
        -DUSE_MULTIMEDIA=none \
        -DUSE_PANDOC=off \
        -DUSE_STATIC=off \
        -DUSE_TESTS=off \
        -DCMAKE_BUILD_TYPE=Release
    log "building notcurses-core"
    "$CMAKE" --build "$NOTCURSES_BUILD_W" --target notcurses-core
    [ -f "$CORE_DLL" ] || die "notcurses build finished but $CORE_DLL is missing"
else
    log "notcurses-core already built, skipping"
fi

# Header tree the module compile expects (vendors/notcurses/include/notcurses/*).
[ -d "$NOTCURSES_SRC/include/notcurses" ] || die "notcurses headers missing under $NOTCURSES_SRC/include"

# --- 4. Build the daslang shared modules (clang-cl, MSVC ABI) ---------------
#
# The pre-built daslang SDK is MSVC; the modules must match that ABI to link
# libDaScriptDyn.lib. clang-cl targets the MSVC ABI while tolerating notcurses'
# GCC attributes in the headers it includes. It needs the MSVC CRT/STL + SDK via
# INCLUDE/LIB, and the MSVC link.exe + SDK rc.exe on PATH (not Git's link.exe).

export INCLUDE="$MSVC_DIR/include;$WINSDK_DIR/Include/$WINSDK_VER/ucrt;$WINSDK_DIR/Include/$WINSDK_VER/um;$WINSDK_DIR/Include/$WINSDK_VER/shared;$WINSDK_DIR/Include/$WINSDK_VER/winrt"
export LIB="$MSVC_DIR/lib/x64;$WINSDK_DIR/Lib/$WINSDK_VER/ucrt/x64;$WINSDK_DIR/Lib/$WINSDK_VER/um/x64"
export PATH="$MSVC_DIR/bin/Hostx64/x64:$WINSDK_DIR/bin/$WINSDK_VER/x64:$PATH"
# Stop MSYS from mangling clang-cl's /flags into Windows paths.
export MSYS2_ARG_CONV_EXCL='*'

log "configuring daslang modules (clang-cl)"
"$CMAKE" -S "$ROOT_W" -B "$MODULE_BUILD_W" -G Ninja \
    -DCMAKE_MAKE_PROGRAM="$(winpath "$NINJA")" \
    -DCMAKE_C_COMPILER="$(winpath "$CLANG_CL")" \
    -DCMAKE_CXX_COMPILER="$(winpath "$CLANG_CL")" \
    -DCMAKE_RC_COMPILER="$(winpath "$WINSDK_DIR/bin/$WINSDK_VER/x64/rc.exe")" \
    -DCMAKE_LINKER="$(winpath "$MSVC_DIR/bin/Hostx64/x64/link.exe")" \
    -DDASLANG_DIR="$DASLANG_DIR_W" \
    -DNOTCURSES_DIR="$NOTCURSES_BUILD_W" \
    -DCMAKE_BUILD_TYPE=Release

log "building daslang modules"
"$CMAKE" --build "$MODULE_BUILD_W" --config Release

for m in dasNotcurses.shared_module dasNcdirect.shared_module; do
    [ -f "$ROOT/$m" ] || die "module build finished but $m is missing"
done

# --- 5. Stage runtime DLLs next to the modules ------------------------------
#
# daslang loads the .shared_module with LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR, so any
# native DLL placed in the module dir resolves at load time. Walk the dependency
# tree of libnotcurses-core.dll and copy every dep we can find in UCRT64/bin
# (system32 / api-ms / MSVC CRT DLLs are left to the OS). Tree-walk instead of a
# hardcoded list so it survives notcurses dependency changes.

log "staging runtime DLLs"
declare -A copied=()
stage_deps() {
    local dll="$1"
    local deps dep src
    # objdump is a native tool and step 4 set MSYS2_ARG_CONV_EXCL=*, so MSYS no
    # longer rewrites /c/... into C:\... — hand objdump an explicit native path.
    deps="$("$OBJDUMP" -p "$(winpath "$dll")" 2>/dev/null | awk '/DLL Name:/ {print $3}')"
    for dep in $deps; do
        # Skip OS / CRT DLLs — present on every Windows box.
        case "${dep,,}" in
            api-ms-*|kernel32.dll|ntdll.dll|advapi32.dll|user32.dll|ws2_32.dll|secur32.dll|msvcrt.dll|msvcp140.dll|vcruntime140.dll|vcruntime140_1.dll) continue ;;
        esac
        # Already staged? (plain if, not `&&` — a false test must not trip set -e)
        if [ -n "${copied[$dep]:-}" ]; then continue; fi
        src="$MSYS_UCRT64/bin/$dep"
        if [ -f "$src" ]; then
            cp -f "$src" "$ROOT/$dep"
            copied[$dep]=1
            log "  + $dep"
            stage_deps "$ROOT/$dep"   # recurse into the just-copied dep
        fi
    done
}
cp -f "$CORE_DLL" "$ROOT/libnotcurses-core.dll"
log "  + libnotcurses-core.dll"
stage_deps "$ROOT/libnotcurses-core.dll"

log "done — modules and runtime DLLs are in $ROOT"
