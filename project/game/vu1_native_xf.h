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
