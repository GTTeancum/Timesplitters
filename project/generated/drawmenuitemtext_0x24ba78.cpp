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

// Function: drawmenuitemtext
// Address: 0x24ba78 - 0x24bbfc
void drawmenuitemtext_0x24ba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawmenuitemtext_0x24ba78");
#endif

    switch (ctx->pc) {
        case 0x24bab4u: goto label_24bab4;
        case 0x24bb68u: goto label_24bb68;
        case 0x24bbc8u: goto label_24bbc8;
        case 0x24bbe0u: goto label_24bbe0;
        default: break;
    }

    ctx->pc = 0x24ba78u;

    // 0x24ba78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24ba78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24ba7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24ba80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24ba84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ba84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba88: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24ba8c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24ba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24ba90: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24ba94: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x24ba94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ba98: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x24ba98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x24ba9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x24ba9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x24baa0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24BAA0u;
    {
        const bool branch_taken_0x24baa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAA0u;
        // 0x24baa4: 0x8f84a028  lw          $a0, -0x5FD8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24baa0) {
            ctx->pc = 0x24BAACu;
            goto label_24baac;
        }
    }
    ctx->pc = 0x24BAA8u;
    // 0x24baa8: 0x8f84a024  lw          $a0, -0x5FDC($gp)
    ctx->pc = 0x24baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942756)));
label_24baac:
    // 0x24baac: 0xc08089c  jal         func_202270
    ctx->pc = 0x24BAACu;
    SET_GPR_U32(ctx, 31, 0x24BAB4u);
    ctx->pc = 0x24BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAACu;
    // 0x24bab0: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x24BAACu, 0x24BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BAB4u;
label_24bab4:
    // 0x24bab4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24bab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bab8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x24bab8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24babc: 0x264299f0  addiu       $v0, $s2, -0x6610
    ctx->pc = 0x24babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941168));
    // 0x24bac0: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x24bac0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24bac4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x24bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24bac8: 0x8e4299f0  lw          $v0, -0x6610($s2)
    ctx->pc = 0x24bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941168)));
    // 0x24bacc: 0x9627000a  lhu         $a3, 0xA($s1)
    ctx->pc = 0x24baccu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x24bad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24bad4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24bad8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x24bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x24badc: 0x30e60080  andi        $a2, $a3, 0x80
    ctx->pc = 0x24badcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x24bae0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BAE0u;
    {
        const bool branch_taken_0x24bae0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAE0u;
        // 0x24bae4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bae0) {
            ctx->pc = 0x24BAFCu;
            goto label_24bafc;
        }
    }
    ctx->pc = 0x24BAE8u;
    // 0x24bae8: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x24bae8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x24baec: 0x3c082020  lui         $t0, 0x2020
    ctx->pc = 0x24baecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8224 << 16));
    // 0x24baf0: 0x34e72880  ori         $a3, $a3, 0x2880
    ctx->pc = 0x24baf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10368);
    // 0x24baf4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24BAF4u;
    {
        const bool branch_taken_0x24baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAF4u;
        // 0x24baf8: 0x35080a80  ori         $t0, $t0, 0xA80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2688);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24baf4) {
            ctx->pc = 0x24BB58u;
            goto label_24bb58;
        }
    }
    ctx->pc = 0x24BAFCu;
label_24bafc:
    // 0x24bafc: 0x30e24040  andi        $v0, $a3, 0x4040
    ctx->pc = 0x24bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16448);
    // 0x24bb00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BB00u;
    {
        const bool branch_taken_0x24bb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB00u;
        // 0x24bb04: 0x3c071e1e  lui         $a3, 0x1E1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7710 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb00) {
            ctx->pc = 0x24BB14u;
            goto label_24bb14;
        }
    }
    ctx->pc = 0x24BB08u;
    // 0x24bb08: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x24bb08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24bb0c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24BB0Cu;
    {
        const bool branch_taken_0x24bb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB0Cu;
        // 0x24bb10: 0x34e71e80  ori         $a3, $a3, 0x1E80 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)7808);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb0c) {
            ctx->pc = 0x24BB58u;
            goto label_24bb58;
        }
    }
    ctx->pc = 0x24BB14u;
label_24bb14:
    // 0x24bb14: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x24bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24bb18: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24bb1c: 0x24632e50  addiu       $v1, $v1, 0x2E50
    ctx->pc = 0x24bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11856));
    // 0x24bb20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24bb24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24bb28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24bb2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bb30: 0x16240008  bne         $s1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24BB30u;
    {
        const bool branch_taken_0x24bb30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x24BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB30u;
        // 0x24bb34: 0x8f87a01c  lw          $a3, -0x5FE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb30) {
            ctx->pc = 0x24BB54u;
            goto label_24bb54;
        }
    }
    ctx->pc = 0x24BB38u;
    // 0x24bb38: 0x9382a01b  lbu         $v0, -0x5FE5($gp)
    ctx->pc = 0x24bb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942747)));
    // 0x24bb3c: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x24bb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x24bb40: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x24bb40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x24bb44: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x24bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24bb48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24bb4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BB4Cu;
    {
        const bool branch_taken_0x24bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB4Cu;
        // 0x24bb50: 0x34485080  ori         $t0, $v0, 0x5080 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20608);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb4c) {
            ctx->pc = 0x24BB58u;
            goto label_24bb58;
        }
    }
    ctx->pc = 0x24BB54u;
label_24bb54:
    // 0x24bb54: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x24bb54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
label_24bb58:
    // 0x24bb58: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x24bb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24bb5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bb60: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24BB60u;
    SET_GPR_U32(ctx, 31, 0x24BB68u);
    ctx->pc = 0x24BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB60u;
    // 0x24bb64: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24BB60u, 0x24BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB68u;
label_24bb68:
    // 0x24bb68: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x24bb68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24bb6c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x24bb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x24bb70: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24BB70u;
    {
        const bool branch_taken_0x24bb70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bb70) {
            ctx->pc = 0x24BB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BB70u;
            // 0x24bb74: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BBCCu;
            goto label_24bbcc;
        }
    }
    ctx->pc = 0x24BB78u;
    // 0x24bb78: 0x264399f0  addiu       $v1, $s2, -0x6610
    ctx->pc = 0x24bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941168));
    // 0x24bb7c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x24bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x24bb80: 0x8c660058  lw          $a2, 0x58($v1)
    ctx->pc = 0x24bb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x24bb84: 0x3c047f7f  lui         $a0, 0x7F7F
    ctx->pc = 0x24bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32639 << 16));
    // 0x24bb88: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x24bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bb8c: 0x3c073f3f  lui         $a3, 0x3F3F
    ctx->pc = 0x24bb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16191 << 16));
    // 0x24bb90: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x24bb90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x24bb94: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x24bb94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x24bb98: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x24bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x24bb9c: 0x34847f80  ori         $a0, $a0, 0x7F80
    ctx->pc = 0x24bb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32640);
    // 0x24bba0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x24bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24bba4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x24bba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x24bba8: 0x34e73f80  ori         $a3, $a3, 0x3F80
    ctx->pc = 0x24bba8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16256);
    // 0x24bbac: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x24bbacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x24bbb0: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x24bbb0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x24bbb4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x24bbb8: 0x24c6e9b0  addiu       $a2, $a2, -0x1650
    ctx->pc = 0x24bbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961584));
    // 0x24bbbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24bbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bbc0: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x24BBC0u;
    SET_GPR_U32(ctx, 31, 0x24BBC8u);
    ctx->pc = 0x24BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BBC0u;
    // 0x24bbc4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x24BBC0u, 0x24BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBC8u;
label_24bbc8:
    // 0x24bbc8: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x24bbc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_24bbcc:
    // 0x24bbcc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x24bbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x24bbd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BBD0u;
    {
        const bool branch_taken_0x24bbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBD0u;
        // 0x24bbd4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbd0) {
            ctx->pc = 0x24BBE4u;
            goto label_24bbe4;
        }
    }
    ctx->pc = 0x24BBD8u;
    // 0x24bbd8: 0xc08089c  jal         func_202270
    ctx->pc = 0x24BBD8u;
    SET_GPR_U32(ctx, 31, 0x24BBE0u);
    ctx->pc = 0x24BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BBD8u;
    // 0x24bbdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x24BBD8u, 0x24BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBE0u;
label_24bbe0:
    // 0x24bbe0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24bbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24bbe4:
    // 0x24bbe4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24bbe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24bbe8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24bbe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24bbec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24bbecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bbf0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24bbf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x24BBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBF4u;
        // 0x24bbf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BBFCu;
}
