// Native replacements for the game's software double-precision routines
// (libgcc fp-bit as the PS2 toolchain compiled it), Xbox only: see
// ts_native_fp.cpp.
#pragma once

#if defined(PLATFORM_XBOX)
class PS2Runtime;

// Registers the native versions (and, with TS_NATIVE_MATH_SELFTEST, tests
// them against the originals first; the outcome is added to g_tsNativeMath).
// Called by applyTimeSplittersOverrides after registerTsNativeMath.
void registerTsNativeFp(PS2Runtime &runtime);
#endif
