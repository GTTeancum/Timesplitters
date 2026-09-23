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

// Function: mcardFileDelete
// Address: 0x208e80 - 0x208eb0
void mcardFileDelete_0x208e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardFileDelete_0x208e80");
#endif

    switch (ctx->pc) {
        case 0x208e98u: goto label_208e98;
        default: break;
    }

    ctx->pc = 0x208e80u;

    // 0x208e80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x208e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208e88: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x208e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x208e8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208e90: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x208E90u;
    SET_GPR_U32(ctx, 31, 0x208E98u);
    ctx->pc = 0x208E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E90u;
    // 0x208e94: 0x248430c0  addiu       $a0, $a0, 0x30C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x208E90u, 0x208E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E98u;
label_208e98:
    // 0x208e98: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x208e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x208e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208ea0: 0xaf809be8  sw          $zero, -0x6418($gp)
    ctx->pc = 0x208ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 0));
    // 0x208ea4: 0xaf839bec  sw          $v1, -0x6414($gp)
    ctx->pc = 0x208ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 3));
    // 0x208ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x208EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA8u;
        // 0x208eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208EB0u;
}
