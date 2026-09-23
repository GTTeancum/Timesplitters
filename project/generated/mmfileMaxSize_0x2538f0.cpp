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

// Function: mmfileMaxSize
// Address: 0x2538f0 - 0x253918
void mmfileMaxSize_0x2538f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileMaxSize_0x2538f0");
#endif

    switch (ctx->pc) {
        case 0x253900u: goto label_253900;
        default: break;
    }

    ctx->pc = 0x2538f0u;

    // 0x2538f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2538f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2538f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2538f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2538f8: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x2538F8u;
    SET_GPR_U32(ctx, 31, 0x253900u);
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x2538F8u, 0x253900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253900u;
label_253900:
    // 0x253900: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x253900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
    // 0x253904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253908: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x253908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x25390c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253910: 0x3e00008  jr          $ra
    ctx->pc = 0x253910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253910u;
        // 0x253914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253918u;
}
