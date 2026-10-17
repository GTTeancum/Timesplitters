#pragma once
// Deterministic mode, the det harness (src/xbox/PUSH-BC-PLAN.md M0.8 and
// section 5.1; B-SCHED). Built in with `make TS_DET=1` (src/xbox/mk/
// b_sched.mk adds -DTS_DET=1 to every file, generated code included); the
// entry points are declared in runtime/ps2_det.h, defined in xbox_det.cpp.
//
// What det mode pins (xboxDetSetup, before the runtime runs):
//   - the scheduler's time policy (EeTimePolicy::Pinned): deadlines fall due
//     by EE cycle alone, no host wait, no wall-clock catch-up; an idle EE
//     charges the cycles to the next deadline at once;
//   - every calendar time handed to the guest (runtime/ps2_host_time.h:
//     sceCdReadClock, memory-card entry times, fio stat, the time zone);
//   - the memory-card root, emptied at boot;
//   - the pad script: a timed one (host-time frames) is fatal at the first
//     frame, read-count scripts only;
//   - the display-list buffers and gp-0x6CA0 left out of the ram stream
//     (PUSH-BC-PLAN.md D4; registered at every frame boundary by
//     project/game/ts_overrides.cpp);
//   - the audio feeder plays silence (xboxDetSilentAudio): the SPU2 is not
//     mixed by a host thread at host times. (The executor-side pcm stream
//     needs B-AUDIO's public mix API; until then pcm and spu read 0.)
//
// What it writes: at every game frame (xboxDetFrame, at the frame boundary)
//   [TS:det] f=<frame> ram= iop= spu= vram= vu= ctx= sched= draw= pcm= ee= ring= all=
// one 32-bit hash per stream (runtime/ps2_det.h XboxDetStream order):
//   ram    guest RAM (32 MB) minus the registered exclusions (xboxDetExclude)
//   iop    IOP RAM (2 MB, read page-wise)
//   vram   GS local memory (4 MB)
//   vu     VU1 data memory (16 KB)
//   ctx    every kernel thread: id, status, priorities, and its context
//          field by field (GPRs, pc, HI/LO, SA, FPU, VU0 macro registers)
//   sched  the scheduler trace since the last frame (detTrace: thread
//          switches, events, invocations, interrupts, fired checkpoints,
//          unwinds, syscalls)
//   draw   every primitive handed to the renderer since the last frame, in
//          one canonical per-primitive form whichever call carried it
//          (Submit, SubmitStrip, SubmitPrimitives), plus native runs'
//          constants and untransformed vertices; no host pointers
//   ee     the EE cycle count and the VBlankStart count
//   ring   Push C's ring records (xboxDetHash(kDetRing, ...))
//   all    the streams above combined
// ram, iop and vram are hashed every TS_DET_EVERY-th frame (0 on the
// others). At every VBlankStart with no game frame since the previous one
// (boot, loading screens) the cheap streams go out as
//   [TS:detv] v=<vblank> ctx= sched= ee=
// and every 60 frames the counters that must stay 0 in det mode:
//   [TS:detc] f= hosttime= remote= catchup= pinnedIdle= frozen= excl=
// Compare two runs' logs with src/xbox/tools/det_compare.py; a ram
// difference is narrowed down with TS_DET_DUMP (det_diffram.py).
#include <cstdint>

// Heavy streams (ram, iop, vram) every this many frames; 1 = every frame.
#ifndef TS_DET_EVERY
#define TS_DET_EVERY 1
#endif
// [TS:detv] lines at VBlankStarts outside game frames (boot and loading).
#ifndef TS_DET_VBLANK
#define TS_DET_VBLANK 1
#endif
// Frame number at which guest RAM is written out in 64 KB blocks' hashes
// ([TS:detram] lines, 512 of them) for det_diffram.py; 0: never.
#ifndef TS_DET_DUMP
#define TS_DET_DUMP 0
#endif
// Frames [TS_DET_TRACE, TS_DET_TRACE + 2) print every scheduler trace record
// ([TS:dett] kind a b); 0: none.
#ifndef TS_DET_TRACE
#define TS_DET_TRACE 0
#endif
// The calendar instant every guest-visible time reads in det mode
// (2001-10-23 00:00:00 UTC, the game's release).
#ifndef TS_DET_INSTANT
#define TS_DET_INSTANT 1003795200
#endif

// The counters behind [TS:detc] (fixed storage).
struct XboxDetCounters
{
    uint32_t frames = 0;     // game frames hashed
    uint32_t vblankLines = 0; // [TS:detv] lines written
    uint32_t traces = 0;     // detTrace records
    uint32_t exclusions = 0; // exclusion ranges in force
    uint32_t exclusionsDropped = 0; // xboxDetExclude calls past the table (must stay 0)
};
const XboxDetCounters &xboxDetCounters();
