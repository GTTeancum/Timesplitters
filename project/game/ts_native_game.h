// Native replacements for a third batch of the game's hot routines (Xbox
// only): see ts_native_game.cpp.
#pragma once

#if defined(PLATFORM_XBOX)
class PS2Runtime;

// Registers the native versions (and, with TS_NATIVE_MATH_SELFTEST, tests
// them against the originals first; the outcome is added to g_tsNativeMath).
// Called by applyTimeSplittersOverrides after registerTsNativeFp.
void registerTsNativeGame(PS2Runtime &runtime);
#endif
