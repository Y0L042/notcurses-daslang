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
void Module_dasNcdirect::initFunctions_1() {
// from direct.h:68:17
	makeExtern< char * (*)(ncdirect *,const char *) , ncdirect_readline , SimNode_ExtFuncCall >(lib,"ncdirect_readline","ncdirect_readline")
		->args({"nc","prompt"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:73:9
	makeExtern< int (*)(ncdirect *,unsigned int) , ncdirect_set_fg_rgb , SimNode_ExtFuncCall >(lib,"ncdirect_set_fg_rgb","ncdirect_set_fg_rgb")
		->args({"nc","rgb"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:75:9
	makeExtern< int (*)(ncdirect *,unsigned int) , ncdirect_set_bg_rgb , SimNode_ExtFuncCall >(lib,"ncdirect_set_bg_rgb","ncdirect_set_bg_rgb")
		->args({"nc","rgb"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:78:9
	makeExtern< int (*)(ncdirect *,int) , ncdirect_set_fg_palindex , SimNode_ExtFuncCall >(lib,"ncdirect_set_fg_palindex","ncdirect_set_fg_palindex")
		->args({"nc","pidx"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:80:9
	makeExtern< int (*)(ncdirect *,int) , ncdirect_set_bg_palindex , SimNode_ExtFuncCall >(lib,"ncdirect_set_bg_palindex","ncdirect_set_bg_palindex")
		->args({"nc","pidx"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:86:14
	makeExtern< unsigned int (*)(const ncdirect *) , ncdirect_palette_size , SimNode_ExtFuncCall >(lib,"ncdirect_palette_size","ncdirect_palette_size")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:92:9
	makeExtern< int (*)(ncdirect *,uint64_t,const char *) , ncdirect_putstr , SimNode_ExtFuncCall >(lib,"ncdirect_putstr","ncdirect_putstr")
		->args({"nc","channels","utf8"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:99:9
	makeExtern< int (*)(ncdirect *,uint64_t,const char *,int *) , ncdirect_putegc , SimNode_ExtFuncCall >(lib,"ncdirect_putegc","ncdirect_putegc")
		->args({"nc","channels","utf8","sbytes"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:110:9
	makeExtern< int (*)(const ncdirect *) , ncdirect_flush , SimNode_ExtFuncCall >(lib,"ncdirect_flush","ncdirect_flush")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:114:1
	makeExtern< int (*)(ncdirect *,unsigned int,unsigned int,unsigned int) , ncdirect_set_bg_rgb8 , SimNode_ExtFuncCall >(lib,"ncdirect_set_bg_rgb8","ncdirect_set_bg_rgb8")
		->args({"nc","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:122:1
	makeExtern< int (*)(ncdirect *,unsigned int,unsigned int,unsigned int) , ncdirect_set_fg_rgb8 , SimNode_ExtFuncCall >(lib,"ncdirect_set_fg_rgb8","ncdirect_set_fg_rgb8")
		->args({"nc","r","g","b"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:129:9
	makeExtern< int (*)(ncdirect *) , ncdirect_set_fg_default , SimNode_ExtFuncCall >(lib,"ncdirect_set_fg_default","ncdirect_set_fg_default")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:131:9
	makeExtern< int (*)(ncdirect *) , ncdirect_set_bg_default , SimNode_ExtFuncCall >(lib,"ncdirect_set_bg_default","ncdirect_set_bg_default")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:135:14
	makeExtern< unsigned int (*)(ncdirect *) , ncdirect_dim_x , SimNode_ExtFuncCall >(lib,"ncdirect_dim_x","ncdirect_dim_x")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:136:14
	makeExtern< unsigned int (*)(ncdirect *) , ncdirect_dim_y , SimNode_ExtFuncCall >(lib,"ncdirect_dim_y","ncdirect_dim_y")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:142:14
	makeExtern< unsigned short (*)(const ncdirect *) , ncdirect_supported_styles , SimNode_ExtFuncCall >(lib,"ncdirect_supported_styles","ncdirect_supported_styles")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:146:9
	makeExtern< int (*)(ncdirect *,unsigned int) , ncdirect_set_styles , SimNode_ExtFuncCall >(lib,"ncdirect_set_styles","ncdirect_set_styles")
		->args({"n","stylebits"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:148:9
	makeExtern< int (*)(ncdirect *,unsigned int) , ncdirect_on_styles , SimNode_ExtFuncCall >(lib,"ncdirect_on_styles","ncdirect_on_styles")
		->args({"n","stylebits"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:150:9
	makeExtern< int (*)(ncdirect *,unsigned int) , ncdirect_off_styles , SimNode_ExtFuncCall >(lib,"ncdirect_off_styles","ncdirect_off_styles")
		->args({"n","stylebits"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:152:14
	makeExtern< unsigned short (*)(const ncdirect *) , ncdirect_styles , SimNode_ExtFuncCall >(lib,"ncdirect_styles","ncdirect_styles")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:156:9
	makeExtern< int (*)(ncdirect *,int,int) , ncdirect_cursor_move_yx , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_move_yx","ncdirect_cursor_move_yx")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:158:9
	makeExtern< int (*)(ncdirect *) , ncdirect_cursor_enable , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_enable","ncdirect_cursor_enable")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:160:9
	makeExtern< int (*)(ncdirect *) , ncdirect_cursor_disable , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_disable","ncdirect_cursor_disable")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:162:9
	makeExtern< int (*)(ncdirect *,int) , ncdirect_cursor_up , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_up","ncdirect_cursor_up")
		->args({"nc","num"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:164:9
	makeExtern< int (*)(ncdirect *,int) , ncdirect_cursor_left , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_left","ncdirect_cursor_left")
		->args({"nc","num"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:166:9
	makeExtern< int (*)(ncdirect *,int) , ncdirect_cursor_right , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_right","ncdirect_cursor_right")
		->args({"nc","num"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:168:9
	makeExtern< int (*)(ncdirect *,int) , ncdirect_cursor_down , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_down","ncdirect_cursor_down")
		->args({"nc","num"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:174:9
	makeExtern< int (*)(ncdirect *,unsigned int *,unsigned int *) , ncdirect_cursor_yx , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_yx","ncdirect_cursor_yx")
		->args({"n","y","x"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:179:9
	makeExtern< int (*)(ncdirect *) , ncdirect_cursor_push , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_push","ncdirect_cursor_push")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from direct.h:182:9
	makeExtern< int (*)(ncdirect *) , ncdirect_cursor_pop , SimNode_ExtFuncCall >(lib,"ncdirect_cursor_pop","ncdirect_cursor_pop")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

