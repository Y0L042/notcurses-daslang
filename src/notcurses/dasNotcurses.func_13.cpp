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
void Module_dasNotcurses::initFunctions_13() {
// from notcurses.h:3664:1
	makeExtern< unsigned int (*)(unsigned int,unsigned int,unsigned int) , ncpixel , SimNode_ExtFuncCall >(lib,"ncpixel","ncpixel")
		->args({"r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3678:1
	makeExtern< int (*)(unsigned int *,unsigned int,unsigned int,unsigned int) , ncpixel_set_rgb8 , SimNode_ExtFuncCall >(lib,"ncpixel_set_rgb8","ncpixel_set_rgb8")
		->args({"pixel","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3721:26
	makeExtern< ncreel * (*)(ncplane *,const ncreel_options *) , ncreel_create , SimNode_ExtFuncCall >(lib,"ncreel_create","ncreel_create")
		->args({"n","popts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3725:21
	makeExtern< ncplane * (*)(ncreel *) , ncreel_plane , SimNode_ExtFuncCall >(lib,"ncreel_plane","ncreel_plane")
		->args({"nr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3747:9
	makeExtern< int (*)(const ncreel *) , ncreel_tabletcount , SimNode_ExtFuncCall >(lib,"ncreel_tabletcount","ncreel_tabletcount")
		->args({"nr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3752:9
	makeExtern< int (*)(ncreel *,nctablet *) , ncreel_del , SimNode_ExtFuncCall >(lib,"ncreel_del","ncreel_del")
		->args({"nr","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3758:9
	makeExtern< int (*)(ncreel *) , ncreel_redraw , SimNode_ExtFuncCall >(lib,"ncreel_redraw","ncreel_redraw")
		->args({"nr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3767:10
	makeExtern< bool (*)(ncreel *,const ncinput *) , ncreel_offer_input , SimNode_ExtFuncCall >(lib,"ncreel_offer_input","ncreel_offer_input")
		->args({"nr","ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3772:22
	makeExtern< nctablet * (*)(ncreel *) , ncreel_focused , SimNode_ExtFuncCall >(lib,"ncreel_focused","ncreel_focused")
		->args({"nr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3776:22
	makeExtern< nctablet * (*)(ncreel *) , ncreel_next , SimNode_ExtFuncCall >(lib,"ncreel_next","ncreel_next")
		->args({"nr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3780:22
	makeExtern< nctablet * (*)(ncreel *) , ncreel_prev , SimNode_ExtFuncCall >(lib,"ncreel_prev","ncreel_prev")
		->args({"nr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3784:10
	makeExtern< void (*)(ncreel *) , ncreel_destroy , SimNode_ExtFuncCall >(lib,"ncreel_destroy","ncreel_destroy")
		->args({"nr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3787:11
	makeExtern< void * (*)(nctablet *) , nctablet_userptr , SimNode_ExtFuncCall >(lib,"nctablet_userptr","nctablet_userptr")
		->args({"t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3790:21
	makeExtern< ncplane * (*)(nctablet *) , nctablet_plane , SimNode_ExtFuncCall >(lib,"nctablet_plane","nctablet_plane")
		->args({"t"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3817:17
	makeExtern< const char * (*)(uintmax_t,size_t,uintmax_t,char *,int,uintmax_t,int) , ncnmetric , SimNode_ExtFuncCall >(lib,"ncnmetric","ncnmetric")
		->args({"val","s","decimal","buf","omitdec","mult","uprefix"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3845:1
	makeExtern< const char * (*)(uintmax_t,uintmax_t,char *,int) , ncqprefix , SimNode_ExtFuncCall >(lib,"ncqprefix","ncqprefix")
		->args({"val","decimal","buf","omitdec"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3851:1
	makeExtern< const char * (*)(uintmax_t,uintmax_t,char *,int) , nciprefix , SimNode_ExtFuncCall >(lib,"nciprefix","nciprefix")
		->args({"val","decimal","buf","omitdec"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3857:1
	makeExtern< const char * (*)(uintmax_t,uintmax_t,char *,int) , ncbprefix , SimNode_ExtFuncCall >(lib,"ncbprefix","ncbprefix")
		->args({"val","decimal","buf","omitdec"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3864:9
	makeExtern< int (*)(const notcurses *,unsigned int *) , notcurses_default_foreground , SimNode_ExtFuncCall >(lib,"notcurses_default_foreground","notcurses_default_foreground")
		->args({"nc","fg"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3871:9
	makeExtern< int (*)(const notcurses *,unsigned int *) , notcurses_default_background , SimNode_ExtFuncCall >(lib,"notcurses_default_background","notcurses_default_background")
		->args({"nc","bg"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3878:9
	makeExtern< int (*)(notcurses *,int,int) , notcurses_cursor_enable , SimNode_ExtFuncCall >(lib,"notcurses_cursor_enable","notcurses_cursor_enable")
		->args({"nc","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3883:9
	makeExtern< int (*)(notcurses *) , notcurses_cursor_disable , SimNode_ExtFuncCall >(lib,"notcurses_cursor_disable","notcurses_cursor_disable")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3887:9
	makeExtern< int (*)(const notcurses *,int *,int *) , notcurses_cursor_yx , SimNode_ExtFuncCall >(lib,"notcurses_cursor_yx","notcurses_cursor_yx")
		->args({"nc","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3891:10
	makeExtern< void (*)(ncplane *) , ncplane_greyscale , SimNode_ExtFuncCall >(lib,"ncplane_greyscale","ncplane_greyscale")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3935:30
	makeExtern< ncselector * (*)(ncplane *,const ncselector_options *) , ncselector_create , SimNode_ExtFuncCall >(lib,"ncselector_create","ncselector_create")
		->args({"n","opts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3940:9
	makeExtern< int (*)(ncselector *,const ncselector_item *) , ncselector_additem , SimNode_ExtFuncCall >(lib,"ncselector_additem","ncselector_additem")
		->args({"n","item"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3941:9
	makeExtern< int (*)(ncselector *,const char *) , ncselector_delitem , SimNode_ExtFuncCall >(lib,"ncselector_delitem","ncselector_delitem")
		->args({"n","item"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3944:17
	makeExtern< const char * (*)(const ncselector *) , ncselector_selected , SimNode_ExtFuncCall >(lib,"ncselector_selected","ncselector_selected")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3948:21
	makeExtern< ncplane * (*)(ncselector *) , ncselector_plane , SimNode_ExtFuncCall >(lib,"ncselector_plane","ncselector_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3953:17
	makeExtern< const char * (*)(ncselector *) , ncselector_previtem , SimNode_ExtFuncCall >(lib,"ncselector_previtem","ncselector_previtem")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

