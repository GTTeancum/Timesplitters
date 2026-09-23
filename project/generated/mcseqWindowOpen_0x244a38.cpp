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

// Function: mcseqWindowOpen
// Address: 0x244a38 - 0x244a5c
void mcseqWindowOpen_0x244a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqWindowOpen_0x244a38");
#endif

    switch (ctx->pc) {
        case 0x244a48u: goto label_244a48;
        default: break;
    }

    ctx->pc = 0x244a38u;

    // 0x244a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244a40: 0xc090fca  jal         func_243F28
    ctx->pc = 0x244A40u;
    SET_GPR_U32(ctx, 31, 0x244A48u);
    ctx->pc = 0x243F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F28u, 0x244A40u, 0x244A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A48u;
label_244a48:
    // 0x244a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244a50: 0xa382b7c8  sb          $v0, -0x4838($gp)
    ctx->pc = 0x244a50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948808), (uint8_t)GPR_U32(ctx, 2));
    // 0x244a54: 0x3e00008  jr          $ra
    ctx->pc = 0x244A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A54u;
        // 0x244a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244A5Cu;
}
