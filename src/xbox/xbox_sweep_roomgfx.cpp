// The sweep's ROOMGFX package (xbox_sweep.h, make TS_SWEEP_ROOMGFX=1): the
// rooms' drawing preparation of every viewport, as natives.
//
//   bgGfx (0x256830)              the rooms by depth, each room's props and decals
//   propGfxRoom (0x26fe08)        one room's props (obInstGfx each)
//   propGfxRoomPreproc (0x26fd40) the per-room prop lists, rebuilt each viewport
//   decalGfx (0x2a61c8)           one room's decals (decalDraw each)
//   decalGfxMoving (0x2a6250)     the moving decals
//
// Each is the original's instructions in their order with the recompiler's
// semantics (32-bit results sign-extended, 64-bit compares, mult/div in
// LO/HI, the low 64 bits of a register written, its upper half kept; the
// one movn of the inlined lvGetDitherForXLU copies the whole register). The
// registers each original touches are held in a block of host variables
// (Regs). Before every guest call the whole block goes to the context and
// after it comes back from there, so at each call the context holds exactly
// what the original holds at that call (the callee, or the original resumed
// at the return address after a scheduler unwind, sees the same registers
// and the same stack frame), and after it the code goes on from the
// registers the callee left, as the original does. Loop back-edges keep the
// original's checkpoints at the original's loop heads (the block stored, pc
// the head, where the original resumes). Returns leave the block in the
// context: every register the original writes has the original's value.
//
// What is different:
// - Calls use the lean protocol (xbox_logic.h): the slot of each callee is
//   found once at registration; ra = the original's return address, pc the
//   target, the 8-cycle charge, the table entry (so other natives, the
//   job brackets and self-test replacements are honoured), then the
//   original's post-call tests.
// - obInstGfx's first two tests are made in propGfxRoom: a prop not drawn
//   in this viewport (its viewport bit clear in inst->F4->0x10, or its 0x100
//   flag set) is not called. That path of obInstGfx emits nothing and
//   writes only its stack frame's six saves and seven registers: the same
//   stores and register values are made here. Only the call's 8-cycle
//   scheduler charge is not made (a checkpoint can come a little later; no
//   game state depends on where the EE thread is preempted).
// - bgGfx's call of lvGetDitherForXLU (a five-instruction leaf, generated
//   code, no native) is inlined: v0, v1, a0 as it leaves them, the movn's
//   128-bit copy included. No 8-cycle charge either. (TS_PERF_JOBS: the
//   lvGetDitherForXLU job of bgGfx is no longer counted.)
// - decalGfx/decalGfxMoving end in a tail jump to dlSetZB: as in the
//   translation, the generated dlSetZB is called directly (not the table:
//   with TS_NATIVE_2D the table's dlSetZB writes a ring token in place of
//   the REF, and the list must stay what the current build writes).
//
// The display-list packets come from the same callees, called with the same
// arguments in the same order: byte-identical lists.
#include "xbox_sweep.h"

#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_recompiled_functions.h"

#include <cstdint>
#include <cstring>

extern const uint32_t g_ps2RecompiledFunctionAddresses[];

namespace
{
#define RG_INL inline __attribute__((always_inline))
#define G_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define G_PASS rdram, ctx, runtime

    // ---- The recompiler's integer semantics (as project/game/ts_native_game.cpp)
    RG_INL uint32_t lo32(uint64_t v) { return static_cast<uint32_t>(v); }
    RG_INL uint64_t sext32(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }
    RG_INL uint64_t addiu(uint64_t rs, int32_t imm) { return sext32(lo32(rs) + static_cast<uint32_t>(imm)); }
    RG_INL uint64_t addu(uint64_t a, uint64_t b) { return sext32(lo32(a) + lo32(b)); }
    RG_INL uint64_t slt(uint64_t a, uint64_t b) { return static_cast<int64_t>(a) < static_cast<int64_t>(b) ? 1u : 0u; }
    RG_INL uint64_t slti(uint64_t a, int32_t imm) { return static_cast<int64_t>(a) < static_cast<int64_t>(imm) ? 1u : 0u; }
    RG_INL uint64_t sltiu(uint64_t a, int32_t imm) { return a < static_cast<uint64_t>(static_cast<int64_t>(imm)) ? 1u : 0u; }
    RG_INL uint64_t sll32(uint64_t a, uint32_t sa) { return sext32(lo32(a) << sa); }
    RG_INL uint64_t lui(uint32_t imm) { return sext32(imm << 16); }
    RG_INL bool neg64(uint64_t a) { return static_cast<int64_t>(a) < 0; }
    RG_INL bool lez64(uint64_t a) { return static_cast<int64_t>(a) <= 0; }
#define LW(addr) sext32(READ32(addr))
#define LBU(addr) static_cast<uint64_t>(READ8(addr))

    // ---- The registers the five originals touch
    struct Regs
    {
        uint64_t v0, v1, a0, a1, a2, a3, t0, s0, s1, s2, s3, s4, s5, s6, s7, fp, sp;
        uint64_t lo, hi;
    };

    __attribute__((noinline)) void loadRegs(const R5900Context *ctx, Regs &r)
    {
        r.v0 = GPR_U64(ctx, 2);
        r.v1 = GPR_U64(ctx, 3);
        r.a0 = GPR_U64(ctx, 4);
        r.a1 = GPR_U64(ctx, 5);
        r.a2 = GPR_U64(ctx, 6);
        r.a3 = GPR_U64(ctx, 7);
        r.t0 = GPR_U64(ctx, 8);
        r.s0 = GPR_U64(ctx, 16);
        r.s1 = GPR_U64(ctx, 17);
        r.s2 = GPR_U64(ctx, 18);
        r.s3 = GPR_U64(ctx, 19);
        r.s4 = GPR_U64(ctx, 20);
        r.s5 = GPR_U64(ctx, 21);
        r.s6 = GPR_U64(ctx, 22);
        r.s7 = GPR_U64(ctx, 23);
        r.fp = GPR_U64(ctx, 30);
        r.sp = GPR_U64(ctx, 29);
        r.lo = ctx->lo;
        r.hi = ctx->hi;
    }

    // Low halves only, as every instruction here writes them.
    __attribute__((noinline)) void storeRegs(R5900Context *ctx, const Regs &r)
    {
        SET_GPR_U64(ctx, 2, r.v0);
        SET_GPR_U64(ctx, 3, r.v1);
        SET_GPR_U64(ctx, 4, r.a0);
        SET_GPR_U64(ctx, 5, r.a1);
        SET_GPR_U64(ctx, 6, r.a2);
        SET_GPR_U64(ctx, 7, r.a3);
        SET_GPR_U64(ctx, 8, r.t0);
        SET_GPR_U64(ctx, 16, r.s0);
        SET_GPR_U64(ctx, 17, r.s1);
        SET_GPR_U64(ctx, 18, r.s2);
        SET_GPR_U64(ctx, 19, r.s3);
        SET_GPR_U64(ctx, 20, r.s4);
        SET_GPR_U64(ctx, 21, r.s5);
        SET_GPR_U64(ctx, 22, r.s6);
        SET_GPR_U64(ctx, 23, r.s7);
        SET_GPR_U64(ctx, 30, r.fp);
        SET_GPR_U64(ctx, 29, r.sp);
        ctx->lo = r.lo;
        ctx->hi = r.hi;
    }

    // mult rd, rs, rt: the 64-bit product in HI/LO, its low word in rd.
    RG_INL uint64_t mult(Regs &r, uint64_t rs, uint64_t rt)
    {
        const int64_t p = static_cast<int64_t>(static_cast<int32_t>(lo32(rs))) * static_cast<int32_t>(lo32(rt));
        r.lo = sext32(static_cast<uint32_t>(p));
        r.hi = sext32(static_cast<uint32_t>(static_cast<uint64_t>(p) >> 32));
        return r.lo;
    }

    // div $zero, rs, rt (rt is 10 here: never zero, never -1).
    RG_INL void div10(Regs &r, uint64_t rs)
    {
        const int32_t n = static_cast<int32_t>(lo32(rs));
        r.lo = static_cast<uint64_t>(static_cast<int64_t>(n / 10));
        r.hi = static_cast<uint64_t>(static_cast<int64_t>(n % 10));
    }

    // ---- The callees and their table slots (found at registration)
    enum Callee : uint32_t
    {
        kDlSetZB,
        kDlSetBlend,
        kDlSetDither,
        kDlSetClip,
        kPropGfxRoom,
        kDecalGfx,
        kBgGlassGfxRoom,
        kDecalGfxMoving,
        kObInstGfx,
        kDecalDraw,
        kCallees
    };
    constexpr uint32_t kTarget[kCallees] = {0x2B7CD0u, 0x2B7EA8u, 0x2B7DF0u, 0x2B8050u, 0x26FE08u,
                                            0x2A61C8u, 0x258888u, 0x2A6250u, 0x262A60u, 0x2A5B20u};
    uint32_t g_slot[kCallees];

    constexpr uint32_t kDispatchCycles = 8u; // EeScheduler::kGuestDispatchCycles (PS2X_GUEST_DISPATCH_CYCLES)

    // A constant call as the lean protocol makes it. true: the callee came
    // back to `next` (pc is next); false: the caller returns at once.
    RG_INL bool rawCall(G_ARGS, uint32_t callee, uint32_t source, uint32_t next)
    {
        const uint32_t target = kTarget[callee];
        SET_GPR_U32(ctx, 31, next);
        const uint32_t slot = g_slot[callee];
        if (slot == ~0u)
            return runtime->dispatchGuestBranch(rdram, ctx, target, source, next,
                                                PS2Runtime::GuestBranchKind::DirectCall, "JAL");
        ctx->pc = target;
        if (runtime->eeCheckpointDue(kDispatchCycles))
            return false;
        g_ps2RecompiledFunctionTable[slot](rdram, ctx, runtime);
        if (__builtin_expect(ctx->pc == next, 1))
            return !runtime->isStopRequested();
        if (runtime->isStopRequested() || ctx->pc == 0u)
            return false;
        if (ctx->pc == target)
            ctx->pc = next; // a native that left pc at its entry
        return ctx->pc == next;
    }

    // The block to the context, the call, the block back from the context.
    __attribute__((noinline)) bool call(G_ARGS, Regs &r, uint32_t callee, uint32_t source, uint32_t next)
    {
        storeRegs(ctx, r);
        if (!rawCall(G_PASS, callee, source, next))
            return false;
        loadRegs(ctx, r);
        return true;
    }

    // A loop back-edge's checkpoint: true when due (the block stored, pc the
    // loop head: the original resumes there).
    RG_INL bool backEdge(G_ARGS, const Regs &r, uint32_t head)
    {
        ctx->pc = head;
        if (__builtin_expect(!runtime->eeCheckpointDue(), 1))
            return false;
        storeRegs(ctx, r);
        return true;
    }

    RG_INL void finish(R5900Context *ctx, const Regs &r)
    {
        storeRegs(ctx, r);
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---- Guest addresses
    constexpr uint32_t kViewport = 0x4DCCu;     // gp-: the current viewport's struct (its word 0: the index)
    constexpr uint32_t kRoomCount = 0x5D9Cu;    // gp-: the level's rooms
    constexpr uint32_t kRoomsDrawn = 0x6CD0u;   // gp-: rooms drawn (viewport 0 counts)
    constexpr uint32_t kXluMode = 0x6090u;      // gp-: lvGetDitherForXLU's mode word
    constexpr uint32_t kPropCount = 0x4EA4u;    // gp-: props
    constexpr uint32_t kProps = 0x4F84u;        // gp-: the prop array (0x250 bytes each)
    constexpr uint32_t kAllProps = 0x634Cu;     // gp-: nonzero: props of type 2 are listed too
    constexpr uint32_t kMovingDecals = 0x4CF4u; // gp-: the moving decals' list index
    // Fixed tables (built from lui/addiu as the originals do): 0x1FE9598 the
    // props listed per room [0xD6], 0x1FD48C8 the lists [room][100],
    // 0x1FE9D48 each room's first decal (linked by +0xC0).
    constexpr uint32_t kClipRect = 0x3299F0u; // the viewport's clip (dlSetClip's corners)

    // ---- propGfxRoomPreproc (0x26fd40)
    //
    // The room lists: the 213 counts cleared (0..0xD4: room 0xD5's count is
    // never cleared, as in the original), then every prop (but those of type
    // 2 unless gp-0x634C) appended to its room's list while the list has
    // fewer than 100 and the room is below 0xD6. A leaf.
    void nativePropGfxRoomPreproc(G_ARGS)
    {
        Regs r;
        loadRegs(ctx, r);
        uint64_t t1 = GPR_U64(ctx, 9), t2 = GPR_U64(ctx, 10), t3 = GPR_U64(ctx, 11), t4 = GPR_U64(ctx, 12);
        uint64_t t5, t6;
        const uint32_t gp = GPR_U32(ctx, 28);
        auto storeAll = [&]() {
            storeRegs(ctx, r);
            SET_GPR_U64(ctx, 9, t1);
            SET_GPR_U64(ctx, 10, t2);
            SET_GPR_U64(ctx, 11, t3);
            SET_GPR_U64(ctx, 12, t4);
            SET_GPR_U64(ctx, 13, t5);
            SET_GPR_U64(ctx, 14, t6);
        };
        t6 = lui(0x1FFu);                       // 26fd40
        t5 = LW(gp - kPropCount);               // 26fd44
        r.v0 = addiu(t6, -0x6A68);              // 26fd48
        t2 = 0xD4u;                             // 26fd4c
        r.v0 = addiu(r.v0, 0x350);              // 26fd50
        for (;;)
        {
            // L_26fd58
            WRITE32(lo32(r.v0), 0u);
            t2 = addiu(t2, -1);
            r.v0 = addiu(r.v0, -4);
            if (neg64(t2))                      // 26fd6c bgez
                break;
            ctx->pc = 0x26FD58u;
            if (__builtin_expect(runtime->eeCheckpointDue(), 0))
            {
                storeAll();
                return;
            }
        }
        // 26fd74
        const bool none = lez64(t5);
        t2 = 0u;
        if (!none)
        {
            t4 = LW(gp - kProps);               // 26fd7c
            t3 = LW(gp - kAllProps);            // 26fd80
            r.v0 = 0x250u;                      // 26fd84
            for (;;)
            {
                // L_26fd88
                r.v1 = mult(r, t2, r.v0);
                const bool all = t3 != 0u;
                r.t0 = addu(r.v1, t4);
                bool skipType = false;
                if (!all)
                {
                    r.v1 = LW(lo32(r.t0) + 0x8u);
                    r.v0 = 2u;
                    if (r.v1 == r.v0)           // 26fd9c beql
                    {
                        t2 = addiu(t2, 1);
                        skipType = true;
                    }
                }
                if (!skipType)
                {
                    // L_26fda4
                    r.a3 = LW(lo32(r.t0) + 0xCu);
                    r.v0 = addiu(t6, -0x6A68);
                    r.v1 = sll32(r.a3, 2);
                    t1 = addu(r.v1, r.v0);
                    r.a2 = LW(lo32(t1));
                    r.v0 = slti(r.a2, 100);
                    const bool full = r.v0 == 0u;
                    r.v0 = sltiu(r.a3, 0xD6);
                    if (!full)
                    {
                        const bool outside = r.v0 == 0u;
                        r.a0 = 400u;
                        if (!outside)
                        {
                            r.a1 = lui(0x1FDu);
                            r.a0 = mult(r, r.a0, r.a3);
                            r.v1 = sll32(r.a2, 2);
                            r.a1 = addiu(r.a1, 0x48C8);
                            r.v0 = addiu(r.a2, 1);
                            WRITE32(lo32(t1), lo32(r.v0));
                            r.v1 = addu(r.v1, r.a0);
                            r.v1 = addu(r.v1, r.a1);
                            WRITE32(lo32(r.v1), lo32(r.t0));
                        }
                    }
                    // L_26fdf0
                    t2 = addiu(t2, 1);
                }
                // L_26fdf4
                r.v0 = slt(t2, t5);
                if (r.v0 == 0u)
                    break;
                r.v0 = 0x250u;                  // 26fdfc (delay slot)
                ctx->pc = 0x26FD88u;
                if (__builtin_expect(runtime->eeCheckpointDue(), 0))
                {
                    storeAll();
                    return;
                }
            }
        }
        // 26fe00 jr $ra
        storeAll();
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---- propGfxRoom (0x26fe08)(room, pass)
    //
    // Each listed prop whose flags (+0x10, 64-bit) have bit 0 and not bit 31:
    // the viewport's clip first when its type (+4) is 0x136, then
    // obInstGfx(prop->0x20, pass). obInstGfx's own first tests are made here.
    void nativePropGfxRoom(G_ARGS)
    {
        Regs r;
        loadRegs(ctx, r);
        const uint32_t gp = GPR_U32(ctx, 28);
        r.sp = addiu(r.sp, -0x80);                         // 26fe08
        const uint32_t sp = lo32(r.sp);
        WRITE64(sp + 0x50u, r.s5);
        WRITE64(sp + 0x30u, r.s3);
        r.s5 = lui(0x1FFu);
        WRITE64(sp + 0x20u, r.s2);
        r.s3 = r.a0;
        WRITE64(sp + 0x60u, r.s6);
        r.s2 = sll32(r.s3, 2);
        WRITE64(sp + 0x10u, r.s1);
        r.v0 = addiu(r.s5, -0x6A68);
        WRITE64(sp + 0x70u, GPR_U64(ctx, 31));
        r.v0 = addu(r.s2, r.v0);
        WRITE64(sp + 0x40u, r.s4);
        r.s6 = r.a1;
        WRITE64(sp, r.s0);
        r.v1 = LW(lo32(r.v0));                             // 26fe44
        r.s1 = 0u;
        if (!lez64(r.v1))
        {
            r.s4 = lui(0x1FDu);                            // 26fe50
            r.v0 = 400u;
            for (;;)
            {
                // L_26fe58
                r.v1 = sll32(r.s1, 2);
                r.v0 = mult(r, r.s3, r.v0);
                r.a0 = addiu(r.s4, 0x48C8);
                r.a1 = 0x80000001u;                        // ori/dsll/ori: 64-bit, not sign-extended
                r.a2 = 1u;
                r.v1 = addu(r.v1, r.v0);
                r.v1 = addu(r.v1, r.a0);
                r.s0 = LW(lo32(r.v1));                     // 26fe7c
                r.v0 = READ64(lo32(r.s0) + 0x10u) & r.a1;
                const bool drawn = r.v0 == r.a2;
                r.v1 = addiu(r.s5, -0x6A68);               // 26fe8c (delay slot)
                if (drawn)
                {
                    r.v1 = LW(lo32(r.s0) + 0x4u);          // 26fe90
                    r.v0 = 0x136u;
                    if (r.v1 != r.v0)
                    {
                        r.a0 = LW(lo32(r.s0) + 0x20u);     // 26fe9c (bnel delay slot)
                    }
                    else
                    {
                        r.v0 = lui(0x33u);                 // 26fea0
                        r.v1 = addiu(r.v0, -0x6610);
                        r.a0 = LW(kClipRect);
                        r.a3 = LW(lo32(r.v1) + 0x18u);
                        r.a1 = LW(lo32(r.v1) + 0x14u);
                        r.a2 = LW(lo32(r.v1) + 0x4u);
                        if (!call(G_PASS, r, kDlSetClip, 0x26FEB4u, 0x26FEBCu))
                            return;
                        r.a0 = LW(lo32(r.s0) + 0x20u);     // 26febc
                    }
                    // L_26fec0: jal obInstGfx, a1 = pass in the delay slot
                    r.a1 = r.s6;
                    // obInstGfx's entry to its first two tests (0x262a60-0x262aac).
                    const uint64_t inst = r.a0;
                    const uint64_t view = LW(gp - kViewport);
                    const uint64_t flags = LW(lo32(LW(lo32(inst) + 0xF4u)) + 0x10u);
                    const uint64_t index = LW(lo32(view));
                    const uint64_t bit = sext32(0x1000000u << (lo32(index) & 31u));
                    const uint64_t a3 = LW(lo32(inst));
                    uint64_t v0 = bit & flags;
                    bool skip = v0 == 0u;
                    if (!skip)
                    {
                        v0 = flags & 0x100u;
                        skip = v0 != 0u;
                    }
                    if (skip)
                    {
                        // Its frame's saves and the registers its early return leaves.
                        const uint32_t frame = sp - 0x60u;
                        WRITE64(frame + 0x10u, r.s1);
                        WRITE64(frame, r.s0);
                        WRITE64(frame + 0x50u, sext32(0x26FEC8u));
                        WRITE64(frame + 0x40u, r.s4);
                        WRITE64(frame + 0x30u, r.s3);
                        WRITE64(frame + 0x20u, r.s2);
                        SET_GPR_U32(ctx, 31, 0x26FEC8u);
                        r.a0 = flags;
                        r.a2 = view;
                        r.a3 = a3;
                        r.v0 = v0;
                        r.v1 = index;
                    }
                    else if (!call(G_PASS, r, kObInstGfx, 0x26FEC0u, 0x26FEC8u))
                        return;
                }
                // L_26fec8
                r.v1 = addiu(r.s5, -0x6A68);
                r.s1 = addiu(r.s1, 1);
                r.v1 = addu(r.s2, r.v1);
                r.v0 = LW(lo32(r.v1));
                r.v0 = slt(r.s1, r.v0);
                if (r.v0 == 0u)
                    break;
                r.v0 = 400u;                               // 26fee0 (delay slot)
                if (backEdge(G_PASS, r, 0x26FE58u))
                    return;
            }
        }
        // L_26fee4
        SET_GPR_U64(ctx, 31, READ64(sp + 0x70u));
        r.s6 = READ64(sp + 0x60u);
        r.s5 = READ64(sp + 0x50u);
        r.s4 = READ64(sp + 0x40u);
        r.s3 = READ64(sp + 0x30u);
        r.s2 = READ64(sp + 0x20u);
        r.s1 = READ64(sp + 0x10u);
        r.s0 = READ64(sp);
        r.sp = addiu(r.sp, 0x80);
        finish(ctx, r);
    }

    // ---- decalGfx (0x2a61c8)(room) and decalGfxMoving (0x2a6250)
    //
    // Depth mode 2, blend 1, dither 2; decalDraw(decal, decal->0xE0) along
    // the list; dither 1; the previous depth mode back (a tail jump).
    template <bool Moving>
    void decals(G_ARGS)
    {
        constexpr uint32_t base = Moving ? 0x2A6250u : 0x2A61C8u;
        Regs r;
        loadRegs(ctx, r);
        const uint32_t gp = GPR_U32(ctx, 28);
        r.sp = addiu(r.sp, -0x30);
        const uint32_t sp = lo32(r.sp);
        if (Moving)
        {
            WRITE64(sp + 0x10u, r.s1);
            WRITE64(sp, r.s0);
            WRITE64(sp + 0x20u, GPR_U64(ctx, 31));
        }
        else
        {
            WRITE64(sp, r.s0);
            r.s0 = r.a0;
            WRITE64(sp + 0x10u, r.s1);
            WRITE64(sp + 0x20u, GPR_U64(ctx, 31));
        }
        // decalGfxMoving's prologue is one instruction shorter (no s0 = a0):
        // its first three calls sit 4 bytes earlier.
        constexpr uint32_t pre = Moving ? 0x10u : 0x14u;
        r.a0 = 2u;
        if (!call(G_PASS, r, kDlSetZB, base + pre, base + pre + 8u))
            return;
        r.s1 = r.v0;
        r.a0 = 1u;
        if (!call(G_PASS, r, kDlSetBlend, base + pre + 0xCu, base + pre + 0x14u))
            return;
        r.a0 = 2u;
        if (!call(G_PASS, r, kDlSetDither, base + pre + 0x14u, base + pre + 0x1Cu))
            return;
        if (Moving)
        {
            r.v1 = LW(gp - kMovingDecals);                 // 2a627c
            r.v0 = lui(0x1FFu);
            r.v0 = addiu(r.v0, -0x62B8);
            r.v1 = sll32(r.v1, 2);
            r.v1 = addu(r.v1, r.v0);
            r.s0 = LW(lo32(r.v1));
        }
        else
        {
            r.v1 = lui(0x1FFu);                            // 2a61f8
            r.s0 = sll32(r.s0, 2);
            r.v1 = addiu(r.v1, -0x62B8);
            r.s0 = addu(r.s0, r.v1);
            r.s0 = LW(lo32(r.s0));
        }
        if (r.s0 != 0u)
        {
            uint32_t alpha = READ32(lo32(r.s0) + 0xE0u);   // lwc1 $f12, 0xE0($s0)
            std::memcpy(&ctx->f[12], &alpha, 4);
            for (;;)
            {
                // the loop head: jal decalDraw, a0 = decal in the delay slot
                r.a0 = r.s0;
                if (!call(G_PASS, r, kDecalDraw, base + 0x50u, base + 0x58u))
                    return;
                r.s0 = LW(lo32(r.s0) + 0xC0u);
                if (r.s0 == 0u)
                    break;
                alpha = READ32(lo32(r.s0) + 0xE0u);         // bnel delay slot
                std::memcpy(&ctx->f[12], &alpha, 4);
                if (backEdge(G_PASS, r, base + 0x50u))
                    return;
            }
        }
        r.a0 = 1u;
        if (!call(G_PASS, r, kDlSetDither, base + 0x64u, base + 0x6Cu))
            return;
        r.a0 = r.s1;
        SET_GPR_U64(ctx, 31, READ64(sp + 0x20u));
        r.s1 = READ64(sp + 0x10u);
        r.s0 = READ64(sp);
        r.sp = addiu(r.sp, 0x30);
        // j dlSetZB: the generated function, as the translation calls it.
        storeRegs(ctx, r);
        ctx->pc = 0x2B7CD0u;
        dlSetZB_0x2b7cd0(rdram, ctx, runtime);
    }

    void nativeDecalGfx(G_ARGS) { decals<false>(G_PASS); }
    void nativeDecalGfxMoving(G_ARGS) { decals<true>(G_PASS); }

    // ---- bgGfx (0x256830)
    //
    // Per viewport: the rooms' depth buckets (the viewport's portal depths,
    // capped at 24, rooms of depth 25 or more not listed), the debug string
    // of the rooms on the stack; the fixed lists (the viewport's own 0xCD+n,
    // 0xD3, 0xD1, 0xD4); then the rooms from the deepest bucket, each one on
    // screen (its clip x0 below 640 and below x1) drawn: opaque props and
    // decals, translucent props and glass; the moving decals and list 0xD2
    // last; the depth mode back.
    void nativeBgGfx(G_ARGS)
    {
        Regs r;
        loadRegs(ctx, r);
        const uint32_t gp = GPR_U32(ctx, 28);
        r.sp = addiu(r.sp, -0x490);                        // 256830
        const uint32_t sp = lo32(r.sp);
        r.a0 = 0u;
        WRITE64(sp + 0x470u, r.fp);
        WRITE64(sp + 0x400u, r.s1);
        WRITE64(sp + 0x480u, GPR_U64(ctx, 31));
        r.s1 = lui(0x35u);
        WRITE64(sp + 0x460u, r.s7);
        WRITE64(sp + 0x450u, r.s6);
        WRITE64(sp + 0x440u, r.s5);
        WRITE64(sp + 0x430u, r.s4);
        WRITE64(sp + 0x420u, r.s3);
        WRITE64(sp + 0x410u, r.s2);
        WRITE64(sp + 0x3F0u, r.s0);
        if (!call(G_PASS, r, kDlSetZB, 0x256860u, 0x256868u))
            return;
        // 256868: the depth limit
        r.t0 = LW(gp - kViewport);
        r.fp = r.v0;
        r.a1 = addiu(r.s1, 0x7340);
        r.v0 = LW(lo32(r.t0));
        r.v0 = sll32(r.v0, 2);
        r.a0 = addu(r.v0, r.a1);
        r.v1 = LW(lo32(r.a0));
        r.v1 = slti(r.v1, 25);
        r.a2 = r.t0;
        if (r.v1 == 0u)
        {
            r.v0 = 24u;
            WRITE32(lo32(r.a0), lo32(r.v0));
        }
        // L_256898: the buckets emptied
        r.v0 = LW(lo32(r.t0));
        r.v0 = sll32(r.v0, 2);
        r.v0 = addu(r.v0, r.a1);
        r.v1 = LW(lo32(r.v0));
        r.s2 = 0u;
        if (!neg64(r.v1))
        {
            r.a3 = LW(gp - kRoomCount);                    // 2568b0
            r.s7 = lui(0x1FCu);
            r.s3 = lui(0x33u);
            r.v1 = sll32(r.s2, 2);
            for (;;)
            {
                // L_2568c0
                r.v0 = addiu(r.s7, 0x4A10);
                r.v1 = addu(r.v1, r.v0);
                r.a0 = addiu(r.s1, 0x7340);
                WRITE32(lo32(r.v1), 0u);
                r.s2 = addiu(r.s2, 1);
                r.v0 = LW(lo32(r.a2));
                r.v0 = sll32(r.v0, 2);
                r.v0 = addu(r.v0, r.a0);
                r.v1 = LW(lo32(r.v0));
                r.v1 = slt(r.v1, r.s2);
                const bool more = r.v1 == 0u;
                r.v1 = sll32(r.s2, 2);                     // 2568ec (delay slot)
                if (!more)
                    break;
                if (backEdge(G_PASS, r, 0x2568C0u))
                    return;
            }
            r.v0 = LW(lo32(r.t0));                         // 2568f4 (delay slot of the b)
        }
        else
        {
            r.a3 = LW(gp - kRoomCount);                    // 2568f8
            r.s3 = lui(0x33u);
            r.v0 = LW(lo32(r.t0));
        }
        // L_256904
        if (r.v0 == 0u)
            WRITE32(gp - kRoomsDrawn, 0u);
        // L_25690c: the rooms into their depth buckets, the debug string
        r.s0 = 1u;
        r.v0 = addiu(r.a3, 1);
        r.v0 = slt(r.s0, r.v0);
        if (r.v0 != 0u)
        {
            r.s6 = lui(0x35u);
            r.v1 = LW(lo32(r.t0));
            for (;;)
            {
                // L_256928
                r.a0 = 20u;
                r.a0 = mult(r, r.s0, r.a0);
                r.a1 = addiu(r.s6, 0x7330);
                r.v1 = sll32(r.v1, 2);
                r.v1 = addu(r.v1, r.a1);
                r.v0 = LW(lo32(r.v1));
                r.a0 = addu(r.a0, r.v0);
                r.a2 = LW(lo32(r.a0));
                r.v0 = sltiu(r.a2, 25);
                r.s7 = lui(0x1FCu);                        // 256950 (delay slot)
                if (r.v0 != 0u)
                {
                    r.a1 = sll32(r.a2, 2);
                    r.v0 = addiu(r.s7, 0x4A10);
                    r.a0 = 200u;
                    r.a1 = addu(r.a1, r.v0);
                    r.a0 = mult(r, r.a0, r.a2);
                    r.v1 = LW(lo32(r.a1));
                    r.s5 = lui(0x1FCu);
                    r.a2 = addiu(r.s5, 0x4A78);
                    r.v0 = r.v1;
                    r.v0 = addu(r.v0, r.a0);
                    r.v1 = addiu(r.v1, 1);
                    r.v0 = addu(r.v0, r.a2);
                    WRITE32(lo32(r.a1), lo32(r.v1));
                    WRITE8(lo32(r.v0), static_cast<uint8_t>(r.s0));
                }
                // L_25698c
                r.v1 = 10u;
                r.v0 = addiu(r.s0, -1);
                div10(r, r.s0);
                r.a1 = addu(r.sp, r.v0);
                r.v0 = 9u;
                r.a0 = r.hi;
                const bool nine = r.a0 == r.v0;
                r.v0 = 0x2Eu;                              // 2569b0 (delay slot)
                if (nine)
                    r.v0 = 0x3Au;
                WRITE8(lo32(r.a1), static_cast<uint8_t>(r.v0));
                r.s0 = addiu(r.s0, 1);
                r.v0 = addiu(r.a3, 1);
                r.v0 = slt(r.s0, r.v0);
                if (r.v0 == 0u)
                    break;
                r.v1 = LW(lo32(r.t0));                     // 2569cc (bnel delay slot)
                if (backEdge(G_PASS, r, 0x256928u))
                    return;
            }
        }
        // L_2569d0: the fixed lists
        r.a0 = 0u;
        if (!call(G_PASS, r, kDlSetBlend, 0x2569D0u, 0x2569D8u))
            return;
        r.v1 = addiu(r.s3, -0x6610);
        r.a0 = LW(lo32(r.s3) - 0x6610u);
        r.a3 = LW(lo32(r.v1) + 0x18u);
        r.a1 = LW(lo32(r.v1) + 0x14u);
        r.a2 = LW(lo32(r.v1) + 0x4u);
        if (!call(G_PASS, r, kDlSetClip, 0x2569E8u, 0x2569F0u))
            return;
        r.a0 = LW(gp - kViewport);
        r.v0 = LW(lo32(r.a0) + 0x184u);
        r.a1 = 0u;
        if (r.v0 != 0u)
        {
            r.a0 = LW(lo32(r.a0));
            r.a0 = addiu(r.a0, 0xCD);
            if (!call(G_PASS, r, kPropGfxRoom, 0x256A04u, 0x256A0Cu))
                return;
        }
        r.a0 = 1u;
        if (!call(G_PASS, r, kDlSetBlend, 0x256A0Cu, 0x256A14u))
            return;
        r.a0 = 2u;
        if (!call(G_PASS, r, kDlSetZB, 0x256A14u, 0x256A1Cu))
            return;
        r.a0 = 0xD3u;
        r.a1 = 1u;
        if (!call(G_PASS, r, kPropGfxRoom, 0x256A20u, 0x256A28u))
            return;
        r.a0 = 3u;
        if (!call(G_PASS, r, kDlSetZB, 0x256A28u, 0x256A30u))
            return;
        r.a0 = 0xD1u;
        r.a1 = 0u;
        if (!call(G_PASS, r, kPropGfxRoom, 0x256A34u, 0x256A3Cu))
            return;
        r.a0 = 0xD1u;
        r.a1 = 1u;
        if (!call(G_PASS, r, kPropGfxRoom, 0x256A40u, 0x256A48u))
            return;
        r.a0 = 0u;
        if (!call(G_PASS, r, kDlSetBlend, 0x256A48u, 0x256A50u))
            return;
        r.a0 = 3u;
        if (!call(G_PASS, r, kDlSetZB, 0x256A50u, 0x256A58u))
            return;
        r.a0 = 0xD4u;
        r.a1 = 0u;
        if (!call(G_PASS, r, kPropGfxRoom, 0x256A5Cu, 0x256A64u))
            return;
        r.a0 = 1u;
        if (!call(G_PASS, r, kDlSetBlend, 0x256A64u, 0x256A6Cu))
            return;
        r.a0 = 2u;
        if (!call(G_PASS, r, kDlSetZB, 0x256A6Cu, 0x256A74u))
            return;
        r.a0 = 0xD4u;
        r.a1 = 1u;
        if (!call(G_PASS, r, kPropGfxRoom, 0x256A78u, 0x256A80u))
            return;
        // 256a80: the rooms, deepest bucket first
        r.v0 = LW(gp - kViewport);
        r.a0 = addiu(r.s1, 0x7340);
        r.v1 = LW(lo32(r.v0));
        r.v1 = sll32(r.v1, 2);
        r.v1 = addu(r.v1, r.a0);
        r.s2 = LW(lo32(r.v1));
        r.s7 = lui(0x1FCu);                                // 256a9c (delay slot)
        if (!neg64(r.s2))
        {
            r.v1 = addiu(r.s7, 0x4A10);
            for (;;)
            {
                // L_256aa8: a bucket
                r.v0 = sll32(r.s2, 2);
                r.v0 = addu(r.v0, r.v1);
                r.s4 = LW(lo32(r.v0));
                r.s1 = 0u;
                if (lez64(r.s4))
                {
                    r.s3 = addiu(r.s2, -1);                // L_256bd4
                }
                else
                {
                    r.s6 = lui(0x35u);
                    r.s5 = lui(0x1FCu);
                    r.s3 = addiu(r.s2, -1);
                    r.v1 = 200u;
                    for (;;)
                    {
                        // L_256ad0: a room of the bucket
                        r.a2 = addiu(r.s5, 0x4A78);
                        r.v0 = mult(r, r.s2, r.v1);
                        r.a0 = 20u;
                        r.a1 = addiu(r.s6, 0x7330);
                        r.v1 = addu(r.v0, r.s1);
                        r.v0 = LW(gp - kViewport);
                        r.v1 = addu(r.v1, r.a2);
                        r.s0 = LBU(lo32(r.v1));
                        r.a3 = LW(lo32(r.v0));
                        r.a0 = mult(r, r.s0, r.a0);
                        r.v0 = sll32(r.a3, 2);
                        r.v0 = addu(r.v0, r.a1);
                        r.v1 = LW(lo32(r.v0));
                        r.v0 = addu(r.a0, r.v1);
                        r.v1 = LW(lo32(r.v0) + 0xCu);
                        bool drawn = false;
                        if (neg64(r.v1))
                        {
                            r.s1 = addiu(r.s1, 1);         // bltzl delay slot: to L_256bc0
                        }
                        else
                        {
                            r.a0 = LW(lo32(r.v0) + 0x4u);
                            r.v0 = slti(r.a0, 0x280);
                            const bool right = r.v0 == 0u;
                            r.v0 = slt(r.a0, r.v1);        // 256b20 (delay slot)
                            if (right)
                                r.s1 = addiu(r.s1, 1);     // L_256bbc
                            else if (r.v0 == 0u)
                                r.s1 = addiu(r.s1, 1);     // beql delay slot: to L_256bc0
                            else
                                drawn = true;
                        }
                        if (drawn)
                        {
                            const bool counted = r.a3 != 0u;
                            r.v0 = LW(gp - kRoomsDrawn);   // 256b30 (delay slot)
                            if (!counted)
                            {
                                r.v0 = addiu(r.v0, 1);
                                WRITE32(gp - kRoomsDrawn, lo32(r.v0));
                            }
                            r.a0 = 0u;
                            if (!call(G_PASS, r, kDlSetBlend, 0x256B3Cu, 0x256B44u))
                                return;
                            r.a0 = 3u;
                            if (!call(G_PASS, r, kDlSetZB, 0x256B44u, 0x256B4Cu))
                                return;
                            r.a0 = 1u;
                            if (!call(G_PASS, r, kDlSetDither, 0x256B4Cu, 0x256B54u))
                                return;
                            r.a0 = r.s0;
                            r.a1 = 0u;
                            if (!call(G_PASS, r, kPropGfxRoom, 0x256B58u, 0x256B60u))
                                return;
                            r.a0 = r.s0;
                            if (!call(G_PASS, r, kDecalGfx, 0x256B60u, 0x256B68u))
                                return;
                            r.a0 = 1u;
                            if (!call(G_PASS, r, kDlSetBlend, 0x256B68u, 0x256B70u))
                                return;
                            r.a0 = 2u;
                            if (!call(G_PASS, r, kDlSetZB, 0x256B70u, 0x256B78u))
                                return;
                            // jal lvGetDitherForXLU (0x226df8), inline: v0 = 2 unless the
                            // mode is 0x17, then 1 (movn: the whole register from a0).
                            r.v1 = LW(gp - kXluMode);
                            r.a0 = 2u;
                            r.v0 = 1u;
                            r.v1 = r.v1 ^ 0x17u;
                            if (r.v1 != 0u)
                            {
                                r.v0 = r.a0;
                                std::memcpy(reinterpret_cast<uint8_t *>(&ctx->r[2]) + 8,
                                            reinterpret_cast<const uint8_t *>(&ctx->r[4]) + 8, 8);
                            }
                            SET_GPR_U32(ctx, 31, 0x256B80u);
                            r.a0 = r.v0;
                            if (!call(G_PASS, r, kDlSetDither, 0x256B80u, 0x256B88u))
                                return;
                            r.a0 = r.s0;
                            r.a1 = 1u;
                            if (!call(G_PASS, r, kPropGfxRoom, 0x256B8Cu, 0x256B94u))
                                return;
                            r.a0 = r.s0;
                            if (!call(G_PASS, r, kBgGlassGfxRoom, 0x256B94u, 0x256B9Cu))
                                return;
                            // 256b9c: the room's digit in the debug string
                            r.v0 = 10u;
                            r.a0 = addu(r.s0, r.sp);
                            div10(r, r.s0);
                            r.v1 = r.hi;
                            r.v1 = addiu(r.v1, 0x30);
                            WRITE8(lo32(r.a0) - 1u, static_cast<uint8_t>(r.v1));
                            r.s1 = addiu(r.s1, 1);         // L_256bbc
                        }
                        // L_256bc0
                        r.v0 = slt(r.s1, r.s4);
                        r.v1 = 200u;                       // 256bc8 (delay slot)
                        if (r.v0 == 0u)
                            break;
                        if (backEdge(G_PASS, r, 0x256AD0u))
                            return;
                    }
                    // 256bcc b L_256bd8, delay slot s2 = s3
                    r.s2 = r.s3;
                }
                // L_256bd8
                r.s2 = r.s3;
                r.v1 = addiu(r.s7, 0x4A10);                // 256be0 (delay slot)
                if (neg64(r.s2))
                    break;
                if (backEdge(G_PASS, r, 0x256AA8u))
                    return;
            }
        }
        // L_256be4: the moving decals and list 0xD2
        if (!call(G_PASS, r, kDecalGfxMoving, 0x256BE4u, 0x256BECu))
            return;
        r.a0 = 1u;
        if (!call(G_PASS, r, kDlSetBlend, 0x256BECu, 0x256BF4u))
            return;
        r.a0 = 3u;
        if (!call(G_PASS, r, kDlSetZB, 0x256BF4u, 0x256BFCu))
            return;
        r.a0 = 0xD2u;
        r.a1 = 0u;
        if (!call(G_PASS, r, kPropGfxRoom, 0x256C00u, 0x256C08u))
            return;
        r.a0 = 0xD2u;
        r.a1 = 1u;
        if (!call(G_PASS, r, kPropGfxRoom, 0x256C0Cu, 0x256C14u))
            return;
        r.a0 = r.fp;
        if (!call(G_PASS, r, kDlSetZB, 0x256C14u, 0x256C1Cu))
            return;
        // 256c1c
        r.v1 = LW(gp - kRoomCount);
        SET_GPR_U64(ctx, 31, READ64(sp + 0x480u));
        r.v0 = addu(r.sp, r.v1);
        r.fp = READ64(sp + 0x470u);
        r.s7 = READ64(sp + 0x460u);
        r.s6 = READ64(sp + 0x450u);
        r.s5 = READ64(sp + 0x440u);
        r.s4 = READ64(sp + 0x430u);
        r.s3 = READ64(sp + 0x420u);
        r.s2 = READ64(sp + 0x410u);
        r.s1 = READ64(sp + 0x400u);
        r.s0 = READ64(sp + 0x3F0u);
        WRITE8(lo32(r.v0), 0u);
        r.sp = addiu(r.sp, 0x490);
        finish(ctx, r);
    }

    // The slot of a guest address in the compact function table (sorted).
    uint32_t findSlot(uint32_t address)
    {
        uint32_t lo = 0u, hi = g_ps2RecompiledFunctionTableSlotCount;
        while (lo < hi)
        {
            const uint32_t mid = lo + (hi - lo) / 2u;
            const uint32_t a = g_ps2RecompiledFunctionAddresses[mid];
            if (a == address)
                return g_ps2RecompiledFunctionTable[mid] != nullptr ? mid : ~0u;
            if (a < address)
                lo = mid + 1u;
            else
                hi = mid;
        }
        return ~0u;
    }
} // namespace

void registerSweepRoomGfx(PS2Runtime &runtime)
{
    for (uint32_t i = 0; i < kCallees; ++i)
        g_slot[i] = findSlot(kTarget[i]);
    runtime.replaceFunction(0x26FD40u, &nativePropGfxRoomPreproc);
    runtime.replaceFunction(0x26FE08u, &nativePropGfxRoom);
    runtime.replaceFunction(0x2A61C8u, &nativeDecalGfx);
    runtime.replaceFunction(0x2A6250u, &nativeDecalGfxMoving);
    runtime.replaceFunction(0x256830u, &nativeBgGfx);
}
