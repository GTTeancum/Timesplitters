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

// Function: pickupposRestart
// Address: 0x272a88 - 0x272ab4
void pickupposRestart_0x272a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pickupposRestart_0x272a88");
#endif

    switch (ctx->pc) {
        case 0x272a9cu: goto label_272a9c;
        default: break;
    }

    ctx->pc = 0x272a88u;

    // 0x272a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x272a8c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x272a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x272a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x272a94: 0xc08718c  jal         func_21C630
    ctx->pc = 0x272A94u;
    SET_GPR_U32(ctx, 31, 0x272A9Cu);
    ctx->pc = 0x272A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A94u;
    // 0x272a98: 0x24848028  addiu       $a0, $a0, -0x7FD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x272A94u, 0x272A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A9Cu;
label_272a9c:
    // 0x272a9c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x272a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x272aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272aa4: 0xaf80a358  sw          $zero, -0x5CA8($gp)
    ctx->pc = 0x272aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943576), GPR_U32(ctx, 0));
    // 0x272aa8: 0xaf83a35c  sw          $v1, -0x5CA4($gp)
    ctx->pc = 0x272aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943580), GPR_U32(ctx, 3));
    // 0x272aac: 0x3e00008  jr          $ra
    ctx->pc = 0x272AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AACu;
        // 0x272ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272AB4u;
}
