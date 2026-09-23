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

// Function: inflate_codes
// Address: 0x21ad98 - 0x21b2e0
void inflate_codes_0x21ad98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("inflate_codes_0x21ad98");
#endif

    switch (ctx->pc) {
        case 0x21ae10u: goto label_21ae10;
        case 0x21ae20u: goto label_21ae20;
        case 0x21aea8u: goto label_21aea8;
        case 0x21af30u: goto label_21af30;
        case 0x21af58u: goto label_21af58;
        case 0x21aff0u: goto label_21aff0;
        case 0x21b078u: goto label_21b078;
        case 0x21b0c0u: goto label_21b0c0;
        case 0x21b0c8u: goto label_21b0c8;
        case 0x21b100u: goto label_21b100;
        case 0x21b114u: goto label_21b114;
        case 0x21b118u: goto label_21b118;
        case 0x21b128u: goto label_21b128;
        case 0x21b1b0u: goto label_21b1b0;
        case 0x21b1e0u: goto label_21b1e0;
        case 0x21b28cu: goto label_21b28c;
        default: break;
    }

    ctx->pc = 0x21ad98u;

    // 0x21ad98: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21ad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21ad9c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21ada0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x21ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x21ada4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x21ada4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ada8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x21ada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x21adac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x21adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x21adb0: 0x2466c310  addiu       $a2, $v1, -0x3CF0
    ctx->pc = 0x21adb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951696));
    // 0x21adb4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x21adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x21adb8: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x21adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x21adbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x21adbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x21adc0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21adc4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x21adc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x21adc8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x21adc8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21adcc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x21adccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x21add0: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x21add0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x21add4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x21add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x21add8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x21add8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21addc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x21addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x21ade0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21ade4: 0x8f93b6e4  lw          $s3, -0x491C($gp)
    ctx->pc = 0x21ade4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948580)));
    // 0x21ade8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x21ade8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21adec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x21adecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x21adf0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x21adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x21adf4: 0x8f92b6e8  lw          $s2, -0x4918($gp)
    ctx->pc = 0x21adf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948584)));
    // 0x21adf8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x21adf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21adfc: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x21adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x21ae00: 0x8f94b6d8  lw          $s4, -0x4928($gp)
    ctx->pc = 0x21ae00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x21ae04: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x21AE04u;
    {
        const bool branch_taken_0x21ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE04u;
        // 0x21ae08: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae04) {
            ctx->pc = 0x21B114u;
            goto label_21b114;
        }
    }
    ctx->pc = 0x21AE0Cu;
    // 0x21ae0c: 0x0  nop
    ctx->pc = 0x21ae0cu;
    // NOP
label_21ae10:
    // 0x21ae10: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21AE10u;
    {
        const bool branch_taken_0x21ae10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE10u;
        // 0x21ae14: 0x8f85b6d0  lw          $a1, -0x4930($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae10) {
            ctx->pc = 0x21AE70u;
            goto label_21ae70;
        }
    }
    ctx->pc = 0x21AE18u;
    // 0x21ae18: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x21ae18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21ae1c: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
label_21ae20:
    // 0x21ae20: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x21ae20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21ae24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21AE24u;
    {
        const bool branch_taken_0x21ae24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE24u;
        // 0x21ae28: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae24) {
            ctx->pc = 0x21AE48u;
            goto label_21ae48;
        }
    }
    ctx->pc = 0x21AE2Cu;
    // 0x21ae2c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ae30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ae34: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21ae34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ae38: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21ae3c: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x21ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x21ae40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21AE40u;
    {
        const bool branch_taken_0x21ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE40u;
        // 0x21ae44: 0x2639825  or          $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae40) {
            ctx->pc = 0x21AE58u;
            goto label_21ae58;
        }
    }
    ctx->pc = 0x21AE48u;
label_21ae48:
    // 0x21ae48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21ae4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ae50: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x21ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x21ae54: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x21ae54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_21ae58:
    // 0x21ae58: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x21ae58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21ae5c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x21ae5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21ae60: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21AE60u;
    {
        const bool branch_taken_0x21ae60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE60u;
        // 0x21ae64: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae60) {
            ctx->pc = 0x21AE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ae20;
        }
    }
    ctx->pc = 0x21AE68u;
    // 0x21ae68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AE68u;
    {
        const bool branch_taken_0x21ae68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE68u;
        // 0x21ae6c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae68) {
            ctx->pc = 0x21AE78u;
            goto label_21ae78;
        }
    }
    ctx->pc = 0x21AE70u;
label_21ae70:
    // 0x21ae70: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x21ae70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21ae74: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_21ae78:
    // 0x21ae78: 0x95050004  lhu         $a1, 0x4($t0)
    ctx->pc = 0x21ae78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x21ae7c: 0x2443c310  addiu       $v1, $v0, -0x3CF0
    ctx->pc = 0x21ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
    // 0x21ae80: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x21ae80u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x21ae84: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x21ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21ae88: 0x25e202b  sltu        $a0, $s2, $fp
    ctx->pc = 0x21ae88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x21ae8c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21ae8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ae90: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x21ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x21ae94: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x21ae94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21ae98: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21AE98u;
    {
        const bool branch_taken_0x21ae98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE98u;
        // 0x21ae9c: 0x2139806  srlv        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae98) {
            ctx->pc = 0x21AEF0u;
            goto label_21aef0;
        }
    }
    ctx->pc = 0x21AEA0u;
    // 0x21aea0: 0x8f85b6d0  lw          $a1, -0x4930($gp)
    ctx->pc = 0x21aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21aea4: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
label_21aea8:
    // 0x21aea8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x21aea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21aeac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21AEACu;
    {
        const bool branch_taken_0x21aeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEACu;
        // 0x21aeb0: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aeac) {
            ctx->pc = 0x21AED0u;
            goto label_21aed0;
        }
    }
    ctx->pc = 0x21AEB4u;
    // 0x21aeb4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21aeb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21aebc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21aebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21aec0: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21aec4: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x21aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x21aec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21AEC8u;
    {
        const bool branch_taken_0x21aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEC8u;
        // 0x21aecc: 0x2639825  or          $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aec8) {
            ctx->pc = 0x21AEE0u;
            goto label_21aee0;
        }
    }
    ctx->pc = 0x21AED0u;
label_21aed0:
    // 0x21aed0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21aed4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21aed8: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x21aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x21aedc: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x21aedcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_21aee0:
    // 0x21aee0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x21aee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21aee4: 0x25e102b  sltu        $v0, $s2, $fp
    ctx->pc = 0x21aee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x21aee8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21AEE8u;
    {
        const bool branch_taken_0x21aee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEE8u;
        // 0x21aeec: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aee8) {
            ctx->pc = 0x21AEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aea8;
        }
    }
    ctx->pc = 0x21AEF0u;
label_21aef0:
    // 0x21aef0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x21aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21aef4: 0x2631024  and         $v0, $s3, $v1
    ctx->pc = 0x21aef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x21aef8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21aefc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21af00: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x21af00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21af04: 0x91100000  lbu         $s0, 0x0($t0)
    ctx->pc = 0x21af04u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21af08: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x21af08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x21af0c: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x21AF0Cu;
    {
        const bool branch_taken_0x21af0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af0c) {
            ctx->pc = 0x21AF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AF0Cu;
            // 0x21af10: 0x91030001  lbu         $v1, 0x1($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AFCCu;
            goto label_21afcc;
        }
    }
    ctx->pc = 0x21AF14u;
    // 0x21af14: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x21af14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x21af18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21af18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21af1c: 0x8f89b6c8  lw          $t1, -0x4938($gp)
    ctx->pc = 0x21af1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
    // 0x21af20: 0x244bc310  addiu       $t3, $v0, -0x3CF0
    ctx->pc = 0x21af20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
    // 0x21af24: 0x240a0063  addiu       $t2, $zero, 0x63
    ctx->pc = 0x21af24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21af28: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x21af28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x21af2c: 0x0  nop
    ctx->pc = 0x21af2cu;
    // NOP
label_21af30:
    // 0x21af30: 0x120a00a1  beq         $s0, $t2, . + 4 + (0xA1 << 2)
    ctx->pc = 0x21AF30u;
    {
        const bool branch_taken_0x21af30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x21AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF30u;
        // 0x21af34: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af30) {
            ctx->pc = 0x21B1B8u;
            goto label_21b1b8;
        }
    }
    ctx->pc = 0x21AF38u;
    // 0x21af38: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x21af38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x21af3c: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x21af3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x21af40: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x21af40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21af44: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21AF44u;
    {
        const bool branch_taken_0x21af44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF44u;
        // 0x21af48: 0x739806  srlv        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af44) {
            ctx->pc = 0x21AF9Cu;
            goto label_21af9c;
        }
    }
    ctx->pc = 0x21AF4Cu;
    // 0x21af4c: 0x8f85b6d0  lw          $a1, -0x4930($gp)
    ctx->pc = 0x21af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21af50: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x21af50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21af54: 0x8f84b6cc  lw          $a0, -0x4934($gp)
    ctx->pc = 0x21af54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
label_21af58:
    // 0x21af58: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x21af58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21af5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21AF5Cu;
    {
        const bool branch_taken_0x21af5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF5Cu;
        // 0x21af60: 0x1241021  addu        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af5c) {
            ctx->pc = 0x21AF7Cu;
            goto label_21af7c;
        }
    }
    ctx->pc = 0x21AF64u;
    // 0x21af64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21af64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21af68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21af68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21af6c: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21af70: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x21af70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x21af74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AF74u;
    {
        const bool branch_taken_0x21af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF74u;
        // 0x21af78: 0x2639825  or          $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af74) {
            ctx->pc = 0x21AF84u;
            goto label_21af84;
        }
    }
    ctx->pc = 0x21AF7Cu;
label_21af7c:
    // 0x21af7c: 0x2461004  sllv        $v0, $a2, $s2
    ctx->pc = 0x21af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
    // 0x21af80: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x21af80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_21af84:
    // 0x21af84: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x21af84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21af88: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x21af88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21af8c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x21AF8Cu;
    {
        const bool branch_taken_0x21af8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF8Cu;
        // 0x21af90: 0x8f84b6cc  lw          $a0, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af8c) {
            ctx->pc = 0x21AF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21af58;
        }
    }
    ctx->pc = 0x21AF94u;
    // 0x21af94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AF94u;
    {
        const bool branch_taken_0x21af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF94u;
        // 0x21af98: 0xeb1821  addu        $v1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af94) {
            ctx->pc = 0x21AFA4u;
            goto label_21afa4;
        }
    }
    ctx->pc = 0x21AF9Cu;
label_21af9c:
    // 0x21af9c: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x21af9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21afa0: 0xeb1821  addu        $v1, $a3, $t3
    ctx->pc = 0x21afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_21afa4:
    // 0x21afa4: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x21afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x21afa8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21afa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21afac: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x21afacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x21afb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21afb4: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x21afb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21afb8: 0x91100000  lbu         $s0, 0x0($t0)
    ctx->pc = 0x21afb8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21afbc: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x21afbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x21afc0: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x21AFC0u;
    {
        const bool branch_taken_0x21afc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21afc0) {
            ctx->pc = 0x21AF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21af30;
        }
    }
    ctx->pc = 0x21AFC8u;
    // 0x21afc8: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x21afc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_21afcc:
    // 0x21afcc: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x21afccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x21afd0: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x21afd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21afd4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21AFD4u;
    {
        const bool branch_taken_0x21afd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFD4u;
        // 0x21afd8: 0x739806  srlv        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afd4) {
            ctx->pc = 0x21B040u;
            goto label_21b040;
        }
    }
    ctx->pc = 0x21AFDCu;
    // 0x21afdc: 0x8f85b6d0  lw          $a1, -0x4930($gp)
    ctx->pc = 0x21afdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21afe0: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x21afe0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21afe4: 0x8f86b6d4  lw          $a2, -0x492C($gp)
    ctx->pc = 0x21afe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948564)));
    // 0x21afe8: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21afec: 0x0  nop
    ctx->pc = 0x21afecu;
    // NOP
label_21aff0:
    // 0x21aff0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x21aff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21aff4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21AFF4u;
    {
        const bool branch_taken_0x21aff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFF4u;
        // 0x21aff8: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aff4) {
            ctx->pc = 0x21B018u;
            goto label_21b018;
        }
    }
    ctx->pc = 0x21AFFCu;
    // 0x21affc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21affcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b004: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b008: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b00c: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x21b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x21b010: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B010u;
    {
        const bool branch_taken_0x21b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B010u;
        // 0x21b014: 0x2639825  or          $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b010) {
            ctx->pc = 0x21B028u;
            goto label_21b028;
        }
    }
    ctx->pc = 0x21B018u;
label_21b018:
    // 0x21b018: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b01c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b020: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x21b020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x21b024: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x21b024u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_21b028:
    // 0x21b028: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x21b028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21b02c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x21b02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21b030: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B030u;
    {
        const bool branch_taken_0x21b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B030u;
        // 0x21b034: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b030) {
            ctx->pc = 0x21AFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aff0;
        }
    }
    ctx->pc = 0x21B038u;
    // 0x21b038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B038u;
    {
        const bool branch_taken_0x21b038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B038u;
        // 0x21b03c: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b038) {
            ctx->pc = 0x21B04Cu;
            goto label_21b04c;
        }
    }
    ctx->pc = 0x21B040u;
label_21b040:
    // 0x21b040: 0x8f86b6d4  lw          $a2, -0x492C($gp)
    ctx->pc = 0x21b040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948564)));
    // 0x21b044: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x21b044u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21b048: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21b048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_21b04c:
    // 0x21b04c: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x21b04cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x21b050: 0x2462c310  addiu       $v0, $v1, -0x3CF0
    ctx->pc = 0x21b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951696));
    // 0x21b054: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x21b054u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x21b058: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21b05c: 0x2842023  subu        $a0, $s4, $a0
    ctx->pc = 0x21b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x21b060: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x21b060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b064: 0x257a82b  sltu        $s5, $s2, $s7
    ctx->pc = 0x21b064u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x21b068: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x21b068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x21b06c: 0x838823  subu        $s1, $a0, $v1
    ctx->pc = 0x21b06cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21b070: 0x2139806  srlv        $s3, $s3, $s0
    ctx->pc = 0x21b070u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b074: 0x0  nop
    ctx->pc = 0x21b074u;
    // NOP
label_21b078:
    // 0x21b078: 0x32317fff  andi        $s1, $s1, 0x7FFF
    ctx->pc = 0x21b078u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32767);
    // 0x21b07c: 0x291102b  sltu        $v0, $s4, $s1
    ctx->pc = 0x21b07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x21b080: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B080u;
    {
        const bool branch_taken_0x21b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B080u;
        // 0x21b084: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b080) {
            ctx->pc = 0x21B090u;
            goto label_21b090;
        }
    }
    ctx->pc = 0x21B088u;
    // 0x21b088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21B088u;
    {
        const bool branch_taken_0x21b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B088u;
        // 0x21b08c: 0x518023  subu        $s0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b088) {
            ctx->pc = 0x21B094u;
            goto label_21b094;
        }
    }
    ctx->pc = 0x21B090u;
label_21b090:
    // 0x21b090: 0x548023  subu        $s0, $v0, $s4
    ctx->pc = 0x21b090u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_21b094:
    // 0x21b094: 0x2d0182b  sltu        $v1, $s6, $s0
    ctx->pc = 0x21b094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21b098: 0x2911023  subu        $v0, $s4, $s1
    ctx->pc = 0x21b098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x21b09c: 0x2c3800b  movn        $s0, $s6, $v1
    ctx->pc = 0x21b09cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
    // 0x21b0a0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x21b0a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21b0a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21B0A4u;
    {
        const bool branch_taken_0x21b0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0A4u;
        // 0x21b0a8: 0x2d0b023  subu        $s6, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0a4) {
            ctx->pc = 0x21B0CCu;
            goto label_21b0cc;
        }
    }
    ctx->pc = 0x21B0ACu;
    // 0x21b0ac: 0xd12821  addu        $a1, $a2, $s1
    ctx->pc = 0x21b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x21b0b0: 0xd42021  addu        $a0, $a2, $s4
    ctx->pc = 0x21b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x21b0b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21b0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0b8: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x21B0B8u;
    SET_GPR_U32(ctx, 31, 0x21B0C0u);
    ctx->pc = 0x21B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B0B8u;
    // 0x21b0bc: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x21B0B8u, 0x21B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0C0u;
label_21b0c0:
    // 0x21b0c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21B0C0u;
    {
        const bool branch_taken_0x21b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0C0u;
        // 0x21b0c4: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0c0) {
            ctx->pc = 0x21B0ECu;
            goto label_21b0ec;
        }
    }
    ctx->pc = 0x21B0C8u;
label_21b0c8:
    // 0x21b0c8: 0x8f86b6d4  lw          $a2, -0x492C($gp)
    ctx->pc = 0x21b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948564)));
label_21b0cc:
    // 0x21b0cc: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x21b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x21b0d0: 0xd42021  addu        $a0, $a2, $s4
    ctx->pc = 0x21b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x21b0d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b0d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b0dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21b0dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21b0e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x21b0e4: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21B0E4u;
    {
        const bool branch_taken_0x21b0e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0E4u;
        // 0x21b0e8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0e4) {
            ctx->pc = 0x21B0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b0c8;
        }
    }
    ctx->pc = 0x21B0ECu;
label_21b0ec:
    // 0x21b0ec: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x21b0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x21b0f0: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B0F0u;
    {
        const bool branch_taken_0x21b0f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b0f0) {
            ctx->pc = 0x21B104u;
            goto label_21b104;
        }
    }
    ctx->pc = 0x21B0F8u;
    // 0x21b0f8: 0xc086fa2  jal         func_21BE88
    ctx->pc = 0x21B0F8u;
    SET_GPR_U32(ctx, 31, 0x21B100u);
    ctx->pc = 0x21B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B0F8u;
    // 0x21b0fc: 0xaf94b6d8  sw          $s4, -0x4928($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948568), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE88u, 0x21B0F8u, 0x21B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B100u;
label_21b100:
    // 0x21b100: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21b100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b104:
    // 0x21b104: 0x16c0ffdc  bnez        $s6, . + 4 + (-0x24 << 2)
    ctx->pc = 0x21B104u;
    {
        const bool branch_taken_0x21b104 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B104u;
        // 0x21b108: 0x8f86b6d4  lw          $a2, -0x492C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b104) {
            ctx->pc = 0x21B078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b078;
        }
    }
    ctx->pc = 0x21B10Cu;
    // 0x21b10c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21B10Cu;
    {
        const bool branch_taken_0x21b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b10c) {
            ctx->pc = 0x21B118u;
            goto label_21b118;
        }
    }
    ctx->pc = 0x21B114u;
label_21b114:
    // 0x21b114: 0x257a82b  sltu        $s5, $s2, $s7
    ctx->pc = 0x21b114u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_21b118:
    // 0x21b118: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x21B118u;
    {
        const bool branch_taken_0x21b118 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B118u;
        // 0x21b11c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b118) {
            ctx->pc = 0x21B174u;
            goto label_21b174;
        }
    }
    ctx->pc = 0x21B120u;
    // 0x21b120: 0x8f85b6d0  lw          $a1, -0x4930($gp)
    ctx->pc = 0x21b120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21b124: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21b124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
label_21b128:
    // 0x21b128: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x21b128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21b12c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B12Cu;
    {
        const bool branch_taken_0x21b12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B12Cu;
        // 0x21b130: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b12c) {
            ctx->pc = 0x21B150u;
            goto label_21b150;
        }
    }
    ctx->pc = 0x21B134u;
    // 0x21b134: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21b134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b13c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b13cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b140: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b144: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x21b144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x21b148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B148u;
    {
        const bool branch_taken_0x21b148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B148u;
        // 0x21b14c: 0x2639825  or          $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b148) {
            ctx->pc = 0x21B160u;
            goto label_21b160;
        }
    }
    ctx->pc = 0x21B150u;
label_21b150:
    // 0x21b150: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b154: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b158: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x21b158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x21b15c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x21b15cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_21b160:
    // 0x21b160: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x21b160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21b164: 0x257102b  sltu        $v0, $s2, $s7
    ctx->pc = 0x21b164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x21b168: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B168u;
    {
        const bool branch_taken_0x21b168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B168u;
        // 0x21b16c: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b168) {
            ctx->pc = 0x21B128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b128;
        }
    }
    ctx->pc = 0x21B170u;
    // 0x21b170: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x21b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_21b174:
    // 0x21b174: 0x2631024  and         $v0, $s3, $v1
    ctx->pc = 0x21b174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x21b178: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21b178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b17c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21b180: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x21b180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b184: 0x91100000  lbu         $s0, 0x0($t0)
    ctx->pc = 0x21b184u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21b188: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x21b188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x21b18c: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x21B18Cu;
    {
        const bool branch_taken_0x21b18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b18c) {
            ctx->pc = 0x21B190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B18Cu;
            // 0x21b190: 0x91020001  lbu         $v0, 0x1($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B254u;
            goto label_21b254;
        }
    }
    ctx->pc = 0x21B194u;
    // 0x21b194: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x21b194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x21b198: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21b198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21b19c: 0x8f89b6c8  lw          $t1, -0x4938($gp)
    ctx->pc = 0x21b19cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
    // 0x21b1a0: 0x244bc310  addiu       $t3, $v0, -0x3CF0
    ctx->pc = 0x21b1a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
    // 0x21b1a4: 0x240a0063  addiu       $t2, $zero, 0x63
    ctx->pc = 0x21b1a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21b1a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x21b1a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x21b1ac: 0x0  nop
    ctx->pc = 0x21b1acu;
    // NOP
label_21b1b0:
    // 0x21b1b0: 0x560a0003  bnel        $s0, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B1B0u;
    {
        const bool branch_taken_0x21b1b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 10));
        if (branch_taken_0x21b1b0) {
            ctx->pc = 0x21B1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B1B0u;
            // 0x21b1b4: 0x91030001  lbu         $v1, 0x1($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B1C0u;
            goto label_21b1c0;
        }
    }
    ctx->pc = 0x21B1B8u;
label_21b1b8:
    // 0x21b1b8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x21B1B8u;
    {
        const bool branch_taken_0x21b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1B8u;
        // 0x21b1bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1b8) {
            ctx->pc = 0x21B2B0u;
            goto label_21b2b0;
        }
    }
    ctx->pc = 0x21B1C0u;
label_21b1c0:
    // 0x21b1c0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x21b1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x21b1c4: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x21b1c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x21b1c8: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x21b1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21b1cc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21B1CCu;
    {
        const bool branch_taken_0x21b1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1CCu;
        // 0x21b1d0: 0x739806  srlv        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1cc) {
            ctx->pc = 0x21B224u;
            goto label_21b224;
        }
    }
    ctx->pc = 0x21B1D4u;
    // 0x21b1d4: 0x8f85b6d0  lw          $a1, -0x4930($gp)
    ctx->pc = 0x21b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21b1d8: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x21b1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21b1dc: 0x8f84b6cc  lw          $a0, -0x4934($gp)
    ctx->pc = 0x21b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
label_21b1e0:
    // 0x21b1e0: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x21b1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21b1e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21B1E4u;
    {
        const bool branch_taken_0x21b1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1E4u;
        // 0x21b1e8: 0x1241021  addu        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1e4) {
            ctx->pc = 0x21B204u;
            goto label_21b204;
        }
    }
    ctx->pc = 0x21B1ECu;
    // 0x21b1ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b1f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21b1f4: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b1f8: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x21b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x21b1fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B1FCu;
    {
        const bool branch_taken_0x21b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1FCu;
        // 0x21b200: 0x2639825  or          $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1fc) {
            ctx->pc = 0x21B20Cu;
            goto label_21b20c;
        }
    }
    ctx->pc = 0x21B204u;
label_21b204:
    // 0x21b204: 0x2461004  sllv        $v0, $a2, $s2
    ctx->pc = 0x21b204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
    // 0x21b208: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x21b208u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_21b20c:
    // 0x21b20c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x21b20cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21b210: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x21b210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21b214: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x21B214u;
    {
        const bool branch_taken_0x21b214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B214u;
        // 0x21b218: 0x8f84b6cc  lw          $a0, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b214) {
            ctx->pc = 0x21B1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b1e0;
        }
    }
    ctx->pc = 0x21B21Cu;
    // 0x21b21c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B21Cu;
    {
        const bool branch_taken_0x21b21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B21Cu;
        // 0x21b220: 0xeb1821  addu        $v1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b21c) {
            ctx->pc = 0x21B22Cu;
            goto label_21b22c;
        }
    }
    ctx->pc = 0x21B224u;
label_21b224:
    // 0x21b224: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x21b224u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21b228: 0xeb1821  addu        $v1, $a3, $t3
    ctx->pc = 0x21b228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_21b22c:
    // 0x21b22c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x21b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x21b230: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21b230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b234: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x21b234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x21b238: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21b238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21b23c: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x21b23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21b240: 0x91100000  lbu         $s0, 0x0($t0)
    ctx->pc = 0x21b240u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21b244: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x21b244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x21b248: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x21B248u;
    {
        const bool branch_taken_0x21b248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b248) {
            ctx->pc = 0x21B1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b1b0;
        }
    }
    ctx->pc = 0x21B250u;
    // 0x21b250: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x21b250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_21b254:
    // 0x21b254: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x21b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21b258: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x21b258u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21b25c: 0x1603000d  bne         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21B25Cu;
    {
        const bool branch_taken_0x21b25c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x21B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B25Cu;
        // 0x21b260: 0x539806  srlv        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b25c) {
            ctx->pc = 0x21B294u;
            goto label_21b294;
        }
    }
    ctx->pc = 0x21B264u;
    // 0x21b264: 0x8f82b6d4  lw          $v0, -0x492C($gp)
    ctx->pc = 0x21b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948564)));
    // 0x21b268: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x21b268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x21b26c: 0x91030004  lbu         $v1, 0x4($t0)
    ctx->pc = 0x21b26cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x21b270: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x21b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21b274: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21b274u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21b278: 0x1684ffa6  bne         $s4, $a0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x21B278u;
    {
        const bool branch_taken_0x21b278 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x21B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B278u;
        // 0x21b27c: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b278) {
            ctx->pc = 0x21B114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b114;
        }
    }
    ctx->pc = 0x21B280u;
    // 0x21b280: 0xaf94b6d8  sw          $s4, -0x4928($gp)
    ctx->pc = 0x21b280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948568), GPR_U32(ctx, 20));
    // 0x21b284: 0xc086fa2  jal         func_21BE88
    ctx->pc = 0x21B284u;
    SET_GPR_U32(ctx, 31, 0x21B28Cu);
    ctx->pc = 0x21B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B284u;
    // 0x21b288: 0x257a82b  sltu        $s5, $s2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE88u, 0x21B284u, 0x21B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B28Cu;
label_21b28c:
    // 0x21b28c: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x21B28Cu;
    {
        const bool branch_taken_0x21b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B28Cu;
        // 0x21b290: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b28c) {
            ctx->pc = 0x21B118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b118;
        }
    }
    ctx->pc = 0x21B294u;
label_21b294:
    // 0x21b294: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x21b294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21b298: 0x1602fedd  bne         $s0, $v0, . + 4 + (-0x123 << 2)
    ctx->pc = 0x21B298u;
    {
        const bool branch_taken_0x21b298 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B298u;
        // 0x21b29c: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b298) {
            ctx->pc = 0x21AE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ae10;
        }
    }
    ctx->pc = 0x21B2A0u;
    // 0x21b2a0: 0xaf94b6d8  sw          $s4, -0x4928($gp)
    ctx->pc = 0x21b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948568), GPR_U32(ctx, 20));
    // 0x21b2a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b2a8: 0xaf93b6e4  sw          $s3, -0x491C($gp)
    ctx->pc = 0x21b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948580), GPR_U32(ctx, 19));
    // 0x21b2ac: 0xaf92b6e8  sw          $s2, -0x4918($gp)
    ctx->pc = 0x21b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948584), GPR_U32(ctx, 18));
label_21b2b0:
    // 0x21b2b0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x21b2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b2b4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x21b2b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b2b8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x21b2b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21b2bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x21b2bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21b2c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x21b2c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21b2c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x21b2c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b2c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x21b2c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b2cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x21b2ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b2d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x21b2d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b2d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21b2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21B2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2D8u;
        // 0x21b2dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B2E0u;
}
