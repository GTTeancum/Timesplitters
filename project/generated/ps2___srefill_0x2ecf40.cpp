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

// Function: __srefill
// Address: 0x2ecf40 - 0x2ed0b8
void ps2___srefill_0x2ecf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___srefill_0x2ecf40");
#endif

    switch (ctx->pc) {
        case 0x2ecf40u: goto label_2ecf40;
        case 0x2ecf44u: goto label_2ecf44;
        case 0x2ecf48u: goto label_2ecf48;
        case 0x2ecf4cu: goto label_2ecf4c;
        case 0x2ecf50u: goto label_2ecf50;
        case 0x2ecf54u: goto label_2ecf54;
        case 0x2ecf58u: goto label_2ecf58;
        case 0x2ecf5cu: goto label_2ecf5c;
        case 0x2ecf60u: goto label_2ecf60;
        case 0x2ecf64u: goto label_2ecf64;
        case 0x2ecf68u: goto label_2ecf68;
        case 0x2ecf6cu: goto label_2ecf6c;
        case 0x2ecf70u: goto label_2ecf70;
        case 0x2ecf74u: goto label_2ecf74;
        case 0x2ecf78u: goto label_2ecf78;
        case 0x2ecf7cu: goto label_2ecf7c;
        case 0x2ecf80u: goto label_2ecf80;
        case 0x2ecf84u: goto label_2ecf84;
        case 0x2ecf88u: goto label_2ecf88;
        case 0x2ecf8cu: goto label_2ecf8c;
        case 0x2ecf90u: goto label_2ecf90;
        case 0x2ecf94u: goto label_2ecf94;
        case 0x2ecf98u: goto label_2ecf98;
        case 0x2ecf9cu: goto label_2ecf9c;
        case 0x2ecfa0u: goto label_2ecfa0;
        case 0x2ecfa4u: goto label_2ecfa4;
        case 0x2ecfa8u: goto label_2ecfa8;
        case 0x2ecfacu: goto label_2ecfac;
        case 0x2ecfb0u: goto label_2ecfb0;
        case 0x2ecfb4u: goto label_2ecfb4;
        case 0x2ecfb8u: goto label_2ecfb8;
        case 0x2ecfbcu: goto label_2ecfbc;
        case 0x2ecfc0u: goto label_2ecfc0;
        case 0x2ecfc4u: goto label_2ecfc4;
        case 0x2ecfc8u: goto label_2ecfc8;
        case 0x2ecfccu: goto label_2ecfcc;
        case 0x2ecfd0u: goto label_2ecfd0;
        case 0x2ecfd4u: goto label_2ecfd4;
        case 0x2ecfd8u: goto label_2ecfd8;
        case 0x2ecfdcu: goto label_2ecfdc;
        case 0x2ecfe0u: goto label_2ecfe0;
        case 0x2ecfe4u: goto label_2ecfe4;
        case 0x2ecfe8u: goto label_2ecfe8;
        case 0x2ecfecu: goto label_2ecfec;
        case 0x2ecff0u: goto label_2ecff0;
        case 0x2ecff4u: goto label_2ecff4;
        case 0x2ecff8u: goto label_2ecff8;
        case 0x2ecffcu: goto label_2ecffc;
        case 0x2ed000u: goto label_2ed000;
        case 0x2ed004u: goto label_2ed004;
        case 0x2ed008u: goto label_2ed008;
        case 0x2ed00cu: goto label_2ed00c;
        case 0x2ed010u: goto label_2ed010;
        case 0x2ed014u: goto label_2ed014;
        case 0x2ed018u: goto label_2ed018;
        case 0x2ed01cu: goto label_2ed01c;
        case 0x2ed020u: goto label_2ed020;
        case 0x2ed024u: goto label_2ed024;
        case 0x2ed028u: goto label_2ed028;
        case 0x2ed02cu: goto label_2ed02c;
        case 0x2ed030u: goto label_2ed030;
        case 0x2ed034u: goto label_2ed034;
        case 0x2ed038u: goto label_2ed038;
        case 0x2ed03cu: goto label_2ed03c;
        case 0x2ed040u: goto label_2ed040;
        case 0x2ed044u: goto label_2ed044;
        case 0x2ed048u: goto label_2ed048;
        case 0x2ed04cu: goto label_2ed04c;
        case 0x2ed050u: goto label_2ed050;
        case 0x2ed054u: goto label_2ed054;
        case 0x2ed058u: goto label_2ed058;
        case 0x2ed05cu: goto label_2ed05c;
        case 0x2ed060u: goto label_2ed060;
        case 0x2ed064u: goto label_2ed064;
        case 0x2ed068u: goto label_2ed068;
        case 0x2ed06cu: goto label_2ed06c;
        case 0x2ed070u: goto label_2ed070;
        case 0x2ed074u: goto label_2ed074;
        case 0x2ed078u: goto label_2ed078;
        case 0x2ed07cu: goto label_2ed07c;
        case 0x2ed080u: goto label_2ed080;
        case 0x2ed084u: goto label_2ed084;
        case 0x2ed088u: goto label_2ed088;
        case 0x2ed08cu: goto label_2ed08c;
        case 0x2ed090u: goto label_2ed090;
        case 0x2ed094u: goto label_2ed094;
        case 0x2ed098u: goto label_2ed098;
        case 0x2ed09cu: goto label_2ed09c;
        case 0x2ed0a0u: goto label_2ed0a0;
        case 0x2ed0a4u: goto label_2ed0a4;
        case 0x2ed0a8u: goto label_2ed0a8;
        case 0x2ed0acu: goto label_2ed0ac;
        case 0x2ed0b0u: goto label_2ed0b0;
        case 0x2ed0b4u: goto label_2ed0b4;
        default: break;
    }

    ctx->pc = 0x2ecf40u;

label_2ecf40:
    // 0x2ecf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ecf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ecf44:
    // 0x2ecf44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ecf48:
    // 0x2ecf48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ecf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ecf4c:
    // 0x2ecf4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ecf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf50:
    // 0x2ecf50: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ecf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2ecf54:
    // 0x2ecf54: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2ecf58:
    if (ctx->pc == 0x2ECF58u) {
        ctx->pc = 0x2ECF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF54u;
        // 0x2ecf58: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF5Cu;
        goto label_2ecf5c;
    }
    ctx->pc = 0x2ECF54u;
    {
        const bool branch_taken_0x2ecf54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf54) {
            ctx->pc = 0x2ECF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECF54u;
            // 0x2ecf58: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF70u;
            goto label_2ecf70;
        }
    }
    ctx->pc = 0x2ECF5Cu;
label_2ecf5c:
    // 0x2ecf5c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ecf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ecf60:
    // 0x2ecf60: 0x8c43330c  lw          $v1, 0x330C($v0)
    ctx->pc = 0x2ecf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13068)));
label_2ecf64:
    // 0x2ecf64: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2ecf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_2ecf68:
    // 0x2ecf68: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2ecf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2ecf6c:
    // 0x2ecf6c: 0x0  nop
    ctx->pc = 0x2ecf6cu;
    // NOP
label_2ecf70:
    // 0x2ecf70: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2ecf74:
    if (ctx->pc == 0x2ECF74u) {
        ctx->pc = 0x2ECF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF70u;
        // 0x2ecf74: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF78u;
        goto label_2ecf78;
    }
    ctx->pc = 0x2ECF70u;
    {
        const bool branch_taken_0x2ecf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf70) {
            ctx->pc = 0x2ECF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECF70u;
            // 0x2ecf74: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF84u;
            goto label_2ecf84;
        }
    }
    ctx->pc = 0x2ECF78u;
label_2ecf78:
    // 0x2ecf78: 0xc0b923c  jal         func_2E48F0
label_2ecf7c:
    if (ctx->pc == 0x2ECF7Cu) {
        ctx->pc = 0x2ECF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF78u;
        // 0x2ecf7c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF80u;
        goto label_2ecf80;
    }
    ctx->pc = 0x2ECF78u;
    SET_GPR_U32(ctx, 31, 0x2ECF80u);
    ctx->pc = 0x2ECF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF78u;
    // 0x2ecf7c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48F0u, 0x2ECF78u, 0x2ECF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF80u;
label_2ecf80:
    // 0x2ecf80: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2ecf80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2ecf84:
    // 0x2ecf84: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2ecf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2ecf88:
    // 0x2ecf88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ecf8c:
    if (ctx->pc == 0x2ECF8Cu) {
        ctx->pc = 0x2ECF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF88u;
        // 0x2ecf8c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF90u;
        goto label_2ecf90;
    }
    ctx->pc = 0x2ECF88u;
    {
        const bool branch_taken_0x2ecf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF88u;
        // 0x2ecf8c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf88) {
            ctx->pc = 0x2ECFA8u;
            goto label_2ecfa8;
        }
    }
    ctx->pc = 0x2ECF90u;
label_2ecf90:
    // 0x2ecf90: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2ecf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2ecf94:
    // 0x2ecf94: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2ecf98:
    if (ctx->pc == 0x2ECF98u) {
        ctx->pc = 0x2ECF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF94u;
        // 0x2ecf98: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF9Cu;
        goto label_2ecf9c;
    }
    ctx->pc = 0x2ECF94u;
    {
        const bool branch_taken_0x2ecf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf94) {
            ctx->pc = 0x2ECF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECF94u;
            // 0x2ecf98: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECFECu;
            goto label_2ecfec;
        }
    }
    ctx->pc = 0x2ECF9Cu;
label_2ecf9c:
    // 0x2ecf9c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2ecf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2ecfa0:
    // 0x2ecfa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ecfa4:
    if (ctx->pc == 0x2ECFA4u) {
        ctx->pc = 0x2ECFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFA0u;
        // 0x2ecfa4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFA8u;
        goto label_2ecfa8;
    }
    ctx->pc = 0x2ECFA0u;
    {
        const bool branch_taken_0x2ecfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFA0u;
        // 0x2ecfa4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfa0) {
            ctx->pc = 0x2ECFB0u;
            goto label_2ecfb0;
        }
    }
    ctx->pc = 0x2ECFA8u;
label_2ecfa8:
    // 0x2ecfa8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2ecfac:
    if (ctx->pc == 0x2ECFACu) {
        ctx->pc = 0x2ECFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFA8u;
        // 0x2ecfac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFB0u;
        goto label_2ecfb0;
    }
    ctx->pc = 0x2ECFA8u;
    {
        const bool branch_taken_0x2ecfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFA8u;
        // 0x2ecfac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfa8) {
            ctx->pc = 0x2ED0A8u;
            goto label_2ed0a8;
        }
    }
    ctx->pc = 0x2ECFB0u;
label_2ecfb0:
    // 0x2ecfb0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ecfb4:
    if (ctx->pc == 0x2ECFB4u) {
        ctx->pc = 0x2ECFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFB0u;
        // 0x2ecfb4: 0x34620004  ori         $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFB8u;
        goto label_2ecfb8;
    }
    ctx->pc = 0x2ECFB0u;
    {
        const bool branch_taken_0x2ecfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFB0u;
        // 0x2ecfb4: 0x34620004  ori         $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfb0) {
            ctx->pc = 0x2ECFE4u;
            goto label_2ecfe4;
        }
    }
    ctx->pc = 0x2ECFB8u;
label_2ecfb8:
    // 0x2ecfb8: 0xc0bac14  jal         func_2EB050
label_2ecfbc:
    if (ctx->pc == 0x2ECFBCu) {
        ctx->pc = 0x2ECFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFB8u;
        // 0x2ecfbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFC0u;
        goto label_2ecfc0;
    }
    ctx->pc = 0x2ECFB8u;
    SET_GPR_U32(ctx, 31, 0x2ECFC0u);
    ctx->pc = 0x2ECFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFB8u;
    // 0x2ecfbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB050u, 0x2ECFB8u, 0x2ECFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFC0u;
label_2ecfc0:
    // 0x2ecfc0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_2ecfc4:
    if (ctx->pc == 0x2ECFC4u) {
        ctx->pc = 0x2ECFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFC0u;
        // 0x2ecfc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFC8u;
        goto label_2ecfc8;
    }
    ctx->pc = 0x2ECFC0u;
    {
        const bool branch_taken_0x2ecfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFC0u;
        // 0x2ecfc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfc0) {
            ctx->pc = 0x2ED0A8u;
            goto label_2ed0a8;
        }
    }
    ctx->pc = 0x2ECFC8u;
label_2ecfc8:
    // 0x2ecfc8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ecfc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2ecfcc:
    // 0x2ecfcc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2ecfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2ecfd0:
    // 0x2ecfd0: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ecfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_2ecfd4:
    // 0x2ecfd4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2ecfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2ecfd8:
    // 0x2ecfd8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2ecfd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2ecfdc:
    // 0x2ecfdc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ecfdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ecfe0:
    // 0x2ecfe0: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x2ecfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2ecfe4:
    // 0x2ecfe4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2ecfe8:
    if (ctx->pc == 0x2ECFE8u) {
        ctx->pc = 0x2ECFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFE4u;
        // 0x2ecfe8: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFECu;
        goto label_2ecfec;
    }
    ctx->pc = 0x2ECFE4u;
    {
        const bool branch_taken_0x2ecfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFE4u;
        // 0x2ecfe8: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfe4) {
            ctx->pc = 0x2ED024u;
            goto label_2ed024;
        }
    }
    ctx->pc = 0x2ECFECu;
label_2ecfec:
    // 0x2ecfec: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_2ecff0:
    if (ctx->pc == 0x2ECFF0u) {
        ctx->pc = 0x2ECFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFECu;
        // 0x2ecff0: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFF4u;
        goto label_2ecff4;
    }
    ctx->pc = 0x2ECFECu;
    {
        const bool branch_taken_0x2ecfec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFECu;
        // 0x2ecff0: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfec) {
            ctx->pc = 0x2ED024u;
            goto label_2ed024;
        }
    }
    ctx->pc = 0x2ECFF4u;
label_2ecff4:
    // 0x2ecff4: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
label_2ecff8:
    if (ctx->pc == 0x2ECFF8u) {
        ctx->pc = 0x2ECFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFF4u;
        // 0x2ecff8: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFFCu;
        goto label_2ecffc;
    }
    ctx->pc = 0x2ECFF4u;
    {
        const bool branch_taken_0x2ecff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecff4) {
            ctx->pc = 0x2ECFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFF4u;
            // 0x2ecff8: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED008u;
            goto label_2ed008;
        }
    }
    ctx->pc = 0x2ECFFCu;
label_2ecffc:
    // 0x2ecffc: 0xc0bac9e  jal         func_2EB278
label_2ed000:
    if (ctx->pc == 0x2ED000u) {
        ctx->pc = 0x2ED000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFFCu;
        // 0x2ed000: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED004u;
        goto label_2ed004;
    }
    ctx->pc = 0x2ECFFCu;
    SET_GPR_U32(ctx, 31, 0x2ED004u);
    ctx->pc = 0x2ED000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFFCu;
    // 0x2ed000: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB278u, 0x2ECFFCu, 0x2ED004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED004u;
label_2ed004:
    // 0x2ed004: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2ed004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2ed008:
    // 0x2ed008: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2ed008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2ed00c:
    // 0x2ed00c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ed010:
    if (ctx->pc == 0x2ED010u) {
        ctx->pc = 0x2ED010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED00Cu;
        // 0x2ed010: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED014u;
        goto label_2ed014;
    }
    ctx->pc = 0x2ED00Cu;
    {
        const bool branch_taken_0x2ed00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED00Cu;
        // 0x2ed010: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed00c) {
            ctx->pc = 0x2ED024u;
            goto label_2ed024;
        }
    }
    ctx->pc = 0x2ED014u;
label_2ed014:
    // 0x2ed014: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2ed014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2ed018:
    // 0x2ed018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed01c:
    // 0x2ed01c: 0x10000022  b           . + 4 + (0x22 << 2)
label_2ed020:
    if (ctx->pc == 0x2ED020u) {
        ctx->pc = 0x2ED020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED01Cu;
        // 0x2ed020: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED024u;
        goto label_2ed024;
    }
    ctx->pc = 0x2ED01Cu;
    {
        const bool branch_taken_0x2ed01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED01Cu;
        // 0x2ed020: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed01c) {
            ctx->pc = 0x2ED0A8u;
            goto label_2ed0a8;
        }
    }
    ctx->pc = 0x2ED024u;
label_2ed024:
    // 0x2ed024: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2ed024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ed028:
    // 0x2ed028: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2ed02c:
    if (ctx->pc == 0x2ED02Cu) {
        ctx->pc = 0x2ED02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED028u;
        // 0x2ed02c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED030u;
        goto label_2ed030;
    }
    ctx->pc = 0x2ED028u;
    {
        const bool branch_taken_0x2ed028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed028) {
            ctx->pc = 0x2ED02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED028u;
            // 0x2ed02c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED03Cu;
            goto label_2ed03c;
        }
    }
    ctx->pc = 0x2ED030u;
label_2ed030:
    // 0x2ed030: 0xc0baf0c  jal         func_2EBC30
label_2ed034:
    if (ctx->pc == 0x2ED034u) {
        ctx->pc = 0x2ED034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED030u;
        // 0x2ed034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED038u;
        goto label_2ed038;
    }
    ctx->pc = 0x2ED030u;
    SET_GPR_U32(ctx, 31, 0x2ED038u);
    ctx->pc = 0x2ED034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED030u;
    // 0x2ed034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC30u, 0x2ED030u, 0x2ED038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED038u;
label_2ed038:
    // 0x2ed038: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ed038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2ed03c:
    // 0x2ed03c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ed03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2ed040:
    // 0x2ed040: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ed044:
    if (ctx->pc == 0x2ED044u) {
        ctx->pc = 0x2ED044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED040u;
        // 0x2ed044: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED048u;
        goto label_2ed048;
    }
    ctx->pc = 0x2ED040u;
    {
        const bool branch_taken_0x2ed040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED040u;
        // 0x2ed044: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed040) {
            ctx->pc = 0x2ED054u;
            goto label_2ed054;
        }
    }
    ctx->pc = 0x2ED048u;
label_2ed048:
    // 0x2ed048: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ed048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2ed04c:
    // 0x2ed04c: 0xc0b926e  jal         func_2E49B8
label_2ed050:
    if (ctx->pc == 0x2ED050u) {
        ctx->pc = 0x2ED050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED04Cu;
        // 0x2ed050: 0x24a5cf20  addiu       $a1, $a1, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED054u;
        goto label_2ed054;
    }
    ctx->pc = 0x2ED04Cu;
    SET_GPR_U32(ctx, 31, 0x2ED054u);
    ctx->pc = 0x2ED050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED04Cu;
    // 0x2ed050: 0x24a5cf20  addiu       $a1, $a1, -0x30E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E49B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E49B8u, 0x2ED04Cu, 0x2ED054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED054u;
label_2ed054:
    // 0x2ed054: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2ed054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ed058:
    // 0x2ed058: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2ed058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2ed05c:
    // 0x2ed05c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2ed05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2ed060:
    // 0x2ed060: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2ed060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ed064:
    // 0x2ed064: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2ed064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2ed068:
    // 0x2ed068: 0x40f809  jalr        $v0
label_2ed06c:
    if (ctx->pc == 0x2ED06Cu) {
        ctx->pc = 0x2ED06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED068u;
        // 0x2ed06c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED070u;
        goto label_2ed070;
    }
    ctx->pc = 0x2ED068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED070u);
        ctx->pc = 0x2ED06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED068u;
        // 0x2ed06c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED068u, 0x2ED070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED070u;
label_2ed070:
    // 0x2ed070: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ed070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed074:
    // 0x2ed074: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2ed074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2ed078:
    // 0x2ed078: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2ed078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2ed07c:
    // 0x2ed07c: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x2ed07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
label_2ed080:
    // 0x2ed080: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_2ed084:
    if (ctx->pc == 0x2ED084u) {
        ctx->pc = 0x2ED084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED080u;
        // 0x2ed084: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED088u;
        goto label_2ed088;
    }
    ctx->pc = 0x2ED080u;
    {
        const bool branch_taken_0x2ed080 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2ED084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED080u;
        // 0x2ed084: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed080) {
            ctx->pc = 0x2ED0A4u;
            goto label_2ed0a4;
        }
    }
    ctx->pc = 0x2ED088u;
label_2ed088:
    // 0x2ed088: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_2ed08c:
    if (ctx->pc == 0x2ED08Cu) {
        ctx->pc = 0x2ED08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED088u;
        // 0x2ed08c: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED090u;
        goto label_2ed090;
    }
    ctx->pc = 0x2ED088u;
    {
        const bool branch_taken_0x2ed088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed088) {
            ctx->pc = 0x2ED08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED088u;
            // 0x2ed08c: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED098u;
            goto label_2ed098;
        }
    }
    ctx->pc = 0x2ED090u;
label_2ed090:
    // 0x2ed090: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ed094:
    if (ctx->pc == 0x2ED094u) {
        ctx->pc = 0x2ED094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED090u;
        // 0x2ed094: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED098u;
        goto label_2ed098;
    }
    ctx->pc = 0x2ED090u;
    {
        const bool branch_taken_0x2ed090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED090u;
        // 0x2ed094: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed090) {
            ctx->pc = 0x2ED09Cu;
            goto label_2ed09c;
        }
    }
    ctx->pc = 0x2ED098u;
label_2ed098:
    // 0x2ed098: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ed098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ed09c:
    // 0x2ed09c: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_2ed0a0:
    if (ctx->pc == 0x2ED0A0u) {
        ctx->pc = 0x2ED0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED09Cu;
        // 0x2ed0a0: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED0A4u;
        goto label_2ed0a4;
    }
    ctx->pc = 0x2ED09Cu;
    {
        const bool branch_taken_0x2ed09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED09Cu;
        // 0x2ed0a0: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed09c) {
            ctx->pc = 0x2ECFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecfa8;
        }
    }
    ctx->pc = 0x2ED0A4u;
label_2ed0a4:
    // 0x2ed0a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed0a8:
    // 0x2ed0a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed0ac:
    // 0x2ed0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed0b0:
    // 0x2ed0b0: 0x3e00008  jr          $ra
label_2ed0b4:
    if (ctx->pc == 0x2ED0B4u) {
        ctx->pc = 0x2ED0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0B0u;
        // 0x2ed0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED0B8u;
        goto label_fallthrough_0x2ed0b0;
    }
    ctx->pc = 0x2ED0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0B0u;
        // 0x2ed0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ed0b0:
    ctx->pc = 0x2ED0B8u;
}
