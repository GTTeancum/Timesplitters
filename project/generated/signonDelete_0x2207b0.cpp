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

// Function: signonDelete
// Address: 0x2207b0 - 0x22088c
void signonDelete_0x2207b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonDelete_0x2207b0");
#endif

    switch (ctx->pc) {
        case 0x2207d0u: goto label_2207d0;
        case 0x2207d8u: goto label_2207d8;
        case 0x2207f0u: goto label_2207f0;
        case 0x220808u: goto label_220808;
        case 0x220844u: goto label_220844;
        case 0x220864u: goto label_220864;
        default: break;
    }

    ctx->pc = 0x2207b0u;

    // 0x2207b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2207b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2207b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2207b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2207b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2207b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2207bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2207bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2207c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2207c4: 0x2a32008f  slti        $s2, $s1, 0x8F
    ctx->pc = 0x2207c4u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)143) ? 1 : 0);
    // 0x2207c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2207c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2207cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2207ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2207d0:
    // 0x2207d0: 0xc08828c  jal         func_220A30
    ctx->pc = 0x2207D0u;
    SET_GPR_U32(ctx, 31, 0x2207D8u);
    ctx->pc = 0x2207D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2207D0u;
    // 0x2207d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x2207D0u, 0x2207D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2207D8u;
label_2207d8:
    // 0x2207d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2207d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207dc: 0x14b10006  bne         $a1, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2207DCu;
    {
        const bool branch_taken_0x2207dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x2207E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207DCu;
        // 0x2207e0: 0x225102a  slt         $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207dc) {
            ctx->pc = 0x2207F8u;
            goto label_2207f8;
        }
    }
    ctx->pc = 0x2207E4u;
    // 0x2207e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2207e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207e8: 0xc08824c  jal         func_220930
    ctx->pc = 0x2207E8u;
    SET_GPR_U32(ctx, 31, 0x2207F0u);
    ctx->pc = 0x2207ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2207E8u;
    // 0x2207ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220930u, 0x2207E8u, 0x2207F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2207F0u;
label_2207f0:
    // 0x2207f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2207F0u;
    {
        const bool branch_taken_0x2207f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2207F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207F0u;
        // 0x2207f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207f0) {
            ctx->pc = 0x22080Cu;
            goto label_22080c;
        }
    }
    ctx->pc = 0x2207F8u;
label_2207f8:
    // 0x2207f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2207F8u;
    {
        const bool branch_taken_0x2207f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207F8u;
        // 0x2207fc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207f8) {
            ctx->pc = 0x220808u;
            goto label_220808;
        }
    }
    ctx->pc = 0x220800u;
    // 0x220800: 0xc08824c  jal         func_220930
    ctx->pc = 0x220800u;
    SET_GPR_U32(ctx, 31, 0x220808u);
    ctx->pc = 0x220804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220800u;
    // 0x220804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220930u, 0x220800u, 0x220808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220808u;
label_220808:
    // 0x220808: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x220808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22080c:
    // 0x22080c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x22080cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x220810: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x220810u;
    {
        const bool branch_taken_0x220810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220810) {
            ctx->pc = 0x2207D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2207d0;
        }
    }
    ctx->pc = 0x220818u;
    // 0x220818: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x220818u;
    {
        const bool branch_taken_0x220818 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220818u;
        // 0x22081c: 0x24060b78  addiu       $a2, $zero, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220818) {
            ctx->pc = 0x220864u;
            goto label_220864;
        }
    }
    ctx->pc = 0x220820u;
    // 0x220820: 0x2410008f  addiu       $s0, $zero, 0x8F
    ctx->pc = 0x220820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x220824: 0x2262018  mult        $a0, $s1, $a2
    ctx->pc = 0x220824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x220828: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x220828u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22082c: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x22082cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x220830: 0x8f829dd8  lw          $v0, -0x6228($gp)
    ctx->pc = 0x220830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x220834: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x220834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x220838: 0x3012  mflo        $a2
    ctx->pc = 0x220838u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x22083c: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x22083Cu;
    SET_GPR_U32(ctx, 31, 0x220844u);
    ctx->pc = 0x220840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22083Cu;
    // 0x220840: 0x24850b78  addiu       $a1, $a0, 0xB78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x22083Cu, 0x220844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220844u;
label_220844:
    // 0x220844: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x220844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x220848: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x220848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x22084c: 0x2484e1c8  addiu       $a0, $a0, -0x1E38
    ctx->pc = 0x22084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959560));
    // 0x220850: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x220850u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x220854: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x220854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x220858: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x220858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22085c: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x22085Cu;
    SET_GPR_U32(ctx, 31, 0x220864u);
    ctx->pc = 0x220860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22085Cu;
    // 0x220860: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x22085Cu, 0x220864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220864u;
label_220864:
    // 0x220864: 0x8f829dd8  lw          $v0, -0x6228($gp)
    ctx->pc = 0x220864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x220868: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x220868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x22086c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22086cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220874: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x220874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220878: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x220878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22087c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22087cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220880: 0xa0406808  sb          $zero, 0x6808($v0)
    ctx->pc = 0x220880u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26632), (uint8_t)GPR_U32(ctx, 0));
    // 0x220884: 0x3e00008  jr          $ra
    ctx->pc = 0x220884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220884u;
        // 0x220888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22088Cu;
}
