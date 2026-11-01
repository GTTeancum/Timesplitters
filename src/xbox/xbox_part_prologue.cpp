// partGfx list tokens (make TS_NATIVE_MODELS=1, Xbox only; see
// xbox_model_cache.h).
//
// partGfx builds each model's piece of the display list from REF tags: a
// prologue before the model's CALL (static VIF headers, the matrices, and
// when lit the light headers and blocks), and on the REF routes a run of
// REFs per batch of the model's arrays. The patched partGfx writes one QWC-0
// REF in place of each such sequence: its ADDR field names a record here
// that lists the sequence's (address, QWC) pairs, and the DMA walker appends
// the same payloads in the same order when it reaches the token. The tags'
// upper halves (TTE) are left out but the token's own: partGfx never writes
// them, so they are the list's NOPs.
//
// Records are variable-length runs of pairs in one ring, contiguous for the
// walker (a run that would wrap is moved to the ring's start). Each closed
// record gets the next sequence number, which the token carries; a token
// whose record was overwritten (by the ring or the index coming round)
// expands to nothing and is counted.
#include "xbox_model_cache.h"

#if TS_NATIVE_MODELS

#include <cstring>

namespace
{
    // The static headers (partGfx: lui 0x36 plus these offsets).
    constexpr uint32_t kHeaderMatrixA = 0x358FC0u, kHeaderMatrixB = 0x358FF0u;
    constexpr uint32_t kHeaderLight0 = 0x358F40u, kHeaderLight1 = 0x358F90u;
    constexpr uint32_t kHeaderLight2 = 0x358F70u, kHeaderLight3 = 0x358F80u;

    // Records stay until the ring comes round: several frames of lists (about
    // 1,200 models a frame at four players, 3 to 21 pairs a prologue and 12
    // to 14 a batch), so a list walked a frame late still finds its records.
    constexpr uint32_t kPairs = 1u << 16;  // 512 KB
    constexpr uint32_t kRecords = 1u << 14; // divides 2^24: the index survives the sequence's wrap
    // A run longer than this closes at its next batch (partGfx then opens
    // another token after it); one that reaches kPairs / 2 is dropped.
    constexpr uint32_t kRunLimit = 4096u;
    struct Record
    {
        uint32_t sequence, start, count;
    };
    XboxPrologueRef g_pairs[kPairs];
    Record g_records[kRecords];
    uint32_t g_written = 0; // pairs ever written (the ring position is this modulo kPairs)
    uint32_t g_open = 0;    // the open record's first pair (the same count)
    bool g_broken = false;  // the open record outgrew the ring
    uint32_t g_sequence = 0;
    XboxPrologueStats g_stats;
}

void xboxPrologueOpen()
{
    g_open = g_written;
    g_broken = false;
}

void xboxPrologueRef(uint32_t addr, uint32_t qwc)
{
    const uint32_t count = g_written - g_open;
    if (count >= kPairs / 2u)
    {
        g_broken = true;
        return;
    }
    uint32_t position = g_written & (kPairs - 1u);
    if (position == 0u && count != 0u)
    {
        // The record would wrap: its pairs so far move to the ring's start
        // (over the oldest records), so the walker reads it in one piece.
        std::memmove(&g_pairs[0], &g_pairs[g_open & (kPairs - 1u)], count * sizeof(XboxPrologueRef));
        g_open = g_written;
        g_written += count;
        position = count;
    }
    // As the walker reads the tag: ADDR bits 0-30, QWC bits 0-15.
    g_pairs[position].addr = addr & 0x7FFFFFFFu;
    g_pairs[position].qwc = qwc & 0xFFFFu;
    ++g_written;
}

bool xboxPrologueFull()
{
    return g_written - g_open >= kRunLimit;
}

uint32_t xboxPrologueClose()
{
    const uint32_t count = g_written - g_open;
    if (count == 0u && !g_broken)
        return 0u;
    const uint32_t sequence = g_sequence++ & kXboxPrologueIndexMask;
    Record &record = g_records[sequence % kRecords];
    record.sequence = g_broken ? ~0u : sequence; // a dropped record expands to nothing
    record.start = g_open;
    record.count = count;
    g_open = g_written;
    g_broken = false;
    ++g_stats.tokens;
    g_stats.refs += count;
    return kXboxPrologueTag | sequence;
}

uint32_t xboxPrologueRecord(uint32_t matrix, uint32_t lightA, uint32_t lightB)
{
    // The original tags' order (partGfx 0x261048-0x261180).
    xboxPrologueOpen();
    xboxPrologueRef(kHeaderMatrixA, 1u);
    xboxPrologueRef(matrix, 4u);
    xboxPrologueRef(kHeaderMatrixB, 1u);
    if (lightA != 0u)
    {
        xboxPrologueRef(kHeaderLight0, 1u);
        xboxPrologueRef(lightA, 4u);
        xboxPrologueRef(kHeaderLight1, 1u);
        xboxPrologueRef(kHeaderLight2, 1u);
        xboxPrologueRef(lightB, 4u);
        xboxPrologueRef(kHeaderLight3, 1u);
    }
    return xboxPrologueClose();
}

const XboxPrologueRef *xboxPrologueExpand(uint32_t addr, uint32_t &count)
{
    count = 0u;
    if ((addr & ~kXboxPrologueIndexMask) != kXboxPrologueTag)
        return nullptr;
    const uint32_t sequence = addr & kXboxPrologueIndexMask;
    const Record &record = g_records[sequence % kRecords];
    // Lost: the index entry was reused, or the ring has written past the
    // record's first pair since (it wrote them in order, so the rest too).
    if (record.sequence != sequence || g_written - record.start > kPairs)
    {
        ++g_stats.lost;
        return nullptr;
    }
    ++g_stats.expanded;
    count = record.count;
    return &g_pairs[record.start & (kPairs - 1u)];
}

void xboxPrologueGetStats(XboxPrologueStats &out)
{
    out = g_stats;
}

#endif
