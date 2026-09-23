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

// Function: mmenterdesc_pageDraw
// Address: 0x24cc68 - 0x24ccb0
void mmenterdesc_pageDraw_0x24cc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmenterdesc_pageDraw_0x24cc68");
#endif

    switch (ctx->pc) {
        case 0x24cc7cu: goto label_24cc7c;
        default: break;
    }

    ctx->pc = 0x24cc68u;

    // 0x24cc68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24cc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24cc6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24cc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cc70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24cc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24cc74: 0xc09319c  jal         func_24C670
    ctx->pc = 0x24CC74u;
    SET_GPR_U32(ctx, 31, 0x24CC7Cu);
    ctx->pc = 0x24CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC74u;
    // 0x24cc78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C670u, 0x24CC74u, 0x24CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC7Cu;
label_24cc7c:
    // 0x24cc7c: 0x9383b848  lbu         $v1, -0x47B8($gp)
    ctx->pc = 0x24cc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948936)));
    // 0x24cc80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cc84: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CC84u;
    {
        const bool branch_taken_0x24cc84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC84u;
        // 0x24cc88: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc84) {
            ctx->pc = 0x24CCA4u;
            goto label_24cca4;
        }
    }
    ctx->pc = 0x24CC8Cu;
    // 0x24cc8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24cc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cc90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cc94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24cc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24cc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cc9c: 0x808bc3c  j           func_22F0F0
    ctx->pc = 0x24CC9Cu;
    ctx->pc = 0x24CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC9Cu;
    // 0x24cca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F0F0u;
    stringeditDraw_0x22f0f0(rdram, ctx, runtime); return;
    ctx->pc = 0x24CCA4u;
label_24cca4:
    // 0x24cca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x24CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCA8u;
        // 0x24ccac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CCB0u;
}
