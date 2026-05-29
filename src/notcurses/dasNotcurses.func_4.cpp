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
void Module_dasNotcurses::initFunctions_4() {
// from notcurses.h:1100:9
	makeExtern< int (*)(notcurses *) , notcurses_enter_alternate_screen , SimNode_ExtFuncCall >(lib,"notcurses_enter_alternate_screen","notcurses_enter_alternate_screen")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1105:9
	makeExtern< int (*)(notcurses *) , notcurses_leave_alternate_screen , SimNode_ExtFuncCall >(lib,"notcurses_leave_alternate_screen","notcurses_leave_alternate_screen")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1111:21
	makeExtern< ncplane * (*)(notcurses *) , notcurses_stdplane , SimNode_ExtFuncCall >(lib,"notcurses_stdplane","notcurses_stdplane")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1113:27
	makeExtern< const ncplane * (*)(const notcurses *) , notcurses_stdplane_const , SimNode_ExtFuncCall >(lib,"notcurses_stdplane_const","notcurses_stdplane_const")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1117:21
	makeExtern< ncplane * (*)(ncplane *) , ncpile_top , SimNode_ExtFuncCall >(lib,"ncpile_top","ncpile_top")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1121:21
	makeExtern< ncplane * (*)(ncplane *) , ncpile_bottom , SimNode_ExtFuncCall >(lib,"ncpile_bottom","ncpile_bottom")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1126:1
	makeExtern< ncplane * (*)(notcurses *) , notcurses_top , SimNode_ExtFuncCall >(lib,"notcurses_top","notcurses_top")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1132:1
	makeExtern< ncplane * (*)(notcurses *) , notcurses_bottom , SimNode_ExtFuncCall >(lib,"notcurses_bottom","notcurses_bottom")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1138:9
	makeExtern< int (*)(ncplane *) , ncpile_render , SimNode_ExtFuncCall >(lib,"ncpile_render","ncpile_render")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1144:9
	makeExtern< int (*)(ncplane *) , ncpile_rasterize , SimNode_ExtFuncCall >(lib,"ncpile_rasterize","ncpile_rasterize")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1149:1
	makeExtern< int (*)(notcurses *) , notcurses_render , SimNode_ExtFuncCall >(lib,"notcurses_render","notcurses_render")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1161:9
	makeExtern< int (*)(ncplane *,char **,size_t *) , ncpile_render_to_buffer , SimNode_ExtFuncCall >(lib,"ncpile_render_to_buffer","ncpile_render_to_buffer")
		->args({"p","buf","buflen"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1170:10
	makeExtern< void (*)(notcurses *) , notcurses_drop_planes , SimNode_ExtFuncCall >(lib,"notcurses_drop_planes","notcurses_drop_planes")
		->args({"nc"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1190:1
	makeExtern< bool (*)(unsigned int) , nckey_mouse_p , SimNode_ExtFuncCall >(lib,"nckey_mouse_p","nckey_mouse_p")
		->args({"r"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1228:1
	makeExtern< bool (*)(const ncinput *) , ncinput_shift_p , SimNode_ExtFuncCall >(lib,"ncinput_shift_p","ncinput_shift_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1233:1
	makeExtern< bool (*)(const ncinput *) , ncinput_ctrl_p , SimNode_ExtFuncCall >(lib,"ncinput_ctrl_p","ncinput_ctrl_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1238:1
	makeExtern< bool (*)(const ncinput *) , ncinput_alt_p , SimNode_ExtFuncCall >(lib,"ncinput_alt_p","ncinput_alt_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1243:1
	makeExtern< bool (*)(const ncinput *) , ncinput_meta_p , SimNode_ExtFuncCall >(lib,"ncinput_meta_p","ncinput_meta_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1248:1
	makeExtern< bool (*)(const ncinput *) , ncinput_super_p , SimNode_ExtFuncCall >(lib,"ncinput_super_p","ncinput_super_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1253:1
	makeExtern< bool (*)(const ncinput *) , ncinput_hyper_p , SimNode_ExtFuncCall >(lib,"ncinput_hyper_p","ncinput_hyper_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1258:1
	makeExtern< bool (*)(const ncinput *) , ncinput_capslock_p , SimNode_ExtFuncCall >(lib,"ncinput_capslock_p","ncinput_capslock_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1263:1
	makeExtern< bool (*)(const ncinput *) , ncinput_numlock_p , SimNode_ExtFuncCall >(lib,"ncinput_numlock_p","ncinput_numlock_p")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1271:1
	makeExtern< bool (*)(const ncinput *,const ncinput *) , ncinput_equal_p , SimNode_ExtFuncCall >(lib,"ncinput_equal_p","ncinput_equal_p")
		->args({"n1","n2"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1316:9
	makeExtern< int (*)(notcurses *) , notcurses_inputready_fd , SimNode_ExtFuncCall >(lib,"notcurses_inputready_fd","notcurses_inputready_fd")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1322:1
	makeExtern< unsigned int (*)(notcurses *,ncinput *) , notcurses_get_nblock , SimNode_ExtFuncCall >(lib,"notcurses_get_nblock","notcurses_get_nblock")
		->args({"n","ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1330:1
	makeExtern< unsigned int (*)(notcurses *,ncinput *) , notcurses_get_blocking , SimNode_ExtFuncCall >(lib,"notcurses_get_blocking","notcurses_get_blocking")
		->args({"n","ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1336:1
	makeExtern< bool (*)(const ncinput *) , ncinput_nomod_p , SimNode_ExtFuncCall >(lib,"ncinput_nomod_p","ncinput_nomod_p")
		->args({"ni"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1349:9
	makeExtern< int (*)(notcurses *,unsigned int) , notcurses_mice_enable , SimNode_ExtFuncCall >(lib,"notcurses_mice_enable","notcurses_mice_enable")
		->args({"n","eventmask"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1354:1
	makeExtern< int (*)(notcurses *) , notcurses_mice_disable , SimNode_ExtFuncCall >(lib,"notcurses_mice_disable","notcurses_mice_disable")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:1360:9
	makeExtern< int (*)(notcurses *) , notcurses_linesigs_disable , SimNode_ExtFuncCall >(lib,"notcurses_linesigs_disable","notcurses_linesigs_disable")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

