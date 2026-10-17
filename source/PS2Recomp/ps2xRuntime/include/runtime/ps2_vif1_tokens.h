#pragma once
// The host token ring of the VIF/DMA spine (src/xbox/PUSH-BC-PLAN.md section
// 2, D1; section 5.7; owned by C-VIF). A token stands in the chain walk's
// piece list for something the decoder runs natively at that point of the
// list: a CALL to a registered static chain (the chain walker intercepts
// the CALL and appends one token piece instead of the chain's pieces) or an
// in-list token tag (a REF with QWC 0 and ADDR 0x7FE00000 | slot that a
// native wrote in place of its packets). The piece is 16 bytes of host
// memory in this ring, so the decoder recognises a token by its pointer
// (the start of a ring entry), never by a value, and the entry behind the
// piece holds the Vif1Token the records engine filled (ps2_vif1_records.h).
// Entries are 32 bytes apart: a token piece is never contiguous with a
// neighbour, so the walk's piece merging (addSegment) cannot join it to one,
// and the walk adds it with emplace_back, never through addSegment.
//
// The ring is used in order and reset when the pending VIF1 transfers have
// been drained (processPendingTransfers): a token lives from its walk to its
// decode. A token the decoder never reached (the chain ended inside a
// command before it, or an END cut the list short) is counted as a drop
// when the ring resets; a chain whose walk finds the ring full is spliced
// (its cached pieces) instead.
//
// TS_NATIVE_RECORDS 1 (default): the walker's CALL admission, the in-list
// token tags and the decoder's token execution are compiled in; the knob
// `records` (project/game/ts_record_cache.cpp) chooses the level at run time
// (0, the default, walks every CALL as before, and nothing makes a token).
// 0: none of it is compiled, the spine is as it was before Push C.
#include "ps2_vif1_records.h"
#include "ps2_render_counters.h"

#include <cstddef>
#include <cstdint>

#ifndef TS_NATIVE_RECORDS
#define TS_NATIVE_RECORDS 1
#endif
// TS_VU1_DEBT_SITES 1: the decoder calls the D2 debt hooks (debtBeforeWrite
// at every UNPACK destination, debtBeforeProgram before a program that is
// not part of a record and before MSCNT / processVIF1Data, listEnd at a
// chain's end) when they are set. 0 (default until C-XF's R2 lands): the
// sites are not compiled, the decoder pays nothing for them.
#ifndef TS_VU1_DEBT_SITES
#define TS_VU1_DEBT_SITES 0
#endif

#if defined(PLATFORM_XBOX) && TS_NATIVE_RECORDS
struct Vif1TokenEntry
{
    uint8_t piece[16]; // the 16 bytes the decoder is handed: four VIF NOPs (read as data only when it cannot be run or expanded)
    Vif1Token token;   // what the piece stands for
};
static_assert(sizeof(Vif1Token) == 16u, "Vif1Token is 16 bytes on the Xbox (32-bit pointers)");
static_assert(sizeof(Vif1TokenEntry) == 32u, "token ring entries are 32 bytes apart");

struct Vif1TokenRing
{
    // 1,024 tokens per drain: the heavy 1P stretch has about 266 registered
    // CALLs a frame, one list kick a drain (32 KB).
    static constexpr uint32_t kEntries = 1024u;
    alignas(32) Vif1TokenEntry entries[kEntries];
    uint32_t next = 0;     // entries taken since the last reset
    uint32_t executed = 0; // tokens the decoder consumed (run, expanded or read as NOPs; dry decodes not counted)

    // The entry whose piece starts at p (null: p is not a token piece's
    // start; a pointer inside or just past one is not a token either).
    const Vif1TokenEntry *entryOf(const uint8_t *p) const
    {
        const uintptr_t at = reinterpret_cast<uintptr_t>(p) - reinterpret_cast<uintptr_t>(entries);
        return at < sizeof(entries) && (at % sizeof(Vif1TokenEntry)) == 0u ? entries + at / sizeof(Vif1TokenEntry)
                                                                           : nullptr;
    }
    bool full() const { return next == kEntries; }
    uint32_t pending() const { return next; }
    // Chain tokens stop at three quarters: a chain the ring cannot take is
    // spliced instead, but an in-list token tag stands for packets that are
    // not in the list, so the rest is kept for them (a list buffer's run
    // table holds 256, ts_list_tokens.cpp).
    static constexpr uint32_t kChainEntries = kEntries - 256u;
    Vif1TokenEntry *takeChain() { return next < kChainEntries ? take() : nullptr; }
    // The next free entry (null: full), its piece bytes four NOPs.
    Vif1TokenEntry *take()
    {
        if (next >= kEntries)
            return nullptr;
        Vif1TokenEntry *entry = &entries[next++];
        for (uint8_t &b : entry->piece)
            b = 0u;
        return entry;
    }
    // The drain is over: what was taken and not consumed is a drop.
    uint32_t reset()
    {
        const uint32_t dropped = next > executed ? next - executed : 0u;
        next = 0;
        executed = 0;
        return dropped;
    }
};
extern Vif1TokenRing g_vif1Tokens; // ps2_memory.cpp

// True while a self-check decodes a chain dry (vif1SelfCheck in
// ps2_memory.cpp, the record self-check's old path): the decoder expands
// every chain token into its pieces instead of running it, and reads a list
// token as its four NOPs, so every dry decode of the chain sees the same
// stream and vifdiff keeps its meaning.
extern bool g_vif1DryDecode;

// The pieces' byte total (what a token's expansion adds to a reader).
inline uint32_t vif1PiecesTotal(const Vif1Piece *pieces, size_t count)
{
    uint32_t bytes = 0;
    for (size_t i = 0; i < count; ++i)
        bytes += pieces[i].second;
    return bytes;
}
#endif
