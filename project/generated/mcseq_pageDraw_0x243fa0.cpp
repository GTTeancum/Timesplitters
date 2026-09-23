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

// Function: mcseq_pageDraw
// Address: 0x243fa0 - 0x244184
void mcseq_pageDraw_0x243fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseq_pageDraw_0x243fa0");
#endif

    switch (ctx->pc) {
        case 0x243fc8u: goto label_243fc8;
        case 0x243fe4u: goto label_243fe4;
        case 0x243fecu: goto label_243fec;
        case 0x243ff4u: goto label_243ff4;
        case 0x244024u: goto label_244024;
        case 0x24403cu: goto label_24403c;
        case 0x244098u: goto label_244098;
        case 0x2440d0u: goto label_2440d0;
        case 0x2440f4u: goto label_2440f4;
        case 0x244168u: goto label_244168;
        case 0x244170u: goto label_244170;
        default: break;
    }

    ctx->pc = 0x243fa0u;

    // 0x243fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x243fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x243fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fa8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x243fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x243fac: 0x2406027f  addiu       $a2, $zero, 0x27F
    ctx->pc = 0x243facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x243fb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x243fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fb4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x243fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x243fb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x243fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x243fbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x243fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fc0: 0xc083108  jal         func_20C420
    ctx->pc = 0x243FC0u;
    SET_GPR_U32(ctx, 31, 0x243FC8u);
    ctx->pc = 0x243FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FC0u;
    // 0x243fc4: 0x240700df  addiu       $a3, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x243FC0u, 0x243FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FC8u;
label_243fc8:
    // 0x243fc8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x243fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x243fcc: 0x245099f0  addiu       $s0, $v0, -0x6610
    ctx->pc = 0x243fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x243fd0: 0x8c4499f0  lw          $a0, -0x6610($v0)
    ctx->pc = 0x243fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x243fd4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x243fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A04u));
    // 0x243fd8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x243fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3299F4u));
    // 0x243fdc: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x243FDCu;
    SET_GPR_U32(ctx, 31, 0x243FE4u);
    ctx->pc = 0x243FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FDCu;
    // 0x243fe0: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x243FDCu, 0x243FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FE4u;
label_243fe4:
    // 0x243fe4: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x243FE4u;
    SET_GPR_U32(ctx, 31, 0x243FECu);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x243FE4u, 0x243FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FECu;
label_243fec:
    // 0x243fec: 0xc08bc28  jal         func_22F0A0
    ctx->pc = 0x243FECu;
    SET_GPR_U32(ctx, 31, 0x243FF4u);
    ctx->pc = 0x243FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FECu;
    // 0x243ff0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F0A0u, 0x243FECu, 0x243FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FF4u;
label_243ff4:
    // 0x243ff4: 0x8f83a0a8  lw          $v1, -0x5F58($gp)
    ctx->pc = 0x243ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942888)));
    // 0x243ff8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x243ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243ffc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243FFCu;
    {
        const bool branch_taken_0x243ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FFCu;
        // 0x244000: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ffc) {
            ctx->pc = 0x24400Cu;
            goto label_24400c;
        }
    }
    ctx->pc = 0x244004u;
    // 0x244004: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x244004u;
    {
        const bool branch_taken_0x244004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x244004) {
            ctx->pc = 0x244008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244004u;
            // 0x244008: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2440E4u;
            goto label_2440e4;
        }
    }
    ctx->pc = 0x24400Cu;
label_24400c:
    // 0x24400c: 0x8f84b7d4  lw          $a0, -0x482C($gp)
    ctx->pc = 0x24400cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948820)));
    // 0x244010: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x244010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244014: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244014u;
    {
        const bool branch_taken_0x244014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x244018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244014u;
        // 0x244018: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244014) {
            ctx->pc = 0x244028u;
            goto label_244028;
        }
    }
    ctx->pc = 0x24401Cu;
    // 0x24401c: 0xc080a98  jal         func_202A60
    ctx->pc = 0x24401Cu;
    SET_GPR_U32(ctx, 31, 0x244024u);
    ctx->pc = 0x202A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A60u, 0x24401Cu, 0x244024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244024u;
label_244024:
    // 0x244024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244028:
    // 0x244028: 0x8f84b7d8  lw          $a0, -0x4828($gp)
    ctx->pc = 0x244028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948824)));
    // 0x24402c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24402Cu;
    {
        const bool branch_taken_0x24402c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x244030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24402Cu;
        // 0x244030: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24402c) {
            ctx->pc = 0x244044u;
            goto label_244044;
        }
    }
    ctx->pc = 0x244034u;
    // 0x244034: 0xc080a98  jal         func_202A60
    ctx->pc = 0x244034u;
    SET_GPR_U32(ctx, 31, 0x24403Cu);
    ctx->pc = 0x202A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A60u, 0x244034u, 0x24403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24403Cu;
label_24403c:
    // 0x24403c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24403cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244040: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x244040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_244044:
    // 0x244044: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x244044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x244048: 0x24632e80  addiu       $v1, $v1, 0x2E80
    ctx->pc = 0x244048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11904));
    // 0x24404c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x24404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x244050: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x244050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x244054: 0x94650018  lhu         $a1, 0x18($v1)
    ctx->pc = 0x244054u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x244058: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x244058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24405c: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x24405cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x244060: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x244060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x244064: 0x8f84b7d4  lw          $a0, -0x482C($gp)
    ctx->pc = 0x244064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948820)));
    // 0x244068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24406c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24406cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x244070: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x244070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x244074: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x244074u;
    {
        const bool branch_taken_0x244074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x244078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244074u;
        // 0x244078: 0xa7a50002  sh          $a1, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244074) {
            ctx->pc = 0x2440A8u;
            goto label_2440a8;
        }
    }
    ctx->pc = 0x24407Cu;
    // 0x24407c: 0x53400  sll         $a2, $a1, 16
    ctx->pc = 0x24407cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x244080: 0x8f88a01c  lw          $t0, -0x5FE4($gp)
    ctx->pc = 0x244080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x244084: 0x8f89a020  lw          $t1, -0x5FE0($gp)
    ctx->pc = 0x244084u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x244088: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x244088u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x24408c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244090: 0xc08ba4c  jal         func_22E930
    ctx->pc = 0x244090u;
    SET_GPR_U32(ctx, 31, 0x244098u);
    ctx->pc = 0x244094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244090u;
    // 0x244094: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E930u, 0x244090u, 0x244098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244098u;
label_244098:
    // 0x244098: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x244098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x24409c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x24409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2440a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2440a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2440a4: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x2440a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
label_2440a8:
    // 0x2440a8: 0x8f84b7d8  lw          $a0, -0x4828($gp)
    ctx->pc = 0x2440a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948824)));
    // 0x2440ac: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2440ACu;
    {
        const bool branch_taken_0x2440ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2440B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440ACu;
        // 0x2440b0: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440ac) {
            ctx->pc = 0x244170u;
            goto label_244170;
        }
    }
    ctx->pc = 0x2440B4u;
    // 0x2440b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2440b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440b8: 0x8f88a01c  lw          $t0, -0x5FE4($gp)
    ctx->pc = 0x2440b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x2440bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2440bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2440c0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2440c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2440c4: 0x8f89a020  lw          $t1, -0x5FE0($gp)
    ctx->pc = 0x2440c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x2440c8: 0xc08ba4c  jal         func_22E930
    ctx->pc = 0x2440C8u;
    SET_GPR_U32(ctx, 31, 0x2440D0u);
    ctx->pc = 0x2440CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440C8u;
    // 0x2440cc: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E930u, 0x2440C8u, 0x2440D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440D0u;
label_2440d0:
    // 0x2440d0: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x2440d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2440d4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2440d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2440d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2440d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2440dc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2440DCu;
    {
        const bool branch_taken_0x2440dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2440E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440DCu;
        // 0x2440e0: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440dc) {
            ctx->pc = 0x244170u;
            goto label_244170;
        }
    }
    ctx->pc = 0x2440E4u;
label_2440e4:
    // 0x2440e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2440E4u;
    {
        const bool branch_taken_0x2440e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2440E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440E4u;
        // 0x2440e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440e4) {
            ctx->pc = 0x244168u;
            goto label_244168;
        }
    }
    ctx->pc = 0x2440ECu;
    // 0x2440ec: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x2440ECu;
    SET_GPR_U32(ctx, 31, 0x2440F4u);
    ctx->pc = 0x2440F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440ECu;
    // 0x2440f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x2440ECu, 0x2440F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440F4u;
label_2440f4:
    // 0x2440f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2440f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440f8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2440F8u;
    {
        const bool branch_taken_0x2440f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2440FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440F8u;
        // 0x2440fc: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440f8) {
            ctx->pc = 0x244168u;
            goto label_244168;
        }
    }
    ctx->pc = 0x244100u;
    // 0x244100: 0x8e090014  lw          $t1, 0x14($s0)
    ctx->pc = 0x244100u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x244104: 0x24422e80  addiu       $v0, $v0, 0x2E80
    ctx->pc = 0x244104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
    // 0x244108: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x244108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x24410c: 0x8c4b0014  lw          $t3, 0x14($v0)
    ctx->pc = 0x24410cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x244110: 0x8c4a001c  lw          $t2, 0x1C($v0)
    ctx->pc = 0x244110u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x244114: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x244114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x244118: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x244118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x24411c: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x24411cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x244120: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x244120u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x244124: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x244124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x244128: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x244128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24412c: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x24412cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x244130: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x244130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x244134: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x244134u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x244138: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x244138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x24413c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x244140: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x244140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244144: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x244144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244148: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x244148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24414c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x24414cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244150: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x244150u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x244154: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x244154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x244158: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x244158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x24415c: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x24415cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x244160: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x244160u;
    SET_GPR_U32(ctx, 31, 0x244168u);
    ctx->pc = 0x244164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244160u;
    // 0x244164: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x244160u, 0x244168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244168u;
label_244168:
    // 0x244168: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x244168u;
    SET_GPR_U32(ctx, 31, 0x244170u);
    ctx->pc = 0x24416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244168u;
    // 0x24416c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x244168u, 0x244170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244170u;
label_244170:
    // 0x244170: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x244170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244174: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x244174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244178: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x244178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24417c: 0x3e00008  jr          $ra
    ctx->pc = 0x24417Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24417Cu;
        // 0x244180: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24417Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244184u;
}
