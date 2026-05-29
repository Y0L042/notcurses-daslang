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
namespace das {
#include "dasNcdirect.func.aot.decl.inc"
void Module_dasNcdirect::initFunctions_3() {
// from direct.h:393:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_cansextant , SimNode_ExtFuncCall >(lib,"ncdirect_cansextant","ncdirect_cansextant")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:399:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canoctant , SimNode_ExtFuncCall >(lib,"ncdirect_canoctant","ncdirect_canoctant")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:405:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canbraille , SimNode_ExtFuncCall >(lib,"ncdirect_canbraille","ncdirect_canbraille")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:411:10
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canget_cursor , SimNode_ExtFuncCall >(lib,"ncdirect_canget_cursor","ncdirect_canget_cursor")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

