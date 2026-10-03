// Native replacements for the game's hot leaf math routines (Xbox only):
// see ts_native_math.cpp.
#pragma once

#if defined(PLATFORM_XBOX)
#include <cstdint>

class PS2Runtime;

// What the boot-time differential test found, for the Xbox status block.
struct TsNativeMathStatus
{
    uint32_t native = 0;      // functions left running natively
    uint32_t failed = 0;      // functions the test put back to the recompiled original
    uint32_t mismatches = 0;  // test cases that differed, all functions together
    uint32_t nanPayloads = 0; // cases that differed only in which NaN came out
    const char *firstFailed = nullptr;
};

extern TsNativeMathStatus g_tsNativeMath;

// Registers the native versions (and, with TS_NATIVE_MATH_SELFTEST, tests
// them against the originals first). Called by applyTimeSplittersOverrides.
void registerTsNativeMath(PS2Runtime &runtime);
#endif
