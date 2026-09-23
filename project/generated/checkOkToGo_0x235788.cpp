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

// Function: checkOkToGo
// Address: 0x235788 - 0x235994
void checkOkToGo_0x235788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkOkToGo_0x235788");
#endif

    switch (ctx->pc) {
        case 0x2357ccu: goto label_2357cc;
        case 0x2357f4u: goto label_2357f4;
        case 0x235830u: goto label_235830;
        case 0x235918u: goto label_235918;
        case 0x235924u: goto label_235924;
        case 0x235974u: goto label_235974;
        default: break;
    }

    ctx->pc = 0x235788u;

    // 0x235788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23578c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23578cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x235790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x235794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x235798: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x235798u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x23579c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2357a0: 0x260211f8  addiu       $v0, $s0, 0x11F8
    ctx->pc = 0x2357a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
    // 0x2357a4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2357a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FC1228u));
    // 0x2357a8: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2357A8u;
    {
        const bool branch_taken_0x2357a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2357ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357A8u;
        // 0x2357ac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357a8) {
            ctx->pc = 0x2357ECu;
            goto label_2357ec;
        }
    }
    ctx->pc = 0x2357B0u;
    // 0x2357b0: 0x10820072  beq         $a0, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2357B0u;
    {
        const bool branch_taken_0x2357b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2357B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357B0u;
        // 0x2357b4: 0x3c110035  lui         $s1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357b0) {
            ctx->pc = 0x23597Cu;
            goto label_23597c;
        }
    }
    ctx->pc = 0x2357B8u;
    // 0x2357b8: 0x8e223838  lw          $v0, 0x3838($s1)
    ctx->pc = 0x2357b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14392)));
    // 0x2357bc: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2357BCu;
    {
        const bool branch_taken_0x2357bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357BCu;
        // 0x2357c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357bc) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x2357C4u;
    // 0x2357c4: 0xc08d564  jal         func_235590
    ctx->pc = 0x2357C4u;
    SET_GPR_U32(ctx, 31, 0x2357CCu);
    ctx->pc = 0x2357C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357C4u;
    // 0x2357c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x2357C4u, 0x2357CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357CCu;
label_2357cc:
    // 0x2357cc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2357CCu;
    {
        const bool branch_taken_0x2357cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2357D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357CCu;
        // 0x2357d0: 0x260511f8  addiu       $a1, $s0, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357cc) {
            ctx->pc = 0x235890u;
            goto label_235890;
        }
    }
    ctx->pc = 0x2357D4u;
    // 0x2357d4: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x2357d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x2357d8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2357d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2357dc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2357DCu;
    {
        const bool branch_taken_0x2357dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357DCu;
        // 0x2357e0: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357dc) {
            ctx->pc = 0x235890u;
            goto label_235890;
        }
    }
    ctx->pc = 0x2357E4u;
    // 0x2357e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2357E4u;
    {
        const bool branch_taken_0x2357e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357E4u;
        // 0x2357e8: 0x3c03002f  lui         $v1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357e4) {
            ctx->pc = 0x235868u;
            goto label_235868;
        }
    }
    ctx->pc = 0x2357ECu;
label_2357ec:
    // 0x2357ec: 0xc08d564  jal         func_235590
    ctx->pc = 0x2357ECu;
    SET_GPR_U32(ctx, 31, 0x2357F4u);
    ctx->pc = 0x2357F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357ECu;
    // 0x2357f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x2357ECu, 0x2357F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357F4u;
label_2357f4:
    // 0x2357f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2357F4u;
    {
        const bool branch_taken_0x2357f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2357F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357F4u;
        // 0x2357f8: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357f4) {
            ctx->pc = 0x235828u;
            goto label_235828;
        }
    }
    ctx->pc = 0x2357FCu;
    // 0x2357fc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2357fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x235800: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x235800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x235804: 0x3c066464  lui         $a2, 0x6464
    ctx->pc = 0x235804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25700 << 16));
    // 0x235808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x235808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23580c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235814: 0x34c6647f  ori         $a2, $a2, 0x647F
    ctx->pc = 0x235814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25727);
    // 0x235818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23581c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23581cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235820: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x235820u;
    {
        const bool branch_taken_0x235820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235820u;
        // 0x235824: 0x8c6506b4  lw          $a1, 0x6B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235820) {
            ctx->pc = 0x23596Cu;
            goto label_23596c;
        }
    }
    ctx->pc = 0x235828u;
label_235828:
    // 0x235828: 0xc08d564  jal         func_235590
    ctx->pc = 0x235828u;
    SET_GPR_U32(ctx, 31, 0x235830u);
    ctx->pc = 0x23582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235828u;
    // 0x23582c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x235828u, 0x235830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235830u;
label_235830:
    // 0x235830: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x235830u;
    {
        const bool branch_taken_0x235830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235830u;
        // 0x235834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235830) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x235838u;
    // 0x235838: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x235838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23583c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x23583cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x235840: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x235840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x235844: 0x3c066464  lui         $a2, 0x6464
    ctx->pc = 0x235844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25700 << 16));
    // 0x235848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x235848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23584c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235854: 0x34c6647f  ori         $a2, $a2, 0x647F
    ctx->pc = 0x235854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25727);
    // 0x235858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23585c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23585cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235860: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x235860u;
    {
        const bool branch_taken_0x235860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235860u;
        // 0x235864: 0x8c6506b8  lw          $a1, 0x6B8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235860) {
            ctx->pc = 0x23596Cu;
            goto label_23596c;
        }
    }
    ctx->pc = 0x235868u;
label_235868:
    // 0x235868: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x235868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23586c: 0x3c066464  lui         $a2, 0x6464
    ctx->pc = 0x23586cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25700 << 16));
    // 0x235870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x235870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235874: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23587c: 0x34c6647f  ori         $a2, $a2, 0x647F
    ctx->pc = 0x23587cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25727);
    // 0x235880: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x235884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235888: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x235888u;
    {
        const bool branch_taken_0x235888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235888u;
        // 0x23588c: 0x8c6506bc  lw          $a1, 0x6BC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235888) {
            ctx->pc = 0x23596Cu;
            goto label_23596c;
        }
    }
    ctx->pc = 0x235890u;
label_235890:
    // 0x235890: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x235890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x235894: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x235894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x235898: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x235898u;
    {
        const bool branch_taken_0x235898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235898u;
        // 0x23589c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235898) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x2358A0u;
    // 0x2358a0: 0x8f82a0d0  lw          $v0, -0x5F30($gp)
    ctx->pc = 0x2358a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x2358a4: 0x3c030132  lui         $v1, 0x132
    ctx->pc = 0x2358a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)306 << 16));
    // 0x2358a8: 0x34634626  ori         $v1, $v1, 0x4626
    ctx->pc = 0x2358a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17958);
    // 0x2358ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2358acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2358b0: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2358B0u;
    {
        const bool branch_taken_0x2358b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2358B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358B0u;
        // 0x2358b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358b0) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x2358B8u;
    // 0x2358b8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2358b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2358bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2358bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2358c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2358C0u;
    {
        const bool branch_taken_0x2358c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2358C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358C0u;
        // 0x2358c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358c0) {
            ctx->pc = 0x2358D0u;
            goto label_2358d0;
        }
    }
    ctx->pc = 0x2358C8u;
    // 0x2358c8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2358C8u;
    {
        const bool branch_taken_0x2358c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2358CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358C8u;
        // 0x2358cc: 0x260411f8  addiu       $a0, $s0, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358c8) {
            ctx->pc = 0x2358ECu;
            goto label_2358ec;
        }
    }
    ctx->pc = 0x2358D0u;
label_2358d0:
    // 0x2358d0: 0x8e223838  lw          $v0, 0x3838($s1)
    ctx->pc = 0x2358d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14392)));
    // 0x2358d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2358D4u;
    {
        const bool branch_taken_0x2358d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358D4u;
        // 0x2358d8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358d4) {
            ctx->pc = 0x2358E8u;
            goto label_2358e8;
        }
    }
    ctx->pc = 0x2358DCu;
    // 0x2358dc: 0x8c433888  lw          $v1, 0x3888($v0)
    ctx->pc = 0x2358dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14472)));
    // 0x2358e0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2358E0u;
    {
        const bool branch_taken_0x2358e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2358E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358E0u;
        // 0x2358e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358e0) {
            ctx->pc = 0x235910u;
            goto label_235910;
        }
    }
    ctx->pc = 0x2358E8u;
label_2358e8:
    // 0x2358e8: 0x260411f8  addiu       $a0, $s0, 0x11F8
    ctx->pc = 0x2358e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
label_2358ec:
    // 0x2358ec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2358ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2358f0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2358f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2358f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2358f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2358f8: 0x2442c3a8  addiu       $v0, $v0, -0x3C58
    ctx->pc = 0x2358f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951848));
    // 0x2358fc: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2358fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x235900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x235900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235904: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x235904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x235908: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x235908u;
    {
        const bool branch_taken_0x235908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235908u;
        // 0x23590c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235908) {
            ctx->pc = 0x23597Cu;
            goto label_23597c;
        }
    }
    ctx->pc = 0x235910u;
label_235910:
    // 0x235910: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x235910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235914: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x235914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_235918:
    // 0x235918: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x235918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x23591c: 0xc094dec  jal         func_2537B0
    ctx->pc = 0x23591Cu;
    SET_GPR_U32(ctx, 31, 0x235924u);
    ctx->pc = 0x235920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23591Cu;
    // 0x235920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2537B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2537B0u, 0x23591Cu, 0x235924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235924u;
label_235924:
    // 0x235924: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x235924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x235928: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x235928u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x23592c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x23592cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x235930: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x235930u;
    {
        const bool branch_taken_0x235930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235930u;
        // 0x235934: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235930) {
            ctx->pc = 0x235918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235918;
        }
    }
    ctx->pc = 0x235938u;
    // 0x235938: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x235938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23593c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23593Cu;
    {
        const bool branch_taken_0x23593c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23593Cu;
        // 0x235940: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23593c) {
            ctx->pc = 0x23597Cu;
            goto label_23597c;
        }
    }
    ctx->pc = 0x235944u;
    // 0x235944: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x235944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x235948: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x235948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23594c: 0x3c066464  lui         $a2, 0x6464
    ctx->pc = 0x23594cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25700 << 16));
    // 0x235950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x235950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235954: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23595c: 0x34c6647f  ori         $a2, $a2, 0x647F
    ctx->pc = 0x23595cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25727);
    // 0x235960: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x235964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235968: 0x8c6506c0  lw          $a1, 0x6C0($v1)
    ctx->pc = 0x235968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1728)));
label_23596c:
    // 0x23596c: 0xc08c516  jal         func_231458
    ctx->pc = 0x23596Cu;
    SET_GPR_U32(ctx, 31, 0x235974u);
    ctx->pc = 0x231458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231458u, 0x23596Cu, 0x235974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235974u;
label_235974:
    // 0x235974: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235974u;
    {
        const bool branch_taken_0x235974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235974u;
        // 0x235978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235974) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x23597Cu;
label_23597c:
    // 0x23597c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235980:
    // 0x235980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235984: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x235984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23598c: 0x3e00008  jr          $ra
    ctx->pc = 0x23598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23598Cu;
        // 0x235990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23598Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235994u;
}
