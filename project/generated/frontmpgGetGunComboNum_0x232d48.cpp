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

// Function: frontmpgGetGunComboNum
// Address: 0x232d48 - 0x232d8c
void frontmpgGetGunComboNum_0x232d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgGetGunComboNum_0x232d48");
#endif

    ctx->pc = 0x232d48u;

    // 0x232d48: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x232d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x232d4c: 0x8c453a30  lw          $a1, 0x3A30($v0)
    ctx->pc = 0x232d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x353A30u));
    // 0x232d50: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x232D50u;
    {
        const bool branch_taken_0x232d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D50u;
        // 0x232d54: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d50) {
            ctx->pc = 0x232D6Cu;
            goto label_232d6c;
        }
    }
    ctx->pc = 0x232D58u;
    // 0x232d58: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x232d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x232d5c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x232d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x232d60: 0x24424198  addiu       $v0, $v0, 0x4198
    ctx->pc = 0x232d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16792));
    // 0x232d64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x232D64u;
    {
        const bool branch_taken_0x232d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D64u;
        // 0x232d68: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d64) {
            ctx->pc = 0x232D74u;
            goto label_232d74;
        }
    }
    ctx->pc = 0x232D6Cu;
label_232d6c:
    // 0x232d6c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x232d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x232d70: 0x24423a90  addiu       $v0, $v0, 0x3A90
    ctx->pc = 0x232d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14992));
label_232d74:
    // 0x232d74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x232d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x232d78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232d7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232d80: 0x22027  nor         $a0, $zero, $v0
    ctx->pc = 0x232d80u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x232d84: 0x3e00008  jr          $ra
    ctx->pc = 0x232D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D84u;
        // 0x232d88: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232D8Cu;
}
