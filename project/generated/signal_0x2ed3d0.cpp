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

// Function: signal
// Address: 0x2ed3d0 - 0x2ed3fc
void signal_0x2ed3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signal_0x2ed3d0");
#endif

    switch (ctx->pc) {
        case 0x2ed3f0u: goto label_2ed3f0;
        default: break;
    }

    ctx->pc = 0x2ed3d0u;

    // 0x2ed3d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed3d4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ed3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ed3d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed3dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ed3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed3e0: 0x8c64330c  lw          $a0, 0x330C($v1)
    ctx->pc = 0x2ed3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2ed3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed3e8: 0xc0bb45c  jal         func_2ED170
    ctx->pc = 0x2ED3E8u;
    SET_GPR_U32(ctx, 31, 0x2ED3F0u);
    ctx->pc = 0x2ED3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3E8u;
    // 0x2ed3ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED170u, 0x2ED3E8u, 0x2ED3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3F0u;
label_2ed3f0:
    // 0x2ed3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3F4u;
        // 0x2ed3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED3FCu;
}
