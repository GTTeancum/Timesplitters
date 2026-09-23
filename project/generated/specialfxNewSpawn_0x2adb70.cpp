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

// Function: specialfxNewSpawn
// Address: 0x2adb70 - 0x2ae1c0
void specialfxNewSpawn_0x2adb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxNewSpawn_0x2adb70");
#endif

    switch (ctx->pc) {
        case 0x2adbc8u: goto label_2adbc8;
        case 0x2adc40u: goto label_2adc40;
        case 0x2adc58u: goto label_2adc58;
        case 0x2adc78u: goto label_2adc78;
        case 0x2adcecu: goto label_2adcec;
        case 0x2add44u: goto label_2add44;
        case 0x2ade4cu: goto label_2ade4c;
        case 0x2ade9cu: goto label_2ade9c;
        case 0x2adea4u: goto label_2adea4;
        case 0x2adedcu: goto label_2adedc;
        case 0x2adee4u: goto label_2adee4;
        case 0x2adef8u: goto label_2adef8;
        case 0x2adf48u: goto label_2adf48;
        case 0x2adf50u: goto label_2adf50;
        case 0x2adf88u: goto label_2adf88;
        case 0x2adf90u: goto label_2adf90;
        case 0x2adfc8u: goto label_2adfc8;
        case 0x2adfecu: goto label_2adfec;
        case 0x2ae060u: goto label_2ae060;
        case 0x2ae098u: goto label_2ae098;
        case 0x2ae0bcu: goto label_2ae0bc;
        case 0x2ae0e0u: goto label_2ae0e0;
        case 0x2ae134u: goto label_2ae134;
        case 0x2ae174u: goto label_2ae174;
        default: break;
    }

    ctx->pc = 0x2adb70u;

    // 0x2adb70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2adb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2adb74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2adb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2adb78: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2adb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2adb7c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2adb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2adb80: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2adb80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb84: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2adb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2adb88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2adb88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb8c: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2adb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2adb90: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2adb90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb94: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2adb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2adb98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2adb98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb9c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2adb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2adba0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2adba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adba4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2adba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2adba8: 0x2444d688  addiu       $a0, $v0, -0x2978
    ctx->pc = 0x2adba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956680));
    // 0x2adbac: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2adbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2adbb0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2adbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2adbb4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2adbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2adbb8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2adbb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adbbc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2adbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2adbc0: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x2adbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x2adbc4: 0x0  nop
    ctx->pc = 0x2adbc4u;
    // NOP
label_2adbc8:
    // 0x2adbc8: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADBC8u;
    {
        const bool branch_taken_0x2adbc8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2adbc8) {
            ctx->pc = 0x2ADBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADBC8u;
            // 0x2adbcc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADBE0u;
            goto label_2adbe0;
        }
    }
    ctx->pc = 0x2ADBD0u;
    // 0x2adbd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2adbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2adbd4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2adbd4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2adbd8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2adbd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2adbdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2adbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2adbe0:
    // 0x2adbe0: 0x2862000e  slti        $v0, $v1, 0xE
    ctx->pc = 0x2adbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2adbe4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2ADBE4u;
    {
        const bool branch_taken_0x2adbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADBE4u;
        // 0x2adbe8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adbe4) {
            ctx->pc = 0x2ADBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adbc8;
        }
    }
    ctx->pc = 0x2ADBECu;
    // 0x2adbec: 0x6000167  bltz        $s0, . + 4 + (0x167 << 2)
    ctx->pc = 0x2ADBECu;
    {
        const bool branch_taken_0x2adbec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2ADBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADBECu;
        // 0x2adbf0: 0x10a140  sll         $s4, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adbec) {
            ctx->pc = 0x2AE18Cu;
            goto label_2ae18c;
        }
    }
    ctx->pc = 0x2ADBF4u;
    // 0x2adbf4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2adbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2adbf8: 0x2450d688  addiu       $s0, $v0, -0x2978
    ctx->pc = 0x2adbf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956680));
    // 0x2adbfc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2adbfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adc00: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x2adc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2adc04: 0x2142021  addu        $a0, $s0, $s4
    ctx->pc = 0x2adc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2adc08: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x2adc08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x2adc0c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x2adc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2adc10: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x2adc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2adc14: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x2adc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
    // 0x2adc18: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2adc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc1c: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2adc1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc20: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2adc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2adc24: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2ADC24u;
    {
        const bool branch_taken_0x2adc24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC24u;
        // 0x2adc28: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc24) {
            ctx->pc = 0x2ADC6Cu;
            goto label_2adc6c;
        }
    }
    ctx->pc = 0x2ADC2Cu;
    // 0x2adc2c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2adc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2adc30: 0x17c20007  bne         $fp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ADC30u;
    {
        const bool branch_taken_0x2adc30 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC30u;
        // 0x2adc34: 0x240400d5  addiu       $a0, $zero, 0xD5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc30) {
            ctx->pc = 0x2ADC50u;
            goto label_2adc50;
        }
    }
    ctx->pc = 0x2ADC38u;
    // 0x2adc38: 0xc09cd96  jal         func_273658
    ctx->pc = 0x2ADC38u;
    SET_GPR_U32(ctx, 31, 0x2ADC40u);
    ctx->pc = 0x2ADC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC38u;
    // 0x2adc3c: 0x8e640bcc  lw          $a0, 0xBCC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273658u, 0x2ADC38u, 0x2ADC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC40u;
label_2adc40:
    // 0x2adc40: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x2adc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2adc44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2adc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2adc48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2ADC48u;
    {
        const bool branch_taken_0x2adc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC48u;
        // 0x2adc4c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc48) {
            ctx->pc = 0x2ADC88u;
            goto label_2adc88;
        }
    }
    ctx->pc = 0x2ADC50u;
label_2adc50:
    // 0x2adc50: 0xc081546  jal         func_205518
    ctx->pc = 0x2ADC50u;
    SET_GPR_U32(ctx, 31, 0x2ADC58u);
    ctx->pc = 0x2ADC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC50u;
    // 0x2adc54: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2ADC50u, 0x2ADC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC58u;
label_2adc58:
    // 0x2adc58: 0x8e630bcc  lw          $v1, 0xBCC($s3)
    ctx->pc = 0x2adc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3020)));
    // 0x2adc5c: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2adc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2adc60: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x2adc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x2adc64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADC64u;
    {
        const bool branch_taken_0x2adc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC64u;
        // 0x2adc68: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc64) {
            ctx->pc = 0x2ADC88u;
            goto label_2adc88;
        }
    }
    ctx->pc = 0x2ADC6Cu;
label_2adc6c:
    // 0x2adc6c: 0x240400d6  addiu       $a0, $zero, 0xD6
    ctx->pc = 0x2adc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x2adc70: 0xc081546  jal         func_205518
    ctx->pc = 0x2ADC70u;
    SET_GPR_U32(ctx, 31, 0x2ADC78u);
    ctx->pc = 0x2ADC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC70u;
    // 0x2adc74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2ADC70u, 0x2ADC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC78u;
label_2adc78:
    // 0x2adc78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2adc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2adc7c: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x2adc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2adc80: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x2adc80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x2adc84: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2adc84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2adc88:
    // 0x2adc88: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2adc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2adc8c: 0x2470d688  addiu       $s0, $v1, -0x2978
    ctx->pc = 0x2adc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
    // 0x2adc90: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2adc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2adc94: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2adc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2adc98: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ADC98u;
    {
        const bool branch_taken_0x2adc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC98u;
        // 0x2adc9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc98) {
            ctx->pc = 0x2ADD04u;
            goto label_2add04;
        }
    }
    ctx->pc = 0x2ADCA0u;
    // 0x2adca0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2adca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adca4: 0xc7828f40  lwc1        $f2, -0x70C0($gp)
    ctx->pc = 0x2adca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adca8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2adca8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2adcac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2adcacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2adcb0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2adcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adcb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2adcb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2adcb8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2adcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2adcbc: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2adcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adcc0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2adcc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2adcc4: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2adcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adcc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2adcc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2adccc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2adcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2adcd0: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2adcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adcd4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2adcd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2adcd8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2adcd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2adcdc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2adcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adce0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2adce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2adce4: 0xc095012  jal         func_254048
    ctx->pc = 0x2ADCE4u;
    SET_GPR_U32(ctx, 31, 0x2ADCECu);
    ctx->pc = 0x2ADCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCE4u;
    // 0x2adce8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254048u, 0x2ADCE4u, 0x2ADCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCECu;
label_2adcec:
    // 0x2adcec: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2adcecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2adcf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADCF0u;
    {
        const bool branch_taken_0x2adcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADCF0u;
        // 0x2adcf4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcf0) {
            ctx->pc = 0x2ADD08u;
            goto label_2add08;
        }
    }
    ctx->pc = 0x2ADCF8u;
    // 0x2adcf8: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x2adcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2adcfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2adcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2add00: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2add00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_2add04:
    // 0x2add04: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2add04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2add08:
    // 0x2add08: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2add08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2add0c: 0x2444d688  addiu       $a0, $v0, -0x2978
    ctx->pc = 0x2add0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956680));
    // 0x2add10: 0x2482001c  addiu       $v0, $a0, 0x1C
    ctx->pc = 0x2add10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2add14: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x2add14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2add18: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x2add18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2add1c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2add1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2add20: 0x2bc20005  slti        $v0, $fp, 0x5
    ctx->pc = 0x2add20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2add24: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2ADD24u;
    {
        const bool branch_taken_0x2add24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD24u;
        // 0x2add28: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add24) {
            ctx->pc = 0x2ADE00u;
            goto label_2ade00;
        }
    }
    ctx->pc = 0x2ADD2Cu;
    // 0x2add2c: 0x961021  addu        $v0, $a0, $s6
    ctx->pc = 0x2add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x2add30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2add30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2add34: 0x16e30028  bne         $s7, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2ADD34u;
    {
        const bool branch_taken_0x2add34 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ADD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD34u;
        // 0x2add38: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add34) {
            ctx->pc = 0x2ADDD8u;
            goto label_2addd8;
        }
    }
    ctx->pc = 0x2ADD3Cu;
    // 0x2add3c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2ADD3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD44u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2ADD3Cu, 0x2ADD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD44u;
label_2add44:
    // 0x2add44: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2add44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2add48: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2add48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2add4c: 0x8c64c4f8  lw          $a0, -0x3B08($v1)
    ctx->pc = 0x2add4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x2add50: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2add50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2add54: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2ADD54u;
    {
        const bool branch_taken_0x2add54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD54u;
        // 0x2add58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add54) {
            ctx->pc = 0x2ADDDCu;
            goto label_2adddc;
        }
    }
    ctx->pc = 0x2ADD5Cu;
    // 0x2add5c: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x2ADD5Cu;
    {
        const bool branch_taken_0x2add5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD5Cu;
        // 0x2add60: 0x27c2ffff  addiu       $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add5c) {
            ctx->pc = 0x2ADDE0u;
            goto label_2adde0;
        }
    }
    ctx->pc = 0x2ADD64u;
    // 0x2add64: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x2add64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2add68: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2add68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2add6c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2add6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2add70: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2ADD70u;
    {
        const bool branch_taken_0x2add70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD70u;
        // 0x2add74: 0x27c2ffff  addiu       $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add70) {
            ctx->pc = 0x2ADDE0u;
            goto label_2adde0;
        }
    }
    ctx->pc = 0x2ADD78u;
    // 0x2add78: 0x10f10010  beq         $a3, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ADD78u;
    {
        const bool branch_taken_0x2add78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x2ADD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD78u;
        // 0x2add7c: 0x28e20003  slti        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add78) {
            ctx->pc = 0x2ADDBCu;
            goto label_2addbc;
        }
    }
    ctx->pc = 0x2ADD80u;
    // 0x2add80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADD80u;
    {
        const bool branch_taken_0x2add80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD80u;
        // 0x2add84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add80) {
            ctx->pc = 0x2ADD98u;
            goto label_2add98;
        }
    }
    ctx->pc = 0x2ADD88u;
    // 0x2add88: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ADD88u;
    {
        const bool branch_taken_0x2add88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD88u;
        // 0x2add8c: 0x27c2ffff  addiu       $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add88) {
            ctx->pc = 0x2ADDB4u;
            goto label_2addb4;
        }
    }
    ctx->pc = 0x2ADD90u;
    // 0x2add90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2ADD90u;
    {
        const bool branch_taken_0x2add90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD90u;
        // 0x2add94: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add90) {
            ctx->pc = 0x2ADDE4u;
            goto label_2adde4;
        }
    }
    ctx->pc = 0x2ADD98u;
label_2add98:
    // 0x2add98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2add98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2add9c: 0x10e30009  beq         $a3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ADD9Cu;
    {
        const bool branch_taken_0x2add9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ADDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD9Cu;
        // 0x2adda0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add9c) {
            ctx->pc = 0x2ADDC4u;
            goto label_2addc4;
        }
    }
    ctx->pc = 0x2ADDA4u;
    // 0x2adda4: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ADDA4u;
    {
        const bool branch_taken_0x2adda4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDA4u;
        // 0x2adda8: 0x27c2ffff  addiu       $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adda4) {
            ctx->pc = 0x2ADDD0u;
            goto label_2addd0;
        }
    }
    ctx->pc = 0x2ADDACu;
    // 0x2addac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2ADDACu;
    {
        const bool branch_taken_0x2addac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDACu;
        // 0x2addb0: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addac) {
            ctx->pc = 0x2ADDE4u;
            goto label_2adde4;
        }
    }
    ctx->pc = 0x2ADDB4u;
label_2addb4:
    // 0x2addb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2ADDB4u;
    {
        const bool branch_taken_0x2addb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDB4u;
        // 0x2addb8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addb4) {
            ctx->pc = 0x2ADDDCu;
            goto label_2adddc;
        }
    }
    ctx->pc = 0x2ADDBCu;
label_2addbc:
    // 0x2addbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2ADDBCu;
    {
        const bool branch_taken_0x2addbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDBCu;
        // 0x2addc0: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addbc) {
            ctx->pc = 0x2ADDDCu;
            goto label_2adddc;
        }
    }
    ctx->pc = 0x2ADDC4u;
label_2addc4:
    // 0x2addc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2addc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2addc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADDC8u;
    {
        const bool branch_taken_0x2addc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDC8u;
        // 0x2addcc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addc8) {
            ctx->pc = 0x2ADDDCu;
            goto label_2adddc;
        }
    }
    ctx->pc = 0x2ADDD0u;
label_2addd0:
    // 0x2addd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADDD0u;
    {
        const bool branch_taken_0x2addd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDD0u;
        // 0x2addd4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addd0) {
            ctx->pc = 0x2ADDDCu;
            goto label_2adddc;
        }
    }
    ctx->pc = 0x2ADDD8u;
label_2addd8:
    // 0x2addd8: 0xae170000  sw          $s7, 0x0($s0)
    ctx->pc = 0x2addd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
label_2adddc:
    // 0x2adddc: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x2adddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_2adde0:
    // 0x2adde0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2adde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2adde4:
    // 0x2adde4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ADDE4u;
    {
        const bool branch_taken_0x2adde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDE4u;
        // 0x2adde8: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adde4) {
            ctx->pc = 0x2ADE10u;
            goto label_2ade10;
        }
    }
    ctx->pc = 0x2ADDECu;
    // 0x2addec: 0x2462d688  addiu       $v0, $v1, -0x2978
    ctx->pc = 0x2addecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
    // 0x2addf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2addf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2addf4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2addf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2addf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADDF8u;
    {
        const bool branch_taken_0x2addf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDF8u;
        // 0x2addfc: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addf8) {
            ctx->pc = 0x2ADE10u;
            goto label_2ade10;
        }
    }
    ctx->pc = 0x2ADE00u;
label_2ade00:
    // 0x2ade00: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x2ade00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x2ade04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ade04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ade08: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2ade08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2ade0c: 0xae170000  sw          $s7, 0x0($s0)
    ctx->pc = 0x2ade0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
label_2ade10:
    // 0x2ade10: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ade10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ade14: 0x2462d688  addiu       $v0, $v1, -0x2978
    ctx->pc = 0x2ade14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
    // 0x2ade18: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ade18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ade1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ade1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ade20: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2ade20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ade24: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2ADE24u;
    {
        const bool branch_taken_0x2ade24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE24u;
        // 0x2ade28: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade24) {
            ctx->pc = 0x2AE174u;
            goto label_2ae174;
        }
    }
    ctx->pc = 0x2ADE2Cu;
    // 0x2ade2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ade2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ade30: 0x244297e0  addiu       $v0, $v0, -0x6820
    ctx->pc = 0x2ade30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940640));
    // 0x2ade34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ade34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ade38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ade38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ade3c: 0x800008  jr          $a0
    ctx->pc = 0x2ADE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ADE44u: goto label_2ade44;
            case 0x2ADEF0u: goto label_2adef0;
            case 0x2AE020u: goto label_2ae020;
            case 0x2AE034u: goto label_2ae034;
            case 0x2AE068u: goto label_2ae068;
            case 0x2AE148u: goto label_2ae148;
            case 0x2AE174u: goto label_2ae174;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADE3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ADE44u;
label_2ade44:
    // 0x2ade44: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2ADE44u;
    SET_GPR_U32(ctx, 31, 0x2ADE4Cu);
    ctx->pc = 0x2ADE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADE44u;
    // 0x2ade48: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2ADE44u, 0x2ADE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE4Cu;
label_2ade4c:
    // 0x2ade4c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2ade4cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2ade50: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x2ade50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ade54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ade54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ade58: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADE58u;
    {
        const bool branch_taken_0x2ade58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ade58) {
            ctx->pc = 0x2ADE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADE58u;
            // 0x2ade5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADE60u;
            goto label_2ade60;
        }
    }
    ctx->pc = 0x2ADE60u;
label_2ade60:
    // 0x2ade60: 0x2451d688  addiu       $s1, $v0, -0x2978
    ctx->pc = 0x2ade60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956680));
    // 0x2ade64: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x2ade64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x2ade68: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x2ade68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x2ade6c: 0x2652c1c0  addiu       $s2, $s2, -0x3E40
    ctx->pc = 0x2ade6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951360));
    // 0x2ade70: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x2ade70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2ade74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ade74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ade78: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x2ade78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ade7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ade7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ade80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ade84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ade88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ade8c: 0x5010  mfhi        $t2
    ctx->pc = 0x2ade8cu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2ade90: 0x1535018  mult        $t2, $t2, $s3
    ctx->pc = 0x2ade90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2ade94: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2ADE94u;
    SET_GPR_U32(ctx, 31, 0x2ADE9Cu);
    ctx->pc = 0x2ADE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADE94u;
    // 0x2ade98: 0x1525021  addu        $t2, $t2, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2ADE94u, 0x2ADE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE9Cu;
label_2ade9c:
    // 0x2ade9c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2ADE9Cu;
    SET_GPR_U32(ctx, 31, 0x2ADEA4u);
    ctx->pc = 0x2ADEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADE9Cu;
    // 0x2adea0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2ADE9Cu, 0x2ADEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADEA4u;
label_2adea4:
    // 0x2adea4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2adea4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2adea8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2adea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adeac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2adeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adeb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2adeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adeb4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADEB4u;
    {
        const bool branch_taken_0x2adeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adeb4) {
            ctx->pc = 0x2ADEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADEB4u;
            // 0x2adeb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADEBCu;
            goto label_2adebc;
        }
    }
    ctx->pc = 0x2ADEBCu;
label_2adebc:
    // 0x2adebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2adebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adec0: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x2adec0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2adec4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2adec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adec8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2adec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2adecc: 0x5010  mfhi        $t2
    ctx->pc = 0x2adeccu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2aded0: 0x1531018  mult        $v0, $t2, $s3
    ctx->pc = 0x2aded0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aded4: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2ADED4u;
    SET_GPR_U32(ctx, 31, 0x2ADEDCu);
    ctx->pc = 0x2ADED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADED4u;
    // 0x2aded8: 0x525021  addu        $t2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2ADED4u, 0x2ADEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADEDCu;
label_2adedc:
    // 0x2adedc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2ADEDCu;
    SET_GPR_U32(ctx, 31, 0x2ADEE4u);
    ctx->pc = 0x2ADEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADEDCu;
    // 0x2adee0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2ADEDCu, 0x2ADEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADEE4u;
label_2adee4:
    // 0x2adee4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2adee4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2adee8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2ADEE8u;
    {
        const bool branch_taken_0x2adee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEE8u;
        // 0x2adeec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adee8) {
            ctx->pc = 0x2ADF98u;
            goto label_2adf98;
        }
    }
    ctx->pc = 0x2ADEF0u;
label_2adef0:
    // 0x2adef0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2ADEF0u;
    SET_GPR_U32(ctx, 31, 0x2ADEF8u);
    ctx->pc = 0x2ADEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADEF0u;
    // 0x2adef4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2ADEF0u, 0x2ADEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADEF8u;
label_2adef8:
    // 0x2adef8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2adef8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2adefc: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x2adefcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2adf00: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2adf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2adf04: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADF04u;
    {
        const bool branch_taken_0x2adf04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf04) {
            ctx->pc = 0x2ADF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADF04u;
            // 0x2adf08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF0Cu;
            goto label_2adf0c;
        }
    }
    ctx->pc = 0x2ADF0Cu;
label_2adf0c:
    // 0x2adf0c: 0x2451d688  addiu       $s1, $v0, -0x2978
    ctx->pc = 0x2adf0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956680));
    // 0x2adf10: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x2adf10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x2adf14: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x2adf14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x2adf18: 0x2652c1c0  addiu       $s2, $s2, -0x3E40
    ctx->pc = 0x2adf18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951360));
    // 0x2adf1c: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x2adf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2adf20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2adf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adf24: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x2adf24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2adf28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2adf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2adf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2adf30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2adf34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adf38: 0x5010  mfhi        $t2
    ctx->pc = 0x2adf38u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2adf3c: 0x1535018  mult        $t2, $t2, $s3
    ctx->pc = 0x2adf3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2adf40: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2ADF40u;
    SET_GPR_U32(ctx, 31, 0x2ADF48u);
    ctx->pc = 0x2ADF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF40u;
    // 0x2adf44: 0x1525021  addu        $t2, $t2, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2ADF40u, 0x2ADF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF48u;
label_2adf48:
    // 0x2adf48: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2ADF48u;
    SET_GPR_U32(ctx, 31, 0x2ADF50u);
    ctx->pc = 0x2ADF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF48u;
    // 0x2adf4c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2ADF48u, 0x2ADF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF50u;
label_2adf50:
    // 0x2adf50: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2adf50u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2adf54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2adf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adf58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2adf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adf5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2adf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf60: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADF60u;
    {
        const bool branch_taken_0x2adf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf60) {
            ctx->pc = 0x2ADF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADF60u;
            // 0x2adf64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF68u;
            goto label_2adf68;
        }
    }
    ctx->pc = 0x2ADF68u;
label_2adf68:
    // 0x2adf68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2adf68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf6c: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x2adf6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2adf70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2adf70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2adf74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2adf78: 0x5010  mfhi        $t2
    ctx->pc = 0x2adf78u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2adf7c: 0x1531018  mult        $v0, $t2, $s3
    ctx->pc = 0x2adf7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2adf80: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2ADF80u;
    SET_GPR_U32(ctx, 31, 0x2ADF88u);
    ctx->pc = 0x2ADF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF80u;
    // 0x2adf84: 0x525021  addu        $t2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2ADF80u, 0x2ADF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF88u;
label_2adf88:
    // 0x2adf88: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2ADF88u;
    SET_GPR_U32(ctx, 31, 0x2ADF90u);
    ctx->pc = 0x2ADF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF88u;
    // 0x2adf8c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2ADF88u, 0x2ADF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF90u;
label_2adf90:
    // 0x2adf90: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2adf90u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2adf94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2adf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2adf98:
    // 0x2adf98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2adf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adf9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2adf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfa0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADFA0u;
    {
        const bool branch_taken_0x2adfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adfa0) {
            ctx->pc = 0x2ADFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADFA0u;
            // 0x2adfa4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADFA8u;
            goto label_2adfa8;
        }
    }
    ctx->pc = 0x2ADFA8u;
label_2adfa8:
    // 0x2adfa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2adfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfac: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x2adfacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2adfb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2adfb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfb4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2adfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adfb8: 0x5010  mfhi        $t2
    ctx->pc = 0x2adfb8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2adfbc: 0x1531018  mult        $v0, $t2, $s3
    ctx->pc = 0x2adfbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2adfc0: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2ADFC0u;
    SET_GPR_U32(ctx, 31, 0x2ADFC8u);
    ctx->pc = 0x2ADFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADFC0u;
    // 0x2adfc4: 0x525021  addu        $t2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2ADFC0u, 0x2ADFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADFC8u;
label_2adfc8:
    // 0x2adfc8: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x2adfc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2adfcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2adfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfd0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2adfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfd4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2adfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2adfd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2adfd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2adfdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfe0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2adfe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2adfe4: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2ADFE4u;
    SET_GPR_U32(ctx, 31, 0x2ADFECu);
    ctx->pc = 0x2ADFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADFE4u;
    // 0x2adfe8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2ADFE4u, 0x2ADFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADFECu;
label_2adfec:
    // 0x2adfec: 0x12e00062  beqz        $s7, . + 4 + (0x62 << 2)
    ctx->pc = 0x2ADFECu;
    {
        const bool branch_taken_0x2adfec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFECu;
        // 0x2adff0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfec) {
            ctx->pc = 0x2AE178u;
            goto label_2ae178;
        }
    }
    ctx->pc = 0x2ADFF4u;
    // 0x2adff4: 0x12c00061  beqz        $s6, . + 4 + (0x61 << 2)
    ctx->pc = 0x2ADFF4u;
    {
        const bool branch_taken_0x2adff4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFF4u;
        // 0x2adff8: 0x2462d688  addiu       $v0, $v1, -0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adff4) {
            ctx->pc = 0x2AE17Cu;
            goto label_2ae17c;
        }
    }
    ctx->pc = 0x2ADFFCu;
    // 0x2adffc: 0x12000060  beqz        $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2ADFFCu;
    {
        const bool branch_taken_0x2adffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFFCu;
        // 0x2ae000: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adffc) {
            ctx->pc = 0x2AE180u;
            goto label_2ae180;
        }
    }
    ctx->pc = 0x2AE004u;
    // 0x2ae004: 0xc7808f44  lwc1        $f0, -0x70BC($gp)
    ctx->pc = 0x2ae004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae008: 0xc7828f48  lwc1        $f2, -0x70B8($gp)
    ctx->pc = 0x2ae008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ae00c: 0xe6e00030  swc1        $f0, 0x30($s7)
    ctx->pc = 0x2ae00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 48), bits); }
    // 0x2ae010: 0xc7818f4c  lwc1        $f1, -0x70B4($gp)
    ctx->pc = 0x2ae010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae014: 0xe6c20030  swc1        $f2, 0x30($s6)
    ctx->pc = 0x2ae014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 48), bits); }
    // 0x2ae018: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2AE018u;
    {
        const bool branch_taken_0x2ae018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE018u;
        // 0x2ae01c: 0xe6010030  swc1        $f1, 0x30($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae018) {
            ctx->pc = 0x2AE180u;
            goto label_2ae180;
        }
    }
    ctx->pc = 0x2AE020u;
label_2ae020:
    // 0x2ae020: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ae020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ae024: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae028: 0x2462d688  addiu       $v0, $v1, -0x2978
    ctx->pc = 0x2ae028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
    // 0x2ae02c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE02Cu;
    {
        const bool branch_taken_0x2ae02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE02Cu;
        // 0x2ae030: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae02c) {
            ctx->pc = 0x2AE044u;
            goto label_2ae044;
        }
    }
    ctx->pc = 0x2AE034u;
label_2ae034:
    // 0x2ae034: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ae034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ae038: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae03c: 0x2462d688  addiu       $v0, $v1, -0x2978
    ctx->pc = 0x2ae03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
    // 0x2ae040: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ae040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ae044:
    // 0x2ae044: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ae044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ae048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae04c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2ae04cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2ae050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae054: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ae054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae058: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2AE058u;
    SET_GPR_U32(ctx, 31, 0x2AE060u);
    ctx->pc = 0x2AE05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE058u;
    // 0x2ae05c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2AE058u, 0x2AE060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE060u;
label_2ae060:
    // 0x2ae060: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2AE060u;
    {
        const bool branch_taken_0x2ae060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE060u;
        // 0x2ae064: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae060) {
            ctx->pc = 0x2AE178u;
            goto label_2ae178;
        }
    }
    ctx->pc = 0x2AE068u;
label_2ae068:
    // 0x2ae068: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ae068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ae06c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ae06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ae070: 0x2450d688  addiu       $s0, $v0, -0x2978
    ctx->pc = 0x2ae070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956680));
    // 0x2ae074: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae078: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x2ae078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2ae07c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae080: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2ae080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2ae084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae088: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2ae088u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae08c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ae08cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae090: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2AE090u;
    SET_GPR_U32(ctx, 31, 0x2AE098u);
    ctx->pc = 0x2AE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE090u;
    // 0x2ae094: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2AE090u, 0x2AE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE098u;
label_2ae098:
    // 0x2ae098: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2ae098u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae09c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ae09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ae0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ae0a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0b0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ae0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae0b4: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2AE0B4u;
    SET_GPR_U32(ctx, 31, 0x2AE0BCu);
    ctx->pc = 0x2AE0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE0B4u;
    // 0x2ae0b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2AE0B4u, 0x2AE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE0BCu;
label_2ae0bc:
    // 0x2ae0bc: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2ae0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae0c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ae0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0c4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ae0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ae0c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae0d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ae0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae0d8: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2AE0D8u;
    SET_GPR_U32(ctx, 31, 0x2AE0E0u);
    ctx->pc = 0x2AE0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE0D8u;
    // 0x2ae0dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2AE0D8u, 0x2AE0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE0E0u;
label_2ae0e0:
    // 0x2ae0e0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2AE0E0u;
    {
        const bool branch_taken_0x2ae0e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0E0u;
        // 0x2ae0e4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0e0) {
            ctx->pc = 0x2AE10Cu;
            goto label_2ae10c;
        }
    }
    ctx->pc = 0x2AE0E8u;
    // 0x2ae0e8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE0E8u;
    {
        const bool branch_taken_0x2ae0e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0E8u;
        // 0x2ae0ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0e8) {
            ctx->pc = 0x2AE110u;
            goto label_2ae110;
        }
    }
    ctx->pc = 0x2AE0F0u;
    // 0x2ae0f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE0F0u;
    {
        const bool branch_taken_0x2ae0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae0f0) {
            ctx->pc = 0x2AE0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE0F0u;
            // 0x2ae0f4: 0x2462d688  addiu       $v0, $v1, -0x2978 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE114u;
            goto label_2ae114;
        }
    }
    ctx->pc = 0x2AE0F8u;
    // 0x2ae0f8: 0xc7808f50  lwc1        $f0, -0x70B0($gp)
    ctx->pc = 0x2ae0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae0fc: 0xc7818f54  lwc1        $f1, -0x70AC($gp)
    ctx->pc = 0x2ae0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae100: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2ae100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2ae104: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x2ae104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2ae108: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ae108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_2ae10c:
    // 0x2ae10c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ae110:
    // 0x2ae110: 0x2462d688  addiu       $v0, $v1, -0x2978
    ctx->pc = 0x2ae110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
label_2ae114:
    // 0x2ae114: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ae114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ae118: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ae118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ae11c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae120: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2ae120u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2ae124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae128: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ae128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae12c: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2AE12Cu;
    SET_GPR_U32(ctx, 31, 0x2AE134u);
    ctx->pc = 0x2AE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE12Cu;
    // 0x2ae130: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2AE12Cu, 0x2AE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE134u;
label_2ae134:
    // 0x2ae134: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AE134u;
    {
        const bool branch_taken_0x2ae134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE134u;
        // 0x2ae138: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae134) {
            ctx->pc = 0x2AE178u;
            goto label_2ae178;
        }
    }
    ctx->pc = 0x2AE13Cu;
    // 0x2ae13c: 0xc7808f58  lwc1        $f0, -0x70A8($gp)
    ctx->pc = 0x2ae13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae140: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AE140u;
    {
        const bool branch_taken_0x2ae140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE140u;
        // 0x2ae144: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae140) {
            ctx->pc = 0x2AE178u;
            goto label_2ae178;
        }
    }
    ctx->pc = 0x2AE148u;
label_2ae148:
    // 0x2ae148: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ae148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ae14c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae150: 0x2462d688  addiu       $v0, $v1, -0x2978
    ctx->pc = 0x2ae150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
    // 0x2ae154: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ae154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ae158: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ae158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ae15c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae160: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2ae160u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2ae164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae168: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ae168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae16c: 0xc0aab64  jal         func_2AAD90
    ctx->pc = 0x2AE16Cu;
    SET_GPR_U32(ctx, 31, 0x2AE174u);
    ctx->pc = 0x2AE170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE16Cu;
    // 0x2ae170: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD90u, 0x2AE16Cu, 0x2AE174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE174u;
label_2ae174:
    // 0x2ae174: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ae174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_2ae178:
    // 0x2ae178: 0x2462d688  addiu       $v0, $v1, -0x2978
    ctx->pc = 0x2ae178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956680));
label_2ae17c:
    // 0x2ae17c: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x2ae17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2ae180:
    // 0x2ae180: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x2ae180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ae184: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2ae184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ae188: 0x3880b  movn        $s1, $zero, $v1
    ctx->pc = 0x2ae188u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2ae18c:
    // 0x2ae18c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ae18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae190: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2ae190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ae194: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2ae194u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ae198: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2ae198u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ae19c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2ae19cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ae1a0: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2ae1a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ae1a4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2ae1a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae1a8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2ae1a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae1ac: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2ae1acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae1b0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2ae1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae1b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2ae1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1B8u;
        // 0x2ae1bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE1C0u;
}
