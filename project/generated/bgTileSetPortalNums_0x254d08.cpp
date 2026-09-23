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

// Function: bgTileSetPortalNums
// Address: 0x254d08 - 0x254d88
void bgTileSetPortalNums_0x254d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgTileSetPortalNums_0x254d08");
#endif

    switch (ctx->pc) {
        case 0x254d20u: goto label_254d20;
        case 0x254d40u: goto label_254d40;
        default: break;
    }

    ctx->pc = 0x254d08u;

    // 0x254d08: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x254d08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d0c: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x254d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x254d10: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x254D10u;
    {
        const bool branch_taken_0x254d10 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x254D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D10u;
        // 0x254d14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d10) {
            ctx->pc = 0x254D80u;
            goto label_254d80;
        }
    }
    ctx->pc = 0x254D18u;
    // 0x254d18: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x254d18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x254d1c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x254d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_254d20:
    // 0x254d20: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x254d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x254d24: 0xab1021  addu        $v0, $a1, $t3
    ctx->pc = 0x254d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x254d28: 0x8c480030  lw          $t0, 0x30($v0)
    ctx->pc = 0x254d28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x254d2c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x254d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x254d30: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x254D30u;
    {
        const bool branch_taken_0x254d30 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x254D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D30u;
        // 0x254d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d30) {
            ctx->pc = 0x254D6Cu;
            goto label_254d6c;
        }
    }
    ctx->pc = 0x254D38u;
    // 0x254d38: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x254d38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x254d3c: 0x0  nop
    ctx->pc = 0x254d3cu;
    // NOP
label_254d40:
    // 0x254d40: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x254d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x254d44: 0x8d250024  lw          $a1, 0x24($t1)
    ctx->pc = 0x254d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x254d48: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x254d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x254d4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x254d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x254d50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x254d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x254d54: 0xc7202a  slt         $a0, $a2, $a3
    ctx->pc = 0x254d54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x254d58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x254d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x254d5c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x254D5Cu;
    {
        const bool branch_taken_0x254d5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x254D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D5Cu;
        // 0x254d60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d5c) {
            ctx->pc = 0x254D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254d40;
        }
    }
    ctx->pc = 0x254D64u;
    // 0x254d64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254D64u;
    {
        const bool branch_taken_0x254d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D64u;
        // 0x254d68: 0x8d240010  lw          $a0, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d64) {
            ctx->pc = 0x254D70u;
            goto label_254d70;
        }
    }
    ctx->pc = 0x254D6Cu;
label_254d6c:
    // 0x254d6c: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x254d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_254d70:
    // 0x254d70: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x254d70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d74: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x254d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x254d78: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x254D78u;
    {
        const bool branch_taken_0x254d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D78u;
        // 0x254d7c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d78) {
            ctx->pc = 0x254D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254d20;
        }
    }
    ctx->pc = 0x254D80u;
label_254d80:
    // 0x254d80: 0x3e00008  jr          $ra
    ctx->pc = 0x254D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254D88u;
}
