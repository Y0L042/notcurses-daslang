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
void Module_dasNotcurses::initFunctions_15() {
// from notcurses.h:4191:10
	makeExtern< bool (*)(ncmenu *,const ncinput *) , ncmenu_offer_input , SimNode_ExtFuncCall >(lib,"ncmenu_offer_input","ncmenu_offer_input")
		->args({"n","nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4195:10
	makeExtern< void (*)(ncmenu *) , ncmenu_destroy , SimNode_ExtFuncCall >(lib,"ncmenu_destroy","ncmenu_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4219:29
	makeExtern< ncprogbar * (*)(ncplane *,const ncprogbar_options *) , ncprogbar_create , SimNode_ExtFuncCall >(lib,"ncprogbar_create","ncprogbar_create")
		->args({"n","opts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4223:21
	makeExtern< ncplane * (*)(ncprogbar *) , ncprogbar_plane , SimNode_ExtFuncCall >(lib,"ncprogbar_plane","ncprogbar_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4227:9
	makeExtern< int (*)(ncprogbar *,double) , ncprogbar_set_progress , SimNode_ExtFuncCall >(lib,"ncprogbar_set_progress","ncprogbar_set_progress")
		->args({"n","p"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4231:12
	makeExtern< double (*)(const ncprogbar *) , ncprogbar_progress , SimNode_ExtFuncCall >(lib,"ncprogbar_progress","ncprogbar_progress")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4235:10
	makeExtern< void (*)(ncprogbar *) , ncprogbar_destroy , SimNode_ExtFuncCall >(lib,"ncprogbar_destroy","ncprogbar_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4261:28
	makeExtern< nctabbed * (*)(ncplane *,const nctabbed_options *) , nctabbed_create , SimNode_ExtFuncCall >(lib,"nctabbed_create","nctabbed_create")
		->args({"n","opts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4267:10
	makeExtern< void (*)(nctabbed *) , nctabbed_destroy , SimNode_ExtFuncCall >(lib,"nctabbed_destroy","nctabbed_destroy")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4272:10
	makeExtern< void (*)(nctabbed *) , nctabbed_redraw , SimNode_ExtFuncCall >(lib,"nctabbed_redraw","nctabbed_redraw")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4278:10
	makeExtern< void (*)(nctabbed *) , nctabbed_ensure_selected_header_visible , SimNode_ExtFuncCall >(lib,"nctabbed_ensure_selected_header_visible","nctabbed_ensure_selected_header_visible")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4282:19
	makeExtern< nctab * (*)(nctabbed *) , nctabbed_selected , SimNode_ExtFuncCall >(lib,"nctabbed_selected","nctabbed_selected")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4286:19
	makeExtern< nctab * (*)(nctabbed *) , nctabbed_leftmost , SimNode_ExtFuncCall >(lib,"nctabbed_leftmost","nctabbed_leftmost")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4290:9
	makeExtern< int (*)(nctabbed *) , nctabbed_tabcount , SimNode_ExtFuncCall >(lib,"nctabbed_tabcount","nctabbed_tabcount")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4294:21
	makeExtern< ncplane * (*)(nctabbed *) , nctabbed_plane , SimNode_ExtFuncCall >(lib,"nctabbed_plane","nctabbed_plane")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4298:21
	makeExtern< ncplane * (*)(nctabbed *) , nctabbed_content_plane , SimNode_ExtFuncCall >(lib,"nctabbed_content_plane","nctabbed_content_plane")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4306:17
	makeExtern< const char * (*)(nctab *) , nctab_name , SimNode_ExtFuncCall >(lib,"nctab_name","nctab_name")
		->args({"t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4310:9
	makeExtern< int (*)(nctab *) , nctab_name_width , SimNode_ExtFuncCall >(lib,"nctab_name_width","nctab_name_width")
		->args({"t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4314:11
	makeExtern< void * (*)(nctab *) , nctab_userptr , SimNode_ExtFuncCall >(lib,"nctab_userptr","nctab_userptr")
		->args({"t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4318:19
	makeExtern< nctab * (*)(nctab *) , nctab_next , SimNode_ExtFuncCall >(lib,"nctab_next","nctab_next")
		->args({"t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4322:19
	makeExtern< nctab * (*)(nctab *) , nctab_prev , SimNode_ExtFuncCall >(lib,"nctab_prev","nctab_prev")
		->args({"t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4344:9
	makeExtern< int (*)(nctabbed *,nctab *) , nctabbed_del , SimNode_ExtFuncCall >(lib,"nctabbed_del","nctabbed_del")
		->args({"nt","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4350:9
	makeExtern< int (*)(nctabbed *,nctab *,nctab *,nctab *) , nctab_move , SimNode_ExtFuncCall >(lib,"nctab_move","nctab_move")
		->args({"nt","t","after","before"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4355:10
	makeExtern< void (*)(nctabbed *,nctab *) , nctab_move_right , SimNode_ExtFuncCall >(lib,"nctab_move_right","nctab_move_right")
		->args({"nt","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4359:10
	makeExtern< void (*)(nctabbed *,nctab *) , nctab_move_left , SimNode_ExtFuncCall >(lib,"nctab_move_left","nctab_move_left")
		->args({"nt","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4365:10
	makeExtern< void (*)(nctabbed *,int) , nctabbed_rotate , SimNode_ExtFuncCall >(lib,"nctabbed_rotate","nctabbed_rotate")
		->args({"nt","amt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4370:19
	makeExtern< nctab * (*)(nctabbed *) , nctabbed_next , SimNode_ExtFuncCall >(lib,"nctabbed_next","nctabbed_next")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4375:19
	makeExtern< nctab * (*)(nctabbed *) , nctabbed_prev , SimNode_ExtFuncCall >(lib,"nctabbed_prev","nctabbed_prev")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4379:19
	makeExtern< nctab * (*)(nctabbed *,nctab *) , nctabbed_select , SimNode_ExtFuncCall >(lib,"nctabbed_select","nctabbed_select")
		->args({"nt","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4384:10
	makeExtern< void (*)(nctabbed *,unsigned long long *,unsigned long long *,unsigned long long *) , nctabbed_channels , SimNode_ExtFuncCall >(lib,"nctabbed_channels","nctabbed_channels")
		->args({"nt","hdrchan","selchan","sepchan"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

