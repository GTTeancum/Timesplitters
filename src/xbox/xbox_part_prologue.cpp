// partGfx prologue tokens (make TS_NATIVE_MODELS=1, Xbox only; see
// xbox_model_cache.h).
//
// Before each model's CALL, partGfx puts three REF tags in the display list
// (two static VIF headers and the model's matrix), or nine when the model is
// lit (the light headers and the instance's two light blocks). The patched
// partGfx writes one QWC-0 REF in their place: its ADDR field names a record
// here holding the three data addresses, and the walker appends the same
// payloads (the headers and data where they lie) when it reaches the token.
// The tags' upper halves (TTE) are left out but the token's own: partGfx never
// writes them, so they are the list's NOPs.
#include "xbox_model_cache.h"

#if TS_NATIVE_MODELS

namespace
{
    // The static headers (partGfx: lui 0x36 plus these offsets).
    constexpr uint32_t kHeaderMatrixA = 0x358FC0u, kHeaderMatrixB = 0x358FF0u;
    constexpr uint32_t kHeaderLight0 = 0x358F40u, kHeaderLight1 = 0x358F90u;
    constexpr uint32_t kHeaderLight2 = 0x358F70u, kHeaderLight3 = 0x358F80u;

    // Records stay until the ring comes round: several frames of lists (about
    // 1,200 models a frame at four players), so a list walked a frame late
    // still finds its records. A token whose record was overwritten expands to
    // nothing and is counted.
    constexpr uint32_t kRecords = 8192u;
    struct Record
    {
        uint32_t matrix, lightA, lightB, sequence;
    };
    Record g_records[kRecords];
    uint32_t g_sequence = 0;
    XboxPrologueStats g_stats;
}

uint32_t xboxPrologueRecord(uint32_t matrix, uint32_t lightA, uint32_t lightB)
{
    const uint32_t sequence = g_sequence++ & kXboxPrologueIndexMask;
    Record &record = g_records[sequence % kRecords];
    record.matrix = matrix;
    record.lightA = lightA;
    record.lightB = lightB;
    record.sequence = sequence;
    ++g_stats.tokens;
    return kXboxPrologueTag | sequence;
}

uint32_t xboxPrologueExpand(uint32_t addr, uint32_t addrs[9], uint32_t qwcs[9])
{
    if ((addr & ~kXboxPrologueIndexMask) != kXboxPrologueTag)
        return 0u;
    const uint32_t sequence = addr & kXboxPrologueIndexMask;
    const Record &record = g_records[sequence % kRecords];
    if (record.sequence != sequence)
    {
        ++g_stats.lost;
        return 0u;
    }
    ++g_stats.expanded;
    // The original tags' order (partGfx 0x261048-0x261180).
    uint32_t n = 0;
    auto add = [&](uint32_t a, uint32_t q)
    {
        addrs[n] = a;
        qwcs[n++] = q;
    };
    add(kHeaderMatrixA, 1u);
    add(record.matrix, 4u);
    add(kHeaderMatrixB, 1u);
    if (record.lightA != 0u)
    {
        add(kHeaderLight0, 1u);
        add(record.lightA, 4u);
        add(kHeaderLight1, 1u);
        add(kHeaderLight2, 1u);
        add(record.lightB, 4u);
        add(kHeaderLight3, 1u);
    }
    return n;
}

void xboxPrologueGetStats(XboxPrologueStats &out)
{
    out = g_stats;
}

#endif
