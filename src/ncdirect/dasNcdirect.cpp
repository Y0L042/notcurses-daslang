// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "dasNcdirect.h"
#include "need_dasNcdirect.h"
#include "dasNcdirect.struct.impl.inc"
namespace das {
#include "dasNcdirect.enum.class.inc"
#include "dasNcdirect.struct.class.inc"
#include "dasNcdirect.func.aot.inc"
Module_dasNcdirect::Module_dasNcdirect() : Module("ncdirect") {
}
bool Module_dasNcdirect::initDependencies() {
	if ( initialized ) return true;
	auto mod_notcurses = Module::require("notcurses");
	if ( !mod_notcurses ) return false;
	if ( !mod_notcurses->initDependencies() ) return false;
	initialized = true;
	lib.addModule(this);
	lib.addBuiltInModule();
	lib.addModule(mod_notcurses);
	#include "dasNcdirect.const.inc"
	#include "dasNcdirect.enum.add.inc"
	#include "dasNcdirect.dummy.add.inc"
	#include "dasNcdirect.struct.add.inc"
	#include "dasNcdirect.struct.postadd.inc"
	#include "dasNcdirect.alias.add.inc"
	#include "dasNcdirect.func.reg.inc"
	initMain();
	return true;
}
REGISTER_DYN_MODULE(Module_dasNcdirect,Module_dasNcdirect);
}
REGISTER_MODULE_IN_NAMESPACE(Module_dasNcdirect,das);

