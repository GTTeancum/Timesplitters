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

// Function: mcardFileExists
// Address: 0x208d70 - 0x208da0
void mcardFileExists_0x208d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardFileExists_0x208d70");
#endif

    switch (ctx->pc) {
        case 0x208d88u: goto label_208d88;
        default: break;
    }

    ctx->pc = 0x208d70u;

    // 0x208d70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x208d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208d78: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x208d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208d80: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x208D80u;
    SET_GPR_U32(ctx, 31, 0x208D88u);
    ctx->pc = 0x208D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D80u;
    // 0x208d84: 0x24843140  addiu       $a0, $a0, 0x3140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x208D80u, 0x208D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D88u;
label_208d88:
    // 0x208d88: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x208d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x208d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208d90: 0xaf809be8  sw          $zero, -0x6418($gp)
    ctx->pc = 0x208d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 0));
    // 0x208d94: 0xaf839bec  sw          $v1, -0x6414($gp)
    ctx->pc = 0x208d94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 3));
    // 0x208d98: 0x3e00008  jr          $ra
    ctx->pc = 0x208D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D98u;
        // 0x208d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208DA0u;
}
