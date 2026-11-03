// The PC's button glyphs (tools/pc_button_glyphs.py): Xbox controller and
// keyboard versions of the game's button prompt textures, built into the
// program from project/game/pc_glyphs/<set>/<hash>.png by
// project/game/CMakeLists.txt, and handed to the renderer at start-up
// (gs_texture_replacement::addButtonImage).
#include "runtime/gs/gs_texture_replacement.h"

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
#include "pc_glyphs.inc" // kPcGlyphs
}

void registerPcButtonGlyphs()
{
    for (const PcGlyph &glyph : kPcGlyphs)
        gs_texture_replacement::addButtonImage(glyph.set, glyph.hash, glyph.png, glyph.size);
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
