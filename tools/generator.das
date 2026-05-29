options gen2

require cbind/cbind_boost
require daslib/fio
require daslib/defer
require daslib/strings_boost

// Generator runs locally (author only).
// Header root is derived from the script location (tools/../vendors/notcurses/include).
// NOTCURSES_DIR is only needed for the cmake/link step, not for code generation.
var NOTCURSES_INC_ROOT = ""   // set in main() once script path is known
var NOTCURSES_INC      = ""   // set in main()
var PROJECT_SRC        = ""   // set in main()

def make_args(extra : array<string>) : array<string> {
    // -xc++-header: emit bool/StructName rather than _Bool/struct StructName in template args
    // -DNOTCURSES_FFI: inside notcurses.h this redefines `static` to API, exposing inline helpers
    var args <- ["-xc++-header",
                 "-DNOTCURSES_FFI",
                 "-DUSE_LIBTYPE_SHARED",
                 "-I{NOTCURSES_INC_ROOT}"]
    for (a in extra) { args |> push(a); }
    return <- args
}

// Scalar/struct types that daslang has no typeFactory for, so any function whose
// result or (recursively, through pointers) any argument uses one must be skipped.
//   wchar_t  - no das::cast<wchar_t>; also 16-bit on Windows vs 32-bit on Linux,
//              so binding as uint16 would silently truncate. UTF-8 equivalents exist
//              for every wchar_t API (ncplane_putwc*, ncplane_putwstr*, ncwcsrtombs,
//              ncdirect_box, ...).
//   timespec - POSIX struct with no binding (notcurses_get/getvec, ncdirect_get,
//              ncplane_fadein/fadeout/pulse). Non-blocking variants are available.
let UNBINDABLE_TYPE_NAMES <- {
    "wchar_t"  => true,
    "timespec" => true
}

// Strip leading "struct "/"class "/"const " qualifiers from a clang type spelling
// so it can be matched against UNBINDABLE_TYPE_NAMES by bare name.
def stripped_type_name(name : string) : string {
    var n = name
    while (true) {
        if      (n |> starts_with("const "))  { n = n |> slice(6); }
        elif (n |> starts_with("struct ")) { n = n |> slice(7); }
        elif (n |> starts_with("class "))  { n = n |> slice(6); }
        else { break; }
    }
    return n
}

// True if the (canonical) type, or anything it points to, is an unbindable type.
def uses_unbindable_type(var t : CXType) : bool {
    var c = clang_getCanonicalType(t)
    if (c.kind == CXTypeKind.Pointer) {
        return uses_unbindable_type(clang_getPointeeType(c));
    }
    let name = stripped_type_name(string(clang_getTypeSpelling(c)))
    return UNBINDABLE_TYPE_NAMES?[name] ?? false
}

// True if a function's result or any argument involves an unbindable type.
def function_uses_unbindable_type(var c : CXCursor) : bool {
    var fun_type = clang_getCursorType(c)
    if (uses_unbindable_type(clang_getResultType(fun_type))) { return true; }
    let narg = clang_Cursor_getNumArguments(c)
    for (ai in urange(narg)) {
        var arg_type = clang_getCursorType(clang_Cursor_getArgument(c, ai))
        if (uses_unbindable_type(arg_type)) { return true; }
    }
    return false
}

// Struct types that should cause any function using them to be skipped.
// _iobuf is FILE* on UCRT/Windows; there is no daslang typeFactory for it.
let SKIP_STRUCT_TYPES <- {
    "_iobuf" => true
}

class NotcursesGen : CppGenBind {
    override func_to_stdout = false
    override generate_constant_decl = true
    override include_parse_file = false  // we emit the correct path in generateModuleNeedHPrefix

    def NotcursesGen {
        bind_root       = "{PROJECT_SRC}/notcurses"
        bind_module     = "dasNotcurses"
        bind_das_module = "notcurses"
        func_per_chunk  = 30
        var args <- make_args([])
        init_args("notcurses.h", NOTCURSES_INC, args)
        setDefaultFiles()
        openAllFiles()
    }

    def override generateModuleNeedHPrefix {
        fprint(module_need_h_file, "#include \"notcurses_ffi.h\"\n")
    }

    def override generateModuleNeedH {
        module_need_h_file |> fwrite("#pragma once\n")
        generateModuleNeedHPrefix()
        module_need_h_file |> fwrite("#include \"{bind_module}.enum.decl.inc\"\n")
        module_need_h_file |> fwrite("#include \"{bind_module}.enum.decl.cast.inc\"\n")
        module_need_h_file |> fwrite("#include \"{bind_module}.struct.decl.inc\"\n")
        module_need_h_file |> fwrite("namespace das \{\n")
        module_need_h_file |> fwrite("\t#include \"{bind_module}.struct.cast.inc\"\n")
        module_need_h_file |> fwrite("\}\n\n")
    }

    // Only process declarations from notcurses.h itself (not nckeys.h, ncport.h etc.)
    def override skip_file(fname : string) : bool {
        return empty(fname) || !ends_with(fname, "notcurses/notcurses.h") || !contains(fname, "vendors/notcurses/include/")
    }

    def override skip_struct(name : string) : bool {
        return SKIP_STRUCT_TYPES?[name] ?? false
    }

    def override skip_function(var c : CXCursor) : bool {
        if (AnyGenBind`skip_anyFunction(self, c, false)) { return true; }
        return function_uses_unbindable_type(c)
    }
}

class NcdirectGen : CppGenBind {
    override func_to_stdout = false
    override generate_constant_decl = true
    override include_parse_file = false  // we emit the correct path in generateModuleNeedHPrefix

    def NcdirectGen {
        bind_root       = "{PROJECT_SRC}/ncdirect"
        bind_module     = "dasNcdirect"
        bind_das_module = "ncdirect"
        func_per_chunk  = 30
        var args <- make_args([])
        init_args("direct.h", NOTCURSES_INC, args)
        // All types from notcurses.h are already defined in the notcurses module;
        // mark them so the binder does not re-emit MAKE_EXTERNAL_TYPE_FACTORY for them.
        already_defined["notcurses"]       = true
        already_defined["ncplane"]         = true
        already_defined["ncvisual"]        = true
        already_defined["ncuplot"]         = true
        already_defined["ncdplot"]         = true
        already_defined["ncprogbar"]       = true
        already_defined["ncfdplane"]       = true
        already_defined["ncsubproc"]       = true
        already_defined["ncselector"]      = true
        already_defined["ncmultiselector"] = true
        already_defined["ncreader"]        = true
        already_defined["ncfadectx"]       = true
        already_defined["nctablet"]        = true
        already_defined["ncreel"]          = true
        already_defined["nctab"]           = true
        already_defined["nctabbed"]        = true
        already_defined["ncdirect"]        = true
        already_defined["nccell"]          = true
        already_defined["notcurses_options"] = true
        already_defined["ncinput"]         = true
        already_defined["ncplane_options"] = true
        already_defined["ncpalette"]       = true
        already_defined["nccapabilities"]  = true
        already_defined["ncstats"]         = true
        already_defined["ncvgeom"]         = true
        already_defined["ncreel_options"]  = true
        already_defined["ncselector_options"] = true
        already_defined["ncmultiselector_options"] = true
        already_defined["nctree_options"]  = true
        already_defined["ncmenu_options"]  = true
        already_defined["ncprogbar_options"] = true
        already_defined["nctabbed_options"] = true
        already_defined["ncplot_options"]  = true
        already_defined["ncfdplane_options"] = true
        already_defined["ncsubproc_options"] = true
        already_defined["ncreader_options"] = true
        already_defined["ncvisual_options"] = true
        require_modules |> push("notcurses")
        setDefaultFiles()
        openAllFiles()
    }

    // Allow only files under the notcurses include tree; reject all others.
    // Empty fname means clang couldn't determine the source file (e.g. built-in or
    // an UCRT header included without a recorded location) — skip those too.
    def override skip_file(fname : string) : bool {
        return empty(fname) || !contains(fname, "vendors/notcurses/include/")
    }

    def override generateModuleNeedHPrefix {
        fprint(module_need_h_file, "#include \"ncdirect_ffi.h\"\n")
        // notcurses types used by ncdirect are owned by the dasNotcurses module
        // (marked already_defined above), so the binder emits no typeFactory for
        // them. Provide one here so makeType<T*> resolves; make() looks the handle
        // up by name in the shared library at runtime (no link dependency).
        fprint(module_need_h_file, "#include \"notcurses_type_factories.h\"\n")
    }

    def override generateModuleNeedH {
        module_need_h_file |> fwrite("#pragma once\n")
        generateModuleNeedHPrefix()
        module_need_h_file |> fwrite("#include \"{bind_module}.enum.decl.inc\"\n")
        module_need_h_file |> fwrite("#include \"{bind_module}.enum.decl.cast.inc\"\n")
        module_need_h_file |> fwrite("#include \"{bind_module}.struct.decl.inc\"\n")
        module_need_h_file |> fwrite("namespace das \{\n")
        module_need_h_file |> fwrite("\t#include \"{bind_module}.struct.cast.inc\"\n")
        module_need_h_file |> fwrite("\}\n\n")
    }

    def override skip_struct(name : string) : bool {
        return SKIP_STRUCT_TYPES?[name] ?? false
    }

    def override skip_function(var c : CXCursor) : bool {
        if (AnyGenBind`skip_anyFunction(self, c, false)) { return true; }
        // Reject functions not declared in the notcurses include tree.
        // clang_getCursorLocationFullPath gives the full path regardless of prevFileName.
        let loc = clang_getCursorLocationFullPath(c)
        if (!contains(loc, "notcurses/")) { return true; }
        return function_uses_unbindable_type(c)
    }
}

def run_gen(var gen : CppGenBind?) {
    defer() { unsafe { delete gen; } }
    gen->generate()
}

[export]
def main {
    var argv <- get_command_line_arguments()
    // argv[1] is the script path; resolve to absolute so all derived paths are absolute.
    let script_abs  = get_full_file_name(argv[1])
    let repo_root   = dir_name(dir_name(script_abs))
    PROJECT_SRC        = "{repo_root}/src"
    NOTCURSES_INC_ROOT = "{repo_root}/vendors/notcurses/include/"
    NOTCURSES_INC      = "{NOTCURSES_INC_ROOT}notcurses/"
    mkdir("{PROJECT_SRC}/notcurses")
    mkdir("{PROJECT_SRC}/ncdirect")
    run_gen(new NotcursesGen())
    run_gen(new NcdirectGen())
}
