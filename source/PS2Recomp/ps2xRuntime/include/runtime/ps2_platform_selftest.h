#pragma once
// Platform self-test entry points the runtime provides (src/xbox/
// PUSH-BC-PLAN.md section 5.3, B-PLATFORM; run at boot by
// src/xbox/xbox_platform_selftest.cpp with TS_PLATFORM_SELFTEST=1). A new
// header: the frozen ones are left alone.
#include <cstdint>

// The EE timers' fast arithmetic (TS_TIMER_DIVL, ps2_memory_timers.cpp)
// against the 64-bit operator form for `cases` random spans, remainders,
// counts and compare values in every clock mode: the cases whose ticks,
// remainder, count or cycles-to-interrupt differ (0 expected). 0 when the
// fast form is off.
uint32_t ps2xEeTimerSelfTest(uint32_t cases);

// TS_TIMER_CUE_CHECK 1 (SC-E; ps2_memory_timers.cpp): at every timer
// advance the CUE mask (TS_TIMER_CUE_MASK) is compared with the timers'
// modes; a difference counts here ([TS:plat] cue=) and must stay 0.
#ifndef TS_TIMER_CUE_CHECK
#define TS_TIMER_CUE_CHECK 0
#endif
inline uint32_t g_ps2xEeTimerCueMiss = 0u;
