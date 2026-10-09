// Render-origin counters (rewrite plan M0.3; runtime/ps2_render_counters.h):
// the game functions that write the data partGfx's display lists point at,
// counted through their function-table entries, and the [TS:render] line.
//
// One line every status interval (the Xbox status hook, every 3 s), each
// count the change since the line before:
//   fr     game frames
//   pg     native partGfx levels; pre/dbuf: CALLs of a part's load-time
//          chain / an instance's relit chain; ref: per-frame REF lists by
//          partGfx's three REF loops, refb their REF groups
//   wr     calls of vtxlistcolour / obInstLight / obPrecalcDbufGfxData /
//          partPrecalcDmaData (the writers of those chains' data)
//   ch     VIF1 DMA chains walked, tags their tags
//   ms     MSCALs in chains, fast: those the fast path took (TS_MSCAL_FAST);
//          mscnt; pc: the busiest entry pcs (hex) with their counts
//   dr     native VU1 draw batches, st/v their strips and vertices; cpu:
//          strips transformed on the CPU; gpu: runs the renderer
//          transforms, flat of them laid out as triangle lists, mrg joined
//          to the batch before, decl refused by the renderer
//   skip   zero TTE halves left out (TS_WALK_SKIP_ZERO_TTE); mscheck:
//          fast-path MSCALs whose cached lookups differed / checked, from
//          boot (TS_MSCAL_FAST_CHECK; must stay 0)
// TS_RENDER_COUNTERS 2 adds a [TS:render2] line:
//   id     tags by id: refe/cnt/next/ref/refs/call/ret/end; call: tags of
//          CALLed chains (the precalc and Dbuf origins)
//   kb     payload KB of the main list / of CALLed chains
//   tte    tag upper halves sent to VIF1 / of them all zero (what
//          TS_WALK_SKIP_ZERO_TTE would leave out)
//   pcs    pieces recorded: TTE half new/joined, payload new/joined
//   cmd    VIF commands decoded; up: the commonest UNPACKs as format and
//          destination (format vn<<2|vl in hex: c V4-32, 8 V3-32, 4 V2-32,
//          e V4-8, d V4-16, 5 V2-16, ...; destination 0 rows 0-23 of the
//          batch, 1 rows 24-215, 2 rows 216 up, 3 absolute), msk masked ones
#if defined(PLATFORM_XBOX)
#include "game_overrides.h"
#include "ps2_runtime.h"
#include "../../src/xbox/gs_nv2a_backend.h" // game frames
#include "../../src/xbox/xbox_log.h"

#include <algorithm>
#include <cstdarg>
#include <cstdio>
#include <cstring>

namespace
{
    // The data partGfx's lists point at, and who writes it:
    //   partPrecalcDmaData (0x25f408): a part's load-time chain (precalc origin)
    //   obPrecalcDbufGfxData (0x25fc90): an instance's double-buffered chains
    //   obInstLight (0x2a7ab0): builds them at the instance's first relight
    //   vtxlistcolour (0x2a7a50): rewrites their colours (roomlightTick)
    // Each one's table entry counts the call, then runs what the entry held
    // before (the original, or an override applied ahead of this one). A
    // resume inside the function goes through the entry of its resume
    // address, not this one: a call is counted once.
    struct Writer
    {
        uint32_t address;
        uint32_t RenderCounters::*counter;
    };
    constexpr Writer kWriters[4] = {
        {0x2A7A50u, &RenderCounters::vtxlistcolour},
        {0x2A7AB0u, &RenderCounters::obInstLight},
        {0x25FC90u, &RenderCounters::obPrecalcDbufGfxData},
        {0x25F408u, &RenderCounters::partPrecalcDmaData},
    };
    PS2Runtime::RecompiledFunction s_writers[4];

    template <int Index>
    void counted(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ++(g_renderCounters.*kWriters[Index].counter);
        s_writers[Index](rdram, ctx, runtime);
    }
    constexpr PS2Runtime::RecompiledFunction kCounted[4] = {&counted<0>, &counted<1>, &counted<2>, &counted<3>};

    void registerRenderCounters(PS2Runtime &runtime)
    {
#if TS_RENDER_COUNTERS >= 1
        for (int i = 0; i < 4; ++i)
        {
            if (!runtime.hasFunction(kWriters[i].address))
                continue;
            const PS2Runtime::RecompiledFunction current = runtime.lookupFunction(kWriters[i].address);
            if (current == kCounted[i])
                continue; // applied before (the game loaded again)
            s_writers[i] = current;
            runtime.replaceFunction(kWriters[i].address, kCounted[i]);
        }
#else
        (void)runtime;
#endif
    }

    // A log line, built in place (no allocation in a match). The debug
    // channel takes lines of up to about 500 characters.
    struct Line
    {
        char text[480];
        size_t used = 0;
        void add(const char *format, ...)
        {
            if (used + 2u >= sizeof(text))
                return;
            va_list args;
            va_start(args, format);
            const int n = std::vsnprintf(text + used, sizeof(text) - 1u - used, format, args);
            va_end(args);
            if (n > 0)
                used = std::min(used + size_t(n), sizeof(text) - 2u);
        }
        void write()
        {
            text[used++] = '\n';
            xboxLogWrite(text, unsigned(used));
            used = 0;
        }
    };
}

void renderCountersReport()
{
#if TS_RENDER_COUNTERS >= 1
    // The change since the last line, word by word (an MSCAL slot's pc goes
    // from 0 to its value once and is read from the counters themselves).
    static_assert(sizeof(RenderCounters) % 4u == 0u, "RenderCounters: uint32_t members only");
    constexpr size_t kWords = sizeof(RenderCounters) / 4u;
    static uint32_t s_last[kWords];
    static uint32_t s_lastFrames = 0;
    uint32_t words[kWords];
    std::memcpy(words, &g_renderCounters, sizeof(words)); // (the game thread keeps counting)
    for (size_t i = 0; i < kWords; ++i)
    {
        const uint32_t now = words[i];
        words[i] = now - s_last[i];
        s_last[i] = now;
    }
    RenderCounters d;
    std::memcpy(&d, words, sizeof(d));
    const RenderCounters &total = g_renderCounters;
    const uint32_t frames = g_nv2aTextureStats.gameFrames - s_lastFrames;
    s_lastFrames = g_nv2aTextureStats.gameFrames;

    Line line;
    line.add("[TS:render] fr=%u pg=%u pre=%u dbuf=%u ref=%u/%u/%u refb=%u wr=%u/%u/%u/%u ch=%u tags=%u", frames,
             d.partGfx, d.partPrecalc, d.partDbuf, d.partRef[0], d.partRef[1], d.partRef[2], d.partRefBatches,
             d.vtxlistcolour, d.obInstLight, d.obPrecalcDbufGfxData, d.partPrecalcDmaData, d.chains, d.chainTags);
    line.add(" ms=%u fast=%u mscnt=%u pc", d.mscal, d.mscalFast, d.mscnt);
    // The busiest entry pcs (a slot keeps the pc it was first taken by).
    bool shown[32] = {};
    for (int k = 0; k < 8; ++k)
    {
        int best = -1;
        for (int i = 0; i < 32; ++i)
            if (!shown[i] && total.mscalPc[i].pc1 != 0u && d.mscalPc[i].count != 0u &&
                (best < 0 || d.mscalPc[i].count > d.mscalPc[best].count))
                best = i;
        if (best < 0)
            break;
        shown[best] = true;
        line.add("%c%x:%u", k == 0 ? '=' : ',', total.mscalPc[best].pc1 - 1u, d.mscalPc[best].count);
    }
    if (d.mscalPcOther)
        line.add(",other:%u", d.mscalPcOther);
    line.add(" dr=%u st=%u v=%u cpu=%u gpu=%u flat=%u mrg=%u decl=%u", d.draws, d.drawStrips, d.drawVertices,
             d.cpuStrips, d.gpuRuns, d.flatRuns, d.mergedRuns, d.declinedRuns);
    if (total.tteSkipped)
        line.add(" skip=%u", d.tteSkipped);
    if (total.mscalChecked)
        line.add(" mscheck=%u/%u", total.mscalCheckDiffs, total.mscalChecked);
    line.write();
#if TS_RENDER_COUNTERS >= 2
    line.add("[TS:render2] id=%u/%u/%u/%u/%u/%u/%u/%u call=%u kb=%u/%u tte=%u/%u pcs=%u/%u/%u/%u cmd=%u up",
             d.tagIds[0], d.tagIds[1], d.tagIds[2], d.tagIds[3], d.tagIds[4], d.tagIds[5], d.tagIds[6], d.tagIds[7],
             d.tagsCalled, d.payloadQw[0] / 64u, d.payloadQw[1] / 64u, d.tteHalves, d.tteZero, d.pieceTteNew,
             d.pieceTteJoined, d.piecePayloadNew, d.piecePayloadJoined, d.vifCommands);
    bool taken[64] = {};
    for (int k = 0; k < 8; ++k)
    {
        int best = -1;
        for (int i = 0; i < 64; ++i)
            if (!taken[i] && d.unpacks[i / 4][i % 4] != 0u &&
                (best < 0 || d.unpacks[i / 4][i % 4] > d.unpacks[best / 4][best % 4]))
                best = i;
        if (best < 0)
            break;
        taken[best] = true;
        line.add("%c%x%d:%u", k == 0 ? '=' : ',', best / 4, best % 4, d.unpacks[best / 4][best % 4]);
    }
    line.add(" msk=%u", d.unpackMasked);
    line.write();
#endif
#endif
}

// Its own game override, applied with the others when the game loads, so
// the counting entries need no line elsewhere. (The link puts
// ts_overrides.cpp's first; in the other order an override of one of these
// functions there would replace its counting entry: no count, same game.)
PS2_REGISTER_GAME_OVERRIDE("TimeSplitters render counters", "SLUS_200.90", 0u, 0u, registerRenderCounters)
#endif
