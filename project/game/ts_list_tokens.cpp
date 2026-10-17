// In-list tokens: see ts_list_tokens.h (the natives' API) and
// ts_list_tokens_spine.h (the walker's validation, the decoder's dispatch).
//
// A token tag lives in one of the game's two display-list buffers (the
// table at gp-0x6CF0, the one being built indexed by gp-0x6CE8; the write
// pointer at gp-0x6C60). Each buffer has a run table of the tags written
// into it since its list started: slot = buffer << 8 | index. A list starts
// in a buffer at memdbTick (the per-frame swap; the run table of the buffer
// gp-0x6CE8 names then is emptied), which week 1 checks with tokstale= (a
// tag the walker meets that its table does not hold at that address).
// Validation is by the tag's own address, so a stale tag (beyond a list's
// END, never walked; or in a list the game rewrote) is refused, never run.
//
// Nothing writes a token tag yet: the prologue token (C-REC), the REF
// tokens (C-REC, gated) and the Tier 1 emitter ops (C-EMIT) will. Fixed
// storage: two run tables of 256 entries (6 KB).
#include "ts_list_tokens.h"
#include "ts_list_tokens_spine.h"

#include "runtime/ps2_vif1_records.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ts_game_hooks.h"
#include "ts_knobs.h"

#include <cstring>
#endif

namespace
{
    TsListTokenExecutor s_executors[kTsListKinds] = {};

#if defined(PLATFORM_XBOX)
    // The game's list globals, below gp.
    constexpr uint32_t kGpListPtr = 0x6C60u;    // the list's write pointer
    constexpr uint32_t kGpListTable = 0x6CF0u;  // the two list buffers
    constexpr uint32_t kGpListIndex = 0x6CE8u;  // ... the one being built
    constexpr uint32_t kGpChainBuild = 0x4B50u; // dlPushDmaTag's saved list pointer (a static chain is being built)
    // A list's size is not known here (session 1 measures gp-0x6CA0's
    // high-water against the buffers): a token is only written within this
    // much of its buffer's start.
    constexpr uint32_t kListBufferBytes = 1u << 20;
    constexpr uint32_t kRunSlots = 256u; // per buffer (the token ring keeps as many for list tokens)

    struct RunEntry
    {
        uint32_t tagAddr; // physical
        uint8_t listKind;
        uint8_t pad;
        uint16_t knobGeneration;
        const void *info;
    };
    struct RunTable
    {
        RunEntry entries[kRunSlots];
        uint32_t count = 0;
    };
    RunTable s_tables[2];
    bool s_installed = false;

    inline uint32_t rd32(const uint8_t *rdram, uint32_t addr)
    {
        uint32_t value;
        std::memcpy(&value, rdram + (addr & PS2_RAM_MASK & ~3u), sizeof(value));
        return value;
    }
    inline void wr32(uint8_t *rdram, uint32_t addr, uint32_t value)
    {
        std::memcpy(rdram + (addr & PS2_RAM_MASK & ~3u), &value, sizeof(value));
    }

    // A list starts in the buffer being built: its run table empties.
    void onMemdbTick(void *, uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
    {
        const uint32_t index = rd32(rdram, GPR_U32(ctx, 28) - kGpListIndex);
        if (index < 2u)
            s_tables[index].count = 0;
    }
#endif
}

bool tsListTokensEnabled(uint8_t *rdram, uint32_t gp)
{
#if defined(PLATFORM_XBOX)
    if (!s_installed || !rdram)
        return false;
    const uint32_t index = rd32(rdram, gp - kGpListIndex);
    if (index >= 2u || s_tables[index].count >= kRunSlots)
        return false;
    if (rd32(rdram, gp - kGpChainBuild) != 0u)
        return false; // a static chain is being built (dlPushDmaTag ... dlPopDmaTag)
    const uint32_t base = rd32(rdram, gp - kGpListTable + index * 4u) & PS2_RAM_MASK;
    const uint32_t ptr = rd32(rdram, gp - kGpListPtr) & PS2_RAM_MASK;
    return ptr >= base && ptr - base < kListBufferBytes && (ptr & 15u) == 0u && ptr <= PS2_RAM_SIZE - 16u;
#else
    (void)rdram;
    (void)gp;
    return false;
#endif
}

uint32_t tsListTokenWrite(uint8_t *rdram, uint32_t gp, uint8_t listKind, const void *info)
{
#if defined(PLATFORM_XBOX)
    if (listKind == 0u || listKind >= kTsListKinds || !tsListTokensEnabled(rdram, gp))
        return UINT32_MAX;
    const uint32_t index = rd32(rdram, gp - kGpListIndex);
    RunTable &table = s_tables[index];
    const uint32_t ptr = rd32(rdram, gp - kGpListPtr);
    const uint32_t phys = ptr & PS2_RAM_MASK;
    const uint32_t slot = index << 8 | table.count;
    // REF, QWC 0, ADDR 0x7FE00000 | slot; the upper half zero (two NOPs,
    // were TTE ever on). All 16 bytes.
    const uint32_t words[4] = {0x30000000u, 0x7FE00000u | slot, 0u, 0u};
    std::memcpy(rdram + phys, words, sizeof(words));
    table.entries[table.count++] =
        RunEntry{phys, listKind, 0u, static_cast<uint16_t>(tsKnobGeneration()), info};
    wr32(rdram, gp - kGpListPtr, ptr + 16u);
    return slot;
#else
    (void)rdram;
    (void)gp;
    (void)listKind;
    (void)info;
    return UINT32_MAX;
#endif
}

void tsListTokenRegisterExecutor(uint8_t listKind, TsListTokenExecutor fn)
{
    if (listKind != 0u && listKind < kTsListKinds)
        s_executors[listKind] = fn;
}

TsListTokenExecutor tsListTokenExecutor(uint8_t listKind)
{
    return listKind < kTsListKinds ? s_executors[listKind] : nullptr;
}

bool tsListTokenAdmit(uint32_t tagAddr, uint32_t addrField, Vif1Token &out)
{
#if defined(PLATFORM_XBOX)
    const uint32_t slot = addrField & 0xFFFFFu;
    const uint32_t buffer = slot >> 8, index = slot & 0xFFu;
    if (buffer >= 2u || index >= s_tables[buffer].count)
        return false;
    const RunEntry &entry = s_tables[buffer].entries[index];
    if (entry.tagAddr != (tagAddr & PS2_RAM_MASK))
        return false;
    out.id = slot;
    out.kind = Vif1TokenKind::List;
    out.listKind = entry.listKind;
    out.flags = entry.knobGeneration;
    out.guestAddr = tagAddr;
    out.info = entry.info;
    return true;
#else
    (void)tagAddr;
    (void)addrField;
    (void)out;
    return false;
#endif
}

Vif1ExecResult tsListTokenRun(PS2Memory &memory, const Vif1Token &token, bool dry)
{
    const TsListTokenExecutor fn = tsListTokenExecutor(token.listKind);
    if (!fn)
        return Vif1ExecResult::Rejected;
    fn(memory, token, dry);
    return Vif1ExecResult::Done;
}

void tsListTokensInstall()
{
#if defined(PLATFORM_XBOX)
    if (s_installed)
        return;
    s_installed = tsGameHookOn(TsGameFn::memdbTick, TsHookPhase::Before, &onMemdbTick);
#endif
}
