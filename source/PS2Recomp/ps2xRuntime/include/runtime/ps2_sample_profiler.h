#pragma once

#include <thread>

// Wall-clock sampling profiler for the game thread. Enabled with
// TS_SAMPLE_PROFILE=<samples per second>; the report is written to stderr
// when the profiler is stopped. Windows only; a no-op elsewhere.
namespace ps2_sample_profiler
{
    void start(std::thread &target);
    void stop();
}
