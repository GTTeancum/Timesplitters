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

// Function: iSetAlarm
// Address: 0x2d0e78 - 0x2d0e98
void iSetAlarm_0x2d0e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iSetAlarm_0x2d0e78");
#endif

    switch (ctx->pc) {
        case 0x2d0e88u: goto label_2d0e88;
        default: break;
    }

    ctx->pc = 0x2d0e78u;

    // 0x2d0e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0e80: 0xc0b3fc0  jal         func_2CFF00
    ctx->pc = 0x2D0E80u;
    SET_GPR_U32(ctx, 31, 0x2D0E88u);
    ctx->pc = 0x2D0E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E80u;
    // 0x2d0e84: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF00u, 0x2D0E80u, 0x2D0E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E88u;
label_2d0e88:
    // 0x2d0e88: 0xf  sync
    ctx->pc = 0x2d0e88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E90u;
        // 0x2d0e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0E98u;
}
