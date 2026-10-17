#pragma once
// Picture diagnostics for the Xbox renderer (make TS_DIAG=1; src/xbox/DIAG.md).
// Not compiled in otherwise: every use is under #if TS_DIAG.
//
// Live switches, changed from controller 1 (hold Back + White: D-pad up /
// down picks one, A steps its value, Y puts every switch back to the
// release value) and shown on screen for a few seconds after any change;
// boot settings read once from D:\diag.ini. Every switch starts at the
// release behaviour, so with nothing changed the build draws as release.
#ifndef TS_DIAG
#define TS_DIAG 0
#endif

#if TS_DIAG
#include <cstdint>

namespace xdiag
{
    // The live switches (gs_nv2a_backend.cpp and its fragments read them at
    // each frame's start).
    enum Item : int
    {
        kHeight,      // HGT  frame height from the GS display registers (0: first draw's scissor)
        kScissor,     // SCI  GS scissor as the NV2A window clip (0: whole screen)
        kTexStream,   // TXS  streamed texture decode (0: whole-texture vectors, as before Push A)
        kClutId,      // CLU  CLUT loads by identity (0: the palette cache)
        kTexFast,     // TXF  recent-texture table (0: every lookup through the cache)
        kRangeMemo,   // RGM  memo of the GPU-drawn range (0: worked out at every use)
        kReadback,    // RB   GPU pixels read back into GS memory when read (0: never)
        kReadbackAll, // RBA  read-backs cover every frame row (0: only rows drawn)
        kScreenLoad,  // LDS  CPU changes to the screen loaded into the back buffer (0: never)
        kFrameSwitch, // FBS  a draw to the other display buffer ends the frame (0: keeps drawing)
        kFlipWait,    // FLW  0 none, 1 never draw into the buffer on screen, 2 wait for every flip
        kClear,       // CLR  colour clear at frame start: 0 none, 1 black, 2 bright
        kGpuDrain,    // DRN  wait for the GPU to finish every frame before the flip
        kFence,       // FNC  sfence after CPU writes to GPU memory (screen loads, read-backs)
        kItems
    };
    struct Desc
    {
        const char *tag;  // short, for the overlay
        const char *name; // for the log
        uint8_t max;      // values 0..max
    };
    extern const Desc kDesc[kItems];
    extern uint8_t g_release[kItems];       // the release build's values
    extern volatile uint8_t g_value[kItems];
    extern volatile uint32_t g_generation;  // moves with every change

    // Boot settings (D:\diag.ini).
    struct Boot
    {
        bool iniFound = false;
        int untiledColour = 1; // pbkit colour buffers untiled (release) or tiled
        int buffers = 3;       // pbkit frame buffers: 3 (release) or 2
        int overlaySeconds = 3;
        int logPerSecond = 20; // [TS:diag] change lines a second (the rest counted, summary)
        int summary = 1;       // the once-a-second summary line
    };
    extern Boot g_boot;

    // The renderer's defaults for the switches whose release value depends
    // on how it was compiled; then D:\diag.ini (boot keys and any switch's
    // starting value). Once, before pb_init.
    void setRelease(Item item, int value);
    void loadIni();

    // Controller 1, once a pad update (xbox_raylib.cpp).
    struct PadButtons
    {
        bool back, white, up, down, a, y;
    };
    void pollPad(const PadButtons &buttons);
    // True while the combo holds controller 1: the game sees it idle.
    bool padCaptured();

    // The overlay (the renderer draws it into the finished frame).
    bool overlayVisible();
    void drawOverlay(void *frame, uint32_t pitch, bool sixteenBit);

    // [TS:diag] change lines, rate-limited (false: counted as dropped).
    bool logAllowed();
    // One log line (newline added; no allocation).
    void logLine(const char *format, ...) __attribute__((format(printf, 1, 2)));

    // Counters for the once-a-second summary (the renderer's thread).
    struct Counters
    {
        uint32_t frames = 0, screenDraws = 0, partialDraws = 0, offscreenDraws = 0;
        uint32_t readbacks = 0, readbackRows = 0, readbacksSkipped = 0;
        uint32_t screenLoads = 0, screenLoadsSkipped = 0, clears = 0, transfers = 0, screenTransfers = 0;
        uint32_t frameSwitches = 0, frameSwitchesKept = 0, flipWaits = 0, flipWaitMs = 0, overlayFrames = 0;
    };
    extern Counters g_count;
    void maybeSummary(); // writes the summary when a second has passed
}
#endif
