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

// Function: propEnd
// Address: 0x267168 - 0x26719c
void propEnd_0x267168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propEnd_0x267168");
#endif

    ctx->pc = 0x267168u;

    // 0x267168: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x267168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x26716c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26716Cu;
    {
        const bool branch_taken_0x26716c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26716c) {
            ctx->pc = 0x267194u;
            goto label_267194;
        }
    }
    ctx->pc = 0x267174u;
    // 0x267174: 0xaf80b07c  sw          $zero, -0x4F84($gp)
    ctx->pc = 0x267174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946940), GPR_U32(ctx, 0));
    // 0x267178: 0xaf80b080  sw          $zero, -0x4F80($gp)
    ctx->pc = 0x267178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946944), GPR_U32(ctx, 0));
    // 0x26717c: 0xaf80b088  sw          $zero, -0x4F78($gp)
    ctx->pc = 0x26717cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946952), GPR_U32(ctx, 0));
    // 0x267180: 0xaf80b090  sw          $zero, -0x4F70($gp)
    ctx->pc = 0x267180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946960), GPR_U32(ctx, 0));
    // 0x267184: 0xaf80b094  sw          $zero, -0x4F6C($gp)
    ctx->pc = 0x267184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946964), GPR_U32(ctx, 0));
    // 0x267188: 0xaf80b09c  sw          $zero, -0x4F64($gp)
    ctx->pc = 0x267188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946972), GPR_U32(ctx, 0));
    // 0x26718c: 0xaf80b0a8  sw          $zero, -0x4F58($gp)
    ctx->pc = 0x26718cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946984), GPR_U32(ctx, 0));
    // 0x267190: 0xaf80b0a0  sw          $zero, -0x4F60($gp)
    ctx->pc = 0x267190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946976), GPR_U32(ctx, 0));
label_267194:
    // 0x267194: 0x3e00008  jr          $ra
    ctx->pc = 0x267194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26719Cu;
}
