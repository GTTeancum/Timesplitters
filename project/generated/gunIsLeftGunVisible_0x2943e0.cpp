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

// Function: gunIsLeftGunVisible
// Address: 0x2943e0 - 0x294454
void gunIsLeftGunVisible_0x2943e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunIsLeftGunVisible_0x2943e0");
#endif

    switch (ctx->pc) {
        case 0x294408u: goto label_294408;
        default: break;
    }

    ctx->pc = 0x2943e0u;

    // 0x2943e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2943e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2943e4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2943e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2943e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2943e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2943ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2943ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2943f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2943f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2943f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2943f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2943f8: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x2943f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2943fc: 0x8c700160  lw          $s0, 0x160($v1)
    ctx->pc = 0x2943fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x294400: 0xc0a542e  jal         func_2950B8
    ctx->pc = 0x294400u;
    SET_GPR_U32(ctx, 31, 0x294408u);
    ctx->pc = 0x294404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294400u;
    // 0x294404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950B8u, 0x294400u, 0x294408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294408u;
label_294408:
    // 0x294408: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x294408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29440c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x29440Cu;
    {
        const bool branch_taken_0x29440c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29440Cu;
        // 0x294410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29440c) {
            ctx->pc = 0x294440u;
            goto label_294440;
        }
    }
    ctx->pc = 0x294414u;
    // 0x294414: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x294414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x294418: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x294418u;
    {
        const bool branch_taken_0x294418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294418u;
        // 0x29441c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294418) {
            ctx->pc = 0x294440u;
            goto label_294440;
        }
    }
    ctx->pc = 0x294420u;
    // 0x294420: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x294420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x294424: 0x246390f8  addiu       $v1, $v1, -0x6F08
    ctx->pc = 0x294424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938872));
    // 0x294428: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x294428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x29442c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x29442cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x294430: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x294430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x294434: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x294434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x294438: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x294438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x29443c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29443cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_294440:
    // 0x294440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294444: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29444c: 0x3e00008  jr          $ra
    ctx->pc = 0x29444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29444Cu;
        // 0x294450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29444Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294454u;
}
