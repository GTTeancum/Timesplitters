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

// Function: zoomboxReset
// Address: 0x22ecf0 - 0x22ed18
void zoomboxReset_0x22ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomboxReset_0x22ecf0");
#endif

    switch (ctx->pc) {
        case 0x22ed04u: goto label_22ed04;
        default: break;
    }

    ctx->pc = 0x22ecf0u;

    // 0x22ecf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ecf4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x22ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x22ecf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ecfc: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22ECFCu;
    SET_GPR_U32(ctx, 31, 0x22ED04u);
    ctx->pc = 0x22ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECFCu;
    // 0x22ed00: 0x24842e60  addiu       $a0, $a0, 0x2E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22ECFCu, 0x22ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED04u;
label_22ed04:
    // 0x22ed04: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22ed08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ed08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ed0c: 0xaf83b728  sw          $v1, -0x48D8($gp)
    ctx->pc = 0x22ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948648), GPR_U32(ctx, 3));
    // 0x22ed10: 0x3e00008  jr          $ra
    ctx->pc = 0x22ED10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED10u;
        // 0x22ed14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ED10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ED18u;
}
