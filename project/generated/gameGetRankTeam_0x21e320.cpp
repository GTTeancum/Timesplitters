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

// Function: gameGetRankTeam
// Address: 0x21e320 - 0x21e36c
void gameGetRankTeam_0x21e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameGetRankTeam_0x21e320");
#endif

    switch (ctx->pc) {
        case 0x21e338u: goto label_21e338;
        default: break;
    }

    ctx->pc = 0x21e320u;

    // 0x21e320: 0x8f869db0  lw          $a2, -0x6250($gp)
    ctx->pc = 0x21e320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942128)));
    // 0x21e324: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x21e324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e328: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x21E328u;
    {
        const bool branch_taken_0x21e328 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x21E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E328u;
        // 0x21e32c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e328) {
            ctx->pc = 0x21E364u;
            goto label_21e364;
        }
    }
    ctx->pc = 0x21E330u;
    // 0x21e330: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x21e330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x21e334: 0x24e4c518  addiu       $a0, $a3, -0x3AE8
    ctx->pc = 0x21e334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952216));
label_21e338:
    // 0x21e338: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21e338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21e33c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21e340: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21e340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e344: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x21e344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21e348: 0x54880003  bnel        $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E348u;
    {
        const bool branch_taken_0x21e348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x21e348) {
            ctx->pc = 0x21E34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E348u;
            // 0x21e34c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E358u;
            goto label_21e358;
        }
    }
    ctx->pc = 0x21E350u;
    // 0x21e350: 0x3e00008  jr          $ra
    ctx->pc = 0x21E350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E350u;
        // 0x21e354: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E358u;
label_21e358:
    // 0x21e358: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x21e358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21e35c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21E35Cu;
    {
        const bool branch_taken_0x21e35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E35Cu;
        // 0x21e360: 0x24e4c518  addiu       $a0, $a3, -0x3AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e35c) {
            ctx->pc = 0x21E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e338;
        }
    }
    ctx->pc = 0x21E364u;
label_21e364:
    // 0x21e364: 0x3e00008  jr          $ra
    ctx->pc = 0x21E364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E364u;
        // 0x21e368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E36Cu;
}
