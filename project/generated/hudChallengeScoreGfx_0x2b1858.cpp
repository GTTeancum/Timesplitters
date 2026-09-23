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

// Function: hudChallengeScoreGfx
// Address: 0x2b1858 - 0x2b18fc
void hudChallengeScoreGfx_0x2b1858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudChallengeScoreGfx_0x2b1858");
#endif

    switch (ctx->pc) {
        case 0x2b1894u: goto label_2b1894;
        case 0x2b18a8u: goto label_2b18a8;
        case 0x2b18dcu: goto label_2b18dc;
        case 0x2b18e4u: goto label_2b18e4;
        default: break;
    }

    ctx->pc = 0x2b1858u;

    // 0x2b1858: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b1858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b185c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b1860: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b1860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2b1864: 0x244599f0  addiu       $a1, $v0, -0x6610
    ctx->pc = 0x2b1864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x2b1868: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b1868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b186c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2b186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b1870: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b1870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b1874: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b1874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1878: 0x8c4799f0  lw          $a3, -0x6610($v0)
    ctx->pc = 0x2b1878u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2b187c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b187cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1880: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x2b1880u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x329A48u));
    // 0x2b1884: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x2b1884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2b1888: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x2b1888u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x2b188c: 0xc087ce0  jal         func_21F380
    ctx->pc = 0x2B188Cu;
    SET_GPR_U32(ctx, 31, 0x2B1894u);
    ctx->pc = 0x2B1890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B188Cu;
    // 0x2b1890: 0xe38021  addu        $s0, $a3, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F380u, 0x2B188Cu, 0x2B1894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1894u;
label_2b1894:
    // 0x2b1894: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1898: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B1898u;
    {
        const bool branch_taken_0x2b1898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1898u;
        // 0x2b189c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1898) {
            ctx->pc = 0x2B18E8u;
            goto label_2b18e8;
        }
    }
    ctx->pc = 0x2B18A0u;
    // 0x2b18a0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B18A0u;
    SET_GPR_U32(ctx, 31, 0x2B18A8u);
    ctx->pc = 0x2B18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B18A0u;
    // 0x2b18a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B18A0u, 0x2B18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18A8u;
label_2b18a8:
    // 0x2b18a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b18a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b18acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b18b0: 0x3c0a5050  lui         $t2, 0x5050
    ctx->pc = 0x2b18b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20560 << 16));
    // 0x2b18b4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2b18b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2b18b8: 0x3c0b7f7f  lui         $t3, 0x7F7F
    ctx->pc = 0x2b18b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32639 << 16));
    // 0x2b18bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b18bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b18c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18c4: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x2b18c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2b18c8: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x2b18c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b18cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2b18ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2b18d0: 0x354a5080  ori         $t2, $t2, 0x5080
    ctx->pc = 0x2b18d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)20608);
    // 0x2b18d4: 0xc0ac508  jal         func_2B1420
    ctx->pc = 0x2B18D4u;
    SET_GPR_U32(ctx, 31, 0x2B18DCu);
    ctx->pc = 0x2B18D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B18D4u;
    // 0x2b18d8: 0x356b7f80  ori         $t3, $t3, 0x7F80 (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32640);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1420u, 0x2B18D4u, 0x2B18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18DCu;
label_2b18dc:
    // 0x2b18dc: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B18DCu;
    SET_GPR_U32(ctx, 31, 0x2B18E4u);
    ctx->pc = 0x2B18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B18DCu;
    // 0x2b18e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B18DCu, 0x2B18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18E4u;
label_2b18e4:
    // 0x2b18e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b18e8:
    // 0x2b18e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b18e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b18ec: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b18ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b18f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b18f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b18f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B18F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18F4u;
        // 0x2b18f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B18F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B18FCu;
}
