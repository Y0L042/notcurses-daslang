#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "dasNcdirect.h"
#include "need_dasNcdirect.h"

namespace das {

ModuleAotType Module_dasNcdirect::aotRequire(TextWriter & tw) const {
    tw << "#include <notcurses/direct.h>\n";
    return ModuleAotType::cpp;
}

void Module_dasNcdirect::initMain() {
    // No manual constants needed for ncdirect — all direct.h #defines are
    // simple integer literals that the cbind_boost regex extractor handles.
}

} // namespace das
