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
void Module_dasNotcurses::initFunctions_1() {
// from notcurses.h:39:17
	makeExtern< const char * (*)() , notcurses_version , SimNode_ExtFuncCall >(lib,"notcurses_version","notcurses_version")
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:42:10
	makeExtern< void (*)(int *,int *,int *,int *) , notcurses_version_components , SimNode_ExtFuncCall >(lib,"notcurses_version_components","notcurses_version_components")
		->args({"major","minor","patch","tweak"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:143:1
	makeExtern< unsigned int (*)(unsigned int) , ncchannel_alpha , SimNode_ExtFuncCall >(lib,"ncchannel_alpha","ncchannel_alpha")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:151:1
	makeExtern< int (*)(unsigned int *,unsigned int) , ncchannel_set_alpha , SimNode_ExtFuncCall >(lib,"ncchannel_set_alpha","ncchannel_set_alpha")
		->args({"channel","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:164:1
	makeExtern< bool (*)(unsigned int) , ncchannel_default_p , SimNode_ExtFuncCall >(lib,"ncchannel_default_p","ncchannel_default_p")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:170:1
	makeExtern< unsigned int (*)(unsigned int *) , ncchannel_set_default , SimNode_ExtFuncCall >(lib,"ncchannel_set_default","ncchannel_set_default")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:178:1
	makeExtern< bool (*)(unsigned int) , ncchannel_palindex_p , SimNode_ExtFuncCall >(lib,"ncchannel_palindex_p","ncchannel_palindex_p")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:185:1
	makeExtern< unsigned int (*)(unsigned int) , ncchannel_palindex , SimNode_ExtFuncCall >(lib,"ncchannel_palindex","ncchannel_palindex")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:192:1
	makeExtern< int (*)(unsigned int *,unsigned int) , ncchannel_set_palindex , SimNode_ExtFuncCall >(lib,"ncchannel_set_palindex","ncchannel_set_palindex")
		->args({"channel","idx"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:204:1
	makeExtern< bool (*)(unsigned int) , ncchannel_rgb_p , SimNode_ExtFuncCall >(lib,"ncchannel_rgb_p","ncchannel_rgb_p")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:211:1
	makeExtern< unsigned int (*)(unsigned int) , ncchannel_r , SimNode_ExtFuncCall >(lib,"ncchannel_r","ncchannel_r")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:218:1
	makeExtern< unsigned int (*)(unsigned int) , ncchannel_g , SimNode_ExtFuncCall >(lib,"ncchannel_g","ncchannel_g")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:225:1
	makeExtern< unsigned int (*)(unsigned int) , ncchannel_b , SimNode_ExtFuncCall >(lib,"ncchannel_b","ncchannel_b")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:232:1
	makeExtern< unsigned int (*)(unsigned int) , ncchannel_rgb , SimNode_ExtFuncCall >(lib,"ncchannel_rgb","ncchannel_rgb")
		->args({"channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:239:1
	makeExtern< unsigned int (*)(unsigned int,unsigned int *,unsigned int *,unsigned int *) , ncchannel_rgb8 , SimNode_ExtFuncCall >(lib,"ncchannel_rgb8","ncchannel_rgb8")
		->args({"channel","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:251:1
	makeExtern< int (*)(unsigned int *,unsigned int,unsigned int,unsigned int) , ncchannel_set_rgb8 , SimNode_ExtFuncCall >(lib,"ncchannel_set_rgb8","ncchannel_set_rgb8")
		->args({"channel","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:264:1
	makeExtern< int (*)(unsigned int *,unsigned int) , ncchannel_set , SimNode_ExtFuncCall >(lib,"ncchannel_set","ncchannel_set")
		->args({"channel","rgb"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:276:1
	makeExtern< void (*)(unsigned int *,int,int,int) , ncchannel_set_rgb8_clipped , SimNode_ExtFuncCall >(lib,"ncchannel_set_rgb8_clipped","ncchannel_set_rgb8_clipped")
		->args({"channel","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:302:1
	makeExtern< unsigned int (*)(uint64_t) , ncchannels_bchannel , SimNode_ExtFuncCall >(lib,"ncchannels_bchannel","ncchannels_bchannel")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:310:1
	makeExtern< unsigned int (*)(uint64_t) , ncchannels_fchannel , SimNode_ExtFuncCall >(lib,"ncchannels_fchannel","ncchannels_fchannel")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:316:1
	makeExtern< uint64_t (*)(uint64_t) , ncchannels_channels , SimNode_ExtFuncCall >(lib,"ncchannels_channels","ncchannels_channels")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:322:1
	makeExtern< bool (*)(uint64_t) , ncchannels_bg_rgb_p , SimNode_ExtFuncCall >(lib,"ncchannels_bg_rgb_p","ncchannels_bg_rgb_p")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:327:1
	makeExtern< bool (*)(uint64_t) , ncchannels_fg_rgb_p , SimNode_ExtFuncCall >(lib,"ncchannels_fg_rgb_p","ncchannels_fg_rgb_p")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:333:1
	makeExtern< unsigned int (*)(uint64_t) , ncchannels_bg_alpha , SimNode_ExtFuncCall >(lib,"ncchannels_bg_alpha","ncchannels_bg_alpha")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:340:1
	makeExtern< uint64_t (*)(unsigned long long *,unsigned int) , ncchannels_set_bchannel , SimNode_ExtFuncCall >(lib,"ncchannels_set_bchannel","ncchannels_set_bchannel")
		->args({"channels","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:350:1
	makeExtern< uint64_t (*)(unsigned long long *,unsigned int) , ncchannels_set_fchannel , SimNode_ExtFuncCall >(lib,"ncchannels_set_fchannel","ncchannels_set_fchannel")
		->args({"channels","channel"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:359:1
	makeExtern< uint64_t (*)(unsigned long long *,uint64_t) , ncchannels_set_channels , SimNode_ExtFuncCall >(lib,"ncchannels_set_channels","ncchannels_set_channels")
		->args({"dst","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:367:1
	makeExtern< int (*)(unsigned long long *,unsigned int) , ncchannels_set_bg_alpha , SimNode_ExtFuncCall >(lib,"ncchannels_set_bg_alpha","ncchannels_set_bg_alpha")
		->args({"channels","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:381:1
	makeExtern< unsigned int (*)(uint64_t) , ncchannels_fg_alpha , SimNode_ExtFuncCall >(lib,"ncchannels_fg_alpha","ncchannels_fg_alpha")
		->args({"channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:387:1
	makeExtern< int (*)(unsigned long long *,unsigned int) , ncchannels_set_fg_alpha , SimNode_ExtFuncCall >(lib,"ncchannels_set_fg_alpha","ncchannels_set_fg_alpha")
		->args({"channels","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

