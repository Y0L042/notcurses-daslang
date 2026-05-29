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
void Module_dasNotcurses::initFunctions_14() {
// from notcurses.h:3955:17
	makeExtern< const char * (*)(ncselector *) , ncselector_nextitem , SimNode_ExtFuncCall >(lib,"ncselector_nextitem","ncselector_nextitem")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3965:10
	makeExtern< bool (*)(ncselector *,const ncinput *) , ncselector_offer_input , SimNode_ExtFuncCall >(lib,"ncselector_offer_input","ncselector_offer_input")
		->args({"n","nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:3969:10
	makeExtern< void (*)(ncselector *,char **) , ncselector_destroy , SimNode_ExtFuncCall >(lib,"ncselector_destroy","ncselector_destroy")
		->args({"n","item"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4014:35
	makeExtern< ncmultiselector * (*)(ncplane *,const ncmultiselector_options *) , ncmultiselector_create , SimNode_ExtFuncCall >(lib,"ncmultiselector_create","ncmultiselector_create")
		->args({"n","opts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4019:9
	makeExtern< int (*)(ncmultiselector *,bool *,unsigned int) , ncmultiselector_selected , SimNode_ExtFuncCall >(lib,"ncmultiselector_selected","ncmultiselector_selected")
		->args({"n","selected","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4022:21
	makeExtern< ncplane * (*)(ncmultiselector *) , ncmultiselector_plane , SimNode_ExtFuncCall >(lib,"ncmultiselector_plane","ncmultiselector_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4031:10
	makeExtern< bool (*)(ncmultiselector *,const ncinput *) , ncmultiselector_offer_input , SimNode_ExtFuncCall >(lib,"ncmultiselector_offer_input","ncmultiselector_offer_input")
		->args({"n","nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4035:10
	makeExtern< void (*)(ncmultiselector *) , ncmultiselector_destroy , SimNode_ExtFuncCall >(lib,"ncmultiselector_destroy","ncmultiselector_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4061:26
	makeExtern< nctree * (*)(ncplane *,const nctree_options *) , nctree_create , SimNode_ExtFuncCall >(lib,"nctree_create","nctree_create")
		->args({"n","opts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4065:21
	makeExtern< ncplane * (*)(nctree *) , nctree_plane , SimNode_ExtFuncCall >(lib,"nctree_plane","nctree_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4071:9
	makeExtern< int (*)(nctree *) , nctree_redraw , SimNode_ExtFuncCall >(lib,"nctree_redraw","nctree_redraw")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4080:10
	makeExtern< bool (*)(nctree *,const ncinput *) , nctree_offer_input , SimNode_ExtFuncCall >(lib,"nctree_offer_input","nctree_offer_input")
		->args({"n","ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4085:11
	makeExtern< void * (*)(nctree *) , nctree_focused , SimNode_ExtFuncCall >(lib,"nctree_focused","nctree_focused")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4088:11
	makeExtern< void * (*)(nctree *) , nctree_next , SimNode_ExtFuncCall >(lib,"nctree_next","nctree_next")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4091:11
	makeExtern< void * (*)(nctree *) , nctree_prev , SimNode_ExtFuncCall >(lib,"nctree_prev","nctree_prev")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4099:11
	makeExtern< void * (*)(nctree *,const unsigned int *,int *) , nctree_goto , SimNode_ExtFuncCall >(lib,"nctree_goto","nctree_goto")
		->args({"n","spec","failspec"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4104:9
	makeExtern< int (*)(nctree *,const unsigned int *,const nctree_item *) , nctree_add , SimNode_ExtFuncCall >(lib,"nctree_add","nctree_add")
		->args({"n","spec","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4108:9
	makeExtern< int (*)(nctree *,const unsigned int *) , nctree_del , SimNode_ExtFuncCall >(lib,"nctree_del","nctree_del")
		->args({"n","spec"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4112:10
	makeExtern< void (*)(nctree *) , nctree_destroy , SimNode_ExtFuncCall >(lib,"nctree_destroy","nctree_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4143:26
	makeExtern< ncmenu * (*)(ncplane *,const ncmenu_options *) , ncmenu_create , SimNode_ExtFuncCall >(lib,"ncmenu_create","ncmenu_create")
		->args({"n","opts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4148:9
	makeExtern< int (*)(ncmenu *,int) , ncmenu_unroll , SimNode_ExtFuncCall >(lib,"ncmenu_unroll","ncmenu_unroll")
		->args({"n","sectionidx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4151:9
	makeExtern< int (*)(ncmenu *) , ncmenu_rollup , SimNode_ExtFuncCall >(lib,"ncmenu_rollup","ncmenu_rollup")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4155:9
	makeExtern< int (*)(ncmenu *) , ncmenu_nextsection , SimNode_ExtFuncCall >(lib,"ncmenu_nextsection","ncmenu_nextsection")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4156:9
	makeExtern< int (*)(ncmenu *) , ncmenu_prevsection , SimNode_ExtFuncCall >(lib,"ncmenu_prevsection","ncmenu_prevsection")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4160:9
	makeExtern< int (*)(ncmenu *) , ncmenu_nextitem , SimNode_ExtFuncCall >(lib,"ncmenu_nextitem","ncmenu_nextitem")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4161:9
	makeExtern< int (*)(ncmenu *) , ncmenu_previtem , SimNode_ExtFuncCall >(lib,"ncmenu_previtem","ncmenu_previtem")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4164:9
	makeExtern< int (*)(ncmenu *,const char *,const char *,bool) , ncmenu_item_set_status , SimNode_ExtFuncCall >(lib,"ncmenu_item_set_status","ncmenu_item_set_status")
		->args({"n","section","item","enabled"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4170:17
	makeExtern< const char * (*)(const ncmenu *,ncinput *) , ncmenu_selected , SimNode_ExtFuncCall >(lib,"ncmenu_selected","ncmenu_selected")
		->args({"n","ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4176:17
	makeExtern< const char * (*)(const ncmenu *,const ncinput *,ncinput *) , ncmenu_mouse_selected , SimNode_ExtFuncCall >(lib,"ncmenu_mouse_selected","ncmenu_mouse_selected")
		->args({"n","click","ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4180:21
	makeExtern< ncplane * (*)(ncmenu *) , ncmenu_plane , SimNode_ExtFuncCall >(lib,"ncmenu_plane","ncmenu_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

