// Host test of the Xbox renderer's frame height and scissor mapping
// (src/xbox/gs_nv2a_clip.h): the window clip a GS scissor becomes must hold
// exactly the screen pixels whose centre lies in a scissored frame pixel (so
// a view of a split screen keeps every pixel it draws and none of its
// neighbours'), the game's full-screen scissor must give pbkit's full-screen
// clip (one player: no change), and the views TimeSplitters lays out
// (playerSetWindow_0x27efb0: 2 players top/bottom, 3-4 in quarters, with
// gaps) must not share a screen pixel. Also the display decode the frame
// height comes from, and when the display or the first draw's scissor
// decides it.
//
//   clang++ -std=c++20 -O2 src/xbox/test/gs_nv2a_clip_test.cpp -o gs_nv2a_clip_test && ./gs_nv2a_clip_test
#include "../gs_nv2a_clip.h"

#include <cstdio>
#include <vector>

namespace
{
    using namespace gs_nv2a_clip;

    int failures = 0;
    void check(bool ok, const char *what, uint32_t a = 0, uint32_t b = 0, uint32_t c = 0)
    {
        if (!ok && ++failures <= 20)
            std::printf("FAIL %s (%u %u %u)\n", what, a, b, c);
    }

    uint32_t first(uint32_t word) { return word & 0xFFFu; }
    uint32_t last(uint32_t word) { return word >> 16; }

    // Every screen pixel against the definition: in the clip exactly when its
    // centre lies in a frame pixel lo..hi.
    void checkSpan(uint32_t lo, uint32_t hi, uint32_t frame, uint32_t screen)
    {
        const uint32_t word = clipSpan(lo, hi, frame, screen);
        const uint32_t top = hi < lo ? lo : hi;
        for (uint32_t p = 0; p < screen; ++p)
        {
            // floor((p + 0.5) * frame / screen) in integers.
            const uint64_t pixel = (uint64_t(2u * p + 1u) * frame) / (2u * uint64_t(screen));
            const bool want = pixel >= lo && pixel <= top;
            const bool have = p >= first(word) && p <= last(word);
            check(want == have, "span pixel", lo * 10000u + hi, frame, p);
        }
    }

    struct Rect
    {
        uint32_t x0, y0, x1, y1;
    };
}

int main()
{
    // Exhaustive spans for the frame sizes that occur (and some that do not).
    for (uint32_t frame : {224u, 448u, 480u, 512u, 256u, 640u, 100u})
    {
        const uint32_t screen = frame == 640u ? kScreenWidth : kScreenHeight;
        for (uint32_t lo = 0; lo < frame + 3u; lo += (frame > 300u ? 7u : 1u))
            for (uint32_t hi = 0; hi < frame + 3u; hi += (frame > 300u ? 5u : 1u))
                checkSpan(lo, hi, frame, screen);
        checkSpan(0, 2047, frame, screen);
        checkSpan(2000, 2047, frame, screen);
    }
    for (uint32_t lo = 0; lo < 640u; lo += 3u)
        for (uint32_t hi = 0; hi < 700u; hi += 11u)
            checkSpan(lo, hi, 640u, kScreenWidth);

    // One player: the game's scissor (0, 0, 639, 223) on the 640x224 frame is
    // pbkit's full-screen clip, as is a scissor reaching past the frame.
    uint32_t cx, cy;
    windowClip(0, 639, 0, 223, 640, 224, cx, cy);
    check(cx == kFullClipX && cy == kFullClipY, "full screen", cx, cy);
    windowClip(0, 639, 0, 447, 640, 224, cx, cy);
    check(cx == kFullClipX && cy == kFullClipY, "past the frame", cx, cy);
    windowClip(0, 2047, 0, 2047, 640, 448, cx, cy);
    check(cx == kFullClipX && cy == kFullClipY, "2047", cx, cy);

    // Split screens: the views must not share a pixel, and each must reach
    // the screen's edges where its window does.
    const std::vector<std::vector<Rect>> layouts = {
        {{0, 0, 639, 111}, {0, 113, 639, 223}},
        {{0, 0, 317, 111}, {322, 0, 639, 111}, {0, 113, 317, 223}, {322, 113, 639, 223}},
    };
    for (const auto &views : layouts)
    {
        std::vector<uint8_t> owner(kScreenWidth * kScreenHeight, 0u);
        for (size_t v = 0; v < views.size(); ++v)
        {
            const Rect &r = views[v];
            windowClip(r.x0, r.x1, r.y0, r.y1, 640, 224, cx, cy);
            for (uint32_t y = first(cy); y <= last(cy); ++y)
                for (uint32_t x = first(cx); x <= last(cx); ++x)
                {
                    uint8_t &o = owner[y * kScreenWidth + x];
                    check(o == 0u, "views overlap", x, y, uint32_t(v));
                    o = uint8_t(v + 1u);
                }
            check(r.x0 != 0u || first(cx) == 0u, "left edge", uint32_t(v));
            check(r.x1 != 639u || last(cx) == kScreenWidth - 1u, "right edge", uint32_t(v));
            check(r.y0 != 0u || first(cy) == 0u, "top edge", uint32_t(v));
            check(r.y1 != 223u || last(cy) == kScreenHeight - 1u, "bottom edge", uint32_t(v));
        }
    }
    // The 2-player split: top view rows 0..239, gap 240..241, bottom 242..479.
    windowClip(0, 639, 0, 111, 640, 224, cx, cy);
    check(first(cy) == 0u && last(cy) == 239u, "2P top", first(cy), last(cy));
    windowClip(0, 639, 113, 223, 640, 224, cx, cy);
    check(first(cy) == 242u && last(cy) == 479u, "2P bottom", first(cy), last(cy));

    // A scissor wholly past the screen draws nothing (first > last), and its
    // first word stays the screen size (12-bit fields are never near 0xFFF,
    // which a signed reading would take as -1).
    const uint32_t past = clipSpan(700, 800, 640, kScreenWidth);
    check(first(past) > last(past) && first(past) == kScreenWidth, "past the screen", first(past), last(past));
    for (uint32_t lo = 0; lo < 2048u; ++lo)
    {
        const uint32_t word = clipSpan(lo, 2047, 224, kScreenHeight);
        check(first(word) <= kScreenHeight && last(word) == kScreenHeight - 1u, "far rows", lo, first(word), last(word));
    }

    // The display decode: TimeSplitters' 640x224 field buffers (DH 223,
    // MAGV 0, FBW 10, CT16), circuit 2 only, MAGV 1, no circuit.
    const uint64_t dispfb = (10ull << 9) | (2ull << 15);
    const uint64_t display = (676ull) | (32ull << 12) | (2559ull << 32) | (223ull << 44);
    Display d;
    check(displaySetup(3, dispfb, display, dispfb, display, d) && d.rows == 224u && d.fbw == 10u && d.psm == 2u,
          "display 224", d.rows, d.fbw, d.psm);
    check(displaySetup(2, 0, 0, dispfb, display, d) && d.rows == 224u, "circuit 2", d.rows);
    const uint64_t magnified = (676ull) | (32ull << 12) | (1ull << 27) | (2559ull << 32) | (447ull << 44);
    check(displaySetup(1, dispfb, magnified, 0, 0, d) && d.rows == 224u, "magv", d.rows);
    check(!displaySetup(0, dispfb, display, dispfb, display, d) && d.rows == 0u, "no circuit");

    // The frame's rows: the display's for the game's buffers, whatever the
    // first draw's scissor (a split screen's top view: 112 rows); the first
    // draw's scissor, as before, with nothing shown yet, with
    // sceGsResetGraph's display (CT32, DH 447) before the game's first swap,
    // for a buffer of another width, and for displays under 64 rows.
    Display game{};
    displaySetup(3, dispfb, display, dispfb, display, game);
    check(frameRows(game, 10, 2, 223) == 224u, "1P", frameRows(game, 10, 2, 223));
    check(frameRows(game, 10, 2, 111) == 224u, "split", frameRows(game, 10, 2, 111));
    check(frameRows(Display{}, 10, 2, 111) == 112u, "nothing shown", frameRows(Display{}, 10, 2, 111));
    Display reset{};
    displaySetup(1, (10ull << 9), (639ull << 32) | (447ull << 44), 0, 0, reset);
    check(reset.rows == 448u && reset.psm == 0u, "reset display", reset.rows, reset.psm);
    check(frameRows(reset, 10, 2, 223) == 224u, "start-up", frameRows(reset, 10, 2, 223));
    check(frameRows(game, 8, 2, 223) == 224u && frameRows(game, 8, 2, 99) == 100u, "other width");
    Display small = game;
    small.rows = 32u;
    check(frameRows(small, 10, 2, 223) == 224u, "small display", frameRows(small, 10, 2, 223));
    check(frameRows(Display{}, 10, 2, 2047) == 512u && frameRows(Display{}, 10, 2, 0) == 1u, "scissor clamp");

    if (failures)
        std::printf("%d failures\n", failures);
    else
        std::printf("gs_nv2a_clip: all checks passed\n");
    return failures ? 1 : 0;
}
