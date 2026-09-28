#pragma once

// The SIMD intrinsics the runtime and recompiled code use (SSE up to
// SSE4.1): the compiler's own headers on x86-64, sse2neon on ARM, and a
// plain-C implementation for SSE-only CPUs such as the Xbox's Pentium III
// (PS2X_SCALAR_SIMD, header in src/xbox/compat).
#if defined(PS2X_SCALAR_SIMD)
#include "ps2_simd_scalar.h"
#elif defined(_MSC_VER)
#include <intrin.h>
#elif defined(USE_SSE2NEON)
#include "sse2neon.h"
#else
#include <immintrin.h> // For SSE/AVX instructions
#include <smmintrin.h> // For SSE4.1 instructions
#endif
