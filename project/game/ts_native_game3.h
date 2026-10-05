// Native replacements for a fifth batch of the game's hot routines (Xbox
// only): see ts_native_game3.cpp.
#pragma once

#if defined(PLATFORM_XBOX)
class PS2Runtime;

// Registers the native versions (and, with TS_NATIVE_MATH_SELFTEST, tests
// them against the originals first; the outcome is added to g_tsNativeMath).
// Called by applyTimeSplittersOverrides after registerTsNativeGame2.
void registerTsNativeGame3(PS2Runtime &runtime);
#endif
