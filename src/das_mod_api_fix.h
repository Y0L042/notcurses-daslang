// Force-include this file via -include to suppress the GCC 16 bug where
// __declspec(dllexport) on template specializations (DAS_MOD_API) makes
// static members non-callable as static functions.
// We redefine DAS_MOD_API to empty after platform.h has already run.
// This file has no #pragma once so the -include mechanism fires per-TU.
#ifdef DAS_MOD_API
#  undef DAS_MOD_API
#  define DAS_MOD_API
#endif
