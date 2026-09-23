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

// Function: fiprintf
// Address: 0x2e4980 - 0x2e49b4
void fiprintf_0x2e4980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fiprintf_0x2e4980");
#endif

    switch (ctx->pc) {
        case 0x2e49a8u: goto label_2e49a8;
        default: break;
    }

    ctx->pc = 0x2e4980u;

    // 0x2e4980: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e4980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e4984: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x2e4984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x2e4988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e498c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e498cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e4990: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x2e4990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x2e4994: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x2e4994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x2e4998: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x2e4998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x2e499c: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x2e499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x2e49a0: 0xc0b9a24  jal         func_2E6890
    ctx->pc = 0x2E49A0u;
    SET_GPR_U32(ctx, 31, 0x2E49A8u);
    ctx->pc = 0x2E49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E49A0u;
    // 0x2e49a4: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6890u, 0x2E49A0u, 0x2E49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E49A8u;
label_2e49a8:
    // 0x2e49a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e49a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e49ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E49ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49ACu;
        // 0x2e49b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E49ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E49B4u;
}
