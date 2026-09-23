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

// Function: __negsf2
// Address: 0x2e45a0 - 0x2e45d8
void ps2___negsf2_0x2e45a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negsf2_0x2e45a0");
#endif

    switch (ctx->pc) {
        case 0x2e45b8u: goto label_2e45b8;
        case 0x2e45ccu: goto label_2e45cc;
        default: break;
    }

    ctx->pc = 0x2e45a0u;

    // 0x2e45a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e45a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e45a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e45a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e45a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e45ac: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2e45acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e45b0: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E45B0u;
    SET_GPR_U32(ctx, 31, 0x2E45B8u);
    ctx->pc = 0x2E45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45B0u;
    // 0x2e45b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E45B0u, 0x2E45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45B8u;
label_2e45b8:
    // 0x2e45b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e45bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e45bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e45c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e45c4: 0xc0b8e9a  jal         func_2E3A68
    ctx->pc = 0x2E45C4u;
    SET_GPR_U32(ctx, 31, 0x2E45CCu);
    ctx->pc = 0x2E45C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45C4u;
    // 0x2e45c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A68u, 0x2E45C4u, 0x2E45CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45CCu;
label_2e45cc:
    // 0x2e45cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e45ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e45d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E45D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45D0u;
        // 0x2e45d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E45D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E45D8u;
}
