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

// Function: findpadslinked2pad
// Address: 0x264a18 - 0x264ac4
void findpadslinked2pad_0x264a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("findpadslinked2pad_0x264a18");
#endif

    switch (ctx->pc) {
        case 0x264a30u: goto label_264a30;
        default: break;
    }

    ctx->pc = 0x264a18u;

    // 0x264a18: 0x8f82a34c  lw          $v0, -0x5CB4($gp)
    ctx->pc = 0x264a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x264a1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x264a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a20: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x264A20u;
    {
        const bool branch_taken_0x264a20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x264A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A20u;
        // 0x264a24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a20) {
            ctx->pc = 0x264ABCu;
            goto label_264abc;
        }
    }
    ctx->pc = 0x264A28u;
    // 0x264a28: 0x8f8aa2f0  lw          $t2, -0x5D10($gp)
    ctx->pc = 0x264a28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x264a2c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x264a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_264a30:
    // 0x264a30: 0x1231018  mult        $v0, $t1, $v1
    ctx->pc = 0x264a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264a34: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x264a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x264a38: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x264a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x264a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264a40: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x264A40u;
    {
        const bool branch_taken_0x264a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A40u;
        // 0x264a44: 0x106102a  slt         $v0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a40) {
            ctx->pc = 0x264A9Cu;
            goto label_264a9c;
        }
    }
    ctx->pc = 0x264A48u;
    // 0x264a48: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x264a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x264a4c: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264A4Cu;
    {
        const bool branch_taken_0x264a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x264a4c) {
            ctx->pc = 0x264A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264A4Cu;
            // 0x264a50: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264A6Cu;
            goto label_264a6c;
        }
    }
    ctx->pc = 0x264A54u;
    // 0x264a54: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x264a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x264a58: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x264a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x264a5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x264a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x264a60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x264a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x264a64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x264a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x264a68: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x264a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_264a6c:
    // 0x264a6c: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x264A6Cu;
    {
        const bool branch_taken_0x264a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x264A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A6Cu;
        // 0x264a70: 0x106102a  slt         $v0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a6c) {
            ctx->pc = 0x264A9Cu;
            goto label_264a9c;
        }
    }
    ctx->pc = 0x264A74u;
    // 0x264a74: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x264a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x264a78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x264a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x264a7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264A7Cu;
    {
        const bool branch_taken_0x264a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A7Cu;
        // 0x264a80: 0x106102a  slt         $v0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a7c) {
            ctx->pc = 0x264A9Cu;
            goto label_264a9c;
        }
    }
    ctx->pc = 0x264A84u;
    // 0x264a84: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x264a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x264a88: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x264a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x264a8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x264a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x264a90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x264a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x264a94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x264a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x264a98: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x264a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_264a9c:
    // 0x264a9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264A9Cu;
    {
        const bool branch_taken_0x264a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A9Cu;
        // 0x264aa0: 0x8f82a34c  lw          $v0, -0x5CB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a9c) {
            ctx->pc = 0x264AACu;
            goto label_264aac;
        }
    }
    ctx->pc = 0x264AA4u;
    // 0x264aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x264AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AA4u;
        // 0x264aa8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264AACu;
label_264aac:
    // 0x264aac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x264aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x264ab0: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x264ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x264ab4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x264AB4u;
    {
        const bool branch_taken_0x264ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AB4u;
        // 0x264ab8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ab4) {
            ctx->pc = 0x264A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264a30;
        }
    }
    ctx->pc = 0x264ABCu;
label_264abc:
    // 0x264abc: 0x3e00008  jr          $ra
    ctx->pc = 0x264ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264ABCu;
        // 0x264ac0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264AC4u;
}
