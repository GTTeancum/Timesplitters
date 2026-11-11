// Borrowing fixed diagnostic scratch is permitted only at pristine boot.
#pragma once
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"
#include <cstdio>
namespace ts_diagnostics
{
    inline bool canBorrowBootScratch(PS2Runtime &runtime, uint32_t base, uint32_t bytes)
    {
        if (runtime.eeScheduler().pristineForBootDiagnostics() &&
            runtime.kernelArenaUnused(base, bytes))
            return true;
        std::fprintf(stderr, "[TS:selftest] skipped: scratch is not exclusively available at boot\n");
        return false;
    }
}
