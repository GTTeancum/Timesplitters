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

// Function: drawTitleBox
// Address: 0x2b0fc0 - 0x2b1180
void drawTitleBox_0x2b0fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawTitleBox_0x2b0fc0");
#endif

    switch (ctx->pc) {
        case 0x2b100cu: goto label_2b100c;
        case 0x2b1030u: goto label_2b1030;
        case 0x2b1094u: goto label_2b1094;
        case 0x2b10f8u: goto label_2b10f8;
        case 0x2b110cu: goto label_2b110c;
        case 0x2b113cu: goto label_2b113c;
        case 0x2b1144u: goto label_2b1144;
        default: break;
    }

    ctx->pc = 0x2b0fc0u;

    // 0x2b0fc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b0fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b0fc4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b0fc8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b0fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b0fcc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2b0fccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0fd0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b0fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b0fd4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b0fd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0fd8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b0fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b0fdc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2b0fdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0fe0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b0fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b0fe4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b0fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0fe8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b0fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b0fec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b0fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ff0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b0ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b0ff4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2b0ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ff8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b0ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b0ffc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1000: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b1000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b1004: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B1004u;
    SET_GPR_U32(ctx, 31, 0x2B100Cu);
    ctx->pc = 0x2B1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1004u;
    // 0x2b1008: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B1004u, 0x2B100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B100Cu;
label_2b100c:
    // 0x2b100c: 0x93849ab5  lbu         $a0, -0x654B($gp)
    ctx->pc = 0x2b100cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b1010: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b1014: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b1014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b1018: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x2b1018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2b101c: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x2b101cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b1020: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1020u;
    {
        const bool branch_taken_0x2b1020 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1020u;
        // 0x2b1024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1020) {
            ctx->pc = 0x2B1038u;
            goto label_2b1038;
        }
    }
    ctx->pc = 0x2B1028u;
    // 0x2b1028: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2B1028u;
    SET_GPR_U32(ctx, 31, 0x2B1030u);
    ctx->pc = 0x2B102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1028u;
    // 0x2b102c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2B1028u, 0x2B1030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1030u;
label_2b1030:
    // 0x2b1030: 0x93849ab5  lbu         $a0, -0x654B($gp)
    ctx->pc = 0x2b1030u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b1034: 0x24540008  addiu       $s4, $v0, 0x8
    ctx->pc = 0x2b1034u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2b1038:
    // 0x2b1038: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x2b1038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2b103c: 0x2d4f021  addu        $fp, $s6, $s4
    ctx->pc = 0x2b103cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2b1040: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b1040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b1044: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b1044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b1048: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1048u;
    {
        const bool branch_taken_0x2b1048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1048u;
        // 0x2b104c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1048) {
            ctx->pc = 0x2B1060u;
            goto label_2b1060;
        }
    }
    ctx->pc = 0x2B1050u;
    // 0x2b1050: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x2b1050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b1054: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b1054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b1058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1058u;
    {
        const bool branch_taken_0x2b1058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1058u;
        // 0x2b105c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1058) {
            ctx->pc = 0x2B1068u;
            goto label_2b1068;
        }
    }
    ctx->pc = 0x2B1060u;
label_2b1060:
    // 0x2b1060: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x2b1060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b1064: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b1064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b1068:
    // 0x2b1068: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b1068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b106c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x2b106cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b1070: 0x308200fe  andi        $v0, $a0, 0xFE
    ctx->pc = 0x2b1070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
    // 0x2b1074: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2b1074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1078: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x2b1078u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b107c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1080: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b1080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1084: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2b1084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1088: 0x2627ffff  addiu       $a3, $s1, -0x1
    ctx->pc = 0x2b1088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2b108c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B108Cu;
    SET_GPR_U32(ctx, 31, 0x2B1094u);
    ctx->pc = 0x2B1090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B108Cu;
    // 0x2b1090: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B108Cu, 0x2B1094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1094u;
label_2b1094:
    // 0x2b1094: 0x93849ab5  lbu         $a0, -0x654B($gp)
    ctx->pc = 0x2b1094u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b1098: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b1098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b109c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B109Cu;
    {
        const bool branch_taken_0x2b109c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B109Cu;
        // 0x2b10a0: 0x8f839a9c  lw          $v1, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b109c) {
            ctx->pc = 0x2B10C0u;
            goto label_2b10c0;
        }
    }
    ctx->pc = 0x2B10A4u;
    // 0x2b10a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b10a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b10a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b10ac: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2b10acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b10b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B10B0u;
    {
        const bool branch_taken_0x2b10b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b10b0) {
            ctx->pc = 0x2B10B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B10B0u;
            // 0x2b10b4: 0x32b000ff  andi        $s0, $s5, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B10D4u;
            goto label_2b10d4;
        }
    }
    ctx->pc = 0x2B10B8u;
    // 0x2b10b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B10B8u;
    {
        const bool branch_taken_0x2b10b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10B8u;
        // 0x2b10bc: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10b8) {
            ctx->pc = 0x2B10FCu;
            goto label_2b10fc;
        }
    }
    ctx->pc = 0x2B10C0u;
label_2b10c0:
    // 0x2b10c0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b10c4: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2b10c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b10c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B10C8u;
    {
        const bool branch_taken_0x2b10c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10C8u;
        // 0x2b10cc: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10c8) {
            ctx->pc = 0x2B10FCu;
            goto label_2b10fc;
        }
    }
    ctx->pc = 0x2B10D0u;
    // 0x2b10d0: 0x32b000ff  andi        $s0, $s5, 0xFF
    ctx->pc = 0x2b10d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_2b10d4:
    // 0x2b10d4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2b10d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b10d8: 0x26090008  addiu       $t1, $s0, 0x8
    ctx->pc = 0x2b10d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2b10dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b10dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10e0: 0x95042  srl         $t2, $t1, 1
    ctx->pc = 0x2b10e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x2b10e4: 0x27c60001  addiu       $a2, $fp, 0x1
    ctx->pc = 0x2b10e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2b10e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2b10e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b10ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10f0: 0xc08ba0c  jal         func_22E830
    ctx->pc = 0x2B10F0u;
    SET_GPR_U32(ctx, 31, 0x2B10F8u);
    ctx->pc = 0x2B10F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B10F0u;
    // 0x2b10f4: 0x94882  srl         $t1, $t1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E830u, 0x2B10F0u, 0x2B10F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B10F8u;
label_2b10f8:
    // 0x2b10f8: 0x93849ab5  lbu         $a0, -0x654B($gp)
    ctx->pc = 0x2b10f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
label_2b10fc:
    // 0x2b10fc: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x2b10fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2b1100: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b1100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1104: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2B1104u;
    SET_GPR_U32(ctx, 31, 0x2B110Cu);
    ctx->pc = 0x2B1108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1104u;
    // 0x2b1108: 0xa3829ab5  sb          $v0, -0x654B($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2B1104u, 0x2B110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B110Cu;
label_2b110c:
    // 0x2b110c: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x2b110cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2b1110: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2b1110u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2b1114: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2b1114u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2b1118: 0x34e77f00  ori         $a3, $a3, 0x7F00
    ctx->pc = 0x2b1118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32512);
    // 0x2b111c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1120: 0x2073825  or          $a3, $s0, $a3
    ctx->pc = 0x2b1120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
    // 0x2b1124: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b1124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b1128: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x2b1128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b112c: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x2b112cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2b1130: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2b1130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1134: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2B1134u;
    SET_GPR_U32(ctx, 31, 0x2B113Cu);
    ctx->pc = 0x2B1138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1134u;
    // 0x2b1138: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2B1134u, 0x2B113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B113Cu;
label_2b113c:
    // 0x2b113c: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B113Cu;
    SET_GPR_U32(ctx, 31, 0x2B1144u);
    ctx->pc = 0x2B1140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B113Cu;
    // 0x2b1140: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B113Cu, 0x2B1144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1144u;
label_2b1144:
    // 0x2b1144: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x2b1144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b1148: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b1148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b114c: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x2b114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x2b1150: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b1150u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b1154: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b1154u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b1158: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b1158u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b115c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b115cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1160: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b1160u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1164: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b1164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1168: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b1168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b116c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b116cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1170: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b1170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1174: 0xa3839ab5  sb          $v1, -0x654B($gp)
    ctx->pc = 0x2b1174u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b1178: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1178u;
        // 0x2b117c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1180u;
}
