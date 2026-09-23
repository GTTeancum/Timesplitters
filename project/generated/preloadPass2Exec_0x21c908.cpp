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

// Function: preloadPass2Exec
// Address: 0x21c908 - 0x21c948
void preloadPass2Exec_0x21c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadPass2Exec_0x21c908");
#endif

    switch (ctx->pc) {
        case 0x21c920u: goto label_21c920;
        case 0x21c92cu: goto label_21c92c;
        default: break;
    }

    ctx->pc = 0x21c908u;

    // 0x21c908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c910: 0x8f90b6f4  lw          $s0, -0x490C($gp)
    ctx->pc = 0x21c910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948596)));
    // 0x21c914: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C914u;
    {
        const bool branch_taken_0x21c914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C914u;
        // 0x21c918: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c914) {
            ctx->pc = 0x21C938u;
            goto label_21c938;
        }
    }
    ctx->pc = 0x21C91Cu;
    // 0x21c91c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x21c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c920:
    // 0x21c920: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21c920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21c924: 0xc0ade40  jal         func_2B7900
    ctx->pc = 0x21C924u;
    SET_GPR_U32(ctx, 31, 0x21C92Cu);
    ctx->pc = 0x21C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C924u;
    // 0x21c928: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7900u, 0x21C924u, 0x21C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C92Cu;
label_21c92c:
    // 0x21c92c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x21c92cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21c930: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21C930u;
    {
        const bool branch_taken_0x21c930 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c930) {
            ctx->pc = 0x21C934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C930u;
            // 0x21c934: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c920;
        }
    }
    ctx->pc = 0x21C938u;
label_21c938:
    // 0x21c938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c93c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c940: 0x3e00008  jr          $ra
    ctx->pc = 0x21C940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C940u;
        // 0x21c944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C948u;
}
