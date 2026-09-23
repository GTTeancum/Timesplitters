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

// Function: gmEscorteeReachedDest
// Address: 0x21de28 - 0x21de68
void gmEscorteeReachedDest_0x21de28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmEscorteeReachedDest_0x21de28");
#endif

    ctx->pc = 0x21de28u;

    // 0x21de28: 0x8f86b708  lw          $a2, -0x48F8($gp)
    ctx->pc = 0x21de28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948616)));
    // 0x21de2c: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x21DE2Cu;
    {
        const bool branch_taken_0x21de2c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x21DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE2Cu;
        // 0x21de30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de2c) {
            ctx->pc = 0x21DE60u;
            goto label_21de60;
        }
    }
    ctx->pc = 0x21DE34u;
    // 0x21de34: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x21de34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x21de38: 0x8c652010  lw          $a1, 0x2010($v1)
    ctx->pc = 0x21de38u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x382010u));
    // 0x21de3c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DE3Cu;
    {
        const bool branch_taken_0x21de3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE3Cu;
        // 0x21de40: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de3c) {
            ctx->pc = 0x21DE60u;
            goto label_21de60;
        }
    }
    ctx->pc = 0x21DE44u;
    // 0x21de44: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x21de44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21de48: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DE48u;
    {
        const bool branch_taken_0x21de48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21de48) {
            ctx->pc = 0x21DE60u;
            goto label_21de60;
        }
    }
    ctx->pc = 0x21DE50u;
    // 0x21de50: 0x8ca30160  lw          $v1, 0x160($a1)
    ctx->pc = 0x21de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x21de54: 0x8c6202a8  lw          $v0, 0x2A8($v1)
    ctx->pc = 0x21de54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 680)));
    // 0x21de58: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x21de58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x21de5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x21de5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21de60:
    // 0x21de60: 0x3e00008  jr          $ra
    ctx->pc = 0x21DE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DE68u;
}
