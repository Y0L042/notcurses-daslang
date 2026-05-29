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
namespace das {
#include "dasNotcurses.func.aot.decl.inc"
void Module_dasNotcurses::initFunctions_17() {
// from notcurses.h:4640:21
	makeExtern< ncplane * (*)(ncreader *) , ncreader_plane , SimNode_ExtFuncCall >(lib,"ncreader_plane","ncreader_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4646:10
	makeExtern< bool (*)(ncreader *,const ncinput *) , ncreader_offer_input , SimNode_ExtFuncCall >(lib,"ncreader_offer_input","ncreader_offer_input")
		->args({"n","ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4651:9
	makeExtern< int (*)(ncreader *) , ncreader_move_left , SimNode_ExtFuncCall >(lib,"ncreader_move_left","ncreader_move_left")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4653:9
	makeExtern< int (*)(ncreader *) , ncreader_move_right , SimNode_ExtFuncCall >(lib,"ncreader_move_right","ncreader_move_right")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4655:9
	makeExtern< int (*)(ncreader *) , ncreader_move_up , SimNode_ExtFuncCall >(lib,"ncreader_move_up","ncreader_move_up")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4657:9
	makeExtern< int (*)(ncreader *) , ncreader_move_down , SimNode_ExtFuncCall >(lib,"ncreader_move_down","ncreader_move_down")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4662:9
	makeExtern< int (*)(ncreader *,const char *) , ncreader_write_egc , SimNode_ExtFuncCall >(lib,"ncreader_write_egc","ncreader_write_egc")
		->args({"n","egc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4666:11
	makeExtern< char * (*)(const ncreader *) , ncreader_contents , SimNode_ExtFuncCall >(lib,"ncreader_contents","ncreader_contents")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4671:10
	makeExtern< void (*)(ncreader *,char **) , ncreader_destroy , SimNode_ExtFuncCall >(lib,"ncreader_destroy","ncreader_destroy")
		->args({"n","contents"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4674:17
	makeExtern< char * (*)() , notcurses_accountname , SimNode_ExtFuncCall >(lib,"notcurses_accountname","notcurses_accountname")
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4677:17
	makeExtern< char * (*)() , notcurses_hostname , SimNode_ExtFuncCall >(lib,"notcurses_hostname","notcurses_hostname")
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4680:17
	makeExtern< char * (*)() , notcurses_osversion , SimNode_ExtFuncCall >(lib,"notcurses_osversion","notcurses_osversion")
		->addToModule(*this, SideEffects::worstDefault);
}
}

