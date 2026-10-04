#pragma once

#include <cstdint>

// VU1 data rows a native microprogram keeps a derived copy of (the Xbox
// renderer's transform constants, project/game/vu1_native_ts.cpp). Writes
// that reach them from outside the native program - UNPACK, the interpreter
// and JIT, EE stores - are counted, so the copy is rebuilt only after one.
struct Vu1WatchedRows
{
    uint32_t ranges = 0;              // in use
    uint32_t first[4] = {}, end[4] = {}; // quadwords [first, end)
    uint32_t writes = 0;              // writes that touched a range (or may have)

    void watch(uint32_t from, uint32_t to)
    {
        if (ranges < 4u)
        {
            first[ranges] = from;
            end[ranges] = to;
            ++ranges;
        }
    }
    // `count` quadwords from q, wrapping at 1024 as VU1 addresses do.
    void note(uint32_t q, uint32_t count)
    {
        if (ranges == 0u || count == 0u)
            return;
        if (count >= 1024u)
        {
            ++writes;
            return;
        }
        q &= 1023u;
        const uint32_t qEnd = q + count; // past 1024: the rest wraps to 0
        for (uint32_t i = 0; i < ranges; ++i)
            if ((q < end[i] && first[i] < qEnd) || (qEnd > 1024u && first[i] < qEnd - 1024u))
            {
                ++writes;
                return;
            }
    }
    // A store of `bytes` at byte offset `offset` of VU1 data memory.
    void noteBytes(uint32_t offset, uint32_t bytes) { note(offset / 16u, (offset + bytes - 1u) / 16u - offset / 16u + 1u); }
    // Anything may have been written (a microprogram ran).
    void noteAll()
    {
        if (ranges != 0u)
            ++writes;
    }
};
extern Vu1WatchedRows g_vu1WatchedRows; // ps2_memory.cpp

// Quadwords from its start an UNPACK of `writes` vectors covers (STCYCL CL/WL).
inline uint32_t vu1UnpackSpan(uint32_t writes, uint32_t cl, uint32_t wl)
{
    if (writes == 0u)
        return 0u;
    if (cl == wl) // nothing skipped (nearly every UNPACK): no division
        return writes;
    return cl >= wl ? ((writes - 1u) / wl) * cl + (writes - 1u) % wl + 1u : writes;
}
