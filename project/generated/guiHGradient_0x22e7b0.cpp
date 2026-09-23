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

// Function: guiHGradient
// Address: 0x22e7b0 - 0x22e82c
void guiHGradient_0x22e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiHGradient_0x22e7b0");
#endif

    switch (ctx->pc) {
        case 0x22e820u: goto label_22e820;
        default: break;
    }

    ctx->pc = 0x22e7b0u;

    // 0x22e7b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22e7b4: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x22e7b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x22e7b8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x22e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x22e7bc: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x22e7bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x22e7c0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x22e7c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x22e7c4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e7c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e7c8: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x22e7c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x22e7cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x22e7ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7d0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22e7d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7d4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x22e7d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7d8: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x22e7d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x22e7dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22e7e0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x22e7e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22e7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7e8: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x22e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x22e7ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e7f0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x22e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x22e7f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7f8: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x22e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x22e7fc: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x22e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x22e800: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x22e800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x22e804: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x22e804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x22e808: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x22e808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x22e80c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x22e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x22e810: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x22e810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x22e814: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x22e814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x22e818: 0xc0ae284  jal         func_2B8A10
    ctx->pc = 0x22E818u;
    SET_GPR_U32(ctx, 31, 0x22E820u);
    ctx->pc = 0x22E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E818u;
    // 0x22e81c: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A10u, 0x22E818u, 0x22E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E820u;
label_22e820:
    // 0x22e820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e824: 0x3e00008  jr          $ra
    ctx->pc = 0x22E824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E824u;
        // 0x22e828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E82Cu;
}
