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

// Function: mmPlaceObject
// Address: 0x2487d0 - 0x24890c
void mmPlaceObject_0x2487d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmPlaceObject_0x2487d0");
#endif

    switch (ctx->pc) {
        case 0x248810u: goto label_248810;
        case 0x248828u: goto label_248828;
        case 0x248854u: goto label_248854;
        case 0x24886cu: goto label_24886c;
        case 0x2488a8u: goto label_2488a8;
        default: break;
    }

    ctx->pc = 0x2487d0u;

    // 0x2487d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2487d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2487d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2487d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2487d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2487d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2487dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2487dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2487e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2487e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2487e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2487e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2487e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2487e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2487ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2487ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2487f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2487f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2487f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2487f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2487f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2487f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2487fc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2487fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248800: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x248800u;
    {
        const bool branch_taken_0x248800 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x248804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248800u;
        // 0x248804: 0xffb50050  sd          $s5, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248800) {
            ctx->pc = 0x24884Cu;
            goto label_24884c;
        }
    }
    ctx->pc = 0x248808u;
    // 0x248808: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x248808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24880c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_248810:
    // 0x248810: 0x5455000c  bnel        $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x248810u;
    {
        const bool branch_taken_0x248810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x248810) {
            ctx->pc = 0x248814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248810u;
            // 0x248814: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248844u;
            goto label_248844;
        }
    }
    ctx->pc = 0x248818u;
    // 0x248818: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x248818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x24881c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x248820: 0xc092326  jal         func_248C98
    ctx->pc = 0x248820u;
    SET_GPR_U32(ctx, 31, 0x248828u);
    ctx->pc = 0x248824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248820u;
    // 0x248824: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C98u, 0x248820u, 0x248828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248828u;
label_248828:
    // 0x248828: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x248828u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24882c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x248830: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248830u;
    {
        const bool branch_taken_0x248830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248830u;
        // 0x248834: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248830) {
            ctx->pc = 0x248840u;
            goto label_248840;
        }
    }
    ctx->pc = 0x248838u;
    // 0x248838: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x248838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24883c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x24883cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_248840:
    // 0x248840: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x248840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_248844:
    // 0x248844: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x248844u;
    {
        const bool branch_taken_0x248844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x248844) {
            ctx->pc = 0x248848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248844u;
            // 0x248848: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248810;
        }
    }
    ctx->pc = 0x24884Cu;
label_24884c:
    // 0x24884c: 0xc092308  jal         func_248C20
    ctx->pc = 0x24884Cu;
    SET_GPR_U32(ctx, 31, 0x248854u);
    ctx->pc = 0x248C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248C20u, 0x24884Cu, 0x248854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248854u;
label_248854:
    // 0x248854: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x248854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x248858: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x248858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x24885c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24885Cu;
    {
        const bool branch_taken_0x24885c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24885Cu;
        // 0x248860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24885c) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248864u;
    // 0x248864: 0xc091f0e  jal         func_247C38
    ctx->pc = 0x248864u;
    SET_GPR_U32(ctx, 31, 0x24886Cu);
    ctx->pc = 0x247C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C38u, 0x248864u, 0x24886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24886Cu;
label_24886c:
    // 0x24886c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x24886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x248870: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x248870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x248874: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x248874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x248878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24887c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x248880: 0x2c421ffd  sltiu       $v0, $v0, 0x1FFD
    ctx->pc = 0x248880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8189) ? 1 : 0);
    // 0x248884: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x248884u;
    {
        const bool branch_taken_0x248884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248884) {
            ctx->pc = 0x248888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248884u;
            // 0x248888: 0x8e620038  lw          $v0, 0x38($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248894u;
            goto label_248894;
        }
    }
    ctx->pc = 0x24888Cu;
    // 0x24888c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24888Cu;
    {
        const bool branch_taken_0x24888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24888Cu;
        // 0x248890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24888c) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248894u;
label_248894:
    // 0x248894: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x248894u;
    {
        const bool branch_taken_0x248894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248894u;
        // 0x248898: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248894) {
            ctx->pc = 0x2488CCu;
            goto label_2488cc;
        }
    }
    ctx->pc = 0x24889Cu;
    // 0x24889c: 0x8f84a128  lw          $a0, -0x5ED8($gp)
    ctx->pc = 0x24889cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943016)));
    // 0x2488a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2488a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2488a4: 0x8f85a12c  lw          $a1, -0x5ED4($gp)
    ctx->pc = 0x2488a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
label_2488a8:
    // 0x2488a8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2488a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2488ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2488acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2488b0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2488b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2488b4: 0xaf84a128  sw          $a0, -0x5ED8($gp)
    ctx->pc = 0x2488b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943016), GPR_U32(ctx, 4));
    // 0x2488b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2488b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2488bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2488BCu;
    {
        const bool branch_taken_0x2488bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2488bc) {
            ctx->pc = 0x2488A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2488a8;
        }
    }
    ctx->pc = 0x2488C4u;
    // 0x2488c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2488C4u;
    {
        const bool branch_taken_0x2488c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488C4u;
        // 0x2488c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488c4) {
            ctx->pc = 0x2488D8u;
            goto label_2488d8;
        }
    }
    ctx->pc = 0x2488CCu;
label_2488cc:
    // 0x2488cc: 0x8f84a128  lw          $a0, -0x5ED8($gp)
    ctx->pc = 0x2488ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943016)));
    // 0x2488d0: 0x8f85a12c  lw          $a1, -0x5ED4($gp)
    ctx->pc = 0x2488d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x2488d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2488d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2488d8:
    // 0x2488d8: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x2488d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x2488dc: 0xaf93a12c  sw          $s3, -0x5ED4($gp)
    ctx->pc = 0x2488dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943020), GPR_U32(ctx, 19));
    // 0x2488e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2488e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2488e4: 0xaf84a128  sw          $a0, -0x5ED8($gp)
    ctx->pc = 0x2488e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943016), GPR_U32(ctx, 4));
label_2488e8:
    // 0x2488e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2488e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2488ec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2488ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2488f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2488f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2488f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2488f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2488f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2488f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2488fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2488fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248904: 0x3e00008  jr          $ra
    ctx->pc = 0x248904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248904u;
        // 0x248908: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24890Cu;
}
