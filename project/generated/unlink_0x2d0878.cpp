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

// Function: unlink
// Address: 0x2d0878 - 0x2d08a0
void unlink_0x2d0878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unlink_0x2d0878");
#endif

    switch (ctx->pc) {
        case 0x2d0888u: goto label_2d0888;
        default: break;
    }

    ctx->pc = 0x2d0878u;

    // 0x2d0878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d087c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0880: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D0880u;
    SET_GPR_U32(ctx, 31, 0x2D0888u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D0880u, 0x2D0888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0888u;
label_2d0888:
    // 0x2d0888: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d0888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d088c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d088cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0890: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d0890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d0894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d0894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0898: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0898u;
        // 0x2d089c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D08A0u;
}
