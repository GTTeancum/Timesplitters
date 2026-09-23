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

// Function: guiFlashAlpha
// Address: 0x22e208 - 0x22e250
void guiFlashAlpha_0x22e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiFlashAlpha_0x22e208");
#endif

    ctx->pc = 0x22e208u;

    // 0x22e208: 0x9382b45c  lbu         $v0, -0x4BA4($gp)
    ctx->pc = 0x22e208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x22e20c: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x22e20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x22e210: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x22e210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x22e214: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E214u;
    {
        const bool branch_taken_0x22e214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E214u;
        // 0x22e218: 0xa383a02c  sb          $v1, -0x5FD4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294942764), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e214) {
            ctx->pc = 0x22E228u;
            goto label_22e228;
        }
    }
    ctx->pc = 0x22E21Cu;
    // 0x22e21c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x22e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22e220: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e224: 0xa382a02c  sb          $v0, -0x5FD4($gp)
    ctx->pc = 0x22e224u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942764), (uint8_t)GPR_U32(ctx, 2));
label_22e228:
    // 0x22e228: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x22e228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x22e22c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22e230: 0x8f83b45c  lw          $v1, -0x4BA4($gp)
    ctx->pc = 0x22e230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x22e234: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x22e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x22e238: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x22e238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x22e23c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E23Cu;
    {
        const bool branch_taken_0x22e23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E23Cu;
        // 0x22e240: 0xa382a02c  sb          $v0, -0x5FD4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294942764), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e23c) {
            ctx->pc = 0x22E248u;
            goto label_22e248;
        }
    }
    ctx->pc = 0x22E244u;
    // 0x22e244: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x22e244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_22e248:
    // 0x22e248: 0x3e00008  jr          $ra
    ctx->pc = 0x22E248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E248u;
        // 0x22e24c: 0xa384a02d  sb          $a0, -0x5FD3($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294942765), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E250u;
}
