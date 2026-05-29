// Wrapper for daScript/ast/ast_typefactory.h.
// Intercepts MAKE_EXTERNAL_TYPE_FACTORY to strip DAS_MOD_API, which causes
// a Clang/GCC 16 bug where __declspec(dllexport) on template specializations
// makes static member functions non-callable as static.
#pragma once

// Include the real header first so all standard definitions are in place.
#include_next <daScript/ast/ast_typefactory.h>

// Now redefine MAKE_EXTERNAL_TYPE_FACTORY without DAS_MOD_API.
#undef MAKE_EXTERNAL_TYPE_FACTORY
#define MAKE_EXTERNAL_TYPE_FACTORY(TYPE, CTYPE)                             \
namespace das {                                                             \
    class ModuleLibrary;                                                    \
    struct TypeDecl;                                                        \
    typedef TypeDecl * TypeDeclPtr;                                         \
    template <typename TT>                                                  \
    struct typeFactory;                                                     \
    template <>                                                             \
    struct typeFactory<CTYPE> {                                             \
        static ___noinline TypeDeclPtr make(const ModuleLibrary & library );\
    };                                                                      \
    template <typename TT>                                                  \
    struct typeName;                                                        \
    template <>                                                             \
    struct typeName<CTYPE> {                                                \
        constexpr static const char * name() { return #TYPE; }             \
    };                                                                      \
};
