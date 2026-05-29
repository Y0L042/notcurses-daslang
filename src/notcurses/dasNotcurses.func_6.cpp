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
void Module_dasNotcurses::initFunctions_6() {
// from notcurses.h:1595:9
	makeExtern< int (*)(notcurses *,const ncpalette *) , ncpalette_use , SimNode_ExtFuncCall >(lib,"ncpalette_use","ncpalette_use")
		->args({"nc","p"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1600:1
	makeExtern< int (*)(ncpalette *,int,unsigned int,unsigned int,unsigned int) , ncpalette_set_rgb8 , SimNode_ExtFuncCall >(lib,"ncpalette_set_rgb8","ncpalette_set_rgb8")
		->args({"p","idx","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1608:1
	makeExtern< int (*)(ncpalette *,int,unsigned int) , ncpalette_set , SimNode_ExtFuncCall >(lib,"ncpalette_set","ncpalette_set")
		->args({"p","idx","rgb"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1616:1
	makeExtern< int (*)(const ncpalette *,int,unsigned int *) , ncpalette_get , SimNode_ExtFuncCall >(lib,"ncpalette_get","ncpalette_get")
		->args({"p","idx","palent"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1625:1
	makeExtern< int (*)(const ncpalette *,int,unsigned int *,unsigned int *,unsigned int *) , ncpalette_get_rgb8 , SimNode_ExtFuncCall >(lib,"ncpalette_get_rgb8","ncpalette_get_rgb8")
		->args({"p","idx","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1633:10
	makeExtern< void (*)(ncpalette *) , ncpalette_free , SimNode_ExtFuncCall >(lib,"ncpalette_free","ncpalette_free")
		->args({"p"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1653:14
	makeExtern< unsigned short (*)(const notcurses *) , notcurses_supported_styles , SimNode_ExtFuncCall >(lib,"notcurses_supported_styles","notcurses_supported_styles")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1659:14
	makeExtern< unsigned int (*)(const notcurses *) , notcurses_palette_size , SimNode_ExtFuncCall >(lib,"notcurses_palette_size","notcurses_palette_size")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1664:17
	makeExtern< char * (*)(const notcurses *) , notcurses_detected_terminal , SimNode_ExtFuncCall >(lib,"notcurses_detected_terminal","notcurses_detected_terminal")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1667:27
	makeExtern< const nccapabilities * (*)(const notcurses *) , notcurses_capabilities , SimNode_ExtFuncCall >(lib,"notcurses_capabilities","notcurses_capabilities")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1693:19
	makeExtern< ncpixelimpl_e (*)(const notcurses *) , notcurses_check_pixel_support , SimNode_ExtFuncCall >(lib,"notcurses_check_pixel_support","notcurses_check_pixel_support")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1700:1
	makeExtern< bool (*)(const nccapabilities *) , nccapability_canchangecolor , SimNode_ExtFuncCall >(lib,"nccapability_canchangecolor","nccapability_canchangecolor")
		->args({"caps"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1713:1
	makeExtern< bool (*)(const notcurses *) , notcurses_cantruecolor , SimNode_ExtFuncCall >(lib,"notcurses_cantruecolor","notcurses_cantruecolor")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1719:1
	makeExtern< bool (*)(const notcurses *) , notcurses_canchangecolor , SimNode_ExtFuncCall >(lib,"notcurses_canchangecolor","notcurses_canchangecolor")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1725:1
	makeExtern< bool (*)(const notcurses *) , notcurses_canfade , SimNode_ExtFuncCall >(lib,"notcurses_canfade","notcurses_canfade")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1730:10
	makeExtern< bool (*)(const notcurses *) , notcurses_canopen_images , SimNode_ExtFuncCall >(lib,"notcurses_canopen_images","notcurses_canopen_images")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1734:10
	makeExtern< bool (*)(const notcurses *) , notcurses_canopen_videos , SimNode_ExtFuncCall >(lib,"notcurses_canopen_videos","notcurses_canopen_videos")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1739:1
	makeExtern< bool (*)(const notcurses *) , notcurses_canutf8 , SimNode_ExtFuncCall >(lib,"notcurses_canutf8","notcurses_canutf8")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1745:1
	makeExtern< bool (*)(const notcurses *) , notcurses_canhalfblock , SimNode_ExtFuncCall >(lib,"notcurses_canhalfblock","notcurses_canhalfblock")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1751:1
	makeExtern< bool (*)(const notcurses *) , notcurses_canquadrant , SimNode_ExtFuncCall >(lib,"notcurses_canquadrant","notcurses_canquadrant")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1757:1
	makeExtern< bool (*)(const notcurses *) , notcurses_cansextant , SimNode_ExtFuncCall >(lib,"notcurses_cansextant","notcurses_cansextant")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1763:1
	makeExtern< bool (*)(const notcurses *) , notcurses_canoctant , SimNode_ExtFuncCall >(lib,"notcurses_canoctant","notcurses_canoctant")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1769:1
	makeExtern< bool (*)(const notcurses *) , notcurses_canbraille , SimNode_ExtFuncCall >(lib,"notcurses_canbraille","notcurses_canbraille")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1775:1
	makeExtern< bool (*)(const notcurses *) , notcurses_canpixel , SimNode_ExtFuncCall >(lib,"notcurses_canpixel","notcurses_canpixel")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1825:20
	makeExtern< ncstats * (*)(const notcurses *) , notcurses_stats_alloc , SimNode_ExtFuncCall >(lib,"notcurses_stats_alloc","notcurses_stats_alloc")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1830:10
	makeExtern< void (*)(notcurses *,ncstats *) , notcurses_stats , SimNode_ExtFuncCall >(lib,"notcurses_stats","notcurses_stats")
		->args({"nc","stats"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1835:10
	makeExtern< void (*)(notcurses *,ncstats *) , notcurses_stats_reset , SimNode_ExtFuncCall >(lib,"notcurses_stats_reset","notcurses_stats_reset")
		->args({"nc","stats"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1852:9
	makeExtern< int (*)(ncplane *,int,int,unsigned int,unsigned int,int,int,unsigned int,unsigned int) , ncplane_resize , SimNode_ExtFuncCall >(lib,"ncplane_resize","ncplane_resize")
		->args({"n","keepy","keepx","keepleny","keeplenx","yoff","xoff","ylen","xlen"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1860:1
	makeExtern< int (*)(ncplane *,unsigned int,unsigned int) , ncplane_resize_simple , SimNode_ExtFuncCall >(lib,"ncplane_resize_simple","ncplane_resize_simple")
		->args({"n","ylen","xlen"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1871:9
	makeExtern< int (*)(ncplane *) , ncplane_destroy , SimNode_ExtFuncCall >(lib,"ncplane_destroy","ncplane_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

