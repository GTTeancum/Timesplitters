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

// Function: atof
// Address: 0x2e9bf0 - 0x2e9c0c
void atof_0x2e9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atof_0x2e9bf0");
#endif

    switch (ctx->pc) {
        case 0x2e9c00u: goto label_2e9c00;
        default: break;
    }

    ctx->pc = 0x2e9bf0u;

    // 0x2e9bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e9bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9bf8: 0xc0bb8f4  jal         func_2EE3D0
    ctx->pc = 0x2E9BF8u;
    SET_GPR_U32(ctx, 31, 0x2E9C00u);
    ctx->pc = 0x2E9BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BF8u;
    // 0x2e9bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE3D0u, 0x2E9BF8u, 0x2E9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C00u;
label_2e9c00:
    // 0x2e9c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9c04: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C04u;
        // 0x2e9c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9C0Cu;
}
