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

// Function: chrCountLosses
// Address: 0x289028 - 0x289078
void chrCountLosses_0x289028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrCountLosses_0x289028");
#endif

    switch (ctx->pc) {
        case 0x289048u: goto label_289048;
        default: break;
    }

    ctx->pc = 0x289028u;

    // 0x289028: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x289028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x28902c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28902cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289030: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x289030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x289034: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x289034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289038: 0x1940000d  blez        $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x289038u;
    {
        const bool branch_taken_0x289038 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x28903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289038u;
        // 0x28903c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289038) {
            ctx->pc = 0x289070u;
            goto label_289070;
        }
    }
    ctx->pc = 0x289040u;
    // 0x289040: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x289040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289044: 0x8f88b238  lw          $t0, -0x4DC8($gp)
    ctx->pc = 0x289044u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_289048:
    // 0x289048: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x289048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x28904c: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x28904cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x289050: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x289050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x289054: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x289054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x289058: 0xca282a  slt         $a1, $a2, $t2
    ctx->pc = 0x289058u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x28905c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x28905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x289060: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x289060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289064: 0x84620020  lh          $v0, 0x20($v1)
    ctx->pc = 0x289064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x289068: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x289068u;
    {
        const bool branch_taken_0x289068 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289068u;
        // 0x28906c: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289068) {
            ctx->pc = 0x289048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289048;
        }
    }
    ctx->pc = 0x289070u;
label_289070:
    // 0x289070: 0x3e00008  jr          $ra
    ctx->pc = 0x289070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289070u;
        // 0x289074: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289078u;
}
