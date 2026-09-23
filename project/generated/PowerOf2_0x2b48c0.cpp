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

// Function: PowerOf2
// Address: 0x2b48c0 - 0x2b48f4
void PowerOf2_0x2b48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PowerOf2_0x2b48c0");
#endif

    switch (ctx->pc) {
        case 0x2b48d0u: goto label_2b48d0;
        default: break;
    }

    ctx->pc = 0x2b48c0u;

    // 0x2b48c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b48c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b48c4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B48C4u;
    {
        const bool branch_taken_0x2b48c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48C4u;
        // 0x2b48c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48c4) {
            ctx->pc = 0x2B48ECu;
            goto label_2b48ec;
        }
    }
    ctx->pc = 0x2B48CCu;
    // 0x2b48cc: 0x0  nop
    ctx->pc = 0x2b48ccu;
    // NOP
label_2b48d0:
    // 0x2b48d0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2b48d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2b48d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b48d8: 0x0  nop
    ctx->pc = 0x2b48d8u;
    // NOP
    // 0x2b48dc: 0x0  nop
    ctx->pc = 0x2b48dcu;
    // NOP
    // 0x2b48e0: 0x0  nop
    ctx->pc = 0x2b48e0u;
    // NOP
    // 0x2b48e4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B48E4u;
    {
        const bool branch_taken_0x2b48e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b48e4) {
            ctx->pc = 0x2B48D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b48d0;
        }
    }
    ctx->pc = 0x2B48ECu;
label_2b48ec:
    // 0x2b48ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B48ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B48ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B48F4u;
}
