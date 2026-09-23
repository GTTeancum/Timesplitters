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

// Function: mmDebugObjects
// Address: 0x248580 - 0x2485b4
void mmDebugObjects_0x248580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDebugObjects_0x248580");
#endif

    switch (ctx->pc) {
        case 0x248590u: goto label_248590;
        default: break;
    }

    ctx->pc = 0x248580u;

    // 0x248580: 0x8f82a12c  lw          $v0, -0x5ED4($gp)
    ctx->pc = 0x248580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x248584: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x248584u;
    {
        const bool branch_taken_0x248584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248584) {
            ctx->pc = 0x2485ACu;
            goto label_2485ac;
        }
    }
    ctx->pc = 0x24858Cu;
    // 0x24858c: 0x0  nop
    ctx->pc = 0x24858cu;
    // NOP
label_248590:
    // 0x248590: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x248590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x248594: 0x0  nop
    ctx->pc = 0x248594u;
    // NOP
    // 0x248598: 0x0  nop
    ctx->pc = 0x248598u;
    // NOP
    // 0x24859c: 0x0  nop
    ctx->pc = 0x24859cu;
    // NOP
    // 0x2485a0: 0x0  nop
    ctx->pc = 0x2485a0u;
    // NOP
    // 0x2485a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2485A4u;
    {
        const bool branch_taken_0x2485a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2485a4) {
            ctx->pc = 0x248590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248590;
        }
    }
    ctx->pc = 0x2485ACu;
label_2485ac:
    // 0x2485ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2485ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2485B4u;
}
