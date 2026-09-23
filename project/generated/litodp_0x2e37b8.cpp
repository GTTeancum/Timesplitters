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

// Function: litodp
// Address: 0x2e37b8 - 0x2e3870
void litodp_0x2e37b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("litodp_0x2e37b8");
#endif

    switch (ctx->pc) {
        case 0x2e3838u: goto label_2e3838;
        case 0x2e3864u: goto label_2e3864;
        default: break;
    }

    ctx->pc = 0x2e37b8u;

    // 0x2e37b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e37b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e37bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e37c0: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2e37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e37c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e37c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e37c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e37c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e37cc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E37CCu;
    {
        const bool branch_taken_0x2e37cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37CCu;
        // 0x2e37d0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37cc) {
            ctx->pc = 0x2E37E0u;
            goto label_2e37e0;
        }
    }
    ctx->pc = 0x2E37D4u;
    // 0x2e37d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e37d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E37D8u;
    {
        const bool branch_taken_0x2e37d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37D8u;
        // 0x2e37dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37d8) {
            ctx->pc = 0x2E385Cu;
            goto label_2e385c;
        }
    }
    ctx->pc = 0x2E37E0u;
label_2e37e0:
    // 0x2e37e0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2e37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e37e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E37E4u;
    {
        const bool branch_taken_0x2e37e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37E4u;
        // 0x2e37e8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37e4) {
            ctx->pc = 0x2E3810u;
            goto label_2e3810;
        }
    }
    ctx->pc = 0x2E37ECu;
    // 0x2e37ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e37f0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E37F0u;
    {
        const bool branch_taken_0x2e37f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37F0u;
        // 0x2e37f4: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37f0) {
            ctx->pc = 0x2E3808u;
            goto label_2e3808;
        }
    }
    ctx->pc = 0x2E37F8u;
    // 0x2e37f8: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x2e37f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x2e37fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e37fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e3800: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E3800u;
    {
        const bool branch_taken_0x2e3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3800u;
        // 0x2e3804: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3800) {
            ctx->pc = 0x2E3868u;
            goto label_2e3868;
        }
    }
    ctx->pc = 0x2E3808u;
label_2e3808:
    // 0x2e3808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3808u;
    {
        const bool branch_taken_0x2e3808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3808u;
        // 0x2e380c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3808) {
            ctx->pc = 0x2E3814u;
            goto label_2e3814;
        }
    }
    ctx->pc = 0x2E3810u;
label_2e3810:
    // 0x2e3810: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2e3810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_2e3814:
    // 0x2e3814: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x2e3814u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3818: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e3818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e381c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2e381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2e3820: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2e3820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e3824: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E3824u;
    {
        const bool branch_taken_0x2e3824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3824u;
        // 0x2e3828: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3824) {
            ctx->pc = 0x2E385Cu;
            goto label_2e385c;
        }
    }
    ctx->pc = 0x2E382Cu;
    // 0x2e382c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e382cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3830: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2e3830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x2e3834: 0x0  nop
    ctx->pc = 0x2e3834u;
    // NOP
label_2e3838:
    // 0x2e3838: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x2e3838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x2e383c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e3840: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2e3840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3844: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2e3844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3848: 0x0  nop
    ctx->pc = 0x2e3848u;
    // NOP
    // 0x2e384c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E384Cu;
    {
        const bool branch_taken_0x2e384c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e384c) {
            ctx->pc = 0x2E3838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3838;
        }
    }
    ctx->pc = 0x2E3854u;
    // 0x2e3854: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2e3854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2e3858: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x2e3858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_2e385c:
    // 0x2e385c: 0xc0b8b5c  jal         func_2E2D70
    ctx->pc = 0x2E385Cu;
    SET_GPR_U32(ctx, 31, 0x2E3864u);
    ctx->pc = 0x2E3860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E385Cu;
    // 0x2e3860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D70u, 0x2E385Cu, 0x2E3864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3864u;
label_2e3864:
    // 0x2e3864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e3864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e3868:
    // 0x2e3868: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3868u;
        // 0x2e386c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3870u;
}
