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
void Module_dasNotcurses::initFunctions_3() {
// from notcurses.h:786:1
	makeExtern< unsigned short (*)(const nccell *) , nccell_styles , SimNode_ExtFuncCall >(lib,"nccell_styles","nccell_styles")
		->args({"c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:793:1
	makeExtern< void (*)(nccell *,unsigned int) , nccell_on_styles , SimNode_ExtFuncCall >(lib,"nccell_on_styles","nccell_on_styles")
		->args({"c","stylebits"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:799:1
	makeExtern< void (*)(nccell *,unsigned int) , nccell_off_styles , SimNode_ExtFuncCall >(lib,"nccell_off_styles","nccell_off_styles")
		->args({"c","stylebits"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:805:1
	makeExtern< void (*)(nccell *) , nccell_set_fg_default , SimNode_ExtFuncCall >(lib,"nccell_set_fg_default","nccell_set_fg_default")
		->args({"c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:811:1
	makeExtern< void (*)(nccell *) , nccell_set_bg_default , SimNode_ExtFuncCall >(lib,"nccell_set_bg_default","nccell_set_bg_default")
		->args({"c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:816:1
	makeExtern< int (*)(nccell *,unsigned int) , nccell_set_fg_alpha , SimNode_ExtFuncCall >(lib,"nccell_set_fg_alpha","nccell_set_fg_alpha")
		->args({"c","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:821:1
	makeExtern< int (*)(nccell *,unsigned int) , nccell_set_bg_alpha , SimNode_ExtFuncCall >(lib,"nccell_set_bg_alpha","nccell_set_bg_alpha")
		->args({"c","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:826:1
	makeExtern< uint64_t (*)(nccell *,unsigned int) , nccell_set_bchannel , SimNode_ExtFuncCall >(lib,"nccell_set_bchannel","nccell_set_bchannel")
		->args({"c","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:831:1
	makeExtern< uint64_t (*)(nccell *,unsigned int) , nccell_set_fchannel , SimNode_ExtFuncCall >(lib,"nccell_set_fchannel","nccell_set_fchannel")
		->args({"c","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:836:1
	makeExtern< uint64_t (*)(nccell *,uint64_t) , nccell_set_channels , SimNode_ExtFuncCall >(lib,"nccell_set_channels","nccell_set_channels")
		->args({"c","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:842:1
	makeExtern< bool (*)(const nccell *) , nccell_double_wide_p , SimNode_ExtFuncCall >(lib,"nccell_double_wide_p","nccell_double_wide_p")
		->args({"c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:848:1
	makeExtern< bool (*)(const nccell *) , nccell_wide_right_p , SimNode_ExtFuncCall >(lib,"nccell_wide_right_p","nccell_wide_right_p")
		->args({"c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:854:1
	makeExtern< bool (*)(const nccell *) , nccell_wide_left_p , SimNode_ExtFuncCall >(lib,"nccell_wide_left_p","nccell_wide_left_p")
		->args({"c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:861:1
	makeExtern< const char * (*)(const ncplane *,const nccell *) , nccell_extended_gcluster , SimNode_ExtFuncCall >(lib,"nccell_extended_gcluster","nccell_extended_gcluster")
		->args({"n","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:864:1
	makeExtern< uint64_t (*)(const nccell *) , nccell_channels , SimNode_ExtFuncCall >(lib,"nccell_channels","nccell_channels")
		->args({"c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:871:1
	makeExtern< unsigned int (*)(const nccell *) , nccell_bchannel , SimNode_ExtFuncCall >(lib,"nccell_bchannel","nccell_bchannel")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:878:1
	makeExtern< unsigned int (*)(const nccell *) , nccell_fchannel , SimNode_ExtFuncCall >(lib,"nccell_fchannel","nccell_fchannel")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:885:1
	makeExtern< unsigned int (*)(const nccell *) , nccell_cols , SimNode_ExtFuncCall >(lib,"nccell_cols","nccell_cols")
		->args({"c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:892:1
	makeExtern< char * (*)(const ncplane *,const nccell *) , nccell_strdup , SimNode_ExtFuncCall >(lib,"nccell_strdup","nccell_strdup")
		->args({"n","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:898:1
	makeExtern< char * (*)(const ncplane *,const nccell *,unsigned short *,unsigned long long *) , nccell_extract , SimNode_ExtFuncCall >(lib,"nccell_extract","nccell_extract")
		->args({"n","c","stylemask","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:915:1
	makeExtern< bool (*)(const ncplane *,const nccell *,const ncplane *,const nccell *) , nccellcmp , SimNode_ExtFuncCall >(lib,"nccellcmp","nccellcmp")
		->args({"n1","c1","n2","c2"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:929:1
	makeExtern< int (*)(ncplane *,nccell *,char) , nccell_load_char , SimNode_ExtFuncCall >(lib,"nccell_load_char","nccell_load_char")
		->args({"n","c","ch"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:939:1
	makeExtern< int (*)(ncplane *,nccell *,unsigned int) , nccell_load_egc32 , SimNode_ExtFuncCall >(lib,"nccell_load_egc32","nccell_load_egc32")
		->args({"n","c","egc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:950:1
	makeExtern< int (*)(ncplane *,nccell *,unsigned int) , nccell_load_ucs32 , SimNode_ExtFuncCall >(lib,"nccell_load_ucs32","nccell_load_ucs32")
		->args({"n","c","u"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1065:9
	makeExtern< int (*)(const char *,notcurses_options *) , notcurses_lex_margins , SimNode_ExtFuncCall >(lib,"notcurses_lex_margins","notcurses_lex_margins")
		->args({"op","opts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1069:9
	makeExtern< int (*)(const char *,ncblitter_e *) , notcurses_lex_blitter , SimNode_ExtFuncCall >(lib,"notcurses_lex_blitter","notcurses_lex_blitter")
		->args({"op","blitter"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1073:17
	makeExtern< const char * (*)(ncblitter_e) , notcurses_str_blitter , SimNode_ExtFuncCall >(lib,"notcurses_str_blitter","notcurses_str_blitter")
		->args({"blitter"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1077:9
	makeExtern< int (*)(const char *,ncscale_e *) , notcurses_lex_scalemode , SimNode_ExtFuncCall >(lib,"notcurses_lex_scalemode","notcurses_lex_scalemode")
		->args({"op","scalemode"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1081:17
	makeExtern< const char * (*)(ncscale_e) , notcurses_str_scalemode , SimNode_ExtFuncCall >(lib,"notcurses_str_scalemode","notcurses_str_scalemode")
		->args({"scalemode"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1094:9
	makeExtern< int (*)(notcurses *) , notcurses_stop , SimNode_ExtFuncCall >(lib,"notcurses_stop","notcurses_stop")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

