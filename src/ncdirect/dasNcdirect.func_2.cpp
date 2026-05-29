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
void Module_dasNcdirect::initFunctions_2() {
// from direct.h:186:9
	makeExtern< int (*)(ncdirect *) , ncdirect_clear , SimNode_ExtFuncCall >(lib,"ncdirect_clear","ncdirect_clear")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:189:27
	makeExtern< const nccapabilities * (*)(const ncdirect *) , ncdirect_capabilities , SimNode_ExtFuncCall >(lib,"ncdirect_capabilities","ncdirect_capabilities")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:197:9
	makeExtern< int (*)(ncdirect *,const char *,unsigned int,uint64_t,uint64_t) , ncdirect_hline_interp , SimNode_ExtFuncCall >(lib,"ncdirect_hline_interp","ncdirect_hline_interp")
		->args({"n","egc","len","h1","h2"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:201:9
	makeExtern< int (*)(ncdirect *,const char *,unsigned int,uint64_t,uint64_t) , ncdirect_vline_interp , SimNode_ExtFuncCall >(lib,"ncdirect_vline_interp","ncdirect_vline_interp")
		->args({"n","egc","len","h1","h2"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:215:1
	makeExtern< int (*)(ncdirect *,uint64_t,uint64_t,uint64_t,uint64_t,unsigned int,unsigned int,unsigned int) , ncdirect_light_box , SimNode_ExtFuncCall >(lib,"ncdirect_light_box","ncdirect_light_box")
		->args({"n","ul","ur","ll","lr","ylen","xlen","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:222:1
	makeExtern< int (*)(ncdirect *,uint64_t,uint64_t,uint64_t,uint64_t,unsigned int,unsigned int,unsigned int) , ncdirect_heavy_box , SimNode_ExtFuncCall >(lib,"ncdirect_heavy_box","ncdirect_heavy_box")
		->args({"n","ul","ur","ll","lr","ylen","xlen","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:229:1
	makeExtern< int (*)(ncdirect *,uint64_t,uint64_t,uint64_t,uint64_t,unsigned int,unsigned int,unsigned int) , ncdirect_ascii_box , SimNode_ExtFuncCall >(lib,"ncdirect_ascii_box","ncdirect_ascii_box")
		->args({"n","ul","ur","ll","lr","ylen","xlen","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:236:9
	makeExtern< int (*)(ncdirect *,uint64_t,uint64_t,uint64_t,uint64_t,unsigned int,unsigned int,unsigned int) , ncdirect_rounded_box , SimNode_ExtFuncCall >(lib,"ncdirect_rounded_box","ncdirect_rounded_box")
		->args({"n","ul","ur","ll","lr","ylen","xlen","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:242:9
	makeExtern< int (*)(ncdirect *,uint64_t,uint64_t,uint64_t,uint64_t,unsigned int,unsigned int,unsigned int) , ncdirect_double_box , SimNode_ExtFuncCall >(lib,"ncdirect_double_box","ncdirect_double_box")
		->args({"n","ul","ur","ll","lr","ylen","xlen","ctlword"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:260:9
	makeExtern< int (*)(ncdirect *) , ncdirect_inputready_fd , SimNode_ExtFuncCall >(lib,"ncdirect_inputready_fd","ncdirect_inputready_fd")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:266:1
	makeExtern< unsigned int (*)(ncdirect *,ncinput *) , ncdirect_get_nblock , SimNode_ExtFuncCall >(lib,"ncdirect_get_nblock","ncdirect_get_nblock")
		->args({"n","ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:274:1
	makeExtern< unsigned int (*)(ncdirect *,ncinput *) , ncdirect_get_blocking , SimNode_ExtFuncCall >(lib,"ncdirect_get_blocking","ncdirect_get_blocking")
		->args({"n","ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:279:9
	makeExtern< int (*)(ncdirect *) , ncdirect_stop , SimNode_ExtFuncCall >(lib,"ncdirect_stop","ncdirect_stop")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:288:9
	makeExtern< int (*)(ncdirect *,const char *,ncalign_e,ncblitter_e,ncscale_e) , ncdirect_render_image , SimNode_ExtFuncCall >(lib,"ncdirect_render_image","ncdirect_render_image")
		->args({"n","filename","align","blitter","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:299:22
	makeExtern< ncplane * (*)(ncdirect *,const char *,ncblitter_e,ncscale_e,int,int) , ncdirect_render_frame , SimNode_ExtFuncCall >(lib,"ncdirect_render_frame","ncdirect_render_frame")
		->args({"n","filename","blitter","scale","maxy","maxx"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:306:9
	makeExtern< int (*)(ncdirect *,ncplane *,ncalign_e) , ncdirect_raster_frame , SimNode_ExtFuncCall >(lib,"ncdirect_raster_frame","ncdirect_raster_frame")
		->args({"n","ncdv","align"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:313:22
	makeExtern< ncvisual * (*)(ncdirect *,const char *) , ncdirectf_from_file , SimNode_ExtFuncCall >(lib,"ncdirectf_from_file","ncdirectf_from_file")
		->args({"n","filename"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:317:10
	makeExtern< void (*)(ncvisual *) , ncdirectf_free , SimNode_ExtFuncCall >(lib,"ncdirectf_free","ncdirectf_free")
		->args({"frame"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:322:22
	makeExtern< ncplane * (*)(ncdirect *,ncvisual *,const ncvisual_options *) , ncdirectf_render , SimNode_ExtFuncCall >(lib,"ncdirectf_render","ncdirectf_render")
		->args({"n","frame","vopts"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:327:9
	makeExtern< int (*)(ncdirect *,ncvisual *,const ncvisual_options *,ncvgeom *) , ncdirectf_geom , SimNode_ExtFuncCall >(lib,"ncdirectf_geom","ncdirectf_geom")
		->args({"n","frame","vopts","geom"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:338:17
	makeExtern< char * (*)(const ncdirect *) , ncdirect_detected_terminal , SimNode_ExtFuncCall >(lib,"ncdirect_detected_terminal","ncdirect_detected_terminal")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:343:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_cantruecolor , SimNode_ExtFuncCall >(lib,"ncdirect_cantruecolor","ncdirect_cantruecolor")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:349:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canchangecolor , SimNode_ExtFuncCall >(lib,"ncdirect_canchangecolor","ncdirect_canchangecolor")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:355:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canfade , SimNode_ExtFuncCall >(lib,"ncdirect_canfade","ncdirect_canfade")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:361:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canopen_images , SimNode_ExtFuncCall >(lib,"ncdirect_canopen_images","ncdirect_canopen_images")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:367:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canopen_videos , SimNode_ExtFuncCall >(lib,"ncdirect_canopen_videos","ncdirect_canopen_videos")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:372:10
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canutf8 , SimNode_ExtFuncCall >(lib,"ncdirect_canutf8","ncdirect_canutf8")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:376:9
	makeExtern< int (*)(const ncdirect *) , ncdirect_check_pixel_support , SimNode_ExtFuncCall >(lib,"ncdirect_check_pixel_support","ncdirect_check_pixel_support")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:381:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canhalfblock , SimNode_ExtFuncCall >(lib,"ncdirect_canhalfblock","ncdirect_canhalfblock")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:387:1
	makeExtern< bool (*)(const ncdirect *) , ncdirect_canquadrant , SimNode_ExtFuncCall >(lib,"ncdirect_canquadrant","ncdirect_canquadrant")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

