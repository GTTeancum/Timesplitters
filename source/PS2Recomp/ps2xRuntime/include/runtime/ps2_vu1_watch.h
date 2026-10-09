#pragma once

#include <cstdint>

// VU1 data rows a native microprogram keeps a derived copy of (the Xbox
// renderer's transform constants, project/game/vu1_native_ts.cpp). Writes
// that reach them from outside the native program - UNPACK, the interpreter
// and JIT, EE stores - are counted, so the copy is rebuilt only after one.
// Which watched rows were written is kept too (dirty: one bit a row, the
// ranges' rows in the order they were watched), so the copy can take just
// those; the consumer reads and clears it (takeDirty).
struct Vu1WatchedRows
{
    uint32_t ranges = 0;              // in use
    uint32_t first[4] = {}, end[4] = {}; // quadwords [first, end)
    uint32_t bit[4] = {}, bits = 0;   // range i's first row is dirty bit bit[i]; bits in use
    uint32_t writes = 0;              // writes that touched a range (or may have)
    uint64_t dirty = 0;               // rows written since takeDirty (or may have been)

    // Returns the range's first dirty bit (UINT32_MAX: not watched). Rows
    // past 64 bits in all are only counted: their writes mark every row.
    uint32_t watch(uint32_t from, uint32_t to)
    {
        if (ranges >= 4u)
            return UINT32_MAX;
        first[ranges] = from;
        end[ranges] = to;
        bit[ranges] = bits;
        bits += to - from;
        return bit[ranges++];
    }
    uint64_t allRows() const { return bits >= 64u ? ~0ull : (1ull << bits) - 1u; }
    // Dirty bits of range i's rows [from, to) (inside it).
    uint64_t rowBits(uint32_t i, uint32_t from, uint32_t to) const
    {
        const uint32_t at = bit[i] + (from - first[i]), count = to - from;
        if (at + count > 64u)
            return allRows();
        return (count >= 64u ? ~0ull : (1ull << count) - 1u) << at;
    }
    // The dirty bit (or bits) of row q (0: not watched).
    uint64_t rowBit(uint32_t q) const
    {
        for (uint32_t i = 0; i < ranges; ++i)
            if (q >= first[i] && q < end[i])
                return rowBits(i, q, q + 1u);
        return 0u;
    }
    // `count` quadwords from q, wrapping at 1024 as VU1 addresses do.
    void note(uint32_t q, uint32_t count)
    {
        if (ranges == 0u || count == 0u)
            return;
        if (count >= 1024u)
        {
            ++writes;
            dirty = allRows();
            return;
        }
        q &= 1023u;
        const uint32_t qEnd = q + count; // past 1024: the rest wraps to 0
        bool hit = false;
        for (uint32_t i = 0; i < ranges; ++i)
        {
            if (q < end[i] && first[i] < qEnd)
            {
                hit = true;
                dirty |= rowBits(i, q > first[i] ? q : first[i], qEnd < end[i] ? qEnd : end[i]);
            }
            if (qEnd > 1024u && first[i] < qEnd - 1024u)
            {
                hit = true;
                dirty |= rowBits(i, first[i], qEnd - 1024u < end[i] ? qEnd - 1024u : end[i]);
            }
        }
        if (hit)
            ++writes;
    }
    // A store of `bytes` at byte offset `offset` of VU1 data memory.
    void noteBytes(uint32_t offset, uint32_t bytes) { note(offset / 16u, (offset + bytes - 1u) / 16u - offset / 16u + 1u); }
    // Anything may have been written (a microprogram ran).
    void noteAll()
    {
        if (ranges != 0u)
        {
            ++writes;
            dirty = allRows();
        }
    }
    // The rows written since the last call; none until the next write.
    uint64_t takeDirty()
    {
        const uint64_t rows = dirty;
        dirty = 0;
        return rows;
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
