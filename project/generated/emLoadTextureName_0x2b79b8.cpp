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

// Function: emLoadTextureName
// Address: 0x2b79b8 - 0x2b7a0c
void emLoadTextureName_0x2b79b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emLoadTextureName_0x2b79b8");
#endif

    switch (ctx->pc) {
        case 0x2b79f4u: goto label_2b79f4;
        default: break;
    }

    ctx->pc = 0x2b79b8u;

    // 0x2b79b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b79b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b79bc: 0x8f87b498  lw          $a3, -0x4B68($gp)
    ctx->pc = 0x2b79bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b79c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b79c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b79c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2b79c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b79c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b79cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b79ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b79d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b79d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b79d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2b79d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79dc: 0x8ce21a08  lw          $v0, 0x1A08($a3)
    ctx->pc = 0x2b79dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6664)));
    // 0x2b79e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b79e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b79e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b79e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79ec: 0xc0adc64  jal         func_2B7190
    ctx->pc = 0x2B79ECu;
    SET_GPR_U32(ctx, 31, 0x2B79F4u);
    ctx->pc = 0x2B79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79ECu;
    // 0x2b79f0: 0xace21a08  sw          $v0, 0x1A08($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 6664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7190u, 0x2B79ECu, 0x2B79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79F4u;
label_2b79f4:
    // 0x2b79f4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2b79f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2b79f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b79f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b79fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b79fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7a04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A04u;
        // 0x2b7a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7A0Cu;
}
