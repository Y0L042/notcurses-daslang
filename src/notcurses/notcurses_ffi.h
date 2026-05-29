#pragma once
// Under MSVC, notcurses/ncport.h guards its Windows compat path with
// __MINGW32__. Define it before including so ncport.h takes the right
// branch (skipping netinet/in.h and providing wcwidth/htole stubs).
#if defined(_MSC_VER) && !defined(__MINGW32__)
#  define __MINGW32__
#  define NOTCURSES_FFI_DEFINED_MINGW32
#endif

// Include notcurses with NOTCURSES_FFI so that static inline functions
// are promoted to exported API symbols (making their addresses linkable).
// We undef it immediately after so it does not pollute subsequent headers.
#ifndef NOTCURSES_FFI
#  define NOTCURSES_FFI
#  include <notcurses/notcurses.h>
#  undef NOTCURSES_FFI
#else
#  include <notcurses/notcurses.h>
#endif

#ifdef NOTCURSES_FFI_DEFINED_MINGW32
#  undef __MINGW32__
#  undef NOTCURSES_FFI_DEFINED_MINGW32
#endif

// notcurses.h does `#define static API` under NOTCURSES_FFI (to promote its
// `static inline` functions to exported symbols for FFI) but never undefs it.
// Left active, this rewrites the `static` keyword on every subsequent C++
// declaration -- including daScript's `static ___noinline TypeDeclPtr make(...)`
// in typeFactory<T>, turning `make` into a non-static member and producing
// "call to non-static member function without an object argument" errors
// throughout the generated bindings. Undo it now that notcurses.h is parsed.
#undef static

// Restore the API/ALLOC macros that notcurses.h undefed at its end.
#if defined(_MSC_VER) || defined(__MINGW32__)
#  define API __declspec(dllexport)
#else
#  define API __attribute__((visibility("default")))
#endif
#define ALLOC __attribute__((malloc)) __attribute__((warn_unused_result))

