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

// Function: __make_fp
// Address: 0x2e45d8 - 0x2e4604
void ps2___make_fp_0x2e45d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_fp_0x2e45d8");
#endif

    switch (ctx->pc) {
        case 0x2e45f8u: goto label_2e45f8;
        default: break;
    }

    ctx->pc = 0x2e45d8u;

    // 0x2e45d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e45d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e45dc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e45dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e45e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e45e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e45e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e45e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45e8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2e45e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2e45ec: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2e45ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2e45f0: 0xc0b8e9a  jal         func_2E3A68
    ctx->pc = 0x2E45F0u;
    SET_GPR_U32(ctx, 31, 0x2E45F8u);
    ctx->pc = 0x2E45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45F0u;
    // 0x2e45f4: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A68u, 0x2E45F0u, 0x2E45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45F8u;
label_2e45f8:
    // 0x2e45f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e45f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e45fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E45FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45FCu;
        // 0x2e4600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E45FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4604u;
}
