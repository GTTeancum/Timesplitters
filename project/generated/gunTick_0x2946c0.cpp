#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gunTick
// Address: 0x2946c0 - 0x29496c
void gunTick_0x2946c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunTick_0x2946c0");
#endif

    switch (ctx->pc) {
        case 0x294728u: goto label_294728;
        case 0x294750u: goto label_294750;
        case 0x294758u: goto label_294758;
        case 0x294768u: goto label_294768;
        case 0x294790u: goto label_294790;
        case 0x294798u: goto label_294798;
        case 0x294850u: goto label_294850;
        case 0x294864u: goto label_294864;
        case 0x2948b8u: goto label_2948b8;
        case 0x2948ccu: goto label_2948cc;
        case 0x2948ecu: goto label_2948ec;
        case 0x29490cu: goto label_29490c;
        default: break;
    }

    ctx->pc = 0x2946c0u;

    // 0x2946c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2946c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2946c4: 0x8f839c94  lw          $v1, -0x636C($gp)
    ctx->pc = 0x2946c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941844)));
    // 0x2946c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2946c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2946cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2946ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2946d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2946d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2946d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2946d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2946d8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2946d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2946dc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2946dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2946e0: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2946e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2946e4: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x2946e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x2946e8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2946E8u;
    {
        const bool branch_taken_0x2946e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2946ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946E8u;
        // 0x2946ec: 0x8c520160  lw          $s2, 0x160($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946e8) {
            ctx->pc = 0x2946FCu;
            goto label_2946fc;
        }
    }
    ctx->pc = 0x2946F0u;
    // 0x2946f0: 0x8f829c98  lw          $v0, -0x6368($gp)
    ctx->pc = 0x2946f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941848)));
    // 0x2946f4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2946F4u;
    {
        const bool branch_taken_0x2946f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2946f4) {
            ctx->pc = 0x2946F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2946F4u;
            // 0x2946f8: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294704u;
            goto label_294704;
        }
    }
    ctx->pc = 0x2946FCu;
label_2946fc:
    // 0x2946fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2946FCu;
    {
        const bool branch_taken_0x2946fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946FCu;
        // 0x294700: 0xae400104  sw          $zero, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946fc) {
            ctx->pc = 0x2947A0u;
            goto label_2947a0;
        }
    }
    ctx->pc = 0x294704u;
label_294704:
    // 0x294704: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x294704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x294708: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x294708u;
    {
        const bool branch_taken_0x294708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294708u;
        // 0x29470c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294708) {
            ctx->pc = 0x2947A0u;
            goto label_2947a0;
        }
    }
    ctx->pc = 0x294710u;
    // 0x294710: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x294710u;
    {
        const bool branch_taken_0x294710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x294714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294710u;
        // 0x294714: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294710) {
            ctx->pc = 0x2947A0u;
            goto label_2947a0;
        }
    }
    ctx->pc = 0x294718u;
    // 0x294718: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x294718u;
    {
        const bool branch_taken_0x294718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x294718) {
            ctx->pc = 0x29471Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294718u;
            // 0x29471c: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2947A4u;
            goto label_2947a4;
        }
    }
    ctx->pc = 0x294720u;
    // 0x294720: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x294720u;
    SET_GPR_U32(ctx, 31, 0x294728u);
    ctx->pc = 0x294724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294720u;
    // 0x294724: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x294720u, 0x294728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294728u;
label_294728:
    // 0x294728: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x294728u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29472c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x29472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x294730: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294734: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x294734u;
    {
        const bool branch_taken_0x294734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294734) {
            ctx->pc = 0x294760u;
            goto label_294760;
        }
    }
    ctx->pc = 0x29473Cu;
    // 0x29473c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x29473cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x294740: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x294740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x294744: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x294744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x294748: 0xc088f98  jal         func_223E60
    ctx->pc = 0x294748u;
    SET_GPR_U32(ctx, 31, 0x294750u);
    ctx->pc = 0x29474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294748u;
    // 0x29474c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x294748u, 0x294750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294750u;
label_294750:
    // 0x294750: 0xc0a360a  jal         func_28D828
    ctx->pc = 0x294750u;
    SET_GPR_U32(ctx, 31, 0x294758u);
    ctx->pc = 0x294754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294750u;
    // 0x294754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D828u, 0x294750u, 0x294758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294758u;
label_294758:
    // 0x294758: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x294758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
    // 0x29475c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x29475cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_294760:
    // 0x294760: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x294760u;
    SET_GPR_U32(ctx, 31, 0x294768u);
    ctx->pc = 0x294764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294760u;
    // 0x294764: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x294760u, 0x294768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294768u;
label_294768:
    // 0x294768: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x294768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29476c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x29476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x294770: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294774: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x294774u;
    {
        const bool branch_taken_0x294774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294774) {
            ctx->pc = 0x294778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294774u;
            // 0x294778: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2947A4u;
            goto label_2947a4;
        }
    }
    ctx->pc = 0x29477Cu;
    // 0x29477c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x29477cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x294780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x294780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x294784: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x294784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x294788: 0xc088f98  jal         func_223E60
    ctx->pc = 0x294788u;
    SET_GPR_U32(ctx, 31, 0x294790u);
    ctx->pc = 0x29478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294788u;
    // 0x29478c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x294788u, 0x294790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294790u;
label_294790:
    // 0x294790: 0xc0a366e  jal         func_28D9B8
    ctx->pc = 0x294790u;
    SET_GPR_U32(ctx, 31, 0x294798u);
    ctx->pc = 0x294794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294790u;
    // 0x294794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9B8u, 0x294790u, 0x294798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294798u;
label_294798:
    // 0x294798: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x294798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
    // 0x29479c: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x29479cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2947a0:
    // 0x2947a0: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x2947a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_2947a4:
    // 0x2947a4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2947A4u;
    {
        const bool branch_taken_0x2947a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2947A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947A4u;
        // 0x2947a8: 0xc783b468  lwc1        $f3, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947a4) {
            ctx->pc = 0x2947DCu;
            goto label_2947dc;
        }
    }
    ctx->pc = 0x2947ACu;
    // 0x2947ac: 0xc620017c  lwc1        $f0, 0x17C($s1)
    ctx->pc = 0x2947acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2947b0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2947b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2947b4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2947b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2947b8: 0xc7828c60  lwc1        $f2, -0x73A0($gp)
    ctx->pc = 0x2947b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2947bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2947bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2947c0: 0xc6210188  lwc1        $f1, 0x188($s1)
    ctx->pc = 0x2947c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2947c4: 0x0  nop
    ctx->pc = 0x2947c4u;
    // NOP
    // 0x2947c8: 0x0  nop
    ctx->pc = 0x2947c8u;
    // NOP
    // 0x2947cc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2947ccu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2947d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2947d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2947d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2947d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2947d8: 0xe6210188  swc1        $f1, 0x188($s1)
    ctx->pc = 0x2947d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
label_2947dc:
    // 0x2947dc: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x2947dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2947e0: 0xc6240154  lwc1        $f4, 0x154($s1)
    ctx->pc = 0x2947e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2947e4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2947e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2947e8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2947e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2947ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2947ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2947f0: 0xc7838c64  lwc1        $f3, -0x739C($gp)
    ctx->pc = 0x2947f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2947f4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2947f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2947f8: 0xc635017c  lwc1        $f21, 0x17C($s1)
    ctx->pc = 0x2947f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2947fc: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2947fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x294800: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x294800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x294804: 0xc7808c68  lwc1        $f0, -0x7398($gp)
    ctx->pc = 0x294804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294808: 0x460c6500  add.s       $f20, $f12, $f12
    ctx->pc = 0x294808u;
    ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x29480c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29480cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x294810: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x294810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294814: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x294814u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x294818: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x294818u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29481c: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x29481cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x294820: 0x0  nop
    ctx->pc = 0x294820u;
    // NOP
    // 0x294824: 0x0  nop
    ctx->pc = 0x294824u;
    // NOP
    // 0x294828: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x294828u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x29482c: 0x0  nop
    ctx->pc = 0x29482cu;
    // NOP
    // 0x294830: 0x0  nop
    ctx->pc = 0x294830u;
    // NOP
    // 0x294834: 0x4604ad43  div.s       $f21, $f21, $f4
    ctx->pc = 0x294834u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[4];
    // 0x294838: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x294838u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x29483c: 0x0  nop
    ctx->pc = 0x29483cu;
    // NOP
    // 0x294840: 0x0  nop
    ctx->pc = 0x294840u;
    // NOP
    // 0x294844: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x294844u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
    // 0x294848: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x294848u;
    SET_GPR_U32(ctx, 31, 0x294850u);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x294848u, 0x294850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294850u;
label_294850:
    // 0x294850: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x294850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x294854: 0x8f90b234  lw          $s0, -0x4DCC($gp)
    ctx->pc = 0x294854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294858: 0xe620018c  swc1        $f0, 0x18C($s1)
    ctx->pc = 0x294858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
    // 0x29485c: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x29485Cu;
    SET_GPR_U32(ctx, 31, 0x294864u);
    ctx->pc = 0x294860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29485Cu;
    // 0x294860: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x29485Cu, 0x294864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294864u;
label_294864:
    // 0x294864: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x294864u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x294868: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x294868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29486c: 0x8e450178  lw          $a1, 0x178($s2)
    ctx->pc = 0x29486cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x294870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x294870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294874: 0xaf80b284  sw          $zero, -0x4D7C($gp)
    ctx->pc = 0x294874u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947460), GPR_U32(ctx, 0));
    // 0x294878: 0xe6150190  swc1        $f21, 0x190($s0)
    ctx->pc = 0x294878u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x29487c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29487Cu;
    {
        const bool branch_taken_0x29487c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x294880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29487Cu;
        // 0x294880: 0xacc00194  sw          $zero, 0x194($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29487c) {
            ctx->pc = 0x2948ACu;
            goto label_2948ac;
        }
    }
    ctx->pc = 0x294884u;
    // 0x294884: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x294884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x294888: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x294888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x29488c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x29488cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x294890: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x294890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x294894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294898: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x294898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29489c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29489cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2948a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2948a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2948a4: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x2948a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x2948a8: 0xaf83b284  sw          $v1, -0x4D7C($gp)
    ctx->pc = 0x2948a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947460), GPR_U32(ctx, 3));
label_2948ac:
    // 0x2948ac: 0x24c40258  addiu       $a0, $a2, 0x258
    ctx->pc = 0x2948acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 600));
    // 0x2948b0: 0xc0a48b6  jal         func_2922D8
    ctx->pc = 0x2948B0u;
    SET_GPR_U32(ctx, 31, 0x2948B8u);
    ctx->pc = 0x2948B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948B0u;
    // 0x2948b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2922D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2922D8u, 0x2948B0u, 0x2948B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948B8u;
label_2948b8:
    // 0x2948b8: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2948b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2948bc: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2948bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2948c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2948c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2948c4: 0xc0a48b6  jal         func_2922D8
    ctx->pc = 0x2948C4u;
    SET_GPR_U32(ctx, 31, 0x2948CCu);
    ctx->pc = 0x2948C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948C4u;
    // 0x2948c8: 0x24840198  addiu       $a0, $a0, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2922D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2922D8u, 0x2948C4u, 0x2948CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948CCu;
label_2948cc:
    // 0x2948cc: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2948ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2948d0: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x2948d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x2948d4: 0x54500007  bnel        $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2948D4u;
    {
        const bool branch_taken_0x2948d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2948d4) {
            ctx->pc = 0x2948D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2948D4u;
            // 0x2948d8: 0x8e220198  lw          $v0, 0x198($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2948F4u;
            goto label_2948f4;
        }
    }
    ctx->pc = 0x2948DCu;
    // 0x2948dc: 0x26240258  addiu       $a0, $s1, 0x258
    ctx->pc = 0x2948dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 600));
    // 0x2948e0: 0x26450178  addiu       $a1, $s2, 0x178
    ctx->pc = 0x2948e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 376));
    // 0x2948e4: 0xc0a506a  jal         func_2941A8
    ctx->pc = 0x2948E4u;
    SET_GPR_U32(ctx, 31, 0x2948ECu);
    ctx->pc = 0x2948E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948E4u;
    // 0x2948e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941A8u, 0x2948E4u, 0x2948ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948ECu;
label_2948ec:
    // 0x2948ec: 0x8f91b234  lw          $s1, -0x4DCC($gp)
    ctx->pc = 0x2948ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2948f0: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x2948f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_2948f4:
    // 0x2948f4: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2948F4u;
    {
        const bool branch_taken_0x2948f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2948F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948F4u;
        // 0x2948f8: 0xc781b468  lwc1        $f1, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948f4) {
            ctx->pc = 0x294910u;
            goto label_294910;
        }
    }
    ctx->pc = 0x2948FCu;
    // 0x2948fc: 0x26240198  addiu       $a0, $s1, 0x198
    ctx->pc = 0x2948fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
    // 0x294900: 0x2645010c  addiu       $a1, $s2, 0x10C
    ctx->pc = 0x294900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 268));
    // 0x294904: 0xc0a506a  jal         func_2941A8
    ctx->pc = 0x294904u;
    SET_GPR_U32(ctx, 31, 0x29490Cu);
    ctx->pc = 0x294908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294904u;
    // 0x294908: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941A8u, 0x294904u, 0x29490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29490Cu;
label_29490c:
    // 0x29490c: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x29490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294910:
    // 0x294910: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x294910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x294914: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x294914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x294918: 0xc6400b60  lwc1        $f0, 0xB60($s2)
    ctx->pc = 0x294918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29491c: 0x0  nop
    ctx->pc = 0x29491cu;
    // NOP
    // 0x294920: 0x0  nop
    ctx->pc = 0x294920u;
    // NOP
    // 0x294924: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x294924u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x294928: 0xc7838c6c  lwc1        $f3, -0x7394($gp)
    ctx->pc = 0x294928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29492c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29492cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294930: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x294930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294934: 0x0  nop
    ctx->pc = 0x294934u;
    // NOP
    // 0x294938: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x294938u;
    {
        const bool branch_taken_0x294938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294938u;
        // 0x29493c: 0xe6400b60  swc1        $f0, 0xB60($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294938) {
            ctx->pc = 0x29494Cu;
            goto label_29494c;
        }
    }
    ctx->pc = 0x294940u;
    // 0x294940: 0xae400b7c  sw          $zero, 0xB7C($s2)
    ctx->pc = 0x294940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2940), GPR_U32(ctx, 0));
    // 0x294944: 0xae400b74  sw          $zero, 0xB74($s2)
    ctx->pc = 0x294944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2932), GPR_U32(ctx, 0));
    // 0x294948: 0xae400b78  sw          $zero, 0xB78($s2)
    ctx->pc = 0x294948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2936), GPR_U32(ctx, 0));
label_29494c:
    // 0x29494c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29494cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294950: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294954: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29495c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x29495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x294960: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x294960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x294964: 0x3e00008  jr          $ra
    ctx->pc = 0x294964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294964u;
        // 0x294968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29496Cu;
}
