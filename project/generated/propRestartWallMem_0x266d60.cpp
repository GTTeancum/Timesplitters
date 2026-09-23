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

// Function: propRestartWallMem
// Address: 0x266d60 - 0x266d94
void propRestartWallMem_0x266d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propRestartWallMem_0x266d60");
#endif

    switch (ctx->pc) {
        case 0x266d70u: goto label_266d70;
        default: break;
    }

    ctx->pc = 0x266d60u;

    // 0x266d60: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x266d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x266d64: 0x244238c0  addiu       $v0, $v0, 0x38C0
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14528));
    // 0x266d68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266D68u;
    {
        const bool branch_taken_0x266d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266d68) {
            ctx->pc = 0x266D8Cu;
            goto label_266d8c;
        }
    }
    ctx->pc = 0x266D70u;
label_266d70:
    // 0x266d70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x266d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x266d74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266d78: 0x0  nop
    ctx->pc = 0x266d78u;
    // NOP
    // 0x266d7c: 0x0  nop
    ctx->pc = 0x266d7cu;
    // NOP
    // 0x266d80: 0x0  nop
    ctx->pc = 0x266d80u;
    // NOP
    // 0x266d84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x266D84u;
    {
        const bool branch_taken_0x266d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266d84) {
            ctx->pc = 0x266D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266d70;
        }
    }
    ctx->pc = 0x266D8Cu;
label_266d8c:
    // 0x266d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x266D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266D94u;
}
