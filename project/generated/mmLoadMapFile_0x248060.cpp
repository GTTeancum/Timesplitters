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

// Function: mmLoadMapFile
// Address: 0x248060 - 0x2482e4
void mmLoadMapFile_0x248060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmLoadMapFile_0x248060");
#endif

    switch (ctx->pc) {
        case 0x2480a0u: goto label_2480a0;
        case 0x2480e0u: goto label_2480e0;
        case 0x248114u: goto label_248114;
        case 0x24811cu: goto label_24811c;
        case 0x248134u: goto label_248134;
        case 0x248144u: goto label_248144;
        case 0x248160u: goto label_248160;
        case 0x248184u: goto label_248184;
        case 0x2481b4u: goto label_2481b4;
        case 0x2481d0u: goto label_2481d0;
        case 0x2481e4u: goto label_2481e4;
        case 0x248250u: goto label_248250;
        default: break;
    }

    ctx->pc = 0x248060u;

    // 0x248060: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x248060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x248064: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x248064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x248068: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x248068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x24806c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24806cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248070: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x248070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x248074: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x248074u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x248078: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x248078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24807c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x24807cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248080: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x248080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x248084: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x248084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x248088: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x248088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24808c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x248090: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x248090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x248094: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x248094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x248098: 0xc09193e  jal         func_2464F8
    ctx->pc = 0x248098u;
    SET_GPR_U32(ctx, 31, 0x2480A0u);
    ctx->pc = 0x24809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248098u;
    // 0x24809c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2464F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2464F8u, 0x248098u, 0x2480A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480A0u;
label_2480a0:
    // 0x2480a0: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x2480a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x2480a4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2480a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2480a8: 0x34424626  ori         $v0, $v0, 0x4626
    ctx->pc = 0x2480a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17958);
    // 0x2480ac: 0x14620081  bne         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2480ACu;
    {
        const bool branch_taken_0x2480ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2480B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480ACu;
        // 0x2480b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480ac) {
            ctx->pc = 0x2482B4u;
            goto label_2482b4;
        }
    }
    ctx->pc = 0x2480B4u;
    // 0x2480b4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2480b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2480b8: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2480b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2480bc: 0x1462007d  bne         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2480BCu;
    {
        const bool branch_taken_0x2480bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2480C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480BCu;
        // 0x2480c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480bc) {
            ctx->pc = 0x2482B4u;
            goto label_2482b4;
        }
    }
    ctx->pc = 0x2480C4u;
    // 0x2480c4: 0x26b70008  addiu       $s7, $s5, 0x8
    ctx->pc = 0x2480c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2480c8: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x2480c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x2480cc: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x2480ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2480d0: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x2480d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x2480d4: 0x10a20055  beq         $a1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2480D4u;
    {
        const bool branch_taken_0x2480d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2480D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480D4u;
        // 0x2480d8: 0x26f50008  addiu       $s5, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480d4) {
            ctx->pc = 0x24822Cu;
            goto label_24822c;
        }
    }
    ctx->pc = 0x2480DCu;
    // 0x2480dc: 0x0  nop
    ctx->pc = 0x2480dcu;
    // NOP
label_2480e0:
    // 0x2480e0: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x2480e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x2480e4: 0x34424627  ori         $v0, $v0, 0x4627
    ctx->pc = 0x2480e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17959);
    // 0x2480e8: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2480E8u;
    {
        const bool branch_taken_0x2480e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2480ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480E8u;
        // 0x2480ec: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480e8) {
            ctx->pc = 0x248104u;
            goto label_248104;
        }
    }
    ctx->pc = 0x2480F0u;
    // 0x2480f0: 0x34424628  ori         $v0, $v0, 0x4628
    ctx->pc = 0x2480f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17960);
    // 0x2480f4: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2480F4u;
    {
        const bool branch_taken_0x2480f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2480F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480F4u;
        // 0x2480f8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480f4) {
            ctx->pc = 0x24814Cu;
            goto label_24814c;
        }
    }
    ctx->pc = 0x2480FCu;
    // 0x2480fc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2480FCu;
    {
        const bool branch_taken_0x2480fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480FCu;
        // 0x248100: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480fc) {
            ctx->pc = 0x248210u;
            goto label_248210;
        }
    }
    ctx->pc = 0x248104u;
label_248104:
    // 0x248104: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x248104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x248108: 0x96a50008  lhu         $a1, 0x8($s5)
    ctx->pc = 0x248108u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24810c: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x24810Cu;
    SET_GPR_U32(ctx, 31, 0x248114u);
    ctx->pc = 0x248110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24810Cu;
    // 0x248110: 0x244467d8  addiu       $a0, $v0, 0x67D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x24810Cu, 0x248114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248114u;
label_248114:
    // 0x248114: 0xc093224  jal         func_24C890
    ctx->pc = 0x248114u;
    SET_GPR_U32(ctx, 31, 0x24811Cu);
    ctx->pc = 0x248118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248114u;
    // 0x248118: 0x96a4000a  lhu         $a0, 0xA($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C890u, 0x248114u, 0x24811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24811Cu;
label_24811c:
    // 0x24811c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x248120: 0xa2a0002b  sb          $zero, 0x2B($s5)
    ctx->pc = 0x248120u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x248124: 0xa2a000ab  sb          $zero, 0xAB($s5)
    ctx->pc = 0x248124u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 171), (uint8_t)GPR_U32(ctx, 0));
    // 0x248128: 0x244465e8  addiu       $a0, $v0, 0x65E8
    ctx->pc = 0x248128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26088));
    // 0x24812c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x24812Cu;
    SET_GPR_U32(ctx, 31, 0x248134u);
    ctx->pc = 0x248130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24812Cu;
    // 0x248130: 0x26a5000c  addiu       $a1, $s5, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x24812Cu, 0x248134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248134u;
label_248134:
    // 0x248134: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x248134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x248138: 0x26a5002c  addiu       $a1, $s5, 0x2C
    ctx->pc = 0x248138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
    // 0x24813c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x24813Cu;
    SET_GPR_U32(ctx, 31, 0x248144u);
    ctx->pc = 0x248140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24813Cu;
    // 0x248140: 0x24446608  addiu       $a0, $v0, 0x6608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x24813Cu, 0x248144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248144u;
label_248144:
    // 0x248144: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x248144u;
    {
        const bool branch_taken_0x248144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248144u;
        // 0x248148: 0x8ebe0004  lw          $fp, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248144) {
            ctx->pc = 0x24820Cu;
            goto label_24820c;
        }
    }
    ctx->pc = 0x24814Cu;
label_24814c:
    // 0x24814c: 0x1bc0002f  blez        $fp, . + 4 + (0x2F << 2)
    ctx->pc = 0x24814Cu;
    {
        const bool branch_taken_0x24814c = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x248150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24814Cu;
        // 0x248150: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24814c) {
            ctx->pc = 0x24820Cu;
            goto label_24820c;
        }
    }
    ctx->pc = 0x248154u;
    // 0x248154: 0x3c167f7f  lui         $s6, 0x7F7F
    ctx->pc = 0x248154u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32639 << 16));
    // 0x248158: 0x36d67f00  ori         $s6, $s6, 0x7F00
    ctx->pc = 0x248158u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)32512);
    // 0x24815c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x24815cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_248160:
    // 0x248160: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x248160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x248164: 0x26140024  addiu       $s4, $s0, 0x24
    ctx->pc = 0x248164u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x248168: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x248168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24816c: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x24816cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x248170: 0x52d40  sll         $a1, $a1, 21
    ctx->pc = 0x248170u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 21));
    // 0x248174: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x248174u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x248178: 0x63540  sll         $a2, $a2, 21
    ctx->pc = 0x248178u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 21));
    // 0x24817c: 0xc092244  jal         func_248910
    ctx->pc = 0x24817Cu;
    SET_GPR_U32(ctx, 31, 0x248184u);
    ctx->pc = 0x248180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24817Cu;
    // 0x248180: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248910u, 0x24817Cu, 0x248184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248184u;
label_248184:
    // 0x248184: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x248184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248188: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x248188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24818c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248190: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x248190u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x248194: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x248194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x248198: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x248198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x24819c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x24819cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x2481a0: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x2481a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2481a4: 0xa243001c  sb          $v1, 0x1C($s2)
    ctx->pc = 0x2481a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x2481a8: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x2481a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x2481ac: 0xc0921f4  jal         func_2487D0
    ctx->pc = 0x2481ACu;
    SET_GPR_U32(ctx, 31, 0x2481B4u);
    ctx->pc = 0x2481B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481ACu;
    // 0x2481b0: 0xa242001d  sb          $v0, 0x1D($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 29), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2487D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2487D0u, 0x2481ACu, 0x2481B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481B4u;
label_2481b4:
    // 0x2481b4: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x2481b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2481b8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2481B8u;
    {
        const bool branch_taken_0x2481b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481B8u;
        // 0x2481bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481b8) {
            ctx->pc = 0x2481FCu;
            goto label_2481fc;
        }
    }
    ctx->pc = 0x2481C0u;
    // 0x2481c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2481C0u;
    {
        const bool branch_taken_0x2481c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481C0u;
        // 0x2481c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481c0) {
            ctx->pc = 0x2481FCu;
            goto label_2481fc;
        }
    }
    ctx->pc = 0x2481C8u;
    // 0x2481c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2481c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2481cc: 0x96850002  lhu         $a1, 0x2($s4)
    ctx->pc = 0x2481ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2481d0:
    // 0x2481d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2481d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481d4: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x2481d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2481d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2481d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2481dc: 0xc0922cc  jal         func_248B30
    ctx->pc = 0x2481DCu;
    SET_GPR_U32(ctx, 31, 0x2481E4u);
    ctx->pc = 0x2481E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481DCu;
    // 0x2481e0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B30u, 0x2481DCu, 0x2481E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481E4u;
label_2481e4:
    // 0x2481e4: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x2481e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2481e8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2481e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2481ec: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2481ECu;
    {
        const bool branch_taken_0x2481ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2481ec) {
            ctx->pc = 0x2481F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2481ECu;
            // 0x2481f0: 0x96850002  lhu         $a1, 0x2($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2481D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2481d0;
        }
    }
    ctx->pc = 0x2481F4u;
    // 0x2481f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2481F4u;
    {
        const bool branch_taken_0x2481f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481F4u;
        // 0x2481f8: 0x27e102a  slt         $v0, $s3, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481f4) {
            ctx->pc = 0x248204u;
            goto label_248204;
        }
    }
    ctx->pc = 0x2481FCu;
label_2481fc:
    // 0x2481fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2481fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x248200: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x248200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_248204:
    // 0x248204: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x248204u;
    {
        const bool branch_taken_0x248204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248204u;
        // 0x248208: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248204) {
            ctx->pc = 0x248160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248160;
        }
    }
    ctx->pc = 0x24820Cu;
label_24820c:
    // 0x24820c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x24820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_248210:
    // 0x248210: 0x3c030132  lui         $v1, 0x132
    ctx->pc = 0x248210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)306 << 16));
    // 0x248214: 0x34634629  ori         $v1, $v1, 0x4629
    ctx->pc = 0x248214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17961);
    // 0x248218: 0x2a2b821  addu        $s7, $s5, $v0
    ctx->pc = 0x248218u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x24821c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x24821cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x248220: 0x26f50008  addiu       $s5, $s7, 0x8
    ctx->pc = 0x248220u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x248224: 0x1483ffae  bne         $a0, $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x248224u;
    {
        const bool branch_taken_0x248224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x248228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248224u;
        // 0x248228: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248224) {
            ctx->pc = 0x2480E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2480e0;
        }
    }
    ctx->pc = 0x24822Cu;
label_24822c:
    // 0x24822c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248230: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x248230u;
    {
        const bool branch_taken_0x248230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248230u;
        // 0x248234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248230) {
            ctx->pc = 0x2482B4u;
            goto label_2482b4;
        }
    }
    ctx->pc = 0x248238u;
    // 0x248238: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x248238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24823c: 0x8f85a12c  lw          $a1, -0x5ED4($gp)
    ctx->pc = 0x24823cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x248240: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x248240u;
    {
        const bool branch_taken_0x248240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248240u;
        // 0x248244: 0xaf84a0dc  sw          $a0, -0x5F24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248240) {
            ctx->pc = 0x248288u;
            goto label_248288;
        }
    }
    ctx->pc = 0x248248u;
    // 0x248248: 0x8f86a0d8  lw          $a2, -0x5F28($gp)
    ctx->pc = 0x248248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24824c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_248250:
    // 0x248250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248254: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x248254u;
    {
        const bool branch_taken_0x248254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x248254) {
            ctx->pc = 0x248258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248254u;
            // 0x248258: 0x8ca50038  lw          $a1, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248278u;
            goto label_248278;
        }
    }
    ctx->pc = 0x24825Cu;
    // 0x24825c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x24825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x248260: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x248260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x248264: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x248264u;
    {
        const bool branch_taken_0x248264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248264) {
            ctx->pc = 0x248268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248264u;
            // 0x248268: 0x8ca50038  lw          $a1, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248278u;
            goto label_248278;
        }
    }
    ctx->pc = 0x24826Cu;
    // 0x24826c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248270: 0xaf83a0dc  sw          $v1, -0x5F24($gp)
    ctx->pc = 0x248270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 3));
    // 0x248274: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x248274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_248278:
    // 0x248278: 0x54a0fff5  bnel        $a1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x248278u;
    {
        const bool branch_taken_0x248278 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x248278) {
            ctx->pc = 0x24827Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248278u;
            // 0x24827c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248250;
        }
    }
    ctx->pc = 0x248280u;
    // 0x248280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248280u;
    {
        const bool branch_taken_0x248280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248280u;
        // 0x248284: 0x2885fffe  slti        $a1, $a0, -0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967294) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248280) {
            ctx->pc = 0x248290u;
            goto label_248290;
        }
    }
    ctx->pc = 0x248288u;
label_248288:
    // 0x248288: 0x8f86a0d8  lw          $a2, -0x5F28($gp)
    ctx->pc = 0x248288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24828c: 0x2885fffe  slti        $a1, $a0, -0x2
    ctx->pc = 0x24828cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967294) ? 1 : 0);
label_248290:
    // 0x248290: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x248290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x248294: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x248294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x248298: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x248298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24829c: 0x3463eeff  ori         $v1, $v1, 0xEEFF
    ctx->pc = 0x24829cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61183);
    // 0x2482a0: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x2482a0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2482a4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2482a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2482a8: 0xaf82a0e0  sw          $v0, -0x5F20($gp)
    ctx->pc = 0x2482a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942944), GPR_U32(ctx, 2));
    // 0x2482ac: 0xaf86a0d8  sw          $a2, -0x5F28($gp)
    ctx->pc = 0x2482acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 6));
    // 0x2482b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2482b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2482b4:
    // 0x2482b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2482b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2482b8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2482b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2482bc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2482bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2482c0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2482c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2482c4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2482c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2482c8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2482c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2482cc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2482ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2482d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2482d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2482d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2482d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2482d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2482d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2482dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2482DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2482E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482DCu;
        // 0x2482e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2482DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2482E4u;
}
