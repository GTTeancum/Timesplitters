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

// Function: specialfxEnd
// Address: 0x2a9850 - 0x2a9884
void specialfxEnd_0x2a9850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxEnd_0x2a9850");
#endif

    switch (ctx->pc) {
        case 0x2a9860u: goto label_2a9860;
        case 0x2a9868u: goto label_2a9868;
        default: break;
    }

    ctx->pc = 0x2a9850u;

    // 0x2a9850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a9858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a985c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a985cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9860:
    // 0x2a9860: 0xc0aabb6  jal         func_2AAED8
    ctx->pc = 0x2A9860u;
    SET_GPR_U32(ctx, 31, 0x2A9868u);
    ctx->pc = 0x2A9864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9860u;
    // 0x2a9864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAED8u, 0x2A9860u, 0x2A9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9868u;
label_2a9868:
    // 0x2a9868: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a986c: 0x2a020038  slti        $v0, $s0, 0x38
    ctx->pc = 0x2a986cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x2a9870: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A9870u;
    {
        const bool branch_taken_0x2a9870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9870u;
        // 0x2a9874: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9870) {
            ctx->pc = 0x2A9860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9860;
        }
    }
    ctx->pc = 0x2A9878u;
    // 0x2a9878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a9878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a987c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A987Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A987Cu;
        // 0x2a9880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A987Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9884u;
}
