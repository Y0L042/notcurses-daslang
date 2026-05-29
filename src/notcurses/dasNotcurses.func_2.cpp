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
void Module_dasNotcurses::initFunctions_2() {
// from notcurses.h:401:1
	makeExtern< uint64_t (*)(uint64_t) , ncchannels_reverse , SimNode_ExtFuncCall >(lib,"ncchannels_reverse","ncchannels_reverse")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:424:1
	makeExtern< uint64_t (*)(unsigned int,unsigned int) , ncchannels_combine , SimNode_ExtFuncCall >(lib,"ncchannels_combine","ncchannels_combine")
		->args({"fchan","bchan"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:432:1
	makeExtern< unsigned int (*)(uint64_t) , ncchannels_fg_palindex , SimNode_ExtFuncCall >(lib,"ncchannels_fg_palindex","ncchannels_fg_palindex")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:437:1
	makeExtern< unsigned int (*)(uint64_t) , ncchannels_bg_palindex , SimNode_ExtFuncCall >(lib,"ncchannels_bg_palindex","ncchannels_bg_palindex")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:443:1
	makeExtern< unsigned int (*)(uint64_t) , ncchannels_fg_rgb , SimNode_ExtFuncCall >(lib,"ncchannels_fg_rgb","ncchannels_fg_rgb")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:449:1
	makeExtern< unsigned int (*)(uint64_t) , ncchannels_bg_rgb , SimNode_ExtFuncCall >(lib,"ncchannels_bg_rgb","ncchannels_bg_rgb")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:455:1
	makeExtern< unsigned int (*)(uint64_t,unsigned int *,unsigned int *,unsigned int *) , ncchannels_fg_rgb8 , SimNode_ExtFuncCall >(lib,"ncchannels_fg_rgb8","ncchannels_fg_rgb8")
		->args({"channels","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:461:1
	makeExtern< unsigned int (*)(uint64_t,unsigned int *,unsigned int *,unsigned int *) , ncchannels_bg_rgb8 , SimNode_ExtFuncCall >(lib,"ncchannels_bg_rgb8","ncchannels_bg_rgb8")
		->args({"channels","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:468:1
	makeExtern< int (*)(unsigned long long *,unsigned int,unsigned int,unsigned int) , ncchannels_set_fg_rgb8 , SimNode_ExtFuncCall >(lib,"ncchannels_set_fg_rgb8","ncchannels_set_fg_rgb8")
		->args({"channels","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:479:1
	makeExtern< void (*)(unsigned long long *,int,int,int) , ncchannels_set_fg_rgb8_clipped , SimNode_ExtFuncCall >(lib,"ncchannels_set_fg_rgb8_clipped","ncchannels_set_fg_rgb8_clipped")
		->args({"channels","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:486:1
	makeExtern< int (*)(unsigned long long *,unsigned int) , ncchannels_set_fg_palindex , SimNode_ExtFuncCall >(lib,"ncchannels_set_fg_palindex","ncchannels_set_fg_palindex")
		->args({"channels","idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:497:1
	makeExtern< int (*)(unsigned long long *,unsigned int) , ncchannels_set_fg_rgb , SimNode_ExtFuncCall >(lib,"ncchannels_set_fg_rgb","ncchannels_set_fg_rgb")
		->args({"channels","rgb"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:509:1
	makeExtern< int (*)(unsigned long long *,unsigned int,unsigned int,unsigned int) , ncchannels_set_bg_rgb8 , SimNode_ExtFuncCall >(lib,"ncchannels_set_bg_rgb8","ncchannels_set_bg_rgb8")
		->args({"channels","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:520:1
	makeExtern< void (*)(unsigned long long *,int,int,int) , ncchannels_set_bg_rgb8_clipped , SimNode_ExtFuncCall >(lib,"ncchannels_set_bg_rgb8_clipped","ncchannels_set_bg_rgb8_clipped")
		->args({"channels","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:529:1
	makeExtern< int (*)(unsigned long long *,unsigned int) , ncchannels_set_bg_palindex , SimNode_ExtFuncCall >(lib,"ncchannels_set_bg_palindex","ncchannels_set_bg_palindex")
		->args({"channels","idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:540:1
	makeExtern< int (*)(unsigned long long *,unsigned int) , ncchannels_set_bg_rgb , SimNode_ExtFuncCall >(lib,"ncchannels_set_bg_rgb","ncchannels_set_bg_rgb")
		->args({"channels","rgb"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:551:1
	makeExtern< bool (*)(uint64_t) , ncchannels_fg_default_p , SimNode_ExtFuncCall >(lib,"ncchannels_fg_default_p","ncchannels_fg_default_p")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:557:1
	makeExtern< bool (*)(uint64_t) , ncchannels_fg_palindex_p , SimNode_ExtFuncCall >(lib,"ncchannels_fg_palindex_p","ncchannels_fg_palindex_p")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:565:1
	makeExtern< bool (*)(uint64_t) , ncchannels_bg_default_p , SimNode_ExtFuncCall >(lib,"ncchannels_bg_default_p","ncchannels_bg_default_p")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:571:1
	makeExtern< bool (*)(uint64_t) , ncchannels_bg_palindex_p , SimNode_ExtFuncCall >(lib,"ncchannels_bg_palindex_p","ncchannels_bg_palindex_p")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:577:1
	makeExtern< uint64_t (*)(unsigned long long *) , ncchannels_set_fg_default , SimNode_ExtFuncCall >(lib,"ncchannels_set_fg_default","ncchannels_set_fg_default")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:586:1
	makeExtern< uint64_t (*)(unsigned long long *) , ncchannels_set_bg_default , SimNode_ExtFuncCall >(lib,"ncchannels_set_bg_default","ncchannels_set_bg_default")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:601:9
	makeExtern< int (*)(const char *,int *,int *) , ncstrwidth , SimNode_ExtFuncCall >(lib,"ncstrwidth","ncstrwidth")
		->args({"egcs","validbytes","validwidth"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:609:9
	makeExtern< int (*)(const unsigned int *,unsigned int,unsigned char *,size_t) , notcurses_ucs32_to_utf8 , SimNode_ExtFuncCall >(lib,"notcurses_ucs32_to_utf8","notcurses_ucs32_to_utf8")
		->args({"ucs32","ucs32count","resultbuf","buflen"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:741:1
	makeExtern< void (*)(nccell *) , nccell_init , SimNode_ExtFuncCall >(lib,"nccell_init","nccell_init")
		->args({"c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:748:9
	makeExtern< int (*)(ncplane *,nccell *,const char *) , nccell_load , SimNode_ExtFuncCall >(lib,"nccell_load","nccell_load")
		->args({"n","c","gcluster"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:752:1
	makeExtern< int (*)(ncplane *,nccell *,const char *,unsigned short,uint64_t) , nccell_prime , SimNode_ExtFuncCall >(lib,"nccell_prime","nccell_prime")
		->args({"n","c","gcluster","stylemask","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:762:9
	makeExtern< int (*)(ncplane *,nccell *,const nccell *) , nccell_duplicate , SimNode_ExtFuncCall >(lib,"nccell_duplicate","nccell_duplicate")
		->args({"n","targ","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:765:10
	makeExtern< void (*)(ncplane *,nccell *) , nccell_release , SimNode_ExtFuncCall >(lib,"nccell_release","nccell_release")
		->args({"n","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:780:1
	makeExtern< void (*)(nccell *,unsigned int) , nccell_set_styles , SimNode_ExtFuncCall >(lib,"nccell_set_styles","nccell_set_styles")
		->args({"c","stylebits"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

