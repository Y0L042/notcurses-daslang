# notcurses-daslang build
#
# Targets:
#   clone      - clone notcurses into vendors/notcurses
#   notcurses  - configure + build notcurses (requires vendors/notcurses)
#   generate   - run the daslang binding generator (requires notcurses headers)
#   build      - cmake configure + compile the .shared_module files
#   all        - generate + build  (default)
#   clean      - remove build/ and generated src files
#   distclean  - clean + remove vendors/notcurses/build

NOTCURSES_REPO := https://github.com/dankamongmen/notcurses.git
NOTCURSES_TAG  := latest

DASLANG_DIR  ?= C:/Programs/daslang
DASLANG      := $(DASLANG_DIR)/bin/Release/daslang.exe
NOTCURSES_SRC := $(CURDIR)/vendors/notcurses
NOTCURSES_BUILD := $(NOTCURSES_SRC)/build
NOTCURSES_DIR ?= $(NOTCURSES_BUILD)

BUILD_DIR := $(CURDIR)/build

# notcurses itself uses MSYS2/MinGW (it needs POSIX tools).
#
# The daslang module must match the pre-built daslang SDK ABI, which is MSVC
# (its import lib exports MSVC-mangled C++ symbols). But notcurses' headers use
# GCC extensions (__attribute__((nonnull/malloc)), etc.) that MSVC's cl.exe
# cannot parse. The toolchain that satisfies both is clang-cl: it targets the
# MSVC ABI (x86_64-pc-windows-msvc) so symbols match libDaScriptDyn.lib, while
# being clang under the hood so it tolerates the GCC attributes in notcurses.h.
#
# clang-cl needs the MSVC CRT/STL headers+libs and the Windows SDK; point it at
# them via INCLUDE/LIB and ensure the MSVC link.exe and SDK rc.exe are found
# (not Git's link.exe). These are exported to the build recipe below.
NOTCURSES_CMAKE_GENERATOR ?= Ninja

CMAKE       ?= C:/Programs/CMake/bin/cmake.exe
CLANG_CL    ?= C:/msys64/ucrt64/bin/clang-cl.exe
NINJA       ?= C:/msys64/ucrt64/bin/ninja.exe
MSVC_DIR    ?= C:/Program Files/Microsoft Visual Studio/18/Community/VC/Tools/MSVC/14.50.35717
WINSDK_DIR  ?= C:/Program Files (x86)/Windows Kits/10
WINSDK_VER  ?= 10.0.26100.0

CMAKE_GENERATOR ?= Ninja

# Toolchain -D flags, expanded unquoted into the configure command. Each value
# is individually quoted because the MSVC/SDK paths contain spaces.
CMAKE_TOOLCHAIN_FLAGS ?= \
	-DCMAKE_MAKE_PROGRAM="$(NINJA)" \
	-DCMAKE_C_COMPILER="$(CLANG_CL)" \
	-DCMAKE_CXX_COMPILER="$(CLANG_CL)" \
	-DCMAKE_RC_COMPILER="$(WINSDK_DIR)/bin/$(WINSDK_VER)/x64/rc.exe" \
	-DCMAKE_LINKER="$(MSVC_DIR)/bin/Hostx64/x64/link.exe"

# MSVC toolchain environment for clang-cl. Exported so both the cmake configure
# and the ninja build invocations below see them.
export INCLUDE := $(MSVC_DIR)/include;$(WINSDK_DIR)/Include/$(WINSDK_VER)/ucrt;$(WINSDK_DIR)/Include/$(WINSDK_VER)/um;$(WINSDK_DIR)/Include/$(WINSDK_VER)/shared;$(WINSDK_DIR)/Include/$(WINSDK_VER)/winrt
export LIB := $(MSVC_DIR)/lib/x64;$(WINSDK_DIR)/Lib/$(WINSDK_VER)/ucrt/x64;$(WINSDK_DIR)/Lib/$(WINSDK_VER)/um/x64
export PATH := $(MSVC_DIR)/bin/Hostx64/x64:$(WINSDK_DIR)/bin/$(WINSDK_VER)/x64:$(PATH)
# Stop MSYS from mangling clang-cl's /flags into Windows paths.
export MSYS2_ARG_CONV_EXCL := *

# ---------------------------------------------------------------------------

.PHONY: all clone notcurses generate build clean distclean

all: generate build

# -- 1. Clone ----------------------------------------------------------------

clone: vendors/notcurses/.git

vendors/notcurses/.git:
	git clone --depth 1 $(if $(filter-out latest,$(NOTCURSES_TAG)),--branch $(NOTCURSES_TAG)) \
		$(NOTCURSES_REPO) $(NOTCURSES_SRC)

# -- 2. Build notcurses ------------------------------------------------------

notcurses: $(NOTCURSES_BUILD)/build.ninja
	cmake --build $(NOTCURSES_BUILD) -- -j$(shell nproc 2>/dev/null || echo 4)

$(NOTCURSES_BUILD)/build.ninja: vendors/notcurses/.git
	cmake -S $(NOTCURSES_SRC) -B $(NOTCURSES_BUILD) \
		-G "$(NOTCURSES_CMAKE_GENERATOR)" \
		-DUSE_MULTIMEDIA=none \
		-DUSE_PANDOC=off \
		-DUSE_STATIC=off \
		-DUSE_TESTS=off \
		-DCMAKE_BUILD_TYPE=Release

# -- 3. Generate bindings ----------------------------------------------------

# Sentinel: if any generated func file exists, generation has run.
# Re-run manually with: make generate
GENERATED_SENTINEL := $(CURDIR)/src/notcurses/dasNotcurses.func_1.cpp

generate: $(GENERATED_SENTINEL)

$(GENERATED_SENTINEL): tools/generator.das vendors/notcurses/.git
	NOTCURSES_DIR=$(NOTCURSES_DIR) \
		$(DASLANG) tools/generator.das tools/generator.das

# -- 4. Build shared modules -------------------------------------------------

$(BUILD_DIR)/build.ninja: CMakeLists.txt
	"$(CMAKE)" -S $(CURDIR) -B $(BUILD_DIR) \
		-G "$(CMAKE_GENERATOR)" \
		$(CMAKE_TOOLCHAIN_FLAGS) \
		-DDASLANG_DIR=$(DASLANG_DIR) \
		-DNOTCURSES_DIR=$(NOTCURSES_DIR) \
		-DCMAKE_BUILD_TYPE=Release

build: $(GENERATED_SENTINEL) $(BUILD_DIR)/build.ninja
	"$(CMAKE)" --build $(BUILD_DIR) --config Release -- -j$(shell nproc 2>/dev/null || echo 4)

# -- Cleanup -----------------------------------------------------------------

clean:
	rm -rf $(BUILD_DIR)
	rm -f  $(CURDIR)/src/notcurses/dasNotcurses.func_*.cpp
	rm -f  $(CURDIR)/src/notcurses/dasNotcurses.*.inc
	rm -f  $(CURDIR)/src/ncdirect/dasNcdirect.func_*.cpp
	rm -f  $(CURDIR)/src/ncdirect/dasNcdirect.*.inc
	rm -f  $(CURDIR)/dasNotcurses.shared_module
	rm -f  $(CURDIR)/dasNcdirect.shared_module

distclean: clean
	rm -rf $(NOTCURSES_BUILD)
