// B-CODEGEN's run-time half (src/xbox/PUSH-BC-PLAN.md section 5.2): the
// storage and slow paths of the generated-code shapes, and their checks.
//
// TS_NATIVE_CALL_SLOTS=1: the natives' call-slot counters
// (ps2_native_call_xbox.h) and the boot comparison of the generated slot
// list (build/xbox/gen/ps2_function_slots_xbox.h) against the compact table.
// TS_INDIRECT_CACHE=1: the JALR cache and its miss path
// (ps2_indirect_call_xbox.h). TS_CTX_GUARD=1: the context hash of the
// restrict guard (ps2_codegen_xbox.h).
//
// With TS_CALL_SLOT_CHECK=1 or TS_CTX_GUARD=1 (check builds, SC-E) every
// report carries
//   [TS:callslot] targets=<resolved> unresolved=<left to dispatchGuestBranch>
//                 boot=<targets whose table entry differs> calls=<checked>
//                 bad=<mismatched calls> icall=<hits>/<misses>/<bad>
//                 ctx=<checkpoints checked>/<context changed>
// boot, bad, the icall bad count and the ctx changed count must read 0.
// Otherwise nothing is reported and no check runs. Fixed storage only.
#ifndef TS_NATIVE_CALL_SLOTS
#define TS_NATIVE_CALL_SLOTS 0
#endif
#ifndef TS_CALL_SLOT_CHECK
#define TS_CALL_SLOT_CHECK 0
#endif
#ifndef TS_INDIRECT_CACHE
#define TS_INDIRECT_CACHE 0
#endif
#ifndef TS_CTX_GUARD
#define TS_CTX_GUARD 0
#endif

#include "ps2_runtime.h"
#include "xbox_perf.h"

#include <algorithm>
#include <cstdint>

#if TS_NATIVE_CALL_SLOTS
#include "ps2_native_call_xbox.h"

Ps2NativeCallSlotStats g_ps2NativeCallSlotStats;

uint32_t ps2xCheckNativeCallSlots()
{
    uint32_t bad = 0;
    for (const Ps2FunctionSlotEntry &entry : kPs2NativeCallTargets)
    {
        if (entry.slot == PS2X_NO_FUNCTION_SLOT)
            continue; // (the placeholder of an empty list)
        if (entry.slot >= g_ps2RecompiledFunctionTableSlotCount ||
            g_ps2RecompiledFunctionAddresses[entry.slot] != entry.address ||
            g_ps2RecompiledFunctionTable[entry.slot] == nullptr || ps2SlotOf(entry.address) != entry.slot)
            ++bad;
    }
    // The generated list was made from this build's table: their sizes agree.
    if (PS2X_FUNCTION_SLOT_COUNT != g_ps2RecompiledFunctionTableSlotCount)
        ++bad;
    return bad;
}
#endif

#if TS_INDIRECT_CACHE
#include "ps2_indirect_call_xbox.h"

// 2 KB, zero before any constructor runs: no entry valid (tag = ~target).
Ps2xIndirectEntry g_ps2xIndirectCache[PS2X_INDIRECT_CACHE_SIZE];
Ps2xIndirectStats g_ps2xIndirectStats;

bool __attribute__((fastcall)) ps2xIndirectCallMiss(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime,
                                                    uint32_t target, uint32_t source, uint32_t resume)
{
#if TS_CALL_SLOT_CHECK
    ++g_ps2xIndirectStats.misses;
#endif
    // The set dispatchGuestBranch calls: an address in the compact table
    // whose entry is a function (generatedFunctionTableSlot finds exactly
    // these; any other address is not in the sorted array).
    const uint32_t *begin = g_ps2RecompiledFunctionAddresses;
    const uint32_t *end = begin + g_ps2RecompiledFunctionTableSlotCount;
    const uint32_t *at = std::lower_bound(begin, end, target);
    if (at != end && *at == target && g_ps2RecompiledFunctionTable[at - begin] != nullptr)
    {
        const PS2Runtime::RecompiledFunction *entry = &g_ps2RecompiledFunctionTable[at - begin];
        Ps2xIndirectEntry &cached = g_ps2xIndirectCache[(target >> 2) & (PS2X_INDIRECT_CACHE_SIZE - 1u)];
        cached.tag = ~target;
        cached.entry = entry;
        return ps2xDirectCall(rdram, ctx, runtime, entry, target, resume);
    }
    // Missing: the report and policy exactly as before.
    return runtime->dispatchGuestBranch(rdram, ctx, target, source, resume, PS2Runtime::GuestBranchKind::IndirectCall,
                                        "JALR");
}
#endif

#if TS_CTX_GUARD
#include "ps2_codegen_xbox.h"

Ps2xCtxGuardStats g_ps2xCtxGuardStats;

// FNV-1a over the registers a patched function may cache: the GPRs, the
// FPRs, hi/lo and the FPU control word.
uint32_t ps2xCtxGuardHash(const R5900Context *ctx)
{
    uint32_t h = 2166136261u;
    auto mix = [&h](const void *data, size_t size) {
        const uint8_t *p = static_cast<const uint8_t *>(data);
        for (size_t i = 0; i < size; ++i)
            h = (h ^ p[i]) * 16777619u;
    };
    mix(ctx->r, sizeof(ctx->r));
    mix(ctx->f, sizeof(ctx->f));
    mix(&ctx->hi, sizeof(ctx->hi));
    mix(&ctx->lo, sizeof(ctx->lo));
    mix(&ctx->fcr31, sizeof(ctx->fcr31));
    return h;
}
#endif

#if TS_CALL_SLOT_CHECK || TS_CTX_GUARD
namespace
{
    void lineCallSlot(XboxReportLine &line)
    {
#if TS_NATIVE_CALL_SLOTS
        static const uint32_t boot = ps2xCheckNativeCallSlots(); // once, at the first report
        line.add(" targets=%u unresolved=%u boot=%u calls=%u bad=%u", unsigned(PS2X_NATIVE_CALL_TARGETS),
                 unsigned(PS2X_NATIVE_CALL_TARGETS_UNRESOLVED), unsigned(boot),
                 unsigned(g_ps2NativeCallSlotStats.calls), unsigned(g_ps2NativeCallSlotStats.mismatched));
#else
        line.add(" slots=off");
#endif
#if TS_INDIRECT_CACHE
        line.add(" icall=%u/%u/%u", unsigned(g_ps2xIndirectStats.hits), unsigned(g_ps2xIndirectStats.misses),
                 unsigned(g_ps2xIndirectStats.mismatched));
#endif
#if TS_CTX_GUARD
        line.add(" ctx=%u/%u", unsigned(g_ps2xCtxGuardStats.checks), unsigned(g_ps2xCtxGuardStats.changed));
#endif
    }

    // Registered at start-up (the registry is fixed storage, zero before
    // any constructor runs).
    const bool g_lineRegistered = xboxRegisterReportLine("[TS:callslot]", &lineCallSlot);
}
#endif
