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

// Function: vafmt
// Address: 0x2b4868 - 0x2b48bc
void vafmt_0x2b4868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vafmt_0x2b4868");
#endif

    switch (ctx->pc) {
        case 0x2b48a8u: goto label_2b48a8;
        default: break;
    }

    ctx->pc = 0x2b4868u;

    // 0x2b4868: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b4868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b486c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4870: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2b4870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2b4874: 0x3c1001ff  lui         $s0, 0x1FF
    ctx->pc = 0x2b4874u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)511 << 16));
    // 0x2b4878: 0x2610afe0  addiu       $s0, $s0, -0x5020
    ctx->pc = 0x2b4878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946784));
    // 0x2b487c: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x2b487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x2b4880: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b4880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b488c: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x2b488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x2b4890: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x2b4890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x2b4894: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x2b4894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2b4898: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x2b4898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x2b489c: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x2b489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x2b48a0: 0xc0ba682  jal         func_2E9A08
    ctx->pc = 0x2B48A0u;
    SET_GPR_U32(ctx, 31, 0x2B48A8u);
    ctx->pc = 0x2B48A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B48A0u;
    // 0x2b48a4: 0xffab0098  sd          $t3, 0x98($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9A08u, 0x2B48A0u, 0x2B48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48A8u;
label_2b48a8:
    // 0x2b48a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b48a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b48acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b48b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b48b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b48b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B48B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48B4u;
        // 0x2b48b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B48B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B48BCu;
}
