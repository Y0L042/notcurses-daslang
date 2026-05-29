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
void Module_dasNotcurses::initFunctions_5() {
// from notcurses.h:1365:9
	makeExtern< int (*)(notcurses *) , notcurses_linesigs_enable , SimNode_ExtFuncCall >(lib,"notcurses_linesigs_enable","notcurses_linesigs_enable")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1373:9
	makeExtern< int (*)(notcurses *,unsigned int *,unsigned int *) , notcurses_refresh , SimNode_ExtFuncCall >(lib,"notcurses_refresh","notcurses_refresh")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1377:23
	makeExtern< notcurses * (*)(const ncplane *) , ncplane_notcurses , SimNode_ExtFuncCall >(lib,"ncplane_notcurses","ncplane_notcurses")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1380:29
	makeExtern< const notcurses * (*)(const ncplane *) , ncplane_notcurses_const , SimNode_ExtFuncCall >(lib,"ncplane_notcurses_const","ncplane_notcurses_const")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1384:10
	makeExtern< void (*)(const ncplane *,unsigned int *,unsigned int *) , ncplane_dim_yx , SimNode_ExtFuncCall >(lib,"ncplane_dim_yx","ncplane_dim_yx")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1389:1
	makeExtern< ncplane * (*)(notcurses *,unsigned int *,unsigned int *) , notcurses_stddim_yx , SimNode_ExtFuncCall >(lib,"notcurses_stddim_yx","notcurses_stddim_yx")
		->args({"nc","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1396:1
	makeExtern< const ncplane * (*)(const notcurses *,unsigned int *,unsigned int *) , notcurses_stddim_yx_const , SimNode_ExtFuncCall >(lib,"notcurses_stddim_yx_const","notcurses_stddim_yx_const")
		->args({"nc","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1403:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_dim_y , SimNode_ExtFuncCall >(lib,"ncplane_dim_y","ncplane_dim_y")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1410:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_dim_x , SimNode_ExtFuncCall >(lib,"ncplane_dim_x","ncplane_dim_x")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1421:10
	makeExtern< void (*)(const ncplane *,unsigned int *,unsigned int *,unsigned int *,unsigned int *,unsigned int *,unsigned int *) , ncplane_pixel_geom , SimNode_ExtFuncCall >(lib,"ncplane_pixel_geom","ncplane_pixel_geom")
		->args({"n","pxy","pxx","celldimy","celldimx","maxbmapy","maxbmapx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1429:1
	makeExtern< void (*)(const notcurses *,unsigned int *,unsigned int *) , notcurses_term_dim_yx , SimNode_ExtFuncCall >(lib,"notcurses_term_dim_yx","notcurses_term_dim_yx")
		->args({"n","rows","cols"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1436:11
	makeExtern< char * (*)(notcurses *,unsigned int,unsigned int,unsigned short *,unsigned long long *) , notcurses_at_yx , SimNode_ExtFuncCall >(lib,"notcurses_at_yx","notcurses_at_yx")
		->args({"nc","yoff","xoff","stylemask","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1481:27
	makeExtern< ncplane * (*)(ncplane *,const ncplane_options *) , ncplane_create , SimNode_ExtFuncCall >(lib,"ncplane_create","ncplane_create")
		->args({"n","nopts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1486:27
	makeExtern< ncplane * (*)(notcurses *,const ncplane_options *) , ncpile_create , SimNode_ExtFuncCall >(lib,"ncpile_create","ncpile_create")
		->args({"nc","nopts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1494:9
	makeExtern< int (*)(ncplane *) , ncplane_resize_maximize , SimNode_ExtFuncCall >(lib,"ncplane_resize_maximize","ncplane_resize_maximize")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1498:9
	makeExtern< int (*)(ncplane *) , ncplane_resize_marginalized , SimNode_ExtFuncCall >(lib,"ncplane_resize_marginalized","ncplane_resize_marginalized")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1502:9
	makeExtern< int (*)(ncplane *) , ncplane_resize_realign , SimNode_ExtFuncCall >(lib,"ncplane_resize_realign","ncplane_resize_realign")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1506:9
	makeExtern< int (*)(ncplane *) , ncplane_resize_placewithin , SimNode_ExtFuncCall >(lib,"ncplane_resize_placewithin","ncplane_resize_placewithin")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1516:9
	makeExtern< int (*)(ncplane *,const char *) , ncplane_set_name , SimNode_ExtFuncCall >(lib,"ncplane_set_name","ncplane_set_name")
		->args({"n","name"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1520:17
	makeExtern< char * (*)(const ncplane *) , ncplane_name , SimNode_ExtFuncCall >(lib,"ncplane_name","ncplane_name")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1529:21
	makeExtern< ncplane * (*)(ncplane *,ncplane *) , ncplane_reparent , SimNode_ExtFuncCall >(lib,"ncplane_reparent","ncplane_reparent")
		->args({"n","newparent"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1535:21
	makeExtern< ncplane * (*)(ncplane *,ncplane *) , ncplane_reparent_family , SimNode_ExtFuncCall >(lib,"ncplane_reparent_family","ncplane_reparent_family")
		->args({"n","newparent"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1544:27
	makeExtern< ncplane * (*)(const ncplane *,void *) , ncplane_dup , SimNode_ExtFuncCall >(lib,"ncplane_dup","ncplane_dup")
		->args({"n","opaque"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1550:10
	makeExtern< void (*)(const ncplane *,const ncplane *,int *,int *) , ncplane_translate , SimNode_ExtFuncCall >(lib,"ncplane_translate","ncplane_translate")
		->args({"src","dst","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1558:10
	makeExtern< bool (*)(const ncplane *,int *,int *) , ncplane_translate_abs , SimNode_ExtFuncCall >(lib,"ncplane_translate_abs","ncplane_translate_abs")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1564:10
	makeExtern< bool (*)(ncplane *,unsigned int) , ncplane_set_scrolling , SimNode_ExtFuncCall >(lib,"ncplane_set_scrolling","ncplane_set_scrolling")
		->args({"n","scrollp"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1567:10
	makeExtern< bool (*)(const ncplane *) , ncplane_scrolling_p , SimNode_ExtFuncCall >(lib,"ncplane_scrolling_p","ncplane_scrolling_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1573:10
	makeExtern< bool (*)(ncplane *,unsigned int) , ncplane_set_autogrow , SimNode_ExtFuncCall >(lib,"ncplane_set_autogrow","ncplane_set_autogrow")
		->args({"n","growp"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1576:10
	makeExtern< bool (*)(const ncplane *) , ncplane_autogrow_p , SimNode_ExtFuncCall >(lib,"ncplane_autogrow_p","ncplane_autogrow_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1590:22
	makeExtern< ncpalette * (*)(notcurses *) , ncpalette_new , SimNode_ExtFuncCall >(lib,"ncpalette_new","ncpalette_new")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

