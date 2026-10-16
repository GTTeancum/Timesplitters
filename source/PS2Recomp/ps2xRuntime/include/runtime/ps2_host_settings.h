#pragma once

#include <atomic>
#include <cstdint>
#include <string>
#include <utility>
#include <vector>

// Player-facing display settings, read once from timesplitters.ini in the
// working directory (TS_SETTINGS=<path> picks another file). Keys:
//   resolution   = 1920x1080   window size
//   fullscreen   = 0|1         borderless fullscreen
//   widescreen   = 0|1         16:9 (the game renders a wider view)
//   fxaa         = 0|1         edge smoothing on the final image
//   render_scale = 1..4        internal rendering resolution multiplier
//   texture_dump = 0|1         save each new texture to textures/dump
//   texture_replace = 0|1      draw PNGs from textures/replacements instead
//   knob.<name>  = <value>     a runtime knob (project/game/ts_knobs.h):
//                              passed through to the knob registry as read
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
    bool textureDump = false;          // read at start-up
    bool textureReplace = true;
    // Bumped when the window size or fullscreen changed; the window thread
    // applies the new values.
    std::atomic<unsigned> windowChanges{0};
    // knob.<name> = <value> lines, in file order (the name without the
    // "knob." prefix, lower-case); the knob registry reads them at start-up.
    std::vector<std::pair<std::string, uint32_t>> knobs;
};

HostSettings &hostSettings();

// Writes the current values back to the settings file, keeping its comments.
void saveHostSettings();
