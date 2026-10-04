// Host test of the native pipeline's raw-vertex decode (project/game/
// vu1_native_xf.h): the decode that writes straight into the renderer's
// transform ring (field by field, nothing read back) must give the same
// record, byte for byte, as the pipeline's first decode, for every layout
// and for the values that matter (Q = 0 and -0, NaN, bone indices beyond
// the last bone, colour bytes above 8 bits, rows wrapping at the end of
// VU1 memory), and it must write every byte of the record.
//
//   clang++ -std=c++20 -O2 -I source/PS2Recomp/ps2xRuntime/include \
//       src/xbox/test/vu1_native_xf_test.cpp -o vu1_native_xf_test && ./vu1_native_xf_test
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

    // The layouts of project/game/vu1_native_ts.cpp (layoutFor).
    const Layout kLayouts[4] = {
        {24, 0, 64, 128, 0, 0, false, false, false}, // plain
        {24, 0, 64, 0, 128, 0, false, false, true},  // environment map
        {24, 0, 48, 96, 144, 0, true, false, false}, // lit
        {32, 0, 36, 72, 144, 108, true, true, false} // skinned
    };
    const char *const kNames[4] = {"plain", "envmap", "lit", "skinned"};

    int failures = 0;
    void fail(const char *what, const char *layout, uint32_t vi, uint32_t v, uint32_t word)
    {
        if (++failures <= 20)
            std::printf("FAIL %s: layout %s, vi %u, vertex %u, word %u\n", what, layout, vi, v, word);
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
