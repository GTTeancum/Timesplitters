// The PC's button glyphs (tools/pc_button_glyphs.py): Xbox controller and
// keyboard versions of the game's button prompt textures, built into the
// program from project/game/pc_glyphs/<set>/<hash>.png by
// project/game/CMakeLists.txt, and handed to the renderer at start-up
// (gs_texture_replacement::addButtonImage).
#include "runtime/gs/gs_texture_replacement.h"
#include "runtime/ps2_pad_host.h"

#include "raylib.h"

#include <cstddef>
#include <cstdint>

namespace
{
    struct PcGlyph
    {
        int set; // 1 the Xbox controller, 2 the keyboard (ps2PadButtonSet)
        uint64_t hash;
        const unsigned char *png;
        size_t size;
    };
    struct PcFont
    {
        uint64_t areaHash; // gs_texture_hash of the font's atlas area
        uint32_t width, height;
        const unsigned char *png;
        size_t size;
    };
#include "pc_glyphs.inc" // kPcGlyphs, kPcFonts, kGameIcon
}

void registerPcButtonGlyphs()
{
    for (const PcGlyph &glyph : kPcGlyphs)
        gs_texture_replacement::addButtonImage(glyph.set, glyph.hash, glyph.png, glyph.size);
    // The button each texture shows, so a click on a prompt presses it.
    static const struct
    {
        uint64_t hash;
        Ps2MenuPress press;
    } kPresses[] = {
        {0x894a1129ad18c520ull, Ps2MenuPress::Accept}, // Cross
        {0x905beebd195ff6d0ull, Ps2MenuPress::Back},   // Triangle
        {0x40a5963645bd34f2ull, Ps2MenuPress::Circle}, {0xc4d7e929a4aebb6cull, Ps2MenuPress::Square},
        {0x99179ab41f0aabcfull, Ps2MenuPress::Select}, {0xd95b517dd8ddee93ull, Ps2MenuPress::L1},
        {0xe62dfde3d0332176ull, Ps2MenuPress::L2},
        // The green arrows either side of a value (level, difficulty, the
        // options' values, the pause screen's tabs): Left and Right.
        {0xfc62e8d908bbe2adull, Ps2MenuPress::Previous}, {0x022edd403c181afcull, Ps2MenuPress::Next},
    };
    for (const auto &p : kPresses)
        gs_texture_replacement::setButtonPress(p.hash, static_cast<int>(p.press));
    // The same buttons named by their 24 x 24 pictures alone (the hash of
    // each picture's texels as in MISC.PAK; tools/pc_button_glyphs.py), for
    // when the game uploads one with other video memory in its spare
    // columns (the pause screen's prompts).
    static const struct
    {
        uint64_t area, button;
    } kAreas[] = {
        {0x6a91bb8bd817bd90ull, 0x894a1129ad18c520ull}, // Cross
        {0x77d1b7d73caab32aull, 0x40a5963645bd34f2ull}, // Circle
        {0x244ddcbde71a2b94ull, 0xc4d7e929a4aebb6cull}, // Square
        {0xd9da14846ae00638ull, 0x905beebd195ff6d0ull}, // Triangle
        {0xcc2301736e47c8e7ull, 0x99179ab41f0aabcfull}, // Select
    };
    for (const auto &a : kAreas)
        gs_texture_replacement::addButtonArea(a.area, 24u, 24u, a.button);
    // The UI fonts redrawn from Jost (tools/pc_font_atlases.py), when built
    // in (project/game/CMakeLists.txt TS_PC_FONTS, off: the game's own).
    for (const PcFont &font : kPcFonts)
        if (font.png)
            gs_texture_replacement::addFontImage(font.areaHash, font.width, font.height, font.png, font.size);
}

// The game window's icon, once the window exists. Windows takes it from the
// program's GLFW_ICON resource (timesplitters.rc) instead.
void setGameWindowIcon()
{
#if !defined(_WIN32)
    Image icon = LoadImageFromMemory(".png", kGameIcon, static_cast<int>(sizeof(kGameIcon)));
    if (icon.data)
    {
        SetWindowIcon(icon);
        UnloadImage(icon);
    }
#endif
}
