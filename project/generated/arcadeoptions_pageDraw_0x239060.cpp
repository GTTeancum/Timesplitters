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

// Function: arcadeoptions_pageDraw
// Address: 0x239060 - 0x239084
void arcadeoptions_pageDraw_0x239060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("arcadeoptions_pageDraw_0x239060");
#endif

    switch (ctx->pc) {
        case 0x239070u: goto label_239070;
        default: break;
    }

    ctx->pc = 0x239060u;

    // 0x239060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239068: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x239068u;
    SET_GPR_U32(ctx, 31, 0x239070u);
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x239068u, 0x239070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239070u;
label_239070:
    // 0x239070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239074: 0x2404016c  addiu       $a0, $zero, 0x16C
    ctx->pc = 0x239074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    // 0x239078: 0x240500ce  addiu       $a1, $zero, 0xCE
    ctx->pc = 0x239078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x23907c: 0x808d732  j           func_235CC8
    ctx->pc = 0x23907Cu;
    ctx->pc = 0x239080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23907Cu;
    // 0x239080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CC8u;
    drawBotSet_0x235cc8(rdram, ctx, runtime); return;
    ctx->pc = 0x239084u;
}
