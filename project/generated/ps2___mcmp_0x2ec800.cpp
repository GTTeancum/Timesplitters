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

// Function: __mcmp
// Address: 0x2ec800 - 0x2ec868
void ps2___mcmp_0x2ec800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mcmp_0x2ec800");
#endif

    switch (ctx->pc) {
        case 0x2ec81cu: goto label_2ec81c;
        case 0x2ec840u: goto label_2ec840;
        default: break;
    }

    ctx->pc = 0x2ec800u;

    // 0x2ec800: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2ec800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ec804: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ec808: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ec808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec80c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC80Cu;
    {
        const bool branch_taken_0x2ec80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC80Cu;
        // 0x2ec810: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec80c) {
            ctx->pc = 0x2EC82Cu;
            goto label_2ec82c;
        }
    }
    ctx->pc = 0x2EC814u;
    // 0x2ec814: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC81Cu;
label_2ec81c:
    // 0x2ec81c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ec820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ec824: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC824u;
        // 0x2ec828: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC82Cu;
label_2ec82c:
    // 0x2ec82c: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x2ec82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2ec830: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x2ec830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2ec834: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x2ec834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2ec838: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ec838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec83c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2ec83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_2ec840:
    // 0x2ec840: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2ec840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2ec844: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ec844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ec848: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ec848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec84c: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2EC84Cu;
    {
        const bool branch_taken_0x2ec84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ec84c) {
            ctx->pc = 0x2EC850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC84Cu;
            // 0x2ec850: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC81Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec81c;
        }
    }
    ctx->pc = 0x2EC854u;
    // 0x2ec854: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2ec854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ec858: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2EC858u;
    {
        const bool branch_taken_0x2ec858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC858u;
        // 0x2ec85c: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec858) {
            ctx->pc = 0x2EC840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec840;
        }
    }
    ctx->pc = 0x2EC860u;
    // 0x2ec860: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC860u;
        // 0x2ec864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC868u;
}
