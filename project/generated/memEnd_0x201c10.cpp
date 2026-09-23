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

// Function: memEnd
// Address: 0x201c10 - 0x201c34
void memEnd_0x201c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memEnd_0x201c10");
#endif

    ctx->pc = 0x201c10u;

    // 0x201c10: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x201c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x201c14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201C14u;
    {
        const bool branch_taken_0x201c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201c14) {
            ctx->pc = 0x201C2Cu;
            goto label_201c2c;
        }
    }
    ctx->pc = 0x201C1Cu;
    // 0x201c1c: 0xaf809a68  sw          $zero, -0x6598($gp)
    ctx->pc = 0x201c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941288), GPR_U32(ctx, 0));
    // 0x201c20: 0xaf809a6c  sw          $zero, -0x6594($gp)
    ctx->pc = 0x201c20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941292), GPR_U32(ctx, 0));
    // 0x201c24: 0xaf809a70  sw          $zero, -0x6590($gp)
    ctx->pc = 0x201c24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 0));
    // 0x201c28: 0xaf809a74  sw          $zero, -0x658C($gp)
    ctx->pc = 0x201c28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 0));
label_201c2c:
    // 0x201c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x201C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C34u;
}
