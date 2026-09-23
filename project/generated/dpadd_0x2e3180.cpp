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

// Function: dpadd
// Address: 0x2e3180 - 0x2e31d8
void dpadd_0x2e3180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpadd_0x2e3180");
#endif

    switch (ctx->pc) {
        case 0x2e31a0u: goto label_2e31a0;
        case 0x2e31b0u: goto label_2e31b0;
        case 0x2e31c0u: goto label_2e31c0;
        case 0x2e31c8u: goto label_2e31c8;
        default: break;
    }

    ctx->pc = 0x2e3180u;

    // 0x2e3180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e3180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e3184: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2e3184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2e3188: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2e3188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2e318c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3190: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2e3190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2e3194: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e3194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e3198: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3198u;
    SET_GPR_U32(ctx, 31, 0x2E31A0u);
    ctx->pc = 0x2E319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3198u;
    // 0x2e319c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3198u, 0x2E31A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E31A0u;
label_2e31a0:
    // 0x2e31a0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2e31a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e31a4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2e31a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e31a8: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E31A8u;
    SET_GPR_U32(ctx, 31, 0x2E31B0u);
    ctx->pc = 0x2E31ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E31A8u;
    // 0x2e31ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E31A8u, 0x2E31B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E31B0u;
label_2e31b0:
    // 0x2e31b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e31b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e31b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2e31b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e31b8: 0xc0b8bd0  jal         func_2E2F40
    ctx->pc = 0x2E31B8u;
    SET_GPR_U32(ctx, 31, 0x2E31C0u);
    ctx->pc = 0x2E31BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E31B8u;
    // 0x2e31bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2F40u, 0x2E31B8u, 0x2E31C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E31C0u;
label_2e31c0:
    // 0x2e31c0: 0xc0b8b5c  jal         func_2E2D70
    ctx->pc = 0x2E31C0u;
    SET_GPR_U32(ctx, 31, 0x2E31C8u);
    ctx->pc = 0x2E31C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E31C0u;
    // 0x2e31c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D70u, 0x2E31C0u, 0x2E31C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E31C8u;
label_2e31c8:
    // 0x2e31c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e31c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e31cc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2e31ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e31d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E31D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31D0u;
        // 0x2e31d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E31D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E31D8u;
}
