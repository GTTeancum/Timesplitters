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

// Function: iEnableIntc
// Address: 0x2d0df8 - 0x2d0e18
void iEnableIntc_0x2d0df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iEnableIntc_0x2d0df8");
#endif

    switch (ctx->pc) {
        case 0x2d0e08u: goto label_2d0e08;
        default: break;
    }

    ctx->pc = 0x2d0df8u;

    // 0x2d0df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0dfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0e00: 0xc0b3fb0  jal         func_2CFEC0
    ctx->pc = 0x2D0E00u;
    SET_GPR_U32(ctx, 31, 0x2D0E08u);
    ctx->pc = 0x2CFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFEC0u, 0x2D0E00u, 0x2D0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E08u;
label_2d0e08:
    // 0x2d0e08: 0xf  sync
    ctx->pc = 0x2d0e08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0e10: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E10u;
        // 0x2d0e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0E18u;
}
