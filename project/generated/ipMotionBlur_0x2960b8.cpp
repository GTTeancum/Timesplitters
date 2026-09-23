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

// Function: ipMotionBlur
// Address: 0x2960b8 - 0x296120
void ipMotionBlur_0x2960b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipMotionBlur_0x2960b8");
#endif

    switch (ctx->pc) {
        case 0x2960ccu: goto label_2960cc;
        case 0x2960d4u: goto label_2960d4;
        case 0x296110u: goto label_296110;
        default: break;
    }

    ctx->pc = 0x2960b8u;

    // 0x2960b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2960b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2960bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2960bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2960c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2960c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2960c4: 0xc0a57e8  jal         func_295FA0
    ctx->pc = 0x2960C4u;
    SET_GPR_U32(ctx, 31, 0x2960CCu);
    ctx->pc = 0x2960C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2960C4u;
    // 0x2960c8: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295FA0u, 0x2960C4u, 0x2960CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960CCu;
label_2960cc:
    // 0x2960cc: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2960CCu;
    SET_GPR_U32(ctx, 31, 0x2960D4u);
    ctx->pc = 0x2960D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2960CCu;
    // 0x2960d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2960CCu, 0x2960D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960D4u;
label_2960d4:
    // 0x2960d4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2960d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x2960d8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2960d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2960dc: 0x24a399f0  addiu       $v1, $a1, -0x6610
    ctx->pc = 0x2960dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x2960e0: 0x8ca499f0  lw          $a0, -0x6610($a1)
    ctx->pc = 0x2960e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2960e4: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x2960e4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A08u));
    // 0x2960e8: 0x34427f00  ori         $v0, $v0, 0x7F00
    ctx->pc = 0x2960e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32512);
    // 0x2960ec: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x2960ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A04u));
    // 0x2960f0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2960f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2960f4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2960f4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3299F4u));
    // 0x2960f8: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2960fc: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2960fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x296100: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x296100u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x296104: 0x65100  sll         $t2, $a2, 4
    ctx->pc = 0x296104u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x296108: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x296108u;
    SET_GPR_U32(ctx, 31, 0x296110u);
    ctx->pc = 0x29610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296108u;
    // 0x29610c: 0x75900  sll         $t3, $a3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x296108u, 0x296110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296110u;
label_296110:
    // 0x296110: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296114: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x296114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296118: 0x3e00008  jr          $ra
    ctx->pc = 0x296118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296118u;
        // 0x29611c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296120u;
}
