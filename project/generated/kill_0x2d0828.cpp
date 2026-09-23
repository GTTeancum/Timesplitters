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

// Function: kill
// Address: 0x2d0828 - 0x2d0850
void kill_0x2d0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kill_0x2d0828");
#endif

    switch (ctx->pc) {
        case 0x2d0840u: goto label_2d0840;
        default: break;
    }

    ctx->pc = 0x2d0828u;

    // 0x2d0828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d082c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0830: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0830u;
    {
        const bool branch_taken_0x2d0830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0830u;
        // 0x2d0834: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0830) {
            ctx->pc = 0x2D0840u;
            goto label_2d0840;
        }
    }
    ctx->pc = 0x2D0838u;
    // 0x2d0838: 0xc0b3f50  jal         func_2CFD40
    ctx->pc = 0x2D0838u;
    SET_GPR_U32(ctx, 31, 0x2D0840u);
    ctx->pc = 0x2D083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0838u;
    // 0x2d083c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD40u, 0x2D0838u, 0x2D0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0840u;
label_2d0840:
    // 0x2d0840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0848: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0848u;
        // 0x2d084c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0850u;
}
