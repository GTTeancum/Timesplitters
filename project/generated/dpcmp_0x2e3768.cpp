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

// Function: dpcmp
// Address: 0x2e3768 - 0x2e37b4
void dpcmp_0x2e3768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpcmp_0x2e3768");
#endif

    switch (ctx->pc) {
        case 0x2e3788u: goto label_2e3788;
        case 0x2e3798u: goto label_2e3798;
        case 0x2e37a4u: goto label_2e37a4;
        default: break;
    }

    ctx->pc = 0x2e3768u;

    // 0x2e3768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e3768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e376c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x2e376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x2e3770: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x2e3770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2e3774: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e3774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3778: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2e3778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2e377c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e3780: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3780u;
    SET_GPR_U32(ctx, 31, 0x2E3788u);
    ctx->pc = 0x2E3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3780u;
    // 0x2e3784: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3780u, 0x2E3788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3788u;
label_2e3788:
    // 0x2e3788: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2e3788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e378c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2e378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2e3790: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3790u;
    SET_GPR_U32(ctx, 31, 0x2E3798u);
    ctx->pc = 0x2E3794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3790u;
    // 0x2e3794: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3790u, 0x2E3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3798u;
label_2e3798:
    // 0x2e3798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e379c: 0xc0b8d94  jal         func_2E3650
    ctx->pc = 0x2E379Cu;
    SET_GPR_U32(ctx, 31, 0x2E37A4u);
    ctx->pc = 0x2E37A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E379Cu;
    // 0x2e37a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3650u, 0x2E379Cu, 0x2E37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37A4u;
label_2e37a4:
    // 0x2e37a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e37a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e37a8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2e37a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e37ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E37ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37ACu;
        // 0x2e37b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E37ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E37B4u;
}
