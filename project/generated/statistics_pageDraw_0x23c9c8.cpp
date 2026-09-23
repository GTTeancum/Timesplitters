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

// Function: statistics_pageDraw
// Address: 0x23c9c8 - 0x23cc38
void statistics_pageDraw_0x23c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("statistics_pageDraw_0x23c9c8");
#endif

    switch (ctx->pc) {
        case 0x23ca00u: goto label_23ca00;
        case 0x23ca64u: goto label_23ca64;
        case 0x23ca70u: goto label_23ca70;
        case 0x23ca7cu: goto label_23ca7c;
        case 0x23ca90u: goto label_23ca90;
        case 0x23caa0u: goto label_23caa0;
        case 0x23cab0u: goto label_23cab0;
        case 0x23cac0u: goto label_23cac0;
        case 0x23cad0u: goto label_23cad0;
        case 0x23cb20u: goto label_23cb20;
        case 0x23cb28u: goto label_23cb28;
        case 0x23cb30u: goto label_23cb30;
        case 0x23cb50u: goto label_23cb50;
        case 0x23cbc8u: goto label_23cbc8;
        case 0x23cbe8u: goto label_23cbe8;
        case 0x23cc08u: goto label_23cc08;
        default: break;
    }

    ctx->pc = 0x23c9c8u;

    // 0x23c9c8: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x23c9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x23c9cc: 0xffbe0230  sd          $fp, 0x230($sp)
    ctx->pc = 0x23c9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 30));
    // 0x23c9d0: 0xffb70220  sd          $s7, 0x220($sp)
    ctx->pc = 0x23c9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 23));
    // 0x23c9d4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x23c9d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9d8: 0xffb60210  sd          $s6, 0x210($sp)
    ctx->pc = 0x23c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 22));
    // 0x23c9dc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x23c9dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c9e0: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x23c9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x23c9e4: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x23c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x23c9e8: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x23c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x23c9ec: 0xffb50200  sd          $s5, 0x200($sp)
    ctx->pc = 0x23c9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 21));
    // 0x23c9f0: 0xffb301e0  sd          $s3, 0x1E0($sp)
    ctx->pc = 0x23c9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 19));
    // 0x23c9f4: 0xffb101c0  sd          $s1, 0x1C0($sp)
    ctx->pc = 0x23c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 17));
    // 0x23c9f8: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x23C9F8u;
    SET_GPR_U32(ctx, 31, 0x23CA00u);
    ctx->pc = 0x23C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9F8u;
    // 0x23c9fc: 0xffb001b0  sd          $s0, 0x1B0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x23C9F8u, 0x23CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA00u;
label_23ca00:
    // 0x23ca00: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23ca04: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23ca08: 0x8c544ef0  lw          $s4, 0x4EF0($v0)
    ctx->pc = 0x23ca08u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x354EF0u));
    // 0x23ca0c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23ca10: 0x8f96a01c  lw          $s6, -0x5FE4($gp)
    ctx->pc = 0x23ca10u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x23ca14: 0x8c424f18  lw          $v0, 0x4F18($v0)
    ctx->pc = 0x23ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x354F18u));
    // 0x23ca18: 0x8c724ec8  lw          $s2, 0x4EC8($v1)
    ctx->pc = 0x23ca18u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x354EC8u));
    // 0x23ca1c: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x23ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x23ca20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ca24: 0x1282001c  beq         $s4, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23CA24u;
    {
        const bool branch_taken_0x23ca24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA24u;
        // 0x23ca28: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca24) {
            ctx->pc = 0x23CA98u;
            goto label_23ca98;
        }
    }
    ctx->pc = 0x23CA2Cu;
    // 0x23ca2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CA2Cu;
    {
        const bool branch_taken_0x23ca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA2Cu;
        // 0x23ca30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca2c) {
            ctx->pc = 0x23CA44u;
            goto label_23ca44;
        }
    }
    ctx->pc = 0x23CA34u;
    // 0x23ca34: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x23CA34u;
    {
        const bool branch_taken_0x23ca34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA34u;
        // 0x23ca38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca34) {
            ctx->pc = 0x23CA5Cu;
            goto label_23ca5c;
        }
    }
    ctx->pc = 0x23CA3Cu;
    // 0x23ca3c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x23CA3Cu;
    {
        const bool branch_taken_0x23ca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ca3c) {
            ctx->pc = 0x23CAC8u;
            goto label_23cac8;
        }
    }
    ctx->pc = 0x23CA44u;
label_23ca44:
    // 0x23ca44: 0x12820018  beq         $s4, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23CA44u;
    {
        const bool branch_taken_0x23ca44 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA44u;
        // 0x23ca48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca44) {
            ctx->pc = 0x23CAA8u;
            goto label_23caa8;
        }
    }
    ctx->pc = 0x23CA4Cu;
    // 0x23ca4c: 0x1282001a  beq         $s4, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23CA4Cu;
    {
        const bool branch_taken_0x23ca4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA4Cu;
        // 0x23ca50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca4c) {
            ctx->pc = 0x23CAB8u;
            goto label_23cab8;
        }
    }
    ctx->pc = 0x23CA54u;
    // 0x23ca54: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23CA54u;
    {
        const bool branch_taken_0x23ca54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ca54) {
            ctx->pc = 0x23CAC8u;
            goto label_23cac8;
        }
    }
    ctx->pc = 0x23CA5Cu;
label_23ca5c:
    // 0x23ca5c: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23CA5Cu;
    SET_GPR_U32(ctx, 31, 0x23CA64u);
    ctx->pc = 0x23CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA5Cu;
    // 0x23ca60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23CA5Cu, 0x23CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA64u;
label_23ca64:
    // 0x23ca64: 0x24510650  addiu       $s1, $v0, 0x650
    ctx->pc = 0x23ca64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1616));
    // 0x23ca68: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23CA68u;
    SET_GPR_U32(ctx, 31, 0x23CA70u);
    ctx->pc = 0x23CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA68u;
    // 0x23ca6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23CA68u, 0x23CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA70u;
label_23ca70:
    // 0x23ca70: 0x245007dc  addiu       $s0, $v0, 0x7DC
    ctx->pc = 0x23ca70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2012));
    // 0x23ca74: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23CA74u;
    SET_GPR_U32(ctx, 31, 0x23CA7Cu);
    ctx->pc = 0x23CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA74u;
    // 0x23ca78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23CA74u, 0x23CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA7Cu;
label_23ca7c:
    // 0x23ca7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23ca7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23ca80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca84: 0x24470968  addiu       $a3, $v0, 0x968
    ctx->pc = 0x23ca84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2408));
    // 0x23ca88: 0xc08921e  jal         func_224878
    ctx->pc = 0x23CA88u;
    SET_GPR_U32(ctx, 31, 0x23CA90u);
    ctx->pc = 0x23CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA88u;
    // 0x23ca8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224878u, 0x23CA88u, 0x23CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA90u;
label_23ca90:
    // 0x23ca90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23CA90u;
    {
        const bool branch_taken_0x23ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA90u;
        // 0x23ca94: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca90) {
            ctx->pc = 0x23CAC4u;
            goto label_23cac4;
        }
    }
    ctx->pc = 0x23CA98u;
label_23ca98:
    // 0x23ca98: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23CA98u;
    SET_GPR_U32(ctx, 31, 0x23CAA0u);
    ctx->pc = 0x23CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA98u;
    // 0x23ca9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23CA98u, 0x23CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAA0u;
label_23caa0:
    // 0x23caa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23CAA0u;
    {
        const bool branch_taken_0x23caa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAA0u;
        // 0x23caa4: 0x245e0650  addiu       $fp, $v0, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23caa0) {
            ctx->pc = 0x23CAC4u;
            goto label_23cac4;
        }
    }
    ctx->pc = 0x23CAA8u;
label_23caa8:
    // 0x23caa8: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23CAA8u;
    SET_GPR_U32(ctx, 31, 0x23CAB0u);
    ctx->pc = 0x23CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAA8u;
    // 0x23caac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23CAA8u, 0x23CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAB0u;
label_23cab0:
    // 0x23cab0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23CAB0u;
    {
        const bool branch_taken_0x23cab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAB0u;
        // 0x23cab4: 0x245e07dc  addiu       $fp, $v0, 0x7DC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cab0) {
            ctx->pc = 0x23CAC4u;
            goto label_23cac4;
        }
    }
    ctx->pc = 0x23CAB8u;
label_23cab8:
    // 0x23cab8: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23CAB8u;
    SET_GPR_U32(ctx, 31, 0x23CAC0u);
    ctx->pc = 0x23CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAB8u;
    // 0x23cabc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23CAB8u, 0x23CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAC0u;
label_23cac0:
    // 0x23cac0: 0x245e0968  addiu       $fp, $v0, 0x968
    ctx->pc = 0x23cac0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2408));
label_23cac4:
    // 0x23cac4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23cac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23cac8:
    // 0x23cac8: 0xc08089c  jal         func_202270
    ctx->pc = 0x23CAC8u;
    SET_GPR_U32(ctx, 31, 0x23CAD0u);
    ctx->pc = 0x23CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAC8u;
    // 0x23cacc: 0x3c15002f  lui         $s5, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)47 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23CAC8u, 0x23CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAD0u;
label_23cad0:
    // 0x23cad0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23cad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cad4: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x23cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x23cad8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23cadc: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x23cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x23cae0: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x23cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x23cae4: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x23cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x23cae8: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x23cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
    // 0x23caec: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x23caecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x23caf0: 0x26a52c18  addiu       $a1, $s5, 0x2C18
    ctx->pc = 0x23caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 11288));
    // 0x23caf4: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x23caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x23caf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23cafc: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x23cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x23cb00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23cb04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23cb08: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x23cb08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb0c: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x23cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x23cb10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23cb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb14: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x23cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x23cb18: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CB18u;
    SET_GPR_U32(ctx, 31, 0x23CB20u);
    ctx->pc = 0x23CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB18u;
    // 0x23cb1c: 0x8c460428  lw          $a2, 0x428($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CB18u, 0x23CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB20u;
label_23cb20:
    // 0x23cb20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb24: 0x0  nop
    ctx->pc = 0x23cb24u;
    // NOP
label_23cb28:
    // 0x23cb28: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23CB28u;
    SET_GPR_U32(ctx, 31, 0x23CB30u);
    ctx->pc = 0x23CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB28u;
    // 0x23cb2c: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23CB28u, 0x23CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB30u;
label_23cb30:
    // 0x23cb30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23cb34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cb38: 0x73182b  sltu        $v1, $v1, $s3
    ctx->pc = 0x23cb38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x23cb3c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23CB3Cu;
    {
        const bool branch_taken_0x23cb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb3c) {
            ctx->pc = 0x23CB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB3Cu;
            // 0x23cb40: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB5Cu;
            goto label_23cb5c;
        }
    }
    ctx->pc = 0x23CB44u;
    // 0x23cb44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb48: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23CB48u;
    SET_GPR_U32(ctx, 31, 0x23CB50u);
    ctx->pc = 0x23CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB48u;
    // 0x23cb4c: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23CB48u, 0x23CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB50u;
label_23cb50:
    // 0x23cb50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23cb54: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x23cb54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cb58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23cb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23cb5c:
    // 0x23cb5c: 0x2a220050  slti        $v0, $s1, 0x50
    ctx->pc = 0x23cb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x23cb60: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x23CB60u;
    {
        const bool branch_taken_0x23cb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB60u;
        // 0x23cb64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb60) {
            ctx->pc = 0x23CB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cb28;
        }
    }
    ctx->pc = 0x23CB68u;
    // 0x23cb68: 0x6e10008  bgez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x23CB68u;
    {
        const bool branch_taken_0x23cb68 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x23CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB68u;
        // 0x23cb6c: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb68) {
            ctx->pc = 0x23CB8Cu;
            goto label_23cb8c;
        }
    }
    ctx->pc = 0x23CB70u;
    // 0x23cb70: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23cb74: 0x26a42c18  addiu       $a0, $s5, 0x2C18
    ctx->pc = 0x23cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11288));
    // 0x23cb78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cb7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23cb80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cb84: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23CB84u;
    {
        const bool branch_taken_0x23cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB84u;
        // 0x23cb88: 0x8c70042c  lw          $s0, 0x42C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb84) {
            ctx->pc = 0x23CBC0u;
            goto label_23cbc0;
        }
    }
    ctx->pc = 0x23CB8Cu;
label_23cb8c:
    // 0x23cb8c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23cb90: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x23cb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23cb94: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x23cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x23cb98: 0x244250e0  addiu       $v0, $v0, 0x50E0
    ctx->pc = 0x23cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20704));
    // 0x23cb9c: 0x26a52c18  addiu       $a1, $s5, 0x2C18
    ctx->pc = 0x23cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 11288));
    // 0x23cba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23cba4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23cba8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23cbac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23cbb0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x23cbb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cbb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cbb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23cbbc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23cbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23cbc0:
    // 0x23cbc0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23CBC0u;
    SET_GPR_U32(ctx, 31, 0x23CBC8u);
    ctx->pc = 0x23CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CBC0u;
    // 0x23cbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23CBC0u, 0x23CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBC8u;
label_23cbc8:
    // 0x23cbc8: 0x2403023a  addiu       $v1, $zero, 0x23A
    ctx->pc = 0x23cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x23cbcc: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x23cbd0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cbd4: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x23cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x23cbd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23cbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cbdc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x23cbdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cbe0: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CBE0u;
    SET_GPR_U32(ctx, 31, 0x23CBE8u);
    ctx->pc = 0x23CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CBE0u;
    // 0x23cbe4: 0xafa30190  sw          $v1, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CBE0u, 0x23CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBE8u;
label_23cbe8:
    // 0x23cbe8: 0x8fa90198  lw          $t1, 0x198($sp)
    ctx->pc = 0x23cbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x23cbec: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23cbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cbf0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x23cbf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cbf4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x23cbf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cbf8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x23cbf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cbfc: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x23cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x23cc00: 0xc08f30e  jal         func_23CC38
    ctx->pc = 0x23CC00u;
    SET_GPR_U32(ctx, 31, 0x23CC08u);
    ctx->pc = 0x23CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC00u;
    // 0x23cc04: 0x2405023a  addiu       $a1, $zero, 0x23A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CC38u, 0x23CC00u, 0x23CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC08u;
label_23cc08:
    // 0x23cc08: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x23cc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x23cc0c: 0xdfbe0230  ld          $fp, 0x230($sp)
    ctx->pc = 0x23cc0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x23cc10: 0xdfb70220  ld          $s7, 0x220($sp)
    ctx->pc = 0x23cc10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x23cc14: 0xdfb60210  ld          $s6, 0x210($sp)
    ctx->pc = 0x23cc14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x23cc18: 0xdfb50200  ld          $s5, 0x200($sp)
    ctx->pc = 0x23cc18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x23cc1c: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x23cc1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x23cc20: 0xdfb301e0  ld          $s3, 0x1E0($sp)
    ctx->pc = 0x23cc20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x23cc24: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x23cc24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x23cc28: 0xdfb101c0  ld          $s1, 0x1C0($sp)
    ctx->pc = 0x23cc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x23cc2c: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x23cc2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x23cc30: 0x3e00008  jr          $ra
    ctx->pc = 0x23CC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC30u;
        // 0x23cc34: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CC38u;
}
