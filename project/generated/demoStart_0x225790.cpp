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

// Function: demoStart
// Address: 0x225790 - 0x2257d4
void demoStart_0x225790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("demoStart_0x225790");
#endif

    switch (ctx->pc) {
        case 0x2257b0u: goto label_2257b0;
        case 0x2257c4u: goto label_2257c4;
        default: break;
    }

    ctx->pc = 0x225790u;

    // 0x225790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x225790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x225794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225798: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x225798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x22579c: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x22579cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2257a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2257a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2257a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2257a8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2257A8u;
    SET_GPR_U32(ctx, 31, 0x2257B0u);
    ctx->pc = 0x2257ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257A8u;
    // 0x2257ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2257A8u, 0x2257B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257B0u;
label_2257b0:
    // 0x2257b0: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x2257b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2257b4: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x2257b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x2257b8: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x2257b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x2257bc: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x2257BCu;
    SET_GPR_U32(ctx, 31, 0x2257C4u);
    ctx->pc = 0x2257C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257BCu;
    // 0x2257c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x2257BCu, 0x2257C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257C4u;
label_2257c4:
    // 0x2257c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2257c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2257c8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2257c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2257cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2257CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2257D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257CCu;
        // 0x2257d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2257CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2257D4u;
}
