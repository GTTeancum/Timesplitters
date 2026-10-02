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
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/ps2_gif_arbiter.h"

#include <algorithm>
#include <cmath>
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
        bool lit, skinned;
    };

    const Layout *layoutFor(uint32_t pc)
    {
        static const Layout plain{24, 0, 64, 128, 0, 0, false, false};
        static const Layout lit{24, 0, 48, 96, 144, 0, true, false};
        static const Layout skinned{32, 0, 36, 72, 144, 108, true, true};
        switch (pc)
        {
        case 0x0000: return &plain;
        case 0x1ae0: return &lit;
        case 0x3520: return &lit; // clips the near plane only; the same pipeline
        case 0x2800: return &skinned;
        default: return nullptr; // 0x0d20 (environment-mapped) and the rest: exact translator
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
        std::memcpy(packet.buf, data + (top + 216u) * 16u, stateQwords * 16u);
        packet.used = stateQwords * 16u;
        packet.lastTag = 0; // (an EOP on the state block only matters if nothing follows)

        Mat mvp[3], lightDir[3];
        mvp[0] = loadM(data, 8);
        lightDir[0] = loadM(data, 110);
        if (L.skinned)
        {
            mvp[1] = loadM(data, 12);
            mvp[2] = loadM(data, 16);
            lightDir[1] = loadM(data, 114);
            lightDir[2] = loadM(data, 118);
        }
        const Mat lightColour = loadM(data, 106);
        const V4 scale = loadV(data, 20), offset = loadV(data, 21);

        ClipVertex verts[64];
        uint32_t header = top, vi = top + L.vertexBase;
        for (uint32_t strip = 0; strip < 64u; ++strip)
        {
            uint32_t tag[4];
            loadI(data, header, tag);
            const uint32_t n = tag[0] & 0x7FFFu;
            const bool last = (tag[0] & 0x8000u) != 0u;
            if (n == 0u || n > 64u || ((tag[1] >> 28) & 0xFu) != 3u)
                return packet.used == stateQwords * 16u ? false : (packet.submit(), true);
            if (vi + L.st + n > kDataQwords || vi + L.rgba + n > kDataQwords || (L.lit && vi + L.normal + n > kDataQwords))
                return packet.used == stateQwords * 16u ? false : (packet.submit(), true);

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
            if (last)
                break;
            ++header;
            vi += n;
        }
        packet.submit();
        return true;
    }

    bool run(uint32_t pc, uint8_t *vuData, uint32_t dataSize, uint32_t top, PS2Memory *memory, GS &gs)
    {
        if (dataSize < kDataQwords * 16u)
            return false;
        const Layout *layout = layoutFor(pc & 0x3FFFu);
        if (!layout)
            return false;
        return runDraw(*layout, vuData, top & (kDataQwords - 1u), memory, gs);
    }

    struct Register
    {
        Register() { registerVu1NativeProgram({kProgramHash, &run, "ts_da1f094c native"}); }
    } registration;
}
