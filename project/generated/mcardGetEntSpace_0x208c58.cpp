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

// Function: mcardGetEntSpace
// Address: 0x208c58 - 0x208c70
void mcardGetEntSpace_0x208c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardGetEntSpace_0x208c58");
#endif

    ctx->pc = 0x208c58u;

    // 0x208c58: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x208c5c: 0xaf84b654  sw          $a0, -0x49AC($gp)
    ctx->pc = 0x208c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948436), GPR_U32(ctx, 4));
    // 0x208c60: 0xaf85b658  sw          $a1, -0x49A8($gp)
    ctx->pc = 0x208c60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948440), GPR_U32(ctx, 5));
    // 0x208c64: 0xaf829bec  sw          $v0, -0x6414($gp)
    ctx->pc = 0x208c64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
    // 0x208c68: 0x3e00008  jr          $ra
    ctx->pc = 0x208C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C68u;
        // 0x208c6c: 0xaf809be8  sw          $zero, -0x6418($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208C70u;
}
