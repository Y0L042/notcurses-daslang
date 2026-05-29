// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

// from notcurses.h:663:16
struct nccell_GeneratedAnnotation : ManagedStructureAnnotation<nccell> {
	nccell_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("nccell", ml, "nccell") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(gcluster)>("gcluster","gcluster");
		addField<DAS_BIND_MANAGED_FIELD(gcluster_backstop)>("gcluster_backstop","gcluster_backstop");
		addField<DAS_BIND_MANAGED_FIELD(width)>("width","width");
		addField<DAS_BIND_MANAGED_FIELD(stylemask)>("stylemask","stylemask");
		addField<DAS_BIND_MANAGED_FIELD(channels)>("channels","channels");
	}
};

// from notcurses.h:1043:16
struct notcurses_options_GeneratedAnnotation : ManagedStructureAnnotation<notcurses_options> {
	notcurses_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("notcurses_options", ml, "notcurses_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(termtype)>("termtype","termtype");
		addField<DAS_BIND_MANAGED_FIELD(loglevel)>("loglevel","loglevel");
		addField<DAS_BIND_MANAGED_FIELD(margin_t)>("margin_t","margin_t");
		addField<DAS_BIND_MANAGED_FIELD(margin_r)>("margin_r","margin_r");
		addField<DAS_BIND_MANAGED_FIELD(margin_b)>("margin_b","margin_b");
		addField<DAS_BIND_MANAGED_FIELD(margin_l)>("margin_l","margin_l");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:1209:16
struct ncinput_GeneratedAnnotation : ManagedStructureAnnotation<ncinput> {
	ncinput_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncinput", ml, "ncinput") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(id)>("id","id");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(utf8)>("utf8","utf8");
		addField<DAS_BIND_MANAGED_FIELD(alt)>("alt","alt");
		addField<DAS_BIND_MANAGED_FIELD(shift)>("shift","shift");
		addField<DAS_BIND_MANAGED_FIELD(ctrl)>("ctrl","ctrl");
		addField<DAS_BIND_MANAGED_FIELD(evtype)>("evtype","evtype");
		addField<DAS_BIND_MANAGED_FIELD(modifiers)>("modifiers","modifiers");
		addField<DAS_BIND_MANAGED_FIELD(ypx)>("ypx","ypx");
		addField<DAS_BIND_MANAGED_FIELD(xpx)>("xpx","xpx");
		addField<DAS_BIND_MANAGED_FIELD(eff_text)>("eff_text","eff_text");
	}
};

// from notcurses.h:1464:16
struct ncplane_options_GeneratedAnnotation : ManagedStructureAnnotation<ncplane_options> {
	ncplane_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncplane_options", ml, "ncplane_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(rows)>("rows","rows");
		addField<DAS_BIND_MANAGED_FIELD(cols)>("cols","cols");
		addField<DAS_BIND_MANAGED_FIELD(userptr)>("userptr","userptr");
		addField<DAS_BIND_MANAGED_FIELD(name)>("name","name");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
		addField<DAS_BIND_MANAGED_FIELD(margin_b)>("margin_b","margin_b");
		addField<DAS_BIND_MANAGED_FIELD(margin_r)>("margin_r","margin_r");
	}
};

// from notcurses.h:1584:16
struct ncpalette_GeneratedAnnotation : ManagedStructureAnnotation<ncpalette> {
	ncpalette_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncpalette", ml, "ncpalette") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(chans)>("chans","chans");
	}
};

// from notcurses.h:1636:16
struct nccapabilities_GeneratedAnnotation : ManagedStructureAnnotation<nccapabilities> {
	nccapabilities_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("nccapabilities", ml, "nccapabilities") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(colors)>("colors","colors");
		addField<DAS_BIND_MANAGED_FIELD(utf8)>("utf8","utf8");
		addField<DAS_BIND_MANAGED_FIELD(rgb)>("rgb","rgb");
		addField<DAS_BIND_MANAGED_FIELD(can_change_colors)>("can_change_colors","can_change_colors");
		addField<DAS_BIND_MANAGED_FIELD(halfblocks)>("halfblocks","halfblocks");
		addField<DAS_BIND_MANAGED_FIELD(quadrants)>("quadrants","quadrants");
		addField<DAS_BIND_MANAGED_FIELD(sextants)>("sextants","sextants");
		addField<DAS_BIND_MANAGED_FIELD(octants)>("octants","octants");
		addField<DAS_BIND_MANAGED_FIELD(braille)>("braille","braille");
	}
};

// from notcurses.h:1781:16
struct ncstats_GeneratedAnnotation : ManagedStructureAnnotation<ncstats> {
	ncstats_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncstats", ml, "ncstats") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(renders)>("renders","renders");
		addField<DAS_BIND_MANAGED_FIELD(writeouts)>("writeouts","writeouts");
		addField<DAS_BIND_MANAGED_FIELD(failed_renders)>("failed_renders","failed_renders");
		addField<DAS_BIND_MANAGED_FIELD(failed_writeouts)>("failed_writeouts","failed_writeouts");
		addField<DAS_BIND_MANAGED_FIELD(raster_bytes)>("raster_bytes","raster_bytes");
		addField<DAS_BIND_MANAGED_FIELD(raster_max_bytes)>("raster_max_bytes","raster_max_bytes");
		addField<DAS_BIND_MANAGED_FIELD(raster_min_bytes)>("raster_min_bytes","raster_min_bytes");
		addField<DAS_BIND_MANAGED_FIELD(render_ns)>("render_ns","render_ns");
		addField<DAS_BIND_MANAGED_FIELD(render_max_ns)>("render_max_ns","render_max_ns");
		addField<DAS_BIND_MANAGED_FIELD(render_min_ns)>("render_min_ns","render_min_ns");
		addField<DAS_BIND_MANAGED_FIELD(raster_ns)>("raster_ns","raster_ns");
		addField<DAS_BIND_MANAGED_FIELD(raster_max_ns)>("raster_max_ns","raster_max_ns");
		addField<DAS_BIND_MANAGED_FIELD(raster_min_ns)>("raster_min_ns","raster_min_ns");
		addField<DAS_BIND_MANAGED_FIELD(writeout_ns)>("writeout_ns","writeout_ns");
		addField<DAS_BIND_MANAGED_FIELD(writeout_max_ns)>("writeout_max_ns","writeout_max_ns");
		addField<DAS_BIND_MANAGED_FIELD(writeout_min_ns)>("writeout_min_ns","writeout_min_ns");
		addField<DAS_BIND_MANAGED_FIELD(cellelisions)>("cellelisions","cellelisions");
		addField<DAS_BIND_MANAGED_FIELD(cellemissions)>("cellemissions","cellemissions");
		addField<DAS_BIND_MANAGED_FIELD(fgelisions)>("fgelisions","fgelisions");
		addField<DAS_BIND_MANAGED_FIELD(fgemissions)>("fgemissions","fgemissions");
		addField<DAS_BIND_MANAGED_FIELD(bgelisions)>("bgelisions","bgelisions");
		addField<DAS_BIND_MANAGED_FIELD(bgemissions)>("bgemissions","bgemissions");
		addField<DAS_BIND_MANAGED_FIELD(defaultelisions)>("defaultelisions","defaultelisions");
		addField<DAS_BIND_MANAGED_FIELD(defaultemissions)>("defaultemissions","defaultemissions");
		addField<DAS_BIND_MANAGED_FIELD(refreshes)>("refreshes","refreshes");
		addField<DAS_BIND_MANAGED_FIELD(sprixelemissions)>("sprixelemissions","sprixelemissions");
		addField<DAS_BIND_MANAGED_FIELD(sprixelelisions)>("sprixelelisions","sprixelelisions");
		addField<DAS_BIND_MANAGED_FIELD(sprixelbytes)>("sprixelbytes","sprixelbytes");
		addField<DAS_BIND_MANAGED_FIELD(appsync_updates)>("appsync_updates","appsync_updates");
		addField<DAS_BIND_MANAGED_FIELD(input_errors)>("input_errors","input_errors");
		addField<DAS_BIND_MANAGED_FIELD(input_events)>("input_events","input_events");
		addField<DAS_BIND_MANAGED_FIELD(hpa_gratuitous)>("hpa_gratuitous","hpa_gratuitous");
		addField<DAS_BIND_MANAGED_FIELD(cell_geo_changes)>("cell_geo_changes","cell_geo_changes");
		addField<DAS_BIND_MANAGED_FIELD(pixel_geo_changes)>("pixel_geo_changes","pixel_geo_changes");
		addField<DAS_BIND_MANAGED_FIELD(fbbytes)>("fbbytes","fbbytes");
		addField<DAS_BIND_MANAGED_FIELD(planes)>("planes","planes");
	}
};

// from notcurses.h:3349:8
struct ncvisual_options_GeneratedAnnotation : ManagedStructureAnnotation<ncvisual_options> {
	ncvisual_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncvisual_options", ml, "ncvisual_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(n)>("n","n");
		addField<DAS_BIND_MANAGED_FIELD(scaling)>("scaling","scaling");
		addField<DAS_BIND_MANAGED_FIELD(y)>("y","y");
		addField<DAS_BIND_MANAGED_FIELD(x)>("x","x");
		addField<DAS_BIND_MANAGED_FIELD(begy)>("begy","begy");
		addField<DAS_BIND_MANAGED_FIELD(begx)>("begx","begx");
		addField<DAS_BIND_MANAGED_FIELD(leny)>("leny","leny");
		addField<DAS_BIND_MANAGED_FIELD(lenx)>("lenx","lenx");
		addField<DAS_BIND_MANAGED_FIELD(blitter)>("blitter","blitter");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
		addField<DAS_BIND_MANAGED_FIELD(transcolor)>("transcolor","transcolor");
		addField<DAS_BIND_MANAGED_FIELD(pxoffy)>("pxoffy","pxoffy");
		addField<DAS_BIND_MANAGED_FIELD(pxoffx)>("pxoffx","pxoffx");
	}
};

// from notcurses.h:3401:16
struct ncvgeom_GeneratedAnnotation : ManagedStructureAnnotation<ncvgeom> {
	ncvgeom_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncvgeom", ml, "ncvgeom") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(pixy)>("pixy","pixy");
		addField<DAS_BIND_MANAGED_FIELD(pixx)>("pixx","pixx");
		addField<DAS_BIND_MANAGED_FIELD(cdimy)>("cdimy","cdimy");
		addField<DAS_BIND_MANAGED_FIELD(cdimx)>("cdimx","cdimx");
		addField<DAS_BIND_MANAGED_FIELD(rpixy)>("rpixy","rpixy");
		addField<DAS_BIND_MANAGED_FIELD(rpixx)>("rpixx","rpixx");
		addField<DAS_BIND_MANAGED_FIELD(rcelly)>("rcelly","rcelly");
		addField<DAS_BIND_MANAGED_FIELD(rcellx)>("rcellx","rcellx");
		addField<DAS_BIND_MANAGED_FIELD(scaley)>("scaley","scaley");
		addField<DAS_BIND_MANAGED_FIELD(scalex)>("scalex","scalex");
		addField<DAS_BIND_MANAGED_FIELD(begy)>("begy","begy");
		addField<DAS_BIND_MANAGED_FIELD(begx)>("begx","begx");
		addField<DAS_BIND_MANAGED_FIELD(leny)>("leny","leny");
		addField<DAS_BIND_MANAGED_FIELD(lenx)>("lenx","lenx");
		addField<DAS_BIND_MANAGED_FIELD(maxpixely)>("maxpixely","maxpixely");
		addField<DAS_BIND_MANAGED_FIELD(maxpixelx)>("maxpixelx","maxpixelx");
		addField<DAS_BIND_MANAGED_FIELD(blitter)>("blitter","blitter");
	}
};

// from notcurses.h:3704:16
struct ncreel_options_GeneratedAnnotation : ManagedStructureAnnotation<ncreel_options> {
	ncreel_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncreel_options", ml, "ncreel_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(bordermask)>("bordermask","bordermask");
		addField<DAS_BIND_MANAGED_FIELD(borderchan)>("borderchan","borderchan");
		addField<DAS_BIND_MANAGED_FIELD(tabletmask)>("tabletmask","tabletmask");
		addField<DAS_BIND_MANAGED_FIELD(tabletchan)>("tabletchan","tabletchan");
		addField<DAS_BIND_MANAGED_FIELD(focusedchan)>("focusedchan","focusedchan");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:3911:8
struct ncselector_item_GeneratedAnnotation : ManagedStructureAnnotation<ncselector_item> {
	ncselector_item_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncselector_item", ml, "ncselector_item") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(option)>("option","option");
		addField<DAS_BIND_MANAGED_FIELD(desc)>("desc","desc");
	}
};

// from notcurses.h:3916:16
struct ncselector_options_GeneratedAnnotation : ManagedStructureAnnotation<ncselector_options> {
	ncselector_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncselector_options", ml, "ncselector_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(title)>("title","title");
		addField<DAS_BIND_MANAGED_FIELD(secondary)>("secondary","secondary");
		addField<DAS_BIND_MANAGED_FIELD(footer)>("footer","footer");
		addField<DAS_BIND_MANAGED_FIELD(items)>("items","items");
		addField<DAS_BIND_MANAGED_FIELD(defidx)>("defidx","defidx");
		addField<DAS_BIND_MANAGED_FIELD(maxdisplay)>("maxdisplay","maxdisplay");
		addField<DAS_BIND_MANAGED_FIELD(opchannels)>("opchannels","opchannels");
		addField<DAS_BIND_MANAGED_FIELD(descchannels)>("descchannels","descchannels");
		addField<DAS_BIND_MANAGED_FIELD(titlechannels)>("titlechannels","titlechannels");
		addField<DAS_BIND_MANAGED_FIELD(footchannels)>("footchannels","footchannels");
		addField<DAS_BIND_MANAGED_FIELD(boxchannels)>("boxchannels","boxchannels");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:3971:8
struct ncmselector_item_GeneratedAnnotation : ManagedStructureAnnotation<ncmselector_item> {
	ncmselector_item_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncmselector_item", ml, "ncmselector_item") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(option)>("option","option");
		addField<DAS_BIND_MANAGED_FIELD(desc)>("desc","desc");
		addField<DAS_BIND_MANAGED_FIELD(selected)>("selected","selected");
	}
};

// from notcurses.h:3998:16
struct ncmultiselector_options_GeneratedAnnotation : ManagedStructureAnnotation<ncmultiselector_options> {
	ncmultiselector_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncmultiselector_options", ml, "ncmultiselector_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(title)>("title","title");
		addField<DAS_BIND_MANAGED_FIELD(secondary)>("secondary","secondary");
		addField<DAS_BIND_MANAGED_FIELD(footer)>("footer","footer");
		addField<DAS_BIND_MANAGED_FIELD(items)>("items","items");
		addField<DAS_BIND_MANAGED_FIELD(maxdisplay)>("maxdisplay","maxdisplay");
		addField<DAS_BIND_MANAGED_FIELD(opchannels)>("opchannels","opchannels");
		addField<DAS_BIND_MANAGED_FIELD(descchannels)>("descchannels","descchannels");
		addField<DAS_BIND_MANAGED_FIELD(titlechannels)>("titlechannels","titlechannels");
		addField<DAS_BIND_MANAGED_FIELD(footchannels)>("footchannels","footchannels");
		addField<DAS_BIND_MANAGED_FIELD(boxchannels)>("boxchannels","boxchannels");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:4045:8
struct nctree_item_GeneratedAnnotation : ManagedStructureAnnotation<nctree_item> {
	nctree_item_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("nctree_item", ml, "nctree_item") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(curry)>("curry","curry");
		addField<DAS_BIND_MANAGED_FIELD(subs)>("subs","subs");
		addField<DAS_BIND_MANAGED_FIELD(subcount)>("subcount","subcount");
	}
};

// from notcurses.h:4051:16
struct nctree_options_GeneratedAnnotation : ManagedStructureAnnotation<nctree_options> {
	nctree_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("nctree_options", ml, "nctree_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(items)>("items","items");
		addField<DAS_BIND_MANAGED_FIELD(count)>("count","count");
		addField<DAS_BIND_MANAGED_FIELD(indentcols)>("indentcols","indentcols");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:4119:8
struct ncmenu_item_GeneratedAnnotation : ManagedStructureAnnotation<ncmenu_item> {
	ncmenu_item_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncmenu_item", ml, "ncmenu_item") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(desc)>("desc","desc");
		addField<DAS_BIND_MANAGED_FIELD(shortcut)>("shortcut","shortcut");
	}
};

// from notcurses.h:4124:8
struct ncmenu_section_GeneratedAnnotation : ManagedStructureAnnotation<ncmenu_section> {
	ncmenu_section_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncmenu_section", ml, "ncmenu_section") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(name)>("name","name");
		addField<DAS_BIND_MANAGED_FIELD(itemcount)>("itemcount","itemcount");
		addField<DAS_BIND_MANAGED_FIELD(items)>("items","items");
		addField<DAS_BIND_MANAGED_FIELD(shortcut)>("shortcut","shortcut");
	}
};

// from notcurses.h:4134:16
struct ncmenu_options_GeneratedAnnotation : ManagedStructureAnnotation<ncmenu_options> {
	ncmenu_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncmenu_options", ml, "ncmenu_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(sections)>("sections","sections");
		addField<DAS_BIND_MANAGED_FIELD(sectioncount)>("sectioncount","sectioncount");
		addField<DAS_BIND_MANAGED_FIELD(headerchannels)>("headerchannels","headerchannels");
		addField<DAS_BIND_MANAGED_FIELD(sectionchannels)>("sectionchannels","sectionchannels");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:4209:16
struct ncprogbar_options_GeneratedAnnotation : ManagedStructureAnnotation<ncprogbar_options> {
	ncprogbar_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncprogbar_options", ml, "ncprogbar_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(ulchannel)>("ulchannel","ulchannel");
		addField<DAS_BIND_MANAGED_FIELD(urchannel)>("urchannel","urchannel");
		addField<DAS_BIND_MANAGED_FIELD(blchannel)>("blchannel","blchannel");
		addField<DAS_BIND_MANAGED_FIELD(brchannel)>("brchannel","brchannel");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:4243:16
struct nctabbed_options_GeneratedAnnotation : ManagedStructureAnnotation<nctabbed_options> {
	nctabbed_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("nctabbed_options", ml, "nctabbed_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(selchan)>("selchan","selchan");
		addField<DAS_BIND_MANAGED_FIELD(hdrchan)>("hdrchan","hdrchan");
		addField<DAS_BIND_MANAGED_FIELD(sepchan)>("sepchan","sepchan");
		addField<DAS_BIND_MANAGED_FIELD(separator)>("separator","separator");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:4491:16
struct ncplot_options_GeneratedAnnotation : ManagedStructureAnnotation<ncplot_options> {
	ncplot_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncplot_options", ml, "ncplot_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(maxchannels)>("maxchannels","maxchannels");
		addField<DAS_BIND_MANAGED_FIELD(minchannels)>("minchannels","minchannels");
		addField<DAS_BIND_MANAGED_FIELD(legendstyle)>("legendstyle","legendstyle");
		addField<DAS_BIND_MANAGED_FIELD(gridtype)>("gridtype","gridtype");
		addField<DAS_BIND_MANAGED_FIELD(rangex)>("rangex","rangex");
		addField<DAS_BIND_MANAGED_FIELD(title)>("title","title");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:4558:16
struct ncfdplane_options_GeneratedAnnotation : ManagedStructureAnnotation<ncfdplane_options> {
	ncfdplane_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncfdplane_options", ml, "ncfdplane_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(curry)>("curry","curry");
		addField<DAS_BIND_MANAGED_FIELD(follow)>("follow","follow");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:4575:16
struct ncsubproc_options_GeneratedAnnotation : ManagedStructureAnnotation<ncsubproc_options> {
	ncsubproc_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncsubproc_options", ml, "ncsubproc_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(curry)>("curry","curry");
		addField<DAS_BIND_MANAGED_FIELD(restart_period)>("restart_period","restart_period");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

// from notcurses.h:4624:16
struct ncreader_options_GeneratedAnnotation : ManagedStructureAnnotation<ncreader_options> {
	ncreader_options_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("ncreader_options", ml, "ncreader_options") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(tchannels)>("tchannels","tchannels");
		addField<DAS_BIND_MANAGED_FIELD(tattrword)>("tattrword","tattrword");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

