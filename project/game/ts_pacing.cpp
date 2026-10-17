// Frame pacing (src/xbox/PUSH-BC-PLAN.md M6.4 and M6.5; owned by B-SCHED):
// timeTickStart with a fractional carry (knob `pacing.carry`) and the
// [TS:pace] line. M6.5 (pb_vbl_count as the VBlankStart source, an
// even-vblank hand-out) is gated on the console result and not built yet.
//
// M6.4. timeTickStart (0x2B66E8) runs at the start of every game frame. It
// reads the time in vblanks (timeGet: T1, HBLANK-clocked, over the hblanks
// per vblank), keeps it at gp-0x4B8C (and the previous call's at gp-0x4B94)
// and sets framesi (gp-0x4BA8), the vblanks the frame advances the game by,
// to floor(now - previous + 0.5), wrapped by 128 and held to 1..5. The
// fraction is thrown away every frame: on the PS2 a frame starts on a vblank
// and the difference is a whole number, but here a frame starts whenever the
// previous one finished; near 30 fps a 2.4-vblank frame counts as 2 and the
// game plays about 17% slow.
//
// pacing.carry 1 keeps the fraction: before the original runs, the stored
// "now" is moved back by the carry, so the original computes floor(D + carry
// + 0.5); the next call takes the new carry from what that call stored (the
// difference it saw minus the framesi it chose), held to [-0.5, 0.5] so a
// clamped frame (5 at most, 1 at least, a reset) does not make the next ones
// catch up. Over many frames the sum of framesi then follows the vblanks
// elapsed (within one), whatever the frame lengths. Only timeTickStart reads
// the two time words (checked over project/generated), so moving one of
// them changes nothing else. The carry is computed from guest memory alone
// (no host state between calls), so a call unwound and resumed part-way is
// no different, and the original keeps its own resume entries.
//
// pacing.carry 0 (the default until Train 3's checks): the original alone,
// byte for byte; the wrapper only counts frames and framesi for [TS:pace].
// TS_PACING 0 leaves timeTickStart's table entry alone altogether.
#if defined(PLATFORM_XBOX)
#include "../../src/xbox/xbox_perf.h"
#include "ps2_recompiled_functions.h"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/ee_scheduler.h"
#include "ts_knobs.h"

#include <cmath>
#include <cstring>

#ifndef TS_PACING
#define TS_PACING 1
#endif

#if TS_PACING
namespace
{
    constexpr uint32_t kTimeTickStart = 0x2B66E8u;
    constexpr uint32_t kGpNow = 0x4B8Cu;     // float: the time (vblanks) at the last call
    constexpr uint32_t kGpPrevious = 0x4B94u; // float: the time at the call before
    constexpr uint32_t kGpFramesi = 0x4BA8u;  // int: vblanks this frame advances by

    uint32_t g_carryKnob = 0; // pacing.carry

    // [TS:pace] (cumulative; read on the report thread).
    struct PaceStats
    {
        uint32_t frames = 0;   // timeTickStart calls
        uint32_t framesi = 0;  // the framesi they chose (read at the next call)
        uint32_t vblanks = 0;  // VBlankStarts between the first and the last call
        uint32_t carried = 0;  // calls that applied a nonzero carry
        uint32_t held = 0;     // carries held to +-0.5 (a clamped or reset frame)
        int32_t carryMilli = 0; // the last carry, in thousandths of a vblank
    };
    PaceStats g_pace;
    uint64_t g_lastVsync = 0;
    bool g_seen = false;

    float asFloat(uint32_t bits)
    {
        float value;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }

    uint32_t asBits(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        return bits;
    }

    void pacedTimeTickStart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint64_t vsync = runtime->eeScheduler().vsyncTick();
        if (g_seen)
        {
            g_pace.framesi += READ32(gp - kGpFramesi);
            g_pace.vblanks += static_cast<uint32_t>(vsync - g_lastVsync);
        }
        g_seen = true;
        g_lastVsync = vsync;
        ++g_pace.frames;

        if (g_carryKnob != 0u)
        {
            // What the last call saw (its difference, carry included) and
            // chose; the wrap by 128 as the original applies it.
            const float now = asFloat(READ32(gp - kGpNow));
            float seen = now - asFloat(READ32(gp - kGpPrevious));
            for (int i = 0; i < 4 && seen < -0.5f; ++i)
                seen += 128.0f;
            float carry = seen - static_cast<float>(static_cast<int32_t>(READ32(gp - kGpFramesi)));
            if (!(carry >= -0.5f && carry <= 0.5f)) // (NaN too: a first call, a reset)
            {
                carry = carry > 0.5f ? 0.5f : (carry < -0.5f ? -0.5f : 0.0f);
                ++g_pace.held;
            }
            if (carry != 0.0f)
            {
                ++g_pace.carried;
                WRITE32(gp - kGpNow, asBits(now - carry));
            }
            g_pace.carryMilli = static_cast<int32_t>(carry * 1000.0f);
        }
        timeTickStart_0x2b66e8(rdram, ctx, runtime);
    }

    void paceLine(XboxReportLine &line)
    {
        // Sigma framesi against the vblanks elapsed: within one per 600
        // frames with pacing.carry 1 (without it framesi falls behind).
        line.add(" carry=%u frames=%u framesi=%u vbl=%u lag=%d carried=%u held=%u c=%dm", g_carryKnob, g_pace.frames,
                 g_pace.framesi, g_pace.vblanks, int(g_pace.vblanks) - int(g_pace.framesi), g_pace.carried, g_pace.held,
                 g_pace.carryMilli);
    }
}

void registerTsPacing(PS2Runtime &runtime)
{
    tsKnobRegister("pacing.carry", &g_carryKnob, 0u);
    runtime.replaceFunction(kTimeTickStart, &pacedTimeTickStart);
    xboxRegisterReportLine("[TS:pace]", &paceLine);
}
#else
void registerTsPacing(PS2Runtime &runtime)
{
    (void)runtime;
}
#endif
#endif
