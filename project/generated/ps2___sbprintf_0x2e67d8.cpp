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

// Function: __sbprintf
// Address: 0x2e67d8 - 0x2e688c
void ps2___sbprintf_0x2e67d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sbprintf_0x2e67d8");
#endif

    switch (ctx->pc) {
        case 0x2e683cu: goto label_2e683c;
        case 0x2e6850u: goto label_2e6850;
        default: break;
    }

    ctx->pc = 0x2e67d8u;

    // 0x2e67d8: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x2e67d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x2e67dc: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x2e67dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e67e0: 0xffb10470  sd          $s1, 0x470($sp)
    ctx->pc = 0x2e67e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 17));
    // 0x2e67e4: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x2e67e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e67e8: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x2e67e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x2e67ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e67ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67f0: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x2e67f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x2e67f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e67f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67f8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2e67f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e67fc: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x2e67fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2e6800: 0x9629000e  lhu         $t1, 0xE($s1)
    ctx->pc = 0x2e6800u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2e6804: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2e6804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2e6808: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x2e6808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2e680c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2e680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2e6810: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x2e6810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x2e6814: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x2e6814u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e6818: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x2e6818u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x2e681c: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x2e681cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x2e6820: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2e6820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2e6824: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x2e6824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x2e6828: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x2e6828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x2e682c: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x2e682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x2e6830: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x2e6830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x2e6834: 0xc0b9a24  jal         func_2E6890
    ctx->pc = 0x2E6834u;
    SET_GPR_U32(ctx, 31, 0x2E683Cu);
    ctx->pc = 0x2E6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6834u;
    // 0x2e6838: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6890u, 0x2E6834u, 0x2E683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E683Cu;
label_2e683c:
    // 0x2e683c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e683cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6840: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6840u;
    {
        const bool branch_taken_0x2e6840 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6840u;
        // 0x2e6844: 0x97a2000c  lhu         $v0, 0xC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6840) {
            ctx->pc = 0x2E685Cu;
            goto label_2e685c;
        }
    }
    ctx->pc = 0x2E6848u;
    // 0x2e6848: 0xc0bac14  jal         func_2EB050
    ctx->pc = 0x2E6848u;
    SET_GPR_U32(ctx, 31, 0x2E6850u);
    ctx->pc = 0x2E684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6848u;
    // 0x2e684c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB050u, 0x2E6848u, 0x2E6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6850u;
label_2e6850:
    // 0x2e6850: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e6850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6854: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2e6854u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2e6858: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x2e6858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
label_2e685c:
    // 0x2e685c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2e685cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2e6860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6860u;
    {
        const bool branch_taken_0x2e6860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6860u;
        // 0x2e6864: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6860) {
            ctx->pc = 0x2E6878u;
            goto label_2e6878;
        }
    }
    ctx->pc = 0x2E6868u;
    // 0x2e6868: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2e6868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e686c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2e686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2e6870: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x2e6870u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e6874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e6874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6878:
    // 0x2e6878: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x2e6878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2e687c: 0xdfb10470  ld          $s1, 0x470($sp)
    ctx->pc = 0x2e687cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2e6880: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x2e6880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2e6884: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6884u;
        // 0x2e6888: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E688Cu;
}
