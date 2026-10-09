#pragma once
#include <cstdint>
// Hardware sampling profiler for real consoles (make TS_HWPROF=1; off by
// default, then these are empty inlines). See xbox_hwprof.cpp.
//
// Every interrupt of a sampling source records the interrupted instruction
// address and thread of whatever the CPU was running - every thread, the
// kernel's idle loop, DPCs - into a histogram that is written to the log
// ([TS:prof] lines) when the window closes. Read it back with
// hwprof_report.py and build/xbox/main.map.

struct HwprofCounters
{
    uint32_t scriptReads = 0;   // 0 when no pad script plays
    uint32_t gameFrames = 0;    // frames the game handed to the GPU
    int64_t eeWaitMicroseconds = 0; // EE scheduler blocking waits (cumulative)
    uint32_t gpuWaitKcyc = 0;   // renderer spinning on the GPU (cumulative, kcycles)
};

// While the window is open, every CMOS clock sample also notes whether the
// kernel's idle thread was running and whether the GPU was busy (cumulative).
struct HwprofSampleCounts
{
    uint32_t samples = 0, idle = 0;
    uint32_t gpuGraph = 0; // NV_PGRAPH_STATUS not 0: the graphics engine is working
    uint32_t gpuFifo = 0;  // the command FIFO's GET short of its PUT: commands waiting
    uint32_t gpuBusy = 0;  // either (pbkit's pb_busy test, with the GPU's own PUT)
};

#if TS_HWPROF
// Once, early in main (after the log file is open): installs the samplers.
void hwprofInit();
// Once pbkit runs (the NV2A renderer is installed): the GPU may be sampled.
void hwprofGpuReady();
// Every presented frame: opens / closes the window by script reads and
// writes the report when it closes.
void hwprofFrame(const HwprofCounters &counters);
HwprofSampleCounts hwprofSampleCounts();
#else
inline void hwprofInit() {}
inline void hwprofGpuReady() {}
inline void hwprofFrame(const HwprofCounters &) {}
inline HwprofSampleCounts hwprofSampleCounts() { return {}; }
#endif
