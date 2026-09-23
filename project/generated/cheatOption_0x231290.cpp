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

// Function: cheatOption
// Address: 0x231290 - 0x2312bc
void cheatOption_0x231290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheatOption_0x231290");
#endif

    ctx->pc = 0x231290u;

    // 0x231290: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x231290u;
    {
        const bool branch_taken_0x231290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231290u;
        // 0x231294: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231290) {
            ctx->pc = 0x2312B4u;
            goto label_2312b4;
        }
    }
    ctx->pc = 0x231298u;
    // 0x231298: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x23129c: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x23129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2312a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2312a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2312a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2312a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2312a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2312a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2312ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2312ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2312B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312ACu;
        // 0x2312b0: 0x8c820218  lw          $v0, 0x218($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2312ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2312B4u;
label_2312b4:
    // 0x2312b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2312B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2312B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312B4u;
        // 0x2312b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2312B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2312BCu;
}
