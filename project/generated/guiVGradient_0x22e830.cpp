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

// Function: guiVGradient
// Address: 0x22e830 - 0x22e8ac
void guiVGradient_0x22e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiVGradient_0x22e830");
#endif

    switch (ctx->pc) {
        case 0x22e8a0u: goto label_22e8a0;
        default: break;
    }

    ctx->pc = 0x22e830u;

    // 0x22e830: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22e830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22e834: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x22e834u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x22e838: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x22e838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x22e83c: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x22e83cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x22e840: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x22e840u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x22e844: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e848: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x22e848u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x22e84c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x22e84cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e850: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22e850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e854: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x22e854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e858: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x22e858u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x22e85c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22e860: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x22e860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x22e864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22e864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e868: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22e868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x22e86c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e870: 0xafab001c  sw          $t3, 0x1C($sp)
    ctx->pc = 0x22e870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
    // 0x22e874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e878: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x22e878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x22e87c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x22e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x22e880: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x22e880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x22e884: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x22e884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x22e888: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x22e888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x22e88c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x22e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x22e890: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22e890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x22e894: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x22e894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x22e898: 0xc0ae284  jal         func_2B8A10
    ctx->pc = 0x22E898u;
    SET_GPR_U32(ctx, 31, 0x22E8A0u);
    ctx->pc = 0x22E89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E898u;
    // 0x22e89c: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A10u, 0x22E898u, 0x22E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8A0u;
label_22e8a0:
    // 0x22e8a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x22E8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8A4u;
        // 0x22e8a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E8ACu;
}
