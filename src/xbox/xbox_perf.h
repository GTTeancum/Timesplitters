#pragma once
#include <cstddef>
#include <cstdint>
#include <memory>
// Timing, CPU and memory telemetry for real-hardware runs (xbox_perf.cpp).
// Always on: every few seconds the status hook (xbox_main.cpp) writes
//   [TS:perf]  frames, busy ms a frame, fps-equivalent, frame-time percentiles
//   [TS:phase] the frame's steps (game tick, per player, per viewport, the
//              draw kick and what inside it is measured)
//   [TS:kick]  TS_PERF_BACKEND only: the draw kick split into its parts
//   [TS:ee]    EE scheduler waits per call site, protocol counts, guest calls
//   [TS:cpu]   P6 performance counters, kernel idle, MXCSR / x87 flags
//   [TS:mem]   free memory and its low-water mark, the heap, the game's heaps
// all per game frame over the interval unless marked otherwise. Nothing here
// allocates after start-up; the totals are fixed storage.

class GSRasterBackend;
class GifArbiter;
class GS;

// All of it: about 12 KB of code and 3 KB of counters. 0: none of it is
// built, and the status hook writes its old one-line [TS:perf] instead.
#ifndef TS_PERF
#define TS_PERF 1
#endif
// Phase brackets around the game's per-frame steps (project/game/
// ts_overrides.cpp wraps their function-table entries). About fifteen
// brackets a frame, two rdtsc each. 0: the table is left as it was.
#if !TS_PERF
#undef TS_PERF_DETAIL
#define TS_PERF_DETAIL 0
#endif
#ifndef TS_PERF_DETAIL
#define TS_PERF_DETAIL 1
#endif
// Times every call into the NV2A renderer (a forwarding wrapper around
// GSNv2aBackend) and every GIF packet the GS front end processes: a few
// thousand calls a frame, 0.1-0.5 ms. Off by default (measurement only).
// The wrapper forwards every GSRasterBackend virtual; one added to that
// interface must be forwarded here too, or its default runs instead.
#ifndef TS_PERF_BACKEND
#define TS_PERF_BACKEND 0
#endif
// P6 performance counters (MSR 0x186/0x187, read as MSR 0xC1/0xC2). Pair
// TS_PMC_PAIR of kPmcPairs (xbox_perf.cpp) is counted; TS_PMC_ROTATE=1
// moves to the next pair at every report instead. 0: no MSR is touched.
#ifndef TS_PMC
#define TS_PMC 1
#endif
#ifndef TS_PMC_PAIR
#define TS_PMC_PAIR 0
#endif
#ifndef TS_PMC_ROTATE
#define TS_PMC_ROTATE 0
#endif
// dlmalloc's heap walk (mallinfo: bytes in use and free inside the heap)
// every TS_PERF_MALLINFO-th report, never while the frame-time window is
// open: it walks every chunk under the heap lock (its time is logged). 0:
// only in the out-of-memory report.
#ifndef TS_PERF_MALLINFO
#define TS_PERF_MALLINFO 10
#endif
// The frame-time histogram of the whole stretch between these script reads
// is written out when it closes (the hwprof window's reads by default).
// Without a pad script it covers the whole run and is never written out.
#ifndef TS_PERF_FROM
#define TS_PERF_FROM 1500
#endif
#ifndef TS_PERF_TO
#define TS_PERF_TO 2700
#endif

enum XboxPerfPhase : uint32_t
{
    kPerfGameTick,   // gameTick
    kPerfTickBefore, // lvTickBefore
    kPerfTickPlayer, // lvTickPlayer, once per player
    kPerfTickAfter,  // lvTickAfter
    kPerfGfx,        // lvGfx, once per viewport
    kPerfKick,       // gsMain's sceDmaSend of the frame's display list (walk, VIF, VU1, GS, renderer)
    kPerfPhaseCount
};

struct XboxPerfInputs
{
    uint32_t seconds = 0;
    uint64_t vsync = 0;
    bool scriptActive = false;
    uint32_t scriptReads = 0;
    const uint8_t *rdram = nullptr; // the game's heap globals
    // make TS_HWPROF=1, while its window is open (cumulative): CMOS clock
    // samples, of them in the kernel's idle thread, and with the GPU busy
    // (graphics engine or command FIFO; either).
    bool hwprof = false;
    uint32_t rtcSamples = 0, rtcIdle = 0, gpuGraph = 0, gpuFifo = 0, gpuBusy = 0;
};

// operator new (xbox_shims.cpp) reports requests of this many bytes or more.
constexpr size_t kPerfBigAllocation = 64u * 1024u;

#if TS_PERF
// Once, early in main: clock rate, idle thread, performance counters.
void xboxPerfInit();
// The game finished a frame (gameFrames++, the game thread).
void xboxPerfGameFrame();
// A bracketed step starts / returns to its caller (the game thread). A
// close without an open does nothing.
void xboxPerfPhaseOpen(uint32_t phase);
void xboxPerfPhaseClose(uint32_t phase);

// operator new (xbox_shims.cpp), for requests of kPerfBigAllocation bytes
// or more: the request, its result (null: failed) and its caller.
void xboxPerfNoteAllocation(size_t bytes, const void *result, const void *caller);
// The out-of-memory handler: the last 16 big requests and the heap.
void xboxPerfDumpAllocations();

// Every presented frame (status hook): the free-memory low-water mark, and
// the frame-time window opened / closed by script reads.
void xboxPerfHostFrame(bool scriptActive, uint32_t scriptReads);

// The status lines, for the time since the last call (every 3 s).
void xboxPerfReport(const XboxPerfInputs &inputs);

// TS_PERF_BACKEND: the renderer wrapped for timing (else unchanged).
std::unique_ptr<GSRasterBackend> xboxPerfWrapBackend(std::unique_ptr<GSRasterBackend> backend);
// TS_PERF_BACKEND: the GIF arbiter's packets timed on their way into the GS
// (else nothing). After PS2Runtime::initialize, which sets the arbiter up.
void xboxPerfWrapGif(GifArbiter &arbiter, GS &gs);
#else
inline void xboxPerfInit() {}
inline void xboxPerfGameFrame() {}
inline void xboxPerfPhaseOpen(uint32_t) {}
inline void xboxPerfPhaseClose(uint32_t) {}
inline void xboxPerfNoteAllocation(size_t, const void *, const void *) {}
inline void xboxPerfDumpAllocations() {}
inline void xboxPerfHostFrame(bool, uint32_t) {}
inline void xboxPerfReport(const XboxPerfInputs &) {}
template <typename Backend> // (a template: GSRasterBackend may be incomplete here)
inline Backend xboxPerfWrapBackend(Backend backend)
{
    return backend;
}
inline void xboxPerfWrapGif(GifArbiter &, GS &) {}
#endif
