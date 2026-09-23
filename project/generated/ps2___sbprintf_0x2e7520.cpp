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
// Address: 0x2e7520 - 0x2e75d4
void ps2___sbprintf_0x2e7520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sbprintf_0x2e7520");
#endif

    switch (ctx->pc) {
        case 0x2e7584u: goto label_2e7584;
        case 0x2e7598u: goto label_2e7598;
        default: break;
    }

    ctx->pc = 0x2e7520u;

    // 0x2e7520: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x2e7520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x2e7524: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x2e7524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e7528: 0xffb10470  sd          $s1, 0x470($sp)
    ctx->pc = 0x2e7528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 17));
    // 0x2e752c: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x2e752cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7530: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x2e7530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x2e7534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7538: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x2e7538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x2e753c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7540: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2e7540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e7544: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x2e7544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2e7548: 0x9629000e  lhu         $t1, 0xE($s1)
    ctx->pc = 0x2e7548u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2e754c: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2e754cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2e7550: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x2e7550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2e7554: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2e7554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2e7558: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x2e7558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x2e755c: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x2e755cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7560: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x2e7560u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x2e7564: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x2e7564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x2e7568: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2e7568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2e756c: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x2e756cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x2e7570: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x2e7570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x2e7574: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x2e7574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x2e7578: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x2e7578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x2e757c: 0xc0b9d76  jal         func_2E75D8
    ctx->pc = 0x2E757Cu;
    SET_GPR_U32(ctx, 31, 0x2E7584u);
    ctx->pc = 0x2E7580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E757Cu;
    // 0x2e7580: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E75D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E75D8u, 0x2E757Cu, 0x2E7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7584u;
label_2e7584:
    // 0x2e7584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7588: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7588u;
    {
        const bool branch_taken_0x2e7588 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7588u;
        // 0x2e758c: 0x97a2000c  lhu         $v0, 0xC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7588) {
            ctx->pc = 0x2E75A4u;
            goto label_2e75a4;
        }
    }
    ctx->pc = 0x2E7590u;
    // 0x2e7590: 0xc0bac14  jal         func_2EB050
    ctx->pc = 0x2E7590u;
    SET_GPR_U32(ctx, 31, 0x2E7598u);
    ctx->pc = 0x2E7594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7590u;
    // 0x2e7594: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB050u, 0x2E7590u, 0x2E7598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7598u;
label_2e7598:
    // 0x2e7598: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e7598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e759c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2e759cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2e75a0: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x2e75a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
label_2e75a4:
    // 0x2e75a4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2e75a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2e75a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E75A8u;
    {
        const bool branch_taken_0x2e75a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75A8u;
        // 0x2e75ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75a8) {
            ctx->pc = 0x2E75C0u;
            goto label_2e75c0;
        }
    }
    ctx->pc = 0x2E75B0u;
    // 0x2e75b0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2e75b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e75b4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2e75b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2e75b8: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x2e75b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e75bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e75bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e75c0:
    // 0x2e75c0: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x2e75c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2e75c4: 0xdfb10470  ld          $s1, 0x470($sp)
    ctx->pc = 0x2e75c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2e75c8: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x2e75c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2e75cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E75CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75CCu;
        // 0x2e75d0: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E75CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E75D4u;
}
