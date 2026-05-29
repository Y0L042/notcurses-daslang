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
void Module_dasNotcurses::initFunctions_16() {
// from notcurses.h:4389:1
	makeExtern< uint64_t (*)(nctabbed *) , nctabbed_hdrchan , SimNode_ExtFuncCall >(lib,"nctabbed_hdrchan","nctabbed_hdrchan")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4396:1
	makeExtern< uint64_t (*)(nctabbed *) , nctabbed_selchan , SimNode_ExtFuncCall >(lib,"nctabbed_selchan","nctabbed_selchan")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4403:1
	makeExtern< uint64_t (*)(nctabbed *) , nctabbed_sepchan , SimNode_ExtFuncCall >(lib,"nctabbed_sepchan","nctabbed_sepchan")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4412:17
	makeExtern< const char * (*)(nctabbed *) , nctabbed_separator , SimNode_ExtFuncCall >(lib,"nctabbed_separator","nctabbed_separator")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4416:9
	makeExtern< int (*)(nctabbed *) , nctabbed_separator_width , SimNode_ExtFuncCall >(lib,"nctabbed_separator_width","nctabbed_separator_width")
		->args({"nt"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4420:10
	makeExtern< void (*)(nctabbed *,uint64_t) , nctabbed_set_hdrchan , SimNode_ExtFuncCall >(lib,"nctabbed_set_hdrchan","nctabbed_set_hdrchan")
		->args({"nt","chan"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4424:10
	makeExtern< void (*)(nctabbed *,uint64_t) , nctabbed_set_selchan , SimNode_ExtFuncCall >(lib,"nctabbed_set_selchan","nctabbed_set_selchan")
		->args({"nt","chan"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4428:10
	makeExtern< void (*)(nctabbed *,uint64_t) , nctabbed_set_sepchan , SimNode_ExtFuncCall >(lib,"nctabbed_set_sepchan","nctabbed_set_sepchan")
		->args({"nt","chan"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4436:9
	makeExtern< int (*)(nctab *,const char *) , nctab_set_name , SimNode_ExtFuncCall >(lib,"nctab_set_name","nctab_set_name")
		->args({"t","newname"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4440:11
	makeExtern< void * (*)(nctab *,void *) , nctab_set_userptr , SimNode_ExtFuncCall >(lib,"nctab_set_userptr","nctab_set_userptr")
		->args({"t","newopaque"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4445:9
	makeExtern< int (*)(nctabbed *,const char *) , nctabbed_set_separator , SimNode_ExtFuncCall >(lib,"nctabbed_set_separator","nctabbed_set_separator")
		->args({"nt","separator"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4514:27
	makeExtern< ncuplot * (*)(ncplane *,const ncplot_options *,uint64_t,uint64_t) , ncuplot_create , SimNode_ExtFuncCall >(lib,"ncuplot_create","ncuplot_create")
		->args({"n","opts","miny","maxy"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4518:27
	makeExtern< ncdplot * (*)(ncplane *,const ncplot_options *,double,double) , ncdplot_create , SimNode_ExtFuncCall >(lib,"ncdplot_create","ncdplot_create")
		->args({"n","opts","miny","maxy"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4523:21
	makeExtern< ncplane * (*)(ncuplot *) , ncuplot_plane , SimNode_ExtFuncCall >(lib,"ncuplot_plane","ncuplot_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4526:21
	makeExtern< ncplane * (*)(ncdplot *) , ncdplot_plane , SimNode_ExtFuncCall >(lib,"ncdplot_plane","ncdplot_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4533:9
	makeExtern< int (*)(ncuplot *,uint64_t,uint64_t) , ncuplot_add_sample , SimNode_ExtFuncCall >(lib,"ncuplot_add_sample","ncuplot_add_sample")
		->args({"n","x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4535:9
	makeExtern< int (*)(ncdplot *,uint64_t,double) , ncdplot_add_sample , SimNode_ExtFuncCall >(lib,"ncdplot_add_sample","ncdplot_add_sample")
		->args({"n","x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4537:9
	makeExtern< int (*)(ncuplot *,uint64_t,uint64_t) , ncuplot_set_sample , SimNode_ExtFuncCall >(lib,"ncuplot_set_sample","ncuplot_set_sample")
		->args({"n","x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4539:9
	makeExtern< int (*)(ncdplot *,uint64_t,double) , ncdplot_set_sample , SimNode_ExtFuncCall >(lib,"ncdplot_set_sample","ncdplot_set_sample")
		->args({"n","x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4542:9
	makeExtern< int (*)(const ncuplot *,uint64_t,unsigned long long *) , ncuplot_sample , SimNode_ExtFuncCall >(lib,"ncuplot_sample","ncuplot_sample")
		->args({"n","x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4544:9
	makeExtern< int (*)(const ncdplot *,uint64_t,double *) , ncdplot_sample , SimNode_ExtFuncCall >(lib,"ncdplot_sample","ncdplot_sample")
		->args({"n","x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4547:10
	makeExtern< void (*)(ncuplot *) , ncuplot_destroy , SimNode_ExtFuncCall >(lib,"ncuplot_destroy","ncuplot_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4548:10
	makeExtern< void (*)(ncdplot *) , ncdplot_destroy , SimNode_ExtFuncCall >(lib,"ncdplot_destroy","ncdplot_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4570:21
	makeExtern< ncplane * (*)(ncfdplane *) , ncfdplane_plane , SimNode_ExtFuncCall >(lib,"ncfdplane_plane","ncfdplane_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4573:9
	makeExtern< int (*)(ncfdplane *) , ncfdplane_destroy , SimNode_ExtFuncCall >(lib,"ncfdplane_destroy","ncfdplane_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4598:21
	makeExtern< ncplane * (*)(ncsubproc *) , ncsubproc_plane , SimNode_ExtFuncCall >(lib,"ncsubproc_plane","ncsubproc_plane")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4601:9
	makeExtern< int (*)(ncsubproc *) , ncsubproc_destroy , SimNode_ExtFuncCall >(lib,"ncsubproc_destroy","ncsubproc_destroy")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4610:9
	makeExtern< int (*)(ncplane *,unsigned int *,unsigned int *,const void *,size_t) , ncplane_qrcode , SimNode_ExtFuncCall >(lib,"ncplane_qrcode","ncplane_qrcode")
		->args({"n","ymax","xmax","data","len"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4633:28
	makeExtern< ncreader * (*)(ncplane *,const ncreader_options *) , ncreader_create , SimNode_ExtFuncCall >(lib,"ncreader_create","ncreader_create")
		->args({"n","opts"})
		->addToModule(*this, SideEffects::worstDefault);
// from notcurses.h:4637:9
	makeExtern< int (*)(ncreader *) , ncreader_clear , SimNode_ExtFuncCall >(lib,"ncreader_clear","ncreader_clear")
		->args({"n"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

