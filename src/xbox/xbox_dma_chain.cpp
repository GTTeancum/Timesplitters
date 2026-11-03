#include "xbox_dma_chain.h"

#if TS_DMA_CHAIN_CACHE
#include <atomic>
#include <cstddef>
#include <cstring>
#include <limits>

namespace
{
    using Splice = XboxDmaChainSplice;
    using Piece = Splice::Piece;
    constexpr uint32_t kWays = 2u, kSets = 16u, kEntries = kWays * kSets;

    struct Tag
    {
        uint32_t offset;
        uint8_t bytes[16];
    };
    struct Record
    {
        std::array<Tag, Splice::kMaxTags> tags;
        std::array<Piece, Splice::kMaxPieces> pieces;
        uint32_t address = 0, tagCount = 0, pieceCount = 0;
        uint32_t bytes = 0, lastTagUpper = 0, lastUse = 0;
        bool tte = false, valid = false;
    };
    struct State
    {
        std::atomic_flag busy = ATOMIC_FLAG_INIT;
        const uint8_t *rdram = nullptr;
        uint32_t ramBytes = 0, clock = 0;
        std::array<Record, kEntries> records{};
        XboxDmaChainStats stats;

        void setRam(const uint8_t *ram, uint32_t size)
        {
            if (rdram == ram && ramBytes == size)
                return;
            // No pointers into a record or payload escape Prepare. A reused
            // allocation with identical tags is also safe: its payload is
            // always resolved from the current base and read live.
            for (auto &record : records)
                record.valid = false;
            rdram = ram;
            ramBytes = size;
            clock = 0;
        }
    };
    static_assert(sizeof(State) <= 40u * 1024u, "bounded Xbox DMA metadata cache");

    // Startup-owned storage avoids a function-local static initialization
    // guard in the DMA path. The only run-time lock is the nonblocking flag.
    State s_cache;
    State &state() { return s_cache; }
    struct Guard
    {
        State &state;
        bool held;
        explicit Guard(State &value)
            : state(value), held(!value.busy.test_and_set(std::memory_order_acquire)) {}
        ~Guard()
        {
            if (held)
                state.busy.clear(std::memory_order_release);
        }
    };

    uint32_t word(const uint8_t *p)
    {
        uint32_t value;
        std::memcpy(&value, p, sizeof(value));
        return value;
    }

    bool inRam(uint32_t at, uint32_t bytes, uint32_t ramBytes)
    {
        return at <= ramBytes && bytes <= ramBytes - at;
    }

    bool appendPiece(Record &record, uint32_t at, uint32_t bytes,
                     uint32_t ramBytes)
    {
        if (bytes == 0u)
            return true;
        if (!inRam(at, bytes, ramBytes) ||
            bytes > std::numeric_limits<uint32_t>::max() - record.bytes)
            return false;
        if (record.pieceCount == Splice::kMaxPieces)
            return false;
        // Keep exactly the original nonempty TTE/payload append sequence.
        // Only the walk's addSegment may merge: its firstSegment condition
        // can suppress merging after a prior batch flush. Premerging here
        // would change later flush boundaries even when these bytes match.
        record.bytes += bytes;
        record.pieces[record.pieceCount++] = Piece{at, bytes};
        return true;
    }

    bool decode(const uint8_t *ram, uint32_t ramBytes, uint32_t address,
                bool tte, Record &record)
    {
        record.address = address;
        record.tte = tte;
        uint32_t at = address;
        for (uint32_t i = 0; i < Splice::kMaxTags; ++i)
        {
            if ((at & 15u) != 0u || !inRam(at, 16u, ramBytes))
                return false;
            Tag &tag = record.tags[i];
            tag.offset = at;
            std::memcpy(tag.bytes, ram + at, sizeof(tag.bytes));
            const uint32_t low = word(tag.bytes);
            const uint32_t id = (low >> 28u) & 7u;
            // IRQ behavior depends on TIE and may terminate the entire
            // transfer. All IRQ-bearing leaves stay on the original walk.
            if ((low & 0x80000000u) != 0u ||
                (id != 1u && id != 3u && id != 4u && id != 6u))
                return false;
            const uint32_t payloadBytes = (low & 0xFFFFu) * 16u;
            const uint32_t payload = (id == 3u || id == 4u)
                                         ? word(tag.bytes + 4u) & 0x7FFFFFFFu
                                         : at + 16u;
            // Keep alias translation and wrapping copies with appendData.
            // Zero-QWC REF addresses are unused in the original walk too.
            if ((tte && !appendPiece(record, at + 8u, 8u, ramBytes)) ||
                !appendPiece(record, payload, payloadBytes, ramBytes))
                return false;
            ++record.tagCount;
            record.lastTagUpper = (low >> 16u) & 0xFFFFu;
            if (id == 6u)
            {
                record.valid = true;
                return true;
            }
            // REF/REFS advance over the tag; CNT advances over its inline
            // payload too. These narrow forms only move forward, so no
            // nested-control or cycle assumptions are needed.
            at = id == 1u ? payload + payloadBytes : at + 16u;
        }
        return false;
    }

    bool stillCurrent(const uint8_t *ram, uint32_t ramBytes, const Record &record)
    {
        for (uint32_t i = 0; i < record.tagCount; ++i)
        {
            const Tag &tag = record.tags[i];
            if (!inRam(tag.offset, 16u, ramBytes) ||
                std::memcmp(ram + tag.offset, tag.bytes, sizeof(tag.bytes)) != 0)
                return false;
        }
        return true;
    }

    uint32_t firstSlot(uint32_t address, bool tte)
    {
        const uint32_t hash = (address >> 4u) ^ (address >> 11u) ^
                              (tte ? 0x9E3779B9u : 0u);
        return (hash & (kSets - 1u)) * kWays;
    }

    void expose(const Record &record, Splice &out)
    {
        std::memcpy(out.pieces.data(), record.pieces.data(),
                    std::size_t(record.pieceCount) * sizeof(Piece));
        out.pieceCount = record.pieceCount;
        out.tagCount = record.tagCount;
        out.bytes = record.bytes;
        out.lastTagUpper = record.lastTagUpper;
    }
}

bool xboxDmaChainPrepare(const uint8_t *rdram, uint32_t ramBytes,
                         uint32_t chainAddress, bool transferTagData,
                         uint32_t remainingTags, uint32_t remainingBytes,
                         XboxDmaChainSplice &out)
{
    if (!rdram || ramBytes < 16u || (chainAddress & 15u) != 0u ||
        !inRam(chainAddress, 16u, ramBytes) || remainingTags == 0u)
        return false;
    State &cache = state();
    Guard guard(cache);
    if (!guard.held)
        return false;
    cache.setRam(rdram, ramBytes);
    ++cache.stats.requests;
    const uint32_t first = firstSlot(chainAddress, transferTagData);
    Record *selected = nullptr;
    for (uint32_t i = first; i < first + kWays; ++i)
    {
        Record &record = cache.records[i];
        if (!record.valid || record.address != chainAddress || record.tte != transferTagData)
            continue;
        if (stillCurrent(rdram, ramBytes, record))
        {
            selected = &record;
            ++cache.stats.hits;
        }
        else
        {
            record.valid = false;
            ++cache.stats.changed;
        }
        break;
    }
    if (!selected)
    {
        Record candidate{};
        if (!decode(rdram, ramBytes, chainAddress, transferTagData, candidate))
        {
            ++cache.stats.declined;
            return false;
        }
        uint32_t victim = first;
        for (uint32_t i = first; i < first + kWays; ++i)
        {
            if (!cache.records[i].valid)
            {
                victim = i;
                break;
            }
            if (cache.records[i].lastUse < cache.records[victim].lastUse)
                victim = i;
        }
        cache.records[victim] = candidate;
        selected = &cache.records[victim];
        ++cache.stats.built;
    }
    selected->lastUse = ++cache.clock;
    if (selected->tagCount > remainingTags || selected->bytes > remainingBytes)
    {
        // Declining keeps the original partial-progress/exception point of
        // a chain that exceeds either budget; no bytes were appended here.
        ++cache.stats.declined;
        return false;
    }
    expose(*selected, out);
    cache.stats.admittedTags += selected->tagCount;
    cache.stats.admittedBytes += selected->bytes;
    return true;
}

bool xboxDmaChainGetStats(XboxDmaChainStats &out)
{
    out = {};
    State &cache = state();
    Guard guard(cache);
    if (!guard.held)
        return false;
    out = cache.stats;
    return true;
}
#else
bool xboxDmaChainPrepare(const uint8_t *, uint32_t, uint32_t, bool,
                         uint32_t, uint32_t, XboxDmaChainSplice &)
{
    return false;
}
bool xboxDmaChainGetStats(XboxDmaChainStats &out)
{
    out = {};
    return true;
}
#endif
