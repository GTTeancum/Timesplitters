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

// Function: frontredReset
// Address: 0x22fef8 - 0x22ff3c
void frontredReset_0x22fef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontredReset_0x22fef8");
#endif

    switch (ctx->pc) {
        case 0x22ff18u: goto label_22ff18;
        default: break;
    }

    ctx->pc = 0x22fef8u;

    // 0x22fef8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x22fef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x22fefc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22fefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff00: 0x8cc22fb0  lw          $v0, 0x2FB0($a2)
    ctx->pc = 0x22ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x352FB0u));
    // 0x22ff04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22FF04u;
    {
        const bool branch_taken_0x22ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF04u;
        // 0x22ff08: 0xaf80b72c  sw          $zero, -0x48D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff04) {
            ctx->pc = 0x22FF34u;
            goto label_22ff34;
        }
    }
    ctx->pc = 0x22FF0Cu;
    // 0x22ff0c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x22ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22ff10: 0x24c42fb0  addiu       $a0, $a2, 0x2FB0
    ctx->pc = 0x22ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12208));
    // 0x22ff14: 0x0  nop
    ctx->pc = 0x22ff14u;
    // NOP
label_22ff18:
    // 0x22ff18: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22ff18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff1c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x22ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x22ff20: 0xaf85b72c  sw          $a1, -0x48D4($gp)
    ctx->pc = 0x22ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948652), GPR_U32(ctx, 5));
    // 0x22ff24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22ff28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ff2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22FF2Cu;
    {
        const bool branch_taken_0x22ff2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF2Cu;
        // 0x22ff30: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff2c) {
            ctx->pc = 0x22FF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ff18;
        }
    }
    ctx->pc = 0x22FF34u;
label_22ff34:
    // 0x22ff34: 0x3e00008  jr          $ra
    ctx->pc = 0x22FF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FF3Cu;
}
