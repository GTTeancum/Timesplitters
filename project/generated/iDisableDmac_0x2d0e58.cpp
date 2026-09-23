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

// Function: iDisableDmac
// Address: 0x2d0e58 - 0x2d0e78
void iDisableDmac_0x2d0e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iDisableDmac_0x2d0e58");
#endif

    switch (ctx->pc) {
        case 0x2d0e68u: goto label_2d0e68;
        default: break;
    }

    ctx->pc = 0x2d0e58u;

    // 0x2d0e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0e60: 0xc0b3fbc  jal         func_2CFEF0
    ctx->pc = 0x2D0E60u;
    SET_GPR_U32(ctx, 31, 0x2D0E68u);
    ctx->pc = 0x2CFEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFEF0u, 0x2D0E60u, 0x2D0E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E68u;
label_2d0e68:
    // 0x2d0e68: 0xf  sync
    ctx->pc = 0x2d0e68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E70u;
        // 0x2d0e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0E78u;
}
