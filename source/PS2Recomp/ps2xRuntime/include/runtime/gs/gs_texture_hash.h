#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>

// The content key of a decoded GS texture.
//
// Texture replacements on the PC (gs_texture_replacement.cpp), the Xbox
// texture pack (src/xbox/xbox_texture_pack.cpp) and the offline tool that
// builds that pack all name a texture by this key, so a texture dumped or
// replaced on one finds the same entry on the others. They must agree bit
// for bit: this header is their one copy of it.
namespace gs_texture_hash
{
    // Changes whenever hash() does; a pack built with another version is
    // not used (its keys would never match).
    constexpr uint32_t kVersion = 1;

    // FNV-1a over the texels read as 64-bit words (pairs of texels, the
    // first in the low half), seeded with the size; an odd count's last
    // texel goes in alone. The texels are RGBA8 as GSCpuBackend::
    // DecodeTexture writes them for the whole TW x TH texture (CLUT and
    // TEXA applied, GS alpha scale: 0x80 is opaque).
    inline uint64_t hash(const uint32_t *texels, uint32_t width, uint32_t height)
    {
        uint64_t h = 0xcbf29ce484222325ull ^ (uint64_t(width) << 32 | height);
        const size_t count = size_t(width) * height;
        size_t i = 0;
        for (; i + 1 < count; i += 2)
        {
            uint64_t pair;
            std::memcpy(&pair, texels + i, sizeof(pair));
            h = (h ^ pair) * 0x100000001b3ull;
        }
        if (i < count)
            h = (h ^ texels[i]) * 0x100000001b3ull;
        return h;
    }
}
