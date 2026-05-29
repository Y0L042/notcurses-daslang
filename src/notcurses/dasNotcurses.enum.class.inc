// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

// from notcurses.h:65:9
class Enumeration_ncblitter_e : public das::Enumeration {
public:
	Enumeration_ncblitter_e() : das::Enumeration("ncblitter_e") {
		external = true;
		cppName = "ncblitter_e";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NCBLIT_DEFAULT", "NCBLIT_DEFAULT", int64_t(ncblitter_e::NCBLIT_DEFAULT), das::LineInfo());
		addIEx("NCBLIT_1x1", "NCBLIT_1x1", int64_t(ncblitter_e::NCBLIT_1x1), das::LineInfo());
		addIEx("NCBLIT_2x1", "NCBLIT_2x1", int64_t(ncblitter_e::NCBLIT_2x1), das::LineInfo());
		addIEx("NCBLIT_2x2", "NCBLIT_2x2", int64_t(ncblitter_e::NCBLIT_2x2), das::LineInfo());
		addIEx("NCBLIT_3x2", "NCBLIT_3x2", int64_t(ncblitter_e::NCBLIT_3x2), das::LineInfo());
		addIEx("NCBLIT_4x2", "NCBLIT_4x2", int64_t(ncblitter_e::NCBLIT_4x2), das::LineInfo());
		addIEx("NCBLIT_BRAILLE", "NCBLIT_BRAILLE", int64_t(ncblitter_e::NCBLIT_BRAILLE), das::LineInfo());
		addIEx("NCBLIT_PIXEL", "NCBLIT_PIXEL", int64_t(ncblitter_e::NCBLIT_PIXEL), das::LineInfo());
		addIEx("NCBLIT_4x1", "NCBLIT_4x1", int64_t(ncblitter_e::NCBLIT_4x1), das::LineInfo());
		addIEx("NCBLIT_8x1", "NCBLIT_8x1", int64_t(ncblitter_e::NCBLIT_8x1), das::LineInfo());
	}
};

// from notcurses.h:80:9
class Enumeration_ncalign_e : public das::Enumeration {
public:
	Enumeration_ncalign_e() : das::Enumeration("ncalign_e") {
		external = true;
		cppName = "ncalign_e";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NCALIGN_UNALIGNED", "NCALIGN_UNALIGNED", int64_t(ncalign_e::NCALIGN_UNALIGNED), das::LineInfo());
		addIEx("NCALIGN_LEFT", "NCALIGN_LEFT", int64_t(ncalign_e::NCALIGN_LEFT), das::LineInfo());
		addIEx("NCALIGN_CENTER", "NCALIGN_CENTER", int64_t(ncalign_e::NCALIGN_CENTER), das::LineInfo());
		addIEx("NCALIGN_RIGHT", "NCALIGN_RIGHT", int64_t(ncalign_e::NCALIGN_RIGHT), das::LineInfo());
	}
};

// from notcurses.h:96:9
class Enumeration_ncscale_e : public das::Enumeration {
public:
	Enumeration_ncscale_e() : das::Enumeration("ncscale_e") {
		external = true;
		cppName = "ncscale_e";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NCSCALE_NONE", "NCSCALE_NONE", int64_t(ncscale_e::NCSCALE_NONE), das::LineInfo());
		addIEx("NCSCALE_SCALE", "NCSCALE_SCALE", int64_t(ncscale_e::NCSCALE_SCALE), das::LineInfo());
		addIEx("NCSCALE_STRETCH", "NCSCALE_STRETCH", int64_t(ncscale_e::NCSCALE_STRETCH), das::LineInfo());
		addIEx("NCSCALE_NONE_HIRES", "NCSCALE_NONE_HIRES", int64_t(ncscale_e::NCSCALE_NONE_HIRES), das::LineInfo());
		addIEx("NCSCALE_SCALE_HIRES", "NCSCALE_SCALE_HIRES", int64_t(ncscale_e::NCSCALE_SCALE_HIRES), das::LineInfo());
	}
};

// from notcurses.h:968:9
class Enumeration_ncloglevel_e : public das::Enumeration {
public:
	Enumeration_ncloglevel_e() : das::Enumeration("ncloglevel_e") {
		external = true;
		cppName = "ncloglevel_e";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NCLOGLEVEL_SILENT", "NCLOGLEVEL_SILENT", int64_t(ncloglevel_e::NCLOGLEVEL_SILENT), das::LineInfo());
		addIEx("NCLOGLEVEL_PANIC", "NCLOGLEVEL_PANIC", int64_t(ncloglevel_e::NCLOGLEVEL_PANIC), das::LineInfo());
		addIEx("NCLOGLEVEL_FATAL", "NCLOGLEVEL_FATAL", int64_t(ncloglevel_e::NCLOGLEVEL_FATAL), das::LineInfo());
		addIEx("RROR", "NCLOGLEVEL_ERROR", int64_t(ncloglevel_e::NCLOGLEVEL_ERROR), das::LineInfo());
		addIEx("NCLOGLEVEL_WARNING", "NCLOGLEVEL_WARNING", int64_t(ncloglevel_e::NCLOGLEVEL_WARNING), das::LineInfo());
		addIEx("NCLOGLEVEL_INFO", "NCLOGLEVEL_INFO", int64_t(ncloglevel_e::NCLOGLEVEL_INFO), das::LineInfo());
		addIEx("NCLOGLEVEL_VERBOSE", "NCLOGLEVEL_VERBOSE", int64_t(ncloglevel_e::NCLOGLEVEL_VERBOSE), das::LineInfo());
		addIEx("NCLOGLEVEL_DEBUG", "NCLOGLEVEL_DEBUG", int64_t(ncloglevel_e::NCLOGLEVEL_DEBUG), das::LineInfo());
		addIEx("NCLOGLEVEL_TRACE", "NCLOGLEVEL_TRACE", int64_t(ncloglevel_e::NCLOGLEVEL_TRACE), das::LineInfo());
	}
};

// from notcurses.h:1194:9
class Enumeration_ncintype_e : public das::Enumeration {
public:
	Enumeration_ncintype_e() : das::Enumeration("ncintype_e") {
		external = true;
		cppName = "ncintype_e";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NCTYPE_UNKNOWN", "NCTYPE_UNKNOWN", int64_t(ncintype_e::NCTYPE_UNKNOWN), das::LineInfo());
		addIEx("NCTYPE_PRESS", "NCTYPE_PRESS", int64_t(ncintype_e::NCTYPE_PRESS), das::LineInfo());
		addIEx("NCTYPE_REPEAT", "NCTYPE_REPEAT", int64_t(ncintype_e::NCTYPE_REPEAT), das::LineInfo());
		addIEx("NCTYPE_RELEASE", "NCTYPE_RELEASE", int64_t(ncintype_e::NCTYPE_RELEASE), das::LineInfo());
	}
};

// from notcurses.h:1672:9
class Enumeration_ncpixelimpl_e : public das::Enumeration {
public:
	Enumeration_ncpixelimpl_e() : das::Enumeration("ncpixelimpl_e") {
		external = true;
		cppName = "ncpixelimpl_e";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NCPIXEL_NONE", "NCPIXEL_NONE", int64_t(ncpixelimpl_e::NCPIXEL_NONE), das::LineInfo());
		addIEx("NCPIXEL_SIXEL", "NCPIXEL_SIXEL", int64_t(ncpixelimpl_e::NCPIXEL_SIXEL), das::LineInfo());
		addIEx("NCPIXEL_LINUXFB", "NCPIXEL_LINUXFB", int64_t(ncpixelimpl_e::NCPIXEL_LINUXFB), das::LineInfo());
		addIEx("NCPIXEL_ITERM2", "NCPIXEL_ITERM2", int64_t(ncpixelimpl_e::NCPIXEL_ITERM2), das::LineInfo());
		addIEx("NCPIXEL_KITTY_STATIC", "NCPIXEL_KITTY_STATIC", int64_t(ncpixelimpl_e::NCPIXEL_KITTY_STATIC), das::LineInfo());
		addIEx("NCPIXEL_KITTY_ANIMATED", "NCPIXEL_KITTY_ANIMATED", int64_t(ncpixelimpl_e::NCPIXEL_KITTY_ANIMATED), das::LineInfo());
		addIEx("NCPIXEL_KITTY_SELFREF", "NCPIXEL_KITTY_SELFREF", int64_t(ncpixelimpl_e::NCPIXEL_KITTY_SELFREF), das::LineInfo());
	}
};

