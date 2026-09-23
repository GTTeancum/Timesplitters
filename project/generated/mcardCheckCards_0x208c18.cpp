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

// Function: mcardCheckCards
// Address: 0x208c18 - 0x208c34
void mcardCheckCards_0x208c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardCheckCards_0x208c18");
#endif

    ctx->pc = 0x208c18u;

    // 0x208c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208c1c: 0xaf84b648  sw          $a0, -0x49B8($gp)
    ctx->pc = 0x208c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948424), GPR_U32(ctx, 4));
    // 0x208c20: 0xaf85b64c  sw          $a1, -0x49B4($gp)
    ctx->pc = 0x208c20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948428), GPR_U32(ctx, 5));
    // 0x208c24: 0xaf86b650  sw          $a2, -0x49B0($gp)
    ctx->pc = 0x208c24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948432), GPR_U32(ctx, 6));
    // 0x208c28: 0xaf829bec  sw          $v0, -0x6414($gp)
    ctx->pc = 0x208c28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
    // 0x208c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x208C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C2Cu;
        // 0x208c30: 0xaf809be8  sw          $zero, -0x6418($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208C34u;
}
