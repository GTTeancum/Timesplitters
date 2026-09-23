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

// Function: storychrsel_pageTick
// Address: 0x23b630 - 0x23ba08
void storychrsel_pageTick_0x23b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("storychrsel_pageTick_0x23b630");
#endif

    switch (ctx->pc) {
        case 0x23b664u: goto label_23b664;
        case 0x23b680u: goto label_23b680;
        case 0x23b688u: goto label_23b688;
        case 0x23b6c4u: goto label_23b6c4;
        case 0x23b6fcu: goto label_23b6fc;
        case 0x23b708u: goto label_23b708;
        case 0x23b7b4u: goto label_23b7b4;
        case 0x23b828u: goto label_23b828;
        case 0x23b830u: goto label_23b830;
        case 0x23b840u: goto label_23b840;
        case 0x23b884u: goto label_23b884;
        case 0x23b88cu: goto label_23b88c;
        case 0x23b89cu: goto label_23b89c;
        case 0x23b8b0u: goto label_23b8b0;
        case 0x23b8dcu: goto label_23b8dc;
        case 0x23b8e8u: goto label_23b8e8;
        case 0x23b8f8u: goto label_23b8f8;
        case 0x23b938u: goto label_23b938;
        case 0x23b960u: goto label_23b960;
        case 0x23b978u: goto label_23b978;
        case 0x23b980u: goto label_23b980;
        case 0x23b988u: goto label_23b988;
        case 0x23b990u: goto label_23b990;
        case 0x23b9d8u: goto label_23b9d8;
        case 0x23b9e4u: goto label_23b9e4;
        default: break;
    }

    ctx->pc = 0x23b630u;

    // 0x23b630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23b634: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23b634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b638: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x23b63c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23b63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23b640: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23b644: 0x2793b738  addiu       $s3, $gp, -0x48C8
    ctx->pc = 0x23b644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23b648: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23b64c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23b64cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b654: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23b654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b658: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23b658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23b65c: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23B65Cu;
    SET_GPR_U32(ctx, 31, 0x23B664u);
    ctx->pc = 0x23B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B65Cu;
    // 0x23b660: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23B65Cu, 0x23B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B664u;
label_23b664:
    // 0x23b664: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x23b664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23b668: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x23b668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23b66c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x23b66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23b670: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23b670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b678: 0xc08e16c  jal         func_2385B0
    ctx->pc = 0x23B678u;
    SET_GPR_U32(ctx, 31, 0x23B680u);
    ctx->pc = 0x23B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B678u;
    // 0x23b67c: 0x24740020  addiu       $s4, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2385B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2385B0u, 0x23B678u, 0x23B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B680u;
label_23b680:
    // 0x23b680: 0xc090744  jal         func_241D10
    ctx->pc = 0x23B680u;
    SET_GPR_U32(ctx, 31, 0x23B688u);
    ctx->pc = 0x23B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B680u;
    // 0x23b684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241D10u, 0x23B680u, 0x23B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B688u;
label_23b688:
    // 0x23b688: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x23b688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b68c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23b690: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x23b690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b694: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x23b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x23b698: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x23b698u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b69c: 0x12030082  beq         $s0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x23B69Cu;
    {
        const bool branch_taken_0x23b69c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x23B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B69Cu;
        // 0x23b6a0: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b69c) {
            ctx->pc = 0x23B8A8u;
            goto label_23b8a8;
        }
    }
    ctx->pc = 0x23B6A4u;
    // 0x23b6a4: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x23B6A4u;
    {
        const bool branch_taken_0x23b6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6A4u;
        // 0x23b6a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6a4) {
            ctx->pc = 0x23B998u;
            goto label_23b998;
        }
    }
    ctx->pc = 0x23B6ACu;
    // 0x23b6ac: 0x160200ba  bne         $s0, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x23B6ACu;
    {
        const bool branch_taken_0x23b6ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b6ac) {
            ctx->pc = 0x23B998u;
            goto label_23b998;
        }
    }
    ctx->pc = 0x23B6B4u;
    // 0x23b6b4: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x23B6B4u;
    {
        const bool branch_taken_0x23b6b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b6b4) {
            ctx->pc = 0x23B6F4u;
            goto label_23b6f4;
        }
    }
    ctx->pc = 0x23B6BCu;
    // 0x23b6bc: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23B6BCu;
    SET_GPR_U32(ctx, 31, 0x23B6C4u);
    ctx->pc = 0x23B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6BCu;
    // 0x23b6c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23B6BCu, 0x23B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6C4u;
label_23b6c4:
    // 0x23b6c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23b6c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B6C8u;
    {
        const bool branch_taken_0x23b6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6C8u;
        // 0x23b6cc: 0x8f87a004  lw          $a3, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6c8) {
            ctx->pc = 0x23B6F0u;
            goto label_23b6f0;
        }
    }
    ctx->pc = 0x23B6D0u;
    // 0x23b6d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23b6d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b6d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b6d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b6d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b6dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b6dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b6e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b6e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b6e8: 0x808c052  j           func_230148
    ctx->pc = 0x23B6E8u;
    ctx->pc = 0x23B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6E8u;
    // 0x23b6ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230148u;
    pageOut_0x230148(rdram, ctx, runtime); return;
    ctx->pc = 0x23B6F0u;
label_23b6f0:
    // 0x23b6f0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x23b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23b6f4:
    // 0x23b6f4: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x23B6F4u;
    SET_GPR_U32(ctx, 31, 0x23B6FCu);
    ctx->pc = 0x23B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6F4u;
    // 0x23b6f8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x23B6F4u, 0x23B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6FCu;
label_23b6fc:
    // 0x23b6fc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b700: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23B700u;
    SET_GPR_U32(ctx, 31, 0x23B708u);
    ctx->pc = 0x23B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B700u;
    // 0x23b704: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23B700u, 0x23B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B708u;
label_23b708:
    // 0x23b708: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x23b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x23b70c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x23B70Cu;
    {
        const bool branch_taken_0x23b70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b70c) {
            ctx->pc = 0x23B710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B70Cu;
            // 0x23b710: 0x96480004  lhu         $t0, 0x4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B73Cu;
            goto label_23b73c;
        }
    }
    ctx->pc = 0x23B714u;
    // 0x23b714: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x23b714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b718: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23b718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23b71c: 0x244212a8  addiu       $v0, $v0, 0x12A8
    ctx->pc = 0x23b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4776));
    // 0x23b720: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x23b720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b724: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x23b724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b728: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x23b728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23b72c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b730: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x23B730u;
    {
        const bool branch_taken_0x23b730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B730u;
        // 0x23b734: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b730) {
            ctx->pc = 0x23B7E8u;
            goto label_23b7e8;
        }
    }
    ctx->pc = 0x23B738u;
    // 0x23b738: 0x96480004  lhu         $t0, 0x4($s2)
    ctx->pc = 0x23b738u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_23b73c:
    // 0x23b73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b740: 0x15020057  bne         $t0, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x23B740u;
    {
        const bool branch_taken_0x23b740 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B740u;
        // 0x23b744: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b740) {
            ctx->pc = 0x23B8A0u;
            goto label_23b8a0;
        }
    }
    ctx->pc = 0x23B748u;
    // 0x23b748: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x23b748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b74c: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23b750: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x23b750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x23b754: 0x24631288  addiu       $v1, $v1, 0x1288
    ctx->pc = 0x23b754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4744));
    // 0x23b758: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b75c: 0x24841298  addiu       $a0, $a0, 0x1298
    ctx->pc = 0x23b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4760));
    // 0x23b760: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x23b760u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b764: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x23b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23b768: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x23b768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x23b76c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23b76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b770: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b774: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B774u;
    {
        const bool branch_taken_0x23b774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b774) {
            ctx->pc = 0x23B778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B774u;
            // 0x23b778: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B790u;
            goto label_23b790;
        }
    }
    ctx->pc = 0x23B77Cu;
    // 0x23b77c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23b780: 0x244212a8  addiu       $v0, $v0, 0x12A8
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4776));
    // 0x23b784: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x23b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23b788: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x23b788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x23b78c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x23b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23b790:
    // 0x23b790: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23b790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23b794: 0x24421268  addiu       $v0, $v0, 0x1268
    ctx->pc = 0x23b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x23b798: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23b798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23b79c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b7a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b7a4: 0x1480007c  bnez        $a0, . + 4 + (0x7C << 2)
    ctx->pc = 0x23B7A4u;
    {
        const bool branch_taken_0x23b7a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b7a4) {
            ctx->pc = 0x23B998u;
            goto label_23b998;
        }
    }
    ctx->pc = 0x23B7ACu;
    // 0x23b7ac: 0xc08e380  jal         func_238E00
    ctx->pc = 0x23B7ACu;
    SET_GPR_U32(ctx, 31, 0x23B7B4u);
    ctx->pc = 0x23B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B7ACu;
    // 0x23b7b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238E00u, 0x23B7ACu, 0x23B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7B4u;
label_23b7b4:
    // 0x23b7b4: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x23b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b7b8: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23b7bc: 0x246312a8  addiu       $v1, $v1, 0x12A8
    ctx->pc = 0x23b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4776));
    // 0x23b7c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x23b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23b7c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b7d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23b7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23b7d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b7d8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x23b7dc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x23b7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23b7e0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x23B7E0u;
    {
        const bool branch_taken_0x23b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7E0u;
        // 0x23b7e4: 0xa6400004  sh          $zero, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7e0) {
            ctx->pc = 0x23B9E8u;
            goto label_23b9e8;
        }
    }
    ctx->pc = 0x23B7E8u;
label_23b7e8:
    // 0x23b7e8: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x23b7e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23b7ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b7f0: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23B7F0u;
    {
        const bool branch_taken_0x23b7f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7F0u;
        // 0x23b7f4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7f0) {
            ctx->pc = 0x23B8A0u;
            goto label_23b8a0;
        }
    }
    ctx->pc = 0x23B7F8u;
    // 0x23b7f8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x23b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x23b7fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23b7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23b800: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23B800u;
    {
        const bool branch_taken_0x23b800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B800u;
        // 0x23b804: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b800) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B808u;
    // 0x23b808: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23b808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b80c: 0x24421268  addiu       $v0, $v0, 0x1268
    ctx->pc = 0x23b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x23b810: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23b814: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b818: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x23B818u;
    {
        const bool branch_taken_0x23b818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B818u;
        // 0x23b81c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b818) {
            ctx->pc = 0x23B848u;
            goto label_23b848;
        }
    }
    ctx->pc = 0x23B820u;
    // 0x23b820: 0xc081546  jal         func_205518
    ctx->pc = 0x23B820u;
    SET_GPR_U32(ctx, 31, 0x23B828u);
    ctx->pc = 0x23B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B820u;
    // 0x23b824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23B820u, 0x23B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B828u;
label_23b828:
    // 0x23b828: 0xc08e09a  jal         func_238268
    ctx->pc = 0x23B828u;
    SET_GPR_U32(ctx, 31, 0x23B830u);
    ctx->pc = 0x23B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B828u;
    // 0x23b82c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238268u, 0x23B828u, 0x23B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B830u;
label_23b830:
    // 0x23b830: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23b830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b834: 0x8e850054  lw          $a1, 0x54($s4)
    ctx->pc = 0x23b834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x23b838: 0xc08e136  jal         func_2384D8
    ctx->pc = 0x23B838u;
    SET_GPR_U32(ctx, 31, 0x23B840u);
    ctx->pc = 0x23B83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B838u;
    // 0x23b83c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384D8u, 0x23B838u, 0x23B840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B840u;
label_23b840:
    // 0x23b840: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23B840u;
    {
        const bool branch_taken_0x23b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B840u;
        // 0x23b844: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b840) {
            ctx->pc = 0x23B8A0u;
            goto label_23b8a0;
        }
    }
    ctx->pc = 0x23B848u;
label_23b848:
    // 0x23b848: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x23b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x23b84c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x23b850: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23B850u;
    {
        const bool branch_taken_0x23b850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B850u;
        // 0x23b854: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b850) {
            ctx->pc = 0x23B89Cu;
            goto label_23b89c;
        }
    }
    ctx->pc = 0x23B858u;
    // 0x23b858: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23b858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b85c: 0x24631268  addiu       $v1, $v1, 0x1268
    ctx->pc = 0x23b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4712));
    // 0x23b860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23b860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b864: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b86c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b870: 0x1085000b  beq         $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x23B870u;
    {
        const bool branch_taken_0x23b870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x23B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B870u;
        // 0x23b874: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b870) {
            ctx->pc = 0x23B8A0u;
            goto label_23b8a0;
        }
    }
    ctx->pc = 0x23B878u;
    // 0x23b878: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23b878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x23b87c: 0xc081546  jal         func_205518
    ctx->pc = 0x23B87Cu;
    SET_GPR_U32(ctx, 31, 0x23B884u);
    ctx->pc = 0x23B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B87Cu;
    // 0x23b880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23B87Cu, 0x23B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B884u;
label_23b884:
    // 0x23b884: 0xc08e0e2  jal         func_238388
    ctx->pc = 0x23B884u;
    SET_GPR_U32(ctx, 31, 0x23B88Cu);
    ctx->pc = 0x23B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B884u;
    // 0x23b888: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238388u, 0x23B884u, 0x23B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B88Cu;
label_23b88c:
    // 0x23b88c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b890: 0x8e850054  lw          $a1, 0x54($s4)
    ctx->pc = 0x23b890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x23b894: 0xc08e136  jal         func_2384D8
    ctx->pc = 0x23B894u;
    SET_GPR_U32(ctx, 31, 0x23B89Cu);
    ctx->pc = 0x23B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B894u;
    // 0x23b898: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384D8u, 0x23B894u, 0x23B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B89Cu;
label_23b89c:
    // 0x23b89c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_23b8a0:
    // 0x23b8a0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x23B8A0u;
    {
        const bool branch_taken_0x23b8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8A0u;
        // 0x23b8a4: 0x24514ca8  addiu       $s1, $v0, 0x4CA8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8a0) {
            ctx->pc = 0x23B998u;
            goto label_23b998;
        }
    }
    ctx->pc = 0x23B8A8u;
label_23b8a8:
    // 0x23b8a8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23B8A8u;
    SET_GPR_U32(ctx, 31, 0x23B8B0u);
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23B8A8u, 0x23B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8B0u;
label_23b8b0:
    // 0x23b8b0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23b8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23b8b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23B8B4u;
    {
        const bool branch_taken_0x23b8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8B4u;
        // 0x23b8b8: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8b4) {
            ctx->pc = 0x23B8F8u;
            goto label_23b8f8;
        }
    }
    ctx->pc = 0x23B8BCu;
    // 0x23b8bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b8c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b8c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b8c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23b8cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23b8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23b8d0: 0xa6440004  sh          $a0, 0x4($s2)
    ctx->pc = 0x23b8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x23b8d4: 0xc08e380  jal         func_238E00
    ctx->pc = 0x23B8D4u;
    SET_GPR_U32(ctx, 31, 0x23B8DCu);
    ctx->pc = 0x23B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8D4u;
    // 0x23b8d8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238E00u, 0x23B8D4u, 0x23B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8DCu;
label_23b8dc:
    // 0x23b8dc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b8e0: 0xc08e124  jal         func_238490
    ctx->pc = 0x23B8E0u;
    SET_GPR_U32(ctx, 31, 0x23B8E8u);
    ctx->pc = 0x23B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8E0u;
    // 0x23b8e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238490u, 0x23B8E0u, 0x23B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8E8u;
label_23b8e8:
    // 0x23b8e8: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b8ec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x23b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23b8f0: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x23B8F0u;
    SET_GPR_U32(ctx, 31, 0x23B8F8u);
    ctx->pc = 0x23B8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8F0u;
    // 0x23b8f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x23B8F0u, 0x23B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8F8u;
label_23b8f8:
    // 0x23b8f8: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23b8fc: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23b900: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23b900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b904: 0x14800024  bnez        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23B904u;
    {
        const bool branch_taken_0x23b904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B904u;
        // 0x23b908: 0x24713ce8  addiu       $s1, $v1, 0x3CE8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b904) {
            ctx->pc = 0x23B998u;
            goto label_23b998;
        }
    }
    ctx->pc = 0x23B90Cu;
    // 0x23b90c: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x23b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23b910: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x23B910u;
    {
        const bool branch_taken_0x23b910 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x23B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B910u;
        // 0x23b914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b910) {
            ctx->pc = 0x23B950u;
            goto label_23b950;
        }
    }
    ctx->pc = 0x23B918u;
    // 0x23b918: 0x9382b738  lbu         $v0, -0x48C8($gp)
    ctx->pc = 0x23b918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948664)));
    // 0x23b91c: 0x1450000c  bne         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x23B91Cu;
    {
        const bool branch_taken_0x23b91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x23b91c) {
            ctx->pc = 0x23B950u;
            goto label_23b950;
        }
    }
    ctx->pc = 0x23B924u;
    // 0x23b924: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x23b924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b928: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23b928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b92c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x23b92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23b930: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23b930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23b934: 0x0  nop
    ctx->pc = 0x23b934u;
    // NOP
label_23b938:
    // 0x23b938: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x23b938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x23b93c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B93Cu;
    {
        const bool branch_taken_0x23b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B93Cu;
        // 0x23b940: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b93c) {
            ctx->pc = 0x23B950u;
            goto label_23b950;
        }
    }
    ctx->pc = 0x23B944u;
    // 0x23b944: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23b944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b948: 0x5067fffb  beql        $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23B948u;
    {
        const bool branch_taken_0x23b948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x23b948) {
            ctx->pc = 0x23B94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B948u;
            // 0x23b94c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b938;
        }
    }
    ctx->pc = 0x23B950u;
label_23b950:
    // 0x23b950: 0x14850011  bne         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x23B950u;
    {
        const bool branch_taken_0x23b950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x23b950) {
            ctx->pc = 0x23B998u;
            goto label_23b998;
        }
    }
    ctx->pc = 0x23B958u;
    // 0x23b958: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23B958u;
    SET_GPR_U32(ctx, 31, 0x23B960u);
    ctx->pc = 0x23B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B958u;
    // 0x23b95c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23B958u, 0x23B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B960u;
label_23b960:
    // 0x23b960: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x23b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x23b964: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23B964u;
    {
        const bool branch_taken_0x23b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B964u;
        // 0x23b968: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b964) {
            ctx->pc = 0x23B994u;
            goto label_23b994;
        }
    }
    ctx->pc = 0x23B96Cu;
    // 0x23b96c: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x23b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x23b970: 0xc081546  jal         func_205518
    ctx->pc = 0x23B970u;
    SET_GPR_U32(ctx, 31, 0x23B978u);
    ctx->pc = 0x23B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B970u;
    // 0x23b974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23B970u, 0x23B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B978u;
label_23b978:
    // 0x23b978: 0xc09071a  jal         func_241C68
    ctx->pc = 0x23B978u;
    SET_GPR_U32(ctx, 31, 0x23B980u);
    ctx->pc = 0x241C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241C68u, 0x23B978u, 0x23B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B980u;
label_23b980:
    // 0x23b980: 0xc09056a  jal         func_2415A8
    ctx->pc = 0x23B980u;
    SET_GPR_U32(ctx, 31, 0x23B988u);
    ctx->pc = 0x2415A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2415A8u, 0x23B980u, 0x23B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B988u;
label_23b988:
    // 0x23b988: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x23B988u;
    SET_GPR_U32(ctx, 31, 0x23B990u);
    ctx->pc = 0x23B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B988u;
    // 0x23b98c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x23B988u, 0x23B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B990u;
label_23b990:
    // 0x23b990: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23b990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_23b994:
    // 0x23b994: 0x24513d38  addiu       $s1, $v0, 0x3D38
    ctx->pc = 0x23b994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15672));
label_23b998:
    // 0x23b998: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x23B998u;
    {
        const bool branch_taken_0x23b998 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B998u;
        // 0x23b99c: 0x8f83b730  lw          $v1, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b998) {
            ctx->pc = 0x23B9E8u;
            goto label_23b9e8;
        }
    }
    ctx->pc = 0x23B9A0u;
    // 0x23b9a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b9a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B9A4u;
    {
        const bool branch_taken_0x23b9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9A4u;
        // 0x23b9a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9a4) {
            ctx->pc = 0x23B9BCu;
            goto label_23b9bc;
        }
    }
    ctx->pc = 0x23B9ACu;
    // 0x23b9ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B9ACu;
    {
        const bool branch_taken_0x23b9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9ACu;
        // 0x23b9b0: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9ac) {
            ctx->pc = 0x23B9C4u;
            goto label_23b9c4;
        }
    }
    ctx->pc = 0x23B9B4u;
    // 0x23b9b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23B9B4u;
    {
        const bool branch_taken_0x23b9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9B4u;
        // 0x23b9b8: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9b4) {
            ctx->pc = 0x23B9CCu;
            goto label_23b9cc;
        }
    }
    ctx->pc = 0x23B9BCu;
label_23b9bc:
    // 0x23b9bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23B9BCu;
    {
        const bool branch_taken_0x23b9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9BCu;
        // 0x23b9c0: 0x240200aa  addiu       $v0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9bc) {
            ctx->pc = 0x23B9C8u;
            goto label_23b9c8;
        }
    }
    ctx->pc = 0x23B9C4u;
label_23b9c4:
    // 0x23b9c4: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x23b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_23b9c8:
    // 0x23b9c8: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x23b9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_23b9cc:
    // 0x23b9cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b9d0: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23B9D0u;
    SET_GPR_U32(ctx, 31, 0x23B9D8u);
    ctx->pc = 0x23B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9D0u;
    // 0x23b9d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23B9D0u, 0x23B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9D8u;
label_23b9d8:
    // 0x23b9d8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x23b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23b9dc: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23B9DCu;
    SET_GPR_U32(ctx, 31, 0x23B9E4u);
    ctx->pc = 0x23B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9DCu;
    // 0x23b9e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23B9DCu, 0x23B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9E4u;
label_23b9e4:
    // 0x23b9e4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x23b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_23b9e8:
    // 0x23b9e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23b9ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b9ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b9f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b9f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b9f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b9f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ba00: 0x3e00008  jr          $ra
    ctx->pc = 0x23BA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA00u;
        // 0x23ba04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BA08u;
}
