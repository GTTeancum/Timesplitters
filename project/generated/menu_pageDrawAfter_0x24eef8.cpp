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

// Function: menu_pageDrawAfter
// Address: 0x24eef8 - 0x24ef3c
void menu_pageDrawAfter_0x24eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menu_pageDrawAfter_0x24eef8");
#endif

    ctx->pc = 0x24eef8u;

    // 0x24eef8: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x24eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24eefc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x24eefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24ef00: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x24ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x24ef04: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x24ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24ef08: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x24ef08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x24ef0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ef10: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24EF10u;
    {
        const bool branch_taken_0x24ef10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF10u;
        // 0x24ef14: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef10) {
            ctx->pc = 0x24EF34u;
            goto label_24ef34;
        }
    }
    ctx->pc = 0x24EF18u;
    // 0x24ef18: 0x24082840  addiu       $t0, $zero, 0x2840
    ctx->pc = 0x24ef18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10304));
    // 0x24ef1c: 0x246239f0  addiu       $v0, $v1, 0x39F0
    ctx->pc = 0x24ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 14832));
    // 0x24ef20: 0x8c6439f0  lw          $a0, 0x39F0($v1)
    ctx->pc = 0x24ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14832)));
    // 0x24ef24: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x24ef24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24ef28: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x24ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24ef2c: 0x80ae108  j           func_2B8420
    ctx->pc = 0x24EF2Cu;
    ctx->pc = 0x24EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EF2Cu;
    // 0x24ef30: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x24EF34u;
label_24ef34:
    // 0x24ef34: 0x3e00008  jr          $ra
    ctx->pc = 0x24EF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EF3Cu;
}
