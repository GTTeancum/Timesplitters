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

// Function: mmResetCursorPos
// Address: 0x24fcf0 - 0x24fd58
void mmResetCursorPos_0x24fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmResetCursorPos_0x24fcf0");
#endif

    switch (ctx->pc) {
        case 0x24fd30u: goto label_24fd30;
        default: break;
    }

    ctx->pc = 0x24fcf0u;

    // 0x24fcf0: 0x8f82a160  lw          $v0, -0x5EA0($gp)
    ctx->pc = 0x24fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x24fcf4: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x24fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x24fcf8: 0x8f83a164  lw          $v1, -0x5E9C($gp)
    ctx->pc = 0x24fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x24fcfc: 0x24854080  addiu       $a1, $a0, 0x4080
    ctx->pc = 0x24fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x24fd00: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x24fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24fd04: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24fd08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x24fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24fd0c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24fd0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x24fd10: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x24fd10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x24fd14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24fd14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd18: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x24fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x24fd1c: 0x24a70078  addiu       $a3, $a1, 0x78
    ctx->pc = 0x24fd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x24fd20: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x24fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x24fd24: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x24fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24fd28: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x24fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x24fd2c: 0x0  nop
    ctx->pc = 0x24fd2cu;
    // NOP
label_24fd30:
    // 0x24fd30: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x24fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x24fd34: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x24fd38: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x24fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x24fd3c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x24fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x24fd40: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x24fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x24fd44: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x24fd44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x24fd48: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24FD48u;
    {
        const bool branch_taken_0x24fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fd48) {
            ctx->pc = 0x24FD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD48u;
            // 0x24fd4c: 0x8cc20020  lw          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fd30;
        }
    }
    ctx->pc = 0x24FD50u;
    // 0x24fd50: 0x3e00008  jr          $ra
    ctx->pc = 0x24FD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FD58u;
}
