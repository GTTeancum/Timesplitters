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

// Function: signonFileSize
// Address: 0x220790 - 0x2207ac
void signonFileSize_0x220790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonFileSize_0x220790");
#endif

    switch (ctx->pc) {
        case 0x2207a0u: goto label_2207a0;
        default: break;
    }

    ctx->pc = 0x220790u;

    // 0x220790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220798: 0xc0823ae  jal         func_208EB8
    ctx->pc = 0x220798u;
    SET_GPR_U32(ctx, 31, 0x2207A0u);
    ctx->pc = 0x22079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220798u;
    // 0x22079c: 0x3404b790  ori         $a0, $zero, 0xB790 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46992);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208EB8u, 0x220798u, 0x2207A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2207A0u;
label_2207a0:
    // 0x2207a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2207a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2207a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2207A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2207A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207A4u;
        // 0x2207a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2207A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2207ACu;
}
