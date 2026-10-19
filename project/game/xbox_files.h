#pragma once

// The two Xbox files Prepare Xbox Files (disc_setup.h) makes from the
// player's own disc, ported from the Xbox build's tools on release-dual:
//
//   patchXboxGlyphs      src/xbox/tools/xboxglyphs.py patch: the Xbox button
//                        glyphs written over the eight button textures of
//                        /PAK/MISC.PAK inside ps2disc.iso, in place.
//   buildXboxTexturePack src/xbox/tools/xtpbuild.py with its default flags:
//                        textures.xtp from the game's (unpatched) MISC.PAK.
//
// PC build only: the Xbox build never compiles this.
#if !defined(PLATFORM_XBOX)

#include <atomic>
#include <cstdint>
#include <filesystem>
#include <functional>
#include <string>
#include <vector>

namespace tsxbox
{
    // Writes the glyphs into the 2048-byte-sector disc image `iso`. On
    // success `replaced` is the number of textures that changed (8 for a
    // fresh copy of the disc).
    bool patchXboxGlyphs(const std::filesystem::path &iso, int &replaced, std::string &error);

    struct PackStats
    {
        size_t entries = 0;
        uint64_t bytes = 0;
        size_t perFormat[4] = {}; // DXT1, DXT5, A8R8G8B8, A1R5G5B5
    };

    // Builds textures.xtp at `output` from MISC.PAK's bytes. `progress` gets
    // 0..100; `cancel` (may be null) stops the build, which then fails.
    bool buildXboxTexturePack(const std::vector<uint8_t> &miscPak, const std::filesystem::path &output,
                              const std::function<void(int)> &progress, const std::atomic<bool> *cancel,
                              PackStats &stats, std::string &error);
}

#endif
