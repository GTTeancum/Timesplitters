#pragma once
// The Xbox renderer's frame size and scissor (gs_nv2a_backend.cpp,
// TS_NV2A_DISPLAY_HEIGHT and TS_NV2A_SCISSOR), kept apart from the GPU code
// so a host test can check them (src/xbox/test/gs_nv2a_clip_test.cpp). The GS
// frame is drawn scaled to the 640x480 NV2A screen: frame pixel (x, y)
// covers screen pixels [x * 640 / width, (x + 1) * 640 / width) by
// [y * 480 / height, (y + 1) * 480 / height).
#include <algorithm>
#include <cstdint>

namespace gs_nv2a_clip
{
    constexpr uint32_t kScreenWidth = 640u, kScreenHeight = 480u;

    // What the display shows: the buffer's FBW and PSM, and its rows (DISPLAY
    // DH + 1 lines, each buffer row shown MAGV + 1 times; the presenters
    // leave MAGV out, and the game's is 0). Circuit 1 when PMODE has it on,
    // else circuit 2, as the presenters take it. Rows 0: nothing shown.
    struct Display
    {
        uint32_t fbw = 0, psm = 0, rows = 0;
    };
    inline bool displaySetup(uint64_t pmode, uint64_t dispfb1, uint64_t display1, uint64_t dispfb2, uint64_t display2,
                             Display &out)
    {
        if ((pmode & 3u) == 0u)
        {
            out = {};
            return false;
        }
        const bool first = (pmode & 1u) != 0u;
        const uint64_t dispfb = first ? dispfb1 : dispfb2, display = first ? display1 : display2;
        out.fbw = uint32_t((dispfb >> 9) & 0x3Fu);
        out.psm = uint32_t((dispfb >> 15) & 0x1Fu);
        const uint32_t dh = uint32_t((display >> 44) & 0x7FFu), magv = uint32_t((display >> 27) & 3u);
        out.rows = (dh + 1u) / (magv + 1u);
        return true;
    }

    // The frame's rows by its first draw's scissor (the old reading).
    constexpr uint32_t scissorRows(uint32_t y1) { return std::clamp<uint32_t>(y1 + 1u, 1u, 512u); }

    // The GS frame's rows (its mapping onto the screen's 480): the rows the
    // display shows, when it shows a buffer of the frame's width and format
    // and 64 to 512 rows (the presenters take no fewer); else the first
    // draw's scissor, as before. Until the game's first buffer swap the
    // display is sceGsResetGraph's (32-bit, 448 rows): its format tells it
    // apart from the game's 16-bit 640x224 frames.
    inline uint32_t frameRows(const Display &display, uint32_t fbw, uint32_t psm, uint32_t scissorY1)
    {
        if (display.rows >= 64u && display.rows <= 512u && display.fbw == fbw && display.psm == psm)
            return display.rows;
        return scissorRows(scissorY1);
    }

    // ceil(num / den) for den > 0, num of either sign.
    constexpr int64_t ceilDiv(int64_t num, int64_t den)
    {
        return num >= 0 ? (num + den - 1) / den : -((-num) / den);
    }

    // One axis of a GS scissor (frame pixels lo..hi, inclusive) on the
    // screen: the screen pixels whose centre lies in a scissored frame pixel.
    // Screen pixel p (centre p + 0.5) lies in frame pixel
    // floor((p + 0.5) * frame / screen), which is inside [lo, hi] for
    // lo * screen / frame - 0.5 <= p < (hi + 1) * screen / frame - 0.5: the
    // pixels the vertex mapping rasterises for the frame pixels. hi below lo
    // is taken as lo (the PC renderer's reading, glScissor of one pixel).
    // The NV2A window-clip word: first | last << 16, inclusive, 12 bits
    // each. A scissor wholly past the screen gives first = screen > last:
    // nothing (first stays small, should the field be read as signed). (The
    // GS itself, and the software renderer, draw nothing for hi below lo.)
    constexpr uint32_t clipSpan(uint32_t lo, uint32_t hi, uint32_t frame, uint32_t screen)
    {
        hi = std::max(hi, lo);
        const int64_t f = int64_t(std::max<uint32_t>(frame, 1u)), s = int64_t(screen);
        const int64_t first = ceilDiv(2 * int64_t(lo) * s - f, 2 * f);
        const int64_t last = ceilDiv(2 * (int64_t(hi) + 1) * s - f, 2 * f) - 1;
        const uint32_t a = uint32_t(std::clamp<int64_t>(first, 0, s));
        const uint32_t b = uint32_t(std::clamp<int64_t>(last, 0, std::max<int64_t>(s - 1, 0)));
        return a | (b << 16);
    }

    // The NV2A window clip (NV097_SET_WINDOW_CLIP_HORIZONTAL / _VERTICAL
    // words) for a GS scissor on a frame of width x height.
    inline void windowClip(uint32_t x0, uint32_t x1, uint32_t y0, uint32_t y1, uint32_t width, uint32_t height,
                           uint32_t &clipX, uint32_t &clipY)
    {
        clipX = clipSpan(x0, x1, width, kScreenWidth);
        clipY = clipSpan(y0, y1, height, kScreenHeight);
    }

    // The whole screen (pbkit's setting).
    constexpr uint32_t kFullClipX = (kScreenWidth - 1u) << 16, kFullClipY = (kScreenHeight - 1u) << 16;
}
