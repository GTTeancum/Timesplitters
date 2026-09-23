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

// Function: chrSelectDeathAnim
// Address: 0x288a30 - 0x288e40
void chrSelectDeathAnim_0x288a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrSelectDeathAnim_0x288a30");
#endif

    switch (ctx->pc) {
        case 0x288a80u: goto label_288a80;
        case 0x288ab0u: goto label_288ab0;
        case 0x288af8u: goto label_288af8;
        case 0x288becu: goto label_288bec;
        case 0x288bfcu: goto label_288bfc;
        case 0x288c50u: goto label_288c50;
        case 0x288c78u: goto label_288c78;
        case 0x288cc0u: goto label_288cc0;
        case 0x288ce8u: goto label_288ce8;
        case 0x288d28u: goto label_288d28;
        case 0x288d3cu: goto label_288d3c;
        case 0x288d4cu: goto label_288d4c;
        case 0x288dacu: goto label_288dac;
        case 0x288dc8u: goto label_288dc8;
        case 0x288e08u: goto label_288e08;
        case 0x288e24u: goto label_288e24;
        default: break;
    }

    ctx->pc = 0x288a30u;

    // 0x288a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x288a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x288a34: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x288a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x288a38: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x288a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x288a3c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x288a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x288a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x288a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x288a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x288a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x288a4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x288a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288a50: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x288a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x288a54: 0x8e320160  lw          $s2, 0x160($s1)
    ctx->pc = 0x288a54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x288a58: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x288a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x288a5c: 0x104900af  beq         $v0, $t1, . + 4 + (0xAF << 2)
    ctx->pc = 0x288A5Cu;
    {
        const bool branch_taken_0x288a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x288A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A5Cu;
        // 0x288a60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a5c) {
            ctx->pc = 0x288D1Cu;
            goto label_288d1c;
        }
    }
    ctx->pc = 0x288A64u;
    // 0x288a64: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288A64u;
    {
        const bool branch_taken_0x288a64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x288a64) {
            ctx->pc = 0x288A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288A64u;
            // 0x288a68: 0x8e4302a8  lw          $v1, 0x2A8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288A88u;
            goto label_288a88;
        }
    }
    ctx->pc = 0x288A6Cu;
    // 0x288a6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288a70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288a74: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x288a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x288a78: 0xc08535a  jal         func_214D68
    ctx->pc = 0x288A78u;
    SET_GPR_U32(ctx, 31, 0x288A80u);
    ctx->pc = 0x288A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A78u;
    // 0x288a7c: 0x240501d7  addiu       $a1, $zero, 0x1D7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x288A78u, 0x288A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A80u;
label_288a80:
    // 0x288a80: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x288A80u;
    {
        const bool branch_taken_0x288a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A80u;
        // 0x288a84: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a80) {
            ctx->pc = 0x288E28u;
            goto label_288e28;
        }
    }
    ctx->pc = 0x288A88u;
label_288a88:
    // 0x288a88: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x288a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x288a8c: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x288a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x288a90: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x288a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x288a94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x288a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x288a98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x288a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x288a9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x288a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x288aa0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x288AA0u;
    {
        const bool branch_taken_0x288aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AA0u;
        // 0x288aa4: 0x24a2fff8  addiu       $v0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288aa0) {
            ctx->pc = 0x288ADCu;
            goto label_288adc;
        }
    }
    ctx->pc = 0x288AA8u;
    // 0x288aa8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288AA8u;
    SET_GPR_U32(ctx, 31, 0x288AB0u);
    ctx->pc = 0x288AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AA8u;
    // 0x288aac: 0x2410023a  addiu       $s0, $zero, 0x23A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288AA8u, 0x288AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AB0u;
label_288ab0:
    // 0x288ab0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x288ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288ab4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x288ab4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x288ab8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x288AB8u;
    {
        const bool branch_taken_0x288ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x288ab8) {
            ctx->pc = 0x288ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288AB8u;
            // 0x288abc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x288AC0u;
            goto label_288ac0;
        }
    }
    ctx->pc = 0x288AC0u;
label_288ac0:
    // 0x288ac0: 0x2010  mfhi        $a0
    ctx->pc = 0x288ac0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x288ac4: 0x108000c2  beqz        $a0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x288AC4u;
    {
        const bool branch_taken_0x288ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AC4u;
        // 0x288ac8: 0x38830001  xori        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ac4) {
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288ACCu;
    // 0x288acc: 0x24100242  addiu       $s0, $zero, 0x242
    ctx->pc = 0x288accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    // 0x288ad0: 0x2402023b  addiu       $v0, $zero, 0x23B
    ctx->pc = 0x288ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
    // 0x288ad4: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x288AD4u;
    {
        const bool branch_taken_0x288ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AD4u;
        // 0x288ad8: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ad4) {
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288ADCu;
label_288adc:
    // 0x288adc: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x288adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x288ae0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x288AE0u;
    {
        const bool branch_taken_0x288ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AE0u;
        // 0x288ae4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ae0) {
            ctx->pc = 0x288B20u;
            goto label_288b20;
        }
    }
    ctx->pc = 0x288AE8u;
    // 0x288ae8: 0x1669000d  bne         $s3, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x288AE8u;
    {
        const bool branch_taken_0x288ae8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 9));
        if (branch_taken_0x288ae8) {
            ctx->pc = 0x288B20u;
            goto label_288b20;
        }
    }
    ctx->pc = 0x288AF0u;
    // 0x288af0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288AF0u;
    SET_GPR_U32(ctx, 31, 0x288AF8u);
    ctx->pc = 0x288AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AF0u;
    // 0x288af4: 0x2410023c  addiu       $s0, $zero, 0x23C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288AF0u, 0x288AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AF8u;
label_288af8:
    // 0x288af8: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x288af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x288afc: 0x508000b5  beql        $a0, $zero, . + 4 + (0xB5 << 2)
    ctx->pc = 0x288AFCu;
    {
        const bool branch_taken_0x288afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x288afc) {
            ctx->pc = 0x288B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288AFCu;
            // 0x288b00: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288DD4u;
            goto label_288dd4;
        }
    }
    ctx->pc = 0x288B04u;
    // 0x288b04: 0x109300b2  beq         $a0, $s3, . + 4 + (0xB2 << 2)
    ctx->pc = 0x288B04u;
    {
        const bool branch_taken_0x288b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x288B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B04u;
        // 0x288b08: 0x2410023d  addiu       $s0, $zero, 0x23D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 573));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b04) {
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288B0Cu;
    // 0x288b0c: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x288b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x288b10: 0x2410023f  addiu       $s0, $zero, 0x23F
    ctx->pc = 0x288b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x288b14: 0x2402023e  addiu       $v0, $zero, 0x23E
    ctx->pc = 0x288b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 574));
    // 0x288b18: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x288B18u;
    {
        const bool branch_taken_0x288b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B18u;
        // 0x288b1c: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b18) {
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288B20u;
label_288b20:
    // 0x288b20: 0x11020009  beq         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x288B20u;
    {
        const bool branch_taken_0x288b20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x288B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B20u;
        // 0x288b24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b20) {
            ctx->pc = 0x288B48u;
            goto label_288b48;
        }
    }
    ctx->pc = 0x288B28u;
    // 0x288b28: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x288b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288b2c: 0x11130005  beq         $t0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x288B2Cu;
    {
        const bool branch_taken_0x288b2c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x288B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B2Cu;
        // 0x288b30: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b2c) {
            ctx->pc = 0x288B44u;
            goto label_288b44;
        }
    }
    ctx->pc = 0x288B34u;
    // 0x288b34: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288B34u;
    {
        const bool branch_taken_0x288b34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x288B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B34u;
        // 0x288b38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b34) {
            ctx->pc = 0x288B44u;
            goto label_288b44;
        }
    }
    ctx->pc = 0x288B3Cu;
    // 0x288b3c: 0x15020015  bne         $t0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x288B3Cu;
    {
        const bool branch_taken_0x288b3c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x288b3c) {
            ctx->pc = 0x288B94u;
            goto label_288b94;
        }
    }
    ctx->pc = 0x288B44u;
label_288b44:
    // 0x288b44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x288b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_288b48:
    // 0x288b48: 0x11020010  beq         $t0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x288B48u;
    {
        const bool branch_taken_0x288b48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x288B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B48u;
        // 0x288b4c: 0x29020005  slti        $v0, $t0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b48) {
            ctx->pc = 0x288B8Cu;
            goto label_288b8c;
        }
    }
    ctx->pc = 0x288B50u;
    // 0x288b50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288B50u;
    {
        const bool branch_taken_0x288b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B50u;
        // 0x288b54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b50) {
            ctx->pc = 0x288B68u;
            goto label_288b68;
        }
    }
    ctx->pc = 0x288B58u;
    // 0x288b58: 0x5102009d  beql        $t0, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x288B58u;
    {
        const bool branch_taken_0x288b58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x288b58) {
            ctx->pc = 0x288B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288B58u;
            // 0x288b5c: 0x24100246  addiu       $s0, $zero, 0x246 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288B60u;
    // 0x288b60: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x288B60u;
    {
        const bool branch_taken_0x288b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B60u;
        // 0x288b64: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b60) {
            ctx->pc = 0x288DD4u;
            goto label_288dd4;
        }
    }
    ctx->pc = 0x288B68u;
label_288b68:
    // 0x288b68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x288b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288b6c: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288B6Cu;
    {
        const bool branch_taken_0x288b6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x288B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B6Cu;
        // 0x288b70: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b6c) {
            ctx->pc = 0x288B84u;
            goto label_288b84;
        }
    }
    ctx->pc = 0x288B74u;
    // 0x288b74: 0x51020096  beql        $t0, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x288B74u;
    {
        const bool branch_taken_0x288b74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x288b74) {
            ctx->pc = 0x288B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288B74u;
            // 0x288b78: 0x24100249  addiu       $s0, $zero, 0x249 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288B7Cu;
    // 0x288b7c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x288B7Cu;
    {
        const bool branch_taken_0x288b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B7Cu;
        // 0x288b80: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b7c) {
            ctx->pc = 0x288DD4u;
            goto label_288dd4;
        }
    }
    ctx->pc = 0x288B84u;
label_288b84:
    // 0x288b84: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x288B84u;
    {
        const bool branch_taken_0x288b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B84u;
        // 0x288b88: 0x24100247  addiu       $s0, $zero, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b84) {
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288B8Cu;
label_288b8c:
    // 0x288b8c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x288B8Cu;
    {
        const bool branch_taken_0x288b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B8Cu;
        // 0x288b90: 0x24100248  addiu       $s0, $zero, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b8c) {
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288B94u;
label_288b94:
    // 0x288b94: 0x18a00052  blez        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x288B94u;
    {
        const bool branch_taken_0x288b94 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x288B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B94u;
        // 0x288b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b94) {
            ctx->pc = 0x288CE0u;
            goto label_288ce0;
        }
    }
    ctx->pc = 0x288B9Cu;
    // 0x288b9c: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x288b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x288ba0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x288ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x288ba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288ba8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bac: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x288bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x288bb0: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x288bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288bb4: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x288bb4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x288bb8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x288bb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x288bbc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x288bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x288bc0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x288bc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x288bc4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x288bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288bc8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x288bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288bcc: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x288bccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x288bd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288bd4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x288bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x288bd8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x288bd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x288bdc: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x288bdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x288be0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x288be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x288be4: 0xc0b1a02  jal         func_2C6808
    ctx->pc = 0x288BE4u;
    SET_GPR_U32(ctx, 31, 0x288BECu);
    ctx->pc = 0x288BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BE4u;
    // 0x288be8: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6808u, 0x288BE4u, 0x288BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BECu;
label_288bec:
    // 0x288bec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x288BECu;
    {
        const bool branch_taken_0x288bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288bec) {
            ctx->pc = 0x288C70u;
            goto label_288c70;
        }
    }
    ctx->pc = 0x288BF4u;
    // 0x288bf4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288BF4u;
    SET_GPR_U32(ctx, 31, 0x288BFCu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288BF4u, 0x288BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BFCu;
label_288bfc:
    // 0x288bfc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x288bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x288c00: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x288c00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x288c04: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x288C04u;
    {
        const bool branch_taken_0x288c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x288c04) {
            ctx->pc = 0x288C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288C04u;
            // 0x288c08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x288C0Cu;
            goto label_288c0c;
        }
    }
    ctx->pc = 0x288C0Cu;
label_288c0c:
    // 0x288c0c: 0x8e260164  lw          $a2, 0x164($s1)
    ctx->pc = 0x288c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x288c10: 0x2010  mfhi        $a0
    ctx->pc = 0x288c10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x288c14: 0x24900238  addiu       $s0, $a0, 0x238
    ctx->pc = 0x288c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
    // 0x288c18: 0x2a02023c  slti        $v0, $s0, 0x23C
    ctx->pc = 0x288c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)572) ? 1 : 0);
    // 0x288c1c: 0x2484023c  addiu       $a0, $a0, 0x23C
    ctx->pc = 0x288c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
    // 0x288c20: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x288c20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x288c24: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x288c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x288c28: 0x3a020244  xori        $v0, $s0, 0x244
    ctx->pc = 0x288c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)580);
    // 0x288c2c: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x288C2Cu;
    {
        const bool branch_taken_0x288c2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x288C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C2Cu;
        // 0x288c30: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c2c) {
            ctx->pc = 0x288C90u;
            goto label_288c90;
        }
    }
    ctx->pc = 0x288C34u;
    // 0x288c34: 0x24020238  addiu       $v0, $zero, 0x238
    ctx->pc = 0x288c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    // 0x288c38: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288C38u;
    {
        const bool branch_taken_0x288c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x288C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C38u;
        // 0x288c3c: 0x24020243  addiu       $v0, $zero, 0x243 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c38) {
            ctx->pc = 0x288C48u;
            goto label_288c48;
        }
    }
    ctx->pc = 0x288C40u;
    // 0x288c40: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x288C40u;
    {
        const bool branch_taken_0x288c40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x288c40) {
            ctx->pc = 0x288C88u;
            goto label_288c88;
        }
    }
    ctx->pc = 0x288C48u;
label_288c48:
    // 0x288c48: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288C48u;
    SET_GPR_U32(ctx, 31, 0x288C50u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288C48u, 0x288C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C50u;
label_288c50:
    // 0x288c50: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x288c50u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x288c54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288c58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x288C58u;
    {
        const bool branch_taken_0x288c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288c58) {
            ctx->pc = 0x288C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288C58u;
            // 0x288c5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x288C60u;
            goto label_288c60;
        }
    }
    ctx->pc = 0x288C60u;
label_288c60:
    // 0x288c60: 0x8e260164  lw          $a2, 0x164($s1)
    ctx->pc = 0x288c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x288c64: 0x1810  mfhi        $v1
    ctx->pc = 0x288c64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x288c68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x288C68u;
    {
        const bool branch_taken_0x288c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C68u;
        // 0x288c6c: 0x24700240  addiu       $s0, $v1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c68) {
            ctx->pc = 0x288C88u;
            goto label_288c88;
        }
    }
    ctx->pc = 0x288C70u;
label_288c70:
    // 0x288c70: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288C70u;
    SET_GPR_U32(ctx, 31, 0x288C78u);
    ctx->pc = 0x288C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C70u;
    // 0x288c74: 0x24100237  addiu       $s0, $zero, 0x237 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 567));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288C70u, 0x288C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C78u;
label_288c78:
    // 0x288c78: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x288c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288c7c: 0x8e260164  lw          $a2, 0x164($s1)
    ctx->pc = 0x288c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x288c80: 0x24020236  addiu       $v0, $zero, 0x236
    ctx->pc = 0x288c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 566));
    // 0x288c84: 0x44800a  movz        $s0, $v0, $a0
    ctx->pc = 0x288c84u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_288c88:
    // 0x288c88: 0x54c00052  bnel        $a2, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x288C88u;
    {
        const bool branch_taken_0x288c88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x288c88) {
            ctx->pc = 0x288C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288C88u;
            // 0x288c8c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288DD4u;
            goto label_288dd4;
        }
    }
    ctx->pc = 0x288C90u;
label_288c90:
    // 0x288c90: 0x8e430a94  lw          $v1, 0xA94($s2)
    ctx->pc = 0x288c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x288c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288c98: 0x5462004e  bnel        $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x288C98u;
    {
        const bool branch_taken_0x288c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x288c98) {
            ctx->pc = 0x288C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288C98u;
            // 0x288c9c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288DD4u;
            goto label_288dd4;
        }
    }
    ctx->pc = 0x288CA0u;
    // 0x288ca0: 0xc6410b2c  lwc1        $f1, 0xB2C($s2)
    ctx->pc = 0x288ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288ca4: 0xc6400b3c  lwc1        $f0, 0xB3C($s2)
    ctx->pc = 0x288ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288ca8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288cac: 0x0  nop
    ctx->pc = 0x288cacu;
    // NOP
    // 0x288cb0: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
    ctx->pc = 0x288CB0u;
    {
        const bool branch_taken_0x288cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288cb0) {
            ctx->pc = 0x288CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288CB0u;
            // 0x288cb4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288DD4u;
            goto label_288dd4;
        }
    }
    ctx->pc = 0x288CB8u;
    // 0x288cb8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288CB8u;
    SET_GPR_U32(ctx, 31, 0x288CC0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288CB8u, 0x288CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CC0u;
label_288cc0:
    // 0x288cc0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x288cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288cc4: 0x24050244  addiu       $a1, $zero, 0x244
    ctx->pc = 0x288cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    // 0x288cc8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x288cc8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x288ccc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x288CCCu;
    {
        const bool branch_taken_0x288ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x288ccc) {
            ctx->pc = 0x288CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288CCCu;
            // 0x288cd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x288CD4u;
            goto label_288cd4;
        }
    }
    ctx->pc = 0x288CD4u;
label_288cd4:
    // 0x288cd4: 0x2010  mfhi        $a0
    ctx->pc = 0x288cd4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x288cd8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x288CD8u;
    {
        const bool branch_taken_0x288cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CD8u;
        // 0x288cdc: 0xa4800a  movz        $s0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288cd8) {
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288CE0u;
label_288ce0:
    // 0x288ce0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288CE0u;
    SET_GPR_U32(ctx, 31, 0x288CE8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288CE0u, 0x288CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CE8u;
label_288ce8:
    // 0x288ce8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x288ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x288cec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x288cecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x288cf0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x288CF0u;
    {
        const bool branch_taken_0x288cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x288cf0) {
            ctx->pc = 0x288CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288CF0u;
            // 0x288cf4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x288CF8u;
            goto label_288cf8;
        }
    }
    ctx->pc = 0x288CF8u;
label_288cf8:
    // 0x288cf8: 0x2010  mfhi        $a0
    ctx->pc = 0x288cf8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x288cfc: 0x24900238  addiu       $s0, $a0, 0x238
    ctx->pc = 0x288cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
    // 0x288d00: 0x2a02023c  slti        $v0, $s0, 0x23C
    ctx->pc = 0x288d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)572) ? 1 : 0);
    // 0x288d04: 0x2484023c  addiu       $a0, $a0, 0x23C
    ctx->pc = 0x288d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
    // 0x288d08: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x288d08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x288d0c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x288d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x288d10: 0x3a020244  xori        $v0, $s0, 0x244
    ctx->pc = 0x288d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)580);
    // 0x288d14: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x288D14u;
    {
        const bool branch_taken_0x288d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D14u;
        // 0x288d18: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d14) {
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288D1Cu;
label_288d1c:
    // 0x288d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d20: 0xc085608  jal         func_215820
    ctx->pc = 0x288D20u;
    SET_GPR_U32(ctx, 31, 0x288D28u);
    ctx->pc = 0x288D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D20u;
    // 0x288d24: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x288D20u, 0x288D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D28u;
label_288d28:
    // 0x288d28: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x288D28u;
    {
        const bool branch_taken_0x288d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D28u;
        // 0x288d2c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d28) {
            ctx->pc = 0x288E28u;
            goto label_288e28;
        }
    }
    ctx->pc = 0x288D30u;
    // 0x288d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d34: 0xc085608  jal         func_215820
    ctx->pc = 0x288D34u;
    SET_GPR_U32(ctx, 31, 0x288D3Cu);
    ctx->pc = 0x288D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D34u;
    // 0x288d38: 0x24050243  addiu       $a1, $zero, 0x243 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x288D34u, 0x288D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D3Cu;
label_288d3c:
    // 0x288d3c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x288D3Cu;
    {
        const bool branch_taken_0x288d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D3Cu;
        // 0x288d40: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d3c) {
            ctx->pc = 0x288E28u;
            goto label_288e28;
        }
    }
    ctx->pc = 0x288D44u;
    // 0x288d44: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x288D44u;
    SET_GPR_U32(ctx, 31, 0x288D4Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x288D44u, 0x288D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D4Cu;
label_288d4c:
    // 0x288d4c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288D4Cu;
    {
        const bool branch_taken_0x288d4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x288D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D4Cu;
        // 0x288d50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d4c) {
            ctx->pc = 0x288D60u;
            goto label_288d60;
        }
    }
    ctx->pc = 0x288D54u;
    // 0x288d54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x288d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288d58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x288D58u;
    {
        const bool branch_taken_0x288d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D58u;
        // 0x288d5c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d58) {
            ctx->pc = 0x288D74u;
            goto label_288d74;
        }
    }
    ctx->pc = 0x288D60u;
label_288d60:
    // 0x288d60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x288d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288d64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x288d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x288d68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x288d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288d6c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x288d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x288d70: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x288d70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_288d74:
    // 0x288d74: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x288d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x288d78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288d7c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x288d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x288d80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288d84: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x288d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x288d88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288d8c: 0x0  nop
    ctx->pc = 0x288d8cu;
    // NOP
    // 0x288d90: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x288D90u;
    {
        const bool branch_taken_0x288d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x288D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D90u;
        // 0x288d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d90) {
            ctx->pc = 0x288DB4u;
            goto label_288db4;
        }
    }
    ctx->pc = 0x288D98u;
    // 0x288d98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288d9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288da0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x288da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x288da4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x288DA4u;
    SET_GPR_U32(ctx, 31, 0x288DACu);
    ctx->pc = 0x288DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288DA4u;
    // 0x288da8: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x288DA4u, 0x288DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288DACu;
label_288dac:
    // 0x288dac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x288DACu;
    {
        const bool branch_taken_0x288dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DACu;
        // 0x288db0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dac) {
            ctx->pc = 0x288E28u;
            goto label_288e28;
        }
    }
    ctx->pc = 0x288DB4u;
label_288db4:
    // 0x288db4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288db8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288dbc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x288dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x288dc0: 0xc08535a  jal         func_214D68
    ctx->pc = 0x288DC0u;
    SET_GPR_U32(ctx, 31, 0x288DC8u);
    ctx->pc = 0x288DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288DC0u;
    // 0x288dc4: 0x24050243  addiu       $a1, $zero, 0x243 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x288DC0u, 0x288DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288DC8u;
label_288dc8:
    // 0x288dc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x288DC8u;
    {
        const bool branch_taken_0x288dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DC8u;
        // 0x288dcc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dc8) {
            ctx->pc = 0x288E28u;
            goto label_288e28;
        }
    }
    ctx->pc = 0x288DD0u;
label_288dd0:
    // 0x288dd0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x288dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_288dd4:
    // 0x288dd4: 0x26050015  addiu       $a1, $s0, 0x15
    ctx->pc = 0x288dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
    // 0x288dd8: 0x24060257  addiu       $a2, $zero, 0x257
    ctx->pc = 0x288dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x288ddc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x288ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x288de0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x288de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x288de4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x288de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x288de8: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x288de8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x288dec: 0x16060008  bne         $s0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x288DECu;
    {
        const bool branch_taken_0x288dec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x288DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DECu;
        // 0x288df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dec) {
            ctx->pc = 0x288E10u;
            goto label_288e10;
        }
    }
    ctx->pc = 0x288DF4u;
    // 0x288df4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288df8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x288df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x288dfc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x288dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x288e00: 0xc08535a  jal         func_214D68
    ctx->pc = 0x288E00u;
    SET_GPR_U32(ctx, 31, 0x288E08u);
    ctx->pc = 0x288E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E00u;
    // 0x288e04: 0x24050257  addiu       $a1, $zero, 0x257 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x288E00u, 0x288E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E08u;
label_288e08:
    // 0x288e08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x288E08u;
    {
        const bool branch_taken_0x288e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E08u;
        // 0x288e0c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e08) {
            ctx->pc = 0x288E28u;
            goto label_288e28;
        }
    }
    ctx->pc = 0x288E10u;
label_288e10:
    // 0x288e10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x288e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288e14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288e18: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x288e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x288e1c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x288E1Cu;
    SET_GPR_U32(ctx, 31, 0x288E24u);
    ctx->pc = 0x288E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E1Cu;
    // 0x288e20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x288E1Cu, 0x288E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E24u;
label_288e24:
    // 0x288e24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x288e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_288e28:
    // 0x288e28: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x288e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288e2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x288e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288e30: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x288e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288e34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x288e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288e38: 0x3e00008  jr          $ra
    ctx->pc = 0x288E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E38u;
        // 0x288e3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288E40u;
}
