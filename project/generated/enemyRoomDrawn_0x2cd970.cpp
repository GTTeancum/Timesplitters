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

// Function: enemyRoomDrawn
// Address: 0x2cd970 - 0x2cd9e0
void enemyRoomDrawn_0x2cd970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyRoomDrawn_0x2cd970");
#endif

    switch (ctx->pc) {
        case 0x2cd988u: goto label_2cd988;
        case 0x2cd9a8u: goto label_2cd9a8;
        default: break;
    }

    ctx->pc = 0x2cd970u;

    // 0x2cd970: 0x8f8a9f74  lw          $t2, -0x608C($gp)
    ctx->pc = 0x2cd970u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cd974: 0x19400018  blez        $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CD974u;
    {
        const bool branch_taken_0x2cd974 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2CD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD974u;
        // 0x2cd978: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd974) {
            ctx->pc = 0x2CD9D8u;
            goto label_2cd9d8;
        }
    }
    ctx->pc = 0x2CD97Cu;
    // 0x2cd97c: 0x8f89b230  lw          $t1, -0x4DD0($gp)
    ctx->pc = 0x2cd97cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2cd980: 0x2403071c  addiu       $v1, $zero, 0x71C
    ctx->pc = 0x2cd980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2cd984: 0x0  nop
    ctx->pc = 0x2cd984u;
    // NOP
label_2cd988:
    // 0x2cd988: 0xe33018  mult        $a2, $a3, $v1
    ctx->pc = 0x2cd988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cd98c: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x2cd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2cd990: 0x8c43038c  lw          $v1, 0x38C($v0)
    ctx->pc = 0x2cd990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    // 0x2cd994: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD994u;
    {
        const bool branch_taken_0x2cd994 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD994u;
        // 0x2cd998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd994) {
            ctx->pc = 0x2CD9C8u;
            goto label_2cd9c8;
        }
    }
    ctx->pc = 0x2CD99Cu;
    // 0x2cd99c: 0x25220390  addiu       $v0, $t1, 0x390
    ctx->pc = 0x2cd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 912));
    // 0x2cd9a0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2cd9a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9a4: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2cd9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2cd9a8:
    // 0x2cd9a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cd9ac: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD9ACu;
    {
        const bool branch_taken_0x2cd9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9ACu;
        // 0x2cd9b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9ac) {
            ctx->pc = 0x2CD9BCu;
            goto label_2cd9bc;
        }
    }
    ctx->pc = 0x2CD9B4u;
    // 0x2cd9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B4u;
        // 0x2cd9b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD9BCu;
label_2cd9bc:
    // 0x2cd9bc: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x2cd9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2cd9c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CD9C0u;
    {
        const bool branch_taken_0x2cd9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9C0u;
        // 0x2cd9c4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9c0) {
            ctx->pc = 0x2CD9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd9a8;
        }
    }
    ctx->pc = 0x2CD9C8u;
label_2cd9c8:
    // 0x2cd9c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cd9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2cd9cc: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x2cd9ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2cd9d0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2CD9D0u;
    {
        const bool branch_taken_0x2cd9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9D0u;
        // 0x2cd9d4: 0x2403071c  addiu       $v1, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9d0) {
            ctx->pc = 0x2CD988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd988;
        }
    }
    ctx->pc = 0x2CD9D8u;
label_2cd9d8:
    // 0x2cd9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9D8u;
        // 0x2cd9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD9E0u;
}
