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

// Function: _request_call
// Address: 0x2d2c78 - 0x2d2d04
void _request_call_0x2d2c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_call_0x2d2c78");
#endif

    ctx->pc = 0x2d2c78u;

    // 0x2d2c78: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x2d2c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2d2c7c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x2d2c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2d2c80: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2d2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2d2c84: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2C84u;
    {
        const bool branch_taken_0x2d2c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2c84) {
            ctx->pc = 0x2D2C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2C84u;
            // 0x2d2c88: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2C94u;
            goto label_2d2c94;
        }
    }
    ctx->pc = 0x2D2C8Cu;
    // 0x2d2c8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2C8Cu;
    {
        const bool branch_taken_0x2d2c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C8Cu;
        // 0x2d2c90: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c8c) {
            ctx->pc = 0x2D2C98u;
            goto label_2d2c98;
        }
    }
    ctx->pc = 0x2D2C94u;
label_2d2c94:
    // 0x2d2c94: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x2d2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_2d2c98:
    // 0x2d2c98: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x2d2c98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x2d2c9c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2d2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d2ca0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2d2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d2ca4: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x2d2ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x2d2ca8: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2d2ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x2d2cac: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2d2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d2cb0: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x2d2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x2d2cb4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2d2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2d2cb8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2d2cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2d2cbc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2d2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2d2cc0: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x2d2cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x2d2cc4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2d2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2d2cc8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x2d2cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x2d2ccc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2d2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d2cd0: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x2d2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x2d2cd4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d2cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d2cd8: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x2d2cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x2d2cdc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2d2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d2ce0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2CE0u;
    {
        const bool branch_taken_0x2d2ce0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2d2ce0) {
            ctx->pc = 0x2D2CFCu;
            goto label_2d2cfc;
        }
    }
    ctx->pc = 0x2D2CE8u;
    // 0x2d2ce8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2d2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d2cec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2CECu;
    {
        const bool branch_taken_0x2d2cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2cec) {
            ctx->pc = 0x2D2CFCu;
            goto label_2d2cfc;
        }
    }
    ctx->pc = 0x2D2CF4u;
    // 0x2d2cf4: 0x80b51a4  j           func_2D4690
    ctx->pc = 0x2D2CF4u;
    ctx->pc = 0x2D4690u;
    iWakeupThread_0x2d4690(rdram, ctx, runtime); return;
    ctx->pc = 0x2D2CFCu;
label_2d2cfc:
    // 0x2d2cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2D04u;
}
