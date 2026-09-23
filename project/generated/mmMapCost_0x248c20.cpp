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

// Function: mmMapCost
// Address: 0x248c20 - 0x248c94
void mmMapCost_0x248c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmMapCost_0x248c20");
#endif

    switch (ctx->pc) {
        case 0x248c50u: goto label_248c50;
        case 0x248c68u: goto label_248c68;
        default: break;
    }

    ctx->pc = 0x248c20u;

    // 0x248c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x248c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x248c24: 0x8f82a128  lw          $v0, -0x5ED8($gp)
    ctx->pc = 0x248c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943016)));
    // 0x248c28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x248c2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x248c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x248c30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x248c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x248c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x248c38: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x248C38u;
    {
        const bool branch_taken_0x248c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C38u;
        // 0x248c3c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c38) {
            ctx->pc = 0x248C78u;
            goto label_248c78;
        }
    }
    ctx->pc = 0x248C40u;
    // 0x248c40: 0x8f90a12c  lw          $s0, -0x5ED4($gp)
    ctx->pc = 0x248c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x248c44: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x248C44u;
    {
        const bool branch_taken_0x248c44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C44u;
        // 0x248c48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c44) {
            ctx->pc = 0x248C78u;
            goto label_248c78;
        }
    }
    ctx->pc = 0x248C4Cu;
    // 0x248c4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x248c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_248c50:
    // 0x248c50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x248c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x248c54: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x248C54u;
    {
        const bool branch_taken_0x248c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x248C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C54u;
        // 0x248c58: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c54) {
            ctx->pc = 0x248C6Cu;
            goto label_248c6c;
        }
    }
    ctx->pc = 0x248C5Cu;
    // 0x248c5c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x248c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x248c60: 0xc092326  jal         func_248C98
    ctx->pc = 0x248C60u;
    SET_GPR_U32(ctx, 31, 0x248C68u);
    ctx->pc = 0x248C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C60u;
    // 0x248c64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C98u, 0x248C60u, 0x248C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C68u;
label_248c68:
    // 0x248c68: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x248c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_248c6c:
    // 0x248c6c: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x248c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x248c70: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x248C70u;
    {
        const bool branch_taken_0x248c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c70) {
            ctx->pc = 0x248C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248C70u;
            // 0x248c74: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248c50;
        }
    }
    ctx->pc = 0x248C78u;
label_248c78:
    // 0x248c78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x248c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x248c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248c80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x248c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248c84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x248c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x248C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C8Cu;
        // 0x248c90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248C94u;
}
