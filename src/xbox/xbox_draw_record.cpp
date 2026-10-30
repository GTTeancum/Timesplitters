#include "xbox_draw_record.h"

#if TS_DRAW_RECORDS
#include <atomic>
#include <cstddef>
#include <cstring>
#include <limits>

namespace
{
    using Chain = XboxDrawRecordChain;
    constexpr uint32_t kRecords = 16u, kQueries = 16u, kAbsent = kRecords;
    constexpr uint32_t kHintSets = 128u, kHintWays = 2u;
    struct ObservedCall
    {
        uint32_t callAddress = 0, chainAddress = 0;
        uint8_t bytes[16];
    };
    struct Hint
    {
        ObservedCall call;
        bool valid = false;
    };
    struct Tag
    {
        uint32_t address;
        uint8_t bytes[16];
    };
    struct Record
    {
        Chain chain;
        Tag tags[Chain::kMaxTags];
        uint8_t caller[16];
        bool valid = false;
    };
    struct Query
    {
        uint32_t offset = 0, slot = kAbsent;
        uint64_t generation = 0;
        bool valid = false;
    };
    struct State
    {
        std::atomic_flag busy = ATOMIC_FLAG_INIT;
        const uint8_t *ram = nullptr; // allocation identity, never a payload borrow
        uint64_t serial = 0;
        uint32_t replacement = 0, last = kAbsent;
        Record records[kRecords]{};
        Query queries[kQueries]{};
        Hint hints[kHintSets * kHintWays]{};
        uint8_t nextHintWay[kHintSets]{};
        XboxDrawRecordStats stats;
    };
    static_assert(sizeof(State) <= 40u * 1024u, "bounded draw-call side metadata");
    State state;
    std::atomic<uint32_t> busyCount{0};

    struct Lease
    {
        bool held;
        Lease() : held(!state.busy.test_and_set(std::memory_order_acquire))
        {
            if (!held) busyCount.fetch_add(1u, std::memory_order_relaxed);
        }
        ~Lease() { if (held) state.busy.clear(std::memory_order_release); }
    };

    uint32_t word(const uint8_t *data)
    {
        uint32_t value;
        std::memcpy(&value, data, sizeof(value));
        return value;
    }
    bool within(uint32_t address, uint32_t bytes)
    {
        return address <= Chain::kRamBytes && bytes <= Chain::kRamBytes - address;
    }
    void clearQueries()
    {
        for (auto &query : state.queries) query.valid = false;
        state.last = kAbsent;
    }
    void clearRecords()
    {
        for (auto &record : state.records) record.valid = false;
        for (auto &hint : state.hints) hint.valid = false;
        for (auto &way : state.nextHintWay) way = 0;
        clearQueries();
        state.replacement = 0;
    }
    void selectRam(const uint8_t *ram)
    {
        if (state.ram == ram) return;
        clearRecords();
        state.ram = ram;
        // Serial is deliberately never reused, even for another allocation.
    }
    bool append(Record &record, uint32_t address, uint32_t bytes)
    {
        if (!bytes) return true;
        auto &chain = record.chain;
        if (!within(address, bytes) || chain.pieceCount == Chain::kMaxPieces ||
            bytes > Chain::kMaxBytes - chain.totalBytes)
            return false;
        chain.pieces[chain.pieceCount++] = {address, bytes};
        chain.totalBytes += bytes;
        return true;
    }
    bool readCaller(const uint8_t *ram, uint32_t callAddress, ObservedCall &observed)
    {
        if (!ram || (callAddress & 15u) || !within(callAddress, 16u)) return false;
        std::memcpy(observed.bytes, ram + callAddress, sizeof(observed.bytes));
        const uint32_t call = word(observed.bytes);
        // The observer knows the exact production origin; zero QWC and an
        // ordinary CALL ensure its own list position remains unchanged.
        if (((call >> 28u) & 7u) != 5u || (call & 0x8000FFFFu)) return false;
        const uint32_t target = word(observed.bytes + 4u) & 0x7FFFFFFFu;
        if ((target & 15u) || !within(target, 16u)) return false;
        observed.callAddress = callAddress;
        observed.chainAddress = target;
        return true;
    }
    void copyCaller(Record &record, const ObservedCall &observed)
    {
        record.chain.callAddress = observed.callAddress;
        record.chain.chainAddress = observed.chainAddress;
        std::memcpy(record.caller, observed.bytes, sizeof(record.caller));
    }
    uint32_t hintSet(uint32_t chainAddress)
    {
        return ((chainAddress >> 4u) ^ (chainAddress >> 11u)) & (kHintSets - 1u);
    }
    Hint *findHint(uint32_t chainAddress)
    {
        const uint32_t first = hintSet(chainAddress) * kHintWays;
        for (uint32_t i = first; i < first + kHintWays; ++i)
            if (state.hints[i].valid && state.hints[i].call.chainAddress == chainAddress)
                return &state.hints[i];
        return nullptr;
    }
    bool describeLeaf(const uint8_t *ram, Record &record)
    {
        auto &chain = record.chain;
        uint32_t address = chain.chainAddress;
        for (uint32_t i = 0; i < Chain::kMaxTags; ++i)
        {
            if ((address & 15u) || !within(address, 16u)) return false;
            Tag &tag = record.tags[i];
            tag.address = address;
            std::memcpy(tag.bytes, ram + address, sizeof(tag.bytes));
            const uint32_t low = word(tag.bytes);
            const uint32_t id = (low >> 28u) & 7u;
            if ((low & 0x80000000u) || (id != 1u && id != 3u && id != 4u && id != 6u))
                return false;
            const uint32_t bytes = (low & 0xFFFFu) * 16u;
            const uint32_t payload = id == 3u || id == 4u
                                         ? word(tag.bytes + 4u) & 0x7FFFFFFFu
                                         : address + 16u;
            // Preserve raw TTE/payload order. Actual DMA and its original
            // coalescing still run; the decoder later proves the live prefix.
            if (!append(record, address + 8u, 8u) || !append(record, payload, bytes))
                return false;
            ++chain.tagCount;
            if (id == 6u)
            {
                record.valid = true;
                return true;
            }
            address = id == 1u ? payload + bytes : address + 16u;
        }
        return false;
    }
    bool leafCurrent(const Record &record, const uint8_t *ram)
    {
        for (uint32_t i = 0; i < record.chain.tagCount; ++i)
            if (std::memcmp(record.tags[i].bytes, ram + record.tags[i].address, 16u)) return false;
        return true;
    }
    bool containsOnce(const Chain &chain, uint32_t offset)
    {
        bool found = false;
        for (uint32_t i = 0; i < chain.pieceCount; ++i)
        {
            const auto &piece = chain.pieces[i];
            if (offset >= piece.offset && offset - piece.offset < piece.bytes)
            {
                if (found) return false;
                found = true;
            }
        }
        return found;
    }
    uint32_t queryIndex(uint32_t offset)
    {
        return ((offset >> 2u) ^ (offset >> 10u)) & (kQueries - 1u);
    }
    uint32_t lazyRecord(const uint8_t *ram, uint32_t offset)
    {
        // Only the first TTE word supplies an unambiguous leaf entry point.
        // An interior pointer without a resident descriptor keeps the old
        // decoder; no backward scan guesses where guest commands began.
        if ((offset & 15u) != 8u) return kAbsent;
        Hint *hint = findHint(offset - 8u);
        if (!hint) return kAbsent;
        if (std::memcmp(hint->call.bytes, ram + hint->call.callAddress, 16u))
        {
            hint->valid = false;
            ++state.stats.changed;
            return kAbsent;
        }
        Record candidate{};
        copyCaller(candidate, hint->call);
        if (state.serial == std::numeric_limits<uint64_t>::max() || !describeLeaf(ram, candidate))
        {
            // The immutable caller hint alone never authorizes a prefix.
            // A later Note may retry a chain that has since been rebuilt.
            hint->valid = false;
            ++state.stats.rejected;
            return kAbsent;
        }
        uint32_t slot = state.replacement++ & (kRecords - 1u);
        for (uint32_t i = 0; i < kRecords; ++i)
            if (!state.records[i].valid) { slot = i; break; }
        candidate.chain.generation = ++state.serial;
        state.records[slot] = candidate;
        // A new descriptor may cover earlier negative interior queries.
        clearQueries();
        ++state.stats.created;
        return containsOnce(state.records[slot].chain, offset) ? slot : kAbsent;
    }
}
#endif

static void noteCall(const uint8_t *rdram, uint32_t callAddress, bool dbuf)
{
#if TS_DRAW_RECORDS
    if (!rdram) return;
    Lease lease;
    if (!lease.held) return;
    selectRam(rdram);
    ++state.stats.notes;
    if (dbuf) ++state.stats.notesDbuf;
    else ++state.stats.notesPrecalc;
    ObservedCall observed{};
    if (!readCaller(rdram, callAddress, observed))
    {
        ++state.stats.rejected;
        return;
    }
    Hint *hint = findHint(observed.chainAddress);
    if (hint)
        ++state.stats.reused;
    else
    {
        const uint32_t set = hintSet(observed.chainAddress);
        const uint32_t first = set * kHintWays;
        uint32_t slot = first + state.nextHintWay[set];
        for (uint32_t i = first; i < first + kHintWays; ++i)
            if (!state.hints[i].valid) { slot = i; break; }
        state.nextHintWay[set] ^= 1u;
        hint = &state.hints[slot];
    }
    hint->call = observed;
    hint->valid = true;
    // Do not walk any leaf while partGfx is assembling the list. A small
    // caller hint survives more distinct draws than the full descriptor
    // cache, and the first consumer constructs only records it reaches.
    for (auto &record : state.records)
    {
        if (record.valid && record.chain.chainAddress == observed.chainAddress)
        {
            // The leaf serial remains conditional on its exact tag check
            // at the next lease. No unchecked metadata reaches a consumer.
            copyCaller(record, observed);
            break;
        }
    }
    const uint32_t firstOffset = observed.chainAddress + 8u;
    Query &query = state.queries[queryIndex(firstOffset)];
    if (query.valid && query.offset == firstOffset && query.slot == kAbsent)
        query.valid = false;
#else
    (void)rdram; (void)callAddress; (void)dbuf;
#endif
}

void xboxDrawRecordNotePrecalc(const uint8_t *rdram, uint32_t callAddress)
{
    noteCall(rdram, callAddress, false);
}

void xboxDrawRecordNoteDbuf(const uint8_t *rdram, uint32_t callAddress)
{
    noteCall(rdram, callAddress, true);
}

bool xboxDrawRecordWithChain(const uint8_t *rdram, const uint8_t *data,
                            XboxDrawRecordConsumer consumer, void *user)
{
#if TS_DRAW_RECORDS
    if (!rdram || !data || !consumer) return false;
    const uintptr_t base = reinterpret_cast<uintptr_t>(rdram);
    const uintptr_t address = reinterpret_cast<uintptr_t>(data);
    if (address < base || address - base >= Chain::kRamBytes) return false;
    const uint32_t offset = uint32_t(address - base);
    Lease lease;
    if (!lease.held) return false;
    if (state.ram != rdram) { ++state.stats.misses; return false; }
    ++state.stats.lookups;
    Query &query = state.queries[queryIndex(offset)];
    uint32_t slot = kAbsent;
    if (query.valid && query.offset == offset &&
        (query.slot == kAbsent || (state.records[query.slot].valid &&
         state.records[query.slot].chain.generation == query.generation)))
    {
        ++state.stats.hintHits;
        slot = query.slot;
    }
    else
    {
        if (state.last != kAbsent && state.records[state.last].valid &&
            containsOnce(state.records[state.last].chain, offset))
            slot = state.last;
        else
            for (uint32_t i = 0; i < kRecords; ++i)
                if (state.records[i].valid && containsOnce(state.records[i].chain, offset))
                { slot = i; break; }
        if (slot == kAbsent) slot = lazyRecord(rdram, offset);
        query = {offset, slot, slot == kAbsent ? 0u : state.records[slot].chain.generation, true};
    }
    if (slot == kAbsent) { ++state.stats.misses; return false; }
    Record &record = state.records[slot];
    const bool callerCurrent = !std::memcmp(record.caller, rdram + record.chain.callAddress, 16u);
    if (!callerCurrent || !leafCurrent(record, rdram))
    {
        record.valid = false;
        if (Hint *hint = findHint(record.chain.chainAddress))
            if (!callerCurrent ||
                std::memcmp(hint->call.bytes, rdram + hint->call.callAddress, 16u))
                hint->valid = false;
        // Retire changed metadata without invoking the consumer. If only
        // leaf tags changed, a still-exact observed CALL may reconstruct a
        // descriptor at a later first-TTE lookup; this lookup always falls
        // back. Changed caller bytes require a fresh producer observation.
        clearQueries();
        ++state.stats.changed;
        return false;
    }
    state.last = slot;
    ++state.stats.hits;
    ++state.stats.consumers;
    // The record is pinned until the synchronous consumer returns; all
    // guest payloads remain at their live source addresses throughout.
    const bool accepted = consumer(record.chain, rdram, user);
    if (accepted) ++state.stats.accepted;
    return accepted;
#else
    (void)rdram; (void)data; (void)consumer; (void)user;
    return false;
#endif
}

void xboxDrawRecordReset()
{
#if TS_DRAW_RECORDS
    Lease lease;
    if (lease.held) clearRecords();
#endif
}

bool xboxDrawRecordGetStats(XboxDrawRecordStats &out)
{
    out = {};
#if TS_DRAW_RECORDS
    Lease lease;
    if (!lease.held) return false;
    out = state.stats;
    out.busy = busyCount.load(std::memory_order_relaxed);
#endif
    return true;
}
