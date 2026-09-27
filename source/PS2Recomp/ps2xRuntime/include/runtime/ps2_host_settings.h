#pragma once

#include <atomic>

// Player-facing display settings, read once from timesplitters.ini in the
// working directory (TS_SETTINGS=<path> picks another file). Keys:
//   resolution   = 1920x1080   window size
//   fullscreen   = 0|1         borderless fullscreen
//   widescreen   = 0|1         16:9 (the game renders a wider view)
//   fxaa         = 0|1         edge smoothing on the final image
//   render_scale = 1..4        internal rendering resolution multiplier
// widescreen and fxaa can be toggled while playing (F10, F9).
struct HostSettings
{
    int windowWidth = 1280;
    int windowHeight = 720;
    bool fullscreen = false;
    std::atomic<bool> widescreen{false};
    std::atomic<bool> fxaa{true};
    int renderScale = 1;
};

HostSettings &hostSettings();
