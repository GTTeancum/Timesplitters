#pragma once
// Deterministic mode (src/xbox/PUSH-BC-PLAN.md M0.8; section 6, I-8). The
// det harness (B-SCHED: src/xbox/xbox_det.h, xbox_det.cpp) implements these
// under TS_DET=1 through its track's src/xbox/mk/b_sched.mk. Without it
// (the default) every call here is an inline no-op and nothing changes.
//
//   detTrace(kind, a, b)              a scheduler / event trace point (the sched stream)
//   xboxDetHash(stream, ptr, len)     hashes bytes into a stream's per-frame hash
//   xboxDetExclude(addr, len, until)  guest RAM the ram stream leaves out (D4)
//   xboxDetSetup()                    start-up, after the runtime is initialised (xbox_main.cpp)
//   xboxDetFrame()                    every game frame, at the frame boundary (project/game/ts_overrides.cpp, whatever TS_PERF says)
//   xboxDetWrapBackend(backend)       the renderer wrapped for the draw stream (xboxInstallBackend)
//   xboxDetActive()                   det mode is on (pinned time, hashes)
//   xboxDetSilentAudio()              the audio feeder mixes silence (the pcm stream mixes instead)
#include <cstddef>
#include <cstdint>
#include <memory>

#ifndef TS_DET
#define TS_DET 0
#endif

// Hash streams (the [TS:det] line's order).
enum XboxDetStream : uint32_t
{
    kDetRam = 0,
    kDetIop,
    kDetSpu,
    kDetVram,
    kDetVu,
    kDetCtx,
    kDetSched,
    kDetDraw,
    kDetPcm,
    kDetEe,
    kDetRing, // Push C: ring records at endXfRun
    kDetStreamCount
};

class GSRasterBackend;

#if TS_DET
void detTrace(uint32_t kind, uint64_t a, uint64_t b);
void xboxDetHash(uint32_t stream, const void *ptr, size_t len);
void xboxDetExclude(uint32_t addr, uint32_t len, uint32_t untilFrame);
void xboxDetSetup();
void xboxDetFrame();
bool xboxDetActive();
bool xboxDetSilentAudio();
std::unique_ptr<GSRasterBackend> xboxDetWrapBackend(std::unique_ptr<GSRasterBackend> backend);
#else
inline void detTrace(uint32_t, uint64_t, uint64_t) {}
inline void xboxDetHash(uint32_t, const void *, size_t) {}
inline void xboxDetExclude(uint32_t, uint32_t, uint32_t) {}
inline void xboxDetSetup() {}
inline void xboxDetFrame() {}
inline bool xboxDetActive() { return false; }
inline bool xboxDetSilentAudio() { return false; }
template <typename Backend> // (a template: GSRasterBackend may be incomplete here)
inline Backend xboxDetWrapBackend(Backend backend)
{
    return backend;
}
#endif
