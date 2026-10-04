// The native VU1 pipeline's vertex layouts (project/game/vu1_native_ts.cpp)
// and the decode of a raw vertex for the renderer's transform programs
// (GSXfVertex). Here rather than in the pipeline so a host test can take
// the decoders alone (src/xbox/test/vu1_native_xf_test.cpp).
#pragma once

#include "runtime/gs/gs_backend.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <cstring>

#if defined(__SSE__) || defined(_M_X64) || (defined(_M_IX86_FP) && _M_IX86_FP >= 1)
#define TS_NATIVE_XF_SSE 1
#include <xmmintrin.h>
#else
#define TS_NATIVE_XF_SSE 0
#endif

namespace ts_native_xf
{
    constexpr uint32_t kDataQwords = 1024u;

    // Where a draw batch keeps its arrays (qword offsets from the strip's
    // vertex base) and what the entry does with them.
    struct Layout
    {
        uint32_t vertexBase, pos, rgba, st, normal, boneIndex;
        bool lit, skinned, envMap;
    };

    // The four layouts of the microprogram's draw entries, by kind: the
    // strip decoder is compiled once per kind, with the offsets as
    // constants (one base register and the vertex index address every
    // array; a layout read at run time kept five pointers, which the i386
    // spilled and re-masked for every vertex).
    enum Kind : uint32_t
    {
        Plain = 0,  // 0x0000
        EnvMap = 1, // 0x0d20: texture coordinates from the rotated normal (sphere map)
        Lit = 2,    // 0x1ae0 and 0x3520 (clips the near plane only; the same pipeline)
        Skinned = 3 // 0x2800
    };
    inline constexpr Layout kLayouts[4] = {
        {24, 0, 64, 128, 0, 0, false, false, false}, // Plain
        {24, 0, 64, 0, 128, 0, false, false, true},  // EnvMap
        {24, 0, 48, 96, 144, 0, true, false, false}, // Lit
        {32, 0, 36, 72, 144, 108, true, true, false} // Skinned
    };

    inline const uint8_t *row(const uint8_t *data, uint32_t q) { return data + (q & (kDataQwords - 1u)) * 16u; }

    // The record is written field by field in memory order (positions,
    // normal, colour, texture coordinates, bone), nothing is read back:
    // `o` may be write-combined memory (the renderer's transform ring).
    static_assert(offsetof(GSXfVertex, x) == 0 && offsetof(GSXfVertex, nx) == 12 && offsetof(GSXfVertex, color) == 24 &&
                      offsetof(GSXfVertex, s) == 28 && offsetof(GSXfVertex, q) == 36 && offsetof(GSXfVertex, bone4) == 40,
                  "GSXfVertex field order (the decode writes it front to back)");

    // Vertex `v` of the strip whose arrays start at qword `vi`, from the VU1
    // data memory `data`: copies and integer work only (float maths is slow
    // under emulation, and the GPU clips in homogeneous space like the VU1
    // program).
    inline void decodeXfVertex(const Layout &L, const uint8_t *data, uint32_t vi, uint32_t v, GSXfVertex *o)
    {
        std::memcpy(&o->x, row(data, vi + L.pos + v), 12);
        if (L.lit || L.envMap)
            std::memcpy(&o->nx, row(data, vi + L.normal + v), 12);
        else
            o->nx = o->ny = o->nz = 0.0f;
        uint32_t rgba[4];
        std::memcpy(rgba, row(data, vi + L.rgba + v), 16);
        // The low byte, as a PACKED RGBAQ write keeps it.
        o->color = (rgba[2] & 0xFFu) | ((rgba[1] & 0xFFu) << 8) | ((rgba[0] & 0xFFu) << 16) | ((rgba[3] & 0xFFu) << 24);
        if (L.envMap)
        {
            o->s = o->t = 0.0f;
            o->q = 1.0f;
        }
        else
        {
            const uint8_t *st = row(data, vi + L.st + v);
            std::memcpy(&o->s, st, 8);
            float q;
            std::memcpy(&q, st + 8, 4);
            o->q = q == 0.0f ? 1.0f : q; // as the GS treats Q = 0
        }
        uint32_t bone = 0;
        if (L.skinned)
        {
            uint32_t index[4];
            std::memcpy(index, row(data, vi + L.boneIndex + v), 16);
            bone = std::min<uint32_t>(index[0] & 0xFFFFu, 2u);
        }
        o->bone4 = static_cast<float>(bone * 4u);
    }

    // The strip's n vertices, from qword `vi` on, into n consecutive
    // records: the same bytes as decodeXfVertex for each, stores only (the
    // records may be write-combined memory). The whole-row loads and stores
    // of the SSE path write past a field into the field that is written
    // next (a position's fourth lane lands on nx, the normal's on the
    // colour, the texture row's fourth lane is the bone slot), so the
    // record is still written front to back and ends up as the reference
    // has it.
    //
    // No array may cross the end of VU1 memory: the pipeline's strip
    // header check (vu1_native_ts.cpp) refuses such a strip, and a caller
    // without that guarantee falls back to the wrapping decode.
    template <uint32_t kKind>
    inline void decodeXfStripKind(const uint8_t *data, uint32_t vi, uint32_t n, GSXfVertex *out)
    {
        constexpr Layout L = kLayouts[kKind];
        constexpr uint32_t kLast = std::max({L.pos, L.rgba, L.st, L.normal, L.boneIndex});
        if (vi + kLast + n > kDataQwords)
        {
            for (uint32_t i = 0; i < n; ++i)
                decodeXfVertex(L, data, vi, i, out + i);
            return;
        }
        const uint8_t *base = data + vi * 16u;
#if TS_NATIVE_XF_SSE
        alignas(16) static const float kEnvSTQ[4] = {0.0f, 0.0f, 1.0f, 0.0f};
        static const float kBone4[3] = {0.0f, 4.0f, 8.0f};
        const __m128 zero = _mm_setzero_ps();
        for (uint32_t i = 0; i < n; ++i, ++out)
        {
            const uint8_t *v = base + i * 16u;
            _mm_storeu_ps(&out->x, _mm_loadu_ps(reinterpret_cast<const float *>(v + L.pos * 16u)));
            if constexpr (L.lit || L.envMap)
                _mm_storeu_ps(&out->nx, _mm_loadu_ps(reinterpret_cast<const float *>(v + L.normal * 16u)));
            else
                _mm_storeu_ps(&out->nx, zero);
            const uint8_t *c = v + L.rgba * 16u;
            // The low byte of each lane, as a PACKED RGBAQ write keeps it.
            out->color = uint32_t(c[8]) | (uint32_t(c[4]) << 8) | (uint32_t(c[0]) << 16) | (uint32_t(c[12]) << 24);
            if constexpr (L.envMap)
            {
                _mm_storeu_ps(&out->s, _mm_load_ps(kEnvSTQ));
            }
            else
            {
                const uint8_t *st = v + L.st * 16u;
                _mm_storeu_ps(&out->s, _mm_loadu_ps(reinterpret_cast<const float *>(st))); // s, t, q, (the bone slot)
                // q == 0 (either sign) becomes 1.0, as the GS treats Q = 0:
                // on the bits (a float compare, the compiler turned into a
                // register-to-stack shuffle).
                uint32_t q;
                std::memcpy(&q, st + 8, 4);
                q = (q & 0x7FFFFFFFu) == 0u ? 0x3F800000u : q;
                std::memcpy(&out->q, &q, 4);
            }
            if constexpr (L.skinned)
            {
                uint32_t index;
                std::memcpy(&index, v + L.boneIndex * 16u, 4);
                out->bone4 = kBone4[std::min<uint32_t>(index & 0xFFFFu, 2u)];
            }
            else if constexpr (!L.envMap)
                out->bone4 = 0.0f;
        }
#else
        for (uint32_t i = 0; i < n; ++i)
            decodeXfVertex(L, data, vi, i, out + i);
        (void)base;
#endif
    }

    inline void decodeXfStrip(uint32_t kind, const uint8_t *data, uint32_t vi, uint32_t n, GSXfVertex *out)
    {
        switch (kind)
        {
        case Plain: decodeXfStripKind<Plain>(data, vi, n, out); break;
        case EnvMap: decodeXfStripKind<EnvMap>(data, vi, n, out); break;
        case Lit: decodeXfStripKind<Lit>(data, vi, n, out); break;
        default: decodeXfStripKind<Skinned>(data, vi, n, out); break;
        }
    }

    // A record copied to the ring (write-combined: stores only, whole
    // rows where the record allows).
    inline void copyXfVertex(GSXfVertex *o, const GSXfVertex &v)
    {
#if TS_NATIVE_XF_SSE
        _mm_storeu_ps(&o->x, _mm_loadu_ps(&v.x));
        _mm_storeu_ps(&o->nx, _mm_loadu_ps(&v.nx)); // (nx, ny, nz and the colour's bits)
        _mm_storeu_ps(&o->s, _mm_loadu_ps(&v.s));
#else
        *o = v;
#endif
    }

    // A strip of n vertices (n >= 2) at the cursor of a direct run
    // (GSXfCursor; the caller made room for n + 2 records): joined to the
    // strip before it by two repeated vertices when cursor.join is set
    // (that strip's last, this one's first: degenerate triangles draw
    // nothing), front to back, the last record also into cursor.last.
    template <uint32_t kKind>
    __attribute__((always_inline)) inline void writeJoinedStripKind(GSXfCursor &cursor, const uint8_t *data, uint32_t vi, uint32_t n)
    {
        GSXfVertex *out = cursor.next;
        if (cursor.join)
        {
            copyXfVertex(out, cursor.last);
            decodeXfStripKind<kKind>(data, vi, 1u, out + 1);
            out += 2;
        }
        decodeXfStripKind<kKind>(data, vi, n - 1u, out);
        decodeXfStripKind<kKind>(data, vi + n - 1u, 1u, &cursor.last);
        copyXfVertex(out + n - 1u, cursor.last);
        cursor.next = out + n;
        cursor.join = true;
        ++cursor.strips;
        cursor.vertices += n;
    }

    inline void writeJoinedStrip(uint32_t kind, GSXfCursor &cursor, const uint8_t *data, uint32_t vi, uint32_t n)
    {
        switch (kind)
        {
        case Plain: writeJoinedStripKind<Plain>(cursor, data, vi, n); break;
        case EnvMap: writeJoinedStripKind<EnvMap>(cursor, data, vi, n); break;
        case Lit: writeJoinedStripKind<Lit>(cursor, data, vi, n); break;
        default: writeJoinedStripKind<Skinned>(cursor, data, vi, n); break;
        }
    }

    // The decode as the pipeline first had it, into a cached array (it
    // reads the record back): the reference of TS_NATIVE_RING_SELFCHECK
    // and of the host test. Not for write-combined memory.
    inline void decodeXfVertexReference(const Layout &L, const uint8_t *data, uint32_t vi, uint32_t v, GSXfVertex &o)
    {
        std::memcpy(&o.x, data + ((vi + L.pos + v) & (kDataQwords - 1u)) * 16u, 12);
        uint32_t bone = 0;
        if (L.skinned)
        {
            uint32_t index[4];
            std::memcpy(index, data + ((vi + L.boneIndex + v) & (kDataQwords - 1u)) * 16u, 16);
            bone = std::min<uint32_t>(index[0] & 0xFFFFu, 2u);
        }
        o.bone4 = static_cast<float>(bone * 4u);
        if (L.lit || L.envMap)
            std::memcpy(&o.nx, data + ((vi + L.normal + v) & (kDataQwords - 1u)) * 16u, 12);
        else
            o.nx = o.ny = o.nz = 0.0f;
        uint32_t rgba[4];
        std::memcpy(rgba, data + ((vi + L.rgba + v) & (kDataQwords - 1u)) * 16u, 16);
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
}
