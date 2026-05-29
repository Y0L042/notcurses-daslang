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
void Module_dasNotcurses::initFunctions_11() {
// from notcurses.h:3010:10
	makeExtern< void (*)(ncplane *,int,int,int) , ncplane_set_bg_rgb8_clipped , SimNode_ExtFuncCall >(lib,"ncplane_set_bg_rgb8_clipped","ncplane_set_bg_rgb8_clipped")
		->args({"n","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3011:10
	makeExtern< void (*)(ncplane *,int,int,int) , ncplane_set_fg_rgb8_clipped , SimNode_ExtFuncCall >(lib,"ncplane_set_fg_rgb8_clipped","ncplane_set_fg_rgb8_clipped")
		->args({"n","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3014:9
	makeExtern< int (*)(ncplane *,unsigned int) , ncplane_set_fg_rgb , SimNode_ExtFuncCall >(lib,"ncplane_set_fg_rgb","ncplane_set_fg_rgb")
		->args({"n","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3015:9
	makeExtern< int (*)(ncplane *,unsigned int) , ncplane_set_bg_rgb , SimNode_ExtFuncCall >(lib,"ncplane_set_bg_rgb","ncplane_set_bg_rgb")
		->args({"n","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3018:10
	makeExtern< void (*)(ncplane *) , ncplane_set_fg_default , SimNode_ExtFuncCall >(lib,"ncplane_set_fg_default","ncplane_set_fg_default")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3019:10
	makeExtern< void (*)(ncplane *) , ncplane_set_bg_default , SimNode_ExtFuncCall >(lib,"ncplane_set_bg_default","ncplane_set_bg_default")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3023:9
	makeExtern< int (*)(ncplane *,unsigned int) , ncplane_set_fg_palindex , SimNode_ExtFuncCall >(lib,"ncplane_set_fg_palindex","ncplane_set_fg_palindex")
		->args({"n","idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3024:9
	makeExtern< int (*)(ncplane *,unsigned int) , ncplane_set_bg_palindex , SimNode_ExtFuncCall >(lib,"ncplane_set_bg_palindex","ncplane_set_bg_palindex")
		->args({"n","idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3027:9
	makeExtern< int (*)(ncplane *,int) , ncplane_set_fg_alpha , SimNode_ExtFuncCall >(lib,"ncplane_set_fg_alpha","ncplane_set_fg_alpha")
		->args({"n","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3028:9
	makeExtern< int (*)(ncplane *,int) , ncplane_set_bg_alpha , SimNode_ExtFuncCall >(lib,"ncplane_set_bg_alpha","ncplane_set_bg_alpha")
		->args({"n","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3053:29
	makeExtern< ncfadectx * (*)(ncplane *) , ncfadectx_setup , SimNode_ExtFuncCall >(lib,"ncfadectx_setup","ncfadectx_setup")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3057:9
	makeExtern< int (*)(const ncfadectx *) , ncfadectx_iterations , SimNode_ExtFuncCall >(lib,"ncfadectx_iterations","ncfadectx_iterations")
		->args({"nctx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3081:10
	makeExtern< void (*)(ncfadectx *) , ncfadectx_free , SimNode_ExtFuncCall >(lib,"ncfadectx_free","ncfadectx_free")
		->args({"nctx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3088:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,nccell *,nccell *,nccell *,nccell *,nccell *,nccell *,const char *) , nccells_load_box , SimNode_ExtFuncCall >(lib,"nccells_load_box","nccells_load_box")
		->args({"n","styles","channels","ul","ur","ll","lr","hl","vl","gclusters"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3114:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,nccell *,nccell *,nccell *,nccell *,nccell *,nccell *) , nccells_ascii_box , SimNode_ExtFuncCall >(lib,"nccells_ascii_box","nccells_ascii_box")
		->args({"n","attr","channels","ul","ur","ll","lr","hl","vl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3120:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,nccell *,nccell *,nccell *,nccell *,nccell *,nccell *) , nccells_double_box , SimNode_ExtFuncCall >(lib,"nccells_double_box","nccells_double_box")
		->args({"n","attr","channels","ul","ur","ll","lr","hl","vl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3129:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,nccell *,nccell *,nccell *,nccell *,nccell *,nccell *) , nccells_rounded_box , SimNode_ExtFuncCall >(lib,"nccells_rounded_box","nccells_rounded_box")
		->args({"n","attr","channels","ul","ur","ll","lr","hl","vl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3138:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,nccell *,nccell *,nccell *,nccell *,nccell *,nccell *) , nccells_light_box , SimNode_ExtFuncCall >(lib,"nccells_light_box","nccells_light_box")
		->args({"n","attr","channels","ul","ur","ll","lr","hl","vl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3147:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,nccell *,nccell *,nccell *,nccell *,nccell *,nccell *) , nccells_heavy_box , SimNode_ExtFuncCall >(lib,"nccells_heavy_box","nccells_heavy_box")
		->args({"n","attr","channels","ul","ur","ll","lr","hl","vl"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3156:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,unsigned int,unsigned int,unsigned int) , ncplane_rounded_box , SimNode_ExtFuncCall >(lib,"ncplane_rounded_box","ncplane_rounded_box")
		->args({"n","styles","channels","ystop","xstop","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3172:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,unsigned int) , ncplane_perimeter_rounded , SimNode_ExtFuncCall >(lib,"ncplane_perimeter_rounded","ncplane_perimeter_rounded")
		->args({"n","stylemask","channels","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3196:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,unsigned int,unsigned int,unsigned int) , ncplane_rounded_box_sized , SimNode_ExtFuncCall >(lib,"ncplane_rounded_box_sized","ncplane_rounded_box_sized")
		->args({"n","styles","channels","ylen","xlen","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3205:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,unsigned int,unsigned int,unsigned int) , ncplane_double_box , SimNode_ExtFuncCall >(lib,"ncplane_double_box","ncplane_double_box")
		->args({"n","styles","channels","ylen","xlen","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3221:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,unsigned int,unsigned int,unsigned int) , ncplane_ascii_box , SimNode_ExtFuncCall >(lib,"ncplane_ascii_box","ncplane_ascii_box")
		->args({"n","styles","channels","ylen","xlen","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3237:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,unsigned int) , ncplane_perimeter_double , SimNode_ExtFuncCall >(lib,"ncplane_perimeter_double","ncplane_perimeter_double")
		->args({"n","stylemask","channels","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3261:1
	makeExtern< int (*)(ncplane *,unsigned short,uint64_t,unsigned int,unsigned int,unsigned int) , ncplane_double_box_sized , SimNode_ExtFuncCall >(lib,"ncplane_double_box_sized","ncplane_double_box_sized")
		->args({"n","styles","channels","ylen","xlen","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3271:28
	makeExtern< ncvisual * (*)(const char *) , ncvisual_from_file , SimNode_ExtFuncCall >(lib,"ncvisual_from_file","ncvisual_from_file")
		->args({"file"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3282:28
	makeExtern< ncvisual * (*)(const void *,int,int,int) , ncvisual_from_rgba , SimNode_ExtFuncCall >(lib,"ncvisual_from_rgba","ncvisual_from_rgba")
		->args({"rgba","rows","rowstride","cols"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3290:28
	makeExtern< ncvisual * (*)(const void *,int,int,int,int) , ncvisual_from_rgb_packed , SimNode_ExtFuncCall >(lib,"ncvisual_from_rgb_packed","ncvisual_from_rgb_packed")
		->args({"rgba","rows","rowstride","cols","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3299:28
	makeExtern< ncvisual * (*)(const void *,int,int,int,int) , ncvisual_from_rgb_loose , SimNode_ExtFuncCall >(lib,"ncvisual_from_rgb_loose","ncvisual_from_rgb_loose")
		->args({"rgba","rows","rowstride","cols","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

