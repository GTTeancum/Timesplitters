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

// Function: gameGetRankChr
// Address: 0x21e370 - 0x21e3bc
void gameGetRankChr_0x21e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameGetRankChr_0x21e370");
#endif

    switch (ctx->pc) {
        case 0x21e388u: goto label_21e388;
        default: break;
    }

    ctx->pc = 0x21e370u;

    // 0x21e370: 0x8f869db4  lw          $a2, -0x624C($gp)
    ctx->pc = 0x21e370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942132)));
    // 0x21e374: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x21e374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e378: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x21E378u;
    {
        const bool branch_taken_0x21e378 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x21E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E378u;
        // 0x21e37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e378) {
            ctx->pc = 0x21E3B4u;
            goto label_21e3b4;
        }
    }
    ctx->pc = 0x21E380u;
    // 0x21e380: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x21e380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x21e384: 0x24e4c6c8  addiu       $a0, $a3, -0x3938
    ctx->pc = 0x21e384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952648));
label_21e388:
    // 0x21e388: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21e388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21e38c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21e390: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e394: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x21e394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21e398: 0x54880003  bnel        $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E398u;
    {
        const bool branch_taken_0x21e398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x21e398) {
            ctx->pc = 0x21E39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E398u;
            // 0x21e39c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E3A8u;
            goto label_21e3a8;
        }
    }
    ctx->pc = 0x21E3A0u;
    // 0x21e3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x21E3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3A0u;
        // 0x21e3a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E3A8u;
label_21e3a8:
    // 0x21e3a8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x21e3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21e3ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21E3ACu;
    {
        const bool branch_taken_0x21e3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3ACu;
        // 0x21e3b0: 0x24e4c6c8  addiu       $a0, $a3, -0x3938 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3ac) {
            ctx->pc = 0x21E388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e388;
        }
    }
    ctx->pc = 0x21E3B4u;
label_21e3b4:
    // 0x21e3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3B4u;
        // 0x21e3b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E3BCu;
}
