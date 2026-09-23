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

// Function: _init_signal
// Address: 0x2ed400 - 0x2ed424
void _init_signal_0x2ed400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_init_signal_0x2ed400");
#endif

    switch (ctx->pc) {
        case 0x2ed418u: goto label_2ed418;
        default: break;
    }

    ctx->pc = 0x2ed400u;

    // 0x2ed400: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ed400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ed404: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed408: 0x8c44330c  lw          $a0, 0x330C($v0)
    ctx->pc = 0x2ed408u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2ed40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed410: 0xc0bb440  jal         func_2ED100
    ctx->pc = 0x2ED410u;
    SET_GPR_U32(ctx, 31, 0x2ED418u);
    ctx->pc = 0x2ED100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED100u, 0x2ED410u, 0x2ED418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED418u;
label_2ed418:
    // 0x2ed418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed41c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED41Cu;
        // 0x2ed420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED424u;
}
