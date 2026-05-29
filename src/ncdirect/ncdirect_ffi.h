#pragma once
#if defined(_MSC_VER) && !defined(__MINGW32__)
#  define __MINGW32__
#  define NOTCURSES_FFI_DEFINED_MINGW32
#endif

#ifndef NOTCURSES_FFI
#  define NOTCURSES_FFI
#  include <notcurses/direct.h>
#  undef NOTCURSES_FFI
#else
#  include <notcurses/direct.h>
#endif

#ifdef NOTCURSES_FFI_DEFINED_MINGW32
#  undef __MINGW32__
#  undef NOTCURSES_FFI_DEFINED_MINGW32
#endif

// direct.h (via notcurses.h) does `#define static API` under NOTCURSES_FFI and
// never undefs it. Left active it rewrites the `static` keyword on subsequent
// C++ declarations -- including daScript's `static ... make(...)` in
// typeFactory<T> -- producing "call to non-static member function" errors
// throughout the bindings. Undo it now that the headers are parsed.
#undef static

#if defined(_MSC_VER) || defined(__MINGW32__)
#  define API __declspec(dllexport)
#else
#  define API __attribute__((visibility("default")))
#endif
#define ALLOC __attribute__((malloc)) __attribute__((warn_unused_result))

