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

// Function: std_drawmenuitemtext
// Address: 0x22cf70 - 0x22d0e0
void std_drawmenuitemtext_0x22cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_drawmenuitemtext_0x22cf70");
#endif

    switch (ctx->pc) {
        case 0x22cfb4u: goto label_22cfb4;
        case 0x22d08cu: goto label_22d08c;
        case 0x22d0a4u: goto label_22d0a4;
        case 0x22d0bcu: goto label_22d0bc;
        default: break;
    }

    ctx->pc = 0x22cf70u;

    // 0x22cf70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22cf74: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22cf78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22cf7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22cf7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf80: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22cf84: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22cf88: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22cf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22cf8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22cf90: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22cf94: 0x8e930010  lw          $s3, 0x10($s4)
    ctx->pc = 0x22cf94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x22cf98: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x22cf98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x22cf9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x22cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x22cfa0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22CFA0u;
    {
        const bool branch_taken_0x22cfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFA0u;
        // 0x22cfa4: 0x8f84a028  lw          $a0, -0x5FD8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfa0) {
            ctx->pc = 0x22CFACu;
            goto label_22cfac;
        }
    }
    ctx->pc = 0x22CFA8u;
    // 0x22cfa8: 0x8f84a024  lw          $a0, -0x5FDC($gp)
    ctx->pc = 0x22cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942756)));
label_22cfac:
    // 0x22cfac: 0xc08089c  jal         func_202270
    ctx->pc = 0x22CFACu;
    SET_GPR_U32(ctx, 31, 0x22CFB4u);
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22CFACu, 0x22CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFB4u;
label_22cfb4:
    // 0x22cfb4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22cfb8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22cfb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfbc: 0x246499f0  addiu       $a0, $v1, -0x6610
    ctx->pc = 0x22cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x22cfc0: 0x96870002  lhu         $a3, 0x2($s4)
    ctx->pc = 0x22cfc0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x22cfc4: 0x8c6599f0  lw          $a1, -0x6610($v1)
    ctx->pc = 0x22cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3299F0u));
    // 0x22cfc8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x22cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A04u));
    // 0x22cfcc: 0x9668000a  lhu         $t0, 0xA($s3)
    ctx->pc = 0x22cfccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x22cfd0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x22cfd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22cfd4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22cfd8: 0x31060080  andi        $a2, $t0, 0x80
    ctx->pc = 0x22cfd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x22cfdc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x22cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x22cfe0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x22CFE0u;
    {
        const bool branch_taken_0x22cfe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFE0u;
        // 0x22cfe4: 0xa39021  addu        $s2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfe0) {
            ctx->pc = 0x22CFFCu;
            goto label_22cffc;
        }
    }
    ctx->pc = 0x22CFE8u;
    // 0x22cfe8: 0x3c108080  lui         $s0, 0x8080
    ctx->pc = 0x22cfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32896 << 16));
    // 0x22cfec: 0x3c112020  lui         $s1, 0x2020
    ctx->pc = 0x22cfecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8224 << 16));
    // 0x22cff0: 0x36102880  ori         $s0, $s0, 0x2880
    ctx->pc = 0x22cff0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)10368);
    // 0x22cff4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x22CFF4u;
    {
        const bool branch_taken_0x22cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFF4u;
        // 0x22cff8: 0x36310a80  ori         $s1, $s1, 0xA80 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2688);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cff4) {
            ctx->pc = 0x22D058u;
            goto label_22d058;
        }
    }
    ctx->pc = 0x22CFFCu;
label_22cffc:
    // 0x22cffc: 0x31020040  andi        $v0, $t0, 0x40
    ctx->pc = 0x22cffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x22d000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D000u;
    {
        const bool branch_taken_0x22d000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D000u;
        // 0x22d004: 0x3c101e1e  lui         $s0, 0x1E1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)7710 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d000) {
            ctx->pc = 0x22D014u;
            goto label_22d014;
        }
    }
    ctx->pc = 0x22D008u;
    // 0x22d008: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x22d008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22d00c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22D00Cu;
    {
        const bool branch_taken_0x22d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D00Cu;
        // 0x22d010: 0x36101e80  ori         $s0, $s0, 0x1E80 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7808);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d00c) {
            ctx->pc = 0x22D058u;
            goto label_22d058;
        }
    }
    ctx->pc = 0x22D014u;
label_22d014:
    // 0x22d014: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x22d014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22d018: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22d018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22d01c: 0x24632e50  addiu       $v1, $v1, 0x2E50
    ctx->pc = 0x22d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11856));
    // 0x22d020: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22d024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22d028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22d028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d02c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22d02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d030: 0x16640008  bne         $s3, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22D030u;
    {
        const bool branch_taken_0x22d030 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x22D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D030u;
        // 0x22d034: 0x8f90a01c  lw          $s0, -0x5FE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d030) {
            ctx->pc = 0x22D054u;
            goto label_22d054;
        }
    }
    ctx->pc = 0x22D038u;
    // 0x22d038: 0x9383a02c  lbu         $v1, -0x5FD4($gp)
    ctx->pc = 0x22d038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x22d03c: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x22d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x22d040: 0x34427880  ori         $v0, $v0, 0x7880
    ctx->pc = 0x22d040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30848);
    // 0x22d044: 0x24115080  addiu       $s1, $zero, 0x5080
    ctx->pc = 0x22d044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x22d048: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x22d048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x22d04c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22D04Cu;
    {
        const bool branch_taken_0x22d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D04Cu;
        // 0x22d050: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d04c) {
            ctx->pc = 0x22D058u;
            goto label_22d058;
        }
    }
    ctx->pc = 0x22D054u;
label_22d054:
    // 0x22d054: 0x8f91a020  lw          $s1, -0x5FE0($gp)
    ctx->pc = 0x22d054u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
label_22d058:
    // 0x22d058: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x22d058u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x22d05c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x22d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22d060: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22D060u;
    {
        const bool branch_taken_0x22d060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D060u;
        // 0x22d064: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d060) {
            ctx->pc = 0x22D090u;
            goto label_22d090;
        }
    }
    ctx->pc = 0x22D068u;
    // 0x22d068: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x22d068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x22d06c: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x22d06cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x22d070: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x22d070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x22d074: 0x24c6e800  addiu       $a2, $a2, -0x1800
    ctx->pc = 0x22d074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961152));
    // 0x22d078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22d078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d07c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x22d07cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x22d080: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x22d080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x22d084: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x22D084u;
    SET_GPR_U32(ctx, 31, 0x22D08Cu);
    ctx->pc = 0x22D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D084u;
    // 0x22d088: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x22D084u, 0x22D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D08Cu;
label_22d08c:
    // 0x22d08c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x22d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_22d090:
    // 0x22d090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d094: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x22d094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x22d098: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22d098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d09c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x22D09Cu;
    SET_GPR_U32(ctx, 31, 0x22D0A4u);
    ctx->pc = 0x22D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D09Cu;
    // 0x22d0a0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x22D09Cu, 0x22D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D0A4u;
label_22d0a4:
    // 0x22d0a4: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x22d0a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x22d0a8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x22d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x22d0ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D0ACu;
    {
        const bool branch_taken_0x22d0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0ACu;
        // 0x22d0b0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0ac) {
            ctx->pc = 0x22D0C0u;
            goto label_22d0c0;
        }
    }
    ctx->pc = 0x22D0B4u;
    // 0x22d0b4: 0xc08089c  jal         func_202270
    ctx->pc = 0x22D0B4u;
    SET_GPR_U32(ctx, 31, 0x22D0BCu);
    ctx->pc = 0x22D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D0B4u;
    // 0x22d0b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22D0B4u, 0x22D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D0BCu;
label_22d0bc:
    // 0x22d0bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22d0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22d0c0:
    // 0x22d0c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22d0c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d0c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22d0c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d0c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22d0c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d0cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22d0ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d0d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22d0d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d0d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22d0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D8u;
        // 0x22d0dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D0E0u;
}
