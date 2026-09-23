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

// Function: sceGsPutIMR
// Address: 0x2ce870 - 0x2ce8ac
void sceGsPutIMR_0x2ce870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsPutIMR_0x2ce870");
#endif

    switch (ctx->pc) {
        case 0x2ce888u: goto label_2ce888;
        case 0x2ce894u: goto label_2ce894;
        default: break;
    }

    ctx->pc = 0x2ce870u;

    // 0x2ce870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce878: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ce878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ce87c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce880: 0xc0b4110  jal         func_2D0440
    ctx->pc = 0x2CE880u;
    SET_GPR_U32(ctx, 31, 0x2CE888u);
    ctx->pc = 0x2CE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE880u;
    // 0x2ce884: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0440u, 0x2CE880u, 0x2CE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE888u;
label_2ce888:
    // 0x2ce888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce88c: 0xc0b4118  jal         func_2D0460
    ctx->pc = 0x2CE88Cu;
    SET_GPR_U32(ctx, 31, 0x2CE894u);
    ctx->pc = 0x2CE890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE88Cu;
    // 0x2ce890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0460u, 0x2CE88Cu, 0x2CE894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE894u;
label_2ce894:
    // 0x2ce894: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ce894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ce898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce89c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ce89cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8A4u;
        // 0x2ce8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE8ACu;
}
