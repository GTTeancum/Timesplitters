// TimeSplitters' VU1 microprogram (ts_da1f094c) as native code.
//
// The microprogram is the game's vertex pipeline: nine entries store
// constants (matrices, viewport, lights), one forwards a prebuilt packet,
// and five draw triangle strips. The draw entries are reimplemented here:
// the vertices are transformed, lit and clipped on the CPU and the GS gets
// the same packets the microprogram would have kicked (strips in GS screen
// space, three registers a vertex). Everything else, and any batch this
// code does not recognise, still runs on the exact translator.
//
// Checked against the microprogram's recorded outputs (project/tools/vu1,
// timesplitters_vu_replay with TS_VU1_NATIVE=1): positions within one
// sixteenth of a pixel, texture coordinates and lit colours exact.
//
// VU memory map (qwords): 0-3 view-projection, 4-7 model, 8-11 model-view-
// projection, 12-15 and 16-19 the same for bones 1 and 2, 20 viewport scale,
// 21 viewport offset, 106-109 light colours (4 lights -> RGB), 110-113
// light directions (normal -> 4 intensities, row 3 added as ambient),
// 114-117 and 118-121 the same for bones 1 and 2.
// A draw batch at `top`: strip headers (GIF tags; NLOOP = vertex count, EOP
// on the last) from top+0, vertex arrays from top+24 (top+32 skinned), the
// render-state block (one A+D GIF packet) at top+216.
//
// The draw path itself is vu1_native_draw.h (runDrawT over a Source and a
// Sink; here: the batch in VU1 memory, the GS front end and the renderer),
// the materials and transform constants vu1_native_material.h (src/xbox/
// PUSH-BC-PLAN.md W0-C). This file keeps the entry dispatch (run, runInner),
// the constant entries and the kick, and exports the constant entries and
// the draw layouts for the records engine.
#include "runtime/ps2_vu1_jit.h"
#include "runtime/ps2_measure.h" // TS_MEASURE_PUSHBC: the runs' time by entry class
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/ps2_gif_arbiter.h"
#include "ts_native_dl.h" // Tier 0: the emit knobs (C-EMIT)
#include "vu1_native_draw.h"
#include "vu1_native_material.h"
#include "vu1_native_xf.h"
#if defined(PLATFORM_XBOX)
#include "../../src/xbox/xbox_perf.h" // TS_NATIVE_EMIT_TIER0
#endif

#if defined(PLATFORM_XBOX)
// TS_NATIVE_KCYC 1 (with TS_NATIVE_RUN_LEAN, vu1_native_draw.h): CPU cycles
// spent in the program, two rdtsc a call. 0 (default): not counted (kcyc
// native=0).
#ifndef TS_NATIVE_KCYC
#define TS_NATIVE_KCYC 0
#endif
#endif

#include <cstdint>
#include <cstring>

namespace ts_native_draw
{
    DrawScratch g_drawScratch;
}

namespace
{
    constexpr uint64_t kProgramHash = 0x38ae1e855cd83deeull;
    using ts_native_xf::kDataQwords;
    using ts_native_xf::Layout;
    using ts_native_draw::loadI;
    using ts_native_draw::loadM;
    using ts_native_draw::transform;
    using ts_native_draw::Mat;
    using ts_native_draw::V4;

    // The draw entries' layouts (ts_native_xf::kLayouts, by kind).
    const Layout *layoutFor(uint32_t pc)
    {
        using namespace ts_native_xf;
        switch (pc)
        {
        case 0x0000: return &kLayouts[Plain];
        case 0x0d20: return &kLayouts[EnvMap]; // texture coordinates from the rotated normal (sphere map)
        case 0x1ae0: return &kLayouts[Lit];
        case 0x3520: return &kLayouts[Lit]; // clips the near plane only; the same pipeline
        case 0x2800: return &kLayouts[Skinned];
        default: return nullptr;
        }
    }

    // The constant entries: copies from the batch at TOP into the fixed
    // slots, and the matrix products (slot 8 + 4k = model k x view-projection).
    // Both write rows the renderer's constants come from (transformConstants).
    void copyQwords(uint8_t *data, uint32_t from, uint32_t to, uint32_t count)
    {
        for (uint32_t i = 0; i < count; ++i)
            std::memmove(data + ((to + i) & (kDataQwords - 1u)) * 16u, data + ((from + i) & (kDataQwords - 1u)) * 16u, 16);
        g_vu1WatchedRows.note(to, count);
    }

    void modelViewProjection(uint8_t *data, uint32_t modelQ, uint32_t outQ)
    {
        const Mat vp = loadM(data, 0), model = loadM(data, modelQ);
        for (uint32_t r = 0; r < 4; ++r)
        {
            const V4 &m = model.r[r];
            const V4 o = transform(vp, m.x, m.y, m.z, m.w);
            std::memcpy(data + ((outQ + r) & (kDataQwords - 1u)) * 16u, &o, 16);
        }
        g_vu1WatchedRows.note(outQ, 4u);
    }

    // XGKICK of a prebuilt GIF packet: its length from the tags, up to EOP.
    bool kickPacket(uint8_t *data, uint32_t top, PS2Memory *memory, GS &gs)
    {
        uint32_t q = top & (kDataQwords - 1u), qwords = 0;
        for (int tags = 0; tags < 256; ++tags)
        {
            if (q + qwords >= kDataQwords)
                return false;
            uint32_t w[4];
            loadI(data, q + qwords, w);
            const uint32_t nloop = w[0] & 0x7FFFu, flg = (w[1] >> 26) & 3u, nreg = (w[1] >> 28) ? (w[1] >> 28) : 16u;
            qwords += 1u;
            if (flg == 0u)
                qwords += nloop * nreg;
            else if (flg == 1u)
                qwords += (nloop * nreg + 1u) / 2u;
            else
                qwords += nloop;
            if (w[0] & 0x8000u)
                break;
        }
        if (q + qwords > kDataQwords)
            return false;
#if defined(PLATFORM_XBOX) // (ts_native_dl.cpp is in the Xbox build only)
        ++g_tsEmitStats.kicks;
        g_tsEmitStats.kickQwords += qwords;
#endif
#if defined(PLATFORM_XBOX) && TS_NATIVE_EMIT_TIER0
        // Tier 0 (src/xbox/PUSH-BC-PLAN.md section 3.2 item 1): the packet
        // goes to the GS front end's bulk path (B-GS's processPath1Bulk:
        // state-only A+D tags through the material table, PACKED PRE
        // vertex tags as decoded primitives in one SubmitPrimitives call,
        // the rest as before), only while nothing is queued behind another
        // path (the arbiter's order holds: a lone packet is processed at
        // once either way), and while the knob (emit.tier0) says so.
        if (g_tsEmitKnobs.tier0 != 0u)
        {
            if (!memory || !memory->gifArbiter() || memory->gifArbiter()->empty())
            {
                ++g_tsEmitStats.tier0;
                gs.processPath1Bulk(data + q * 16u, qwords * 16u);
                return true;
            }
            ++g_tsEmitStats.tier0Busy; // another path's packet queued first: the arbiter keeps the order
        }
#endif
        if (memory)
            memory->submitGifPacket(GifPathId::Path1, data + q * 16u, qwords * 16u);
        else
            gs.processGIFPacket(data + q * 16u, qwords * 16u, GifPathId::Path1);
        return true;
    }

    bool runInner(uint32_t pc, uint8_t *vuData, uint32_t dataSize, uint32_t top, PS2Memory *memory, GS &gs);

    bool run(uint32_t pc, uint8_t *vuData, uint32_t dataSize, uint32_t top, PS2Memory *memory, GS &gs)
    {
#if defined(PLATFORM_XBOX) && TS_MEASURE_PUSHBC
        // The run's time by entry class (runtime/ps2_measure.h): a draw
        // entry, the XGKICK forward, or a constant entry (and the odd
        // declined one).
        const uint32_t entry = pc & 0x3FFFu;
        const uint32_t cls = entry == 0x3fe0u ? 2u : layoutFor(entry) ? 0u : 1u;
        MeasureTimer timed(g_measure.vu1Cycles[cls], g_measure.vu1Runs[cls]);
        return runInner(pc, vuData, dataSize, top, memory, gs);
#elif defined(PLATFORM_XBOX) && TS_NATIVE_RUN_LEAN && TS_NATIVE_KCYC
        // CPU cycles spent here, for the Xbox status block: the same count,
        // the cycles short of the next thousand carried instead of a 64-bit
        // total divided each call (a call takes far fewer than 2^32).
        const auto rdtsc = [] {
            uint32_t lo, hi;
            __asm__ __volatile__("rdtsc" : "=a"(lo), "=d"(hi));
            return (uint64_t(hi) << 32) | lo;
        };
        static uint32_t s_carry = 0;
        const uint64_t start = rdtsc();
        const bool handled = runInner(pc, vuData, dataSize, top, memory, gs);
        s_carry += uint32_t(rdtsc() - start);
        g_nv2aTextureStats.kcycNative += s_carry / 1000u;
        s_carry %= 1000u;
        return handled;
#elif defined(PLATFORM_XBOX) && !TS_NATIVE_RUN_LEAN
        // CPU cycles spent here, for the Xbox status block.
        const auto rdtsc = [] {
            uint32_t lo, hi;
            __asm__ __volatile__("rdtsc" : "=a"(lo), "=d"(hi));
            return (uint64_t(hi) << 32) | lo;
        };
        static uint64_t s_cycles = 0;
        const uint64_t start = rdtsc();
        const bool handled = runInner(pc, vuData, dataSize, top, memory, gs);
        s_cycles += rdtsc() - start;
        g_nv2aTextureStats.kcycNative = uint32_t(s_cycles / 1000u);
        return handled;
#else
        return runInner(pc, vuData, dataSize, top, memory, gs);
#endif
    }

    bool runInner(uint32_t pc, uint8_t *vuData, uint32_t dataSize, uint32_t top, PS2Memory *memory, GS &gs)
    {
        if (dataSize < kDataQwords * 16u)
            return false;
        top &= kDataQwords - 1u;
        if (vu1NativeConstantEntry(pc, vuData, top))
            return true;
        if ((pc & 0x3FFFu) == 0x3fe0)
            return kickPacket(vuData, top, memory, gs);
        const Layout *layout = layoutFor(pc & 0x3FFFu);
        if (!layout)
            return false;
        ts_native_draw::VuSource source{vuData};
        ts_native_draw::ProductionSink sink;
        return ts_native_draw::runDrawT(*layout, source, top, memory, gs, sink);
    }

    struct Register
    {
        Register()
        {
            registerVu1NativeProgram({kProgramHash, &run, "ts_da1f094c native"});
            // transformConstants' rows: matrices and viewport, lights.
            g_vu1WatchedRows.watch(4u, 22u); // loadConstants reads rows 4-21
            g_vu1WatchedRows.watch(106u, 122u);
        }
    } registration;
}

// vu1_native_draw.h: the constant entries, by pc (the run's TOP is already
// masked to VU1 memory by runInner; a direct caller's is here).
bool vu1NativeConstantEntry(uint32_t pc, uint8_t *vuData, uint32_t top)
{
    top &= kDataQwords - 1u;
    switch (pc & 0x3FFFu)
    {
    case 0x3af8: copyQwords(vuData, top + 22, 106, 4); return true; // light colours
    case 0x3b50: copyQwords(vuData, top + 26, 110, 4); return true; // light directions
    case 0x3ba8: copyQwords(vuData, top + 30, 114, 4); return true; // bone 1 lights
    case 0x3c00: copyQwords(vuData, top + 34, 118, 4); return true; // bone 2 lights
    case 0x3c58: copyQwords(vuData, top + 16, 20, 4); return true;  // viewport
    case 0x3cb0: copyQwords(vuData, top + 20, 24, 2); return true;
    case 0x3ce8: copyQwords(vuData, top, 0, 4); return true;        // view-projection
    case 0x3d40:
        copyQwords(vuData, top + 4, 4, 4);                          // model
        modelViewProjection(vuData, 4, 8);
        return true;
    case 0x3e20: modelViewProjection(vuData, top + 8, 12); return true;  // bone 1
    case 0x3f00: modelViewProjection(vuData, top + 12, 16); return true; // bone 2
    default: return false;
    }
}

const ts_native_xf::Layout *vu1NativeDrawLayout(uint32_t pc)
{
    return layoutFor(pc & 0x3FFFu);
}

// ts_native_dl.h: the program's XGKICK entry (0x3FE0) for a Tier 1 op that
// ran the MSCAL's VIF bookkeeping itself (PS2Memory::noteNativeMscal); the
// same packet scan and routing (Tier 0 or the GIF arbiter) as a run.
bool vu1NativeKick(uint8_t *vuData, uint32_t top, PS2Memory *memory, GS &gs)
{
    return kickPacket(vuData, top & (kDataQwords - 1u), memory, gs);
}

// The rows a program entry reads (the debt map settles them first, D2):
//   the kick (0x3fe0)  its packet, from TOP to at most the end of VU1
//                      memory (kickPacket refuses one that would wrap);
//   a draw entry       the constant rows (0-21, 106-121: loadConstants and
//                      the CPU path's) and the batch from TOP on (strip
//                      headers, arrays, the state block at TOP + 216: the
//                      strip loop refuses arrays past the end, so nothing
//                      wraps) - one window from TOP through the end and
//                      round to row 121, when TOP is past the constants;
//   anything else      (the constant entries, an interpreted program)
//                      everything.
void vu1NativeReadWindow(uint32_t pc, uint32_t top, uint32_t *first, uint32_t *count)
{
    constexpr uint32_t kConstantRowsEnd = 122u;
    const uint32_t entry = pc & 0x3FFFu;
    top &= kDataQwords - 1u;
    *first = 0u;
    *count = kDataQwords;
    if (entry == 0x3fe0u)
    {
        *first = top;
        *count = kDataQwords - top;
    }
    else if (layoutFor(entry) && top >= kConstantRowsEnd)
    {
        *first = top;
        *count = kDataQwords - top + kConstantRowsEnd; // wraps round to the constant rows
    }
}
