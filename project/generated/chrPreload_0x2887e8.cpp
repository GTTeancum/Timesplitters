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

// Function: chrPreload
// Address: 0x2887e8 - 0x288914
void chrPreload_0x2887e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrPreload_0x2887e8");
#endif

    switch (ctx->pc) {
        case 0x288834u: goto label_288834;
        case 0x288848u: goto label_288848;
        case 0x288854u: goto label_288854;
        case 0x288890u: goto label_288890;
        case 0x2888a0u: goto label_2888a0;
        case 0x2888ccu: goto label_2888cc;
        default: break;
    }

    ctx->pc = 0x2887e8u;

    // 0x2887e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2887e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2887ec: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2887ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2887f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2887f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2887f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2887f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2887f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2887f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2887fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x288800: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x288800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x288804: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x288804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x288808: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x288808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28880c: 0x244250e0  addiu       $v0, $v0, 0x50E0
    ctx->pc = 0x28880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20704));
    // 0x288810: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x288810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x288814: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x288814u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28881c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28881cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288820: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x288820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x288824: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x288824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288828: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x288828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x28882c: 0xc099c88  jal         func_267220
    ctx->pc = 0x28882Cu;
    SET_GPR_U32(ctx, 31, 0x288834u);
    ctx->pc = 0x288830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28882Cu;
    // 0x288830: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x28882Cu, 0x288834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288834u;
label_288834:
    // 0x288834: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x288834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x288838: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x288838u;
    {
        const bool branch_taken_0x288838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288838u;
        // 0x28883c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288838) {
            ctx->pc = 0x288878u;
            goto label_288878;
        }
    }
    ctx->pc = 0x288840u;
    // 0x288840: 0x26120024  addiu       $s2, $s0, 0x24
    ctx->pc = 0x288840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x288844: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x288844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_288848:
    // 0x288848: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x288848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28884c: 0xc081682  jal         func_205A08
    ctx->pc = 0x28884Cu;
    SET_GPR_U32(ctx, 31, 0x288854u);
    ctx->pc = 0x288850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28884Cu;
    // 0x288850: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A08u, 0x28884Cu, 0x288854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288854u;
label_288854:
    // 0x288854: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x288854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x288858: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x288858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x28885c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x28885cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288860: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x288860u;
    {
        const bool branch_taken_0x288860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288860u;
        // 0x288864: 0x2a220012  slti        $v0, $s1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288860) {
            ctx->pc = 0x28887Cu;
            goto label_28887c;
        }
    }
    ctx->pc = 0x288868u;
    // 0x288868: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x288868u;
    {
        const bool branch_taken_0x288868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288868u;
        // 0x28886c: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288868) {
            ctx->pc = 0x288848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288848;
        }
    }
    ctx->pc = 0x288870u;
    // 0x288870: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288870u;
    {
        const bool branch_taken_0x288870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288870u;
        // 0x288874: 0x86020024  lh          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288870) {
            ctx->pc = 0x288880u;
            goto label_288880;
        }
    }
    ctx->pc = 0x288878u;
label_288878:
    // 0x288878: 0x26120024  addiu       $s2, $s0, 0x24
    ctx->pc = 0x288878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_28887c:
    // 0x28887c: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x28887cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_288880:
    // 0x288880: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x288880u;
    {
        const bool branch_taken_0x288880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288880u;
        // 0x288884: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288880) {
            ctx->pc = 0x2888C0u;
            goto label_2888c0;
        }
    }
    ctx->pc = 0x288888u;
    // 0x288888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x288888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28888c: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x28888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_288890:
    // 0x288890: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x288890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x288894: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x288894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288898: 0xc081682  jal         func_205A08
    ctx->pc = 0x288898u;
    SET_GPR_U32(ctx, 31, 0x2888A0u);
    ctx->pc = 0x28889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288898u;
    // 0x28889c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A08u, 0x288898u, 0x2888A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888A0u;
label_2888a0:
    // 0x2888a0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2888a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2888a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2888a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888a8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2888a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2888ac: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2888acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2888b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2888B0u;
    {
        const bool branch_taken_0x2888b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2888B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888B0u;
        // 0x2888b4: 0x2a220006  slti        $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888b0) {
            ctx->pc = 0x2888C0u;
            goto label_2888c0;
        }
    }
    ctx->pc = 0x2888B8u;
    // 0x2888b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2888B8u;
    {
        const bool branch_taken_0x2888b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2888BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888B8u;
        // 0x2888bc: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888b8) {
            ctx->pc = 0x288890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288890;
        }
    }
    ctx->pc = 0x2888C0u;
label_2888c0:
    // 0x2888c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2888c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888c4: 0xc0a21a8  jal         func_2886A0
    ctx->pc = 0x2888C4u;
    SET_GPR_U32(ctx, 31, 0x2888CCu);
    ctx->pc = 0x2888C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888C4u;
    // 0x2888c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2886A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2886A0u, 0x2888C4u, 0x2888CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2888CCu;
label_2888cc:
    // 0x2888cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2888ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2888d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2888d4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2888D4u;
    {
        const bool branch_taken_0x2888d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2888D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888D4u;
        // 0x2888d8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888d4) {
            ctx->pc = 0x2888F8u;
            goto label_2888f8;
        }
    }
    ctx->pc = 0x2888DCu;
    // 0x2888dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2888dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2888e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2888e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2888e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2888e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2888e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2888e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2888ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2888ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2888f0: 0x8099c88  j           func_267220
    ctx->pc = 0x2888F0u;
    ctx->pc = 0x2888F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2888F0u;
    // 0x2888f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    propAddPreLoad_0x267220(rdram, ctx, runtime); return;
    ctx->pc = 0x2888F8u;
label_2888f8:
    // 0x2888f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2888f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2888fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2888fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288900: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x288900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288904: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x288904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x288908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28890c: 0x3e00008  jr          $ra
    ctx->pc = 0x28890Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28890Cu;
        // 0x288910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28890Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288914u;
}
