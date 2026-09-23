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

// Function: _pow5mult
// Address: 0x2ec588 - 0x2ec688
void _pow5mult_0x2ec588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pow5mult_0x2ec588");
#endif

    switch (ctx->pc) {
        case 0x2ec5d4u: goto label_2ec5d4;
        case 0x2ec5fcu: goto label_2ec5fc;
        case 0x2ec610u: goto label_2ec610;
        case 0x2ec628u: goto label_2ec628;
        case 0x2ec64cu: goto label_2ec64c;
        case 0x2ec65cu: goto label_2ec65c;
        default: break;
    }

    ctx->pc = 0x2ec588u;

    // 0x2ec588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ec588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ec58c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ec58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ec590: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ec590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ec594: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ec594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec598: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ec598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ec59c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ec59cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec5a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ec5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ec5a4: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x2ec5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2ec5a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec5ac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EC5ACu;
    {
        const bool branch_taken_0x2ec5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5ACu;
        // 0x2ec5b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5ac) {
            ctx->pc = 0x2EC5D8u;
            goto label_2ec5d8;
        }
    }
    ctx->pc = 0x2EC5B4u;
    // 0x2ec5b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ec5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ec5b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ec5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ec5bc: 0x2442c5d0  addiu       $v0, $v0, -0x3A30
    ctx->pc = 0x2ec5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952400));
    // 0x2ec5c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ec5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec5c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ec5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ec5c8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2ec5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec5cc: 0xc0bafde  jal         func_2EBF78
    ctx->pc = 0x2EC5CCu;
    SET_GPR_U32(ctx, 31, 0x2EC5D4u);
    ctx->pc = 0x2EC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5CCu;
    // 0x2ec5d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF78u, 0x2EC5CCu, 0x2EC5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5D4u;
label_2ec5d4:
    // 0x2ec5d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ec5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ec5d8:
    // 0x2ec5d8: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x2ec5d8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x2ec5dc: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EC5DCu;
    {
        const bool branch_taken_0x2ec5dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5DCu;
        // 0x2ec5e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5dc) {
            ctx->pc = 0x2EC66Cu;
            goto label_2ec66c;
        }
    }
    ctx->pc = 0x2EC5E4u;
    // 0x2ec5e4: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x2ec5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2ec5e8: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC5E8u;
    {
        const bool branch_taken_0x2ec5e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5E8u;
        // 0x2ec5ec: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5e8) {
            ctx->pc = 0x2EC638u;
            goto label_2ec638;
        }
    }
    ctx->pc = 0x2EC5F0u;
    // 0x2ec5f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ec5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec5f4: 0xc0bb0c8  jal         func_2EC320
    ctx->pc = 0x2EC5F4u;
    SET_GPR_U32(ctx, 31, 0x2EC5FCu);
    ctx->pc = 0x2EC5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5F4u;
    // 0x2ec5f8: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC320u, 0x2EC5F4u, 0x2EC5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5FCu;
label_2ec5fc:
    // 0x2ec5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec600: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x2ec600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x2ec604: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EC604u;
    {
        const bool branch_taken_0x2ec604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC604u;
        // 0x2ec608: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec604) {
            ctx->pc = 0x2EC634u;
            goto label_2ec634;
        }
    }
    ctx->pc = 0x2EC60Cu;
    // 0x2ec60c: 0x0  nop
    ctx->pc = 0x2ec60cu;
    // NOP
label_2ec610:
    // 0x2ec610: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC610u;
    {
        const bool branch_taken_0x2ec610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec610) {
            ctx->pc = 0x2EC614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC610u;
            // 0x2ec614: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC634u;
            goto label_2ec634;
        }
    }
    ctx->pc = 0x2EC618u;
    // 0x2ec618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ec618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec61c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ec61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec620: 0xc0bb0d6  jal         func_2EC358
    ctx->pc = 0x2EC620u;
    SET_GPR_U32(ctx, 31, 0x2EC628u);
    ctx->pc = 0x2EC624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC620u;
    // 0x2ec624: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC358u, 0x2EC620u, 0x2EC628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC628u;
label_2ec628:
    // 0x2ec628: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ec628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ec62c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2ec62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ec630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ec634:
    // 0x2ec634: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2ec634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2ec638:
    // 0x2ec638: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC638u;
    {
        const bool branch_taken_0x2ec638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC638u;
        // 0x2ec63c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec638) {
            ctx->pc = 0x2EC65Cu;
            goto label_2ec65c;
        }
    }
    ctx->pc = 0x2EC640u;
    // 0x2ec640: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ec640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec644: 0xc0bb0d6  jal         func_2EC358
    ctx->pc = 0x2EC644u;
    SET_GPR_U32(ctx, 31, 0x2EC64Cu);
    ctx->pc = 0x2EC648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC644u;
    // 0x2ec648: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC358u, 0x2EC644u, 0x2EC64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC64Cu;
label_2ec64c:
    // 0x2ec64c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ec64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec650: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ec650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec654: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EC654u;
    SET_GPR_U32(ctx, 31, 0x2EC65Cu);
    ctx->pc = 0x2EC658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC654u;
    // 0x2ec658: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EC654u, 0x2EC65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC65Cu;
label_2ec65c:
    // 0x2ec65c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x2ec65cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x2ec660: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2EC660u;
    {
        const bool branch_taken_0x2ec660 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec660) {
            ctx->pc = 0x2EC664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC660u;
            // 0x2ec664: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec610;
        }
    }
    ctx->pc = 0x2EC668u;
    // 0x2ec668: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ec668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ec66c:
    // 0x2ec66c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ec66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec670: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ec670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec674: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ec674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec678: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ec678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec67c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec67cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec680: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC680u;
        // 0x2ec684: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC688u;
}
