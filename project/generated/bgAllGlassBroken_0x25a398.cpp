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

// Function: bgAllGlassBroken
// Address: 0x25a398 - 0x25a3b8
void bgAllGlassBroken_0x25a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgAllGlassBroken_0x25a398");
#endif

    switch (ctx->pc) {
        case 0x25a3a8u: goto label_25a3a8;
        default: break;
    }

    ctx->pc = 0x25a398u;

    // 0x25a398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a3a0: 0xc0968be  jal         func_25A2F8
    ctx->pc = 0x25A3A0u;
    SET_GPR_U32(ctx, 31, 0x25A3A8u);
    ctx->pc = 0x25A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2F8u, 0x25A3A0u, 0x25A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A3A8u;
label_25a3a8:
    // 0x25a3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a3ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x25a3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x25a3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3B0u;
        // 0x25a3b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A3B8u;
}
