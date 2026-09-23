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

// Function: __negdf2
// Address: 0x2e39a8 - 0x2e39e0
void ps2___negdf2_0x2e39a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negdf2_0x2e39a8");
#endif

    switch (ctx->pc) {
        case 0x2e39c0u: goto label_2e39c0;
        case 0x2e39d4u: goto label_2e39d4;
        default: break;
    }

    ctx->pc = 0x2e39a8u;

    // 0x2e39a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e39a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e39ac: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2e39acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2e39b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e39b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e39b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e39b8: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E39B8u;
    SET_GPR_U32(ctx, 31, 0x2E39C0u);
    ctx->pc = 0x2E39BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39B8u;
    // 0x2e39bc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E39B8u, 0x2E39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39C0u;
label_2e39c0:
    // 0x2e39c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e39c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e39c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e39c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e39cc: 0xc0b8b5c  jal         func_2E2D70
    ctx->pc = 0x2E39CCu;
    SET_GPR_U32(ctx, 31, 0x2E39D4u);
    ctx->pc = 0x2E39D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39CCu;
    // 0x2e39d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D70u, 0x2E39CCu, 0x2E39D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39D4u;
label_2e39d4:
    // 0x2e39d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e39d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e39d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E39D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39D8u;
        // 0x2e39dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E39D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E39E0u;
}
