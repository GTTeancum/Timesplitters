#pragma once
// The IOP idle fast path's switches and counters (src/xbox/PUSH-BC-PLAN.md
// M3.4a, B-PLATFORM; the path is in src/emulator/iop_emulator.cpp,
// IopEmulator runCycles). A new header beside the IOP's own so the Xbox
// status lines can read the counters without the emulator's internals.
//
// TS_IOP_IDLE 1: when the last device batch left every IOP thread waiting
// and nothing has reached the IOP since (no RPC, SIF transfer, memory write,
// module load or reset: the input epoch), a batch that ends before the
// earliest timed event (a delayed thread's wake, a DMA completion, a guest
// callback, a timer; capped at 2^17 IOP cycles) only moves the IOP clock on,
// as the full loop would after finding nothing to do. The SPU2 interrupt
// line is still polled every batch. 0 (default until Train 1's check): the
// full loop every batch, as before.
// TS_IOP_IDLE_CHECK 1 (SC-E): the full loop runs anyway where the fast path
// would have skipped it, and a batch in which it did anything but move the
// clock (ran an instruction, took an interrupt, serviced a DMA completion or
// callback, ended elsewhere) counts in iopmiss, which must stay 0.
#include <cstdint>

#ifndef TS_IOP_IDLE
#define TS_IOP_IDLE 0
#endif
#ifndef TS_IOP_IDLE_CHECK
#define TS_IOP_IDLE_CHECK 0
#endif

namespace ps2x::iop
{
    struct IopIdleStats
    {
        uint32_t batches = 0; // runCycles calls
        uint32_t skipped = 0; // ... answered by the idle fast path
        uint32_t checked = 0; // TS_IOP_IDLE_CHECK: fast-path batches run in full to compare
        uint32_t miss = 0;    // TS_IOP_IDLE_CHECK: ... in which the full loop did work (must stay 0)
    };
    inline IopIdleStats g_iopIdleStats;
}
