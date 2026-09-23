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

// Function: message_pageTick
// Address: 0x206b90 - 0x206be8
void message_pageTick_0x206b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("message_pageTick_0x206b90");
#endif

    switch (ctx->pc) {
        case 0x206b90u: goto label_206b90;
        case 0x206b94u: goto label_206b94;
        case 0x206b98u: goto label_206b98;
        case 0x206b9cu: goto label_206b9c;
        case 0x206ba0u: goto label_206ba0;
        case 0x206ba4u: goto label_206ba4;
        case 0x206ba8u: goto label_206ba8;
        case 0x206bacu: goto label_206bac;
        case 0x206bb0u: goto label_206bb0;
        case 0x206bb4u: goto label_206bb4;
        case 0x206bb8u: goto label_206bb8;
        case 0x206bbcu: goto label_206bbc;
        case 0x206bc0u: goto label_206bc0;
        case 0x206bc4u: goto label_206bc4;
        case 0x206bc8u: goto label_206bc8;
        case 0x206bccu: goto label_206bcc;
        case 0x206bd0u: goto label_206bd0;
        case 0x206bd4u: goto label_206bd4;
        case 0x206bd8u: goto label_206bd8;
        case 0x206bdcu: goto label_206bdc;
        case 0x206be0u: goto label_206be0;
        case 0x206be4u: goto label_206be4;
        default: break;
    }

    ctx->pc = 0x206b90u;

label_206b90:
    // 0x206b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206b94:
    // 0x206b94: 0x8f82b63c  lw          $v0, -0x49C4($gp)
    ctx->pc = 0x206b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948412)));
label_206b98:
    // 0x206b98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_206b9c:
    if (ctx->pc == 0x206B9Cu) {
        ctx->pc = 0x206B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B98u;
        // 0x206b9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BA0u;
        goto label_206ba0;
    }
    ctx->pc = 0x206B98u;
    {
        const bool branch_taken_0x206b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B98u;
        // 0x206b9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b98) {
            ctx->pc = 0x206BB0u;
            goto label_206bb0;
        }
    }
    ctx->pc = 0x206BA0u;
label_206ba0:
    // 0x206ba0: 0x40f809  jalr        $v0
label_206ba4:
    if (ctx->pc == 0x206BA4u) {
        ctx->pc = 0x206BA8u;
        goto label_206ba8;
    }
    ctx->pc = 0x206BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206BA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BA0u, 0x206BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206BA8u;
label_206ba8:
    // 0x206ba8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_206bac:
    if (ctx->pc == 0x206BACu) {
        ctx->pc = 0x206BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BA8u;
        // 0x206bac: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BB0u;
        goto label_206bb0;
    }
    ctx->pc = 0x206BA8u;
    {
        const bool branch_taken_0x206ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BA8u;
        // 0x206bac: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ba8) {
            ctx->pc = 0x206BD0u;
            goto label_206bd0;
        }
    }
    ctx->pc = 0x206BB0u;
label_206bb0:
    // 0x206bb0: 0xc081ada  jal         func_206B68
label_206bb4:
    if (ctx->pc == 0x206BB4u) {
        ctx->pc = 0x206BB8u;
        goto label_206bb8;
    }
    ctx->pc = 0x206BB0u;
    SET_GPR_U32(ctx, 31, 0x206BB8u);
    ctx->pc = 0x206B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206B68u, 0x206BB0u, 0x206BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BB8u;
label_206bb8:
    // 0x206bb8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_206bbc:
    if (ctx->pc == 0x206BBCu) {
        ctx->pc = 0x206BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BB8u;
        // 0x206bbc: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BC0u;
        goto label_206bc0;
    }
    ctx->pc = 0x206BB8u;
    {
        const bool branch_taken_0x206bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BB8u;
        // 0x206bbc: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206bb8) {
            ctx->pc = 0x206BD0u;
            goto label_206bd0;
        }
    }
    ctx->pc = 0x206BC0u;
label_206bc0:
    // 0x206bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206bc4:
    // 0x206bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x206bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206bc8:
    // 0x206bc8: 0x808bbf4  j           func_22EFD0
label_206bcc:
    if (ctx->pc == 0x206BCCu) {
        ctx->pc = 0x206BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BC8u;
        // 0x206bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BD0u;
        goto label_206bd0;
    }
    ctx->pc = 0x206BC8u;
    ctx->pc = 0x206BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BC8u;
    // 0x206bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    zoomboxTick_0x22efd0(rdram, ctx, runtime); return;
    ctx->pc = 0x206BD0u;
label_206bd0:
    // 0x206bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206bd4:
    // 0x206bd4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x206bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_206bd8:
    // 0x206bd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x206bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_206bdc:
    // 0x206bdc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x206bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_206be0:
    // 0x206be0: 0x3e00008  jr          $ra
label_206be4:
    if (ctx->pc == 0x206BE4u) {
        ctx->pc = 0x206BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE0u;
        // 0x206be4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BE8u;
        goto label_fallthrough_0x206be0;
    }
    ctx->pc = 0x206BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE0u;
        // 0x206be4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206be0:
    ctx->pc = 0x206BE8u;
}
