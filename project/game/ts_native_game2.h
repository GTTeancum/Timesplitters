// Native replacements for a fourth batch of the game's hot routines (Xbox
// only): see ts_native_game2.cpp.
#pragma once

#if defined(PLATFORM_XBOX)
class PS2Runtime;

// Registers the native versions (and, with TS_NATIVE_MATH_SELFTEST, tests
// them against the originals first; the outcome is added to g_tsNativeMath).
// Called by applyTimeSplittersOverrides after registerTsNativeGame.
void registerTsNativeGame2(PS2Runtime &runtime);
#endif
