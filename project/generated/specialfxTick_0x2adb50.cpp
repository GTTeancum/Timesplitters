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

// Function: specialfxTick
// Address: 0x2adb50 - 0x2adb6c
void specialfxTick_0x2adb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxTick_0x2adb50");
#endif

    switch (ctx->pc) {
        case 0x2adb60u: goto label_2adb60;
        default: break;
    }

    ctx->pc = 0x2adb50u;

    // 0x2adb50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2adb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2adb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2adb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2adb58: 0xc0aafa8  jal         func_2ABEA0
    ctx->pc = 0x2ADB58u;
    SET_GPR_U32(ctx, 31, 0x2ADB60u);
    ctx->pc = 0x2ABEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEA0u, 0x2ADB58u, 0x2ADB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB60u;
label_2adb60:
    // 0x2adb60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2adb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adb64: 0x80ab67c  j           func_2AD9F0
    ctx->pc = 0x2ADB64u;
    ctx->pc = 0x2ADB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB64u;
    // 0x2adb68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD9F0u;
    specialfxGroupsTick_0x2ad9f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2ADB6Cu;
}
