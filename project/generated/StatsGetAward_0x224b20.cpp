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

// Function: StatsGetAward
// Address: 0x224b20 - 0x224b60
void StatsGetAward_0x224b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsGetAward_0x224b20");
#endif

    ctx->pc = 0x224b20u;

    // 0x224b20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x224b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b24: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x224b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x224b28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x224B28u;
    {
        const bool branch_taken_0x224b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B28u;
        // 0x224b2c: 0x28a20003  slti        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b28) {
            ctx->pc = 0x224B58u;
            goto label_224b58;
        }
    }
    ctx->pc = 0x224B30u;
    // 0x224b30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224B30u;
    {
        const bool branch_taken_0x224b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B30u;
        // 0x224b34: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b30) {
            ctx->pc = 0x224B58u;
            goto label_224b58;
        }
    }
    ctx->pc = 0x224B38u;
    // 0x224b38: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x224b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x224b3c: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x224b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x224b40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x224b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x224b44: 0x24423178  addiu       $v0, $v0, 0x3178
    ctx->pc = 0x224b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12664));
    // 0x224b48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x224b4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224b50: 0x3e00008  jr          $ra
    ctx->pc = 0x224B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B50u;
        // 0x224b54: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224B58u;
label_224b58:
    // 0x224b58: 0x3e00008  jr          $ra
    ctx->pc = 0x224B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B58u;
        // 0x224b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224B60u;
}
