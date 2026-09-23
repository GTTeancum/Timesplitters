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

// Function: numAllowedTeams
// Address: 0x2353b0 - 0x2353e8
void numAllowedTeams_0x2353b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("numAllowedTeams_0x2353b0");
#endif

    switch (ctx->pc) {
        case 0x2353c0u: goto label_2353c0;
        default: break;
    }

    ctx->pc = 0x2353b0u;

    // 0x2353b0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2353b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2353b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2353b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353b8: 0x24471234  addiu       $a3, $v0, 0x1234
    ctx->pc = 0x2353b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4660));
    // 0x2353bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2353bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2353c0:
    // 0x2353c0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2353c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2353c4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x2353c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2353c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2353c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2353cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2353ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2353d0: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2353d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2353d4: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x2353d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x2353d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2353D8u;
    {
        const bool branch_taken_0x2353d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2353d8) {
            ctx->pc = 0x2353C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2353c0;
        }
    }
    ctx->pc = 0x2353E0u;
    // 0x2353e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2353E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2353E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353E0u;
        // 0x2353e4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2353E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2353E8u;
}
