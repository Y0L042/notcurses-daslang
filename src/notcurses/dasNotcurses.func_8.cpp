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
void Module_dasNotcurses::initFunctions_8() {
// from notcurses.h:2031:9
	makeExtern< int (*)(ncplane *,nccell *) , ncplane_at_cursor_cell , SimNode_ExtFuncCall >(lib,"ncplane_at_cursor_cell","ncplane_at_cursor_cell")
		->args({"n","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2042:11
	makeExtern< char * (*)(const ncplane *,int,int,unsigned short *,unsigned long long *) , ncplane_at_yx , SimNode_ExtFuncCall >(lib,"ncplane_at_yx","ncplane_at_yx")
		->args({"n","y","x","stylemask","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2052:9
	makeExtern< int (*)(ncplane *,int,int,nccell *) , ncplane_at_yx_cell , SimNode_ExtFuncCall >(lib,"ncplane_at_yx_cell","ncplane_at_yx_cell")
		->args({"n","y","x","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2060:11
	makeExtern< char * (*)(ncplane *,int,int,unsigned int,unsigned int) , ncplane_contents , SimNode_ExtFuncCall >(lib,"ncplane_contents","ncplane_contents")
		->args({"n","begy","begx","leny","lenx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2067:11
	makeExtern< void * (*)(ncplane *,void *) , ncplane_set_userptr , SimNode_ExtFuncCall >(lib,"ncplane_set_userptr","ncplane_set_userptr")
		->args({"n","opaque"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2069:11
	makeExtern< void * (*)(ncplane *) , ncplane_userptr , SimNode_ExtFuncCall >(lib,"ncplane_userptr","ncplane_userptr")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2076:10
	makeExtern< void (*)(const ncplane *,int *,int *) , ncplane_center_abs , SimNode_ExtFuncCall >(lib,"ncplane_center_abs","ncplane_center_abs")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2086:21
	makeExtern< unsigned int * (*)(const ncplane *,ncblitter_e,int,int,unsigned int,unsigned int,unsigned int *,unsigned int *) , ncplane_as_rgba , SimNode_ExtFuncCall >(lib,"ncplane_as_rgba","ncplane_as_rgba")
		->args({"n","blit","begy","begx","leny","lenx","pxdimy","pxdimx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2096:1
	makeExtern< int (*)(int,ncalign_e,int) , notcurses_align , SimNode_ExtFuncCall >(lib,"notcurses_align","notcurses_align")
		->args({"availu","align","u"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2113:1
	makeExtern< int (*)(const ncplane *,ncalign_e,int) , ncplane_halign , SimNode_ExtFuncCall >(lib,"ncplane_halign","ncplane_halign")
		->args({"n","align","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2121:1
	makeExtern< int (*)(const ncplane *,ncalign_e,int) , ncplane_valign , SimNode_ExtFuncCall >(lib,"ncplane_valign","ncplane_valign")
		->args({"n","align","r"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2128:9
	makeExtern< int (*)(ncplane *,int,int) , ncplane_cursor_move_yx , SimNode_ExtFuncCall >(lib,"ncplane_cursor_move_yx","ncplane_cursor_move_yx")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2134:9
	makeExtern< int (*)(ncplane *,int,int) , ncplane_cursor_move_rel , SimNode_ExtFuncCall >(lib,"ncplane_cursor_move_rel","ncplane_cursor_move_rel")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2138:10
	makeExtern< void (*)(ncplane *) , ncplane_home , SimNode_ExtFuncCall >(lib,"ncplane_home","ncplane_home")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2142:10
	makeExtern< void (*)(const ncplane *,unsigned int *,unsigned int *) , ncplane_cursor_yx , SimNode_ExtFuncCall >(lib,"ncplane_cursor_yx","ncplane_cursor_yx")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2146:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_cursor_y , SimNode_ExtFuncCall >(lib,"ncplane_cursor_y","ncplane_cursor_y")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2153:1
	makeExtern< unsigned int (*)(const ncplane *) , ncplane_cursor_x , SimNode_ExtFuncCall >(lib,"ncplane_cursor_x","ncplane_cursor_x")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2160:14
	makeExtern< uint64_t (*)(const ncplane *) , ncplane_channels , SimNode_ExtFuncCall >(lib,"ncplane_channels","ncplane_channels")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2164:14
	makeExtern< unsigned short (*)(const ncplane *) , ncplane_styles , SimNode_ExtFuncCall >(lib,"ncplane_styles","ncplane_styles")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2171:9
	makeExtern< int (*)(ncplane *,int,int,const nccell *) , ncplane_putc_yx , SimNode_ExtFuncCall >(lib,"ncplane_putc_yx","ncplane_putc_yx")
		->args({"n","y","x","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2176:1
	makeExtern< int (*)(ncplane *,const nccell *) , ncplane_putc , SimNode_ExtFuncCall >(lib,"ncplane_putc","ncplane_putc")
		->args({"n","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2185:1
	makeExtern< int (*)(ncplane *,int,int,char) , ncplane_putchar_yx , SimNode_ExtFuncCall >(lib,"ncplane_putchar_yx","ncplane_putchar_yx")
		->args({"n","y","x","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2192:1
	makeExtern< int (*)(ncplane *,char) , ncplane_putchar , SimNode_ExtFuncCall >(lib,"ncplane_putchar","ncplane_putchar")
		->args({"n","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2198:9
	makeExtern< int (*)(ncplane *,char) , ncplane_putchar_stained , SimNode_ExtFuncCall >(lib,"ncplane_putchar_stained","ncplane_putchar_stained")
		->args({"n","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2206:9
	makeExtern< int (*)(ncplane *,int,int,const char *,size_t *) , ncplane_putegc_yx , SimNode_ExtFuncCall >(lib,"ncplane_putegc_yx","ncplane_putegc_yx")
		->args({"n","y","x","gclust","sbytes"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2212:1
	makeExtern< int (*)(ncplane *,const char *,size_t *) , ncplane_putegc , SimNode_ExtFuncCall >(lib,"ncplane_putegc","ncplane_putegc")
		->args({"n","gclust","sbytes"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2218:9
	makeExtern< int (*)(ncplane *,const char *,size_t *) , ncplane_putegc_stained , SimNode_ExtFuncCall >(lib,"ncplane_putegc_stained","ncplane_putegc_stained")
		->args({"n","gclust","sbytes"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2277:1
	makeExtern< int (*)(ncplane *,int,int,const char *) , ncplane_putstr_yx , SimNode_ExtFuncCall >(lib,"ncplane_putstr_yx","ncplane_putstr_yx")
		->args({"n","y","x","gclusters"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2300:1
	makeExtern< int (*)(ncplane *,const char *) , ncplane_putstr , SimNode_ExtFuncCall >(lib,"ncplane_putstr","ncplane_putstr")
		->args({"n","gclustarr"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2305:1
	makeExtern< int (*)(ncplane *,int,ncalign_e,const char *) , ncplane_putstr_aligned , SimNode_ExtFuncCall >(lib,"ncplane_putstr_aligned","ncplane_putstr_aligned")
		->args({"n","y","align","s"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

