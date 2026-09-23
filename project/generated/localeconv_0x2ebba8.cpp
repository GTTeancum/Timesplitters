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

// Function: localeconv
// Address: 0x2ebba8 - 0x2ebbcc
void localeconv_0x2ebba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("localeconv_0x2ebba8");
#endif

    switch (ctx->pc) {
        case 0x2ebbc0u: goto label_2ebbc0;
        default: break;
    }

    ctx->pc = 0x2ebba8u;

    // 0x2ebba8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ebba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ebbac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ebbacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ebbb0: 0x8c44330c  lw          $a0, 0x330C($v0)
    ctx->pc = 0x2ebbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2ebbb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebbb8: 0xc0baeda  jal         func_2EBB68
    ctx->pc = 0x2EBBB8u;
    SET_GPR_U32(ctx, 31, 0x2EBBC0u);
    ctx->pc = 0x2EBB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBB68u, 0x2EBBB8u, 0x2EBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBBC0u;
label_2ebbc0:
    // 0x2ebbc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBC4u;
        // 0x2ebbc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBBCCu;
}
