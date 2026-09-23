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

// Function: mmfileGetItemCount
// Address: 0x2537b0 - 0x2538e8
void mmfileGetItemCount_0x2537b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileGetItemCount_0x2537b0");
#endif

    switch (ctx->pc) {
        case 0x253828u: goto label_253828;
        case 0x253858u: goto label_253858;
        case 0x253878u: goto label_253878;
        default: break;
    }

    ctx->pc = 0x2537b0u;

    // 0x2537b0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2537b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537b4: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x2537b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x2537b8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2537b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2537bc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2537bcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537c0: 0x34424626  ori         $v0, $v0, 0x4626
    ctx->pc = 0x2537c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17958);
    // 0x2537c4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2537C4u;
    {
        const bool branch_taken_0x2537c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2537C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537C4u;
        // 0x2537c8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537c4) {
            ctx->pc = 0x2537DCu;
            goto label_2537dc;
        }
    }
    ctx->pc = 0x2537CCu;
    // 0x2537cc: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2537ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2537d0: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2537d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2537d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2537D4u;
    {
        const bool branch_taken_0x2537d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2537D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537D4u;
        // 0x2537d8: 0x24841ffc  addiu       $a0, $a0, 0x1FFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537d4) {
            ctx->pc = 0x2537E4u;
            goto label_2537e4;
        }
    }
    ctx->pc = 0x2537DCu;
label_2537dc:
    // 0x2537dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2537DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2537E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537DCu;
        // 0x2537e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2537DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2537E4u;
label_2537e4:
    // 0x2537e4: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2537e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x2537e8: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x2537e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2537ec: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2537ECu;
    {
        const bool branch_taken_0x2537ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537ECu;
        // 0x2537f0: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537ec) {
            ctx->pc = 0x2538E0u;
            goto label_2538e0;
        }
    }
    ctx->pc = 0x2537F4u;
    // 0x2537f4: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x2537f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x2537f8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2537f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2537fc: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x2537fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x253800: 0x10c20037  beq         $a2, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x253800u;
    {
        const bool branch_taken_0x253800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x253804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253800u;
        // 0x253804: 0x246a0008  addiu       $t2, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253800) {
            ctx->pc = 0x2538E0u;
            goto label_2538e0;
        }
    }
    ctx->pc = 0x253808u;
    // 0x253808: 0x3c0f0132  lui         $t7, 0x132
    ctx->pc = 0x253808u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)306 << 16));
    // 0x25380c: 0x3c0e0132  lui         $t6, 0x132
    ctx->pc = 0x25380cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)306 << 16));
    // 0x253810: 0x3c0d0132  lui         $t5, 0x132
    ctx->pc = 0x253810u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)306 << 16));
    // 0x253814: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x253814u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253818: 0x35ef4627  ori         $t7, $t7, 0x4627
    ctx->pc = 0x253818u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)17959);
    // 0x25381c: 0x35ce4628  ori         $t6, $t6, 0x4628
    ctx->pc = 0x25381cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)17960);
    // 0x253820: 0x35ad4629  ori         $t5, $t5, 0x4629
    ctx->pc = 0x253820u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)17961);
    // 0x253824: 0x0  nop
    ctx->pc = 0x253824u;
    // NOP
label_253828:
    // 0x253828: 0x14cf0004  bne         $a2, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x253828u;
    {
        const bool branch_taken_0x253828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 15));
        if (branch_taken_0x253828) {
            ctx->pc = 0x25383Cu;
            goto label_25383c;
        }
    }
    ctx->pc = 0x253830u;
    // 0x253830: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x253830u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x253834: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x253834u;
    {
        const bool branch_taken_0x253834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253834u;
        // 0x253838: 0x8d580004  lw          $t8, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253834) {
            ctx->pc = 0x2538C0u;
            goto label_2538c0;
        }
    }
    ctx->pc = 0x25383Cu;
label_25383c:
    // 0x25383c: 0x54ce0020  bnel        $a2, $t6, . + 4 + (0x20 << 2)
    ctx->pc = 0x25383Cu;
    {
        const bool branch_taken_0x25383c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 14));
        if (branch_taken_0x25383c) {
            ctx->pc = 0x253840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25383Cu;
            // 0x253840: 0x8c6b0004  lw          $t3, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2538C0u;
            goto label_2538c0;
        }
    }
    ctx->pc = 0x253844u;
    // 0x253844: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x253844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253848: 0x1b00001c  blez        $t8, . + 4 + (0x1C << 2)
    ctx->pc = 0x253848u;
    {
        const bool branch_taken_0x253848 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x25384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253848u;
        // 0x25384c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253848) {
            ctx->pc = 0x2538BCu;
            goto label_2538bc;
        }
    }
    ctx->pc = 0x253850u;
    // 0x253850: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x253850u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x253854: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x253854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_253858:
    // 0x253858: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x253858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x25385c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25385Cu;
    {
        const bool branch_taken_0x25385c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25385Cu;
        // 0x253860: 0x24e70024  addiu       $a3, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25385c) {
            ctx->pc = 0x2538A0u;
            goto label_2538a0;
        }
    }
    ctx->pc = 0x253864u;
    // 0x253864: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x253864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253868: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x253868u;
    {
        const bool branch_taken_0x253868 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x25386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253868u;
        // 0x25386c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253868) {
            ctx->pc = 0x2538A0u;
            goto label_2538a0;
        }
    }
    ctx->pc = 0x253870u;
    // 0x253870: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x253870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x253874: 0x0  nop
    ctx->pc = 0x253874u;
    // NOP
label_253878:
    // 0x253878: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x253878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25387c: 0x25840001  addiu       $a0, $t4, 0x1
    ctx->pc = 0x25387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x253880: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x253880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x253884: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x253884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x253888: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x253888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x25388c: 0xc9182a  slt         $v1, $a2, $t1
    ctx->pc = 0x25388cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x253890: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x253890u;
    {
        const bool branch_taken_0x253890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253890u;
        // 0x253894: 0x82600a  movz        $t4, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253890) {
            ctx->pc = 0x253878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253878;
        }
    }
    ctx->pc = 0x253898u;
    // 0x253898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253898u;
    {
        const bool branch_taken_0x253898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253898u;
        // 0x25389c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253898) {
            ctx->pc = 0x2538A8u;
            goto label_2538a8;
        }
    }
    ctx->pc = 0x2538A0u;
label_2538a0:
    // 0x2538a0: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x2538a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2538a4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2538a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2538a8:
    // 0x2538a8: 0x98102a  slt         $v0, $a0, $t8
    ctx->pc = 0x2538a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x2538ac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2538ACu;
    {
        const bool branch_taken_0x2538ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2538B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538ACu;
        // 0x2538b0: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538ac) {
            ctx->pc = 0x253858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253858;
        }
    }
    ctx->pc = 0x2538B4u;
    // 0x2538b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2538B4u;
    {
        const bool branch_taken_0x2538b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538B4u;
        // 0x2538b8: 0x14b5021  addu        $t2, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538b4) {
            ctx->pc = 0x2538C4u;
            goto label_2538c4;
        }
    }
    ctx->pc = 0x2538BCu;
label_2538bc:
    // 0x2538bc: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x2538bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2538c0:
    // 0x2538c0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2538c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2538c4:
    // 0x2538c4: 0x159102b  sltu        $v0, $t2, $t9
    ctx->pc = 0x2538c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x2538c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2538C8u;
    {
        const bool branch_taken_0x2538c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538C8u;
        // 0x2538cc: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538c8) {
            ctx->pc = 0x2538E0u;
            goto label_2538e0;
        }
    }
    ctx->pc = 0x2538D0u;
    // 0x2538d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2538d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2538d4: 0x246a0008  addiu       $t2, $v1, 0x8
    ctx->pc = 0x2538d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2538d8: 0x144dffd3  bne         $v0, $t5, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2538D8u;
    {
        const bool branch_taken_0x2538d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        ctx->pc = 0x2538DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538D8u;
        // 0x2538dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538d8) {
            ctx->pc = 0x253828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253828;
        }
    }
    ctx->pc = 0x2538E0u;
label_2538e0:
    // 0x2538e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2538E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2538E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538E0u;
        // 0x2538e4: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2538E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2538E8u;
}
