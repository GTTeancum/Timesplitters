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
    constexpr uint32_t kHints = kHintSets * kHintWays, kPayloadSets = 128u;
    constexpr uint32_t kMaxCandidates = 32u;
    constexpr uint16_t kNoHint = 0xFFFFu;
    struct ObservedOrigin
    {
        uint32_t callAddress = 0, chainAddress = 0;
        uint32_t endAddress = 0; // nonzero only for a completed linear REF group
        uint8_t bytes[16];
    };
    struct Hint
    {
        ObservedOrigin call;
        uint32_t payload = Chain::kRamBytes;
        uint16_t previousPayload = kNoHint, nextPayload = kNoHint;
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
        uint32_t endAddress = 0;
        bool transferTagData = true;
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
        Hint hints[kHints]{};
        uint8_t nextHintWay[kHintSets]{};
        uint16_t payloadHeads[kPayloadSets]{}, payloadTails[kPayloadSets]{};
        uint16_t payloadCursors[kPayloadSets]{};
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
        for (auto &hint : state.hints) hint = {};
        for (auto &way : state.nextHintWay) way = 0;
        for (uint32_t i = 0; i < kPayloadSets; ++i)
            state.payloadHeads[i] = state.payloadTails[i] = state.payloadCursors[i] = kNoHint;
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
    bool readCaller(const uint8_t *ram, uint32_t callAddress, ObservedOrigin &observed)
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
    bool readRefs(const uint8_t *ram, uint32_t first, uint32_t end, ObservedOrigin &observed)
    {
        if (!ram || (first & 15u) || (end & 15u) || end <= first ||
            end - first > Chain::kMaxTags * 16u || !within(first, end - first))
            return false;
        std::memcpy(observed.bytes, ram + first, sizeof(observed.bytes));
        const uint32_t low = word(observed.bytes);
        if ((low & 0x80000000u) || ((low >> 28u) & 7u) != 3u) return false;
        observed.callAddress = observed.chainAddress = first;
        observed.endAddress = end;
        return true;
    }
    void copyCaller(Record &record, const ObservedOrigin &observed)
    {
        record.chain.callAddress = observed.callAddress;
        record.chain.chainAddress = observed.chainAddress;
        std::memcpy(record.caller, observed.bytes, sizeof(record.caller));
        record.endAddress = observed.endAddress;
    }
    uint32_t hintSet(uint32_t chainAddress)
    {
        return ((chainAddress >> 4u) ^ (chainAddress >> 11u)) & (kHintSets - 1u);
    }
    uint16_t findHint(uint32_t chainAddress)
    {
        const uint32_t first = hintSet(chainAddress) * kHintWays;
        for (uint32_t i = first; i < first + kHintWays; ++i)
            if (state.hints[i].valid && state.hints[i].call.chainAddress == chainAddress)
                return uint16_t(i);
        return kNoHint;
    }
    uint32_t firstPayload(const uint8_t *ram, const ObservedOrigin &origin)
    {
        // One header, never a traversal. Zero-QWC leading tags have no
        // payload entry until a later observation supplies a usable origin.
        const uint8_t *tag = ram + origin.chainAddress;
        const uint32_t low = word(tag), id = (low >> 28u) & 7u;
        const uint32_t bytes = (low & 0xFFFFu) * 16u;
        if (!bytes || (low & 0x80000000u) ||
            (id != 1u && id != 3u && id != 4u && id != 6u))
            return Chain::kRamBytes;
        const uint32_t payload = id == 3u || id == 4u
                                     ? word(tag + 4u) & 0x7FFFFFFFu : origin.chainAddress + 16u;
        return within(payload, bytes) ? payload : Chain::kRamBytes;
    }
    uint32_t payloadSet(uint32_t offset)
    {
        return ((offset >> 4u) ^ (offset >> 11u)) & (kPayloadSets - 1u);
    }
    void unlinkPayload(uint16_t index)
    {
        Hint &hint = state.hints[index];
        if (hint.payload == Chain::kRamBytes) return;
        const uint32_t set = payloadSet(hint.payload);
        if (hint.previousPayload == kNoHint) state.payloadHeads[set] = hint.nextPayload;
        else state.hints[hint.previousPayload].nextPayload = hint.nextPayload;
        if (hint.nextPayload == kNoHint) state.payloadTails[set] = hint.previousPayload;
        else state.hints[hint.nextPayload].previousPayload = hint.previousPayload;
        if (state.payloadCursors[set] == index)
            state.payloadCursors[set] = hint.nextPayload != kNoHint
                                           ? hint.nextPayload : state.payloadHeads[set];
        hint.payload = Chain::kRamBytes;
        hint.previousPayload = hint.nextPayload = kNoHint;
    }
    void invalidateHint(uint16_t index)
    {
        unlinkPayload(index);
        state.hints[index].valid = false;
    }
    void retireOrigin(uint32_t address)
    {
        const uint16_t index = findHint(address);
        if (index != kNoHint) invalidateHint(index);
        // Any lookup can discover a changed origin before the other
        // transport is tried. Retire both, even if its hint was evicted,
        // so restored caller bytes cannot revive an interior hit without
        // a Note. Ordinary hint eviction never calls this helper.
        for (auto &record : state.records)
            if (record.valid && record.chain.chainAddress == address)
                record.valid = false;
        clearQueries();
    }
    void linkPayload(uint16_t index)
    {
        Hint &hint = state.hints[index];
        if (hint.payload == Chain::kRamBytes) return;
        const uint32_t set = payloadSet(hint.payload);
        hint.previousPayload = state.payloadTails[set];
        hint.nextPayload = kNoHint;
        if (hint.previousPayload == kNoHint) state.payloadHeads[set] = index;
        else state.hints[hint.previousPayload].nextPayload = index;
        state.payloadTails[set] = index;
        if (state.payloadCursors[set] == kNoHint) state.payloadCursors[set] = index;
    }
    void rememberOrigin(const uint8_t *ram, const ObservedOrigin &observed)
    {
        uint16_t index = findHint(observed.chainAddress);
        if (index != kNoHint) ++state.stats.reused;
        else
        {
            const uint32_t set = hintSet(observed.chainAddress);
            const uint32_t first = set * kHintWays;
            index = uint16_t(first + state.nextHintWay[set]);
            for (uint32_t i = first; i < first + kHintWays; ++i)
                if (!state.hints[i].valid) { index = uint16_t(i); break; }
            state.nextHintWay[set] ^= 1u;
        }
        unlinkPayload(index);
        Hint &hint = state.hints[index];
        hint.call = observed;
        hint.payload = firstPayload(ram, observed);
        hint.valid = true;
        linkPayload(index);
        // Keep both transport versions if they exist, but a changed REF
        // span boundary cannot inherit a prior descriptor's geometry range.
        for (auto &record : state.records)
            if (record.valid && record.chain.chainAddress == observed.chainAddress)
            {
                if (record.endAddress != observed.endAddress) record.valid = false;
                else copyCaller(record, observed);
            }
        // New observations can revive either entry or a previously missed
        // interior pointer. No rejected transport mode sticks across Note.
        clearQueries();
    }
    bool describeRefs(const uint8_t *ram, Record &record)
    {
        auto &chain = record.chain;
        for (uint32_t address = chain.chainAddress; address < record.endAddress; address += 16u)
        {
            Tag &tag = record.tags[chain.tagCount];
            tag.address = address;
            std::memcpy(tag.bytes, ram + address, sizeof(tag.bytes));
            const uint32_t low = word(tag.bytes);
            if ((low & 0x80000000u) || ((low >> 28u) & 7u) != 3u) return false;
            const uint32_t bytes = (low & 0xFFFFu) * 16u;
            const uint32_t payload = word(tag.bytes + 4u) & 0x7FFFFFFFu;
            if ((record.transferTagData && !append(record, address + 8u, 8u)) ||
                !append(record, payload, bytes))
                return false;
            ++chain.tagCount;
        }
        record.valid = chain.tagCount != 0u;
        return record.valid;
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
            // Preserve raw TTE/payload order. Only the original DMA
            // addSegment may coalesce; the decoder proves its live prefix.
            if ((record.transferTagData && !append(record, address + 8u, 8u)) ||
                !append(record, payload, bytes))
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
    uint32_t lazyRecord(const uint8_t *ram, uint16_t index, bool transferTagData)
    {
        Hint &hint = state.hints[index];
        Record candidate{};
        copyCaller(candidate, hint.call);
        candidate.transferTagData = transferTagData;
        if (state.serial == std::numeric_limits<uint64_t>::max() ||
            !(candidate.endAddress ? describeRefs(ram, candidate) : describeLeaf(ram, candidate)))
        {
            // TTE bytes count toward the budget, so failure in one mode
            // must not suppress the same origin's other transport. Keep
            // the exact hint; any later attempt still rebuilds and proves
            // the complete live structure before reaching a consumer.
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
        return slot;
    }
    enum class Attempt { Declined, Accepted, Changed };
    Attempt tryRecord(const uint8_t *ram, uint32_t offset, uint32_t slot,
                      XboxDrawRecordConsumer consumer, void *user, uint64_t *tried)
    {
        Record &record = state.records[slot];
        if (!record.valid || tried[slot] == record.chain.generation ||
            !containsOnce(record.chain, offset))
            return Attempt::Declined;
        tried[slot] = record.chain.generation;
        const bool callerCurrent = !std::memcmp(record.caller, ram + record.chain.callAddress, 16u);
        if (!callerCurrent || !leafCurrent(record, ram))
        {
            const uint16_t index = findHint(record.chain.chainAddress);
            if (!callerCurrent || (index != kNoHint &&
                std::memcmp(state.hints[index].call.bytes, ram + state.hints[index].call.callAddress, 16u)))
                retireOrigin(record.chain.chainAddress);
            else
            {
                record.valid = false;
                clearQueries();
            }
            ++state.stats.changed;
            // Do not reconstruct changed resident metadata in this lookup.
            return Attempt::Changed;
        }
        ++state.stats.hits;
        ++state.stats.consumers;
        if (!consumer(record.chain, ram, user)) return Attempt::Declined;
        ++state.stats.accepted;
        ++state.stats.transportAccepted[record.transferTagData ? 1u : 0u];
        state.last = slot;
        state.queries[queryIndex(offset)] = {offset, slot, record.chain.generation, true};
        return Attempt::Accepted;
    }
    Attempt tryOrigin(const uint8_t *ram, uint32_t offset, uint16_t index, bool transferTagData,
                      XboxDrawRecordConsumer consumer, void *user, uint64_t *tried)
    {
        Hint &hint = state.hints[index];
        if (!hint.valid) return Attempt::Declined;
        if (std::memcmp(hint.call.bytes, ram + hint.call.callAddress, 16u))
        {
            retireOrigin(hint.call.chainAddress);
            ++state.stats.changed;
            return Attempt::Declined;
        }
        // The indexed payload may have moved since Note. A stale index is
        // never authority for an old byte range; a fresh Note can reindex it.
        if (!transferTagData && firstPayload(ram, hint.call) != offset) return Attempt::Declined;
        uint32_t slot = kAbsent;
        for (uint32_t i = 0; i < kRecords; ++i)
            if (state.records[i].valid && state.records[i].chain.chainAddress == hint.call.chainAddress &&
                state.records[i].endAddress == hint.call.endAddress &&
                state.records[i].transferTagData == transferTagData)
            { slot = i; break; }
        if (slot == kAbsent) slot = lazyRecord(ram, index, transferTagData);
        return slot == kAbsent ? Attempt::Declined : tryRecord(ram, offset, slot, consumer, user, tried);
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
    ObservedOrigin observed{};
    if (!readCaller(rdram, callAddress, observed))
    {
        ++state.stats.rejected;
        return;
    }
    rememberOrigin(rdram, observed);
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

void xboxDrawRecordNoteRefs(const uint8_t *rdram, uint32_t firstTagAddress,
                           uint32_t endTagAddress, uint32_t variant)
{
#if TS_DRAW_RECORDS
    if (!rdram || variant >= 3u) return;
    Lease lease;
    if (!lease.held) return;
    selectRam(rdram);
    ++state.stats.notes;
    ++state.stats.notesRef[variant];
    ObservedOrigin observed{};
    if (!readRefs(rdram, firstTagAddress, endTagAddress, observed))
    {
        ++state.stats.rejected;
        return;
    }
    rememberOrigin(rdram, observed);
#else
    (void)rdram; (void)firstTagAddress; (void)endTagAddress; (void)variant;
#endif
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
    uint64_t tried[kRecords]{};
    uint32_t candidates = 0;
    bool hadCandidate = false;
    auto attemptOrigin = [&](uint16_t index, bool tte) {
        hadCandidate = true;
        ++candidates;
        ++state.stats.candidates;
        return tryOrigin(rdram, offset, index, tte, consumer, user, tried);
    };
    // Do not let an interior hit from the other transport hide a precise
    // origin. The live reader, not pointer coincidence, selects the mode.
    if ((offset & 15u) == 8u)
    {
        const uint16_t index = findHint(offset - 8u);
        if (index != kNoHint)
        {
            const Attempt result = attemptOrigin(index, true);
            if (result != Attempt::Declined) return result == Attempt::Accepted;
        }
    }
    const uint32_t set = payloadSet(offset);
    const uint16_t start = state.payloadCursors[set] != kNoHint
                               ? state.payloadCursors[set] : state.payloadHeads[set];
    uint16_t index = start;
    uint32_t visitedHints[kHints / 32u]{};
    for (uint32_t visited = 0; visited < kHints && index != kNoHint; ++visited)
    {
        const uint32_t bit = 1u << (index & 31u);
        if (visitedHints[index >> 5u] & bit) break;
        visitedHints[index >> 5u] |= bit;
        Hint &hint = state.hints[index];
        const uint16_t next = hint.nextPayload != kNoHint ? hint.nextPayload : state.payloadHeads[set];
        if (hint.valid && hint.payload == offset)
        {
            if (candidates == kMaxCandidates)
            {
                ++state.stats.candidateLimits;
                // A later lookup must be able to reach origins beyond the
                // current bounded scan, even when every start is shared.
                state.payloadCursors[set] = index;
                state.queries[queryIndex(offset)].valid = false;
                return false;
            }
            ++state.stats.payloadLookups;
            const Attempt result = attemptOrigin(index, false);
            if (result == Attempt::Accepted)
            {
                state.payloadCursors[set] = next;
                return true;
            }
            if (result == Attempt::Changed) return false;
        }
        if (next == start) break;
        index = next;
    }
    Query &query = state.queries[queryIndex(offset)];
    if (query.valid && query.offset == offset)
    {
        if (query.slot == kAbsent && !hadCandidate)
        { ++state.stats.hintHits; ++state.stats.misses; return false; }
        if (query.slot != kAbsent && state.records[query.slot].valid &&
            state.records[query.slot].chain.generation == query.generation &&
            tried[query.slot] != query.generation)
        {
            if (candidates == kMaxCandidates)
            {
                ++state.stats.candidateLimits;
                query.valid = false;
                return false;
            }
            ++state.stats.hintHits;
            ++state.stats.candidates;
            ++candidates;
            hadCandidate = true;
            const Attempt result = tryRecord(rdram, offset, query.slot, consumer, user, tried);
            if (result != Attempt::Declined) return result == Attempt::Accepted;
        }
    }
    // Interior records can recover a prefix after an unsupported command,
    // or prove that this byte address belongs to the opposite transport.
    for (uint32_t i = 0; i < kRecords; ++i)
    {
        if (!state.records[i].valid || !containsOnce(state.records[i].chain, offset) ||
            tried[i] == state.records[i].chain.generation) continue;
        if (candidates == kMaxCandidates)
        {
            ++state.stats.candidateLimits;
            query.valid = false;
            return false;
        }
        hadCandidate = true;
        ++candidates;
        ++state.stats.candidates;
        const Attempt result = tryRecord(rdram, offset, i, consumer, user, tried);
        if (result != Attempt::Declined) return result == Attempt::Accepted;
    }
    // Only an absent origin can be memoized as a miss. A rejected consumer
    // never hides another draw that shares the same first payload address.
    if (hadCandidate) query.valid = false;
    else query = {offset, kAbsent, 0u, true};
    ++state.stats.misses;
    return false;
#else
    (void)rdram; (void)data; (void)consumer; (void)user;
    return false;
#endif
}

bool xboxDrawRecordPrepareRefs(const uint8_t *rdram, uint32_t ramBytes,
                               uint32_t firstTagAddress, bool transferTagData,
                               uint32_t remainingTags, uint32_t remainingBytes,
                               XboxDrawRecordDmaSpan &out)
{
#if TS_DRAW_RECORDS
    if (!rdram || ramBytes != Chain::kRamBytes || (firstTagAddress & 15u) ||
        !within(firstTagAddress, 16u) || remainingTags == 0u)
        return false;
    Lease lease;
    if (!lease.held) return false;
    ++state.stats.dmaLookups;
    const auto miss = [] { ++state.stats.dmaMisses; return false; };
    // A lookup cannot manufacture an origin in a different RAM allocation.
    // A producer Note is the only operation that selects/replaces its owner.
    if (state.ram != rdram) return miss();
    const uint16_t index = findHint(firstTagAddress);
    if (index == kNoHint || state.hints[index].call.endAddress == 0u)
        return miss();
    Hint &hint = state.hints[index];
    if (std::memcmp(hint.call.bytes, rdram + hint.call.callAddress, 16u))
    {
        retireOrigin(firstTagAddress);
        ++state.stats.changed;
        return miss();
    }
    uint32_t slot = kAbsent;
    for (uint32_t i = 0; i < kRecords; ++i)
        if (state.records[i].valid &&
            state.records[i].chain.chainAddress == firstTagAddress &&
            state.records[i].endAddress == hint.call.endAddress &&
            state.records[i].transferTagData == transferTagData)
        { slot = i; break; }
    if (slot == kAbsent) slot = lazyRecord(rdram, index, transferTagData);
    if (slot == kAbsent) return miss();
    Record &record = state.records[slot];
    const bool callerCurrent = !std::memcmp(record.caller,
                                            rdram + record.chain.callAddress, 16u);
    if (!callerCurrent || !leafCurrent(record, rdram))
    {
        record.valid = false;
        if (!callerCurrent) retireOrigin(firstTagAddress);
        else clearQueries();
        ++state.stats.changed;
        // Preserve the VIF lookup's changed-resident rule: reconstructing
        // the still-observed range is allowed only on a later attempt.
        return miss();
    }
    if (record.chain.tagCount > remainingTags || record.chain.totalBytes > remainingBytes)
        return miss();

    XboxDrawRecordDmaSpan prepared{};
    prepared.chain = record.chain;
    prepared.endAddress = record.endAddress;
    prepared.lastTagUpper =
        (word(record.tags[record.chain.tagCount - 1u].bytes) >> 16u) & 0xFFFFu;
    out = prepared;
    ++state.stats.dmaAccepted;
    state.stats.dmaTags += record.chain.tagCount;
    state.stats.dmaBytes += record.chain.totalBytes;
    return true;
#else
    (void)rdram; (void)ramBytes; (void)firstTagAddress; (void)transferTagData;
    (void)remainingTags; (void)remainingBytes; (void)out;
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
