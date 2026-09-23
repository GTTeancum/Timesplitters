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

// Function: timeTickEnd
// Address: 0x2b6860 - 0x2b6880
void timeTickEnd_0x2b6860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("timeTickEnd_0x2b6860");
#endif

    switch (ctx->pc) {
        case 0x2b6870u: goto label_2b6870;
        default: break;
    }

    ctx->pc = 0x2b6860u;

    // 0x2b6860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6868: 0xc0ad9a2  jal         func_2B6688
    ctx->pc = 0x2B6868u;
    SET_GPR_U32(ctx, 31, 0x2B6870u);
    ctx->pc = 0x2B6688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6688u, 0x2B6868u, 0x2B6870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6870u;
label_2b6870:
    // 0x2b6870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6874: 0xe780b478  swc1        $f0, -0x4B88($gp)
    ctx->pc = 0x2b6874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947960), bits); }
    // 0x2b6878: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6878u;
        // 0x2b687c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6880u;
}
