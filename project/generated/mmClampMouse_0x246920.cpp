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

// Function: mmClampMouse
// Address: 0x246920 - 0x24697c
void mmClampMouse_0x246920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmClampMouse_0x246920");
#endif

    ctx->pc = 0x246920u;

    // 0x246920: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x246920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x246924: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x246924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x246928: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x246928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x24692c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x24692cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x246930: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246930u;
    {
        const bool branch_taken_0x246930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246930u;
        // 0x246934: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246930) {
            ctx->pc = 0x246948u;
            goto label_246948;
        }
    }
    ctx->pc = 0x246938u;
    // 0x246938: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x246938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24693c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x24693cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x246940: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x246940u;
    {
        const bool branch_taken_0x246940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246940) {
            ctx->pc = 0x246944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246940u;
            // 0x246944: 0x8ce60024  lw          $a2, 0x24($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246950u;
            goto label_246950;
        }
    }
    ctx->pc = 0x246948u;
label_246948:
    // 0x246948: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x246948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x24694c: 0x8ce60024  lw          $a2, 0x24($a3)
    ctx->pc = 0x24694cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_246950:
    // 0x246950: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x246950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x246954: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x246954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x246958: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x246958u;
    {
        const bool branch_taken_0x246958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246958) {
            ctx->pc = 0x24695Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246958u;
            // 0x24695c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246968u;
            goto label_246968;
        }
    }
    ctx->pc = 0x246960u;
    // 0x246960: 0x3e00008  jr          $ra
    ctx->pc = 0x246960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246960u;
        // 0x246964: 0xaca30024  sw          $v1, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246968u;
label_246968:
    // 0x246968: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x246968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x24696c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24696Cu;
    {
        const bool branch_taken_0x24696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24696c) {
            ctx->pc = 0x246970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24696Cu;
            // 0x246970: 0xaca40024  sw          $a0, 0x24($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246974u;
            goto label_246974;
        }
    }
    ctx->pc = 0x246974u;
label_246974:
    // 0x246974: 0x3e00008  jr          $ra
    ctx->pc = 0x246974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24697Cu;
}
