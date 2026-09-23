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

// Function: mmDraw2DView
// Address: 0x24b1e0 - 0x24b240
void mmDraw2DView_0x24b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDraw2DView_0x24b1e0");
#endif

    switch (ctx->pc) {
        case 0x24b1f0u: goto label_24b1f0;
        case 0x24b1f8u: goto label_24b1f8;
        case 0x24b200u: goto label_24b200;
        case 0x24b208u: goto label_24b208;
        default: break;
    }

    ctx->pc = 0x24b1e0u;

    // 0x24b1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b1e8: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x24B1E8u;
    SET_GPR_U32(ctx, 31, 0x24B1F0u);
    ctx->pc = 0x24B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1E8u;
    // 0x24b1ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x24B1E8u, 0x24B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1F0u;
label_24b1f0:
    // 0x24b1f0: 0xc0929c4  jal         func_24A710
    ctx->pc = 0x24B1F0u;
    SET_GPR_U32(ctx, 31, 0x24B1F8u);
    ctx->pc = 0x24A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A710u, 0x24B1F0u, 0x24B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1F8u;
label_24b1f8:
    // 0x24b1f8: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x24B1F8u;
    SET_GPR_U32(ctx, 31, 0x24B200u);
    ctx->pc = 0x24B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1F8u;
    // 0x24b1fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x24B1F8u, 0x24B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B200u;
label_24b200:
    // 0x24b200: 0xc092a82  jal         func_24AA08
    ctx->pc = 0x24B200u;
    SET_GPR_U32(ctx, 31, 0x24B208u);
    ctx->pc = 0x24AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA08u, 0x24B200u, 0x24B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B208u;
label_24b208:
    // 0x24b208: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24b20c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x24b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24b210: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B210u;
    {
        const bool branch_taken_0x24b210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B210u;
        // 0x24b214: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b210) {
            ctx->pc = 0x24B238u;
            goto label_24b238;
        }
    }
    ctx->pc = 0x24B218u;
    // 0x24b218: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24b218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24b21c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24b21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24b220: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B220u;
    {
        const bool branch_taken_0x24b220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b220) {
            ctx->pc = 0x24B230u;
            goto label_24b230;
        }
    }
    ctx->pc = 0x24B228u;
    // 0x24b228: 0x8092c32  j           func_24B0C8
    ctx->pc = 0x24B228u;
    ctx->pc = 0x24B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B228u;
    // 0x24b22c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B0C8u;
    mmDrawLasso_0x24b0c8(rdram, ctx, runtime); return;
    ctx->pc = 0x24B230u;
label_24b230:
    // 0x24b230: 0x8092b00  j           func_24AC00
    ctx->pc = 0x24B230u;
    ctx->pc = 0x24B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B230u;
    // 0x24b234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AC00u;
    mmDrawUsedObject_0x24ac00(rdram, ctx, runtime); return;
    ctx->pc = 0x24B238u;
label_24b238:
    // 0x24b238: 0x3e00008  jr          $ra
    ctx->pc = 0x24B238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B238u;
        // 0x24b23c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B240u;
}
