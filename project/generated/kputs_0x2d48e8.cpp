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

// Function: kputs
// Address: 0x2d48e8 - 0x2d490c
void kputs_0x2d48e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kputs_0x2d48e8");
#endif

    switch (ctx->pc) {
        case 0x2d4900u: goto label_2d4900;
        default: break;
    }

    ctx->pc = 0x2d48e8u;

    // 0x2d48e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d48e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d48ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d48ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d48f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d48f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d48f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d48f8: 0xc0b4154  jal         func_2D0550
    ctx->pc = 0x2D48F8u;
    SET_GPR_U32(ctx, 31, 0x2D4900u);
    ctx->pc = 0x2D48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48F8u;
    // 0x2d48fc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0550u, 0x2D48F8u, 0x2D4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4900u;
label_2d4900:
    // 0x2d4900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4904: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4904u;
        // 0x2d4908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D490Cu;
}
