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

// Function: raise
// Address: 0x2ed3a8 - 0x2ed3d0
void raise_0x2ed3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("raise_0x2ed3a8");
#endif

    switch (ctx->pc) {
        case 0x2ed3c4u: goto label_2ed3c4;
        default: break;
    }

    ctx->pc = 0x2ed3a8u;

    // 0x2ed3a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ed3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed3ac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ed3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ed3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed3b4: 0x8c44330c  lw          $a0, 0x330C($v0)
    ctx->pc = 0x2ed3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2ed3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed3bc: 0xc0bb480  jal         func_2ED200
    ctx->pc = 0x2ED3BCu;
    SET_GPR_U32(ctx, 31, 0x2ED3C4u);
    ctx->pc = 0x2ED200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED200u, 0x2ED3BCu, 0x2ED3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3C4u;
label_2ed3c4:
    // 0x2ed3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3C8u;
        // 0x2ed3cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED3D0u;
}
