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

// Function: zoomtile_pageDraw
// Address: 0x253018 - 0x25321c
void zoomtile_pageDraw_0x253018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtile_pageDraw_0x253018");
#endif

    switch (ctx->pc) {
        case 0x25303cu: goto label_25303c;
        case 0x253084u: goto label_253084;
        case 0x25308cu: goto label_25308c;
        case 0x25312cu: goto label_25312c;
        case 0x25316cu: goto label_25316c;
        case 0x253188u: goto label_253188;
        case 0x2531fcu: goto label_2531fc;
        default: break;
    }

    ctx->pc = 0x253018u;

    // 0x253018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x253018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25301c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x253020: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x253020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253024: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x253024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x253028: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x253028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25302c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253030: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x253030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x253034: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x253034u;
    SET_GPR_U32(ctx, 31, 0x25303Cu);
    ctx->pc = 0x253038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253034u;
    // 0x253038: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x253034u, 0x25303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25303Cu;
label_25303c:
    // 0x25303c: 0x8f84b87c  lw          $a0, -0x4784($gp)
    ctx->pc = 0x25303cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948988)));
    // 0x253040: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x253040u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x253044: 0x8f85b880  lw          $a1, -0x4780($gp)
    ctx->pc = 0x253044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948992)));
    // 0x253048: 0x24082880  addiu       $t0, $zero, 0x2880
    ctx->pc = 0x253048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x25304c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x25304cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x253050: 0x8f8ab874  lw          $t2, -0x478C($gp)
    ctx->pc = 0x253050u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948980)));
    // 0x253054: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x253054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x253058: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x253058u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x25305c: 0x8f83b878  lw          $v1, -0x4788($gp)
    ctx->pc = 0x25305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
    // 0x253060: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x253060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x253064: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x253064u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x253068: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x253068u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x25306c: 0x1443021  addu        $a2, $t2, $a0
    ctx->pc = 0x25306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x253070: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x253070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x253074: 0x1442023  subu        $a0, $t2, $a0
    ctx->pc = 0x253074u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x253078: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x253078u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25307c: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x25307Cu;
    SET_GPR_U32(ctx, 31, 0x253084u);
    ctx->pc = 0x253080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25307Cu;
    // 0x253080: 0x35297f7f  ori         $t1, $t1, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x25307Cu, 0x253084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253084u;
label_253084:
    // 0x253084: 0xc094362  jal         func_250D88
    ctx->pc = 0x253084u;
    SET_GPR_U32(ctx, 31, 0x25308Cu);
    ctx->pc = 0x250D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250D88u, 0x253084u, 0x25308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25308Cu;
label_25308c:
    // 0x25308c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x25308cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x253090: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x253090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x253094: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x253094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x253098: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x253098u;
    {
        const bool branch_taken_0x253098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253098u;
        // 0x25309c: 0x3c100035  lui         $s0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253098) {
            ctx->pc = 0x25316Cu;
            goto label_25316c;
        }
    }
    ctx->pc = 0x2530A0u;
    // 0x2530a0: 0x9783a1e0  lhu         $v1, -0x5E20($gp)
    ctx->pc = 0x2530a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x2530a4: 0x26076688  addiu       $a3, $s0, 0x6688
    ctx->pc = 0x2530a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 26248));
    // 0x2530a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2530a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2530ac: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2530ACu;
    {
        const bool branch_taken_0x2530ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2530B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530ACu;
        // 0x2530b0: 0xae006688  sw          $zero, 0x6688($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 26248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530ac) {
            ctx->pc = 0x2530D4u;
            goto label_2530d4;
        }
    }
    ctx->pc = 0x2530B4u;
    // 0x2530b4: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x2530b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2530b8: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2530b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2530bc: 0x24c42c18  addiu       $a0, $a2, 0x2C18
    ctx->pc = 0x2530bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x2530c0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2530c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2530c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2530c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2530c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2530c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2530cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2530CCu;
    {
        const bool branch_taken_0x2530cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530CCu;
        // 0x2530d0: 0x8c640dd8  lw          $a0, 0xDD8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530cc) {
            ctx->pc = 0x2530F0u;
            goto label_2530f0;
        }
    }
    ctx->pc = 0x2530D4u;
label_2530d4:
    // 0x2530d4: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x2530d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2530d8: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2530d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2530dc: 0x24c42c18  addiu       $a0, $a2, 0x2C18
    ctx->pc = 0x2530dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x2530e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2530e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2530e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2530e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2530e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2530e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2530ec: 0x8c640ddc  lw          $a0, 0xDDC($v1)
    ctx->pc = 0x2530ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3548)));
label_2530f0:
    // 0x2530f0: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x2530f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x2530f4: 0x24d22c18  addiu       $s2, $a2, 0x2C18
    ctx->pc = 0x2530f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x2530f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2530f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2530fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2530fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x253100: 0x26116688  addiu       $s1, $s0, 0x6688
    ctx->pc = 0x253100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 26248));
    // 0x253104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253108: 0x8f84a220  lw          $a0, -0x5DE0($gp)
    ctx->pc = 0x253108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x25310c: 0x8c620de0  lw          $v0, 0xDE0($v1)
    ctx->pc = 0x25310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3552)));
    // 0x253110: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x253110u;
    {
        const bool branch_taken_0x253110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x253114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253110u;
        // 0x253114: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253110) {
            ctx->pc = 0x25314Cu;
            goto label_25314c;
        }
    }
    ctx->pc = 0x253118u;
    // 0x253118: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x253118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25311c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x25311cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x253120: 0x8f84a20c  lw          $a0, -0x5DF4($gp)
    ctx->pc = 0x253120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
    // 0x253124: 0xc0922e6  jal         func_248B98
    ctx->pc = 0x253124u;
    SET_GPR_U32(ctx, 31, 0x25312Cu);
    ctx->pc = 0x253128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253124u;
    // 0x253128: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B98u, 0x253124u, 0x25312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25312Cu;
label_25312c:
    // 0x25312c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25312Cu;
    {
        const bool branch_taken_0x25312c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25312Cu;
        // 0x253130: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25312c) {
            ctx->pc = 0x25314Cu;
            goto label_25314c;
        }
    }
    ctx->pc = 0x253134u;
    // 0x253134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x253134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x253138: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x253138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25313c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253140: 0x8c640de4  lw          $a0, 0xDE4($v1)
    ctx->pc = 0x253140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3556)));
    // 0x253144: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253144u;
    {
        const bool branch_taken_0x253144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253144u;
        // 0x253148: 0xae24000c  sw          $a0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253144) {
            ctx->pc = 0x253154u;
            goto label_253154;
        }
    }
    ctx->pc = 0x25314Cu;
label_25314c:
    // 0x25314c: 0x26026688  addiu       $v0, $s0, 0x6688
    ctx->pc = 0x25314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26248));
    // 0x253150: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x253150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_253154:
    // 0x253154: 0x8f84a158  lw          $a0, -0x5EA8($gp)
    ctx->pc = 0x253154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x253158: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x253158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x25315c: 0x8f82a160  lw          $v0, -0x5EA0($gp)
    ctx->pc = 0x25315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x253160: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x253160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x253164: 0xc092b7a  jal         func_24ADE8
    ctx->pc = 0x253164u;
    SET_GPR_U32(ctx, 31, 0x25316Cu);
    ctx->pc = 0x253168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253164u;
    // 0x253168: 0x2484ff80  addiu       $a0, $a0, -0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ADE8u, 0x253164u, 0x25316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25316Cu;
label_25316c:
    // 0x25316c: 0x8f82a220  lw          $v0, -0x5DE0($gp)
    ctx->pc = 0x25316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x253170: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x253170u;
    {
        const bool branch_taken_0x253170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253170u;
        // 0x253174: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253170) {
            ctx->pc = 0x2531FCu;
            goto label_2531fc;
        }
    }
    ctx->pc = 0x253178u;
    // 0x253178: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x253178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25317c: 0x8f84a20c  lw          $a0, -0x5DF4($gp)
    ctx->pc = 0x25317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
    // 0x253180: 0xc0922e6  jal         func_248B98
    ctx->pc = 0x253180u;
    SET_GPR_U32(ctx, 31, 0x253188u);
    ctx->pc = 0x253184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253180u;
    // 0x253184: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B98u, 0x253180u, 0x253188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253188u;
label_253188:
    // 0x253188: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x253188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25318c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x25318Cu;
    {
        const bool branch_taken_0x25318c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25318Cu;
        // 0x253190: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25318c) {
            ctx->pc = 0x253200u;
            goto label_253200;
        }
    }
    ctx->pc = 0x253194u;
    // 0x253194: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x253194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x253198: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x253198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x25319c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25319Cu;
    {
        const bool branch_taken_0x25319c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25319Cu;
        // 0x2531a0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25319c) {
            ctx->pc = 0x253200u;
            goto label_253200;
        }
    }
    ctx->pc = 0x2531A4u;
    // 0x2531a4: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2531a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2531a8: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x2531a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2531ac: 0x24428320  addiu       $v0, $v0, -0x7CE0
    ctx->pc = 0x2531acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935328));
    // 0x2531b0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2531b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2531b4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2531b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2531b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2531b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2531bc: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2531bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2531c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2531c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2531c4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2531c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2531c8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2531c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2531cc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2531ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2531d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2531d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2531d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2531d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2531d8: 0x240600c4  addiu       $a2, $zero, 0xC4
    ctx->pc = 0x2531d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x2531dc: 0x240701ae  addiu       $a3, $zero, 0x1AE
    ctx->pc = 0x2531dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2531e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2531e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2531e4: 0x240800d8  addiu       $t0, $zero, 0xD8
    ctx->pc = 0x2531e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2531e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2531e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2531ec: 0x2409283f  addiu       $t1, $zero, 0x283F
    ctx->pc = 0x2531ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10303));
    // 0x2531f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2531f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531f4: 0xc092ce6  jal         func_24B398
    ctx->pc = 0x2531F4u;
    SET_GPR_U32(ctx, 31, 0x2531FCu);
    ctx->pc = 0x2531F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2531F4u;
    // 0x2531f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B398u, 0x2531F4u, 0x2531FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531FCu;
label_2531fc:
    // 0x2531fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2531fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_253200:
    // 0x253200: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x253200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253204: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x253204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253208: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x253208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25320c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25320cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253214: 0x8093d06  j           func_24F418
    ctx->pc = 0x253214u;
    ctx->pc = 0x253218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253214u;
    // 0x253218: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F418u;
    padact_pageDraw_0x24f418(rdram, ctx, runtime); return;
    ctx->pc = 0x25321Cu;
}
