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
void Module_dasNotcurses::initFunctions_7() {
// from notcurses.h:1877:9
	makeExtern< int (*)(ncplane *,const nccell *) , ncplane_set_base_cell , SimNode_ExtFuncCall >(lib,"ncplane_set_base_cell","ncplane_set_base_cell")
		->args({"n","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1883:9
	makeExtern< int (*)(ncplane *,const char *,unsigned short,uint64_t) , ncplane_set_base , SimNode_ExtFuncCall >(lib,"ncplane_set_base","ncplane_set_base")
		->args({"n","egc","stylemask","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1888:9
	makeExtern< int (*)(ncplane *,nccell *) , ncplane_base , SimNode_ExtFuncCall >(lib,"ncplane_base","ncplane_base")
		->args({"n","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1892:10
	makeExtern< void (*)(const ncplane *,int *,int *) , ncplane_yx , SimNode_ExtFuncCall >(lib,"ncplane_yx","ncplane_yx")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1894:9
	makeExtern< int (*)(const ncplane *) , ncplane_y , SimNode_ExtFuncCall >(lib,"ncplane_y","ncplane_y")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1895:9
	makeExtern< int (*)(const ncplane *) , ncplane_x , SimNode_ExtFuncCall >(lib,"ncplane_x","ncplane_x")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1900:9
	makeExtern< int (*)(ncplane *,int,int) , ncplane_move_yx , SimNode_ExtFuncCall >(lib,"ncplane_move_yx","ncplane_move_yx")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1905:1
	makeExtern< int (*)(ncplane *,int,int) , ncplane_move_rel , SimNode_ExtFuncCall >(lib,"ncplane_move_rel","ncplane_move_rel")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1913:10
	makeExtern< void (*)(const ncplane *,int *,int *) , ncplane_abs_yx , SimNode_ExtFuncCall >(lib,"ncplane_abs_yx","ncplane_abs_yx")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1915:9
	makeExtern< int (*)(const ncplane *) , ncplane_abs_y , SimNode_ExtFuncCall >(lib,"ncplane_abs_y","ncplane_abs_y")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1916:9
	makeExtern< int (*)(const ncplane *) , ncplane_abs_x , SimNode_ExtFuncCall >(lib,"ncplane_abs_x","ncplane_abs_x")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1919:21
	makeExtern< ncplane * (*)(ncplane *) , ncplane_parent , SimNode_ExtFuncCall >(lib,"ncplane_parent","ncplane_parent")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1921:27
	makeExtern< const ncplane * (*)(const ncplane *) , ncplane_parent_const , SimNode_ExtFuncCall >(lib,"ncplane_parent_const","ncplane_parent_const")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1926:1
	makeExtern< int (*)(const ncplane *,const ncplane *) , ncplane_descendant_p , SimNode_ExtFuncCall >(lib,"ncplane_descendant_p","ncplane_descendant_p")
		->args({"n","ancestor"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1939:9
	makeExtern< int (*)(ncplane *,ncplane *) , ncplane_move_above , SimNode_ExtFuncCall >(lib,"ncplane_move_above","ncplane_move_above")
		->args({"n","above"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1947:9
	makeExtern< int (*)(ncplane *,ncplane *) , ncplane_move_below , SimNode_ExtFuncCall >(lib,"ncplane_move_below","ncplane_move_below")
		->args({"n","below"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1954:1
	makeExtern< void (*)(ncplane *) , ncplane_move_top , SimNode_ExtFuncCall >(lib,"ncplane_move_top","ncplane_move_top")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1960:1
	makeExtern< void (*)(ncplane *) , ncplane_move_bottom , SimNode_ExtFuncCall >(lib,"ncplane_move_bottom","ncplane_move_bottom")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1969:9
	makeExtern< int (*)(ncplane *,ncplane *) , ncplane_move_family_above , SimNode_ExtFuncCall >(lib,"ncplane_move_family_above","ncplane_move_family_above")
		->args({"n","targ"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1972:9
	makeExtern< int (*)(ncplane *,ncplane *) , ncplane_move_family_below , SimNode_ExtFuncCall >(lib,"ncplane_move_family_below","ncplane_move_family_below")
		->args({"n","targ"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1977:1
	makeExtern< void (*)(ncplane *) , ncplane_move_family_top , SimNode_ExtFuncCall >(lib,"ncplane_move_family_top","ncplane_move_family_top")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1983:1
	makeExtern< void (*)(ncplane *) , ncplane_move_family_bottom , SimNode_ExtFuncCall >(lib,"ncplane_move_family_bottom","ncplane_move_family_bottom")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1989:9
	makeExtern< int (*)(ncplane *) , ncplane_family_destroy , SimNode_ExtFuncCall >(lib,"ncplane_family_destroy","ncplane_family_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1992:21
	makeExtern< ncplane * (*)(ncplane *) , ncplane_below , SimNode_ExtFuncCall >(lib,"ncplane_below","ncplane_below")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1996:21
	makeExtern< ncplane * (*)(ncplane *) , ncplane_above , SimNode_ExtFuncCall >(lib,"ncplane_above","ncplane_above")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2001:9
	makeExtern< int (*)(ncplane *,int) , ncplane_scrollup , SimNode_ExtFuncCall >(lib,"ncplane_scrollup","ncplane_scrollup")
		->args({"n","r"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2008:9
	makeExtern< int (*)(ncplane *,const ncplane *) , ncplane_scrollup_child , SimNode_ExtFuncCall >(lib,"ncplane_scrollup_child","ncplane_scrollup_child")
		->args({"n","child"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2017:9
	makeExtern< int (*)(ncplane *) , ncplane_rotate_cw , SimNode_ExtFuncCall >(lib,"ncplane_rotate_cw","ncplane_rotate_cw")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2019:9
	makeExtern< int (*)(ncplane *) , ncplane_rotate_ccw , SimNode_ExtFuncCall >(lib,"ncplane_rotate_ccw","ncplane_rotate_ccw")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:2025:11
	makeExtern< char * (*)(const ncplane *,unsigned short *,unsigned long long *) , ncplane_at_cursor , SimNode_ExtFuncCall >(lib,"ncplane_at_cursor","ncplane_at_cursor")
		->args({"n","stylemask","channels"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

