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

// Function: frontGetBox
// Address: 0x22c470 - 0x22c4b0
void frontGetBox_0x22c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontGetBox_0x22c470");
#endif

    switch (ctx->pc) {
        case 0x22c488u: goto label_22c488;
        default: break;
    }

    ctx->pc = 0x22c470u;

    // 0x22c470: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x22c470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22c474: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x22c474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x22c478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c47c: 0x18e0000a  blez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x22C47Cu;
    {
        const bool branch_taken_0x22c47c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C47Cu;
        // 0x22c480: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c47c) {
            ctx->pc = 0x22C4A8u;
            goto label_22c4a8;
        }
    }
    ctx->pc = 0x22C484u;
    // 0x22c484: 0x0  nop
    ctx->pc = 0x22c484u;
    // NOP
label_22c488:
    // 0x22c488: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x22c488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22c48c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C48Cu;
    {
        const bool branch_taken_0x22c48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C48Cu;
        // 0x22c490: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c48c) {
            ctx->pc = 0x22C49Cu;
            goto label_22c49c;
        }
    }
    ctx->pc = 0x22C494u;
    // 0x22c494: 0x3e00008  jr          $ra
    ctx->pc = 0x22C494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C494u;
        // 0x22c498: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C49Cu;
label_22c49c:
    // 0x22c49c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x22c49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22c4a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22C4A0u;
    {
        const bool branch_taken_0x22c4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4A0u;
        // 0x22c4a4: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c4a0) {
            ctx->pc = 0x22C488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c488;
        }
    }
    ctx->pc = 0x22C4A8u;
label_22c4a8:
    // 0x22c4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22C4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4A8u;
        // 0x22c4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C4B0u;
}
