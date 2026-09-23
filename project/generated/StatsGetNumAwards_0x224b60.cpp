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

// Function: StatsGetNumAwards
// Address: 0x224b60 - 0x224bac
void StatsGetNumAwards_0x224b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsGetNumAwards_0x224b60");
#endif

    switch (ctx->pc) {
        case 0x224b88u: goto label_224b88;
        default: break;
    }

    ctx->pc = 0x224b60u;

    // 0x224b60: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x224b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x224b64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x224B64u;
    {
        const bool branch_taken_0x224b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B64u;
        // 0x224b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b64) {
            ctx->pc = 0x224BA4u;
            goto label_224ba4;
        }
    }
    ctx->pc = 0x224B6Cu;
    // 0x224b6c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x224b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x224b70: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x224b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x224b74: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x224b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x224b78: 0x24423178  addiu       $v0, $v0, 0x3178
    ctx->pc = 0x224b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12664));
    // 0x224b7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x224b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224b80: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x224b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224b84: 0x0  nop
    ctx->pc = 0x224b84u;
    // NOP
label_224b88:
    // 0x224b88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x224b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224b8c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x224b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x224b90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x224b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x224b94: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x224b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x224b98: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x224b98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x224b9c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x224B9Cu;
    {
        const bool branch_taken_0x224b9c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x224b9c) {
            ctx->pc = 0x224B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224b88;
        }
    }
    ctx->pc = 0x224BA4u;
label_224ba4:
    // 0x224ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x224BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BA4u;
        // 0x224ba8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224BACu;
}
