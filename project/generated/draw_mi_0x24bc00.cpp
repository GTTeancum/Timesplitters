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

// Function: draw_mi
// Address: 0x24bc00 - 0x24bff4
void draw_mi_0x24bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("draw_mi_0x24bc00");
#endif

    switch (ctx->pc) {
        case 0x24bc44u: goto label_24bc44;
        case 0x24bce4u: goto label_24bce4;
        case 0x24bd00u: goto label_24bd00;
        case 0x24bd60u: goto label_24bd60;
        case 0x24bd78u: goto label_24bd78;
        case 0x24bdb8u: goto label_24bdb8;
        case 0x24bdc8u: goto label_24bdc8;
        case 0x24be30u: goto label_24be30;
        case 0x24be38u: goto label_24be38;
        case 0x24be50u: goto label_24be50;
        case 0x24be58u: goto label_24be58;
        case 0x24bef8u: goto label_24bef8;
        case 0x24bf84u: goto label_24bf84;
        default: break;
    }

    ctx->pc = 0x24bc00u;

    // 0x24bc00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24bc04: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x24bc08: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24bc0c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24bc0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc10: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x24bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x24bc14: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x24bc18: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24bc1c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24bc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24bc20: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24bc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24bc24: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24bc28: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24bc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24bc2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24bc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24bc30: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x24bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x24bc34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BC34u;
    {
        const bool branch_taken_0x24bc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC34u;
        // 0x24bc38: 0x8ede0010  lw          $fp, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc34) {
            ctx->pc = 0x24BC44u;
            goto label_24bc44;
        }
    }
    ctx->pc = 0x24BC3Cu;
    // 0x24bc3c: 0xc092e9e  jal         func_24BA78
    ctx->pc = 0x24BC3Cu;
    SET_GPR_U32(ctx, 31, 0x24BC44u);
    ctx->pc = 0x24BA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA78u, 0x24BC3Cu, 0x24BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC44u;
label_24bc44:
    // 0x24bc44: 0x97c8000a  lhu         $t0, 0xA($fp)
    ctx->pc = 0x24bc44u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x24bc48: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x24bc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x24bc4c: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x24BC4Cu;
    {
        const bool branch_taken_0x24bc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC4Cu;
        // 0x24bc50: 0x31020008  andi        $v0, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc4c) {
            ctx->pc = 0x24BFC4u;
            goto label_24bfc4;
        }
    }
    ctx->pc = 0x24BC54u;
    // 0x24bc54: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24BC54u;
    {
        const bool branch_taken_0x24bc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC54u;
        // 0x24bc58: 0x8fd4000c  lw          $s4, 0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc54) {
            ctx->pc = 0x24BCB8u;
            goto label_24bcb8;
        }
    }
    ctx->pc = 0x24BC5Cu;
    // 0x24bc5c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x24bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x24bc60: 0x84182  srl         $t0, $t0, 6
    ctx->pc = 0x24bc60u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x24bc64: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x24bc64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24bc68: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x24bc68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x24bc6c: 0x96c50002  lhu         $a1, 0x2($s6)
    ctx->pc = 0x24bc6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x24bc70: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x24bc70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x24bc74: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x24bc74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24bc78: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x24bc78u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24bc7c: 0x96c40000  lhu         $a0, 0x0($s6)
    ctx->pc = 0x24bc7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x24bc80: 0x24a5000e  addiu       $a1, $a1, 0xE
    ctx->pc = 0x24bc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
    // 0x24bc84: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24bc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24bc88: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x24bc88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24bc8c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24bc8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24bc90: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24bc90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24bc94: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24bc94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24bc98: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24bc98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24bc9c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24bc9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24bca0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24bca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24bca4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24bca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24bca8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24bca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bcac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24bcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bcb0: 0x808b438  j           func_22D0E0
    ctx->pc = 0x24BCB0u;
    ctx->pc = 0x24BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCB0u;
    // 0x24bcb4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D0E0u;
    draw_slider_0x22d0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x24BCB8u;
label_24bcb8:
    // 0x24bcb8: 0x8f84a01c  lw          $a0, -0x5FE4($gp)
    ctx->pc = 0x24bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24bcbc: 0x3c111e1e  lui         $s1, 0x1E1E
    ctx->pc = 0x24bcbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)7710 << 16));
    // 0x24bcc0: 0x31020040  andi        $v0, $t0, 0x40
    ctx->pc = 0x24bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x24bcc4: 0x8f83a020  lw          $v1, -0x5FE0($gp)
    ctx->pc = 0x24bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x24bcc8: 0x36311e80  ori         $s1, $s1, 0x1E80
    ctx->pc = 0x24bcc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)7808);
    // 0x24bccc: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x24bcccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24bcd0: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x24bcd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x24bcd4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x24bcd4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x24bcd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcdc: 0xc08b074  jal         func_22C1D0
    ctx->pc = 0x24BCDCu;
    SET_GPR_U32(ctx, 31, 0x24BCE4u);
    ctx->pc = 0x24BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCDCu;
    // 0x24bce0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C1D0u, 0x24BCDCu, 0x24BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCE4u;
label_24bce4:
    // 0x24bce4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24bce4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bce8: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x24bce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x24bcec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x24bcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x24bcf0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BCF0u;
    {
        const bool branch_taken_0x24bcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bcf0) {
            ctx->pc = 0x24BCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BCF0u;
            // 0x24bcf4: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BD08u;
            goto label_24bd08;
        }
    }
    ctx->pc = 0x24BCF8u;
    // 0x24bcf8: 0xc08089c  jal         func_202270
    ctx->pc = 0x24BCF8u;
    SET_GPR_U32(ctx, 31, 0x24BD00u);
    ctx->pc = 0x24BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCF8u;
    // 0x24bcfc: 0x8f84a028  lw          $a0, -0x5FD8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x24BCF8u, 0x24BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD00u;
label_24bd00:
    // 0x24bd00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24bd04: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x24bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_24bd08:
    // 0x24bd08: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24BD08u;
    {
        const bool branch_taken_0x24bd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bd08) {
            ctx->pc = 0x24BD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BD08u;
            // 0x24bd0c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BD40u;
            goto label_24bd40;
        }
    }
    ctx->pc = 0x24BD10u;
    // 0x24bd10: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x24bd10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x24bd14: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x24bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x24bd18: 0x8c8399f0  lw          $v1, -0x6610($a0)
    ctx->pc = 0x24bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3299F0u));
    // 0x24bd1c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x24bd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x24bd20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BD20u;
    {
        const bool branch_taken_0x24bd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD20u;
        // 0x24bd24: 0x96d50000  lhu         $s5, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd20) {
            ctx->pc = 0x24BD34u;
            goto label_24bd34;
        }
    }
    ctx->pc = 0x24BD28u;
    // 0x24bd28: 0x26a200fc  addiu       $v0, $s5, 0xFC
    ctx->pc = 0x24bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 252));
    // 0x24bd2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24BD2Cu;
    {
        const bool branch_taken_0x24bd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD2Cu;
        // 0x24bd30: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd2c) {
            ctx->pc = 0x24BD44u;
            goto label_24bd44;
        }
    }
    ctx->pc = 0x24BD34u;
label_24bd34:
    // 0x24bd34: 0x26a2012c  addiu       $v0, $s5, 0x12C
    ctx->pc = 0x24bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 300));
    // 0x24bd38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BD38u;
    {
        const bool branch_taken_0x24bd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD38u;
        // 0x24bd3c: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd38) {
            ctx->pc = 0x24BD44u;
            goto label_24bd44;
        }
    }
    ctx->pc = 0x24BD40u;
label_24bd40:
    // 0x24bd40: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x24bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_24bd44:
    // 0x24bd44: 0x248299f0  addiu       $v0, $a0, -0x6610
    ctx->pc = 0x24bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x24bd48: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x24bd48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x24bd4c: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x24bd4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24bd50: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x24bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd54: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x24bd54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd58: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24BD58u;
    SET_GPR_U32(ctx, 31, 0x24BD60u);
    ctx->pc = 0x24BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD58u;
    // 0x24bd5c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24BD58u, 0x24BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD60u;
label_24bd60:
    // 0x24bd60: 0x2422023  subu        $a0, $s2, $v0
    ctx->pc = 0x24bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24bd64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24bd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd68: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x24bd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24bd6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd70: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24BD70u;
    SET_GPR_U32(ctx, 31, 0x24BD78u);
    ctx->pc = 0x24BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD70u;
    // 0x24bd74: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24BD70u, 0x24BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD78u;
label_24bd78:
    // 0x24bd78: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x24bd78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x24bd7c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x24bd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x24bd80: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x24BD80u;
    {
        const bool branch_taken_0x24bd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD80u;
        // 0x24bd84: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd80) {
            ctx->pc = 0x24BF8Cu;
            goto label_24bf8c;
        }
    }
    ctx->pc = 0x24BD88u;
    // 0x24bd88: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x24bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x24bd8c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x24BD8Cu;
    {
        const bool branch_taken_0x24bd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD8Cu;
        // 0x24bd90: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd8c) {
            ctx->pc = 0x24BE70u;
            goto label_24be70;
        }
    }
    ctx->pc = 0x24BD94u;
    // 0x24bd94: 0x8e880010  lw          $t0, 0x10($s4)
    ctx->pc = 0x24bd94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x24bd98: 0x1100001c  beqz        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24BD98u;
    {
        const bool branch_taken_0x24bd98 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD98u;
        // 0x24bd9c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd98) {
            ctx->pc = 0x24BE0Cu;
            goto label_24be0c;
        }
    }
    ctx->pc = 0x24BDA0u;
    // 0x24bda0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x24bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x24bda4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24BDA4u;
    {
        const bool branch_taken_0x24bda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDA4u;
        // 0x24bda8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bda4) {
            ctx->pc = 0x24BE0Cu;
            goto label_24be0c;
        }
    }
    ctx->pc = 0x24BDACu;
    // 0x24bdac: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x24bdacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x24bdb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24bdb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bdb4: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x24bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_24bdb8:
    // 0x24bdb8: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x24bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x24bdbc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24bdbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24bdc0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24BDC0u;
    SET_GPR_U32(ctx, 31, 0x24BDC8u);
    ctx->pc = 0x24BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDC0u;
    // 0x24bdc4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24BDC0u, 0x24BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDC8u;
label_24bdc8:
    // 0x24bdc8: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x24bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x24bdcc: 0x1330c0  sll         $a2, $s3, 3
    ctx->pc = 0x24bdccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x24bdd0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x24bdd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24bdd4: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x24bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24bdd8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x24bdd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bddc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24bde0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24bde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bde4: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x24bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x24bde8: 0x222282a  slt         $a1, $s1, $v0
    ctx->pc = 0x24bde8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24bdec: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x24bdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x24bdf0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x24bdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24bdf4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x24bdf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x24bdf8: 0x45880b  movn        $s1, $v0, $a1
    ctx->pc = 0x24bdf8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x24bdfc: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24BDFCu;
    {
        const bool branch_taken_0x24bdfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDFCu;
        // 0x24be00: 0x2e3b825  or          $s7, $s7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdfc) {
            ctx->pc = 0x24BDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bdb8;
        }
    }
    ctx->pc = 0x24BE04u;
    // 0x24be04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BE04u;
    {
        const bool branch_taken_0x24be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24be04) {
            ctx->pc = 0x24BE14u;
            goto label_24be14;
        }
    }
    ctx->pc = 0x24BE0Cu;
label_24be0c:
    // 0x24be0c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x24be0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x24be10: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x24be10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_24be14:
    // 0x24be14: 0x16e00014  bnez        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x24BE14u;
    {
        const bool branch_taken_0x24be14 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE14u;
        // 0x24be18: 0x2b11023  subu        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be14) {
            ctx->pc = 0x24BE68u;
            goto label_24be68;
        }
    }
    ctx->pc = 0x24BE1Cu;
    // 0x24be1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24be20: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x24be20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24be24: 0x2450e9b8  addiu       $s0, $v0, -0x1648
    ctx->pc = 0x24be24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961592));
    // 0x24be28: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24BE28u;
    SET_GPR_U32(ctx, 31, 0x24BE30u);
    ctx->pc = 0x24BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE28u;
    // 0x24be2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24BE28u, 0x24BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE30u;
label_24be30:
    // 0x24be30: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24BE30u;
    SET_GPR_U32(ctx, 31, 0x24BE38u);
    ctx->pc = 0x24BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE30u;
    // 0x24be34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24BE30u, 0x24BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE38u;
label_24be38:
    // 0x24be38: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x24be38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x24be3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24BE3Cu;
    {
        const bool branch_taken_0x24be3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE3Cu;
        // 0x24be40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be3c) {
            ctx->pc = 0x24BE60u;
            goto label_24be60;
        }
    }
    ctx->pc = 0x24BE44u;
    // 0x24be44: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x24be44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24be48: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x24BE48u;
    SET_GPR_U32(ctx, 31, 0x24BE50u);
    ctx->pc = 0x24BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE48u;
    // 0x24be4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x24BE48u, 0x24BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE50u;
label_24be50:
    // 0x24be50: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24BE50u;
    SET_GPR_U32(ctx, 31, 0x24BE58u);
    ctx->pc = 0x24BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE50u;
    // 0x24be54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24BE50u, 0x24BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE58u;
label_24be58:
    // 0x24be58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BE58u;
    {
        const bool branch_taken_0x24be58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE58u;
        // 0x24be5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be58) {
            ctx->pc = 0x24BE64u;
            goto label_24be64;
        }
    }
    ctx->pc = 0x24BE60u;
label_24be60:
    // 0x24be60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24be60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24be64:
    // 0x24be64: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x24be64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_24be68:
    // 0x24be68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24BE68u;
    {
        const bool branch_taken_0x24be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE68u;
        // 0x24be6c: 0x2452ffe0  addiu       $s2, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be68) {
            ctx->pc = 0x24BE7Cu;
            goto label_24be7c;
        }
    }
    ctx->pc = 0x24BE70u;
label_24be70:
    // 0x24be70: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x24be70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24be74: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x24be74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x24be78: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x24be78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_24be7c:
    // 0x24be7c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24be80: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x24be80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24be84: 0x24622e50  addiu       $v0, $v1, 0x2E50
    ctx->pc = 0x24be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11856));
    // 0x24be88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24be8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24be90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24be90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24be94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24be94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24be98: 0x17c4000d  bne         $fp, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x24BE98u;
    {
        const bool branch_taken_0x24be98 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 4));
        ctx->pc = 0x24BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE98u;
        // 0x24be9c: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be98) {
            ctx->pc = 0x24BED0u;
            goto label_24bed0;
        }
    }
    ctx->pc = 0x24BEA0u;
    // 0x24bea0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x24bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24bea4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x24bea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x24bea8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BEA8u;
    {
        const bool branch_taken_0x24bea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEA8u;
        // 0x24beac: 0x3c117f7f  lui         $s1, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bea8) {
            ctx->pc = 0x24BEC8u;
            goto label_24bec8;
        }
    }
    ctx->pc = 0x24BEB0u;
    // 0x24beb0: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x24beb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24beb4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x24beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x24beb8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x24beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24bebc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x24bec0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24BEC0u;
    {
        const bool branch_taken_0x24bec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEC0u;
        // 0x24bec4: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bec0) {
            ctx->pc = 0x24BED4u;
            goto label_24bed4;
        }
    }
    ctx->pc = 0x24BEC8u;
label_24bec8:
    // 0x24bec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BEC8u;
    {
        const bool branch_taken_0x24bec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEC8u;
        // 0x24becc: 0x36317f80  ori         $s1, $s1, 0x7F80 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32640);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bec8) {
            ctx->pc = 0x24BED4u;
            goto label_24bed4;
        }
    }
    ctx->pc = 0x24BED0u;
label_24bed0:
    // 0x24bed0: 0x36310030  ori         $s1, $s1, 0x30
    ctx->pc = 0x24bed0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)48);
label_24bed4:
    // 0x24bed4: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x24bed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x24bed8: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x24bed8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24bedc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24bedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24bee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24bee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bee4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x24bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x24bee8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x24bee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24beec: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24beecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24bef0: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24BEF0u;
    SET_GPR_U32(ctx, 31, 0x24BEF8u);
    ctx->pc = 0x24BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BEF0u;
    // 0x24bef4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24BEF0u, 0x24BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BEF8u;
label_24bef8:
    // 0x24bef8: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x24bef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24befc: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x24befcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x24bf00: 0x24e42e50  addiu       $a0, $a3, 0x2E50
    ctx->pc = 0x24bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 11856));
    // 0x24bf04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24bf08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24bf0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24bf10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bf14: 0x57c3000d  bnel        $fp, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24BF14u;
    {
        const bool branch_taken_0x24bf14 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x24bf14) {
            ctx->pc = 0x24BF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BF14u;
            // 0x24bf18: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BF4Cu;
            goto label_24bf4c;
        }
    }
    ctx->pc = 0x24BF1Cu;
    // 0x24bf1c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x24bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24bf20: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x24bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x24bf24: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BF24u;
    {
        const bool branch_taken_0x24bf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF24u;
        // 0x24bf28: 0x3c117f7f  lui         $s1, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf24) {
            ctx->pc = 0x24BF44u;
            goto label_24bf44;
        }
    }
    ctx->pc = 0x24BF2Cu;
    // 0x24bf2c: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x24bf2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24bf30: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x24bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x24bf34: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x24bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24bf38: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x24bf3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24BF3Cu;
    {
        const bool branch_taken_0x24bf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF3Cu;
        // 0x24bf40: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf3c) {
            ctx->pc = 0x24BF50u;
            goto label_24bf50;
        }
    }
    ctx->pc = 0x24BF44u;
label_24bf44:
    // 0x24bf44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BF44u;
    {
        const bool branch_taken_0x24bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF44u;
        // 0x24bf48: 0x36317f80  ori         $s1, $s1, 0x7F80 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32640);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf44) {
            ctx->pc = 0x24BF50u;
            goto label_24bf50;
        }
    }
    ctx->pc = 0x24BF4Cu;
label_24bf4c:
    // 0x24bf4c: 0x36310030  ori         $s1, $s1, 0x30
    ctx->pc = 0x24bf4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)48);
label_24bf50:
    // 0x24bf50: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x24bf50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x24bf54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24bf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf58: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x24bf58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x24bf5c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x24bf5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24bf60: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x24bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x24bf64: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x24bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x24bf68: 0xe6100a  movz        $v0, $a3, $a2
    ctx->pc = 0x24bf68u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x24bf6c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x24bf6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24bf70: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24bf70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24bf74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24bf74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24bf78: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24bf78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24bf7c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24BF7Cu;
    SET_GPR_U32(ctx, 31, 0x24BF84u);
    ctx->pc = 0x24BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BF7Cu;
    // 0x24bf80: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24BF7Cu, 0x24BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BF84u;
label_24bf84:
    // 0x24bf84: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x24bf84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x24bf88: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x24bf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_24bf8c:
    // 0x24bf8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24BF8Cu;
    {
        const bool branch_taken_0x24bf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF8Cu;
        // 0x24bf90: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf8c) {
            ctx->pc = 0x24BFC8u;
            goto label_24bfc8;
        }
    }
    ctx->pc = 0x24BF94u;
    // 0x24bf94: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bf98: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24bf98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24bf9c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24bf9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24bfa0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24bfa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24bfa4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24bfa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24bfa8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24bfa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24bfac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24bfacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24bfb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24bfb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24bfb4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24bfb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bfb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24bfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bfbc: 0x808089c  j           func_202270
    ctx->pc = 0x24BFBCu;
    ctx->pc = 0x24BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BFBCu;
    // 0x24bfc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x24BFC4u;
label_24bfc4:
    // 0x24bfc4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24bfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24bfc8:
    // 0x24bfc8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24bfc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24bfcc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24bfccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24bfd0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24bfd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24bfd4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24bfd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24bfd8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24bfd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24bfdc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24bfdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24bfe0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24bfe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24bfe4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24bfe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bfe8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24bfe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bfec: 0x3e00008  jr          $ra
    ctx->pc = 0x24BFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFECu;
        // 0x24bff0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BFF4u;
}
