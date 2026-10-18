#pragma once
// Memory left on the 64 MB console, and giving some back when it ran out
// (xbox_memory.cpp).

struct XboxMemoryState
{
    unsigned freeKB = 0; // physical pages free (MmQueryStatistics)
    unsigned poolKB = 0; // the kernel's pool (file objects, locks, ...)
};
XboxMemoryState xboxMemoryState();

// After an allocation or a kernel call failed for want of memory: the heap's
// unused pages go back at once (dlmalloc_trim), and the renderer drops its
// runtime-path textures at its next frame's start (g_nv2aReleaseRequests; at
// most every 2 s, so a console that stays short does not decode its textures
// afresh every frame). Safe from any thread.
void xboxReleaseMemory();
