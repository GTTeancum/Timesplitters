#pragma once

#include <atomic>

// Player-facing display settings, read once from timesplitters.ini in the
// working directory (TS_SETTINGS=<path> picks another file). Keys:
//   resolution   = 1920x1080   window size
//   fullscreen   = 0|1         borderless fullscreen
//   widescreen   = 0|1         16:9 (the game renders a wider view)
//   fxaa         = 0|1         edge smoothing on the final image
//   render_scale = 1..4        internal rendering resolution multiplier
// widescreen and fxaa can be toggled while playing (F10, F9). The game's
// Audio / Video Options menu changes all of them and saves the file.
struct HostSettings
{
    std::atomic<int> windowWidth{1280};
    std::atomic<int> windowHeight{720};
    std::atomic<bool> fullscreen{false};
    std::atomic<bool> widescreen{false};
    std::atomic<bool> fxaa{true};
    std::atomic<int> renderScale{1};  // the value the file holds; used at start-up
    // Bumped when the window size or fullscreen changed; the window thread
    // applies the new values.
    std::atomic<unsigned> windowChanges{0};
};

HostSettings &hostSettings();

// Writes the current values back to the settings file, keeping its comments.
void saveHostSettings();
