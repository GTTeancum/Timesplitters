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

    // Button glyph sets (PC): the game's button prompt textures drawn as the
    // buttons of the device the player uses (ps2PadButtonSet,
    // runtime/ps2_pad_host.h: 1 an Xbox-style controller, 2 the keyboard).
    // The program registers its built-in PNGs (any size; PNG alpha) before
    // the first frame; the renderer asks for a texture's glyph every time it
    // draws it, so a change of device shows at once. A glyph set wins over a
    // replacement PNG of the same hash.
    void addButtonImage(int set, uint64_t hash, const unsigned char *png, size_t size);
    bool isButton(uint64_t hash);
    bool loadButton(int set, uint64_t hash, std::vector<uint32_t> &texels, int &width, int &height);
    // Which pad button a button texture shows (the program's own numbering,
    // Ps2MenuPress in runtime/ps2_pad_host.h), so a drawn prompt can be
    // clicked; -1 when not set.
    void setButtonPress(uint64_t hash, int press);
    // A button texture is named by its whole texture's hash, but the game
    // uploads the same button with other things beside its picture (in play,
    // the spare columns hold other video memory). buttonOf names a texture
    // whose top left areaWidth x areaHeight hashes to a registered button
    // picture by that button's hash (0: none).
    void addButtonArea(uint64_t areaHash, uint32_t areaWidth, uint32_t areaHeight, uint64_t buttonHash);
    uint64_t buttonOf(const uint32_t *texels, uint32_t width, uint32_t height);
    int buttonPress(uint64_t hash);

    // Redrawn fonts (PC; tools/pc_font_atlases.py): a font's atlas is the top
    // left areaWidth x areaHeight of its texture, named by the hash of that
    // area alone (the rest is other video memory). The PNG covers the area
    // at any scale: where its red is 255 it replaces the texel (white, its
    // alpha), elsewhere the game's own texel stays. fontTexture builds the
    // whole texture at the PNG's scale when texels (width x height, GS
    // alpha) hold a registered atlas; false otherwise.
    void addFontImage(uint64_t areaHash, uint32_t areaWidth, uint32_t areaHeight, const unsigned char *png, size_t size);
    bool fontTexture(const uint32_t *texels, uint32_t width, uint32_t height, std::vector<uint32_t> &out, int &outWidth,
                     int &outHeight, uint64_t &areaHash);
}
