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

// Function: calInbetweenMatrix
// Address: 0x2b5c08 - 0x2b5c24
void calInbetweenMatrix_0x2b5c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calInbetweenMatrix_0x2b5c08");
#endif

    switch (ctx->pc) {
        case 0x2b5c18u: goto label_2b5c18;
        default: break;
    }

    ctx->pc = 0x2b5c08u;

    // 0x2b5c08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b5c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b5c0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b5c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b5c10: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2B5C10u;
    SET_GPR_U32(ctx, 31, 0x2B5C18u);
    ctx->pc = 0x2B5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C10u;
    // 0x2b5c14: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2B5C10u, 0x2B5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C18u;
label_2b5c18:
    // 0x2b5c18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b5c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C1Cu;
        // 0x2b5c20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5C24u;
}
