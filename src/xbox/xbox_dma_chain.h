#pragma once
// Xbox-only reuse of already decoded leaf DMA subchains. Payloads remain in
// live guest RAM; only exact tag bytes and physical piece offsets are cached.
#include <array>
#include <cstdint>

#ifndef TS_DMA_CHAIN_CACHE
#define TS_DMA_CHAIN_CACHE 1
#endif

struct XboxDmaChainSplice
{
    static constexpr uint32_t kMaxTags = 32u;
    static constexpr uint32_t kMaxPieces = kMaxTags * 2u;
    struct Piece
    {
        uint32_t offset, bytes;
    };
    // Unused slots are never read. Keep raw TTE/payload appends in order;
    // only the original walk may coalesce them. The result owns offsets
    // instead of borrowing a cache record another admission could replace.
    std::array<Piece, kMaxPieces> pieces;
    uint32_t pieceCount = 0, tagCount = 0, bytes = 0, lastTagUpper = 0;
};

struct XboxDmaChainStats
{
    uint64_t requests = 0, hits = 0, built = 0, changed = 0, declined = 0;
    uint64_t admittedTags = 0, admittedBytes = 0;
};

// Call only after the original CALL has pushed ASR/ASP and emitted its own
// TTE/payload. Accepts main-RAM, aligned REF/REFS/CNT tags ending in RET;
// no IRQ, nested control flow, scratchpad, alias or wrapping payload.
//
// Every cached 16-byte tag is checked against the current RAM before any
// output is exposed. The complete subchain and both remaining budgets must
// be admitted first. False leaves out and all guest/decoder state unchanged.
// True returns an owning, bounded list to feed to the existing addSegment;
// the caller must guarantee no decoder/guest callback while appending it,
// then applies exactly one RET using its live return stack. In batch mode
// reserve the conservative 2 * tagCount raw piece slots without relying on
// coalescing: the original walk can suppress it after an earlier batch flush.
bool xboxDmaChainPrepare(const uint8_t *rdram, uint32_t ramBytes,
                         uint32_t chainAddress, bool transferTagData,
                         uint32_t remainingTags, uint32_t remainingBytes,
                         XboxDmaChainSplice &out);

// A nonblocking snapshot. False means a lookup is using the cache; out is
// cleared in that case. These are admissions, not execution/FPS evidence.
bool xboxDmaChainGetStats(XboxDmaChainStats &out);
