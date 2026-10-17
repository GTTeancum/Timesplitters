// The game-function hook registry: see ts_game_hooks.h.
#if defined(PLATFORM_XBOX)
#include "ts_game_hooks.h"

#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "../../src/xbox/xbox_log.h" // the boot assert's line goes straight to the log

#include <cstdio>
#include <utility>

namespace
{
    constexpr uint32_t kFnCount = uint32_t(TsGameFn::Count);

    struct FnInfo
    {
        uint32_t address;
        const char *name;
    };
    constexpr FnInfo kFns[kFnCount] = {
        {0x2B9018u, "dlPushDmaTag"},
        {0x2B9028u, "dlPopDmaTag"},
        {0x25FC90u, "obPrecalcDbufGfxData"},
        {0x25F408u, "partPrecalcDmaData"},
        {0x2A7A50u, "vtxlistcolour"},
        {0x2A7AB0u, "obInstLight"},
        {0x201BB0u, "memReset"},
        {0x201C10u, "memEnd"},
        {0x201B38u, "memMake"},
        {0x201F50u, "memdbTick"},
    };

    struct Slot
    {
        TsGameHookFn fn = nullptr;
        void *owner = nullptr;
    };
    struct Hooks
    {
        Slot before[kTsGameHookSlots];
        Slot after[kTsGameHookSlots];
        uint32_t beforeCount = 0, afterCount = 0;
        PS2Runtime::RecompiledFunction original = nullptr; // what the entry held before the wrapper
    };
    Hooks s_hooks[kFnCount];
    uint32_t s_missing = 0;

    template <uint32_t Index>
    void wrapper(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        Hooks &h = s_hooks[Index];
        for (uint32_t i = 0; i < h.beforeCount; ++i)
            h.before[i].fn(h.before[i].owner, rdram, ctx, runtime);
        const uint32_t ret = GPR_U32(ctx, 31);
        h.original(rdram, ctx, runtime);
        if (h.afterCount != 0u && ctx->pc == ret)
            for (uint32_t i = 0; i < h.afterCount; ++i)
                h.after[i].fn(h.after[i].owner, rdram, ctx, runtime);
    }

    template <uint32_t... I>
    constexpr void fillWrappers(PS2Runtime::RecompiledFunction (&out)[kFnCount], std::integer_sequence<uint32_t, I...>)
    {
        ((out[I] = &wrapper<I>), ...);
    }
    struct Wrappers
    {
        PS2Runtime::RecompiledFunction fn[kFnCount] = {};
        constexpr Wrappers() { fillWrappers(fn, std::make_integer_sequence<uint32_t, kFnCount>{}); }
    };
    constexpr Wrappers kWrappers;
}

bool tsGameHookOn(TsGameFn fn, TsHookPhase phase, TsGameHookFn callback, void *owner)
{
    if (uint32_t(fn) >= kFnCount || !callback)
        return false;
    Hooks &h = s_hooks[uint32_t(fn)];
    Slot *slots = phase == TsHookPhase::Before ? h.before : h.after;
    uint32_t &count = phase == TsHookPhase::Before ? h.beforeCount : h.afterCount;
    if (count >= kTsGameHookSlots)
        return false;
    slots[count++] = {callback, owner};
    return true;
}

void tsGameHooksInstall(PS2Runtime &runtime)
{
    uint32_t installed = 0;
    s_missing = 0;
    for (uint32_t i = 0; i < kFnCount; ++i)
    {
        const uint32_t address = kFns[i].address;
        if (!runtime.hasFunction(address))
        {
            ++s_missing;
            std::fprintf(stderr, "[TS:hooks] %s (%06x): no function\n", kFns[i].name, address);
            continue;
        }
        const PS2Runtime::RecompiledFunction current = runtime.lookupFunction(address);
        if (current != kWrappers.fn[i]) // applied before: the game loaded again
        {
            s_hooks[i].original = current;
            runtime.replaceFunction(address, kWrappers.fn[i]);
        }
        // The boot check: the entry holds this wrapper now.
        if (runtime.lookupFunction(address) == kWrappers.fn[i])
            ++installed;
        else
        {
            ++s_missing;
            std::fprintf(stderr, "[TS:hooks] %s (%06x): entry not replaced\n", kFns[i].name, address);
        }
    }
    std::fprintf(stderr, "[TS:hooks] game hooks: %u of %u installed\n", installed, kFnCount);
    // The boot chain assert (I-11): a wrapper that is not in place would
    // leave its callbacks (the records engine's, the in-place fetch's, the
    // render counters') silently unrun. Refused at start-up, straight into
    // the log (not through stdio), not found in a console session; the
    // status block's hooksmissing= shows it too.
    if (installed != kFnCount)
    {
        char text[96];
        const int n = std::snprintf(text, sizeof(text), "[TS:hooks] FATAL: %u of %u game hooks installed (%u missing)\n",
                                    installed, kFnCount, s_missing);
        xboxLogWrite(text, unsigned(n > 0 ? n : 0));
        __builtin_trap();
    }
}

uint32_t tsGameHooksMissing() { return s_missing; }

uint32_t tsGameFnAddress(TsGameFn fn)
{
    return uint32_t(fn) < kFnCount ? kFns[uint32_t(fn)].address : 0u;
}

const char *tsGameFnName(TsGameFn fn)
{
    return uint32_t(fn) < kFnCount ? kFns[uint32_t(fn)].name : "?";
}
#endif
