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

// Function: menusToSettings
// Address: 0x241580 - 0x2415a8
void menusToSettings_0x241580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menusToSettings_0x241580");
#endif

    switch (ctx->pc) {
        case 0x241590u: goto label_241590;
        default: break;
    }

    ctx->pc = 0x241580u;

    // 0x241580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x241584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241588: 0xc088076  jal         func_2201D8
    ctx->pc = 0x241588u;
    SET_GPR_U32(ctx, 31, 0x241590u);
    ctx->pc = 0x2201D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201D8u, 0x241588u, 0x241590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241590u;
label_241590:
    // 0x241590: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x241590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x241594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241598: 0x8c643810  lw          $a0, 0x3810($v1)
    ctx->pc = 0x241598u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x353810u));
    // 0x24159c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24159cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2415a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2415A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2415A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415A0u;
        // 0x2415a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2415A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2415A8u;
}
