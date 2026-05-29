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
void Module_dasNotcurses::initFunctions_9() {
// from notcurses.h:2319:1
	makeExtern< int (*)(ncplane *,const char *) , ncplane_putstr_stained , SimNode_ExtFuncCall >(lib,"ncplane_putstr_stained","ncplane_putstr_stained")
		->args({"n","gclusters"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2336:9
	makeExtern< int (*)(ncplane *,int,ncalign_e,size_t,const char *) , ncplane_putnstr_aligned , SimNode_ExtFuncCall >(lib,"ncplane_putnstr_aligned","ncplane_putnstr_aligned")
		->args({"n","y","align","s","str"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2346:1
	makeExtern< int (*)(ncplane *,int,int,size_t,const char *) , ncplane_putnstr_yx , SimNode_ExtFuncCall >(lib,"ncplane_putnstr_yx","ncplane_putnstr_yx")
		->args({"n","y","x","s","gclusters"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2370:1
	makeExtern< int (*)(ncplane *,size_t,const char *) , ncplane_putnstr , SimNode_ExtFuncCall >(lib,"ncplane_putnstr","ncplane_putnstr")
		->args({"n","s","gclustarr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2420:1
	makeExtern< int (*)(ncplane *,int,int,unsigned int) , ncplane_pututf32_yx , SimNode_ExtFuncCall >(lib,"ncplane_pututf32_yx","ncplane_pututf32_yx")
		->args({"n","y","x","u"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2577:9
	makeExtern< int (*)(ncplane *,int,ncalign_e,const char *,size_t *) , ncplane_puttext , SimNode_ExtFuncCall >(lib,"ncplane_puttext","ncplane_puttext")
		->args({"n","y","align","text","bytes"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2587:9
	makeExtern< int (*)(ncplane *,const nccell *,unsigned int,uint64_t,uint64_t) , ncplane_hline_interp , SimNode_ExtFuncCall >(lib,"ncplane_hline_interp","ncplane_hline_interp")
		->args({"n","c","len","c1","c2"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2592:1
	makeExtern< int (*)(ncplane *,const nccell *,unsigned int) , ncplane_hline , SimNode_ExtFuncCall >(lib,"ncplane_hline","ncplane_hline")
		->args({"n","c","len"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2596:9
	makeExtern< int (*)(ncplane *,const nccell *,unsigned int,uint64_t,uint64_t) , ncplane_vline_interp , SimNode_ExtFuncCall >(lib,"ncplane_vline_interp","ncplane_vline_interp")
		->args({"n","c","len","c1","c2"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2601:1
	makeExtern< int (*)(ncplane *,const nccell *,unsigned int) , ncplane_vline , SimNode_ExtFuncCall >(lib,"ncplane_vline","ncplane_vline")
		->args({"n","c","len"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2634:9
	makeExtern< int (*)(ncplane *,const nccell *,const nccell *,const nccell *,const nccell *,const nccell *,const nccell *,unsigned int,unsigned int,unsigned int) , ncplane_box , SimNode_ExtFuncCall >(lib,"ncplane_box","ncplane_box")
		->args({"n","ul","ur","ll","lr","hline","vline","ystop","xstop","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2643:1
	makeExtern< int (*)(ncplane *,const nccell *,const nccell *,const nccell *,const nccell *,const nccell *,const nccell *,unsigned int,unsigned int,unsigned int) , ncplane_box_sized , SimNode_ExtFuncCall >(lib,"ncplane_box_sized","ncplane_box_sized")
		->args({"n","ul","ur","ll","lr","hline","vline","ystop","xstop","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2654:1
	makeExtern< int (*)(ncplane *,const nccell *,const nccell *,const nccell *,const nccell *,const nccell *,const nccell *,unsigned int) , ncplane_perimeter , SimNode_ExtFuncCall >(lib,"ncplane_perimeter","ncplane_perimeter")
		->args({"n","ul","ur","ll","lr","hline","vline","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2671:9
	makeExtern< int (*)(ncplane *,int,int,const nccell *) , ncplane_polyfill_yx , SimNode_ExtFuncCall >(lib,"ncplane_polyfill_yx","ncplane_polyfill_yx")
		->args({"n","y","x","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2694:9
	makeExtern< int (*)(ncplane *,int,int,unsigned int,unsigned int,const char *,unsigned short,uint64_t,uint64_t,uint64_t,uint64_t) , ncplane_gradient , SimNode_ExtFuncCall >(lib,"ncplane_gradient","ncplane_gradient")
		->args({"n","y","x","ylen","xlen","egc","styles","ul","ur","ll","lr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2703:9
	makeExtern< int (*)(ncplane *,int,int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) , ncplane_gradient2x1 , SimNode_ExtFuncCall >(lib,"ncplane_gradient2x1","ncplane_gradient2x1")
		->args({"n","y","x","ylen","xlen","ul","ur","ll","lr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2715:9
	makeExtern< int (*)(ncplane *,int,int,unsigned int,unsigned int,unsigned short) , ncplane_format , SimNode_ExtFuncCall >(lib,"ncplane_format","ncplane_format")
		->args({"n","y","x","ylen","xlen","stylemask"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2726:9
	makeExtern< int (*)(ncplane *,int,int,unsigned int,unsigned int,uint64_t,uint64_t,uint64_t,uint64_t) , ncplane_stain , SimNode_ExtFuncCall >(lib,"ncplane_stain","ncplane_stain")
		->args({"n","y","x","ylen","xlen","ul","ur","ll","lr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2733:9
	makeExtern< int (*)(ncplane *,ncplane *) , ncplane_mergedown_simple , SimNode_ExtFuncCall >(lib,"ncplane_mergedown_simple","ncplane_mergedown_simple")
		->args({"src","dst"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2748:9
	makeExtern< int (*)(ncplane *,ncplane *,int,int,unsigned int,unsigned int,int,int) , ncplane_mergedown , SimNode_ExtFuncCall >(lib,"ncplane_mergedown","ncplane_mergedown")
		->args({"src","dst","begsrcy","begsrcx","leny","lenx","dsty","dstx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2759:10
	makeExtern< void (*)(ncplane *) , ncplane_erase , SimNode_ExtFuncCall >(lib,"ncplane_erase","ncplane_erase")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2783:9
	makeExtern< int (*)(ncplane *,int,int,int,int) , ncplane_erase_region , SimNode_ExtFuncCall >(lib,"ncplane_erase_region","ncplane_erase_region")
		->args({"n","ystart","xstart","ylen","xlen"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2789:1
	makeExtern< unsigned int (*)(const nccell *) , nccell_fg_rgb , SimNode_ExtFuncCall >(lib,"nccell_fg_rgb","nccell_fg_rgb")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2795:1
	makeExtern< unsigned int (*)(const nccell *) , nccell_bg_rgb , SimNode_ExtFuncCall >(lib,"nccell_bg_rgb","nccell_bg_rgb")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2801:1
	makeExtern< unsigned int (*)(const nccell *) , nccell_fg_alpha , SimNode_ExtFuncCall >(lib,"nccell_fg_alpha","nccell_fg_alpha")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2807:1
	makeExtern< unsigned int (*)(const nccell *) , nccell_bg_alpha , SimNode_ExtFuncCall >(lib,"nccell_bg_alpha","nccell_bg_alpha")
		->args({"cl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2813:1
	makeExtern< unsigned int (*)(const nccell *,unsigned int *,unsigned int *,unsigned int *) , nccell_fg_rgb8 , SimNode_ExtFuncCall >(lib,"nccell_fg_rgb8","nccell_fg_rgb8")
		->args({"cl","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2819:1
	makeExtern< unsigned int (*)(const nccell *,unsigned int *,unsigned int *,unsigned int *) , nccell_bg_rgb8 , SimNode_ExtFuncCall >(lib,"nccell_bg_rgb8","nccell_bg_rgb8")
		->args({"cl","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2826:1
	makeExtern< int (*)(nccell *,unsigned int,unsigned int,unsigned int) , nccell_set_fg_rgb8 , SimNode_ExtFuncCall >(lib,"nccell_set_fg_rgb8","nccell_set_fg_rgb8")
		->args({"cl","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2832:1
	makeExtern< void (*)(nccell *,int,int,int) , nccell_set_fg_rgb8_clipped , SimNode_ExtFuncCall >(lib,"nccell_set_fg_rgb8_clipped","nccell_set_fg_rgb8_clipped")
		->args({"cl","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

