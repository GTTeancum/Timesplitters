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

// Function: ungetc
// Address: 0x2ee770 - 0x2ee8f8
void ungetc_0x2ee770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ungetc_0x2ee770");
#endif

    switch (ctx->pc) {
        case 0x2ee7c0u: goto label_2ee7c0;
        case 0x2ee7f8u: goto label_2ee7f8;
        case 0x2ee848u: goto label_2ee848;
        default: break;
    }

    ctx->pc = 0x2ee770u;

    // 0x2ee770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ee770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ee774: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ee774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee778: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ee778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ee77c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ee784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ee788: 0x12220056  beq         $s1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2EE788u;
    {
        const bool branch_taken_0x2ee788 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE788u;
        // 0x2ee78c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee788) {
            ctx->pc = 0x2EE8E4u;
            goto label_2ee8e4;
        }
    }
    ctx->pc = 0x2EE790u;
    // 0x2ee790: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ee790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ee794: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE794u;
    {
        const bool branch_taken_0x2ee794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee794) {
            ctx->pc = 0x2EE798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE794u;
            // 0x2ee798: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE7B0u;
            goto label_2ee7b0;
        }
    }
    ctx->pc = 0x2EE79Cu;
    // 0x2ee79c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ee79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2ee7a0: 0x8c43330c  lw          $v1, 0x330C($v0)
    ctx->pc = 0x2ee7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2ee7a4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2ee7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2ee7a8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2ee7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2ee7ac: 0x0  nop
    ctx->pc = 0x2ee7acu;
    // NOP
label_2ee7b0:
    // 0x2ee7b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE7B0u;
    {
        const bool branch_taken_0x2ee7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7b0) {
            ctx->pc = 0x2EE7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE7B0u;
            // 0x2ee7b4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE7C4u;
            goto label_2ee7c4;
        }
    }
    ctx->pc = 0x2EE7B8u;
    // 0x2ee7b8: 0xc0b923c  jal         func_2E48F0
    ctx->pc = 0x2EE7B8u;
    SET_GPR_U32(ctx, 31, 0x2EE7C0u);
    ctx->pc = 0x2EE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE7B8u;
    // 0x2ee7bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48F0u, 0x2EE7B8u, 0x2EE7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE7C0u;
label_2ee7c0:
    // 0x2ee7c0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ee7c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2ee7c4:
    // 0x2ee7c4: 0x3043ffdf  andi        $v1, $v0, 0xFFDF
    ctx->pc = 0x2ee7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x2ee7c8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2ee7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2ee7cc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EE7CCu;
    {
        const bool branch_taken_0x2ee7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7CCu;
        // 0x2ee7d0: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7cc) {
            ctx->pc = 0x2EE820u;
            goto label_2ee820;
        }
    }
    ctx->pc = 0x2EE7D4u;
    // 0x2ee7d4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2ee7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2ee7d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE7D8u;
    {
        const bool branch_taken_0x2ee7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7D8u;
        // 0x2ee7dc: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7d8) {
            ctx->pc = 0x2EE7E8u;
            goto label_2ee7e8;
        }
    }
    ctx->pc = 0x2EE7E0u;
    // 0x2ee7e0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2EE7E0u;
    {
        const bool branch_taken_0x2ee7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7E0u;
        // 0x2ee7e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7e0) {
            ctx->pc = 0x2EE8E4u;
            goto label_2ee8e4;
        }
    }
    ctx->pc = 0x2EE7E8u;
label_2ee7e8:
    // 0x2ee7e8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE7E8u;
    {
        const bool branch_taken_0x2ee7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7e8) {
            ctx->pc = 0x2EE7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE7E8u;
            // 0x2ee7ec: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE818u;
            goto label_2ee818;
        }
    }
    ctx->pc = 0x2EE7F0u;
    // 0x2ee7f0: 0xc0bac14  jal         func_2EB050
    ctx->pc = 0x2EE7F0u;
    SET_GPR_U32(ctx, 31, 0x2EE7F8u);
    ctx->pc = 0x2EE7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE7F0u;
    // 0x2ee7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB050u, 0x2EE7F0u, 0x2EE7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE7F8u;
label_2ee7f8:
    // 0x2ee7f8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2EE7F8u;
    {
        const bool branch_taken_0x2ee7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7F8u;
        // 0x2ee7fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7f8) {
            ctx->pc = 0x2EE8E4u;
            goto label_2ee8e4;
        }
    }
    ctx->pc = 0x2EE800u;
    // 0x2ee800: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ee800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ee804: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2ee804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2ee808: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ee808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ee80c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2ee80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2ee810: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ee810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee814: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ee814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2ee818:
    // 0x2ee818: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2ee818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2ee81c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ee81cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2ee820:
    // 0x2ee820: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2ee820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ee824: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EE824u;
    {
        const bool branch_taken_0x2ee824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE824u;
        // 0x2ee828: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee824) {
            ctx->pc = 0x2EE874u;
            goto label_2ee874;
        }
    }
    ctx->pc = 0x2EE82Cu;
    // 0x2ee82c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ee82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee830: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2ee830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2ee834: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ee834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ee838: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE838u;
    {
        const bool branch_taken_0x2ee838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee838) {
            ctx->pc = 0x2EE83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE838u;
            // 0x2ee83c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE854u;
            goto label_2ee854;
        }
    }
    ctx->pc = 0x2EE840u;
    // 0x2ee840: 0xc0bb9a0  jal         func_2EE680
    ctx->pc = 0x2EE840u;
    SET_GPR_U32(ctx, 31, 0x2EE848u);
    ctx->pc = 0x2EE844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE840u;
    // 0x2ee844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE680u, 0x2EE840u, 0x2EE848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE848u;
label_2ee848:
    // 0x2ee848: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2EE848u;
    {
        const bool branch_taken_0x2ee848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE848u;
        // 0x2ee84c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee848) {
            ctx->pc = 0x2EE8E4u;
            goto label_2ee8e4;
        }
    }
    ctx->pc = 0x2EE850u;
    // 0x2ee850: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ee850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ee854:
    // 0x2ee854: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ee854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee858: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2ee858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ee85c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ee85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ee860: 0xa091ffff  sb          $s1, -0x1($a0)
    ctx->pc = 0x2ee860u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ee864: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ee864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ee86c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2EE86Cu;
    {
        const bool branch_taken_0x2ee86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE86Cu;
        // 0x2ee870: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee86c) {
            ctx->pc = 0x2EE8E4u;
            goto label_2ee8e4;
        }
    }
    ctx->pc = 0x2EE874u;
label_2ee874:
    // 0x2ee874: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2ee874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ee878: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE878u;
    {
        const bool branch_taken_0x2ee878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE878u;
        // 0x2ee87c: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee878) {
            ctx->pc = 0x2EE8B0u;
            goto label_2ee8b0;
        }
    }
    ctx->pc = 0x2EE880u;
    // 0x2ee880: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2ee880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2ee884: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE884u;
    {
        const bool branch_taken_0x2ee884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE884u;
        // 0x2ee888: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee884) {
            ctx->pc = 0x2EE8B4u;
            goto label_2ee8b4;
        }
    }
    ctx->pc = 0x2EE88Cu;
    // 0x2ee88c: 0x90e2ffff  lbu         $v0, -0x1($a3)
    ctx->pc = 0x2ee88cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x2ee890: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE890u;
    {
        const bool branch_taken_0x2ee890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ee890) {
            ctx->pc = 0x2EE8B4u;
            goto label_2ee8b4;
        }
    }
    ctx->pc = 0x2EE898u;
    // 0x2ee898: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2ee898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ee89c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ee89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ee8a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ee8a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ee8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EE8A8u;
    {
        const bool branch_taken_0x2ee8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8A8u;
        // 0x2ee8ac: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8a8) {
            ctx->pc = 0x2EE8E4u;
            goto label_2ee8e4;
        }
    }
    ctx->pc = 0x2EE8B0u;
label_2ee8b0:
    // 0x2ee8b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ee8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ee8b4:
    // 0x2ee8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee8b8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2ee8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2ee8bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ee8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee8c0: 0x26060042  addiu       $a2, $s0, 0x42
    ctx->pc = 0x2ee8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x2ee8c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ee8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2ee8c8: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2ee8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2ee8cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ee8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8d0: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x2ee8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x2ee8d4: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x2ee8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x2ee8d8: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x2ee8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x2ee8dc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2ee8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2ee8e0: 0xa2110042  sb          $s1, 0x42($s0)
    ctx->pc = 0x2ee8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
label_2ee8e4:
    // 0x2ee8e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ee8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee8e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ee8e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8F0u;
        // 0x2ee8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE8F8u;
}
