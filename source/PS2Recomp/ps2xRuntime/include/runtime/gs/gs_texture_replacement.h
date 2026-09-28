#pragma once

#include <cstdint>
#include <vector>

// Texture dumping and replacement for the GPU renderer.
//
// Every texture the renderer decodes from GS memory is identified by a hash
// of its decoded pixels (so each palette of an indexed texture is its own
// texture). With texture_dump=1 in timesplitters.ini each new one is saved
// as textures/dump/<hash>.png; a PNG of the same name in
// textures/replacements/ (any size, any sub-folder) is drawn instead of it.
// PNG alpha is 0..255 with 255 opaque; the GS scale (128 opaque) is
// converted on the way out and back.
namespace gs_texture_replacement
{
    // False when nothing is dumped and no replacements exist: callers skip
    // hashing entirely.
    bool active();

    uint64_t hash(const uint32_t *texels, uint32_t width, uint32_t height);

    // Queues a PNG of the texture unless this hash was saved before.
    void dump(uint64_t hash, const uint32_t *texels, uint32_t width, uint32_t height);

    // Loads the replacement for this hash, if there is one, as RGBA8 with GS
    // alpha. Returns false when there is none.
    bool load(uint64_t hash, std::vector<uint32_t> &texels, int &width, int &height);
}
