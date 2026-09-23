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

// Function: huft_build
// Address: 0x21a7b0 - 0x21ad94
void huft_build_0x21a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("huft_build_0x21a7b0");
#endif

    switch (ctx->pc) {
        case 0x21a80cu: goto label_21a80c;
        case 0x21a810u: goto label_21a810;
        case 0x21a868u: goto label_21a868;
        case 0x21a8b0u: goto label_21a8b0;
        case 0x21a8f0u: goto label_21a8f0;
        case 0x21a960u: goto label_21a960;
        case 0x21a988u: goto label_21a988;
        case 0x21a9b8u: goto label_21a9b8;
        case 0x21aa30u: goto label_21aa30;
        case 0x21aa68u: goto label_21aa68;
        case 0x21aa78u: goto label_21aa78;
        case 0x21aab8u: goto label_21aab8;
        case 0x21ab0cu: goto label_21ab0c;
        case 0x21ac78u: goto label_21ac78;
        case 0x21acc8u: goto label_21acc8;
        case 0x21ad10u: goto label_21ad10;
        default: break;
    }

    ctx->pc = 0x21a7b0u;

    // 0x21a7b0: 0x27bdf930  addiu       $sp, $sp, -0x6D0
    ctx->pc = 0x21a7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965552));
    // 0x21a7b4: 0xffb30660  sd          $s3, 0x660($sp)
    ctx->pc = 0x21a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 19));
    // 0x21a7b8: 0xafa50570  sw          $a1, 0x570($sp)
    ctx->pc = 0x21a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 5));
    // 0x21a7bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21a7bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7c0: 0xffb20650  sd          $s2, 0x650($sp)
    ctx->pc = 0x21a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 18));
    // 0x21a7c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21a7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7c8: 0xafa60574  sw          $a2, 0x574($sp)
    ctx->pc = 0x21a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1396), GPR_U32(ctx, 6));
    // 0x21a7cc: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x21a7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7d0: 0xffb40670  sd          $s4, 0x670($sp)
    ctx->pc = 0x21a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 20));
    // 0x21a7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7d8: 0xffb10640  sd          $s1, 0x640($sp)
    ctx->pc = 0x21a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 17));
    // 0x21a7dc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x21a7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x21a7e0: 0xffbf06c0  sd          $ra, 0x6C0($sp)
    ctx->pc = 0x21a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 31));
    // 0x21a7e4: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x21a7e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7e8: 0xffbe06b0  sd          $fp, 0x6B0($sp)
    ctx->pc = 0x21a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 30));
    // 0x21a7ec: 0xffb706a0  sd          $s7, 0x6A0($sp)
    ctx->pc = 0x21a7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 23));
    // 0x21a7f0: 0xffb60690  sd          $s6, 0x690($sp)
    ctx->pc = 0x21a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 22));
    // 0x21a7f4: 0xffb50680  sd          $s5, 0x680($sp)
    ctx->pc = 0x21a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 21));
    // 0x21a7f8: 0xffb00630  sd          $s0, 0x630($sp)
    ctx->pc = 0x21a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 16));
    // 0x21a7fc: 0xafa70578  sw          $a3, 0x578($sp)
    ctx->pc = 0x21a7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1400), GPR_U32(ctx, 7));
    // 0x21a800: 0xafa8057c  sw          $t0, 0x57C($sp)
    ctx->pc = 0x21a800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1404), GPR_U32(ctx, 8));
    // 0x21a804: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x21A804u;
    SET_GPR_U32(ctx, 31, 0x21A80Cu);
    ctx->pc = 0x21A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A804u;
    // 0x21a808: 0xafa90580  sw          $t1, 0x580($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1408), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x21A804u, 0x21A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A80Cu;
label_21a80c:
    // 0x21a80c: 0x8fb10570  lw          $s1, 0x570($sp)
    ctx->pc = 0x21a80cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_21a810:
    // 0x21a810: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21a814: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21a814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x21a818: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x21a818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x21a81c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a820: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x21a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21a824: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21a824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a828: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21a82c: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21A82Cu;
    {
        const bool branch_taken_0x21a82c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A82Cu;
        // 0x21a830: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a82c) {
            ctx->pc = 0x21A810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a810;
        }
    }
    ctx->pc = 0x21A834u;
    // 0x21a834: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a838: 0x8fa30570  lw          $v1, 0x570($sp)
    ctx->pc = 0x21a838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x21a83c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A83Cu;
    {
        const bool branch_taken_0x21a83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A83Cu;
        // 0x21a840: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a83c) {
            ctx->pc = 0x21A858u;
            goto label_21a858;
        }
    }
    ctx->pc = 0x21A844u;
    // 0x21a844: 0x8fa40580  lw          $a0, 0x580($sp)
    ctx->pc = 0x21a844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x21a848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a84c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x21a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x21a850: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x21A850u;
    {
        const bool branch_taken_0x21a850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A850u;
        // 0x21a854: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a850) {
            ctx->pc = 0x21AD64u;
            goto label_21ad64;
        }
    }
    ctx->pc = 0x21A858u;
label_21a858:
    // 0x21a858: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21a858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a85c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21A85Cu;
    {
        const bool branch_taken_0x21a85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A85Cu;
        // 0x21a860: 0x8e560000  lw          $s6, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a85c) {
            ctx->pc = 0x21A890u;
            goto label_21a890;
        }
    }
    ctx->pc = 0x21A864u;
    // 0x21a864: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x21a864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21a868:
    // 0x21a868: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21a86c: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x21a86cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x21a870: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A870u;
    {
        const bool branch_taken_0x21a870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A870u;
        // 0x21a874: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a870) {
            ctx->pc = 0x21A894u;
            goto label_21a894;
        }
    }
    ctx->pc = 0x21A878u;
    // 0x21a878: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21a87c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a880: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21A880u;
    {
        const bool branch_taken_0x21a880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A880u;
        // 0x21a884: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a880) {
            ctx->pc = 0x21A868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a868;
        }
    }
    ctx->pc = 0x21A888u;
    // 0x21a888: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21A888u;
    {
        const bool branch_taken_0x21a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A888u;
        // 0x21a88c: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a888) {
            ctx->pc = 0x21A89Cu;
            goto label_21a89c;
        }
    }
    ctx->pc = 0x21A890u;
label_21a890:
    // 0x21a890: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x21a890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21a894:
    // 0x21a894: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x21a894u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a898: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x21a898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21a89c:
    // 0x21a89c: 0x2d7102b  sltu        $v0, $s6, $s7
    ctx->pc = 0x21a89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x21a8a0: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A8A0u;
    {
        const bool branch_taken_0x21a8a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8A0u;
        // 0x21a8a4: 0x2e2b00b  movn        $s6, $s7, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8a0) {
            ctx->pc = 0x21A8C4u;
            goto label_21a8c4;
        }
    }
    ctx->pc = 0x21A8A8u;
    // 0x21a8a8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x21a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21a8ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21a8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21a8b0:
    // 0x21a8b0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A8B0u;
    {
        const bool branch_taken_0x21a8b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8B0u;
        // 0x21a8b4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8b0) {
            ctx->pc = 0x21A8C4u;
            goto label_21a8c4;
        }
    }
    ctx->pc = 0x21A8B8u;
    // 0x21a8b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a8bc: 0x5040fffc  beql        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x21A8BCu;
    {
        const bool branch_taken_0x21a8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a8bc) {
            ctx->pc = 0x21A8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A8BCu;
            // 0x21a8c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a8b0;
        }
    }
    ctx->pc = 0x21A8C4u;
label_21a8c4:
    // 0x21a8c4: 0x220702d  daddu       $t6, $s1, $zero
    ctx->pc = 0x21a8c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a8cc: 0x1d6182b  sltu        $v1, $t6, $s6
    ctx->pc = 0x21a8ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x21a8d0: 0x2026004  sllv        $t4, $v0, $s0
    ctx->pc = 0x21a8d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21a8d4: 0x1c3b00b  movn        $s6, $t6, $v1
    ctx->pc = 0x21a8d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 14));
    // 0x21a8d8: 0x20e102b  sltu        $v0, $s0, $t6
    ctx->pc = 0x21a8d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x21a8dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21A8DCu;
    {
        const bool branch_taken_0x21a8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8DCu;
        // 0x21a8e0: 0xae560000  sw          $s6, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8dc) {
            ctx->pc = 0x21A910u;
            goto label_21a910;
        }
    }
    ctx->pc = 0x21A8E4u;
    // 0x21a8e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x21a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21a8e8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x21a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21a8ec: 0x0  nop
    ctx->pc = 0x21a8ecu;
    // NOP
label_21a8f0:
    // 0x21a8f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a8f4: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x21a8f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x21a8f8: 0x580000b  bltz        $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x21A8F8u;
    {
        const bool branch_taken_0x21a8f8 = (GPR_S32(ctx, 12) < 0);
        ctx->pc = 0x21A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8F8u;
        // 0x21a8fc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8f8) {
            ctx->pc = 0x21A928u;
            goto label_21a928;
        }
    }
    ctx->pc = 0x21A900u;
    // 0x21a900: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21a900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21a904: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x21a904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x21a908: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21A908u;
    {
        const bool branch_taken_0x21a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A908u;
        // 0x21a90c: 0xc6040  sll         $t4, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a908) {
            ctx->pc = 0x21A8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a8f0;
        }
    }
    ctx->pc = 0x21A910u;
label_21a910:
    // 0x21a910: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21a910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21a914: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21a914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21a918: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a91c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x21a91cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x21a920: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A920u;
    {
        const bool branch_taken_0x21a920 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x21A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A920u;
        // 0x21a924: 0x4c1021  addu        $v0, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a920) {
            ctx->pc = 0x21A930u;
            goto label_21a930;
        }
    }
    ctx->pc = 0x21A928u;
label_21a928:
    // 0x21a928: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x21A928u;
    {
        const bool branch_taken_0x21a928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A928u;
        // 0x21a92c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a928) {
            ctx->pc = 0x21AD64u;
            goto label_21ad64;
        }
    }
    ctx->pc = 0x21A930u;
label_21a930:
    // 0x21a930: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21a930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a934: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21a934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x21a938: 0x27b40004  addiu       $s4, $sp, 0x4
    ctx->pc = 0x21a938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x21a93c: 0xafa00524  sw          $zero, 0x524($sp)
    ctx->pc = 0x21a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1316), GPR_U32(ctx, 0));
    // 0x21a940: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21a940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x21a944: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x21A944u;
    {
        const bool branch_taken_0x21a944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A944u;
        // 0x21a948: 0x27a50528  addiu       $a1, $sp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a944) {
            ctx->pc = 0x21A990u;
            goto label_21a990;
        }
    }
    ctx->pc = 0x21A94Cu;
    // 0x21a94c: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x21a94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21a950: 0x163023  negu        $a2, $s6
    ctx->pc = 0x21a950u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x21a954: 0xafb20588  sw          $s2, 0x588($sp)
    ctx->pc = 0x21a954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1416), GPR_U32(ctx, 18));
    // 0x21a958: 0x1d7382a  slt         $a3, $t6, $s7
    ctx->pc = 0x21a958u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x21a95c: 0x0  nop
    ctx->pc = 0x21a95cu;
    // NOP
label_21a960:
    // 0x21a960: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21a964: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21a964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x21a968: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x21a968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x21a96c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x21a96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21a970: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x21a970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x21a974: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x21a974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x21a978: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21A978u;
    {
        const bool branch_taken_0x21a978 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a978) {
            ctx->pc = 0x21A960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a960;
        }
    }
    ctx->pc = 0x21A980u;
    // 0x21a980: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A980u;
    {
        const bool branch_taken_0x21a980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A980u;
        // 0x21a984: 0x8fa50588  lw          $a1, 0x588($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a980) {
            ctx->pc = 0x21A9A4u;
            goto label_21a9a4;
        }
    }
    ctx->pc = 0x21A988u;
label_21a988:
    // 0x21a988: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x21A988u;
    {
        const bool branch_taken_0x21a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A988u;
        // 0x21a98c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a988) {
            ctx->pc = 0x21AD64u;
            goto label_21ad64;
        }
    }
    ctx->pc = 0x21A990u;
label_21a990:
    // 0x21a990: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x21a990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21a994: 0x163023  negu        $a2, $s6
    ctx->pc = 0x21a994u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x21a998: 0xafb50588  sw          $s5, 0x588($sp)
    ctx->pc = 0x21a998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1416), GPR_U32(ctx, 21));
    // 0x21a99c: 0x1d7382a  slt         $a3, $t6, $s7
    ctx->pc = 0x21a99cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x21a9a0: 0x8fa50588  lw          $a1, 0x588($sp)
    ctx->pc = 0x21a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
label_21a9a4:
    // 0x21a9a4: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x21a9a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9ac: 0x27a80520  addiu       $t0, $sp, 0x520
    ctx->pc = 0x21a9acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x21a9b0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21a9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21a9b4: 0x0  nop
    ctx->pc = 0x21a9b4u;
    // NOP
label_21a9b8:
    // 0x21a9b8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A9B8u;
    {
        const bool branch_taken_0x21a9b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9B8u;
        // 0x21a9bc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9b8) {
            ctx->pc = 0x21A9E0u;
            goto label_21a9e0;
        }
    }
    ctx->pc = 0x21A9C0u;
    // 0x21a9c0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x21a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21a9c4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x21a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x21a9c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a9cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a9d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a9d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21a9d8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x21a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x21a9dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_21a9e0:
    // 0x21a9e0: 0x8fb80570  lw          $t8, 0x570($sp)
    ctx->pc = 0x21a9e0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x21a9e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21a9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21a9e8: 0x238102b  sltu        $v0, $s1, $t8
    ctx->pc = 0x21a9e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x21a9ec: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x21A9ECu;
    {
        const bool branch_taken_0x21a9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a9ec) {
            ctx->pc = 0x21A9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A9ECu;
            // 0x21a9f0: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a9b8;
        }
    }
    ctx->pc = 0x21A9F4u;
    // 0x21a9f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21a9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a9f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9fc: 0xafa00520  sw          $zero, 0x520($sp)
    ctx->pc = 0x21a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1312), GPR_U32(ctx, 0));
    // 0x21aa00: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x21aa00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21aa04: 0x8fb40588  lw          $s4, 0x588($sp)
    ctx->pc = 0x21aa04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
    // 0x21aa08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21aa08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa0c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x21aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x21aa10: 0x14e000d0  bnez        $a3, . + 4 + (0xD0 << 2)
    ctx->pc = 0x21AA10u;
    {
        const bool branch_taken_0x21aa10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA10u;
        // 0x21aa14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa10) {
            ctx->pc = 0x21AD54u;
            goto label_21ad54;
        }
    }
    ctx->pc = 0x21AA18u;
    // 0x21aa18: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x21aa18u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
    // 0x21aa1c: 0xafb90620  sw          $t9, 0x620($sp)
    ctx->pc = 0x21aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 25));
    // 0x21aa20: 0x3739ffff  ori         $t9, $t9, 0xFFFF
    ctx->pc = 0x21aa20u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)65535);
    // 0x21aa24: 0xafb90620  sw          $t9, 0x620($sp)
    ctx->pc = 0x21aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 25));
    // 0x21aa28: 0x177880  sll         $t7, $s7, 2
    ctx->pc = 0x21aa28u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x21aa2c: 0x0  nop
    ctx->pc = 0x21aa2cu;
    // NOP
label_21aa30:
    // 0x21aa30: 0x3af1021  addu        $v0, $sp, $t7
    ctx->pc = 0x21aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
    // 0x21aa34: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x21aa34u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21aa38: 0x8fa20620  lw          $v0, 0x620($sp)
    ctx->pc = 0x21aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x21aa3c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x21aa3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x21aa40: 0x12a200c0  beq         $s5, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x21AA40u;
    {
        const bool branch_taken_0x21aa40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x21AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA40u;
        // 0x21aa44: 0x8fa30570  lw          $v1, 0x570($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa40) {
            ctx->pc = 0x21AD44u;
            goto label_21ad44;
        }
    }
    ctx->pc = 0x21AA48u;
    // 0x21aa48: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x21aa48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aa4c: 0x8fa40588  lw          $a0, 0x588($sp)
    ctx->pc = 0x21aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
    // 0x21aa50: 0xbf080  sll         $fp, $t3, 2
    ctx->pc = 0x21aa50u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x21aa54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21aa58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21aa5c: 0xafa20584  sw          $v0, 0x584($sp)
    ctx->pc = 0x21aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1412), GPR_U32(ctx, 2));
    // 0x21aa60: 0x2769021  addu        $s2, $s3, $s6
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x21aa64: 0x0  nop
    ctx->pc = 0x21aa64u;
    // NOP
label_21aa68:
    // 0x21aa68: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x21aa68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x21aa6c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x21AA6Cu;
    {
        const bool branch_taken_0x21aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA6Cu;
        // 0x21aa70: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa6c) {
            ctx->pc = 0x21ABC4u;
            goto label_21abc4;
        }
    }
    ctx->pc = 0x21AA74u;
    // 0x21aa74: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x21aa74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21aa78:
    // 0x21aa78: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x21aa78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x21aa7c: 0x1d35023  subu        $t2, $t6, $s3
    ctx->pc = 0x21aa7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x21aa80: 0x2f38023  subu        $s0, $s7, $s3
    ctx->pc = 0x21aa80u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x21aa84: 0x2ca102b  sltu        $v0, $s6, $t2
    ctx->pc = 0x21aa84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x21aa88: 0x20d2004  sllv        $a0, $t5, $s0
    ctx->pc = 0x21aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 16) & 0x1F));
    // 0x21aa8c: 0x2c2500b  movn        $t2, $s6, $v0
    ctx->pc = 0x21aa8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 22));
    // 0x21aa90: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21aa90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x21aa94: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x21aa94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21aa98: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21AA98u;
    {
        const bool branch_taken_0x21aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA98u;
        // 0x21aa9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa98) {
            ctx->pc = 0x21AADCu;
            goto label_21aadc;
        }
    }
    ctx->pc = 0x21AAA0u;
    // 0x21aaa0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x21aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21aaa4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21aaa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21aaa8: 0x552023  subu        $a0, $v0, $s5
    ctx->pc = 0x21aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21aaac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AAACu;
    {
        const bool branch_taken_0x21aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAACu;
        // 0x21aab0: 0x3af2821  addu        $a1, $sp, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aaac) {
            ctx->pc = 0x21AABCu;
            goto label_21aabc;
        }
    }
    ctx->pc = 0x21AAB4u;
    // 0x21aab4: 0x0  nop
    ctx->pc = 0x21aab4u;
    // NOP
label_21aab8:
    // 0x21aab8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x21aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21aabc:
    // 0x21aabc: 0x20a102b  sltu        $v0, $s0, $t2
    ctx->pc = 0x21aabcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x21aac0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21AAC0u;
    {
        const bool branch_taken_0x21aac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAC0u;
        // 0x21aac4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aac0) {
            ctx->pc = 0x21AADCu;
            goto label_21aadc;
        }
    }
    ctx->pc = 0x21AAC8u;
    // 0x21aac8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x21aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21aacc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21aad0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x21aad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21aad4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21AAD4u;
    {
        const bool branch_taken_0x21aad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21aad4) {
            ctx->pc = 0x21AAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AAD4u;
            // 0x21aad8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aab8;
        }
    }
    ctx->pc = 0x21AADCu;
label_21aadc:
    // 0x21aadc: 0x20d5004  sllv        $t2, $t5, $s0
    ctx->pc = 0x21aadcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 16) & 0x1F));
    // 0x21aae0: 0x7fa60590  sq          $a2, 0x590($sp)
    ctx->pc = 0x21aae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 6));
    // 0x21aae4: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x21aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x21aae8: 0x7fa805a0  sq          $t0, 0x5A0($sp)
    ctx->pc = 0x21aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 8));
    // 0x21aaec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x21aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x21aaf0: 0x7faa05b0  sq          $t2, 0x5B0($sp)
    ctx->pc = 0x21aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 10));
    // 0x21aaf4: 0x7fab05c0  sq          $t3, 0x5C0($sp)
    ctx->pc = 0x21aaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 11));
    // 0x21aaf8: 0x7fac05d0  sq          $t4, 0x5D0($sp)
    ctx->pc = 0x21aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), GPR_VEC(ctx, 12));
    // 0x21aafc: 0x7fad05e0  sq          $t5, 0x5E0($sp)
    ctx->pc = 0x21aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 13));
    // 0x21ab00: 0x7fae05f0  sq          $t6, 0x5F0($sp)
    ctx->pc = 0x21ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 14));
    // 0x21ab04: 0xc0869d4  jal         func_21A750
    ctx->pc = 0x21AB04u;
    SET_GPR_U32(ctx, 31, 0x21AB0Cu);
    ctx->pc = 0x21AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB04u;
    // 0x21ab08: 0x7faf0600  sq          $t7, 0x600($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A750u, 0x21AB04u, 0x21AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB0Cu;
label_21ab0c:
    // 0x21ab0c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x21ab0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab10: 0x7ba60590  lq          $a2, 0x590($sp)
    ctx->pc = 0x21ab10u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x21ab14: 0x7ba805a0  lq          $t0, 0x5A0($sp)
    ctx->pc = 0x21ab14u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x21ab18: 0x7baa05b0  lq          $t2, 0x5B0($sp)
    ctx->pc = 0x21ab18u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x21ab1c: 0x7bab05c0  lq          $t3, 0x5C0($sp)
    ctx->pc = 0x21ab1cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x21ab20: 0x7bac05d0  lq          $t4, 0x5D0($sp)
    ctx->pc = 0x21ab20u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x21ab24: 0x7bad05e0  lq          $t5, 0x5E0($sp)
    ctx->pc = 0x21ab24u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x21ab28: 0x7bae05f0  lq          $t6, 0x5F0($sp)
    ctx->pc = 0x21ab28u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x21ab2c: 0x1120ff96  beqz        $t1, . + 4 + (-0x6A << 2)
    ctx->pc = 0x21AB2Cu;
    {
        const bool branch_taken_0x21ab2c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB2Cu;
        // 0x21ab30: 0x7baf0600  lq          $t7, 0x600($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab2c) {
            ctx->pc = 0x21A988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a988;
        }
    }
    ctx->pc = 0x21AB34u;
    // 0x21ab34: 0x8fa50580  lw          $a1, 0x580($sp)
    ctx->pc = 0x21ab34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x21ab38: 0x25230008  addiu       $v1, $t1, 0x8
    ctx->pc = 0x21ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x21ab3c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x21ab3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x21ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x21ab44: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x21ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x21ab48: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x21ab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21ab4c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x21ab4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x21ab50: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x21ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21ab54: 0xafa90580  sw          $t1, 0x580($sp)
    ctx->pc = 0x21ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1408), GPR_U32(ctx, 9));
    // 0x21ab58: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x21ab58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab5c: 0x11600013  beqz        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x21AB5Cu;
    {
        const bool branch_taken_0x21ab5c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB5Cu;
        // 0x21ab60: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab5c) {
            ctx->pc = 0x21ABACu;
            goto label_21abac;
        }
    }
    ctx->pc = 0x21AB64u;
    // 0x21ab64: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x21ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x21ab68: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x21ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x21ab6c: 0xac510520  sw          $s1, 0x520($v0)
    ctx->pc = 0x21ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1312), GPR_U32(ctx, 17));
    // 0x21ab70: 0x2563ffff  addiu       $v1, $t3, -0x1
    ctx->pc = 0x21ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x21ab74: 0xa3a40050  sb          $a0, 0x50($sp)
    ctx->pc = 0x21ab74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x21ab78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ab7c: 0xa3b60051  sb          $s6, 0x51($sp)
    ctx->pc = 0x21ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 22));
    // 0x21ab80: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x21ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21ab84: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x21ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x21ab88: 0x2561023  subu        $v0, $s2, $s6
    ctx->pc = 0x21ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x21ab8c: 0x518006  srlv        $s0, $s1, $v0
    ctx->pc = 0x21ab8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x21ab90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ab94: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x21ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x21ab98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21ab9c: 0x6bb00057  ldl         $s0, 0x57($sp)
    ctx->pc = 0x21ab9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x21aba0: 0x6fb00050  ldr         $s0, 0x50($sp)
    ctx->pc = 0x21aba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x21aba4: 0xb0500007  sdl         $s0, 0x7($v0)
    ctx->pc = 0x21aba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21aba8: 0xb4500000  sdr         $s0, 0x0($v0)
    ctx->pc = 0x21aba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21abac:
    // 0x21abac: 0x2569021  addu        $s2, $s2, $s6
    ctx->pc = 0x21abacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x21abb0: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x21abb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x21abb4: 0x5440ffb0  bnel        $v0, $zero, . + 4 + (-0x50 << 2)
    ctx->pc = 0x21ABB4u;
    {
        const bool branch_taken_0x21abb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21abb4) {
            ctx->pc = 0x21ABB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ABB4u;
            // 0x21abb8: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aa78;
        }
    }
    ctx->pc = 0x21ABBCu;
    // 0x21abbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21ABBCu;
    {
        const bool branch_taken_0x21abbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABBCu;
        // 0x21abc0: 0x8fa40584  lw          $a0, 0x584($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abbc) {
            ctx->pc = 0x21ABD0u;
            goto label_21abd0;
        }
    }
    ctx->pc = 0x21ABC4u;
label_21abc4:
    // 0x21abc4: 0x2f33023  subu        $a2, $s7, $s3
    ctx->pc = 0x21abc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x21abc8: 0xb3880  sll         $a3, $t3, 2
    ctx->pc = 0x21abc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x21abcc: 0x8fa40584  lw          $a0, 0x584($sp)
    ctx->pc = 0x21abccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1412)));
label_21abd0:
    // 0x21abd0: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x21abd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21abd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21ABD4u;
    {
        const bool branch_taken_0x21abd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABD4u;
        // 0x21abd8: 0xa3a60051  sb          $a2, 0x51($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abd4) {
            ctx->pc = 0x21ABE8u;
            goto label_21abe8;
        }
    }
    ctx->pc = 0x21ABDCu;
    // 0x21abdc: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x21abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21abe0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x21ABE0u;
    {
        const bool branch_taken_0x21abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABE0u;
        // 0x21abe4: 0xa3a20050  sb          $v0, 0x50($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abe0) {
            ctx->pc = 0x21AC58u;
            goto label_21ac58;
        }
    }
    ctx->pc = 0x21ABE8u;
label_21abe8:
    // 0x21abe8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x21abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21abec: 0x8fa50574  lw          $a1, 0x574($sp)
    ctx->pc = 0x21abecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1396)));
    // 0x21abf0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x21abf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21abf4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21ABF4u;
    {
        const bool branch_taken_0x21abf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABF4u;
        // 0x21abf8: 0x2c620100  sltiu       $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abf4) {
            ctx->pc = 0x21AC1Cu;
            goto label_21ac1c;
        }
    }
    ctx->pc = 0x21ABFCu;
    // 0x21abfc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21ABFCu;
    {
        const bool branch_taken_0x21abfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABFCu;
        // 0x21ac00: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abfc) {
            ctx->pc = 0x21AC08u;
            goto label_21ac08;
        }
    }
    ctx->pc = 0x21AC04u;
    // 0x21ac04: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x21ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21ac08:
    // 0x21ac08: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x21ac08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x21ac0c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x21ac0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21ac10: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x21ac10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x21ac14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21AC14u;
    {
        const bool branch_taken_0x21ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC14u;
        // 0x21ac18: 0xa7a20054  sh          $v0, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac14) {
            ctx->pc = 0x21AC58u;
            goto label_21ac58;
        }
    }
    ctx->pc = 0x21AC1Cu;
label_21ac1c:
    // 0x21ac1c: 0x8fb00574  lw          $s0, 0x574($sp)
    ctx->pc = 0x21ac1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1396)));
    // 0x21ac20: 0x8fb2057c  lw          $s2, 0x57C($sp)
    ctx->pc = 0x21ac20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1404)));
    // 0x21ac24: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x21ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21ac28: 0x8fb80578  lw          $t8, 0x578($sp)
    ctx->pc = 0x21ac28u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1400)));
    // 0x21ac2c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x21ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21ac30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x21ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x21ac34: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21ac34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ac38: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x21ac38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x21ac3c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21ac40: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x21ac40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x21ac44: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21ac48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x21ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21ac4c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x21ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x21ac50: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x21ac50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ac54: 0xa7a30054  sh          $v1, 0x54($sp)
    ctx->pc = 0x21ac54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 3));
label_21ac58:
    // 0x21ac58: 0x2718006  srlv        $s0, $s1, $s3
    ctx->pc = 0x21ac58u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 19) & 0x1F));
    // 0x21ac5c: 0x20a102b  sltu        $v0, $s0, $t2
    ctx->pc = 0x21ac5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x21ac60: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21AC60u;
    {
        const bool branch_taken_0x21ac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC60u;
        // 0x21ac64: 0xcd2004  sllv        $a0, $t5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac60) {
            ctx->pc = 0x21ACA8u;
            goto label_21aca8;
        }
    }
    ctx->pc = 0x21AC68u;
    // 0x21ac68: 0x26a8ffff  addiu       $t0, $s5, -0x1
    ctx->pc = 0x21ac68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x21ac6c: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x21ac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x21ac70: 0x26e5ffff  addiu       $a1, $s7, -0x1
    ctx->pc = 0x21ac70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x21ac74: 0x0  nop
    ctx->pc = 0x21ac74u;
    // NOP
label_21ac78:
    // 0x21ac78: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x21ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x21ac7c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x21ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x21ac80: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x21ac80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x21ac84: 0x20a182b  sltu        $v1, $s0, $t2
    ctx->pc = 0x21ac84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x21ac88: 0x6bb90057  ldl         $t9, 0x57($sp)
    ctx->pc = 0x21ac88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x21ac8c: 0x6fb90050  ldr         $t9, 0x50($sp)
    ctx->pc = 0x21ac8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x21ac90: 0xb0590007  sdl         $t9, 0x7($v0)
    ctx->pc = 0x21ac90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ac94: 0xb4590000  sdr         $t9, 0x0($v0)
    ctx->pc = 0x21ac94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ac98: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21AC98u;
    {
        const bool branch_taken_0x21ac98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ac98) {
            ctx->pc = 0x21AC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ac78;
        }
    }
    ctx->pc = 0x21ACA0u;
    // 0x21aca0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21ACA0u;
    {
        const bool branch_taken_0x21aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACA0u;
        // 0x21aca4: 0xad8004  sllv        $s0, $t5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aca0) {
            ctx->pc = 0x21ACB8u;
            goto label_21acb8;
        }
    }
    ctx->pc = 0x21ACA8u;
label_21aca8:
    // 0x21aca8: 0x26a8ffff  addiu       $t0, $s5, -0x1
    ctx->pc = 0x21aca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x21acac: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x21acacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x21acb0: 0x26e5ffff  addiu       $a1, $s7, -0x1
    ctx->pc = 0x21acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x21acb4: 0xad8004  sllv        $s0, $t5, $a1
    ctx->pc = 0x21acb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 5) & 0x1F));
label_21acb8:
    // 0x21acb8: 0x2301024  and         $v0, $s1, $s0
    ctx->pc = 0x21acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x21acbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21ACBCu;
    {
        const bool branch_taken_0x21acbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACBCu;
        // 0x21acc0: 0x26d1004  sllv        $v0, $t5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 19) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acbc) {
            ctx->pc = 0x21ACE8u;
            goto label_21ace8;
        }
    }
    ctx->pc = 0x21ACC4u;
    // 0x21acc4: 0x0  nop
    ctx->pc = 0x21acc4u;
    // NOP
label_21acc8:
    // 0x21acc8: 0x2308826  xor         $s1, $s1, $s0
    ctx->pc = 0x21acc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
    // 0x21accc: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x21acccu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x21acd0: 0x2301024  and         $v0, $s1, $s0
    ctx->pc = 0x21acd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x21acd4: 0x0  nop
    ctx->pc = 0x21acd4u;
    // NOP
    // 0x21acd8: 0x0  nop
    ctx->pc = 0x21acd8u;
    // NOP
    // 0x21acdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21ACDCu;
    {
        const bool branch_taken_0x21acdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21acdc) {
            ctx->pc = 0x21ACC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21acc8;
        }
    }
    ctx->pc = 0x21ACE4u;
    // 0x21ace4: 0x26d1004  sllv        $v0, $t5, $s3
    ctx->pc = 0x21ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 19) & 0x1F));
label_21ace8:
    // 0x21ace8: 0xde2021  addu        $a0, $a2, $fp
    ctx->pc = 0x21ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x21acec: 0x2308826  xor         $s1, $s1, $s0
    ctx->pc = 0x21acecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
    // 0x21acf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21acf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21acf8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x21acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x21acfc: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x21ACFCu;
    {
        const bool branch_taken_0x21acfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACFCu;
        // 0x21ad00: 0x8fb90620  lw          $t9, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acfc) {
            ctx->pc = 0x21AD38u;
            goto label_21ad38;
        }
    }
    ctx->pc = 0x21AD04u;
    // 0x21ad04: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x21ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21ad08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ad0c: 0x0  nop
    ctx->pc = 0x21ad0cu;
    // NOP
label_21ad10:
    // 0x21ad10: 0x2769823  subu        $s3, $s3, $s6
    ctx->pc = 0x21ad10u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x21ad14: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x21ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x21ad18: 0x2651004  sllv        $v0, $a1, $s3
    ctx->pc = 0x21ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 19) & 0x1F));
    // 0x21ad1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ad20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21ad24: 0x27defffc  addiu       $fp, $fp, -0x4
    ctx->pc = 0x21ad24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x21ad28: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x21ad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x21ad2c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21AD2Cu;
    {
        const bool branch_taken_0x21ad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD2Cu;
        // 0x21ad30: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad2c) {
            ctx->pc = 0x21AD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ad10;
        }
    }
    ctx->pc = 0x21AD34u;
    // 0x21ad34: 0x8fb90620  lw          $t9, 0x620($sp)
    ctx->pc = 0x21ad34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_21ad38:
    // 0x21ad38: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x21ad38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad3c: 0x16b9ff4a  bne         $s5, $t9, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x21AD3Cu;
    {
        const bool branch_taken_0x21ad3c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 25));
        ctx->pc = 0x21AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD3Cu;
        // 0x21ad40: 0x2769021  addu        $s2, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad3c) {
            ctx->pc = 0x21AA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aa68;
        }
    }
    ctx->pc = 0x21AD44u;
label_21ad44:
    // 0x21ad44: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x21ad44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x21ad48: 0x1d7102a  slt         $v0, $t6, $s7
    ctx->pc = 0x21ad48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x21ad4c: 0x5040ff38  beql        $v0, $zero, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x21AD4Cu;
    {
        const bool branch_taken_0x21ad4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ad4c) {
            ctx->pc = 0x21AD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AD4Cu;
            // 0x21ad50: 0x177880  sll         $t7, $s7, 2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aa30;
        }
    }
    ctx->pc = 0x21AD54u;
label_21ad54:
    // 0x21ad54: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AD54u;
    {
        const bool branch_taken_0x21ad54 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD54u;
        // 0x21ad58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad54) {
            ctx->pc = 0x21AD64u;
            goto label_21ad64;
        }
    }
    ctx->pc = 0x21AD5Cu;
    // 0x21ad5c: 0x39c20001  xori        $v0, $t6, 0x1
    ctx->pc = 0x21ad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)1);
    // 0x21ad60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21ad60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21ad64:
    // 0x21ad64: 0xdfbf06c0  ld          $ra, 0x6C0($sp)
    ctx->pc = 0x21ad64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1728)));
    // 0x21ad68: 0xdfbe06b0  ld          $fp, 0x6B0($sp)
    ctx->pc = 0x21ad68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1712)));
    // 0x21ad6c: 0xdfb706a0  ld          $s7, 0x6A0($sp)
    ctx->pc = 0x21ad6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1696)));
    // 0x21ad70: 0xdfb60690  ld          $s6, 0x690($sp)
    ctx->pc = 0x21ad70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x21ad74: 0xdfb50680  ld          $s5, 0x680($sp)
    ctx->pc = 0x21ad74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x21ad78: 0xdfb40670  ld          $s4, 0x670($sp)
    ctx->pc = 0x21ad78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x21ad7c: 0xdfb30660  ld          $s3, 0x660($sp)
    ctx->pc = 0x21ad7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x21ad80: 0xdfb20650  ld          $s2, 0x650($sp)
    ctx->pc = 0x21ad80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x21ad84: 0xdfb10640  ld          $s1, 0x640($sp)
    ctx->pc = 0x21ad84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x21ad88: 0xdfb00630  ld          $s0, 0x630($sp)
    ctx->pc = 0x21ad88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x21ad8c: 0x3e00008  jr          $ra
    ctx->pc = 0x21AD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD8Cu;
        // 0x21ad90: 0x27bd06d0  addiu       $sp, $sp, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AD94u;
}
