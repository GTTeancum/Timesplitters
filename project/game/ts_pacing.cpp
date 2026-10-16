// Frame pacing (src/xbox/PUSH-BC-PLAN.md M6.4 and M6.5; owned by B-SCHED):
// a native timeTickStart with a fractional carry (knob `pacing.carry`), the
// [TS:pace] line, and, gated on the console result, pb_vbl_count as the
// VBlankStart source with an even-vblank hand-out.
//
// Week 0 (W0-I): the registration entry exists as a stub so that
// ts_overrides.cpp's registration list is complete (declared in
// src/xbox/xbox_perf.h, B-SCHED's).
#if defined(PLATFORM_XBOX)
#include "../../src/xbox/xbox_perf.h"

void registerTsPacing(PS2Runtime &runtime)
{
    (void)runtime; // B-SCHED: timeTickStart native, knob pacing.carry, [TS:pace]
}
#endif
