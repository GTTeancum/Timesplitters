// The sweep's PROPS package (xbox_sweep.h): the two per-frame passes over
// every prop (propTickBefore 0x26f500, propTickAfter 0x26f9e8) and the
// per-prop bookkeeping step propUpdate 0x269d78, as Xbox natives.
//
// What the translated versions spend their time on, besides the routines
// they call (which stay where they are, reached through the function table):
// - every guest register lives in the context, so each of the ~300 guest
//   instructions per prop is a few host loads and stores;
// - propTickBefore makes seven memdbAlloc calls per prop (five bone-matrix
//   buffers, the light buffers), each a full table dispatch to a five-
//   instruction bump allocator;
// - every prop, moving or not, gets matrixRotY (an identity, sinf, cosf)
//   and a VU0 matrix-vector product per frame to turn its model's centre
//   offset (the 0x1FD0DF0 table, 12 bytes per model) by its yaw into
//   +0x1FC..+0x204, which nearly always gives last frame's answer.
//
// The natives below run the same control flow with host registers, inline
// the bump allocator, and remember the centre offset per prop slot: the
// offset is a pure function of the yaw in radians (the f12 that matrixRotY
// gets) and the three offset floats, so when all four bit patterns equal
// those of the last computation for that slot the stored result is the
// result. A miss makes the two calls exactly as the original.
//
// Contract kept with the translation:
// - Every guest call goes through the function table entry (overrides and
//   the [TS:jobs] wrappers are honoured), with ra the original's return
//   address and the 8-cycle dispatch checkpoint.
// - Before each call the context holds every register the translated code
//   reads after that call's return address (s0..s5, sp, the stack frame's
//   saved registers), so a callee that unwinds to the scheduler is resumed
//   by the translated function at its resume label and finishes the pass
//   there. Loop back-edges keep their scheduler checkpoint (pc = the loop
//   head, which the translation also resumes at).
// - On return: s0..s5, sp, ra as the caller left them, pc = ra. The
//   temporaries (v0/v1, a0..a3, f0..f5, f12, HI/LO, the FPU condition bit)
//   are dead at a return under the game's calling convention and are not
//   reproduced; neither are the scratch words in this function's own stack
//   frame below the caller's sp.
// - What a skipped call would have left behind and nothing reads: the
//   matrix in propTickBefore's frame and VU0's vf4..vf8/ACC (every VU0
//   routine loads its inputs). The skipped calls' checkpoint charges are
//   not made (16 EE cycles per cached prop).
#include "xbox_sweep.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_recompiled_functions.h"

#include <cstdint>
#include <cstring>

extern const uint32_t g_ps2RecompiledFunctionAddresses[];

namespace
{
#define SP_INL inline __attribute__((always_inline))
#define G_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define G_PASS rdram, ctx, runtime

    constexpr uint32_t kDispatchCycles = 8u; // EeScheduler::kGuestDispatchCycles

    // ---- Guest calls

    enum Callee : uint32_t
    {
        kNullOverridePointers, // 0x274400
        kDroppingPickupTick,   // 0x26ecf0
        kHeadPropTick,         // 0x26b710
        kPickupPropTick,       // 0x26a330
        kAnimUpdate,           // 0x212cf8
        kCorpsePropTick,       // 0x26ecb8
        kCarPropTick,          // 0x276678
        kSpecialPropTick,      // 0x27bfc8
        kDoorPropTick,         // 0x26be78
        kChrPropTick,          // 0x26ddc0
        kGunPropTick,          // 0x26ece8
        kRemotePropTick,       // 0x26c440
        kWaterPropTick,        // 0x278bb0
        kPropCalculateWalls,   // 0x267338
        kPropCalculateFloors,  // 0x2675b8
        kMatrixRotY,           // 0x2b4a58
        kMatrixVecMulAligned,  // 0x2b54c8
        kObInstLightUpdate,    // 0x25c160
        kPropUpdate,           // 0x269d78
        kChrPropTickAfter,     // 0x26e8d8
        kPropAttachUpdate,     // 0x26ff10
        kPropUnattach,         // 0x26f460
        kPropCalcRooms,        // 0x269b30
        kCalleeCount
    };

    constexpr uint32_t kTargets[kCalleeCount] = {
        0x274400u, 0x26ECF0u, 0x26B710u, 0x26A330u, 0x212CF8u, 0x26ECB8u, 0x276678u, 0x27BFC8u,
        0x26BE78u, 0x26DDC0u, 0x26ECE8u, 0x26C440u, 0x278BB0u, 0x267338u, 0x2675B8u, 0x2B4A58u,
        0x2B54C8u, 0x25C160u, 0x269D78u, 0x26E8D8u, 0x26FF10u, 0x26F460u, 0x269B30u,
    };

    constexpr uint32_t kNoSlot = 0xFFFFFFFFu;
    uint32_t g_slot[kCalleeCount];

    uint32_t findSlot(uint32_t address)
    {
        uint32_t lo = 0u, hi = g_ps2RecompiledFunctionTableSlotCount;
        while (lo < hi)
        {
            const uint32_t mid = lo + (hi - lo) / 2u;
            if (g_ps2RecompiledFunctionAddresses[mid] < address)
                lo = mid + 1u;
            else
                hi = mid;
        }
        return lo < g_ps2RecompiledFunctionTableSlotCount && g_ps2RecompiledFunctionAddresses[lo] == address &&
                       g_ps2RecompiledFunctionTable[lo] != nullptr
                   ? lo
                   : kNoSlot;
    }

    // jal target with ra = next: pc = target, the dispatch checkpoint, the
    // table entry, then the dispatcher's post-call tests. false: the caller
    // does not continue (the scheduler resumes the translation at next, or
    // dispatches the callee when the checkpoint fired first).
    __attribute__((noinline)) bool callGuest(G_ARGS, uint32_t callee, uint32_t source, uint32_t next)
    {
        SET_GPR_U32(ctx, 31, next);
        const uint32_t target = kTargets[callee];
        const uint32_t slot = g_slot[callee];
        if (__builtin_expect(slot == kNoSlot, 0))
            return runtime->dispatchGuestBranch(rdram, ctx, target, source, next,
                                                PS2Runtime::GuestBranchKind::DirectCall, "JAL");
        ctx->pc = target;
        if (runtime->eeCheckpointDue(kDispatchCycles))
            return false;
        g_ps2RecompiledFunctionTable[slot](rdram, ctx, runtime);
        if (__builtin_expect(ctx->pc == next, 1))
            return true;
        if (runtime->isStopRequested() || ctx->pc == 0u)
            return false;
        if (ctx->pc == target)
            ctx->pc = next; // a native that left pc at its entry
        return ctx->pc == next;
    }

    // jalr v0 with ra = next (the prop's +0x1A4 callback).
    __attribute__((noinline)) bool callIndirect(G_ARGS, uint32_t target, uint32_t source, uint32_t next)
    {
        SET_GPR_U32(ctx, 31, next);
        ctx->pc = target;
        return runtime->dispatchGuestBranch(rdram, ctx, target, source, next,
                                            PS2Runtime::GuestBranchKind::IndirectCall, "JALR");
    }

    // ---- Guest memory and registers

    SP_INL uint32_t rd(G_ARGS, uint32_t addr) { return READ32(addr); }
    SP_INL void wr(G_ARGS, uint32_t addr, uint32_t v) { WRITE32(addr, v); }
    SP_INL float rdf(G_ARGS, uint32_t addr)
    {
        const uint32_t bits = READ32(addr);
        float f;
        std::memcpy(&f, &bits, sizeof(f));
        return f;
    }
#define RD(a) rd(G_PASS, (a))
#define WR(a, v) wr(G_PASS, (a), (v))
#define RDF(a) rdf(G_PASS, (a))

    SP_INL uint64_t sext(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }
    SP_INL void setR(R5900Context *ctx, int reg, uint32_t v) { SET_GPR_U64(ctx, reg, sext(v)); }
    SP_INL uint32_t fbits(float f)
    {
        uint32_t b;
        std::memcpy(&b, &f, sizeof(b));
        return b;
    }

    constexpr uint32_t kPropStride = 0x250u;
    constexpr int kS0 = 16, kS1 = 17, kS2 = 18, kS3 = 19, kS4 = 20, kS5 = 21, kSp = 29, kRa = 31;

    // gp-relative globals (gp is the game's fixed small-data pointer).
    constexpr uint32_t kGpPropCount = 0x4EA4u;   // gp-0x4EA4: props in use
    constexpr uint32_t kGpPropArray = 0x4F84u;   // gp-0x4F84: the prop array, 0x250 bytes each
    constexpr uint32_t kGpMemdbPtr = 0x49DCu;    // gp-0x49DC: memdb's next free byte
    constexpr uint32_t kGpMemdbUsed = 0x6570u;   // gp-0x6570: memdb's bytes handed out
    constexpr uint32_t kGpPickupGate = 0x6258u;  // gp-0x6258: compared with 6 (pickup activation)
    constexpr uint32_t kGpDegToRad = 0x7B24u;    // gp-0x7B24: pi (the yaw is in degrees)
    constexpr uint32_t kGpGame = 0x4DCCu;        // gp-0x4DCC: game state (+0x6E4: lighting on)
    constexpr uint32_t kCentreTable = 0x1FD0DF0u; // the models' centre offsets, 12 bytes each

    // ---- The centre-offset memory (propTickBefore's matrixRotY + matrixVecMulAligned)

    struct CentreEntry
    {
        uint32_t yaw, x, y, z;   // the inputs: yaw in radians, the offset
        uint32_t ox, oy, oz;     // the product's xyz
        uint32_t valid;
    };
    constexpr uint32_t kCentreSlots = 160u; // 5 KB; props past this slot are computed every frame
    CentreEntry g_centre[kCentreSlots];

    // ---- propTickBefore (0x26f500)
    //
    // Pass 1, every prop not flagged dead (+0x10 bit 31): its model
    // instance's (+0x20) five bone-matrix buffers (bones (+0 -> +4) x 64,
    // rounded to 16) from memdb, or five nulls without bones, flag 0x100
    // cleared; then, for a model with lights (+0 -> +8), the light buffer
    // (+0x18: bones x 64 when the prop is lit (flags 0x0F000000), else 64)
    // and +0x1C (64); nullOverridePointers when the instance has overrides
    // (+0xF8).
    // Pass 2, every prop: unless flagged dead or hidden (0x80000100) the
    // pre-ticks of unattached props (dropping pickups 0x40, heads 0x800),
    // the pickup activation and pickupPropTick (kind 0x40, flag 2), then for
    // unattached props animUpdate and the kind's tick, +0x1C cleared and, if
    // the prop moved or turned since propUpdate's last snapshot (+0x70..),
    // its walls and floors; then for every prop the centre offset.

    void sweepPropTickBefore(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint64_t callerS0 = GPR_U64(ctx, kS0), callerS1 = GPR_U64(ctx, kS1), callerS2 = GPR_U64(ctx, kS2),
                       callerS3 = GPR_U64(ctx, kS3), callerS4 = GPR_U64(ctx, kS4), callerRa = GPR_U64(ctx, kRa);
        const uint32_t sp = GPR_U32(ctx, kSp) - 0xB0u;
        WRITE64(sp + 0x70u, callerS2);
        WRITE64(sp + 0xA0u, callerRa);
        WRITE64(sp + 0x90u, callerS4);
        WRITE64(sp + 0x80u, callerS3);
        WRITE64(sp + 0x60u, callerS1);
        WRITE64(sp + 0x50u, callerS0);
        setR(ctx, kSp, sp);

        int32_t count = static_cast<int32_t>(RD(gp - kGpPropCount));
        if (count > 0)
        {
            // ---- Pass 1. Live across calls: s1 prop, s2 index, s3 -16, s0 the size.
            SET_GPR_U64(ctx, kS3, 0xFFFFFFFFFFFFFFF0ull);
            for (int32_t i = 0;;)
            {
                const uint32_t p = RD(gp - kGpPropArray) + static_cast<uint32_t>(i) * kPropStride;
                if (static_cast<int32_t>(RD(p + 0x10u)) >= 0)
                {
                    uint32_t inst = RD(p + 0x20u);
                    const uint32_t bones = RD(RD(inst) + 4u);
                    uint32_t s0 = bones << 6;
                    if (bones == 0u)
                    {
                        WR(inst + 0x4u, 0u);
                        WR(inst + 0x8u, 0u);
                        WR(inst + 0xCu, 0u);
                        WR(inst + 0x10u, 0u);
                        WR(inst + 0x14u, 0u);
                    }
                    else
                    {
                        // memdbAlloc x5 (0x201f78: v0 = next; next += a0; used += a0).
                        s0 = (s0 + 15u) & 0xFFFFFFF0u;
                        uint32_t next = RD(gp - kGpMemdbPtr), used = RD(gp - kGpMemdbUsed);
                        for (uint32_t k = 0u; k < 5u; ++k)
                        {
                            WR(gp - kGpMemdbPtr, next + s0);
                            WR(gp - kGpMemdbUsed, used + s0);
                            WR(RD(p + 0x20u) + 4u + 4u * k, next);
                            next += s0;
                            used += s0;
                        }
                        const uint32_t flags = RD(p + 0x10u) & 0xFFFFFEFFu;
                        WR(p + 0x10u, flags);
                    }
                    inst = RD(p + 0x20u);
                    const uint32_t model = RD(inst);
                    if (RD(model + 8u) != 0u)
                    {
                        const uint32_t n = RD(model + 4u);
                        uint32_t size = 0x40u;
                        if (n != 0u && (RD(p + 0x10u) & 0x0F000000u) != 0u)
                            size = ((n << 6) + 15u) & 0xFFFFFFF0u;
                        const uint32_t next = RD(gp - kGpMemdbPtr), used = RD(gp - kGpMemdbUsed);
                        WR(gp - kGpMemdbPtr, next + size);
                        WR(gp - kGpMemdbUsed, used + size);
                        WR(RD(p + 0x20u) + 0x18u, next);
                        WR(gp - kGpMemdbPtr, next + size + 0x40u);
                        WR(gp - kGpMemdbUsed, used + size + 0x40u);
                        inst = RD(p + 0x20u);
                        WR(inst + 0x1Cu, next + size);
                    }
                    if (RD(inst + 0xF8u) != 0u)
                    {
                        SET_GPR_U64(ctx, kS0, sext(s0));
                        setR(ctx, kS1, p);
                        setR(ctx, kS2, static_cast<uint32_t>(i));
                        setR(ctx, 4, p);
                        if (!callGuest(G_PASS, kNullOverridePointers, 0x26F650u, 0x26F658u))
                            return;
                    }
                    count = static_cast<int32_t>(RD(gp - kGpPropCount));
                }
                ++i;
                if (i >= count)
                    break;
                ctx->pc = 0x26F538u;
                if (runtime->eeCheckpointDue())
                {
                    // The head reads v0 = 0x250; a skipped prop's path reads a1 = count.
                    setR(ctx, kS2, static_cast<uint32_t>(i));
                    SET_GPR_U64(ctx, 2, 0x250u);
                    setR(ctx, 5, static_cast<uint32_t>(count));
                    return;
                }
            }
        }

        if (count > 0)
        {
            // ---- Pass 2. Live across calls: s0 prop, s1 its instance, s2 index,
            // s3 sp+0x40, s4 0x1FD0000.
            SET_GPR_U64(ctx, kS4, 0x1FD0000u);
            setR(ctx, kS3, sp + 0x40u);
            for (int32_t i = 0;;)
            {
                const uint32_t p = RD(gp - kGpPropArray) + static_cast<uint32_t>(i) * kPropStride;
                uint32_t flags = RD(p + 0x10u);
                const uint32_t inst = RD(p + 0x20u);
                setR(ctx, kS0, p);
                setR(ctx, kS1, inst);
                setR(ctx, kS2, static_cast<uint32_t>(i));
                if ((flags & 0x80000100u) == 0u)
                {
                    if (RD(p + 0xBCu) == 0u)
                    {
                        const uint32_t kind = RD(p + 0x8u);
                        if (kind == 0x40u || kind == 0x800u)
                        {
                            setR(ctx, 4, p);
                            const bool ok = kind == 0x40u
                                                ? callGuest(G_PASS, kDroppingPickupTick, 0x26F6D0u, 0x26F6D8u)
                                                : callGuest(G_PASS, kHeadPropTick, 0x26F6E0u, 0x26F6E8u);
                            if (!ok)
                                return;
                            flags = RD(p + 0x10u);
                        }
                    }
                    if ((flags & 0x80000100u) == 0u)
                    {
                        if (RD(p + 0xBCu) == 0u && RD(p + 0x8u) == 0x40u && (flags & 2u) != 0u)
                        {
                            if (RD(RD(p + 0x160u)) == 0x10u && (flags & 0x100u) == 0u &&
                                static_cast<int32_t>(RD(gp - kGpPickupGate)) >= 6)
                            {
                                flags |= 1u;
                                WR(p + 0x10u, flags);
                            }
                            if ((flags & 1u) != 0u)
                            {
                                setR(ctx, 4, p);
                                if (!callGuest(G_PASS, kPickupPropTick, 0x26F768u, 0x26F770u))
                                    return;
                                flags = RD(p + 0x10u);
                            }
                        }
                        if ((flags & 0x80000100u) == 0u && RD(p + 0xBCu) == 0u)
                        {
                            setR(ctx, 4, inst);
                            if (!callGuest(G_PASS, kAnimUpdate, 0x26F794u, 0x26F79Cu))
                                return;
                            uint32_t tick = kCalleeCount, source = 0u, next = 0u;
                            switch (RD(p + 0x8u))
                            {
                            case 0x4u: tick = kDoorPropTick; source = 0x26F874u; next = 0x26F87Cu; break;
                            case 0x8u: tick = kChrPropTick; source = 0x26F884u; next = 0x26F88Cu; break;
                            case 0x10u: tick = kGunPropTick; source = 0x26F894u; next = 0x26F89Cu; break;
                            case 0x80u: tick = kSpecialPropTick; source = 0x26F864u; next = 0x26F86Cu; break;
                            case 0x100u: tick = kCarPropTick; source = 0x26F854u; next = 0x26F85Cu; break;
                            case 0x200u: tick = kRemotePropTick; source = 0x26F8A4u; next = 0x26F8ACu; break;
                            case 0x400u: tick = kWaterPropTick; source = 0x26F8B4u; next = 0x26F8BCu; break;
                            case 0x1000u: tick = kCorpsePropTick; source = 0x26F844u; next = 0x26F84Cu; break;
                            default: break;
                            }
                            if (tick != kCalleeCount)
                            {
                                setR(ctx, 4, p);
                                if (!callGuest(G_PASS, tick, source, next))
                                    return;
                            }
                            WR(p + 0x1Cu, 0u);
                            // c.eq.s on each pair: any unequal (or NaN) pair is a move.
                            if (!(RDF(p + 0x30u) == RDF(p + 0x70u)) || !(RDF(p + 0x34u) == RDF(p + 0x74u)) ||
                                !(RDF(p + 0x38u) == RDF(p + 0x78u)) || !(RDF(p + 0x4Cu) == RDF(p + 0x80u)))
                            {
                                setR(ctx, 4, p);
                                SET_GPR_U64(ctx, 5, 1u);
                                if (!callGuest(G_PASS, kPropCalculateWalls, 0x26F918u, 0x26F920u))
                                    return;
                                setR(ctx, 4, p);
                                SET_GPR_U64(ctx, 5, 1u);
                                if (!callGuest(G_PASS, kPropCalculateFloors, 0x26F924u, 0x26F92Cu))
                                    return;
                                WR(p + 0x1Cu, 0u);
                            }
                        }
                    }
                }

                // The centre offset: matrixRotY(sp, yaw * pi / 180), then
                // matrixVecMulAligned(sp, offset at sp+0x40) into +0x1FC.
                ++i;
                const float yaw = RDF(p + 0x4Cu) * RDF(gp - kGpDegToRad);
                const float rad = yaw / 180.0f;
                const uint32_t entryAddr = kCentreTable + RD(p + 0x4u) * 12u;
                const uint32_t ox = RD(entryAddr), oy = RD(entryAddr + 4u), oz = RD(entryAddr + 8u);
                const uint32_t radBits = fbits(rad);
                const uint32_t slot = static_cast<uint32_t>(i - 1);
                CentreEntry *const e = slot < kCentreSlots ? &g_centre[slot] : nullptr;
                uint32_t rx, ry, rz;
                if (e != nullptr && e->valid != 0u && e->yaw == radBits && e->x == ox && e->y == oy && e->z == oz)
                {
                    rx = e->ox;
                    ry = e->oy;
                    rz = e->oz;
                }
                else
                {
                    setR(ctx, kS2, static_cast<uint32_t>(i));
                    setR(ctx, 4, sp);
                    ctx->f[12] = rad;
                    if (!callGuest(G_PASS, kMatrixRotY, 0x26F95Cu, 0x26F964u))
                        return;
                    WR(sp + 0x40u, ox);
                    WR(sp + 0x44u, oy);
                    WR(sp + 0x48u, oz);
                    setR(ctx, 4, sp);
                    setR(ctx, 5, sp + 0x40u);
                    if (!callGuest(G_PASS, kMatrixVecMulAligned, 0x26F99Cu, 0x26F9A4u))
                        return;
                    rx = RD(sp + 0x40u);
                    ry = RD(sp + 0x44u);
                    rz = RD(sp + 0x48u);
                    // Only finite yaws are remembered (sinf/cosf of the
                    // others go through their special cases).
                    if (e != nullptr && (radBits & 0x7F800000u) != 0x7F800000u)
                    {
                        e->yaw = radBits;
                        e->x = ox;
                        e->y = oy;
                        e->z = oz;
                        e->ox = rx;
                        e->oy = ry;
                        e->oz = rz;
                        e->valid = 1u;
                    }
                }
                WR(p + 0x1FCu, rx);
                WR(p + 0x200u, ry);
                WR(p + 0x204u, rz);

                if (i >= static_cast<int32_t>(RD(gp - kGpPropCount)))
                    break;
                ctx->pc = 0x26F680u;
                if (runtime->eeCheckpointDue())
                {
                    setR(ctx, kS2, static_cast<uint32_t>(i));
                    return;
                }
            }
        }

        SET_GPR_U64(ctx, kS0, callerS0);
        SET_GPR_U64(ctx, kS1, callerS1);
        SET_GPR_U64(ctx, kS2, callerS2);
        SET_GPR_U64(ctx, kS3, callerS3);
        SET_GPR_U64(ctx, kS4, callerS4);
        SET_GPR_U64(ctx, kRa, callerRa);
        setR(ctx, kSp, sp + 0xB0u);
        ctx->pc = static_cast<uint32_t>(callerRa);
    }

    // ---- propTickAfter (0x26f9e8)
    //
    // Pass 1, unattached props (+0xBC null) not dead or hidden: the prop's
    // callback (+0x1A4 with +0x1AC), the model's lights (obInstLightUpdate
    // when the model has lights, the owner is lit and not hidden and the
    // game has lighting on; otherwise the light buffers +0x18/+0x1C nulled),
    // propUpdate, chrPropTickAfter for characters. Pass 2, attached props:
    // propAttachUpdate, headPropTick for heads, the same callback, lights
    // and propUpdate, then propUnattach when +0x1C has bit 2.

    // The lights step of both passes. false: unwound.
    SP_INL bool tickAfterLights(G_ARGS, uint32_t p, uint32_t gp, uint32_t source, uint32_t next)
    {
        const uint32_t inst = RD(p + 0x20u);
        if (RD(RD(inst) + 8u) == 0u)
            return true;
        const uint32_t ownerFlags = RD(RD(inst + 0xF4u) + 0x10u);
        if ((ownerFlags & 0x0F000000u) != 0u && (ownerFlags & 0x100u) == 0u && RD(RD(gp - kGpGame) + 0x6E4u) != 0u)
        {
            setR(ctx, 4, inst);
            SET_GPR_U64(ctx, 5, 0u);
            return callGuest(G_PASS, kObInstLightUpdate, source, next);
        }
        const uint32_t inst2 = RD(p + 0x20u);
        WR(inst2 + 0x1Cu, 0u);
        WR(inst2 + 0x18u, 0u);
        return true;
    }

    SP_INL bool tickAfterCallback(G_ARGS, uint32_t p, uint32_t source, uint32_t next)
    {
        const uint32_t cb = RD(p + 0x1A4u);
        if (cb == 0u)
            return true;
        setR(ctx, 2, cb);
        setR(ctx, 5, RD(p + 0x1ACu));
        setR(ctx, 4, p);
        return callIndirect(G_PASS, cb, source, next);
    }

    void sweepPropTickAfter(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint64_t callerS0 = GPR_U64(ctx, kS0), callerS1 = GPR_U64(ctx, kS1), callerS2 = GPR_U64(ctx, kS2),
                       callerS3 = GPR_U64(ctx, kS3), callerS4 = GPR_U64(ctx, kS4), callerS5 = GPR_U64(ctx, kS5),
                       callerRa = GPR_U64(ctx, kRa);
        const uint32_t sp = GPR_U32(ctx, kSp) - 0x70u;
        WRITE64(sp + 0x10u, callerS1);
        WRITE64(sp + 0x60u, callerRa);
        WRITE64(sp + 0x50u, callerS5);
        WRITE64(sp + 0x40u, callerS4);
        WRITE64(sp + 0x30u, callerS3);
        WRITE64(sp + 0x20u, callerS2);
        WRITE64(sp + 0x0u, callerS0);
        setR(ctx, kSp, sp);

        int32_t count = static_cast<int32_t>(RD(gp - kGpPropCount));
        if (count > 0)
        {
            // Live across calls: s0 prop, s1 index, s2 0x80000100, s3 the
            // byte offset, s4 8, s5 0x0F000000.
            setR(ctx, kS2, 0x80000100u);
            setR(ctx, kS5, 0x0F000000u);
            SET_GPR_U64(ctx, kS4, 8u);
            for (int32_t i = 0;;)
            {
                const uint32_t offset = static_cast<uint32_t>(i) * kPropStride;
                const uint32_t p = RD(gp - kGpPropArray) + offset;
                if ((RD(p + 0x10u) & 0x80000100u) == 0u && RD(p + 0xBCu) == 0u)
                {
                    setR(ctx, kS0, p);
                    setR(ctx, kS1, static_cast<uint32_t>(i));
                    setR(ctx, kS3, offset);
                    if (!tickAfterCallback(G_PASS, p, 0x26FA5Cu, 0x26FA64u))
                        return;
                    if (!tickAfterLights(G_PASS, p, gp, 0x26FAA4u, 0x26FAACu))
                        return;
                    setR(ctx, 4, p);
                    if (!callGuest(G_PASS, kPropUpdate, 0x26FAC4u, 0x26FACCu))
                        return;
                    if (RD(p + 0x8u) == 8u)
                    {
                        setR(ctx, 4, p);
                        if (!callGuest(G_PASS, kChrPropTickAfter, 0x26FAD8u, 0x26FAE0u))
                            return;
                    }
                    count = static_cast<int32_t>(RD(gp - kGpPropCount));
                }
                ++i;
                if (i >= count)
                    break;
                ctx->pc = 0x26FA28u;
                if (runtime->eeCheckpointDue())
                {
                    setR(ctx, kS1, static_cast<uint32_t>(i));
                    setR(ctx, kS3, static_cast<uint32_t>(i) * kPropStride);
                    setR(ctx, 4, static_cast<uint32_t>(count));
                    return;
                }
            }
        }

        if (count > 0)
        {
            // Live across calls: s0 prop, s1 index, s2 0x80000100, s3 the
            // byte offset, s4 0x0F000000, s5 0x800.
            setR(ctx, kS2, 0x80000100u);
            setR(ctx, kS4, 0x0F000000u);
            SET_GPR_U64(ctx, kS5, 0x800u);
            for (int32_t i = 0;;)
            {
                const uint32_t offset = static_cast<uint32_t>(i) * kPropStride;
                const uint32_t p = RD(gp - kGpPropArray) + offset;
                if ((RD(p + 0x10u) & 0x80000100u) == 0u && RD(p + 0xBCu) != 0u)
                {
                    setR(ctx, kS0, p);
                    setR(ctx, kS1, static_cast<uint32_t>(i));
                    setR(ctx, kS3, offset);
                    setR(ctx, 4, p);
                    if (!callGuest(G_PASS, kPropAttachUpdate, 0x26FB34u, 0x26FB3Cu))
                        return;
                    if (RD(p + 0x8u) == 0x800u)
                    {
                        setR(ctx, 4, p);
                        if (!callGuest(G_PASS, kHeadPropTick, 0x26FB48u, 0x26FB50u))
                            return;
                    }
                    if (!tickAfterCallback(G_PASS, p, 0x26FB60u, 0x26FB68u))
                        return;
                    if (!tickAfterLights(G_PASS, p, gp, 0x26FBA8u, 0x26FBB0u))
                        return;
                    setR(ctx, 4, p);
                    if (!callGuest(G_PASS, kPropUpdate, 0x26FBC8u, 0x26FBD0u))
                        return;
                    if ((RD(p + 0x1Cu) & 4u) != 0u)
                    {
                        setR(ctx, 4, p);
                        if (!callGuest(G_PASS, kPropUnattach, 0x26FBE0u, 0x26FBE8u))
                            return;
                    }
                    count = static_cast<int32_t>(RD(gp - kGpPropCount));
                }
                ++i;
                if (i >= count)
                    break;
                ctx->pc = 0x26FB10u;
                if (runtime->eeCheckpointDue())
                {
                    setR(ctx, kS1, static_cast<uint32_t>(i));
                    setR(ctx, kS3, static_cast<uint32_t>(i) * kPropStride);
                    setR(ctx, 4, static_cast<uint32_t>(count));
                    return;
                }
            }
        }

        SET_GPR_U64(ctx, kS0, callerS0);
        SET_GPR_U64(ctx, kS1, callerS1);
        SET_GPR_U64(ctx, kS2, callerS2);
        SET_GPR_U64(ctx, kS3, callerS3);
        SET_GPR_U64(ctx, kS4, callerS4);
        SET_GPR_U64(ctx, kS5, callerS5);
        SET_GPR_U64(ctx, kRa, callerRa);
        setR(ctx, kSp, sp + 0x70u);
        ctx->pc = static_cast<uint32_t>(callerRa);
    }

    // ---- propUpdate (0x269d78)
    //
    // propUpdate(prop): unless the prop's rooms are fixed (+0x10 bit 30),
    // its rooms again (propCalcRooms) when it moved or turned since the last
    // snapshot or has no rooms (+0xB8); characters (kind 8) also count the
    // distance walked (StatsAdd); then the snapshot: +0x70.. = position,
    // +0x7C.. = the three angles, +0x14 = the flags.
    //
    // Characters go to the translation whole (four calls a frame; their
    // walking distance runs through the soft-double helpers). propCalcRooms
    // writes only the room list (+0x90..+0xB8) and globals, so the kind read
    // at entry is the kind the original tests after it.

    PS2Runtime::RecompiledFunction g_propUpdateOriginal = nullptr;

    void sweepPropUpdate(G_ARGS)
    {
        const uint32_t p = GPR_U32(ctx, 4);
        if (RD(p + 0x8u) == 8u)
        {
            g_propUpdateOriginal(rdram, ctx, runtime);
            return;
        }
        const uint32_t flags = RD(p + 0x10u);
        if ((flags & 0x40000000u) == 0u)
        {
            const bool moved = !(RDF(p + 0x30u) == RDF(p + 0x70u)) || !(RDF(p + 0x34u) == RDF(p + 0x74u)) ||
                               !(RDF(p + 0x38u) == RDF(p + 0x78u)) || !(RDF(p + 0x4Cu) == RDF(p + 0x80u));
            if (moved || RD(p + 0xB8u) == 0u)
            {
                // propUpdate's frame, as the translation resumes at 0x269dfc.
                const uint64_t callerS0 = GPR_U64(ctx, kS0), callerRa = GPR_U64(ctx, kRa);
                const uint32_t sp = GPR_U32(ctx, kSp) - 0x30u;
                WRITE64(sp + 0x10u, callerS0);
                WRITE64(sp + 0x20u, callerRa);
                setR(ctx, kSp, sp);
                setR(ctx, kS0, p);
                if (!callGuest(G_PASS, kPropCalcRooms, 0x269DF4u, 0x269DFCu))
                    return;
                SET_GPR_U64(ctx, kS0, callerS0);
                SET_GPR_U64(ctx, kRa, callerRa);
                setR(ctx, kSp, sp + 0x30u);
            }
        }
        // The snapshot (the flags after propCalcRooms, which may not change them).
        const uint32_t x = RD(p + 0x30u), y = RD(p + 0x34u), z = RD(p + 0x38u);
        const uint32_t a = RD(p + 0x48u), b = RD(p + 0x4Cu), c = RD(p + 0x58u);
        const uint32_t f = RD(p + 0x10u);
        WR(p + 0x70u, x);
        WR(p + 0x14u, f);
        WR(p + 0x74u, y);
        WR(p + 0x78u, z);
        WR(p + 0x7Cu, a);
        WR(p + 0x80u, b);
        WR(p + 0x84u, c);
        ctx->pc = GPR_U32(ctx, kRa);
    }
} // namespace

void registerSweepProps(PS2Runtime &runtime)
{
    for (uint32_t i = 0; i < kCalleeCount; ++i)
        g_slot[i] = findSlot(kTargets[i]);
    std::memset(g_centre, 0, sizeof(g_centre));
    g_propUpdateOriginal = runtime.lookupFunction(0x269D78u);
    if (g_propUpdateOriginal == nullptr)
        g_propUpdateOriginal = &propUpdate_0x269d78;
    runtime.replaceFunction(0x26F500u, &sweepPropTickBefore);
    runtime.replaceFunction(0x26F9E8u, &sweepPropTickAfter);
    runtime.replaceFunction(0x269D78u, &sweepPropUpdate);
}

#else
void registerSweepProps(PS2Runtime &runtime) { (void)runtime; }
#endif
