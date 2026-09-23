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

// Function: iEnableDmac
// Address: 0x2d0e38 - 0x2d0e58
void iEnableDmac_0x2d0e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iEnableDmac_0x2d0e38");
#endif

    switch (ctx->pc) {
        case 0x2d0e48u: goto label_2d0e48;
        default: break;
    }

    ctx->pc = 0x2d0e38u;

    // 0x2d0e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0e40: 0xc0b3fb8  jal         func_2CFEE0
    ctx->pc = 0x2D0E40u;
    SET_GPR_U32(ctx, 31, 0x2D0E48u);
    ctx->pc = 0x2CFEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFEE0u, 0x2D0E40u, 0x2D0E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E48u;
label_2d0e48:
    // 0x2d0e48: 0xf  sync
    ctx->pc = 0x2d0e48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0e50: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E50u;
        // 0x2d0e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0E58u;
}
