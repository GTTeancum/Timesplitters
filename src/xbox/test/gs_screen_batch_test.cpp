// Host test of the NV2A renderer's Tier 0 bulk conversion (src/xbox/
// gs_nv2a_screen_math.h, C-EMIT; src/xbox/PUSH-BC-PLAN.md section 5.10):
// a run of GS vertices of one PRIM converted in one call (convertRun) must
// give, byte for byte, the GPU vertices the per-primitive path writes when
// the GS front end kicks the same vertices one primitive at a time (the
// vertex queue of GS::vertexKick: a strip kicks (i-2, i-1, i), a fan
// (0, i-1, i), a list every three vertices, sprites every two; flat
// shading takes each primitive's last vertex's colour). Random sprites,
// strips, fans and lists under every depth format, fst and iip, with every
// field of GSVertex randomised (q = 0 included, which the emit maps to 1).
//
//   clang++ -std=c++20 -O2 -DPLATFORM_XBOX=1 -I<runtime>/include -I<xbox> src/xbox/test/gs_screen_batch_test.cpp
#include "../gs_nv2a_screen_math.h"

#include <cstdio>
#include <cstring>
#include <vector>

namespace
{
    using namespace gs_nv2a_screen;

    int failures = 0;
    void check(bool ok, const char *what, uint32_t a = 0, uint32_t b = 0, uint32_t c = 0)
    {
        if (!ok && ++failures <= 20)
            std::printf("FAIL %s (%u %u %u)\n", what, a, b, c);
    }

    struct Rng
    {
        uint32_t s = 0x12345u;
        uint32_t next()
        {
            s ^= s << 13;
            s ^= s >> 17;
            s ^= s << 5;
            return s;
        }
        float frac() { return float(next() & 0xFFFFFFu) / float(0x1000000u); }
    };

    GSVertex randomVertex(Rng &rng)
    {
        GSVertex v;
        v.x = float(rng.next() & 0xFFFFu) / 16.0f;
        v.y = float(rng.next() & 0xFFFFu) / 16.0f;
        v.z = double(rng.next());
        v.r = uint8_t(rng.next());
        v.g = uint8_t(rng.next());
        v.b = uint8_t(rng.next());
        v.a = uint8_t(rng.next());
        v.q = (rng.next() & 7u) == 0u ? 0.0f : rng.frac() * 4.0f;
        v.s = rng.frac() * 2.0f - 0.5f;
        v.t = rng.frac() * 2.0f - 0.5f;
        v.u = uint16_t(rng.next() & 0x3FFFu);
        v.v = uint16_t(rng.next() & 0x3FFFu);
        v.fog = uint8_t(rng.next());
        return v;
    }

    // The per-primitive path: the GS front end's vertex queue, each
    // primitive converted as submitScreenVerts converts one (count == 3:
    // colour from the third vertex unless iip; a sprite: the corners).
    void perPrimitive(uint32_t type, bool iip, const GSVertex *v, uint32_t n, const Mapping &m, std::vector<Vertex> &out)
    {
        GSVertex queue[3];
        int count = 0;
        const int needed = type == GS_PRIM_SPRITE ? 2 : 3;
        for (uint32_t i = 0; i < n; ++i)
        {
            queue[count % 3] = v[i];
            ++count;
            if (count < needed)
                continue;
            if (type == GS_PRIM_SPRITE)
            {
                GSVertex corners[4];
                spriteCorners(queue[0], queue[1], corners);
                for (int k = 0; k < 6; ++k)
                {
                    Vertex o;
                    const GSVertex &c = corners[kSpriteOrder[k]];
                    emit(o, c, queue[1], c.x, c.y, m);
                    out.push_back(o);
                }
                count = 0;
            }
            else
            {
                for (int k = 0; k < 3; ++k)
                {
                    Vertex o;
                    emit(o, queue[k], iip ? queue[k] : queue[2], queue[k].x, queue[k].y, m);
                    out.push_back(o);
                }
                switch (type)
                {
                case GS_PRIM_TRIANGLE: count = 0; break;
                case GS_PRIM_TRISTRIP:
                    queue[0] = queue[1];
                    queue[1] = queue[2];
                    count = 2;
                    break;
                default: // fan
                    queue[1] = queue[2];
                    count = 2;
                    break;
                }
            }
        }
    }

    bool same(const Vertex &a, const Vertex &b) { return std::memcmp(&a, &b, sizeof(Vertex)) == 0; }
}

int main()
{
    Rng rng;
    static const uint32_t kTypes[] = {GS_PRIM_TRIANGLE, GS_PRIM_TRISTRIP, GS_PRIM_TRIFAN, GS_PRIM_SPRITE};
    static const uint32_t kZpsm[] = {GS_PSM_Z32, GS_PSM_Z24, GS_PSM_Z16, GS_PSM_Z16S};
    uint32_t runs = 0, primitives = 0;
    for (int iteration = 0; iteration < 4000; ++iteration)
    {
        const uint32_t type = kTypes[rng.next() % 4u];
        Mapping m;
        m.ofx = float(rng.next() & 0x7FFu);
        m.ofy = float(rng.next() & 0x7FFu);
        m.sx = 640.0f / float((6u + rng.next() % 6u) * 64u);
        m.sy = 480.0f / float(200u + rng.next() % 312u);
        m.zpsm = kZpsm[rng.next() % 4u];
        m.fst = (rng.next() & 1u) != 0u;
        m.texW = float(1u << (rng.next() % 10u));
        m.texH = float(1u << (rng.next() % 10u));
        const bool iip = (rng.next() & 1u) != 0u;
        const uint32_t n = rng.next() % 300u; // 0 and 1 included: nothing kicked
        std::vector<GSVertex> v(n);
        for (GSVertex &x : v)
            x = randomVertex(rng);

        std::vector<Vertex> ref;
        perPrimitive(type, iip, v.data(), n, m, ref);
        const uint32_t expect = gpuVertexCount(type, n);
        check(expect == ref.size(), "gpuVertexCount", type, n, uint32_t(ref.size()));

        std::vector<Vertex> bulk(expect + 8u);
        uint32_t noted = 0;
        const uint32_t written = convertRun(type, iip, v.data(), n, m, bulk.data(), [&](const GSVertex &) { ++noted; });
        check(written == expect, "convertRun count", type, n, written);
        for (uint32_t i = 0; i < expect && i < written; ++i)
            check(same(ref[i], bulk[i]), "vertex differs", type, n, i);
        // Every GS vertex that reaches the GPU is noted once (rows drawn).
        const uint32_t expectNoted = type == GS_PRIM_SPRITE ? (n / 2u) * 6u : type == GS_PRIM_TRIANGLE ? (n / 3u) * 3u : (n >= 3u ? n : 0u);
        check(noted == expectNoted, "noteVertex count", type, n, noted);
        // Sprites as QUADS (TS_NV2A_SPRITE_QUADS): corner k of each quad is
        // the triangle pair's vertex of the same corner (the pair writes
        // corners 0 1 2 / 0 2 3).
        if (type == GS_PRIM_SPRITE)
        {
            std::vector<Vertex> quads((n / 2u) * 4u + 4u);
            const uint32_t q = convertSpritesQuads(v.data(), n, m, quads.data(), [](const GSVertex &) {});
            check(q == (n / 2u) * 4u, "quad count", n, q);
            static const int kPairIndexOfCorner[4] = {0, 1, 2, 5};
            for (uint32_t s = 0; s < n / 2u && s * 4u + 3u < q; ++s)
                for (int k = 0; k < 4; ++k)
                    check(same(quads[s * 4u + uint32_t(k)], ref[s * 6u + uint32_t(kPairIndexOfCorner[k])]), "quad corner", n, s,
                          uint32_t(k));
        }
        ++runs;
        primitives += expect / 3u;
    }
    // q = 0 maps to 1 and the fst path divides by the texture size: spot
    // values against the definition.
    {
        Mapping m;
        m.fst = true;
        m.texW = 64.0f;
        m.texH = 32.0f;
        GSVertex v;
        v.u = 16u * 8u; // 8 texels
        v.v = 16u * 4u;
        v.q = 0.0f;
        Vertex o;
        emit(o, v, v, 0.0f, 0.0f, m);
        check(o.s == 8.0f / 64.0f && o.t == 4.0f / 32.0f && o.q == 1.0f, "fst texel mapping");
        m.fst = false;
        emit(o, v, v, 0.0f, 0.0f, m);
        check(o.q == 1.0f && o.s == v.s && o.t == v.t, "st q=0 maps to 1");
        check(depth24(70000.0, GS_PSM_Z16) == 65535.0f * 256.0f, "z16 clamp");
        check(depth24(double(1u << 28), GS_PSM_Z32) == 1048576.0f, "z32 scale");
    }
    std::printf("gs_screen_batch_test: %u runs, %u triangles, %d failures\n", runs, primitives, failures);
    return failures == 0 ? 0 : 1;
}
