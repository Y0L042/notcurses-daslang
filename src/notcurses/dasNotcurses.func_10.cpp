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
void Module_dasNotcurses::initFunctions_10() {
// from notcurses.h:2838:1
	makeExtern< int (*)(nccell *,unsigned int) , nccell_set_fg_rgb , SimNode_ExtFuncCall >(lib,"nccell_set_fg_rgb","nccell_set_fg_rgb")
		->args({"c","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2845:1
	makeExtern< int (*)(nccell *,unsigned int) , nccell_set_fg_palindex , SimNode_ExtFuncCall >(lib,"nccell_set_fg_palindex","nccell_set_fg_palindex")
		->args({"cl","idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2850:1
	makeExtern< unsigned int (*)(const nccell *) , nccell_fg_palindex , SimNode_ExtFuncCall >(lib,"nccell_fg_palindex","nccell_fg_palindex")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2857:1
	makeExtern< int (*)(nccell *,unsigned int,unsigned int,unsigned int) , nccell_set_bg_rgb8 , SimNode_ExtFuncCall >(lib,"nccell_set_bg_rgb8","nccell_set_bg_rgb8")
		->args({"cl","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2863:1
	makeExtern< void (*)(nccell *,int,int,int) , nccell_set_bg_rgb8_clipped , SimNode_ExtFuncCall >(lib,"nccell_set_bg_rgb8_clipped","nccell_set_bg_rgb8_clipped")
		->args({"cl","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2870:1
	makeExtern< int (*)(nccell *,unsigned int) , nccell_set_bg_rgb , SimNode_ExtFuncCall >(lib,"nccell_set_bg_rgb","nccell_set_bg_rgb")
		->args({"c","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2877:1
	makeExtern< int (*)(nccell *,unsigned int) , nccell_set_bg_palindex , SimNode_ExtFuncCall >(lib,"nccell_set_bg_palindex","nccell_set_bg_palindex")
		->args({"cl","idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2882:1
	makeExtern< unsigned int (*)(const nccell *) , nccell_bg_palindex , SimNode_ExtFuncCall >(lib,"nccell_bg_palindex","nccell_bg_palindex")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2888:1
	makeExtern< bool (*)(const nccell *) , nccell_fg_default_p , SimNode_ExtFuncCall >(lib,"nccell_fg_default_p","nccell_fg_default_p")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2893:1
	makeExtern< bool (*)(const nccell *) , nccell_fg_palindex_p , SimNode_ExtFuncCall >(lib,"nccell_fg_palindex_p","nccell_fg_palindex_p")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2901:1
	makeExtern< bool (*)(const nccell *) , nccell_bg_default_p , SimNode_ExtFuncCall >(lib,"nccell_bg_default_p","nccell_bg_default_p")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2906:1
	makeExtern< bool (*)(const nccell *) , nccell_bg_palindex_p , SimNode_ExtFuncCall >(lib,"nccell_bg_palindex_p","nccell_bg_palindex_p")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2913:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_bchannel , SimNode_ExtFuncCall >(lib,"ncplane_bchannel","ncplane_bchannel")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2920:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_fchannel , SimNode_ExtFuncCall >(lib,"ncplane_fchannel","ncplane_fchannel")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2926:10
	makeExtern< void (*)(ncplane *,uint64_t) , ncplane_set_channels , SimNode_ExtFuncCall >(lib,"ncplane_set_channels","ncplane_set_channels")
		->args({"n","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2931:14
	makeExtern< uint64_t (*)(ncplane *,unsigned int) , ncplane_set_bchannel , SimNode_ExtFuncCall >(lib,"ncplane_set_bchannel","ncplane_set_bchannel")
		->args({"n","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2936:14
	makeExtern< uint64_t (*)(ncplane *,unsigned int) , ncplane_set_fchannel , SimNode_ExtFuncCall >(lib,"ncplane_set_fchannel","ncplane_set_fchannel")
		->args({"n","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2941:10
	makeExtern< void (*)(ncplane *,unsigned int) , ncplane_set_styles , SimNode_ExtFuncCall >(lib,"ncplane_set_styles","ncplane_set_styles")
		->args({"n","stylebits"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2945:10
	makeExtern< void (*)(ncplane *,unsigned int) , ncplane_on_styles , SimNode_ExtFuncCall >(lib,"ncplane_on_styles","ncplane_on_styles")
		->args({"n","stylebits"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2949:10
	makeExtern< void (*)(ncplane *,unsigned int) , ncplane_off_styles , SimNode_ExtFuncCall >(lib,"ncplane_off_styles","ncplane_off_styles")
		->args({"n","stylebits"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2954:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_fg_rgb , SimNode_ExtFuncCall >(lib,"ncplane_fg_rgb","ncplane_fg_rgb")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2960:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_bg_rgb , SimNode_ExtFuncCall >(lib,"ncplane_bg_rgb","ncplane_bg_rgb")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2966:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_fg_alpha , SimNode_ExtFuncCall >(lib,"ncplane_fg_alpha","ncplane_fg_alpha")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2972:1
	makeExtern< bool (*)(const ncplane *) , ncplane_fg_default_p , SimNode_ExtFuncCall >(lib,"ncplane_fg_default_p","ncplane_fg_default_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2978:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_bg_alpha , SimNode_ExtFuncCall >(lib,"ncplane_bg_alpha","ncplane_bg_alpha")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2984:1
	makeExtern< bool (*)(const ncplane *) , ncplane_bg_default_p , SimNode_ExtFuncCall >(lib,"ncplane_bg_default_p","ncplane_bg_default_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2990:1
	makeExtern< unsigned int (*)(const ncplane *,unsigned int *,unsigned int *,unsigned int *) , ncplane_fg_rgb8 , SimNode_ExtFuncCall >(lib,"ncplane_fg_rgb8","ncplane_fg_rgb8")
		->args({"n","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2996:1
	makeExtern< unsigned int (*)(const ncplane *,unsigned int *,unsigned int *,unsigned int *) , ncplane_bg_rgb8 , SimNode_ExtFuncCall >(lib,"ncplane_bg_rgb8","ncplane_bg_rgb8")
		->args({"n","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3006:9
	makeExtern< int (*)(ncplane *,unsigned int,unsigned int,unsigned int) , ncplane_set_fg_rgb8 , SimNode_ExtFuncCall >(lib,"ncplane_set_fg_rgb8","ncplane_set_fg_rgb8")
		->args({"n","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3007:9
	makeExtern< int (*)(ncplane *,unsigned int,unsigned int,unsigned int) , ncplane_set_bg_rgb8 , SimNode_ExtFuncCall >(lib,"ncplane_set_bg_rgb8","ncplane_set_bg_rgb8")
		->args({"n","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

