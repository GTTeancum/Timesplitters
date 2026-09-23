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

// Function: guiTriGradient
// Address: 0x22e8b0 - 0x22e92c
void guiTriGradient_0x22e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiTriGradient_0x22e8b0");
#endif

    switch (ctx->pc) {
        case 0x22e920u: goto label_22e920;
        default: break;
    }

    ctx->pc = 0x22e8b0u;

    // 0x22e8b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22e8b4: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x22e8b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x22e8b8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x22e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x22e8bc: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x22e8bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x22e8c0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x22e8c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x22e8c4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e8c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e8c8: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x22e8c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x22e8cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x22e8ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8d0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22e8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8d4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x22e8d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8d8: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x22e8d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x22e8dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22e8e0: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x22e8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x22e8e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22e8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8e8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x22e8ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e8f0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x22e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x22e8f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e8f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8f8: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x22e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x22e8fc: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x22e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x22e900: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x22e900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x22e904: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x22e904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x22e908: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x22e908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x22e90c: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x22e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x22e910: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x22e910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x22e914: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x22e914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x22e918: 0xc0ae284  jal         func_2B8A10
    ctx->pc = 0x22E918u;
    SET_GPR_U32(ctx, 31, 0x22E920u);
    ctx->pc = 0x22E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E918u;
    // 0x22e91c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A10u, 0x22E918u, 0x22E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E920u;
label_22e920:
    // 0x22e920: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e924: 0x3e00008  jr          $ra
    ctx->pc = 0x22E924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E924u;
        // 0x22e928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E92Cu;
}
