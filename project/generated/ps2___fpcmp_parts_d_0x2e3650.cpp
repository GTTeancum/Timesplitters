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

// Function: __fpcmp_parts_d
// Address: 0x2e3650 - 0x2e3764
void ps2___fpcmp_parts_d_0x2e3650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_d_0x2e3650");
#endif

    switch (ctx->pc) {
        case 0x2e3698u: goto label_2e3698;
        case 0x2e3708u: goto label_2e3708;
        case 0x2e3734u: goto label_2e3734;
        default: break;
    }

    ctx->pc = 0x2e3650u;

    // 0x2e3650: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2e3650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3654: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2e3654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3658: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3658u;
    {
        const bool branch_taken_0x2e3658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3658) {
            ctx->pc = 0x2E3670u;
            goto label_2e3670;
        }
    }
    ctx->pc = 0x2E3660u;
    // 0x2e3660: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e3664: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2e3664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3668: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3668u;
    {
        const bool branch_taken_0x2e3668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3668u;
        // 0x2e366c: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3668) {
            ctx->pc = 0x2E3678u;
            goto label_2e3678;
        }
    }
    ctx->pc = 0x2E3670u;
label_2e3670:
    // 0x2e3670: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3670u;
        // 0x2e3674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3678u;
label_2e3678:
    // 0x2e3678: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3678u;
    {
        const bool branch_taken_0x2e3678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3678u;
        // 0x2e367c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3678) {
            ctx->pc = 0x2E36A8u;
            goto label_2e36a8;
        }
    }
    ctx->pc = 0x2E3680u;
    // 0x2e3680: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3680u;
    {
        const bool branch_taken_0x2e3680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3680) {
            ctx->pc = 0x2E3684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3680u;
            // 0x2e3684: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3698u;
            goto label_2e3698;
        }
    }
    ctx->pc = 0x2E3688u;
    // 0x2e3688: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2e3688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e368c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e3690: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3690u;
        // 0x2e3694: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3698u;
label_2e3698:
    // 0x2e3698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e3698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e369c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e36a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E36A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36A0u;
        // 0x2e36a4: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E36A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E36A8u;
label_2e36a8:
    // 0x2e36a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E36A8u;
    {
        const bool branch_taken_0x2e36a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e36a8) {
            ctx->pc = 0x2E36ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E36A8u;
            // 0x2e36ac: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E36C4u;
            goto label_2e36c4;
        }
    }
    ctx->pc = 0x2E36B0u;
    // 0x2e36b0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2e36b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e36b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e36b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e36bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E36BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36BCu;
        // 0x2e36c0: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E36BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E36C4u;
label_2e36c4:
    // 0x2e36c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E36C4u;
    {
        const bool branch_taken_0x2e36c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36C4u;
        // 0x2e36c8: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36c4) {
            ctx->pc = 0x2E36ECu;
            goto label_2e36ec;
        }
    }
    ctx->pc = 0x2E36CCu;
    // 0x2e36cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E36CCu;
    {
        const bool branch_taken_0x2e36cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e36cc) {
            ctx->pc = 0x2E36D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E36CCu;
            // 0x2e36d0: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E36DCu;
            goto label_2e36dc;
        }
    }
    ctx->pc = 0x2E36D4u;
    // 0x2e36d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E36D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36D4u;
        // 0x2e36d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E36D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E36DCu;
label_2e36dc:
    // 0x2e36dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e36e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e36e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E36E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36E4u;
        // 0x2e36e8: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E36E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E36ECu;
label_2e36ec:
    // 0x2e36ec: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2E36ECu;
    {
        const bool branch_taken_0x2e36ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e36ec) {
            ctx->pc = 0x2E36F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E36ECu;
            // 0x2e36f0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3698;
        }
    }
    ctx->pc = 0x2E36F4u;
    // 0x2e36f4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2e36f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e36f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e36fc: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E36FCu;
    {
        const bool branch_taken_0x2e36fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e36fc) {
            ctx->pc = 0x2E3700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E36FCu;
            // 0x2e3700: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3714u;
            goto label_2e3714;
        }
    }
    ctx->pc = 0x2E3704u;
    // 0x2e3704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e3704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3708:
    // 0x2e3708: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e3708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e370c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E370Cu;
        // 0x2e3710: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3714u;
label_2e3714:
    // 0x2e3714: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2e3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e3718: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2e3718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2e371c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E371Cu;
    {
        const bool branch_taken_0x2e371c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e371c) {
            ctx->pc = 0x2E3720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E371Cu;
            // 0x2e3720: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3708;
        }
    }
    ctx->pc = 0x2E3724u;
    // 0x2e3724: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2e3724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3728: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3728u;
    {
        const bool branch_taken_0x2e3728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3728) {
            ctx->pc = 0x2E372Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3728u;
            // 0x2e372c: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3740u;
            goto label_2e3740;
        }
    }
    ctx->pc = 0x2E3730u;
    // 0x2e3730: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e3730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e3734:
    // 0x2e3734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3738: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3738u;
        // 0x2e373c: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3740u;
label_2e3740:
    // 0x2e3740: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x2e3740u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2e3744: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2e3744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3748: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E3748u;
    {
        const bool branch_taken_0x2e3748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3748) {
            ctx->pc = 0x2E374Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3748u;
            // 0x2e374c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3708;
        }
    }
    ctx->pc = 0x2E3750u;
    // 0x2e3750: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2e3750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e3754: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E3754u;
    {
        const bool branch_taken_0x2e3754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3754u;
        // 0x2e3758: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3754) {
            ctx->pc = 0x2E3734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3734;
        }
    }
    ctx->pc = 0x2E375Cu;
    // 0x2e375c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E375Cu;
        // 0x2e3760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3764u;
}
