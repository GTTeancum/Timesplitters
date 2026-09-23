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

// Function: arcade_mmload_pageDraw
// Address: 0x239be8 - 0x239ed4
void arcade_mmload_pageDraw_0x239be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("arcade_mmload_pageDraw_0x239be8");
#endif

    switch (ctx->pc) {
        case 0x239c18u: goto label_239c18;
        case 0x239c7cu: goto label_239c7c;
        case 0x239cacu: goto label_239cac;
        case 0x239d00u: goto label_239d00;
        case 0x239d40u: goto label_239d40;
        case 0x239d48u: goto label_239d48;
        case 0x239d7cu: goto label_239d7c;
        case 0x239dc4u: goto label_239dc4;
        case 0x239decu: goto label_239dec;
        case 0x239e08u: goto label_239e08;
        case 0x239e28u: goto label_239e28;
        case 0x239e50u: goto label_239e50;
        case 0x239e70u: goto label_239e70;
        case 0x239e78u: goto label_239e78;
        case 0x239e98u: goto label_239e98;
        default: break;
    }

    ctx->pc = 0x239be8u;

    // 0x239be8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x239be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x239bec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x239becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x239bf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x239bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bf8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x239bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x239bfc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x239bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x239c00: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x239c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x239c04: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x239c04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x239c08: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x239c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x239c0c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x239c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x239c10: 0xc08b0ec  jal         func_22C3B0
    ctx->pc = 0x239C10u;
    SET_GPR_U32(ctx, 31, 0x239C18u);
    ctx->pc = 0x239C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C10u;
    // 0x239c14: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C3B0u, 0x239C10u, 0x239C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C18u;
label_239c18:
    // 0x239c18: 0x26424840  addiu       $v0, $s2, 0x4840
    ctx->pc = 0x239c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 18496));
    // 0x239c1c: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x239c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x239c20: 0x84450006  lh          $a1, 0x6($v0)
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x239c24: 0x3c0a3f3f  lui         $t2, 0x3F3F
    ctx->pc = 0x239c24u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16191 << 16));
    // 0x239c28: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x239c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x239c2c: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x239c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x239c30: 0x24a700a0  addiu       $a3, $a1, 0xA0
    ctx->pc = 0x239c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x239c34: 0x354a3f7f  ori         $t2, $t2, 0x3F7F
    ctx->pc = 0x239c34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16255);
    // 0x239c38: 0x248601fe  addiu       $a2, $a0, 0x1FE
    ctx->pc = 0x239c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 510));
    // 0x239c3c: 0x24a5fffb  addiu       $a1, $a1, -0x5
    ctx->pc = 0x239c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x239c40: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x239c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x239c44: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x239c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x239c48: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239c4c: 0x35297f7f  ori         $t1, $t1, 0x7F7F
    ctx->pc = 0x239c4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32639);
    // 0x239c50: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x239c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x239c54: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x239c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x239c58: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x239c5c: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x239c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x239c60: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x239c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x239c64: 0x24082880  addiu       $t0, $zero, 0x2880
    ctx->pc = 0x239c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x239c68: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x239c68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x239c6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x239c70: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x239c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x239c74: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x239C74u;
    SET_GPR_U32(ctx, 31, 0x239C7Cu);
    ctx->pc = 0x239C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C74u;
    // 0x239c78: 0x142480b  movn        $t1, $t2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x239C74u, 0x239C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C7Cu;
label_239c7c:
    // 0x239c7c: 0x9382b788  lbu         $v0, -0x4878($gp)
    ctx->pc = 0x239c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948744)));
    // 0x239c80: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x239c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x239c84: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x239c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x239c88: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x239C88u;
    {
        const bool branch_taken_0x239c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C88u;
        // 0x239c8c: 0x3c1401fc  lui         $s4, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c88) {
            ctx->pc = 0x239EB0u;
            goto label_239eb0;
        }
    }
    ctx->pc = 0x239C90u;
    // 0x239c90: 0x268311f8  addiu       $v1, $s4, 0x11F8
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    // 0x239c94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x239c98: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x239c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x239c9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x239C9Cu;
    {
        const bool branch_taken_0x239c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C9Cu;
        // 0x239ca0: 0x9382a02c  lbu         $v0, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c9c) {
            ctx->pc = 0x239CB8u;
            goto label_239cb8;
        }
    }
    ctx->pc = 0x239CA4u;
    // 0x239ca4: 0xc091352  jal         func_244D48
    ctx->pc = 0x239CA4u;
    SET_GPR_U32(ctx, 31, 0x239CACu);
    ctx->pc = 0x244D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D48u, 0x239CA4u, 0x239CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CACu;
label_239cac:
    // 0x239cac: 0x18400081  blez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x239CACu;
    {
        const bool branch_taken_0x239cac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x239CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CACu;
        // 0x239cb0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cac) {
            ctx->pc = 0x239EB4u;
            goto label_239eb4;
        }
    }
    ctx->pc = 0x239CB4u;
    // 0x239cb4: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x239cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
label_239cb8:
    // 0x239cb8: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x239cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x239cbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x239cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239cc0: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x239cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x239cc4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x239cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x239cc8: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x239cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x239ccc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x239cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x239cd0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x239cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x239cd4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x239cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x239cd8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x239cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x239cdc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x239cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x239ce0: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x239ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x239ce4: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x239ce4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x239ce8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x239ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x239cec: 0x14850016  bne         $a0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x239CECu;
    {
        const bool branch_taken_0x239cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x239CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CECu;
        // 0x239cf0: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cec) {
            ctx->pc = 0x239D48u;
            goto label_239d48;
        }
    }
    ctx->pc = 0x239CF4u;
    // 0x239cf4: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x239cf4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239cf8: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x239CF8u;
    SET_GPR_U32(ctx, 31, 0x239D00u);
    ctx->pc = 0x239CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CF8u;
    // 0x239cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x239CF8u, 0x239D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D00u;
label_239d00:
    // 0x239d00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x239d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d04: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x239D04u;
    {
        const bool branch_taken_0x239d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D04u;
        // 0x239d08: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d04) {
            ctx->pc = 0x239D40u;
            goto label_239d40;
        }
    }
    ctx->pc = 0x239D0Cu;
    // 0x239d0c: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x239d0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x239d10: 0x8c459a04  lw          $a1, -0x65FC($v0)
    ctx->pc = 0x239d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941188)));
    // 0x239d14: 0x96670006  lhu         $a3, 0x6($s3)
    ctx->pc = 0x239d14u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x239d18: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x239d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x239d1c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x239d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239d20: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x239d20u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x239d24: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x239d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x239d28: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x239d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239d2c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x239d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x239d30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x239d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x239d34: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x239d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x239d38: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x239D38u;
    SET_GPR_U32(ctx, 31, 0x239D40u);
    ctx->pc = 0x239D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D38u;
    // 0x239d3c: 0x35088000  ori         $t0, $t0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x239D38u, 0x239D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D40u;
label_239d40:
    // 0x239d40: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x239D40u;
    SET_GPR_U32(ctx, 31, 0x239D48u);
    ctx->pc = 0x239D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D40u;
    // 0x239d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x239D40u, 0x239D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D48u;
label_239d48:
    // 0x239d48: 0x8f84a050  lw          $a0, -0x5FB0($gp)
    ctx->pc = 0x239d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
    // 0x239d4c: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x239D4Cu;
    {
        const bool branch_taken_0x239d4c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x239D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D4Cu;
        // 0x239d50: 0x26424840  addiu       $v0, $s2, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 18496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d4c) {
            ctx->pc = 0x239D80u;
            goto label_239d80;
        }
    }
    ctx->pc = 0x239D54u;
    // 0x239d54: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x239d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x239d58: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x239d58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x239d5c: 0xc48c99f8  lwc1        $f12, -0x6608($a0)
    ctx->pc = 0x239d5cu;
    { uint32_t bits = FAST_READ32(0x3299F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239d60: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x239d60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x239d64: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x239d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x239d68: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x239d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x239d6c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x239d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239d70: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x239d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x239d74: 0xc08b952  jal         func_22E548
    ctx->pc = 0x239D74u;
    SET_GPR_U32(ctx, 31, 0x239D7Cu);
    ctx->pc = 0x239D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D74u;
    // 0x239d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x239D74u, 0x239D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D7Cu;
label_239d7c:
    // 0x239d7c: 0x8f84a050  lw          $a0, -0x5FB0($gp)
    ctx->pc = 0x239d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
label_239d80:
    // 0x239d80: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x239d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x239d84: 0x8f85b784  lw          $a1, -0x487C($gp)
    ctx->pc = 0x239d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948740)));
    // 0x239d88: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x239d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x239d8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x239d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x239d90: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x239d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x239d94: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x239D94u;
    {
        const bool branch_taken_0x239d94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x239D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D94u;
        // 0x239d98: 0x26424840  addiu       $v0, $s2, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 18496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d94) {
            ctx->pc = 0x239DC8u;
            goto label_239dc8;
        }
    }
    ctx->pc = 0x239D9Cu;
    // 0x239d9c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x239d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x239da0: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x239da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x239da4: 0xc48c99f8  lwc1        $f12, -0x6608($a0)
    ctx->pc = 0x239da4u;
    { uint32_t bits = FAST_READ32(0x3299F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239da8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x239da8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x239dac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239db0: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x239db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x239db4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x239db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239db8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x239db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x239dbc: 0xc08b952  jal         func_22E548
    ctx->pc = 0x239DBCu;
    SET_GPR_U32(ctx, 31, 0x239DC4u);
    ctx->pc = 0x239DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239DBCu;
    // 0x239dc0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x239DBCu, 0x239DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239DC4u;
label_239dc4:
    // 0x239dc4: 0x8f85b784  lw          $a1, -0x487C($gp)
    ctx->pc = 0x239dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948740)));
label_239dc8:
    // 0x239dc8: 0x18a00039  blez        $a1, . + 4 + (0x39 << 2)
    ctx->pc = 0x239DC8u;
    {
        const bool branch_taken_0x239dc8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x239DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DC8u;
        // 0x239dcc: 0x268311f8  addiu       $v1, $s4, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dc8) {
            ctx->pc = 0x239EB0u;
            goto label_239eb0;
        }
    }
    ctx->pc = 0x239DD0u;
    // 0x239dd0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x239dd4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x239dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x239dd8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x239DD8u;
    {
        const bool branch_taken_0x239dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DD8u;
        // 0x239ddc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dd8) {
            ctx->pc = 0x239EB4u;
            goto label_239eb4;
        }
    }
    ctx->pc = 0x239DE0u;
    // 0x239de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239de4: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x239DE4u;
    SET_GPR_U32(ctx, 31, 0x239DECu);
    ctx->pc = 0x239DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239DE4u;
    // 0x239de8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x239DE4u, 0x239DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239DECu;
label_239dec:
    // 0x239dec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x239decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239df0: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x239DF0u;
    {
        const bool branch_taken_0x239df0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DF0u;
        // 0x239df4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239df0) {
            ctx->pc = 0x239EB4u;
            goto label_239eb4;
        }
    }
    ctx->pc = 0x239DF8u;
    // 0x239df8: 0x8f82b784  lw          $v0, -0x487C($gp)
    ctx->pc = 0x239df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948740)));
    // 0x239dfc: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x239DFCu;
    {
        const bool branch_taken_0x239dfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x239E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DFCu;
        // 0x239e00: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dfc) {
            ctx->pc = 0x239EB4u;
            goto label_239eb4;
        }
    }
    ctx->pc = 0x239E04u;
    // 0x239e04: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x239e04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_239e08:
    // 0x239e08: 0x8f82a050  lw          $v0, -0x5FB0($gp)
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
    // 0x239e0c: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x239e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x239e10: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x239e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x239e14: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x239e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x239e18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x239e18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x239e1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x239e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239e20: 0xc0acf24  jal         func_2B3C90
    ctx->pc = 0x239E20u;
    SET_GPR_U32(ctx, 31, 0x239E28u);
    ctx->pc = 0x239E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E20u;
    // 0x239e24: 0x8c64002c  lw          $a0, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C90u, 0x239E20u, 0x239E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E28u;
label_239e28:
    // 0x239e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e2c: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x239e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x239e30: 0x26110009  addiu       $s1, $s0, 0x9
    ctx->pc = 0x239e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x239e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e38: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x239e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x239e3c: 0x96720002  lhu         $s2, 0x2($s3)
    ctx->pc = 0x239e3cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x239e40: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x239e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x239e44: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x239e44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x239e48: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x239E48u;
    SET_GPR_U32(ctx, 31, 0x239E50u);
    ctx->pc = 0x239E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E48u;
    // 0x239e4c: 0xa3829ab5  sb          $v0, -0x654B($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x239E48u, 0x239E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E50u;
label_239e50:
    // 0x239e50: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x239e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239e54: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x239e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x239e58: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x239e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x239e5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x239e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e60: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x239e60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x239e64: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x239e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x239e68: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x239E68u;
    SET_GPR_U32(ctx, 31, 0x239E70u);
    ctx->pc = 0x239E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E68u;
    // 0x239e6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x239E68u, 0x239E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E70u;
label_239e70:
    // 0x239e70: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x239E70u;
    SET_GPR_U32(ctx, 31, 0x239E78u);
    ctx->pc = 0x239E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E70u;
    // 0x239e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x239E70u, 0x239E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E78u;
label_239e78:
    // 0x239e78: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239e7c: 0x2442006e  addiu       $v0, $v0, 0x6E
    ctx->pc = 0x239e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
    // 0x239e80: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x239e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x239e84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e88: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x239e88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x239e8c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x239e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x239e90: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x239E90u;
    SET_GPR_U32(ctx, 31, 0x239E98u);
    ctx->pc = 0x239E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E90u;
    // 0x239e94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x239E90u, 0x239E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E98u;
label_239e98:
    // 0x239e98: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x239e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x239e9c: 0x8f83b784  lw          $v1, -0x487C($gp)
    ctx->pc = 0x239e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948740)));
    // 0x239ea0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x239ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x239ea4: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x239ea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x239ea8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x239EA8u;
    {
        const bool branch_taken_0x239ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EA8u;
        // 0x239eac: 0xa3829ab5  sb          $v0, -0x654B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ea8) {
            ctx->pc = 0x239E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239e08;
        }
    }
    ctx->pc = 0x239EB0u;
label_239eb0:
    // 0x239eb0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x239eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_239eb4:
    // 0x239eb4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x239eb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x239eb8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x239eb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239ebc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x239ebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239ec0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x239ec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239ec4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x239ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239ec8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x239ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x239ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ECCu;
        // 0x239ed0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239ED4u;
}
