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

// Function: fpcmp
// Address: 0x2e4370 - 0x2e43bc
void fpcmp_0x2e4370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpcmp_0x2e4370");
#endif

    switch (ctx->pc) {
        case 0x2e4390u: goto label_2e4390;
        case 0x2e43a0u: goto label_2e43a0;
        case 0x2e43acu: goto label_2e43ac;
        default: break;
    }

    ctx->pc = 0x2e4370u;

    // 0x2e4370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e4370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e4374: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e4374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e4378: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e4378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e437c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e4380: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e4380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4384: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x2e4384u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e4388: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E4388u;
    SET_GPR_U32(ctx, 31, 0x2E4390u);
    ctx->pc = 0x2E438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4388u;
    // 0x2e438c: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E4388u, 0x2E4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4390u;
label_2e4390:
    // 0x2e4390: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e4390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e4394: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x2e4394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2e4398: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E4398u;
    SET_GPR_U32(ctx, 31, 0x2E43A0u);
    ctx->pc = 0x2E439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4398u;
    // 0x2e439c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E4398u, 0x2E43A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43A0u;
label_2e43a0:
    // 0x2e43a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e43a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43a4: 0xc0b9096  jal         func_2E4258
    ctx->pc = 0x2E43A4u;
    SET_GPR_U32(ctx, 31, 0x2E43ACu);
    ctx->pc = 0x2E43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E43A4u;
    // 0x2e43a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4258u, 0x2E43A4u, 0x2E43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43ACu;
label_2e43ac:
    // 0x2e43ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e43acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e43b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e43b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e43b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E43B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43B4u;
        // 0x2e43b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E43B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E43BCu;
}
