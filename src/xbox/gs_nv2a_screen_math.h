// The NV2A renderer's screen-vertex arithmetic (src/xbox/PUSH-BC-PLAN.md
// section 5.10, C-EMIT): how a GS vertex becomes a GPU vertex, and how a
// run of GS primitives of one PRIM becomes the triangle list the GPU draws.
// One copy of each, shared by the per-primitive path (submitScreenVerts,
// gs_nv2a_screen.inl) and the Tier 0 bulk path (submitPrimitives), and by
// the host test that proves the bulk conversion bit-identical to the
// per-primitive one (src/xbox/test/gs_screen_batch_test.cpp). Header-only,
// no GPU: everything here is plain arithmetic over runtime/gs/gs_types.h.
#pragma once

#include "runtime/gs/gs_types.h"

#include <algorithm>
#include <cstdint>

namespace gs_nv2a_screen
{
    // The GPU vertex of the pass-through program (gs_nv2a_backend.cpp's
    // GpuVertex has this layout; the backend checks that).
    struct Vertex
    {
        float x, y, z, w;
        uint32_t color; // D3DCOLOR: B, G, R, A bytes
        float s, t, r, q;
    };
    static_assert(sizeof(Vertex) == 36, "screen vertex layout");

    // Depth as the GPU's 24-bit depth buffer takes it, from the GS z of the
    // frame's depth format.
    inline float depth24(double z, uint32_t zpsm)
    {
        switch (zpsm)
        {
        case GS_PSM_Z16:
        case GS_PSM_Z16S: return float(std::min(z, 65535.0) * 256.0);
        case GS_PSM_Z24: return float(std::min(z, 16777215.0));
        default: return float(std::min(z / 256.0, 16777215.0));
        }
    }

    inline uint32_t d3dColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
    {
        return uint32_t(b) | (uint32_t(g) << 8) | (uint32_t(r) << 16) | (uint32_t(a) << 24);
    }

    // The frame's mapping of GS coordinates onto the 640x480 screen and the
    // texture's size (texW/texH 1 when untextured), fixed for one draw call.
    struct Mapping
    {
        float ofx = 0.0f, ofy = 0.0f; // XYOFFSET, in pixels
        float sx = 1.0f, sy = 1.0f;   // screen pixels per frame pixel
        uint32_t zpsm = 0;            // the depth buffer's format
        float texW = 1.0f, texH = 1.0f;
        bool fst = false;             // UV (fixed point, in texels) rather than ST
    };

    // One GPU vertex from a GS vertex: position (x, y) of `v`, depth, fog
    // and texture coordinates of `v`, colour from `colorSource` (the
    // primitive's last vertex when flat-shaded).
    inline void emit(Vertex &o, const GSVertex &v, const GSVertex &colorSource, float x, float y, const Mapping &m)
    {
        o.x = (x - m.ofx) * m.sx;
        o.y = (y - m.ofy) * m.sy;
        o.z = depth24(v.z, m.zpsm);
        o.w = 1.0f;
        o.color = d3dColor(colorSource.r, colorSource.g, colorSource.b, colorSource.a);
        if (m.fst)
        {
            o.s = float(v.u) / 16.0f / m.texW;
            o.t = float(v.v) / 16.0f / m.texH;
            o.q = 1.0f;
        }
        else
        {
            o.s = v.s;
            o.t = v.t;
            o.q = v.q != 0.0f ? v.q : 1.0f;
        }
        o.r = 0.0f;
    }

    // A sprite's four corners as the per-primitive path lays them out: the
    // first vertex's attributes, the second's x/y/u/v/s/t on the far
    // corners, and the second's z and q on all four. Triangles 0 1 2 and
    // 0 2 3, colour (and fog) from the second vertex.
    inline void spriteCorners(const GSVertex &a, const GSVertex &b, GSVertex corners[4])
    {
        corners[0] = corners[1] = corners[2] = corners[3] = a;
        corners[1].x = b.x; corners[1].u = b.u; corners[1].s = b.s;
        corners[2].x = b.x; corners[2].y = b.y; corners[2].u = b.u; corners[2].v = b.v; corners[2].s = b.s; corners[2].t = b.t;
        corners[3].y = b.y; corners[3].v = b.v; corners[3].t = b.t;
        for (int i = 0; i < 4; ++i)
        {
            corners[i].z = b.z;
            corners[i].q = b.q;
        }
    }
    constexpr int kSpriteOrder[6] = {0, 1, 2, 0, 2, 3};

    // Sprites as QUADS (TS_NV2A_SPRITE_QUADS, gs_nv2a_screen.inl; probe T9):
    // each sprite's four corners in order 0 1 2 3, colour (and fog) from its
    // second vertex, as the triangle pair 0 1 2 / 0 2 3 has them; `out`
    // takes (n / 2) * 4 entries.
    template <class NoteVertex>
    inline uint32_t convertSpritesQuads(const GSVertex *v, uint32_t n, const Mapping &m, Vertex *out, NoteVertex &&noteVertex)
    {
        uint32_t written = 0;
        for (uint32_t i = 0; i + 1u < n; i += 2u)
        {
            const GSVertex &a = v[i], &b = v[i + 1u];
            GSVertex corners[4];
            spriteCorners(a, b, corners);
            for (int k = 0; k < 4; ++k)
            {
                emit(out[written++], corners[k], b, corners[k].x, corners[k].y, m);
                noteVertex(corners[k]);
            }
        }
        return written;
    }

    // The triangles a run of n GS vertices of one PRIM kicks: how many GPU
    // vertices (three a triangle, six a sprite) the bulk conversion writes.
    inline uint32_t gpuVertexCount(uint32_t primType, uint32_t n)
    {
        switch (primType)
        {
        case GS_PRIM_TRIANGLE: return (n / 3u) * 3u;
        case GS_PRIM_TRISTRIP:
        case GS_PRIM_TRIFAN: return n >= 3u ? 3u * (n - 2u) : 0u;
        case GS_PRIM_SPRITE: return (n / 2u) * 6u;
        default: return 0u; // points and lines: not drawn on the GPU
        }
    }

    // The Tier 0 bulk conversion: the run's vertices of one PRIM, as the
    // GS front end would have kicked them one primitive at a time (a strip
    // kicks (i-2, i-1, i), a fan (0, i-1, i), a list every three, sprites
    // every two), into `out` (gpuVertexCount(primType, n) entries: the
    // caller reserved them). Flat shading takes each triangle's last
    // vertex's colour (the GS rule); the sprite path takes the second
    // vertex's. `noteVertex(v)` is called once for every GS vertex that
    // reaches the GPU (the per-primitive path's statistics: rows drawn).
    template <class NoteVertex>
    inline uint32_t convertRun(uint32_t primType, bool iip, const GSVertex *v, uint32_t n, const Mapping &m, Vertex *out,
                               NoteVertex &&noteVertex)
    {
        uint32_t written = 0;
        switch (primType)
        {
        case GS_PRIM_TRIANGLE:
            for (uint32_t i = 0; i + 2u < n; i += 3u)
            {
                const GSVertex &c = v[i + 2u];
                for (uint32_t k = 0; k < 3u; ++k)
                {
                    const GSVertex &p = v[i + k];
                    emit(out[written++], p, iip ? p : c, p.x, p.y, m);
                    noteVertex(p);
                }
            }
            break;
        case GS_PRIM_TRISTRIP:
        case GS_PRIM_TRIFAN:
        {
            if (n < 3u)
                break;
            // Each vertex converted once, kept in a window of three (a
            // strip: the two before; a fan: the hub and the one before); a
            // flat triangle then takes its last vertex's colour.
            const bool fan = primType == GS_PRIM_TRIFAN;
            Vertex w[3];
            emit(w[0], v[0], v[0], v[0].x, v[0].y, m);
            emit(w[1], v[1], v[1], v[1].x, v[1].y, m);
            noteVertex(v[0]);
            noteVertex(v[1]);
            for (uint32_t i = 2; i < n; ++i)
            {
                emit(w[2], v[i], v[i], v[i].x, v[i].y, m);
                noteVertex(v[i]);
                out[written] = w[0];
                out[written + 1u] = w[1];
                out[written + 2u] = w[2];
                if (!iip)
                    out[written].color = out[written + 1u].color = w[2].color;
                written += 3u;
                if (!fan)
                    w[0] = w[1];
                w[1] = w[2];
            }
            break;
        }
        case GS_PRIM_SPRITE:
            for (uint32_t i = 0; i + 1u < n; i += 2u)
            {
                const GSVertex &a = v[i], &b = v[i + 1u];
                GSVertex corners[4];
                spriteCorners(a, b, corners);
                for (int k = 0; k < 6; ++k)
                {
                    const GSVertex &c = corners[kSpriteOrder[k]];
                    emit(out[written++], c, b, c.x, c.y, m);
                    noteVertex(c);
                }
            }
            break;
        default:
            break;
        }
        return written;
    }
}
