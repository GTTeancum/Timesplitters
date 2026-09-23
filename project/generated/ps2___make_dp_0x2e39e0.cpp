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

// Function: __make_dp
// Address: 0x2e39e0 - 0x2e3a0c
void ps2___make_dp_0x2e39e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_dp_0x2e39e0");
#endif

    switch (ctx->pc) {
        case 0x2e3a00u: goto label_2e3a00;
        default: break;
    }

    ctx->pc = 0x2e39e0u;

    // 0x2e39e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e39e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e39e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e39e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e39e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e39ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e39ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39f0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2e39f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2e39f4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2e39f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2e39f8: 0xc0b8b5c  jal         func_2E2D70
    ctx->pc = 0x2E39F8u;
    SET_GPR_U32(ctx, 31, 0x2E3A00u);
    ctx->pc = 0x2E39FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39F8u;
    // 0x2e39fc: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D70u, 0x2E39F8u, 0x2E3A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A00u;
label_2e3a00:
    // 0x2e3a00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e3a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3a04: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A04u;
        // 0x2e3a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3A0Cu;
}
