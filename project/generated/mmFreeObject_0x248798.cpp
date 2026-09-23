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

// Function: mmFreeObject
// Address: 0x248798 - 0x2487d0
void mmFreeObject_0x248798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmFreeObject_0x248798");
#endif

    switch (ctx->pc) {
        case 0x2487b0u: goto label_2487b0;
        case 0x2487b8u: goto label_2487b8;
        default: break;
    }

    ctx->pc = 0x248798u;

    // 0x248798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24879c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2487a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2487a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2487a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2487A4u;
    {
        const bool branch_taken_0x2487a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487A4u;
        // 0x2487a8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487a4) {
            ctx->pc = 0x2487C0u;
            goto label_2487c0;
        }
    }
    ctx->pc = 0x2487ACu;
    // 0x2487ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2487acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2487b0:
    // 0x2487b0: 0xc0921a8  jal         func_2486A0
    ctx->pc = 0x2487B0u;
    SET_GPR_U32(ctx, 31, 0x2487B8u);
    ctx->pc = 0x2487B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487B0u;
    // 0x2487b4: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486A0u, 0x2487B0u, 0x2487B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487B8u;
label_2487b8:
    // 0x2487b8: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2487B8u;
    {
        const bool branch_taken_0x2487b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2487BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487B8u;
        // 0x2487bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487b8) {
            ctx->pc = 0x2487B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2487b0;
        }
    }
    ctx->pc = 0x2487C0u;
label_2487c0:
    // 0x2487c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2487c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2487c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2487c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2487c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2487C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2487CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487C8u;
        // 0x2487cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2487C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2487D0u;
}
