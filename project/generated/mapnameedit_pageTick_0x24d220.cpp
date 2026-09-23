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

// Function: mapnameedit_pageTick
// Address: 0x24d220 - 0x24d268
void mapnameedit_pageTick_0x24d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapnameedit_pageTick_0x24d220");
#endif

    switch (ctx->pc) {
        case 0x24d234u: goto label_24d234;
        default: break;
    }

    ctx->pc = 0x24d220u;

    // 0x24d220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d224: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24d224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d22c: 0xc08be08  jal         func_22F820
    ctx->pc = 0x24D22Cu;
    SET_GPR_U32(ctx, 31, 0x24D234u);
    ctx->pc = 0x24D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D22Cu;
    // 0x24d230: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F820u, 0x24D22Cu, 0x24D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D234u;
label_24d234:
    // 0x24d234: 0x8f83a034  lw          $v1, -0x5FCC($gp)
    ctx->pc = 0x24d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x24d238: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x24d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24d23c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D23Cu;
    {
        const bool branch_taken_0x24d23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d23c) {
            ctx->pc = 0x24D240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D23Cu;
            // 0x24d240: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D250u;
            goto label_24d250;
        }
    }
    ctx->pc = 0x24D244u;
    // 0x24d244: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x24d248: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D248u;
    {
        const bool branch_taken_0x24d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D248u;
        // 0x24d24c: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d248) {
            ctx->pc = 0x24D25Cu;
            goto label_24d25c;
        }
    }
    ctx->pc = 0x24D250u;
label_24d250:
    // 0x24d250: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x24d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x24d254: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24d258: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x24d258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_24d25c:
    // 0x24d25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d260: 0x3e00008  jr          $ra
    ctx->pc = 0x24D260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D260u;
        // 0x24d264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D268u;
}
