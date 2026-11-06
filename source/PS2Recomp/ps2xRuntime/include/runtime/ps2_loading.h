#pragma once

#include <atomic>
#include <chrono>
#include <cstdint>

// The loading wheel (every platform): eight dots in a ring at the bottom
// centre of the picture, one bright with a fading trail behind it, a step
// every tenth of a second, while the game loads a level (the front end is
// one too). The game's main loop loads in one stretch without drawing a
// frame (cpuMain: lvResetBefore ... gameResetAfter); project/game/
// ts_overrides.cpp marks the stretch, and the window loop draws the wheel
// over the last picture while it lasts (the PC with raylib, the Xbox into
// the shown buffer: gs_nv2a_backend.cpp xboxNv2aLoadingWheel). As Perfect
// Dark X's loader.
namespace ps2_loading
{
    inline std::atomic<int64_t> &startedMs()
    {
        static std::atomic<int64_t> started{0}; // 0: not loading
        return started;
    }

    inline int64_t nowMs()
    {
        return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch())
                   .count() + 1;
    }

    inline void begin()
    {
        startedMs().store(nowMs(), std::memory_order_relaxed);
    }

    inline void end()
    {
        startedMs().store(0, std::memory_order_relaxed);
    }

    // The wheel's step (0..7, the bright dot), or -1 when none is shown: not
    // loading, or loading for under a quarter second (a quick load shows none).
    inline int wheelStep()
    {
        const int64_t started = startedMs().load(std::memory_order_relaxed);
        if (!started)
            return -1;
        const int64_t elapsed = nowMs() - started;
        return elapsed < 250 ? -1 : static_cast<int>((elapsed / 100) & 7);
    }

    struct Dot
    {
        int x, y, half; // centre and half size, in the picture's pixels
        uint8_t r, g, b;
    };

    // The eight dots of a step on a picture of width x height (its bottom
    // centre; sizes as on a 480-line screen, scaled).
    inline void wheelDots(int width, int height, int step, Dot (&dots)[8])
    {
        static const float offsets[8][2] = {
            {0.0f, -1.0f}, {0.707f, -0.707f}, {1.0f, 0.0f}, {0.707f, 0.707f},
            {0.0f, 1.0f}, {-0.707f, 0.707f}, {-1.0f, 0.0f}, {-0.707f, -0.707f},
        };
        const float scale = static_cast<float>(height) / 480.0f;
        const float cx = static_cast<float>(width) * 0.5f, cy = static_cast<float>(height) - 30.0f * scale;
        const float radius = 13.0f * scale;
        const int half = static_cast<int>(3.5f * scale + 0.5f) < 3 ? 3 : static_cast<int>(3.5f * scale + 0.5f);
        for (int i = 0; i < 8; ++i)
        {
            const unsigned age = static_cast<unsigned>(i - step + 8) & 7u; // 0: the bright one
            dots[i].x = static_cast<int>(cx + offsets[i][0] * radius + 0.5f);
            dots[i].y = static_cast<int>(cy + offsets[i][1] * radius + 0.5f);
            dots[i].half = half;
            dots[i].r = static_cast<uint8_t>(18u + (7u - age) * 4u);
            dots[i].g = static_cast<uint8_t>(80u + (7u - age) * 18u);
            dots[i].b = static_cast<uint8_t>(135u + (7u - age) * 14u);
        }
    }
}
