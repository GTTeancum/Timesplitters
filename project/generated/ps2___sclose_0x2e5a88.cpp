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

// Function: __sclose
// Address: 0x2e5a88 - 0x2e5aa8
void ps2___sclose_0x2e5a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sclose_0x2e5a88");
#endif

    switch (ctx->pc) {
        case 0x2e5a9cu: goto label_2e5a9c;
        default: break;
    }

    ctx->pc = 0x2e5a88u;

    // 0x2e5a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e5a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5a90: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x2e5a90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2e5a94: 0xc0ba704  jal         func_2E9C10
    ctx->pc = 0x2E5A94u;
    SET_GPR_U32(ctx, 31, 0x2E5A9Cu);
    ctx->pc = 0x2E5A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A94u;
    // 0x2e5a98: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9C10u, 0x2E5A94u, 0x2E5A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A9Cu;
label_2e5a9c:
    // 0x2e5a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AA0u;
        // 0x2e5aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5AA8u;
}
