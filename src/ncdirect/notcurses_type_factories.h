#pragma once
// Type-factory declarations for notcurses types used by the ncdirect module.
//
// These types are owned by (and registered in) the dasNotcurses module; the
// ncdirect binder marks them `already_defined`, so it does NOT emit
// MAKE_EXTERNAL_TYPE_FACTORY / IMPLEMENT_EXTERNAL_TYPE_FACTORY for them. But the
// ncdirect translation units still need a typeFactory<T> specialization so that
// makeType<T *>() (e.g. ncdirect *, ncplane *, ncinput *) can resolve at compile
// time -- otherwise the compiler falls back to the primary template, hits
// ToBasicType<T> for the opaque struct, and fails the "Type::none" static assert.
//
// The make() body is `inline` and resolves the handle by name from the shared
// library at runtime (the dasNotcurses module is loaded alongside dasNcdirect),
// so no link-time dependency on the dasNotcurses import library is required.
// This mirrors raylib-daslang's raylib_type_factories.h pattern.
//
// notcurses.h (via ncdirect_ffi.h / direct.h) must already be included before
// this header so the struct names are declared.

#define NOTCURSES_TYPE_FACTORY(TYPE, CTYPE) \
namespace das { \
    template <> struct typeFactory<CTYPE> { \
        static TypeDeclPtr make(const ModuleLibrary & library) { \
            return makeHandleType(library, #TYPE); \
        } \
    }; \
    template <> struct typeName<CTYPE> { \
        constexpr static const char * name() { return #TYPE; } \
    }; \
}

NOTCURSES_TYPE_FACTORY(notcurses,notcurses)
NOTCURSES_TYPE_FACTORY(ncplane,ncplane)
NOTCURSES_TYPE_FACTORY(ncvisual,ncvisual)
NOTCURSES_TYPE_FACTORY(ncuplot,ncuplot)
NOTCURSES_TYPE_FACTORY(ncdplot,ncdplot)
NOTCURSES_TYPE_FACTORY(ncprogbar,ncprogbar)
NOTCURSES_TYPE_FACTORY(ncfdplane,ncfdplane)
NOTCURSES_TYPE_FACTORY(ncsubproc,ncsubproc)
NOTCURSES_TYPE_FACTORY(ncselector,ncselector)
NOTCURSES_TYPE_FACTORY(ncmultiselector,ncmultiselector)
NOTCURSES_TYPE_FACTORY(ncreader,ncreader)
NOTCURSES_TYPE_FACTORY(ncfadectx,ncfadectx)
NOTCURSES_TYPE_FACTORY(nctablet,nctablet)
NOTCURSES_TYPE_FACTORY(ncreel,ncreel)
NOTCURSES_TYPE_FACTORY(nctab,nctab)
NOTCURSES_TYPE_FACTORY(nctabbed,nctabbed)
NOTCURSES_TYPE_FACTORY(ncdirect,ncdirect)
NOTCURSES_TYPE_FACTORY(nccell,nccell)
NOTCURSES_TYPE_FACTORY(notcurses_options,notcurses_options)
NOTCURSES_TYPE_FACTORY(ncinput,ncinput)
NOTCURSES_TYPE_FACTORY(ncplane_options,ncplane_options)
NOTCURSES_TYPE_FACTORY(ncpalette,ncpalette)
NOTCURSES_TYPE_FACTORY(nccapabilities,nccapabilities)
NOTCURSES_TYPE_FACTORY(ncstats,ncstats)
NOTCURSES_TYPE_FACTORY(ncvgeom,ncvgeom)
NOTCURSES_TYPE_FACTORY(ncreel_options,ncreel_options)
NOTCURSES_TYPE_FACTORY(ncselector_options,ncselector_options)
NOTCURSES_TYPE_FACTORY(ncmultiselector_options,ncmultiselector_options)
NOTCURSES_TYPE_FACTORY(nctree_options,nctree_options)
NOTCURSES_TYPE_FACTORY(ncmenu_options,ncmenu_options)
NOTCURSES_TYPE_FACTORY(ncprogbar_options,ncprogbar_options)
NOTCURSES_TYPE_FACTORY(nctabbed_options,nctabbed_options)
NOTCURSES_TYPE_FACTORY(ncplot_options,ncplot_options)
NOTCURSES_TYPE_FACTORY(ncfdplane_options,ncfdplane_options)
NOTCURSES_TYPE_FACTORY(ncsubproc_options,ncsubproc_options)
NOTCURSES_TYPE_FACTORY(ncreader_options,ncreader_options)
NOTCURSES_TYPE_FACTORY(ncvisual_options,ncvisual_options)

// Enums declared in notcurses.h (owned by dasNotcurses) but used by-value in
// ncdirect signatures (e.g. ncdirect_render_image takes ncalign_e/ncblitter_e/
// ncscale_e). They need both a typeFactory (so makeType resolves the enum type)
// and a cast<> specialization (so the interop layer can marshal them by value).
// DAS_BASE_BIND_ENUM_GEN provides the typeFactory via makeEnumType; the enum is
// already registered as an enumeration in the dasNotcurses module, so this only
// declares how ncdirect refers to it by name.
DAS_BASE_BIND_ENUM_GEN(ncalign_e,ncalign_e)
DAS_BASE_BIND_ENUM_GEN(ncblitter_e,ncblitter_e)
DAS_BASE_BIND_ENUM_GEN(ncscale_e,ncscale_e)
DAS_BIND_ENUM_CAST(ncalign_e)
DAS_BIND_ENUM_CAST(ncblitter_e)
DAS_BIND_ENUM_CAST(ncscale_e)
