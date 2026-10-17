// Native draw records, the chain registry and cache: see ts_record_desc.h.
//
// The registry: partPrecalcDmaData builds a part's static chain between
// dlPushDmaTag (its a0: the chain's first tag) and dlPopDmaTag (which writes
// the chain's RET); the push hook classifies the chain by partPrecalcDmaData's
// own return address (saved at 0x90($sp): 0x25FEBC, 0x25FF18, 0x260020 and
// 0x26007C are obPrecalcDbufGfxData's calls, the Dbuf origin; 0x25FC54 and
// 0x25FC68 the precalc origin), the pop hook registers it. A chain built
// again at the same address registers again, which drops its descriptor.
// memReset, memEnd and memMake (the level heap) empty the registry.
// Open addressing, 4,096 slots of 8 bytes; at most 3,072 chains (beyond:
// counted, walked).
//
// The cache: a chain's descriptor (ts_record_build.cpp) is built at the
// first CALL the walker offers, into a generational arena of two halves.
// New descriptors go into the current half; a hit in the other one is
// copied over when there is room. When the current half is full the halves
// rotate - the other one is emptied and becomes current - but only while
// no token is pending (a token points at its descriptor until the decoder
// has consumed it; the ring empties at every drain): otherwise the CALL is
// walked (recArenaFull) and the next walk rotates. One admission in 256
// (every one with TS_NATIVE_RECORD_SELFCHECK) audits the descriptor against
// a fresh build: a difference counts stale= and replaces it.
//
// The spine's hooks (PS2Memory::setVif1RecordHooks) are this file's:
// admitCall and expand (the registry), execute (R1 / T0 by the token's
// level; a list token goes to its kind's executor, ts_list_tokens.cpp),
// admitListToken (ts_list_tokens.cpp), and the debt hooks C-XF hands in
// (tsRecordsSetDebtHooks).
#include "ts_record_desc.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/ps2_vif1_tokens.h"
#include "ts_game_hooks.h"
#include "ts_knobs.h"
#include "ts_list_tokens_spine.h"

#include <cstring>

namespace
{
    using namespace ts_record;

    // ---- Knobs (frame boundaries).
    uint32_t s_level = 0;                     // records: 0 walk, 1 splice, 2 token->T0, 3 token->R1, 4 (R2) as 3
    uint32_t s_origins = kPrecalc | kDbuf;    // records.origins
    uint32_t s_checkEvery = TS_NATIVE_RECORD_SELFCHECK_EVERY; // records.check (TS_NATIVE_RECORD_SELFCHECK)

    // ---- The registry.
    constexpr uint32_t kSlots = 4096u;
    constexpr uint32_t kMaxChains = 3072u;
    constexpr uint32_t kWalkOnly = 1u; // a slot's handle: the builder refused the chain
    struct Slot
    {
        uint32_t key;    // the chain's first tag | its origin bits (low 4 bits; 0: free)
        uint32_t handle; // its descriptor in the arena (0: none yet; kWalkOnly)
    };
    Slot s_slots[kSlots];
    uint32_t s_chains = 0;

    inline uint32_t slotHash(uint32_t chain) { return ((chain >> 4) * 2654435761u) >> 20; }
    Slot *findSlot(uint32_t chain)
    {
        for (uint32_t i = slotHash(chain), n = 0; n < kSlots; ++n, i = (i + 1u) & (kSlots - 1u))
        {
            Slot &slot = s_slots[i];
            if (slot.key == 0u)
                return nullptr;
            if ((slot.key & ~15u) == chain)
                return &slot;
        }
        return nullptr;
    }
    Slot *insertSlot(uint32_t chain)
    {
        for (uint32_t i = slotHash(chain), n = 0; n < kSlots; ++n, i = (i + 1u) & (kSlots - 1u))
        {
            Slot &slot = s_slots[i];
            if (slot.key != 0u && (slot.key & ~15u) == chain)
                return &slot;
            if (slot.key == 0u)
            {
                if (s_chains >= kMaxChains)
                    return nullptr;
                ++s_chains;
                return &slot;
            }
        }
        return nullptr;
    }

    // ---- The arena.
    constexpr uint32_t kHalfBytes = TS_RECORD_ARENA_KB * 1024u / 2u;
    static_assert(kHalfBytes <= 256u * 1024u, "a handle holds an offset of 16 bits in 8-byte units");
    alignas(8) uint8_t s_arena[2][kHalfBytes];
    uint32_t s_used[2] = {0u, 0u};
    uint32_t s_gen[2] = {1u, 1u};
    uint32_t s_cur = 0;
    // A descriptor's handle: valid bit, half, the half's generation, offset / 8.
    inline uint32_t makeHandle(uint32_t half, uint32_t offset)
    {
        return 0x80000000u | half << 30 | (s_gen[half] & 0x3FFFu) << 16 | offset >> 3;
    }
    const RecDesc *descOf(uint32_t handle)
    {
        if ((handle & 0x80000000u) == 0u)
            return nullptr;
        const uint32_t half = (handle >> 30) & 1u;
        if (((handle >> 16) & 0x3FFFu) != (s_gen[half] & 0x3FFFu))
            return nullptr; // its half was emptied since
        return reinterpret_cast<const RecDesc *>(s_arena[half] + ((handle & 0xFFFFu) << 3));
    }
    // Room for bytes in the current half, rotating if allowed; the offset
    // (UINT32_MAX: none).
    uint32_t reserve(uint32_t bytes, bool mayRotate)
    {
        const uint32_t size = (bytes + 7u) & ~7u;
        if (size > kHalfBytes)
            return UINT32_MAX;
        if (s_used[s_cur] + size > kHalfBytes)
        {
            if (!mayRotate || g_vif1Tokens.pending() != 0u)
                return UINT32_MAX;
            const uint32_t other = s_cur ^ 1u;
            ++s_gen[other];
            s_used[other] = 0u;
            s_cur = other;
        }
        const uint32_t offset = s_used[s_cur];
        s_used[s_cur] += size;
        return offset;
    }
    uint32_t place(const void *desc, uint32_t bytes, bool mayRotate)
    {
        const uint32_t offset = reserve(bytes, mayRotate);
        if (offset == UINT32_MAX)
            return 0u;
        std::memcpy(s_arena[s_cur] + offset, desc, bytes);
        return makeHandle(s_cur, offset);
    }
    void emptyArena()
    {
        for (uint32_t half = 0; half < 2u; ++half)
        {
            ++s_gen[half];
            s_used[half] = 0u;
        }
    }

    // ---- Building and auditing.
    alignas(8) uint8_t s_scratch[kMaxBuildBytes];
    uint32_t s_auditTick = 0;
    uint32_t s_checkTick = 0;
    PS2Memory *s_memory = nullptr;

    // ---- The spine's hooks.
    bool admitCall(void *, uint32_t chain, Vif1CallAdmit &out)
    {
        const uint32_t level = s_level;
        if (level == 0u)
            return false;
        Slot *slot = findSlot(chain);
        if (!slot || ((slot->key & 15u) & s_origins) == 0u || slot->handle == kWalkOnly)
            return false;
        uint8_t *const rdram = s_memory->getRDRAM();
        const RecDesc *desc = descOf(slot->handle);
        uint32_t built = 0; // a build waiting in s_scratch
        if (desc && (TS_NATIVE_RECORD_SELFCHECK || (++s_auditTick & 255u) == 0u))
        {
            ++g_renderCounters.recAudits;
            built = buildDescriptor(rdram, chain, static_cast<uint8_t>(slot->key & 15u), s_scratch);
            if (built == desc->bytes && std::memcmp(s_scratch, desc, built) == 0)
                built = 0;
            else
            {
                ++g_renderCounters.recStale;
                desc = nullptr;
                slot->handle = 0u;
            }
        }
        if (!desc)
        {
            if (built == 0u)
                built = buildDescriptor(rdram, chain, static_cast<uint8_t>(slot->key & 15u), s_scratch);
            ++g_renderCounters.recBuilds;
            if (built == 0u)
            {
                slot->handle = kWalkOnly;
                ++g_renderCounters.recUnspliceable;
                return false;
            }
            if ((reinterpret_cast<const RecDesc *>(s_scratch)->flags & kReplayable) == 0u)
                ++g_renderCounters.recUnrecordable;
            const uint32_t handle = place(s_scratch, built, true);
            if (handle == 0u)
            {
                ++g_renderCounters.recArenaFull;
                return false;
            }
            slot->handle = handle;
            desc = descOf(handle);
        }
        else if (((slot->handle >> 30) & 1u) != s_cur)
        {
            // A hit in the other half: copied into the current one while
            // there is room (it outlives the next rotation then).
            if (const uint32_t handle = place(desc, desc->bytes, false))
            {
                slot->handle = handle;
                desc = descOf(handle);
            }
        }
        if (level >= 2u && (desc->flags & kReplayable) != 0u && desc->pieceBytes != 0u)
        {
            out.pieces = nullptr;
            out.pieceCount = 0;
            out.pieceBytes = 0;
            out.token.id = static_cast<uint32_t>(slot - s_slots);
            out.token.kind = Vif1TokenKind::Chain;
            out.token.listKind = 0;
            out.token.flags = static_cast<uint16_t>(level);
            out.token.guestAddr = chain;
            out.token.info = desc;
            return true;
        }
        out.pieces = desc->pieces(); // (not null, even for a chain of no pieces)
        out.pieceCount = desc->pieceCount;
        out.pieceBytes = desc->pieceBytes;
        return true;
    }

    const Vif1Piece *expand(void *, const Vif1Token &token, size_t &count)
    {
        const RecDesc *desc = static_cast<const RecDesc *>(token.info);
        if (token.kind != Vif1TokenKind::Chain || !desc)
        {
            count = 0;
            return nullptr;
        }
        count = desc->pieceCount;
        return desc->pieces();
    }

    Vif1ExecResult execute(void *, PS2Memory &memory, const Vif1Token &token, bool dry)
    {
        if (token.kind == Vif1TokenKind::List)
            return tsListTokenRun(memory, token, dry);
        const RecDesc *desc = static_cast<const RecDesc *>(token.info);
        if (dry || !desc)
            return Vif1ExecResult::Expand;
        if (token.flags >= 3u && recordEntryHolds(memory, *desc))
        {
#if TS_NATIVE_RECORD_SELFCHECK
            if (s_checkEvery != 0u && ++s_checkTick >= s_checkEvery)
            {
                s_checkTick = 0;
                recordSelfCheck(memory, *desc);
            }
#endif
            replayRecord(memory, *desc);
            ++g_renderCounters.recR1;
            return Vif1ExecResult::Done;
        }
        ++g_renderCounters.recT0;
        return Vif1ExecResult::Expand; // T0: the chain's pieces, decoded in its place
    }

    bool admitListToken(void *, uint32_t tagAddr, uint32_t addrField, Vif1Token &out)
    {
        return tsListTokenAdmit(tagAddr, addrField, out);
    }

    // The debt hooks (C-XF's; none until R2).
    void (*s_debtBeforeWrite)(void *, uint32_t, uint32_t, bool) = nullptr;
    void (*s_debtBeforeProgram)(void *, uint32_t, uint32_t) = nullptr;
    void (*s_listEnd)(void *) = nullptr;

    void installSpineHooks()
    {
        if (!s_memory)
            return;
        Vif1RecordHooks hooks;
        hooks.owner = nullptr;
        hooks.admitCall = &admitCall;
        hooks.admitListToken = &admitListToken;
        hooks.execute = &execute;
        hooks.expand = &expand;
        hooks.debtBeforeWrite = s_debtBeforeWrite;
        hooks.debtBeforeProgram = s_debtBeforeProgram;
        hooks.listEnd = s_listEnd;
        s_memory->setVif1RecordHooks(hooks);
    }

    // ---- The game hooks.
    inline uint32_t rd32(const uint8_t *rdram, uint32_t addr)
    {
        uint32_t value;
        std::memcpy(&value, rdram + (addr & PS2_RAM_MASK & ~3u), sizeof(value));
        return value;
    }
    // The chain partPrecalcDmaData has open (push seen, pop not yet).
    struct OpenChain
    {
        uint32_t chain = 0;
        uint8_t origin = 0;
        bool open = false;
    } s_open;

    uint8_t originOf(uint32_t ra)
    {
        switch (ra)
        {
        case 0x25FEBCu:
        case 0x25FF18u:
        case 0x260020u:
        case 0x26007Cu:
            return kDbuf;
        case 0x25FC54u:
        case 0x25FC68u:
            return kPrecalc;
        default:
            return 0u; // another caller: not registered
        }
    }

    void onPush(void *, uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
    {
        // dlPushDmaTag is a leaf: $sp is partPrecalcDmaData's, which saved
        // its own return address at 0x90($sp) on entry.
        const uint32_t ra = rd32(rdram, GPR_U32(ctx, 29) + 0x90u);
        s_open.chain = GPR_U32(ctx, 4) & 0x7FFFFFFFu;
        s_open.origin = originOf(ra);
        s_open.open = s_open.origin != 0u;
    }

    void onPop(void *, uint8_t *, R5900Context *, PS2Runtime *)
    {
        if (!s_open.open)
            return;
        s_open.open = false;
        const uint32_t chain = s_open.chain;
        if ((chain & 15u) != 0u || chain == 0u)
            return;
        Slot *slot = insertSlot(chain);
        if (!slot)
        {
            ++g_renderCounters.recRegFull;
            return;
        }
        slot->key = chain | s_open.origin;
        slot->handle = 0u; // (built again: the old descriptor is dropped)
        ++g_renderCounters.recRegistered;
    }

    void onLevelReset(void *, uint8_t *, R5900Context *, PS2Runtime *)
    {
        s_open.open = false;
        if (s_chains == 0u)
            return; // (nothing registered: no 32 KB clear)
        std::memset(s_slots, 0, sizeof(s_slots));
        s_chains = 0;
        s_open.open = false;
        if (g_vif1Tokens.pending() == 0u)
            emptyArena();
    }
}

void tsRecordsSetDebtHooks(void (*beforeWrite)(void *, uint32_t, uint32_t, bool),
                           void (*beforeProgram)(void *, uint32_t, uint32_t), void (*listEnd)(void *))
{
    s_debtBeforeWrite = beforeWrite;
    s_debtBeforeProgram = beforeProgram;
    s_listEnd = listEnd;
    installSpineHooks();
}

void registerTsRecords(PS2Runtime &runtime)
{
    s_memory = &runtime.memory();
    static bool registered = false; // the knob and hook registries keep theirs across game loads
    if (!registered)
    {
        registered = true;
        tsKnobRegister("records", &s_level, 0u);
        tsKnobRegister("records.origins", &s_origins, kPrecalc | kDbuf);
#if TS_NATIVE_RECORD_SELFCHECK
        tsKnobRegister("records.check", &s_checkEvery, TS_NATIVE_RECORD_SELFCHECK_EVERY);
#endif
        tsGameHookOn(TsGameFn::dlPushDmaTag, TsHookPhase::Before, &onPush);
        tsGameHookOn(TsGameFn::dlPopDmaTag, TsHookPhase::Before, &onPop);
        tsGameHookOn(TsGameFn::memReset, TsHookPhase::Before, &onLevelReset);
        tsGameHookOn(TsGameFn::memEnd, TsHookPhase::Before, &onLevelReset);
        tsGameHookOn(TsGameFn::memMake, TsHookPhase::Before, &onLevelReset);
        tsListTokensInstall();
    }
    // The registry starts empty for a game (re)load.
    std::memset(s_slots, 0, sizeof(s_slots));
    s_chains = 0;
    s_open.open = false;
    emptyArena();
    installSpineHooks();
}
#else
void registerTsRecords(PS2Runtime &runtime)
{
    (void)runtime;
}
#endif
