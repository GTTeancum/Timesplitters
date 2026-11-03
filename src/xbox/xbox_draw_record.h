#pragma once
// Side descriptors for the Xbox's original partGfx CALLs and REF groups. Guest list
// bytes stay unchanged; these records offer checked DMA/VIF shortcuts.
#include <cstdint>

#ifndef TS_DRAW_RECORDS
#define TS_DRAW_RECORDS 1
#endif

struct XboxDrawRecordChain
{
    static constexpr uint32_t kRamBytes = 32u * 1024u * 1024u;
    static constexpr uint32_t kMaxTags = 32u;
    static constexpr uint32_t kMaxPieces = kMaxTags * 2u;
    static constexpr uint32_t kMaxBytes = 256u * 1024u;
    struct Piece { uint32_t offset, bytes; };

    // Identifies one unchanged leaf descriptor. Re-observing that leaf at a
    // different live CALL retains this serial and replaces caller identity.
    uint64_t generation = 0;
    // For an observed linear REF group, callAddress names its first REF
    // tag. No synthetic CALL or RET is added to the original guest list.
    uint32_t callAddress = 0, chainAddress = 0, totalBytes = 0;
    uint32_t pieceCount = 0, tagCount = 0;
    Piece pieces[kMaxPieces];
};

// Called after partGfx has completed its original zero-QWC precalc CALL.
// Records an exact caller hint and reads one first leaf header to index a
// nonempty payload entry. No leaf walk occurs during list assembly.
// Unsupported/cache misses never alter guest data or state. Storage is
// bounded to 256 origin hints, 16 lazy descriptors and 16 pointer queries,
// with <= 40 KiB of metadata. Shared payload entries retain all origins
// still present in the hint table, with a bounded ordered candidate scan.
void xboxDrawRecordNotePrecalc(const uint8_t *rdram, uint32_t callAddress);
// Same contract for the instance-buffer CALL completed at guest 0x261c90.
// Its mutable relit color payloads are always read live by the consumer.
void xboxDrawRecordNoteDbuf(const uint8_t *rdram, uint32_t callAddress);
// Observe one fully completed iteration of the three per-frame REF loops.
// [firstTagAddress,endTagAddress) is an aligned, bounded sequence of REF
// tags only; variant is 0, 1 or 2. Only the first tag is read at observation.
void xboxDrawRecordNoteRefs(const uint8_t *rdram, uint32_t firstTagAddress,
                            uint32_t endTagAddress, uint32_t variant);

// A hint constructs a descriptor at its first TTE word (chainAddress + 8)
// or its indexed first payload. Those candidates retain or omit tag data,
// respectively; only the consumer's full live-reader proof can accept the
// inferred transport. Shared starts and TTE/payload collisions may try up
// to 32 candidates, each without effects on rejection. Later data may
// identify a unique occurrence inside a resident descriptor. An interior
// miss retains the original decoder. Every current origin and leaf tag
// is checked before the callback. Changed resident leaf
// tags decline that lookup; a later origin-entry lookup may rebuild only while
// its origin hint is still exact. Changed origin bytes retire both transport
// descriptors and require a fresh Note, even if its hint was already evicted.
// A changed first payload address may miss until another Note reindexes it.
// A separate nonblocking lease pins descriptor metadata throughout the
// callback; reentrant requests decline. No descriptor pointer may escape.
//
// The consumer must prove that its live reader has the same source-address
// sequence and admit its entire prefix before changing any VIF/GS state or
// reader position. False means no such effects and permits the original
// decoder immediately. All source payload values must be read live.
using XboxDrawRecordConsumer = bool (*)(const XboxDrawRecordChain &,
                                        const uint8_t *rdram, void *user);
bool xboxDrawRecordWithChain(const uint8_t *rdram, const uint8_t *data,
                            XboxDrawRecordConsumer consumer, void *user);

struct XboxDrawRecordDmaSpan
{
    // Own the raw append sequence: no descriptor or payload pointer escapes
    // the cache lease. The original addSegment still controls coalescing.
    XboxDrawRecordChain chain;
    uint32_t endAddress = 0, lastTagUpper = 0;
};

// At an untouched DMA tag, reuse only an exactly observed linear REF span.
// The actual CHCR.TTE mode selects its representation; no payload-pointer
// candidates or synthetic CALL/RET are needed. All origin/tag bytes and both
// remaining budgets are checked before exposing output. No IRQ, non-REF,
// noncanonical nonempty payload, wrap or unobserved span can be admitted.
// Changed resident tags decline this lookup; an exact surviving origin may
// rebuild later. False leaves out, guest state and the pending stream intact.
//
// Call before incrementing the current tag's control-state count. The caller
// must reserve 2 * chain.tagCount raw batch slots before appending, so no
// decoder/guest callback occurs between validation and the final append.
// Append raw pieces through the original addSegment, add chain.tagCount to
// both tag counts, set the next tag address to endAddress and update
// lastTagUpper, then continue the original loop. REF spans never change
// ASR/ASP. Keep detailed tag counters
// and zero-TTE suppression on the original walk.
bool xboxDrawRecordPrepareRefs(const uint8_t *rdram, uint32_t ramBytes,
                               uint32_t firstTagAddress, bool transferTagData,
                               uint32_t remainingTags, uint32_t remainingBytes,
                               XboxDrawRecordDmaSpan &out);

// Resets are optional invalidation hints. Exact live bytes and RAM identity
// remain mandatory even when callers do not have a lifecycle notification.
void xboxDrawRecordReset();

struct XboxDrawRecordStats
{
    uint64_t notes = 0, created = 0, reused = 0, rejected = 0;
    uint64_t notesPrecalc = 0, notesDbuf = 0;
    uint64_t notesRef[3] = {};
    uint64_t lookups = 0, hits = 0, misses = 0, changed = 0;
    uint64_t hintHits = 0, consumers = 0, accepted = 0;
    uint64_t payloadLookups = 0, candidates = 0, candidateLimits = 0;
    uint64_t transportAccepted[2] = {}; // [0] payload-only, [1] includes TTE
    // DMA descriptor admissions, separate from VIF consumer execution. A
    // caller may still decline a prepared span for insufficient batch slots.
    uint64_t dmaLookups = 0, dmaAccepted = 0, dmaMisses = 0;
    uint64_t dmaTags = 0, dmaBytes = 0;
    uint32_t busy = 0;
};
bool xboxDrawRecordGetStats(XboxDrawRecordStats &out);
