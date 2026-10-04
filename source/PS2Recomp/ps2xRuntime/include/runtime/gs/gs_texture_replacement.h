#pragma once

#include <cstdint>
#include <vector>

// Texture dumping and replacement for the GPU renderer.
//
// Every texture the renderer decodes from GS memory is identified by a hash
// of its decoded pixels (so each palette of an indexed texture is its own
// texture). With texture_dump=1 in timesplitters.ini each new one is saved
// as textures/dump/2d/<hash>.png when it is drawn flat on screen (menus,
// HUD, fonts: no depth test, screen-space coordinates) or
// textures/dump/3d/<hash>.png when it is drawn in the world; a PNG of the same name in
// textures/replacements/ (any size, any sub-folder) is drawn instead of it.
// PNG alpha is 0..255 with 255 opaque; the GS scale (128 opaque) is
// doubled on the way out and halved on the way back. A texture that uses
// alpha above 128 (which the GS blends as more than opaque) keeps its GS
// alpha unchanged in the PNG, so nothing is lost; whether a hash is such a
// texture is decided from the original, see rawAlpha().
namespace gs_texture_replacement
{
    // False when nothing is dumped and no replacements exist: callers skip
    // hashing entirely.
    bool active();

    bool dumping();

    // The texture's key, gs_texture_hash::hash (shared with the Xbox pack).
    uint64_t hash(const uint32_t *texels, uint32_t width, uint32_t height);

    // True when the texture's alpha goes above the GS opaque value (128).
    bool rawAlpha(const uint32_t *texels, uint32_t width, uint32_t height);

    // Queues a PNG of the texture unless this hash was saved to that folder
    // before.
    void dump(uint64_t hash, const uint32_t *texels, uint32_t width, uint32_t height, bool flat, bool rawAlpha);

    // Loads the replacement for this hash, if there is one, as RGBA8 with GS
    // alpha. Returns false when there is none.
    bool load(uint64_t hash, bool rawAlpha, std::vector<uint32_t> &texels, int &width, int &height);
}
