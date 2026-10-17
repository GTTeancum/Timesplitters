// The native VU1 program's draw path (src/xbox/PUSH-BC-PLAN.md W0-C; section
// 6, I-3; owned by C-XF after Week 0) as a template over where the batch's
// rows come from and where the output goes:
//   template <class Source, class Sink>
//   bool runDrawT(const Layout &, Source &, uint32_t top, PS2Memory *, GS &, Sink &);
// with VuSource (the batch in VU1 data memory: today's runDraw, moved here
// verbatim) and ProductionSink (the GS front end and the renderer's
// transform ring, through the PS2Memory and GS the caller passes), and one
// shared scratch (g_drawScratch, vu1_native_ts.cpp) in place of runDraw's
// function-local statics, so instantiations do not duplicate them. A
// records engine adds a GuestSource (the batch read from guest memory, R2)
// and a LogSink (the record self-check) without touching this body.
//
// A Source gives
//   vuData()                         VU1 data memory: the constant rows
//                                    (4-21, 106-121), always read from it
//   row(q, out)                      the 16 bytes of row q (wrapping at 1024)
//   rows(q)                          rows q.. contiguous (the state block;
//                                    the caller checked q + count <= 1024)
//   writeJoinedStrip(kind, cursor, vi, n), decodeStrip(kind, vi, n, out)
//                                    the strip at qword vi for the renderer
//                                    (vu1_native_xf.h on VU1 memory)
//   decodeReference(L, vi, v, out)   the ring self-check's reference vertex
// and a Sink (each call also gets the PS2Memory and GS of the run)
//   gpuTransform()                   the renderer transforms (NV2A vertex
//                                    programs; not on the VIF1 worker)
//   directStrips()                   decoded vertices may go to the GS
//                                    without a packet (not on the worker)
//   submitPacket(m, gs, data, bytes) a GIF packet on PATH1
//   othersQueued(m) / drainOthers(m) packets queued behind other paths (the
//                                    GIF arbiter's order)
//   applyStateBlock(gs, block), checkStateBlock(gs, bytes, size)
//   submitStrip(gs, prim, v, n)
//   primNoDraw(gs, prim)             a strip that draws nothing (the texture
//                                    kick; its run had no vertex): statistics
//   beginXfRun(gs, prim, xc, cursor), growXfCursor(gs, cursor, n),
//   emitXfStrip(gs, v, n), endXfRun(gs, cursor)
//
// Also declared here: vu1NativeReadWindow and the constant-entry functions
// vu1_native_ts.cpp exports (section 6, I-3).
#pragma once

#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/ps2_gif_arbiter.h"
#include "vu1_native_material.h"
#include "vu1_native_xf.h"

#if defined(PLATFORM_XBOX)
// TS_NATIVE_DRAW_SELFCHECK (vu1_native_material.h): the runs checked.
#ifndef TS_NATIVE_DRAW_SELFCHECK_RUNS
#define TS_NATIVE_DRAW_SELFCHECK_RUNS 0xFFFFFFFFu // validation run: the whole session
#endif
#ifndef TS_NATIVE_DRAW_SELFCHECK_EVERY
#define TS_NATIVE_DRAW_SELFCHECK_EVERY 32u
#endif
// TS_NATIVE_RING_SELFCHECK 1: on one draw run in TS_NATIVE_RING_SELFCHECK_EVERY
// (the whole session) every strip the renderer transforms is also decoded
// the way the pipeline first did it (into a cached array, vu1_native_xf.h),
// and compared bit for bit with a second decode by the per-layout decoder
// (decodeXfStrip) that the ring writer uses. This covers the decoders only:
// join placement and segment moves in the ring are covered by the host test
// (src/xbox/test/vu1_native_xf_test.cpp). Differences count in ringdiff=
// (status block; must stay 0), the first few are logged.
#ifndef TS_NATIVE_RING_SELFCHECK
#define TS_NATIVE_RING_SELFCHECK 0
#endif
#ifndef TS_NATIVE_RING_SELFCHECK_EVERY
#define TS_NATIVE_RING_SELFCHECK_EVERY 32u
#endif
// TS_NATIVE_RUN_LEAN 1 (rewrite plan M1.4): run() without the costs around
// the program. The draw entries' CPU-path vertex array (3 KB) lives in the
// CPU path's own frame: in run()'s it made that frame 6.5 KB (3.5 KB
// without it, under the 4 KB page), and every call, the constant entries'
// too, paid a stack probe (__chkstk); now only a strip taken on the CPU
// path does. The cycle count (kcyc native= in the status block) is off
// unless TS_NATIVE_KCYC (vu1_native_ts.cpp), and then kept without a 64-bit
// division a call. 0: as before (the count always on, the array in run()'s
// frame).
#ifndef TS_NATIVE_RUN_LEAN
#define TS_NATIVE_RUN_LEAN 1
#endif
// TS_NATIVE_TEXKICK_SHORTCUT 1 (src/xbox/PUSH-BC-PLAN.md section 3.2 item
// 7, C-XF): a texture kick (dlSelectTextureKick: the 8-qword texture
// packet as the batch's state block and the static 6-qword template at
// 0x3805B0, which draws one strip of three vertices all at the origin) is
// recognised by its header and its three zero position rows; the state
// block is applied as before and the renderer's run is opened and closed
// with no vertex in it: the strip, which covers no pixel (zero area on the
// GS, zero area on the NV2A), is neither decoded nor drawn. Everything
// else the run does stays (PRIM written, the frame and batch handling, the
// constants), and when the renderer declines the run (an off-screen
// target) the strip takes the CPU path exactly as before, which also
// leaves the GS's current ST and RGBAQ as the packet sets them. Exact by
// construction. 0: the strip goes through the renderer as any other.
#ifndef TS_NATIVE_TEXKICK_SHORTCUT
#define TS_NATIVE_TEXKICK_SHORTCUT 1
#endif
#else
#undef TS_NATIVE_RING_SELFCHECK
#define TS_NATIVE_RING_SELFCHECK 0
#define TS_NATIVE_RUN_LEAN 0
#define TS_NATIVE_TEXKICK_SHORTCUT 0
#ifndef TS_RENDER_COUNT
#define TS_RENDER_COUNT(expr) ((void)0)
#endif
#endif

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstring>
#if TS_NATIVE_RING_SELFCHECK
#include <iostream>
#endif

namespace ts_native_draw
{
    using ts_native_xf::Layout;
    constexpr float kLitClamp = 127.0f; // minii in the lit entries
    constexpr float kGuardBand = 4.0f;  // |x|,|y| <= 4w keeps 12.4 screen coordinates in range

    // A vertex in clip space with its untransformed attributes.
    struct ClipVertex
    {
        V4 p;
        V4 st;      // the ST array entry (s, t, 1, 1 typically); the output is st * q
        float c[4]; // final colour (integers as floats, so clipping can interpolate)
    };

    // The CPU path's GIF packet (the state block as a packet, strips as
    // PACKED ST/RGBAQ/XYZF2 vertices), handed to the sink when full or done.
    template <class Sink>
    struct Packet
    {
        uint8_t *buf;
        uint32_t size, used, lastTag;
        PS2Memory *memory;
        GS *gs;
        Sink *sink;

        void submit()
        {
            if (used == 0)
                return;
            buf[lastTag + 1] |= 0x80; // EOP (bit 15 of word 0) on the final tag
            sink->submitPacket(memory, *gs, buf, used);
            used = 0;
        }
        void ensure(uint32_t bytes)
        {
            if (used + bytes > size)
                submit();
        }
        uint8_t *tag(const uint32_t words[4])
        {
            lastTag = used;
            std::memcpy(buf + used, words, 16);
            buf[used + 1] &= 0x7F; // EOP only when the packet ends (submit)
            used += 16;
            return buf + lastTag;
        }
        void vertex(const ClipVertex &v, const V4 &scale, const V4 &offset)
        {
            const float q = 1.0f / v.p.w;
            float *st = reinterpret_cast<float *>(buf + used);
            st[0] = v.st.x * q;
            st[1] = v.st.y * q;
            st[2] = v.st.z * q;
            st[3] = v.st.w * q;
            uint32_t *rgba = reinterpret_cast<uint32_t *>(buf + used + 16);
            for (int i = 0; i < 4; ++i)
                rgba[i] = static_cast<uint32_t>(static_cast<int32_t>(v.c[i]));
            int32_t *xyz = reinterpret_cast<int32_t *>(buf + used + 32);
            // (p * q) * scale + offset, then ftoi4.
            xyz[0] = static_cast<int32_t>((v.p.x * q * scale.x + offset.x) * 16.0f);
            xyz[1] = static_cast<int32_t>((v.p.y * q * scale.y + offset.y) * 16.0f);
            xyz[2] = static_cast<int32_t>((v.p.z * q * scale.z + offset.z) * 16.0f);
            xyz[3] = 0;
            used += 48;
        }
    };

    // Signed distance to the six clip planes (inside when >= 0).
    inline float planeDistance(const V4 &p, int plane)
    {
        switch (plane)
        {
        case 0: return p.w + p.z;                 // near
        case 1: return p.w - p.z;                 // far
        case 2: return p.w * kGuardBand + p.x;
        case 3: return p.w * kGuardBand - p.x;
        case 4: return p.w * kGuardBand + p.y;
        default: return p.w * kGuardBand - p.y;
        }
    }
    inline bool inside(const V4 &p)
    {
        return p.w > 0.0f && p.w + p.z >= 0.0f && p.w - p.z >= 0.0f && std::fabs(p.x) <= p.w * kGuardBand &&
               std::fabs(p.y) <= p.w * kGuardBand;
    }
    inline ClipVertex lerp(const ClipVertex &a, const ClipVertex &b, float t)
    {
        ClipVertex o;
        o.p = {a.p.x + (b.p.x - a.p.x) * t, a.p.y + (b.p.y - a.p.y) * t, a.p.z + (b.p.z - a.p.z) * t,
               a.p.w + (b.p.w - a.p.w) * t};
        o.st = {a.st.x + (b.st.x - a.st.x) * t, a.st.y + (b.st.y - a.st.y) * t, a.st.z + (b.st.z - a.st.z) * t,
                a.st.w + (b.st.w - a.st.w) * t};
        for (int i = 0; i < 4; ++i)
            o.c[i] = a.c[i] + (b.c[i] - a.c[i]) * t;
        return o;
    }

    // Sutherland-Hodgman against the six planes; returns the polygon size.
    inline int clipTriangle(const ClipVertex &a, const ClipVertex &b, const ClipVertex &c, ClipVertex out[12])
    {
        ClipVertex buf[12];
        ClipVertex *in = out, *next = buf;
        in[0] = a;
        in[1] = b;
        in[2] = c;
        int n = 3;
        for (int plane = 0; plane < 6 && n > 0; ++plane)
        {
            int m = 0;
            for (int i = 0; i < n; ++i)
            {
                const ClipVertex &cur = in[i], &prev = in[(i + n - 1) % n];
                const float dc = planeDistance(cur.p, plane), dp = planeDistance(prev.p, plane);
                if ((dc >= 0.0f) != (dp >= 0.0f))
                    next[m++] = lerp(prev, cur, dp / (dp - dc));
                if (dc >= 0.0f)
                    next[m++] = cur;
                if (m >= 11)
                    break;
            }
            std::swap(in, next);
            n = m;
        }
        if (in != out)
            std::memcpy(out, in, sizeof(ClipVertex) * size_t(n));
        return n;
    }

    // A strip of the batch: its GIF tag, vertex count and first vertex qword.
    struct Strip
    {
        uint32_t tag[4];
        uint32_t n, vi;
    };

    // The scratch every runDrawT instantiation shares (the draw path is not
    // re-entered): the CPU path's packet and the batch's strip headers.
    struct DrawScratch
    {
        uint8_t packetBuffer[48u * 1024u];
        Strip strips[64];
    };
    extern DrawScratch g_drawScratch; // vu1_native_ts.cpp

    // The batch in VU1 data memory: the microprogram's own view of it.
    struct VuSource
    {
        uint8_t *data; // VU1 data memory (kDataQwords rows)

        const uint8_t *vuData() const { return data; }
        void row(uint32_t q, void *out) const { std::memcpy(out, data + (q & (kDataQwords - 1u)) * 16u, 16); }
        const uint8_t *rows(uint32_t q) const { return data + q * 16u; }
        void writeJoinedStrip(uint32_t kind, GSXfCursor &cursor, uint32_t vi, uint32_t n) const
        {
            ts_native_xf::writeJoinedStrip(kind, cursor, data, vi, n);
        }
        void decodeStrip(uint32_t kind, uint32_t vi, uint32_t n, GSXfVertex *out) const
        {
            ts_native_xf::decodeXfStrip(kind, data, vi, n, out);
        }
        void decodeReference(const Layout &L, uint32_t vi, uint32_t v, GSXfVertex &out) const
        {
            ts_native_xf::decodeXfVertexReference(L, data, vi, v, out);
        }
    };

    // The GS front end and the renderer, through the PS2Memory (null: no
    // runtime, as in the VU replay tool) and GS of the run.
    struct ProductionSink
    {
        static bool gpuTransform()
        {
#if defined(PLATFORM_XBOX)
            return !PS2Memory::onVif1Worker(); // the NV2A renderer's vertex programs
#else
            return false; // no PC renderer takes raw vertices
#endif
        }
        static bool directStrips() { return !PS2Memory::onVif1Worker(); }
        static void submitPacket(PS2Memory *memory, GS &gs, const uint8_t *data, uint32_t bytes)
        {
            if (memory)
                memory->submitGifPacket(GifPathId::Path1, data, bytes);
            else
                gs.processGIFPacket(data, bytes, GifPathId::Path1);
        }
        // Packets queued behind other paths keep the GIF arbiter's order.
        static bool othersQueued(PS2Memory *memory) { return memory && memory->gifArbiter() && !memory->gifArbiter()->empty(); }
        static void drainOthers(PS2Memory *memory)
        {
            if (othersQueued(memory))
                memory->gifArbiter()->drain();
        }
        static GS::StateBlockResult applyStateBlock(GS &gs, const GS::StateBlock &block) { return gs.applyStateBlock(block); }
        static bool checkStateBlock(GS &gs, const uint8_t *block, uint32_t bytes) { return gs.checkStateBlock(block, bytes); }
        static void submitStrip(GS &gs, uint32_t prim, const GSVertex *vertices, uint32_t n) { gs.submitStrip(prim, vertices, n); }
        // A strip the run recognised as drawing nothing (the texture kick),
        // for the GS front end's statistics.
        static void primNoDraw(GS &gs, uint32_t prim) { gs.notePrimNoDraw(prim); }
        static bool beginXfRun(GS &gs, uint32_t prim, const GSXfConstants &xc, GSXfCursor &cursor)
        {
            return gs.beginXfRun(prim, xc, cursor);
        }
        static void growXfCursor(GS &gs, GSXfCursor &cursor, uint32_t count) { gs.growXfCursor(cursor, count); }
        static void emitXfStrip(GS &gs, const GSXfVertex *vertices, uint32_t n) { gs.emitXfStrip(vertices, n); }
        static void endXfRun(GS &gs, GSXfCursor &cursor) { gs.endXfRun(cursor); }
        // Inside an open run: strips the renderer fetches in place (M8,
        // runtime/gs/gs_xf_inplace.h); cursor.inPlaceTaken says how many.
        static void xfInPlace(GS &gs, GSXfCursor &cursor, const GSXfInPlaceStrip *strips, uint32_t n)
        {
            gs.xfInPlace(cursor, strips, n);
        }
    };

    // A draw entry's batch at `top`: strip headers (GIF tags; NLOOP = vertex
    // count, EOP on the last) from top+0, vertex arrays from top+vertexBase,
    // the render-state block (one A+D GIF packet) at top+216. The vertices
    // are transformed, lit and clipped, and the GS gets the same packets the
    // microprogram would have kicked (strips in GS screen space, three
    // registers a vertex) - on the renderer's path, as raw vertices for its
    // transform programs. False: not a batch this code takes (the exact
    // translator runs the entry).
    template <class Source, class Sink>
    bool runDrawT(const Layout &L, Source &src, uint32_t top, PS2Memory *memory, GS &gs, Sink &sink)
    {
        DrawScratch &scratch = g_drawScratch;
        Packet<Sink> packet{scratch.packetBuffer, sizeof(scratch.packetBuffer), 0, 0, memory, &gs, &sink};
        const uint8_t *const data = src.vuData(); // the constant rows

        // Render-state block: one packed A+D packet.
        uint32_t stateTag[4];
        src.row(top + 216u, stateTag);
        const uint32_t nloop = stateTag[0] & 0x7FFFu, nreg = (stateTag[1] >> 28) ? (stateTag[1] >> 28) : 16u;
        const uint32_t stateQwords = 1u + nloop * nreg;
        if (stateQwords > 32u || ((top + 216u + stateQwords) > kDataQwords))
            return false;
        const uint8_t *const stateBlock = src.rows(top + 216u);
        const uint32_t stateBytes = stateQwords * 16u;

        const bool gpuTransform = sink.gpuTransform();
#if TS_NATIVE_DRAW_SELFCHECK
        static uint32_t s_runs = 0;
        const bool check = gpuTransform && g_nv2aTextureStats.drawChecked < TS_NATIVE_DRAW_SELFCHECK_RUNS &&
                           (s_runs++ % TS_NATIVE_DRAW_SELFCHECK_EVERY) == 0u;
#else
        const bool check = false;
#endif
        // On the renderer's path the block is decoded once (materialFor) and
        // applied to the GS front end directly: no GIF packet, and a repeat
        // of the block before it applies nothing.
        bool materialFound = false;
        const GS::StateBlock *material = gpuTransform ? materialFor(stateBlock, stateBytes, materialFound) : nullptr;
        // The block goes ahead of the run's first strip, as the microprogram
        // kicks it: applied directly, else as the start of the run's packet.
        bool stateSent = false;
        auto sendState = [&]() {
            if (stateSent)
                return;
            stateSent = true;
#if TS_NATIVE_DRAW_SELFCHECK
            if (check)
                ++g_nv2aTextureStats.drawChecked;
#endif
            // Packets queued behind other paths keep the GIF arbiter's order:
            // this block then goes as a packet too.
            if (material && !sink.othersQueued(memory))
            {
                const GS::StateBlockResult applied = sink.applyStateBlock(gs, *material);
                if (applied != GS::StateBlockResult::NotApplied)
                {
                    TS_NATIVE_STAT(applied == GS::StateBlockResult::Repeated ? ++g_nv2aTextureStats.materialRepeats
                                   : materialFound                           ? ++g_nv2aTextureStats.materialHits
                                                                             : ++g_nv2aTextureStats.materialMisses);
#if TS_NATIVE_DRAW_SELFCHECK
                    if (check && material->idempotent && !sink.checkStateBlock(gs, stateBlock, stateBytes))
                        noteDrawDiff(applied == GS::StateBlockResult::Repeated ? "GS state (repeated block)"
                                                                               : "GS state (applied block)");
#endif
                    return;
                }
            }
            std::memcpy(packet.buf, stateBlock, stateBytes);
            packet.used = stateBytes;
            packet.lastTag = 0; // (an EOP on the state block only matters if nothing follows)
        };

        // The CPU path's matrices, read when it is first taken (on the
        // renderer's path most runs never take it).
        Mat mvp[3], lightDir[3], lightColour, model;
        V4 scale, offset;
        bool cpuConstants = false;
        auto loadCpuConstants = [&]() {
            if (cpuConstants)
                return;
            cpuConstants = true;
            mvp[0] = loadM(data, 8);
            lightDir[0] = loadM(data, 110);
            if (L.skinned)
            {
                mvp[1] = loadM(data, 12);
                mvp[2] = loadM(data, 16);
                lightDir[1] = loadM(data, 114);
                lightDir[2] = loadM(data, 118);
            }
            lightColour = loadM(data, 106);
            model = loadM(data, 4); // environment map: the normal's rotation
            scale = loadV(data, 20);
            offset = loadV(data, 21);
        };

        // The GPU transform's constants (raw VU1 rows) for this batch.
        GSXfConstants *xc = nullptr;
        if (gpuTransform)
        {
            xc = &transformConstants(data, check);
            xc->variant = L.envMap ? GSXfConstants::EnvMap
                          : L.skinned ? GSXfConstants::Skinned
                          : L.lit     ? GSXfConstants::Lit
                                      : GSXfConstants::Plain;
            xc->check = check ? 1u : 0u;
        }

#if !TS_NATIVE_RUN_LEAN
        ClipVertex verts[64];
#endif

        // A batch row (the vertex arrays) through the source.
        auto rowV = [&](uint32_t q) {
            V4 v;
            src.row(q, &v);
            return v;
        };

        // The CPU path for one strip: transform, light and clip here, then
        // to the GS as decoded vertices or as a packet.
        auto cpuStrip = [&](const uint32_t *tag, uint32_t n, uint32_t vi) {
#if TS_NATIVE_RUN_LEAN
            ClipVertex verts[64]; // (in this path's frame, not every run's)
#endif
            TS_RENDER_COUNT(++g_renderCounters.cpuStrips);
            loadCpuConstants();
            bool allInside = true;
            for (uint32_t v = 0; v < n; ++v)
            {
                ClipVertex &cv = verts[v];
                const V4 pos = rowV(vi + L.pos + v);
                uint32_t bone = 0;
                if (L.skinned)
                {
                    uint32_t index[4];
                    src.row(vi + L.boneIndex + v, index);
                    bone = std::min<uint32_t>(index[0] & 0xFFFFu, 2u);
                }
                cv.p = transform(mvp[bone], pos.x, pos.y, pos.z, 1.0f);
                if (L.envMap)
                {
                    // n' = model rows 4..6 * n; s = (n'.x + 1) / 2, t = (n'.z + 1) / 2.
                    const V4 nrm = rowV(vi + L.normal + v);
                    const float rx = model.r[0].x * nrm.x + model.r[1].x * nrm.y + model.r[2].x * nrm.z;
                    const float rz = model.r[0].z * nrm.x + model.r[1].z * nrm.y + model.r[2].z * nrm.z;
                    cv.st = {(rx + 1.0f) * 0.5f, (rz + 1.0f) * 0.5f, 1.0f, 0.0f};
                }
                else
                    cv.st = rowV(vi + L.st + v);
                uint32_t rgba[4];
                src.row(vi + L.rgba + v, rgba);
                for (int i = 0; i < 4; ++i)
                    cv.c[i] = static_cast<float>(static_cast<int32_t>(rgba[i]));
                if (L.lit)
                {
                    const V4 nrm = rowV(vi + L.normal + v);
                    V4 inten = transform(lightDir[bone], nrm.x, nrm.y, nrm.z, 1.0f);
                    inten.x = std::max(inten.x, 0.0f);
                    inten.y = std::max(inten.y, 0.0f);
                    inten.z = std::max(inten.z, 0.0f);
                    inten.w = std::max(inten.w, 0.0f);
                    const V4 col = transform(lightColour, inten.x, inten.y, inten.z, inten.w);
                    // itof0 of the vertex colour, times the light, clamped, ftoi0 (truncation).
                    cv.c[0] = static_cast<float>(static_cast<int32_t>(std::min(cv.c[0] * col.x, kLitClamp)));
                    cv.c[1] = static_cast<float>(static_cast<int32_t>(std::min(cv.c[1] * col.y, kLitClamp)));
                    cv.c[2] = static_cast<float>(static_cast<int32_t>(std::min(cv.c[2] * col.z, kLitClamp)));
                }
                allInside = allInside && inside(cv.p);
            }

            if (allInside && (tag[1] & (1u << 14)) != 0u && sink.directStrips())
            {
                // Straight to the GS as decoded vertices (no packet): the
                // values a PACKED ST/RGBAQ/XYZF2 packet would have produced.
                packet.submit(); // the state block and anything before go first
                sink.drainOthers(memory); // packets queued behind other paths, in order
                GSVertex out[64];
                for (uint32_t v = 0; v < n; ++v)
                {
                    const ClipVertex &cv = verts[v];
                    GSVertex &o = out[v];
                    const float q = 1.0f / cv.p.w;
                    o.s = cv.st.x * q;
                    o.t = cv.st.y * q;
                    o.q = cv.st.z * q;
                    if (o.q == 0.0f)
                        o.q = 1.0f;
                    o.r = static_cast<uint8_t>(static_cast<int32_t>(cv.c[0]));
                    o.g = static_cast<uint8_t>(static_cast<int32_t>(cv.c[1]));
                    o.b = static_cast<uint8_t>(static_cast<int32_t>(cv.c[2]));
                    o.a = static_cast<uint8_t>(static_cast<int32_t>(cv.c[3]));
                    const int32_t x = static_cast<int32_t>((cv.p.x * q * scale.x + offset.x) * 16.0f);
                    const int32_t y = static_cast<int32_t>((cv.p.y * q * scale.y + offset.y) * 16.0f);
                    const int32_t z = static_cast<int32_t>((cv.p.z * q * scale.z + offset.z) * 16.0f);
                    o.x = static_cast<float>(static_cast<uint32_t>(x) & 0xFFFFu) / 16.0f;
                    o.y = static_cast<float>(static_cast<uint32_t>(y) & 0xFFFFu) / 16.0f;
                    o.z = static_cast<double>((static_cast<uint32_t>(z) >> 4) & 0xFFFFFFu);
                    o.u = o.v = 0;
                    o.fog = 0;
                }
                sink.submitStrip(gs, (tag[1] >> 15) & 0x7FFu, out, n);
            }
            else if (allInside)
            {
                packet.ensure(16u + 48u * n);
                packet.tag(tag);
                for (uint32_t v = 0; v < n; ++v)
                    packet.vertex(verts[v], scale, offset);
            }
            else if (n >= 3u)
            {
                // Clipped: the surviving pieces as a triangle list (PRIM type 3).
                uint32_t listTag[4] = {tag[0], (tag[1] & ~(7u << 15)) | (3u << 15), tag[2], tag[3]};
                packet.ensure(16u + 48u * 3u);
                uint8_t *tagAt = packet.tag(listTag);
                uint32_t count = 0;
                for (uint32_t t = 0; t + 2 < n; ++t)
                {
                    ClipVertex poly[12];
                    const int m = clipTriangle(verts[t], verts[t + 1], verts[t + 2], poly);
                    for (int k = 1; k + 1 < m; ++k)
                    {
                        if (packet.used + 3u * 48u > packet.size)
                        {
                            // Finish this list and start another in a new packet.
                            uint32_t *w = reinterpret_cast<uint32_t *>(tagAt);
                            w[0] = (w[0] & ~0x7FFFu) | count;
                            packet.submit();
                            tagAt = packet.tag(listTag);
                            count = 0;
                        }
                        packet.vertex(poly[0], scale, offset);
                        packet.vertex(poly[k], scale, offset);
                        packet.vertex(poly[k + 1], scale, offset);
                        count += 3u; // NLOOP counts vertices (one register set each)
                    }
                }
                uint32_t *w = reinterpret_cast<uint32_t *>(tagAt);
                w[0] = (w[0] & ~0x7FFFu) | count;
                if (count == 0u)
                    packet.used -= 16u; // nothing survived: drop the empty tag
            }
        };

        // The strip headers, read first: the renderer takes a run's strips
        // in groups of one PRIM, and whether a group can go to it (every
        // strip has three vertices or more) must be known before the
        // group's first vertex is written into its memory.
        Strip *const strips = scratch.strips; // (the draw path is not re-entered)
        uint32_t stripCount = 0;
        for (uint32_t header = top, vi = top + L.vertexBase; stripCount < 64u;)
        {
            Strip &s = strips[stripCount];
            src.row(header, s.tag);
            const uint32_t n = s.tag[0] & 0x7FFFu;
            if (n == 0u || n > 64u || ((s.tag[1] >> 28) & 0xFu) != 3u)
                break;
            if (vi + L.st + n > kDataQwords || vi + L.rgba + n > kDataQwords ||
                ((L.lit || L.envMap) && vi + L.normal + n > kDataQwords))
                break;
            s.n = n;
            s.vi = vi;
            ++stripCount;
            if (s.tag[0] & 0x8000u) // EOP: the last strip
                break;
            ++header;
            vi += n;
        }
        if (stripCount == 0u)
            return false; // nothing at all: not even the state block
#if TS_NATIVE_TEXKICK_SHORTCUT
        // The texture kick (TS_NATIVE_TEXKICK_SHORTCUT above): dlSelectTextureKick's
        // template is one strip of three vertices, PACKED ST/RGBAQ/XYZF2
        // with PRE and PRIM 0x4C (a gouraud strip, texture off), EOP, on the
        // Plain entry, with its three position rows unpacked as zeros (the
        // colours are 0xFFFF V4-16 at the Plain layout's RGBA array; the ST
        // rows are whatever VU1 memory holds). Three vertices at one point
        // make a zero-area triangle, which neither the GS nor the NV2A
        // rasterises: on the renderer's path the run is opened and closed
        // empty. A run the renderer declines falls through to the path
        // below (which declines it again and takes the CPU path).
        if (gpuTransform && stripCount == 1u && strips[0].n == 3u && !L.lit && !L.envMap && !L.skinned &&
            strips[0].tag[0] == 0x00008003u && strips[0].tag[1] == 0x30264000u && strips[0].tag[2] == 0x00000412u)
        {
            uint32_t pos[3][4];
            bool zero = true;
            for (uint32_t v = 0; v < 3u && zero; ++v)
            {
                src.row(strips[0].vi + L.pos + v, pos[v]);
                zero = (pos[v][0] | pos[v][1] | pos[v][2]) == 0u;
            }
            const uint32_t prim = (strips[0].tag[1] >> 15) & 0x7FFu;
            GSXfCursor kick;
            if (zero)
            {
                sendState();
                packet.submit(); // the state block as a packet, when it had to be one
                sink.drainOthers(memory);
            }
            if (zero && sink.beginXfRun(gs, prim, *xc, kick))
            {
                TS_RENDER_COUNT(++g_renderCounters.draws);
                TS_RENDER_COUNT(++g_renderCounters.drawStrips);
                TS_RENDER_COUNT(g_renderCounters.drawVertices += 3u);
                TS_RENDER_COUNT(++g_renderCounters.gpuRuns);
                TS_NATIVE_STAT(++g_nv2aTextureStats.texKicks);
                sink.endXfRun(gs, kick); // no vertex
                sink.primNoDraw(gs, prim);
                return true;
            }
        }
#endif
        sendState();
        // (The strips' arrays lie back to back from top + vertexBase.)
        TS_RENDER_COUNT(++g_renderCounters.draws);
        TS_RENDER_COUNT(g_renderCounters.drawStrips += stripCount);
        TS_RENDER_COUNT(g_renderCounters.drawVertices +=
                        strips[stripCount - 1u].vi + strips[stripCount - 1u].n - (top + L.vertexBase));

#if TS_NATIVE_RING_SELFCHECK
        static uint32_t s_ringRuns = 0;
        const bool ringCheck = gpuTransform && (s_ringRuns++ % TS_NATIVE_RING_SELFCHECK_EVERY) == 0u;
        bool ringChecked = false, ringDiffered = false;
        // The strip the pipeline's first decode gives, and a cached shadow
        // of the records written into the ring.
        static GSXfVertex s_ringRef[64], s_ringShadow[64];
        auto checkRingStrip = [&](const Strip &strip, const GSXfVertex *written) {
            for (uint32_t i = 0; i < strip.n; ++i)
                src.decodeReference(L, strip.vi, i, s_ringRef[i]);
            ringChecked = true;
            if (std::memcmp(s_ringRef, written, strip.n * sizeof(GSXfVertex)) == 0)
                return;
            if (ringDiffered)
                return;
            ringDiffered = true;
            if (g_nv2aTextureStats.ringDiffs >= 16u)
                return;
            uint32_t i = 0;
            while (std::memcmp(&s_ringRef[i], &written[i], sizeof(GSXfVertex)) == 0)
                ++i;
            uint32_t word = 0;
            while (std::memcmp(reinterpret_cast<const uint8_t *>(&s_ringRef[i]) + word * 4u,
                               reinterpret_cast<const uint8_t *>(&written[i]) + word * 4u, 4) == 0)
                ++word;
            std::cout << "[TS:ringcheck] run " << g_nv2aTextureStats.ringChecked << ": strip of " << strip.n
                      << " at qword " << strip.vi << ", vertex " << i << ", word " << word << " differs" << std::endl;
        };
#endif

        // GPU path: a strip's vertices decoded from the arrays straight into
        // the renderer's transform ring through the run's cursor (one
        // joined strip; the ring is write-combined memory, written front to
        // back and never read back; the strip's last vertex also goes into
        // the cursor's cached copy, which the next strip's join repeats),
        // or into a local array the renderer lays out itself (a triangle
        // list, flat shading). The strip header loop above keeps every
        // array inside VU1 memory, so the decode needs no wrap per vertex.
        const uint32_t kind = static_cast<uint32_t>(&L - ts_native_xf::kLayouts);
        GSXfCursor cursor;
        auto gpuStrip = [&](const Strip &strip) {
            const uint32_t n = strip.n, vi = strip.vi;
            // M8: a source that knows where the strip's arrays lie in guest
            // RAM (R2's GuestSource) may hand it to the renderer to fetch in
            // place (a gouraud run only; the source says whether the strip
            // is eligible); what the renderer does not take goes into the
            // ring as below.
            if constexpr (requires(GSXfInPlaceStrip &ip) {
                              src.inPlaceStrip(kind, vi, n, ip);
                              sink.xfInPlace(gs, cursor, &ip, 1u);
                          })
            {
                GSXfInPlaceStrip ip;
                if (cursor.direct && src.inPlaceStrip(kind, vi, n, ip))
                {
                    sink.xfInPlace(gs, cursor, &ip, 1u);
                    if (cursor.inPlaceTaken != 0u)
                        return;
                }
            }
            if (cursor.direct)
            {
                // Room for the strip and its join, else the next segment.
                if (cursor.next + (n + 2u) > cursor.end)
                    sink.growXfCursor(gs, cursor, n + 2u);
                // Joined to the strip before by two repeated vertices.
                src.writeJoinedStrip(kind, cursor, vi, n);
#if TS_NATIVE_RING_SELFCHECK
                if (ringCheck)
                {
                    // The production decode's records, a second time into
                    // a cached shadow (the ring is not read back).
                    src.decodeStrip(kind, vi, n - 1u, s_ringShadow);
                    s_ringShadow[n - 1u] = cursor.last;
                    checkRingStrip(strip, s_ringShadow);
                }
#endif
            }
            else
            {
                GSXfVertex list[64];
                src.decodeStrip(kind, vi, n, list);
#if TS_NATIVE_RING_SELFCHECK
                if (ringCheck)
                    checkRingStrip(strip, list);
#endif
                sink.emitXfStrip(gs, list, n);
            }
        };

        // A strip the renderer transforms: PRE set (the tag carries PRIM).
        auto gpuEligible = [&](const Strip &s) { return gpuTransform && (s.tag[1] & (1u << 14)) != 0u; };
        for (uint32_t i = 0; i < stripCount;)
        {
            if (!gpuEligible(strips[i]))
            {
                cpuStrip(strips[i].tag, strips[i].n, strips[i].vi);
                ++i;
                continue;
            }
            // The run of strips of one PRIM, back to back, the renderer takes
            // as one call, in order with everything else. A strip of fewer
            // than three vertices sends the whole group to the CPU path (as
            // the renderer declined such a group before).
            const uint32_t prim = (strips[i].tag[1] >> 15) & 0x7FFu;
            uint32_t j = i;
            bool ok = true;
            while (j < stripCount && gpuEligible(strips[j]) && ((strips[j].tag[1] >> 15) & 0x7FFu) == prim)
            {
                ok = ok && strips[j].n >= 3u;
                ++j;
            }
            packet.submit(); // the state block and anything before go first
            sink.drainOthers(memory); // packets queued behind other paths, in order
            if (ok && sink.beginXfRun(gs, prim, *xc, cursor))
            {
                TS_RENDER_COUNT(++g_renderCounters.gpuRuns);
                TS_RENDER_COUNT(g_renderCounters.flatRuns += cursor.direct ? 0u : 1u);
                TS_RENDER_COUNT(g_renderCounters.mergedRuns += cursor.direct && cursor.join ? 1u : 0u);
                for (uint32_t k = i; k < j; ++k)
                    gpuStrip(strips[k]);
                sink.endXfRun(gs, cursor);
            }
            else
            {
                TS_RENDER_COUNT(g_renderCounters.declinedRuns += ok ? 1u : 0u);
                for (uint32_t k = i; k < j; ++k)
                    cpuStrip(strips[k].tag, strips[k].n, strips[k].vi);
            }
            i = j;
        }
#if TS_NATIVE_RING_SELFCHECK
        if (ringChecked)
        {
            ++g_nv2aTextureStats.ringChecked;
            if (ringDiffered)
                ++g_nv2aTextureStats.ringDiffs;
        }
#endif
        packet.submit(); // the state block and the strips
        return true;
    }
}

// ---- Exported by vu1_native_ts.cpp (section 6, I-3).

// The VU1 data rows (16 bytes each, 1024 in all) the program at pc reads
// when started with TOP = top: the rows the debt map (D2) must settle before
// the program runs. The window wraps at 1024 like VU1 addresses (first +
// count may pass 1024: a draw entry's runs from TOP round to the constant
// rows). An entry this program does not recognise, or an interpreted
// program, reads everything: first 0, count 1024. (C-XF: the kick and the
// draw entries narrowed; the constant entries read everything.)
void vu1NativeReadWindow(uint32_t pc, uint32_t top, uint32_t *first, uint32_t *count);

// The microprogram's constant entries (0x3af8 .. 0x3f00: the batch's rows
// copied into the fixed constant slots, the matrix products), run without
// an MSCAL (C-REC's prologue token calls them directly): true when pc is one
// and it ran; false for a draw entry, the kick (0x3fe0) or anything else.
// vuData: VU1 data memory; top: the run's TOP.
bool vu1NativeConstantEntry(uint32_t pc, uint8_t *vuData, uint32_t top);
// The draw entries' layout (vu1_native_xf.h), null when pc is not one: a
// records builder maps a batch's UNPACK rows by it.
const ts_native_xf::Layout *vu1NativeDrawLayout(uint32_t pc);
