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
void Module_dasNotcurses::initFunctions_12() {
// from notcurses.h:3309:28
	makeExtern< ncvisual * (*)(const void *,int,int,int) , ncvisual_from_bgra , SimNode_ExtFuncCall >(lib,"ncvisual_from_bgra","ncvisual_from_bgra")
		->args({"bgra","rows","rowstride","cols"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3319:28
	makeExtern< ncvisual * (*)(const void *,int,int,int,int,int,const unsigned int *) , ncvisual_from_palidx , SimNode_ExtFuncCall >(lib,"ncvisual_from_palidx","ncvisual_from_palidx")
		->args({"data","rows","rowstride","cols","palsize","pstride","palette"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3331:28
	makeExtern< ncvisual * (*)(const ncplane *,ncblitter_e,int,int,unsigned int,unsigned int) , ncvisual_from_plane , SimNode_ExtFuncCall >(lib,"ncvisual_from_plane","ncvisual_from_plane")
		->args({"n","blit","begy","begx","leny","lenx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3338:28
	makeExtern< ncvisual * (*)(const char *,unsigned int,unsigned int) , ncvisual_from_sixel , SimNode_ExtFuncCall >(lib,"ncvisual_from_sixel","ncvisual_from_sixel")
		->args({"s","leny","lenx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3418:9
	makeExtern< int (*)(const notcurses *,const ncvisual *,const ncvisual_options *,ncvgeom *) , ncvisual_geom , SimNode_ExtFuncCall >(lib,"ncvisual_geom","ncvisual_geom")
		->args({"nc","n","vopts","geom"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3424:10
	makeExtern< void (*)(ncvisual *) , ncvisual_destroy , SimNode_ExtFuncCall >(lib,"ncvisual_destroy","ncvisual_destroy")
		->args({"ncv"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3428:9
	makeExtern< int (*)(ncvisual *) , ncvisual_decode , SimNode_ExtFuncCall >(lib,"ncvisual_decode","ncvisual_decode")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3435:9
	makeExtern< int (*)(ncvisual *) , ncvisual_decode_loop , SimNode_ExtFuncCall >(lib,"ncvisual_decode_loop","ncvisual_decode_loop")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3440:9
	makeExtern< int (*)(ncvisual *,double) , ncvisual_rotate , SimNode_ExtFuncCall >(lib,"ncvisual_rotate","ncvisual_rotate")
		->args({"n","rads"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3445:9
	makeExtern< int (*)(ncvisual *,int,int) , ncvisual_resize , SimNode_ExtFuncCall >(lib,"ncvisual_resize","ncvisual_resize")
		->args({"n","rows","cols"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3450:9
	makeExtern< int (*)(ncvisual *,int,int) , ncvisual_resize_noninterpolative , SimNode_ExtFuncCall >(lib,"ncvisual_resize_noninterpolative","ncvisual_resize_noninterpolative")
		->args({"n","rows","cols"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3454:9
	makeExtern< int (*)(ncvisual *,unsigned int,unsigned int,unsigned int) , ncvisual_polyfill_yx , SimNode_ExtFuncCall >(lib,"ncvisual_polyfill_yx","ncvisual_polyfill_yx")
		->args({"n","y","x","rgba"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3458:9
	makeExtern< int (*)(const ncvisual *,unsigned int,unsigned int,unsigned int *) , ncvisual_at_yx , SimNode_ExtFuncCall >(lib,"ncvisual_at_yx","ncvisual_at_yx")
		->args({"n","y","x","pixel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3463:9
	makeExtern< int (*)(const ncvisual *,unsigned int,unsigned int,unsigned int) , ncvisual_set_yx , SimNode_ExtFuncCall >(lib,"ncvisual_set_yx","ncvisual_set_yx")
		->args({"n","y","x","pixel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3478:21
	makeExtern< ncplane * (*)(notcurses *,ncvisual *,const ncvisual_options *) , ncvisual_blit , SimNode_ExtFuncCall >(lib,"ncvisual_blit","ncvisual_blit")
		->args({"nc","ncv","vopts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3487:1
	makeExtern< ncplane * (*)(notcurses *,const ncplane_options *,ncvisual *,ncvisual_options *) , ncvisualplane_create , SimNode_ExtFuncCall >(lib,"ncvisualplane_create","ncvisualplane_create")
		->args({"nc","opts","ncv","vopts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3518:27
	makeExtern< ncplane * (*)(ncplane *,const ncvisual *) , ncvisual_subtitle_plane , SimNode_ExtFuncCall >(lib,"ncvisual_subtitle_plane","ncvisual_subtitle_plane")
		->args({"parent","ncv"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3531:17
	makeExtern< ncblitter_e (*)(const notcurses *,ncscale_e) , ncvisual_media_defblitter , SimNode_ExtFuncCall >(lib,"ncvisual_media_defblitter","ncvisual_media_defblitter")
		->args({"nc","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3568:9
	makeExtern< int (*)(const void *,int,const ncvisual_options *) , ncblit_rgba , SimNode_ExtFuncCall >(lib,"ncblit_rgba","ncblit_rgba")
		->args({"data","linesize","vopts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3573:9
	makeExtern< int (*)(const void *,int,const ncvisual_options *) , ncblit_bgrx , SimNode_ExtFuncCall >(lib,"ncblit_bgrx","ncblit_bgrx")
		->args({"data","linesize","vopts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3578:9
	makeExtern< int (*)(const void *,int,const ncvisual_options *,int) , ncblit_rgb_packed , SimNode_ExtFuncCall >(lib,"ncblit_rgb_packed","ncblit_rgb_packed")
		->args({"data","linesize","vopts","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3584:9
	makeExtern< int (*)(const void *,int,const ncvisual_options *,int) , ncblit_rgb_loose , SimNode_ExtFuncCall >(lib,"ncblit_rgb_loose","ncblit_rgb_loose")
		->args({"data","linesize","vopts","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3600:1
	makeExtern< unsigned int (*)(unsigned int) , ncpixel_a , SimNode_ExtFuncCall >(lib,"ncpixel_a","ncpixel_a")
		->args({"pixel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3606:1
	makeExtern< unsigned int (*)(unsigned int) , ncpixel_r , SimNode_ExtFuncCall >(lib,"ncpixel_r","ncpixel_r")
		->args({"pixel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3612:1
	makeExtern< unsigned int (*)(unsigned int) , ncpixel_g , SimNode_ExtFuncCall >(lib,"ncpixel_g","ncpixel_g")
		->args({"pixel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3618:1
	makeExtern< unsigned int (*)(unsigned int) , ncpixel_b , SimNode_ExtFuncCall >(lib,"ncpixel_b","ncpixel_b")
		->args({"pixel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3624:1
	makeExtern< int (*)(unsigned int *,unsigned int) , ncpixel_set_a , SimNode_ExtFuncCall >(lib,"ncpixel_set_a","ncpixel_set_a")
		->args({"pixel","a"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3634:1
	makeExtern< int (*)(unsigned int *,unsigned int) , ncpixel_set_r , SimNode_ExtFuncCall >(lib,"ncpixel_set_r","ncpixel_set_r")
		->args({"pixel","r"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3644:1
	makeExtern< int (*)(unsigned int *,unsigned int) , ncpixel_set_g , SimNode_ExtFuncCall >(lib,"ncpixel_set_g","ncpixel_set_g")
		->args({"pixel","g"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3654:1
	makeExtern< int (*)(unsigned int *,unsigned int) , ncpixel_set_b , SimNode_ExtFuncCall >(lib,"ncpixel_set_b","ncpixel_set_b")
		->args({"pixel","b"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

