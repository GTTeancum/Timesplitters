// Native display-list builders (src/xbox/PUSH-BC-PLAN.md section 3.2, Tier
// 1; owned by C-EMIT): dlSetZB, dlSetBlend, dlSetDitherMatrix, dlSetFBMSK,
// dlSetClip, dlSetClipTag, dlSelectTextureKick, dlTextureRectangle(+Float),
// dlFillRectangle(+Float), dlClearFB and dlDrawTriangleStrip in packet mode
// (the original's packets) and op mode (an in-list token and a host op),
// and the emitter knobs the kick path reads (Tier 0).
#pragma once
#include <cstdint>

class PS2Runtime;
class PS2Memory;
class GS;

// TS_NATIVE_EMIT_OPS 1 (Xbox; src/xbox/PUSH-BC-PLAN.md section 3.2 item 5,
// C-EMIT Tier 1): the display-list builders below are wrapped; when one
// returns normally, the list entries it appended (REF tags to its packets)
// are replaced by one in-list token (ts_list_tokens.h) whose op holds the
// packets' guest spans, and consecutive builders' ops coalesce into one
// token (the entries after the first become REF tags with QWC 0, so the
// list keeps its length and every later entry its address). At the token
// the executor replays the spans' VIF commands through the decoder's own
// helpers (PS2Memory::vif1Unpack, vif1Immediate, vif1Stxx, vif1Mscal), and
// an MSCAL of the XGKICK entry (0x3FE0) as its VIF bookkeeping
// (noteNativeMscal) plus the kick itself (vu1NativeKick): no walk of the
// tags, no MSCAL dispatch, the GIF packet read from VU1 memory as the
// program reads it. A span set with any other command (MPG, DIRECT,
// DIRECTHL) runs through the decoder whole (processVIF1Pieces). Exact by
// construction: the packets' bytes are untouched and read when the list
// is walked, and VU1 memory and the VIF registers end as the decoder
// leaves them. Needs C-VIF's tokens (tsListTokensEnabled; until then
// nothing converts) and the emit.ops knob. 0: no wrappers, the builders'
// packets go through the list as before.
#ifndef TS_NATIVE_EMIT_OPS
#define TS_NATIVE_EMIT_OPS 0
#endif
// TS_NATIVE_EMIT_SELFCHECK 1 (with TS_NATIVE_EMIT_OPS; section 3.2 item 8):
// every TS_NATIVE_EMIT_SELFCHECK_EVERY-th op is also run the old way first:
// GS drawing state, VIF1 registers and VU1 data memory saved, a recording
// backend swapped in (ts_gif_trace.h), the op's spans decoded by the
// decoder itself (processVIF1Pieces); the GS trace, the VIF1 registers and
// a hash of VU1 memory taken; everything restored, the op's executor run
// into the same backend and the three compared (emitdiff in [TS:emit]);
// restored again, then the op runs for real.
#ifndef TS_NATIVE_EMIT_SELFCHECK
#define TS_NATIVE_EMIT_SELFCHECK 0
#endif
#ifndef TS_NATIVE_EMIT_SELFCHECK_EVERY
#define TS_NATIVE_EMIT_SELFCHECK_EVERY 16
#endif
#if !defined(PLATFORM_XBOX)
#undef TS_NATIVE_EMIT_OPS
#define TS_NATIVE_EMIT_OPS 0
#endif
#if !TS_NATIVE_EMIT_OPS
#undef TS_NATIVE_EMIT_SELFCHECK
#define TS_NATIVE_EMIT_SELFCHECK 0
#endif

// The listKind of C-EMIT's op tokens (ts_list_tokens.h; 1 and 2 are left to
// C-REC's prologue and REF tokens).
constexpr uint8_t kTsListKindEmitOps = 3u;

// The native VU1 program's XGKICK entry (0x3FE0) for VU1 data at top
// (vu1_native_ts.cpp): the GIF packet there scanned and routed as a run
// would (Tier 0 or the GIF arbiter). False: no packet (the run would have
// declined).
bool vu1NativeKick(uint8_t *vuData, uint32_t top, PS2Memory *memory, GS &gs);

// The emitter knobs (ts_knobs.h; registered by registerTsNativeDl, applied
// at frame boundaries):
//   emit.tier0  1: kickPacket routes a native VU1 program's XGKICK to the
//                  GS front end's bulk path (TS_NATIVE_EMIT_TIER0 builds
//                  only); 0: the old path (the GIF arbiter / processGIFPacket).
//   emit.ops    1: the Tier 1 builders write in-list tokens and host ops
//                  (TS_NATIVE_EMIT_OPS builds, once C-VIF's tokens are on);
//                  0: packet mode (the original's packets).
struct TsEmitKnobs
{
    uint32_t tier0 = 1u;
    uint32_t ops = 1u;
};
extern TsEmitKnobs g_tsEmitKnobs;

// The emitters' counters (cumulative; the [TS:emit] status line prints
// their change per frame): the native VU1 program's XGKICKs and their
// qwords, those Tier 0 took (tier0) and those it left to the GIF arbiter
// because another path's packet was queued (tier0Busy); the Tier 1 ops run
// at their tokens (ops), the builders that wrote packets instead (packets),
// and the emit self-check's sampled compares and differences.
struct TsEmitStats
{
    uint32_t kicks = 0, kickQwords = 0, tier0 = 0, tier0Busy = 0;
    uint32_t ops = 0, packets = 0;
    uint32_t checked = 0, diffs = 0;
};
extern TsEmitStats g_tsEmitStats;

// Called by applyTimeSplittersOverrides after the transcribed natives.
void registerTsNativeDl(PS2Runtime &runtime);
