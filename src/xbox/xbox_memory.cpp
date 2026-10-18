// Memory left on the console, and giving some back (xbox_memory.h).
#include "xbox_memory.h"

#include "gs_nv2a_backend.h"

#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

#include <atomic>
#include <cstddef>
#include <cstdint>

extern "C" int dlmalloc_trim(size_t pad); // nxdk's pdclib (dlmalloc, USE_DL_PREFIX)

namespace
{
    std::atomic<DWORD> g_lastRelease{0}; // GetTickCount of the last renderer request
    std::atomic<bool> g_released{false};
}

XboxMemoryState xboxMemoryState()
{
    MM_STATISTICS stats{};
    stats.Length = sizeof(stats);
    MmQueryStatistics(&stats);
    XboxMemoryState state;
    state.freeKB = unsigned(stats.AvailablePages * 4u);
    state.poolKB = unsigned(stats.PoolPagesCommitted * 4u);
    return state;
}

void xboxReleaseMemory()
{
    dlmalloc_trim(0);
    const DWORD now = GetTickCount();
    if (!g_released.exchange(true) || now - g_lastRelease.load() >= 2000u)
    {
        g_lastRelease.store(now);
        g_nv2aReleaseRequests.fetch_add(1u, std::memory_order_relaxed);
    }
}
