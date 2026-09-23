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

// Function: message_pageDraw
// Address: 0x206b08 - 0x206b68
void message_pageDraw_0x206b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("message_pageDraw_0x206b08");
#endif

    switch (ctx->pc) {
        case 0x206b18u: goto label_206b18;
        case 0x206b5cu: goto label_206b5c;
        default: break;
    }

    ctx->pc = 0x206b08u;

    // 0x206b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206b0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206b10: 0xc08bc28  jal         func_22F0A0
    ctx->pc = 0x206B10u;
    SET_GPR_U32(ctx, 31, 0x206B18u);
    ctx->pc = 0x206B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B10u;
    // 0x206b14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F0A0u, 0x206B10u, 0x206B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B18u;
label_206b18:
    // 0x206b18: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x206b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x206b1c: 0x24442e80  addiu       $a0, $v0, 0x2E80
    ctx->pc = 0x206b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
    // 0x206b20: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x206b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x352EA4u));
    // 0x206b24: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x206B24u;
    {
        const bool branch_taken_0x206b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B24u;
        // 0x206b28: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b24) {
            ctx->pc = 0x206B60u;
            goto label_206b60;
        }
    }
    ctx->pc = 0x206B2Cu;
    // 0x206b2c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x206b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x206b30: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x206b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x206b34: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x206b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x206b38: 0x24c62528  addiu       $a2, $a2, 0x2528
    ctx->pc = 0x206b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9512));
    // 0x206b3c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x206b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x206b40: 0x8f87b640  lw          $a3, -0x49C0($gp)
    ctx->pc = 0x206b40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948416)));
    // 0x206b44: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x206b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x206b48: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x206b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x206b4c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x206b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x206b50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b54: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x206B54u;
    SET_GPR_U32(ctx, 31, 0x206B5Cu);
    ctx->pc = 0x206B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B54u;
    // 0x206b58: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x206B54u, 0x206B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B5Cu;
label_206b5c:
    // 0x206b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_206b60:
    // 0x206b60: 0x3e00008  jr          $ra
    ctx->pc = 0x206B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B60u;
        // 0x206b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206B68u;
}
