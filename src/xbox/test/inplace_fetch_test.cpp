// Host test of M8's fetch emulation (project/game/ts_inplace.cpp,
// src/xbox/PUSH-BC-PLAN.md section 5.9 "host fetch test"): a strip whose
// arrays are the game's UNPACK sources, fetched the way the NV2A's in-place
// programs read them (tsInplaceFetch: F32 x3 positions, normals and s/t/q,
// UB_OGL colours, an S16 bone index), must give, byte for byte, the record
// the ring's decode makes from the same arrays UNPACKed into VU1 memory
// (ts_native_xf::decodeXfVertexReference). Random arrays for every layout,
// V3-32 and V4-32 sources, V4-8 colours, S-16 and V4-16 bone indices 0..2,
// stale lanes in the VU image where a V3 UNPACK leaves them.
//
//   clang++ -std=c++20 -O2 -I<runtime>/include -I<game> src/xbox/test/inplace_fetch_test.cpp
// (host_tests.mk: HOST_TEST_FLAGS_inplace_fetch_test; PLATFORM_XBOX off, so
// ts_inplace.cpp's console parts drop out; its one game hook is a stub here.)
#include "ts_inplace.cpp"

#include <cstdio>
#include <cstring>
#include <vector>

// ts_game_hooks.h's registration (ts_game_hooks.cpp is the console's).
bool tsGameHookOn(TsGameFn, TsHookPhase, TsGameHookFn, void *) { return true; }

namespace
{
    int failures = 0;
    void check(bool ok, const char *what, uint32_t a = 0, uint32_t b = 0, uint32_t c = 0)
    {
        if (!ok && ++failures <= 20)
            std::printf("FAIL %s (%u %u %u)\n", what, a, b, c);
    }

    struct Rng
    {
        uint32_t s = 0x2468Bu;
        uint32_t next()
        {
            s ^= s << 13;
            s ^= s >> 17;
            s ^= s << 5;
            return s;
        }
        float value() { return float(int32_t(next() & 0xFFFFFu) - 0x80000) / 4096.0f; }
    };

    constexpr uint32_t kRows = 1024u;

    // An UNPACK of n vectors of `format` from src into VU rows from row on,
    // as the decoder's unpackFast writes them (the lanes a V3 or a V2 does
    // not write keep what the image held).
    void unpack(uint8_t *vu, uint32_t row, uint8_t format, const uint8_t *src, uint32_t n)
    {
        for (uint32_t i = 0; i < n; ++i)
        {
            uint8_t *d = vu + ((row + i) & (kRows - 1u)) * 16u;
            uint32_t lanes[4];
            std::memcpy(lanes, d, 16);
            switch (format)
            {
            case 0x8: std::memcpy(lanes, src + i * 12u, 12); break; // V3-32
            case 0xC: std::memcpy(lanes, src + i * 16u, 16); break; // V4-32
            case 0xE:                                              // V4-8 (signed: the low byte is kept either way)
                for (int k = 0; k < 4; ++k)
                    lanes[k] = uint32_t(int32_t(int8_t(src[i * 4u + uint32_t(k)])));
                break;
            case 0x1: // S-16
            {
                int16_t v;
                std::memcpy(&v, src + i * 2u, 2);
                lanes[0] = lanes[1] = lanes[2] = lanes[3] = uint32_t(int32_t(v));
                break;
            }
            case 0xD: // V4-16
                for (int k = 0; k < 4; ++k)
                {
                    int16_t v;
                    std::memcpy(&v, src + i * 8u + uint32_t(k) * 2u, 2);
                    lanes[k] = uint32_t(int32_t(v));
                }
                break;
            default: break;
            }
            std::memcpy(d, lanes, 16);
        }
    }

    void floats(Rng &rng, std::vector<uint8_t> &out, uint32_t n, uint32_t stride, bool nonzeroThird)
    {
        out.assign(size_t(n) * stride, 0);
        for (uint32_t i = 0; i < n; ++i)
            for (uint32_t k = 0; k < stride / 4u; ++k)
            {
                float f = rng.value();
                if (k == 2u && nonzeroThird && f == 0.0f)
                    f = 0.5f; // q: the prepare scan refuses +-0
                std::memcpy(out.data() + i * stride + k * 4u, &f, 4);
            }
    }
}

int main()
{
    Rng rng;
    std::vector<uint8_t> vu(kRows * 16u);
    uint32_t vertices = 0;
    for (int iteration = 0; iteration < 2000; ++iteration)
    {
        const uint32_t kind = rng.next() % 4u;
        const ts_native_xf::Layout &L = ts_native_xf::kLayouts[kind];
        const uint32_t n = 3u + rng.next() % 62u;
        // Stale VU1 memory first (what V3 UNPACKs leave).
        for (uint8_t &b : vu)
            b = uint8_t(rng.next());
        const uint32_t vi = L.vertexBase + rng.next() % (kRows - 200u - n);
        const uint32_t posStride = (rng.next() & 1u) ? 16u : 12u, nrmStride = (rng.next() & 1u) ? 16u : 12u,
                       stStride = (rng.next() & 1u) ? 16u : 12u;
        std::vector<uint8_t> pos, nrm, st, col(n * 4u), bone;
        floats(rng, pos, n, posStride, false);
        floats(rng, nrm, n, nrmStride, false);
        floats(rng, st, n, stStride, true);
        for (uint8_t &b : col)
            b = uint8_t(rng.next());
        const bool boneV4 = (rng.next() & 1u) != 0u;
        const uint32_t boneStride = boneV4 ? 8u : 2u;
        bone.assign(size_t(n) * boneStride, 0);
        for (uint32_t i = 0; i < n; ++i)
        {
            const uint16_t index = uint16_t(rng.next() % 3u);
            std::memcpy(bone.data() + i * boneStride, &index, 2);
            if (boneV4)
                for (uint32_t k = 1; k < 4u; ++k)
                {
                    const uint16_t junk = uint16_t(rng.next());
                    std::memcpy(bone.data() + i * boneStride + k * 2u, &junk, 2);
                }
        }
        unpack(vu.data(), vi + L.pos, posStride == 16u ? 0xC : 0x8, pos.data(), n);
        if (L.lit || L.envMap)
            unpack(vu.data(), vi + L.normal, nrmStride == 16u ? 0xC : 0x8, nrm.data(), n);
        unpack(vu.data(), vi + L.rgba, 0xE, col.data(), n);
        if (!L.envMap)
            unpack(vu.data(), vi + L.st, stStride == 16u ? 0xC : 0x8, st.data(), n);
        if (L.skinned)
            unpack(vu.data(), vi + L.boneIndex, boneV4 ? 0xD : 0x1, bone.data(), n);

        // The strip as the prepare builds it (the host has no physical
        // addresses: the arrays are filled in directly).
        GSXfInPlaceStrip strip;
        strip.count = n;
        strip.position = {pos.data(), 0u, GSXfInPlaceFormat::F32, 3u, uint8_t(posStride)};
        if (L.lit || L.envMap)
            strip.normal = {nrm.data(), 0u, GSXfInPlaceFormat::F32, 3u, uint8_t(nrmStride)};
        strip.colour = {col.data(), 0u, GSXfInPlaceFormat::UbRgba, 4u, 4u};
        if (!L.envMap)
            strip.texture = {st.data(), 0u, GSXfInPlaceFormat::F32, 3u, uint8_t(stStride)};
        if (L.skinned)
            strip.bone = {bone.data(), 0u, GSXfInPlaceFormat::S16, 1u, uint8_t(boneStride)};

        for (uint32_t v = 0; v < n; ++v)
        {
            GSXfVertex ref, fetched;
            ts_native_xf::decodeXfVertexReference(L, vu.data(), vi, v, ref);
            tsInplaceFetch(strip, kind, v, fetched);
            check(std::memcmp(&ref, &fetched, sizeof(GSXfVertex)) == 0, "fetched record differs", kind, n, v);
            ++vertices;
        }
    }
    std::printf("inplace_fetch_test: %u vertices, %d failures\n", vertices, failures);
    return failures == 0 ? 0 : 1;
}
