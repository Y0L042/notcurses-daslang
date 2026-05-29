// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "dasNotcurses.h"
#include "need_dasNotcurses.h"
#include "dasNotcurses.struct.impl.inc"
namespace das {
#include "dasNotcurses.enum.class.inc"
#include "dasNotcurses.struct.class.inc"
#include "dasNotcurses.func.aot.inc"
Module_dasNotcurses::Module_dasNotcurses() : Module("notcurses") {
}
bool Module_dasNotcurses::initDependencies() {
	if ( initialized ) return true;
	initialized = true;
	lib.addModule(this);
	lib.addBuiltInModule();
	#include "dasNotcurses.const.inc"
	#include "dasNotcurses.enum.add.inc"
	#include "dasNotcurses.dummy.add.inc"
	#include "dasNotcurses.struct.add.inc"
	#include "dasNotcurses.struct.postadd.inc"
	#include "dasNotcurses.alias.add.inc"
	#include "dasNotcurses.func.reg.inc"
	initMain();
	return true;
}
REGISTER_DYN_MODULE(Module_dasNotcurses,Module_dasNotcurses);
}
REGISTER_MODULE_IN_NAMESPACE(Module_dasNotcurses,das);

