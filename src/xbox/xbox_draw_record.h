#pragma once
// Side descriptors for the Xbox's original partGfx precalc/Dbuf CALLs. Guest list
// bytes stay unchanged; these records only offer a checked decoder shortcut.
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
    uint32_t callAddress = 0, chainAddress = 0, totalBytes = 0;
    uint32_t pieceCount = 0, tagCount = 0;
    Piece pieces[kMaxPieces];
};

// Called after partGfx has completed its original zero-QWC precalc CALL.
// Records only a cheap exact caller hint; no leaf walk occurs while the
// display list is being assembled. Unsupported/cache misses never alter
// guest data or state. Storage is bounded to 256 two-way caller hints, 16
// lazy leaf descriptors and 16 pointer queries, with <= 40 KiB of metadata.
void xboxDrawRecordNotePrecalc(const uint8_t *rdram, uint32_t callAddress);
// Same contract for the instance-buffer CALL completed at guest 0x261c90.
// Its mutable relit color payloads are always read live by the consumer.
void xboxDrawRecordNoteDbuf(const uint8_t *rdram, uint32_t callAddress);

// A hint can construct its full leaf descriptor when data identifies that
// leaf's first TTE word (chainAddress + 8). Later data may identify one
// unique logical occurrence inside a resident record's raw TTE/payload
// pieces. An interior miss retains the original decoder. Every current
// CALL and leaf tag is checked before the callback. Changed resident leaf
// tags decline that lookup; a later first-TTE lookup may rebuild only while
// its caller hint is still exact. Changed caller bytes require a fresh Note.
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

// Resets are optional invalidation hints. Exact live bytes and RAM identity
// remain mandatory even when callers do not have a lifecycle notification.
void xboxDrawRecordReset();

struct XboxDrawRecordStats
{
    uint64_t notes = 0, created = 0, reused = 0, rejected = 0;
    uint64_t notesPrecalc = 0, notesDbuf = 0;
    uint64_t lookups = 0, hits = 0, misses = 0, changed = 0;
    uint64_t hintHits = 0, consumers = 0, accepted = 0;
    uint32_t busy = 0;
};
bool xboxDrawRecordGetStats(XboxDrawRecordStats &out);
