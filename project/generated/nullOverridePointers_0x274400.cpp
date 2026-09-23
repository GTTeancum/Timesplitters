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

// Function: nullOverridePointers
// Address: 0x274400 - 0x274464
void nullOverridePointers_0x274400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("nullOverridePointers_0x274400");
#endif

    switch (ctx->pc) {
        case 0x274420u: goto label_274420;
        default: break;
    }

    ctx->pc = 0x274400u;

    // 0x274400: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x274400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x274404: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x274404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x274408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27440c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x274410: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x274410u;
    {
        const bool branch_taken_0x274410 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x274414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274410u;
        // 0x274414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274410) {
            ctx->pc = 0x27445Cu;
            goto label_27445c;
        }
    }
    ctx->pc = 0x274418u;
    // 0x274418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27441c: 0x0  nop
    ctx->pc = 0x27441cu;
    // NOP
label_274420:
    // 0x274420: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x274420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x274424: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x274424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x274428: 0x8cc300f8  lw          $v1, 0xF8($a2)
    ctx->pc = 0x274428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 248)));
    // 0x27442c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27442cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274430: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x274430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x274434: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x274434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x274438: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x274438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x27443c: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x27443cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x274440: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x274440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x274444: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x274444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x274448: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x274448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x27444c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x27444cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x274450: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x274450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x274454: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x274454u;
    {
        const bool branch_taken_0x274454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x274458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274454u;
        // 0x274458: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274454) {
            ctx->pc = 0x274420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274420;
        }
    }
    ctx->pc = 0x27445Cu;
label_27445c:
    // 0x27445c: 0x3e00008  jr          $ra
    ctx->pc = 0x27445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27445Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274464u;
}
