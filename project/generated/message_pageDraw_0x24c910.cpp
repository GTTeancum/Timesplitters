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
// Address: 0x24c910 - 0x24c968
void message_pageDraw_0x24c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("message_pageDraw_0x24c910");
#endif

    switch (ctx->pc) {
        case 0x24c920u: goto label_24c920;
        default: break;
    }

    ctx->pc = 0x24c910u;

    // 0x24c910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c918: 0xc08bc28  jal         func_22F0A0
    ctx->pc = 0x24C918u;
    SET_GPR_U32(ctx, 31, 0x24C920u);
    ctx->pc = 0x24C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C918u;
    // 0x24c91c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F0A0u, 0x24C918u, 0x24C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C920u;
label_24c920:
    // 0x24c920: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24c924: 0x24422e80  addiu       $v0, $v0, 0x2E80
    ctx->pc = 0x24c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
    // 0x24c928: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x24c928u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x352EA4u));
    // 0x24c92c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x24C92Cu;
    {
        const bool branch_taken_0x24c92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C92Cu;
        // 0x24c930: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c92c) {
            ctx->pc = 0x24C960u;
            goto label_24c960;
        }
    }
    ctx->pc = 0x24C934u;
    // 0x24c934: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x24c934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24c938: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x24c938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x24c93c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x24c93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24c940: 0x24843a00  addiu       $a0, $a0, 0x3A00
    ctx->pc = 0x24c940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14848));
    // 0x24c944: 0x8f88b83c  lw          $t0, -0x47C4($gp)
    ctx->pc = 0x24c944u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948924)));
    // 0x24c948: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x24c948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x24c94c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x24c94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x24c950: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24c950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c954: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x24c954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x24c958: 0x808ba4c  j           func_22E930
    ctx->pc = 0x24C958u;
    ctx->pc = 0x24C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C958u;
    // 0x24c95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E930u;
    guiDrawFormattedText_0x22e930(rdram, ctx, runtime); return;
    ctx->pc = 0x24C960u;
label_24c960:
    // 0x24c960: 0x3e00008  jr          $ra
    ctx->pc = 0x24C960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C960u;
        // 0x24c964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C968u;
}
