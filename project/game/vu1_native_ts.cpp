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
#include "runtime/ps2_vu1_jit.h"
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/ps2_gif_arbiter.h"

#if defined(PLATFORM_XBOX)
#include "../../src/xbox/gs_nv2a_backend.h" // status counters
#define TS_NATIVE_STAT(expr) (expr)
// TS_NATIVE_DRAW_SELFCHECK 1: the first TS_NATIVE_DRAW_SELFCHECK_RUNS draw
// runs on the renderer's path (one in TS_NATIVE_DRAW_SELFCHECK_EVERY) also
// take the old one and compare what reaches the GS and the renderer: the
// render-state block processed again as a GIF packet over the applied one
// (it must change no register and no CLUT), the transform constants copied
// afresh from VU1 memory, the renderer's full texture lookup and constant
// rebuild. Differences count in drawdiff= (status block), the first few are
// logged, and the old path's result is the one used.
#ifndef TS_NATIVE_DRAW_SELFCHECK
#define TS_NATIVE_DRAW_SELFCHECK 1
#endif
#ifndef TS_NATIVE_DRAW_SELFCHECK_RUNS
#define TS_NATIVE_DRAW_SELFCHECK_RUNS 0xFFFFFFFFu // validation run: the whole session
#endif
#ifndef TS_NATIVE_DRAW_SELFCHECK_EVERY
#define TS_NATIVE_DRAW_SELFCHECK_EVERY 32u
#endif
#include <iostream>
#else
#define TS_NATIVE_STAT(expr) ((void)0)
#undef TS_NATIVE_DRAW_SELFCHECK // (the renderer's path is the Xbox's)
#define TS_NATIVE_DRAW_SELFCHECK 0
#endif

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstdint>
#include <cstring>

namespace
{
    constexpr uint64_t kProgramHash = 0x38ae1e855cd83deeull;
    constexpr uint32_t kDataQwords = 1024u;
    constexpr float kLitClamp = 127.0f; // minii in the lit entries
    constexpr float kGuardBand = 4.0f;  // |x|,|y| <= 4w keeps 12.4 screen coordinates in range

    struct Layout
    {
        uint32_t vertexBase, pos, rgba, st, normal, boneIndex;
        bool lit, skinned, envMap;
    };

    const Layout *layoutFor(uint32_t pc)
    {
        static const Layout plain{24, 0, 64, 128, 0, 0, false, false, false};
        static const Layout env{24, 0, 64, 0, 128, 0, false, false, true};
        static const Layout lit{24, 0, 48, 96, 144, 0, true, false, false};
        static const Layout skinned{32, 0, 36, 72, 144, 108, true, true, false};
        switch (pc)
        {
        case 0x0000: return &plain;
        case 0x0d20: return &env; // texture coordinates from the rotated normal (sphere map)
        case 0x1ae0: return &lit;
        case 0x3520: return &lit; // clips the near plane only; the same pipeline
        case 0x2800: return &skinned;
        default: return nullptr;
        }
    }

    struct V4
    {
        float x, y, z, w;
    };
    struct Mat
    {
        V4 r[4];
    };

    inline V4 loadV(const uint8_t *d, uint32_t q)
    {
        V4 v;
        std::memcpy(&v, d + (q & (kDataQwords - 1u)) * 16u, 16);
        return v;
    }
    inline void loadI(const uint8_t *d, uint32_t q, uint32_t out[4]) { std::memcpy(out, d + (q & (kDataQwords - 1u)) * 16u, 16); }
    inline Mat loadM(const uint8_t *d, uint32_t q)
    {
        Mat m;
        for (uint32_t i = 0; i < 4; ++i)
            m.r[i] = loadV(d, q + i);
        return m;
    }
    // acc = r0*x + r1*y + r2*z + r3*w (the microprogram's mulax/madday/maddaz/maddw).
    inline V4 transform(const Mat &m, float x, float y, float z, float w)
    {
        V4 o;
        o.x = m.r[0].x * x + m.r[1].x * y + m.r[2].x * z + m.r[3].x * w;
        o.y = m.r[0].y * x + m.r[1].y * y + m.r[2].y * z + m.r[3].y * w;
        o.z = m.r[0].z * x + m.r[1].z * y + m.r[2].z * z + m.r[3].z * w;
        o.w = m.r[0].w * x + m.r[1].w * y + m.r[2].w * z + m.r[3].w * w;
        return o;
    }

    // A vertex in clip space with its untransformed attributes.
    struct ClipVertex
    {
        V4 p;
        V4 st;      // the ST array entry (s, t, 1, 1 typically); the output is st * q
        float c[4]; // final colour (integers as floats, so clipping can interpolate)
    };

    struct Packet
    {
        uint8_t *buf;
        uint32_t size, used, lastTag;
        PS2Memory *memory;
        GS *gs;

        void submit()
        {
            if (used == 0)
                return;
            buf[lastTag + 1] |= 0x80; // EOP (bit 15 of word 0) on the final tag
            if (memory)
                memory->submitGifPacket(GifPathId::Path1, buf, used);
            else
                gs->processGIFPacket(buf, used, GifPathId::Path1);
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
    int clipTriangle(const ClipVertex &a, const ClipVertex &b, const ClipVertex &c, ClipVertex out[12])
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

#if TS_NATIVE_DRAW_SELFCHECK
    void noteDrawDiff(const char *what)
    {
        std::snprintf(g_nv2aTextureStats.drawDiffLast, sizeof(g_nv2aTextureStats.drawDiffLast), "%s", what);
        if (++g_nv2aTextureStats.drawDiffs <= 16u)
            std::cout << "[TS:drawcheck] run " << g_nv2aTextureStats.drawChecked << ": " << what << " differs" << std::endl;
    }
#endif

    // Render-state blocks (top+216: TEXFLUSH, TEX1, TEX0, MIPTBP1/2, CLAMP,
    // built once per texture by the game, emLoadTexture_0x2b7190) decoded
    // once into the GS front end's register writes, found again by their
    // bytes (two ways per set: a level has a few hundred). A run usually
    // repeats the block before it, else a texture seen before.
    constexpr uint32_t kMaterialSets = 128u;
    constexpr uint32_t kMaxMaterialBytes = (1u + GS::StateBlock::kMaxWrites) * 16u;
    struct Material
    {
        uint32_t size = 0; // block bytes (0: empty slot)
        uint8_t bytes[kMaxMaterialBytes];
        GS::StateBlock block;
    };

    // The decoded block, or null when the block is not one GS::decodeStateBlock
    // takes (it then goes as a packet). `found`: it was decoded before.
    const GS::StateBlock *materialFor(const uint8_t *block, uint32_t size, bool &found)
    {
        static Material s_materials[kMaterialSets][2];
        static uint8_t s_older[kMaterialSets]; // the way to replace next
        static Material *s_last = nullptr;
        static uint32_t s_serial = 0;
        found = true;
        if (size > kMaxMaterialBytes)
            return nullptr;
        if (s_last && s_last->size == size && std::memcmp(s_last->bytes, block, size) == 0)
            return &s_last->block;
        uint32_t hash = 2166136261u;
        for (uint32_t i = 0; i < size; i += 4u)
        {
            uint32_t word;
            std::memcpy(&word, block + i, 4);
            hash = (hash ^ word) * 16777619u;
        }
        const uint32_t set = (hash ^ (hash >> 15)) % kMaterialSets;
        uint32_t way = 0;
        while (way < 2u && (s_materials[set][way].size != size || std::memcmp(s_materials[set][way].bytes, block, size) != 0))
            ++way;
        if (way == 2u)
        {
            found = false;
            GS::StateBlock decoded;
            if (!GS::decodeStateBlock(block, size, decoded))
                return nullptr;
            decoded.serial = ++s_serial ? s_serial : ++s_serial;
            way = s_older[set];
            Material &m = s_materials[set][way];
            m.size = size;
            std::memcpy(m.bytes, block, size);
            m.block = decoded;
        }
        s_older[set] = static_cast<uint8_t>(way ^ 1u);
        s_last = &s_materials[set][way];
        return &s_last->block;
    }

    void loadConstants(GSXfConstants &xc, const uint8_t *data)
    {
        std::memcpy(xc.mvp[0], data + 8u * 16u, 64);
        std::memcpy(xc.mvp[1], data + 12u * 16u, 64);
        std::memcpy(xc.mvp[2], data + 16u * 16u, 64);
        std::memcpy(xc.lightDir[0], data + 110u * 16u, 64);
        std::memcpy(xc.lightDir[1], data + 114u * 16u, 64);
        std::memcpy(xc.lightDir[2], data + 118u * 16u, 64);
        std::memcpy(xc.lightColour, data + 106u * 16u, 64);
        std::memcpy(xc.scale, data + 20u * 16u, 16);
        std::memcpy(xc.offset, data + 21u * 16u, 16);
        std::memcpy(xc.model, data + 4u * 16u, 48);
    }

    // The GPU transform's constants (raw VU1 rows 4-21 and 106-121), copied
    // out again only after one of those rows was written (g_vu1WatchedRows:
    // the constant entries below, UNPACKs, the translated microprogram, EE
    // stores). A new serial tells the renderer to rebuild its constant block;
    // otherwise it keeps the one it has (the serial used to change every run,
    // and every run rebuilt and compared ~550 bytes).
    GSXfConstants &transformConstants(const uint8_t *data, bool check)
    {
        static GSXfConstants s_xc{};
        static uint32_t s_writes = 0, s_serial = 0;
        static bool s_valid = false;
        if (s_valid && s_writes == g_vu1WatchedRows.writes)
        {
            if (!check)
                return s_xc;
#if TS_NATIVE_DRAW_SELFCHECK
            GSXfConstants fresh{};
            loadConstants(fresh, data);
            if (std::memcmp(&fresh, &s_xc, offsetof(GSXfConstants, variant)) == 0)
                return s_xc;
            noteDrawDiff("transform constants (a VU1 row write was missed)");
#endif
        }
        loadConstants(s_xc, data);
        s_xc.serial = ++s_serial ? s_serial : ++s_serial;
        s_writes = g_vu1WatchedRows.writes;
        s_valid = true;
        TS_NATIVE_STAT(++g_nv2aTextureStats.constRebuilds);
        return s_xc;
    }

    bool runDraw(const Layout &L, uint8_t *data, uint32_t top, PS2Memory *memory, GS &gs)
    {
        static uint8_t packetBuffer[48u * 1024u];
        Packet packet{packetBuffer, sizeof(packetBuffer), 0, 0, memory, &gs};

        // Render-state block: one packed A+D packet.
        uint32_t stateTag[4];
        loadI(data, top + 216u, stateTag);
        const uint32_t nloop = stateTag[0] & 0x7FFFu, nreg = (stateTag[1] >> 28) ? (stateTag[1] >> 28) : 16u;
        const uint32_t stateQwords = 1u + nloop * nreg;
        if (stateQwords > 32u || ((top + 216u + stateQwords) > kDataQwords))
            return false;
        const uint8_t *const stateBlock = data + (top + 216u) * 16u;
        const uint32_t stateBytes = stateQwords * 16u;

#if defined(PLATFORM_XBOX)
        const bool gpuTransform = !PS2Memory::onVif1Worker(); // the NV2A renderer's vertex programs
#else
        const bool gpuTransform = false; // no PC renderer takes raw vertices
#endif
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
            if (material && !(memory && memory->gifArbiter() && !memory->gifArbiter()->empty()))
            {
                const GS::StateBlockResult applied = gs.applyStateBlock(*material);
                if (applied != GS::StateBlockResult::NotApplied)
                {
                    TS_NATIVE_STAT(applied == GS::StateBlockResult::Repeated ? ++g_nv2aTextureStats.materialRepeats
                                   : materialFound                           ? ++g_nv2aTextureStats.materialHits
                                                                             : ++g_nv2aTextureStats.materialMisses);
#if TS_NATIVE_DRAW_SELFCHECK
                    if (check && material->idempotent && !gs.checkStateBlock(stateBlock, stateBytes))
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

        ClipVertex verts[64];

        // The CPU path for one strip: transform, light and clip here, then
        // to the GS as decoded vertices or as a packet.
        auto cpuStrip = [&](const uint32_t *tag, uint32_t n, uint32_t vi) {
            loadCpuConstants();
            bool allInside = true;
            for (uint32_t v = 0; v < n; ++v)
            {
                ClipVertex &cv = verts[v];
                const V4 pos = loadV(data, vi + L.pos + v);
                uint32_t bone = 0;
                if (L.skinned)
                {
                    uint32_t index[4];
                    loadI(data, vi + L.boneIndex + v, index);
                    bone = std::min<uint32_t>(index[0] & 0xFFFFu, 2u);
                }
                cv.p = transform(mvp[bone], pos.x, pos.y, pos.z, 1.0f);
                if (L.envMap)
                {
                    // n' = model rows 4..6 * n; s = (n'.x + 1) / 2, t = (n'.z + 1) / 2.
                    const V4 nrm = loadV(data, vi + L.normal + v);
                    const float rx = model.r[0].x * nrm.x + model.r[1].x * nrm.y + model.r[2].x * nrm.z;
                    const float rz = model.r[0].z * nrm.x + model.r[1].z * nrm.y + model.r[2].z * nrm.z;
                    cv.st = {(rx + 1.0f) * 0.5f, (rz + 1.0f) * 0.5f, 1.0f, 0.0f};
                }
                else
                    cv.st = loadV(data, vi + L.st + v);
                uint32_t rgba[4];
                loadI(data, vi + L.rgba + v, rgba);
                for (int i = 0; i < 4; ++i)
                    cv.c[i] = static_cast<float>(static_cast<int32_t>(rgba[i]));
                if (L.lit)
                {
                    const V4 nrm = loadV(data, vi + L.normal + v);
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

            if (allInside && (tag[1] & (1u << 14)) != 0u && !PS2Memory::onVif1Worker())
            {
                // Straight to the GS as decoded vertices (no packet): the
                // values a PACKED ST/RGBAQ/XYZF2 packet would have produced.
                packet.submit(); // the state block and anything before go first
                if (memory && memory->gifArbiter() && !memory->gifArbiter()->empty())
                    memory->gifArbiter()->drain(); // packets queued behind other paths, in order
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
                gs.submitStrip((tag[1] >> 15) & 0x7FFu, out, n);
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

        // GPU path: a run's unclipped strips go to the renderer together
        // (raw vertices, one call), in order with everything else.
        static GSXfVertex s_batch[64u * 64u];
        static uint8_t s_counts[64];
        struct Pending
        {
            uint32_t tag[4];
            uint32_t n, vi;
        };
        static Pending s_pending[64];
        uint32_t batchStrips = 0, batchVerts = 0, batchPrim = 0;
        bool anything = false;
        auto flushGpu = [&]() {
            if (batchStrips == 0u)
                return;
            packet.submit(); // the state block and anything before go first
            if (memory && memory->gifArbiter() && !memory->gifArbiter()->empty())
                memory->gifArbiter()->drain();
            if (!gs.submitStripsTransformed(batchPrim, *xc, s_batch, s_counts, batchStrips))
                for (uint32_t i = 0; i < batchStrips; ++i)
                    cpuStrip(s_pending[i].tag, s_pending[i].n, s_pending[i].vi);
            batchStrips = batchVerts = 0;
        };
        auto finish = [&]() {
            flushGpu();
            if (anything) // the state block and the strips; nothing at all otherwise
                packet.submit();
            return anything;
        };

        uint32_t header = top, vi = top + L.vertexBase;
        for (uint32_t strip = 0; strip < 64u; ++strip)
        {
            uint32_t tag[4];
            loadI(data, header, tag);
            const uint32_t n = tag[0] & 0x7FFFu;
            const bool last = (tag[0] & 0x8000u) != 0u;
            if (n == 0u || n > 64u || ((tag[1] >> 28) & 0xFu) != 3u)
                return finish();
            if (vi + L.st + n > kDataQwords || vi + L.rgba + n > kDataQwords ||
                ((L.lit || L.envMap) && vi + L.normal + n > kDataQwords))
                return finish();
            sendState();

            bool queued = false;
            if (gpuTransform && (tag[1] & (1u << 14)) != 0u)
            {
                const uint32_t prim = (tag[1] >> 15) & 0x7FFu;
                if (batchStrips != 0u && prim != batchPrim)
                    flushGpu();
                // Raw vertices for the GPU's transform and clipping: copies and
                // integer work only (float maths is slow under emulation, and
                // the GPU clips in homogeneous space like the VU1 program).
                GSXfVertex *raw = s_batch + batchVerts;
                bool nearOk = true;
                for (uint32_t v = 0; v < n && nearOk; ++v)
                {
                    GSXfVertex &o = raw[v];
                    std::memcpy(&o.x, data + ((vi + L.pos + v) & (kDataQwords - 1u)) * 16u, 12);
                    uint32_t bone = 0;
                    if (L.skinned)
                    {
                        uint32_t index[4];
                        loadI(data, vi + L.boneIndex + v, index);
                        bone = std::min<uint32_t>(index[0] & 0xFFFFu, 2u);
                    }
                    o.bone4 = static_cast<float>(bone * 4u);
                    if (L.lit || L.envMap)
                        std::memcpy(&o.nx, data + ((vi + L.normal + v) & (kDataQwords - 1u)) * 16u, 12);
                    else
                        o.nx = o.ny = o.nz = 0.0f;
                    uint32_t rgba[4];
                    loadI(data, vi + L.rgba + v, rgba);
                    // The low byte, as a PACKED RGBAQ write keeps it.
                    o.color = (rgba[2] & 0xFFu) | ((rgba[1] & 0xFFu) << 8) | ((rgba[0] & 0xFFu) << 16) | ((rgba[3] & 0xFFu) << 24);
                    if (L.envMap)
                    {
                        o.s = o.t = 0.0f;
                        o.q = 1.0f;
                    }
                    else
                    {
                        std::memcpy(&o.s, data + ((vi + L.st + v) & (kDataQwords - 1u)) * 16u, 12);
                        if (o.q == 0.0f)
                            o.q = 1.0f; // as the GS treats Q = 0
                    }
                }
                if (nearOk)
                {
                    s_counts[batchStrips] = static_cast<uint8_t>(n);
                    Pending &pd = s_pending[batchStrips];
                    std::memcpy(pd.tag, tag, 16);
                    pd.n = n;
                    pd.vi = vi;
                    ++batchStrips;
                    batchVerts += n;
                    batchPrim = prim;
                    queued = true;
                }
                else
                    TS_NATIVE_STAT(++g_nv2aTextureStats.nearFallbacks);
            }
            if (!queued)
            {
                flushGpu(); // keep the order of the strips
                cpuStrip(tag, n, vi);
            }
            anything = true;
            if (last)
                break;
            ++header;
            vi += n;
        }
        return finish();
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
        if (memory)
            memory->submitGifPacket(GifPathId::Path1, data + q * 16u, qwords * 16u);
        else
            gs.processGIFPacket(data + q * 16u, qwords * 16u, GifPathId::Path1);
        return true;
    }

    bool runInner(uint32_t pc, uint8_t *vuData, uint32_t dataSize, uint32_t top, PS2Memory *memory, GS &gs);

    bool run(uint32_t pc, uint8_t *vuData, uint32_t dataSize, uint32_t top, PS2Memory *memory, GS &gs)
    {
#if defined(PLATFORM_XBOX)
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
        case 0x3fe0: return kickPacket(vuData, top, memory, gs);
        default: break;
        }
        const Layout *layout = layoutFor(pc & 0x3FFFu);
        if (!layout)
            return false;
        return runDraw(*layout, vuData, top, memory, gs);
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
