// Host test of the native pipeline's raw-vertex decode (project/game/
// vu1_native_xf.h): the decode that writes straight into the renderer's
// transform ring (field by field, nothing read back) must give the same
// record, byte for byte, as the pipeline's first decode, for every layout
// and for the values that matter (Q = 0 and -0, NaN, bone indices beyond
// the last bone, colour bytes above 8 bits, rows wrapping at the end of
// VU1 memory), and it must write every byte of the record. The strip
// decoder (SSE1 whole-row moves, one instantiation per layout) must give
// the same records for every strip length, at every position, including
// strips that reach the end of VU1 memory (it then wraps like the others).
//
//   clang++ -std=c++20 -O2 -I source/PS2Recomp/ps2xRuntime/include \
//       src/xbox/test/vu1_native_xf_test.cpp -o vu1_native_xf_test && ./vu1_native_xf_test
// (also as a 32-bit SSE1 build: the strip decoder takes its SSE path there too)
#include "../../../project/game/vu1_native_xf.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <random>

namespace
{
    using ts_native_xf::kDataQwords;
    using ts_native_xf::Layout;

    using ts_native_xf::kLayouts; // the layouts of the microprogram's draw entries
    const char *const kNames[4] = {"plain", "envmap", "lit", "skinned"};

    int failures = 0;
    void fail(const char *what, const char *layout, uint32_t vi, uint32_t v, uint32_t word)
    {
        if (++failures <= 20)
            std::printf("FAIL %s: layout %s, vi %u, vertex %u, word %u\n", what, layout, vi, v, word);
    }


    // A run of joined strips through the cursor writer (the renderer's
    // ring layout): each strip after the first starts with the last record
    // before it and its own first, then its records; the cursor's cached
    // last is the run's last record.
    void checkJoinedRun(uint32_t kind, const char *name, const uint8_t *data, std::mt19937 &rng)
    {
        static GSXfVertex ring[8 * 66], expect[8 * 66];
        std::memset(ring, 0xAB, sizeof(ring));
        GSXfCursor cursor;
        cursor.direct = true;
        cursor.next = ring;
        cursor.end = ring + 8 * 66;
        uint32_t e = 0, vi = 24u;
        const uint32_t strips = 1u + rng() % 8u;
        for (uint32_t k = 0; k < strips; ++k)
        {
            const uint32_t n = 3u + rng() % 62u;
            if (vi + 144u + n > kDataQwords)
                vi = 24u;
            if (k != 0)
            {
                expect[e] = expect[e - 1];
                ++e;
                ts_native_xf::decodeXfVertexReference(kLayouts[kind], data, vi, 0, expect[e++]);
            }
            for (uint32_t v = 0; v < n; ++v)
                ts_native_xf::decodeXfVertexReference(kLayouts[kind], data, vi, v, expect[e++]);
            ts_native_xf::writeJoinedStrip(kind, cursor, data, vi, n);
            vi += n;
        }
        if (cursor.next != ring + e || std::memcmp(ring, expect, e * sizeof(GSXfVertex)) != 0 ||
            std::memcmp(&cursor.last, &expect[e - 1], sizeof(GSXfVertex)) != 0 || cursor.strips != strips)
            fail("joined run differs", name, vi, e, 0);
    }
    uint32_t firstDifferingWord(const GSXfVertex &a, const GSXfVertex &b)
    {
        const uint8_t *pa = reinterpret_cast<const uint8_t *>(&a), *pb = reinterpret_cast<const uint8_t *>(&b);
        for (uint32_t w = 0; w < sizeof(GSXfVertex) / 4u; ++w)
            if (std::memcmp(pa + w * 4u, pb + w * 4u, 4) != 0)
                return w;
        return UINT32_MAX;
    }

    void check(const Layout &L, const char *name, const uint8_t *data, uint32_t vi, uint32_t v)
    {
        GSXfVertex ref;
        std::memset(&ref, 0xCD, sizeof(ref));
        ts_native_xf::decodeXfVertexReference(L, data, vi, v, ref);
        // Two fills: a byte the decode leaves alone keeps one of them, and
        // the two results then differ.
        GSXfVertex a, b;
        std::memset(&a, 0x00, sizeof(a));
        std::memset(&b, 0xFF, sizeof(b));
        ts_native_xf::decodeXfVertex(L, data, vi, v, &a);
        ts_native_xf::decodeXfVertex(L, data, vi, v, &b);
        if (std::memcmp(&a, &b, sizeof(a)) != 0)
            fail("a byte not written", name, vi, v, firstDifferingWord(a, b));
        else if (std::memcmp(&a, &ref, sizeof(a)) != 0)
            fail("record differs from the reference", name, vi, v, firstDifferingWord(a, ref));
    }

    // A strip of n vertices at vi through the strip decoder, against the
    // reference record by record (two fills again: every byte written).
    void checkStrip(uint32_t kind, const char *name, const uint8_t *data, uint32_t vi, uint32_t n)
    {
        static GSXfVertex a[66], b[66];
        std::memset(a, 0x00, sizeof(a));
        std::memset(b, 0xFF, sizeof(b));
        ts_native_xf::decodeXfStrip(kind, data, vi, n, a + 1);
        ts_native_xf::decodeXfStrip(kind, data, vi, n, b + 1);
        for (uint32_t v = 0; v < n; ++v)
        {
            GSXfVertex ref;
            ts_native_xf::decodeXfVertexReference(kLayouts[kind], data, vi, v, ref);
            if (std::memcmp(&a[1 + v], &b[1 + v], sizeof(ref)) != 0)
                fail("strip: a byte not written", name, vi, v, firstDifferingWord(a[1 + v], b[1 + v]));
            else if (std::memcmp(&a[1 + v], &ref, sizeof(ref)) != 0)
                fail("strip: record differs from the reference", name, vi, v, firstDifferingWord(a[1 + v], ref));
        }
        // Nothing written before or after the strip.
        if (std::memcmp(&a[0], &b[0], sizeof(GSXfVertex)) == 0 || std::memcmp(&a[1 + n], &b[1 + n], sizeof(GSXfVertex)) == 0)
            fail("strip: wrote outside the strip", name, vi, n, 0);
    }
}

int main()
{
    static uint8_t data[kDataQwords * 16u];
    std::mt19937 rng(0x5EEDu);
    const float specials[] = {0.0f, -0.0f, 1.0f, -1.0f, 3.0e38f, -3.0e38f, 1.0e-40f, 0.5f,
                              std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::infinity()};
    uint32_t checked = 0;
    for (int round = 0; round < 64; ++round)
    {
        // Random words, with a run of special values sprinkled in.
        for (auto &b : data)
            b = static_cast<uint8_t>(rng());
        for (int k = 0; k < 2048; ++k)
        {
            const uint32_t at = (rng() % (kDataQwords * 4u)) * 4u;
            const float f = specials[rng() % (sizeof(specials) / sizeof(specials[0]))];
            std::memcpy(data + at, &f, 4);
        }
        for (int k = 0; k < 256; ++k) // bone indices of every kind
        {
            const uint32_t at = (rng() % kDataQwords) * 16u, idx = rng() % 5u + ((rng() & 1u) ? 0x30000u : 0u);
            std::memcpy(data + at, &idx, 4);
        }
        for (uint32_t li = 0; li < 4; ++li)
        {
            const Layout &L = kLayouts[li];
            for (int k = 0; k < 2000; ++k)
            {
                const uint32_t vi = rng() % kDataQwords, v = rng() % 64u; // wraps past the end as the pipeline masks
                check(L, kNames[li], data, vi, v);
                ++checked;
            }
            for (int k = 0; k < 400; ++k)
            {
                const uint32_t n = 1u + rng() % 64u;
                // Anywhere, including strips that reach past the end (wrapped).
                const uint32_t vi = (k & 1) ? rng() % kDataQwords : kDataQwords - 144u - n + rng() % 8u;
                checkStrip(li, kNames[li], data, vi, n);
                checked += n;
            }
            for (int k = 0; k < 50; ++k)
                checkJoinedRun(li, kNames[li], data, rng);
        }
    }
    if (failures)
    {
        std::printf("%d of %u records differ\n", failures, checked);
        return 1;
    }
    std::printf("ok: %u records identical in all four layouts\n", checked);
    return 0;
}
