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

// Function: signonplr_pageDraw
// Address: 0x23e4b0 - 0x23e99c
void signonplr_pageDraw_0x23e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonplr_pageDraw_0x23e4b0");
#endif

    switch (ctx->pc) {
        case 0x23e538u: goto label_23e538;
        case 0x23e540u: goto label_23e540;
        case 0x23e5acu: goto label_23e5ac;
        case 0x23e5c4u: goto label_23e5c4;
        case 0x23e5d8u: goto label_23e5d8;
        case 0x23e5e0u: goto label_23e5e0;
        case 0x23e650u: goto label_23e650;
        case 0x23e6a0u: goto label_23e6a0;
        case 0x23e72cu: goto label_23e72c;
        case 0x23e758u: goto label_23e758;
        case 0x23e788u: goto label_23e788;
        case 0x23e808u: goto label_23e808;
        case 0x23e82cu: goto label_23e82c;
        case 0x23e840u: goto label_23e840;
        case 0x23e89cu: goto label_23e89c;
        case 0x23e8a4u: goto label_23e8a4;
        case 0x23e8d4u: goto label_23e8d4;
        case 0x23e934u: goto label_23e934;
        case 0x23e93cu: goto label_23e93c;
        case 0x23e96cu: goto label_23e96c;
        default: break;
    }

    ctx->pc = 0x23e4b0u;

    // 0x23e4b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23e4b4: 0x9382b758  lbu         $v0, -0x48A8($gp)
    ctx->pc = 0x23e4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
    // 0x23e4b8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x23e4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x23e4bc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x23e4c0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x23e4c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4c4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x23e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x23e4c8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x23e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x23e4cc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x23e4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x23e4d0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23e4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x23e4d4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23e4d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23e4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23e4dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23e4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23e4e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23e4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23e4e4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23E4E4u;
    {
        const bool branch_taken_0x23e4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4E4u;
        // 0x23e4e8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4e4) {
            ctx->pc = 0x23E520u;
            goto label_23e520;
        }
    }
    ctx->pc = 0x23E4ECu;
    // 0x23e4ec: 0x9382b75a  lbu         $v0, -0x48A6($gp)
    ctx->pc = 0x23e4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
    // 0x23e4f0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23E4F0u;
    {
        const bool branch_taken_0x23e4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4F0u;
        // 0x23e4f4: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4f0) {
            ctx->pc = 0x23E524u;
            goto label_23e524;
        }
    }
    ctx->pc = 0x23E4F8u;
    // 0x23e4f8: 0x9382b750  lbu         $v0, -0x48B0($gp)
    ctx->pc = 0x23e4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948688)));
    // 0x23e4fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E4FCu;
    {
        const bool branch_taken_0x23e4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4FCu;
        // 0x23e500: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4fc) {
            ctx->pc = 0x23E524u;
            goto label_23e524;
        }
    }
    ctx->pc = 0x23E504u;
    // 0x23e504: 0x9382b7a4  lbu         $v0, -0x485C($gp)
    ctx->pc = 0x23e504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
    // 0x23e508: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E508u;
    {
        const bool branch_taken_0x23e508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E508u;
        // 0x23e50c: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e508) {
            ctx->pc = 0x23E524u;
            goto label_23e524;
        }
    }
    ctx->pc = 0x23E510u;
    // 0x23e510: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23e510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23e514: 0x8c431488  lw          $v1, 0x1488($v0)
    ctx->pc = 0x23e514u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC1488u));
    // 0x23e518: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x23e518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23e51c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x23e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_23e520:
    // 0x23e520: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23e520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_23e524:
    // 0x23e524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23e524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e528: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E528u;
    {
        const bool branch_taken_0x23e528 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x23e528) {
            ctx->pc = 0x23E538u;
            goto label_23e538;
        }
    }
    ctx->pc = 0x23E530u;
    // 0x23e530: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x23E530u;
    SET_GPR_U32(ctx, 31, 0x23E538u);
    ctx->pc = 0x23E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E530u;
    // 0x23e534: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x23E530u, 0x23E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E538u;
label_23e538:
    // 0x23e538: 0xc08089c  jal         func_202270
    ctx->pc = 0x23E538u;
    SET_GPR_U32(ctx, 31, 0x23E540u);
    ctx->pc = 0x23E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E538u;
    // 0x23e53c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23E538u, 0x23E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E540u;
label_23e540:
    // 0x23e540: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x23e540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x23e544: 0x2784b738  addiu       $a0, $gp, -0x48C8
    ctx->pc = 0x23e544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23e548: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x23e548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23e54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e550: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23e554: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23e558: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x23e558u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e55c: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x23E55Cu;
    {
        const bool branch_taken_0x23e55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E55Cu;
        // 0x23e560: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e55c) {
            ctx->pc = 0x23E6A4u;
            goto label_23e6a4;
        }
    }
    ctx->pc = 0x23E564u;
    // 0x23e564: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x23e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e568: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E568u;
    {
        const bool branch_taken_0x23e568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e568) {
            ctx->pc = 0x23E56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E568u;
            // 0x23e56c: 0x3c104078  lui         $s0, 0x4078 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16504 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E580u;
            goto label_23e580;
        }
    }
    ctx->pc = 0x23E570u;
    // 0x23e570: 0x3c102828  lui         $s0, 0x2828
    ctx->pc = 0x23e570u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)10280 << 16));
    // 0x23e574: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x23e574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23e578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23E578u;
    {
        const bool branch_taken_0x23e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E578u;
        // 0x23e57c: 0x36102880  ori         $s0, $s0, 0x2880 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)10368);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e578) {
            ctx->pc = 0x23E588u;
            goto label_23e588;
        }
    }
    ctx->pc = 0x23E580u;
label_23e580:
    // 0x23e580: 0x24125080  addiu       $s2, $zero, 0x5080
    ctx->pc = 0x23e580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x23e584: 0x36107880  ori         $s0, $s0, 0x7880
    ctx->pc = 0x23e584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)30848);
label_23e588:
    // 0x23e588: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x23e588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23e58c: 0x2784b738  addiu       $a0, $gp, -0x48C8
    ctx->pc = 0x23e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23e590: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23e594: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x23e594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x23e598: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x23e598u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e59c: 0x14820022  bne         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x23E59Cu;
    {
        const bool branch_taken_0x23e59c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E59Cu;
        // 0x23e5a0: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e59c) {
            ctx->pc = 0x23E628u;
            goto label_23e628;
        }
    }
    ctx->pc = 0x23E5A4u;
    // 0x23e5a4: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23E5A4u;
    SET_GPR_U32(ctx, 31, 0x23E5ACu);
    ctx->pc = 0x23E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5A4u;
    // 0x23e5a8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23E5A4u, 0x23E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5ACu;
label_23e5ac:
    // 0x23e5ac: 0x24030b78  addiu       $v1, $zero, 0xB78
    ctx->pc = 0x23e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23e5b0: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x23e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23e5b4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x23e5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23e5b8: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23e5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23e5bc: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23E5BCu;
    SET_GPR_U32(ctx, 31, 0x23E5C4u);
    ctx->pc = 0x23E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5BCu;
    // 0x23e5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23E5BCu, 0x23E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5C4u;
label_23e5c4:
    // 0x23e5c4: 0x2842012d  slti        $v0, $v0, 0x12D
    ctx->pc = 0x23e5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x23e5c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E5C8u;
    {
        const bool branch_taken_0x23e5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e5c8) {
            ctx->pc = 0x23E5D8u;
            goto label_23e5d8;
        }
    }
    ctx->pc = 0x23E5D0u;
    // 0x23e5d0: 0xc08089c  jal         func_202270
    ctx->pc = 0x23E5D0u;
    SET_GPR_U32(ctx, 31, 0x23E5D8u);
    ctx->pc = 0x23E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5D0u;
    // 0x23e5d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23E5D0u, 0x23E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5D8u;
label_23e5d8:
    // 0x23e5d8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23E5D8u;
    SET_GPR_U32(ctx, 31, 0x23E5E0u);
    ctx->pc = 0x23E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5D8u;
    // 0x23e5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23E5D8u, 0x23E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5E0u;
label_23e5e0:
    // 0x23e5e0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x23e5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x23e5e4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23e5e8: 0x24c699f0  addiu       $a2, $a2, -0x6610
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    // 0x23e5ec: 0x84675106  lh          $a3, 0x5106($v1)
    ctx->pc = 0x23e5ecu;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x355106u));
    // 0x23e5f0: 0x8cc4005c  lw          $a0, 0x5C($a2)
    ctx->pc = 0x23e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x23e5f4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x23e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x23e5f8: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x23e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x23e5fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e600: 0x873807  srav        $a3, $a3, $a0
    ctx->pc = 0x23e600u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x23e604: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x23e604u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x23e608: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x23e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x23e60c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x23e60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x23e610: 0x24a5fff1  addiu       $a1, $a1, -0xF
    ctx->pc = 0x23e610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967281));
    // 0x23e614: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23e614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e618: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x23e618u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23e61c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23e61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e620: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x23E620u;
    {
        const bool branch_taken_0x23e620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E620u;
        // 0x23e624: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e620) {
            ctx->pc = 0x23E698u;
            goto label_23e698;
        }
    }
    ctx->pc = 0x23E628u;
label_23e628:
    // 0x23e628: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23e628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23e62c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x23e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23e630: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x23e630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x23e634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e638: 0x2484e890  addiu       $a0, $a0, -0x1770
    ctx->pc = 0x23e638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
    // 0x23e63c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e640: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23e640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23e644: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e648: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23E648u;
    SET_GPR_U32(ctx, 31, 0x23E650u);
    ctx->pc = 0x23E64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E648u;
    // 0x23e64c: 0x8c450518  lw          $a1, 0x518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23E648u, 0x23E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E650u;
label_23e650:
    // 0x23e650: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x23e650u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x23e654: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23e654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23e658: 0x24635150  addiu       $v1, $v1, 0x5150
    ctx->pc = 0x23e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20816));
    // 0x23e65c: 0x256999f0  addiu       $t1, $t3, -0x6610
    ctx->pc = 0x23e65cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941168));
    // 0x23e660: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e664: 0x846a0006  lh          $t2, 0x6($v1)
    ctx->pc = 0x23e664u;
    SET_GPR_S32(ctx, 10, (int16_t)FAST_READ16(0x355156u));
    // 0x23e668: 0x8d22005c  lw          $v0, 0x5C($t1)
    ctx->pc = 0x23e668u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x23e66c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23e66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e670: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x23e670u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x355154u));
    // 0x23e674: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x23e674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e678: 0x4a5007  srav        $t2, $t2, $v0
    ctx->pc = 0x23e678u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x23e67c: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x23e67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x23e680: 0x8d230058  lw          $v1, 0x58($t1)
    ctx->pc = 0x23e680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x23e684: 0x8d6299f0  lw          $v0, -0x6610($t3)
    ctx->pc = 0x23e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294941168)));
    // 0x23e688: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x23e688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x23e68c: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x23e68cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x23e690: 0x24a5fff1  addiu       $a1, $a1, -0xF
    ctx->pc = 0x23e690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967281));
    // 0x23e694: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x23e694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23e698:
    // 0x23e698: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x23E698u;
    SET_GPR_U32(ctx, 31, 0x23E6A0u);
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x23E698u, 0x23E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6A0u;
label_23e6a0:
    // 0x23e6a0: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x23e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_23e6a4:
    // 0x23e6a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x23e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e6a8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x23E6A8u;
    {
        const bool branch_taken_0x23e6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6A8u;
        // 0x23e6ac: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6a8) {
            ctx->pc = 0x23E75Cu;
            goto label_23e75c;
        }
    }
    ctx->pc = 0x23E6B0u;
    // 0x23e6b0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x23e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23e6b4: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x23e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x23e6b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23e6bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23e6c0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23e6c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23e6c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23E6C8u;
    {
        const bool branch_taken_0x23e6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6C8u;
        // 0x23e6cc: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6c8) {
            ctx->pc = 0x23E75Cu;
            goto label_23e75c;
        }
    }
    ctx->pc = 0x23E6D0u;
    // 0x23e6d0: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x23e6d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x23e6d4: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x23e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x23e6d8: 0x254599f0  addiu       $a1, $t2, -0x6610
    ctx->pc = 0x23e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941168));
    // 0x23e6dc: 0x94470002  lhu         $a3, 0x2($v0)
    ctx->pc = 0x23e6dcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23e6e0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x23e6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23e6e4: 0x84480006  lh          $t0, 0x6($v0)
    ctx->pc = 0x23e6e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x23e6e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e6ec: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x23e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x23e6f0: 0xe63818  mult        $a3, $a3, $a2
    ctx->pc = 0x23e6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23e6f4: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x23e6f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23e6f8: 0x8ca90058  lw          $t1, 0x58($a1)
    ctx->pc = 0x23e6f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x23e6fc: 0x684007  srav        $t0, $t0, $v1
    ctx->pc = 0x23e6fcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x23e700: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x23e700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23e704: 0x8d4399f0  lw          $v1, -0x6610($t2)
    ctx->pc = 0x23e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294941168)));
    // 0x23e708: 0x1263007  srav        $a2, $a2, $t1
    ctx->pc = 0x23e708u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x23e70c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x23e70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x23e710: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x23e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x23e714: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23e718: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x23e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x23e71c: 0x8f90a01c  lw          $s0, -0x5FE4($gp)
    ctx->pc = 0x23e71cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x23e720: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x23e720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x23e724: 0xc08089c  jal         func_202270
    ctx->pc = 0x23E724u;
    SET_GPR_U32(ctx, 31, 0x23E72Cu);
    ctx->pc = 0x23E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E724u;
    // 0x23e728: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23E724u, 0x23E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E72Cu;
label_23e72c:
    // 0x23e72c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23e730: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23e730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23e734: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x23e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23e738: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23e738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e73c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e740: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23e740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e744: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e748: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x23e748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x23e74c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e750: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23E750u;
    SET_GPR_U32(ctx, 31, 0x23E758u);
    ctx->pc = 0x23E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E750u;
    // 0x23e754: 0x8c46051c  lw          $a2, 0x51C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23E750u, 0x23E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E758u;
label_23e758:
    // 0x23e758: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x23e758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_23e75c:
    // 0x23e75c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23e760: 0x2783b738  addiu       $v1, $gp, -0x48C8
    ctx->pc = 0x23e760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23e764: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23e764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e76c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e76cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e770: 0x14640070  bne         $v1, $a0, . + 4 + (0x70 << 2)
    ctx->pc = 0x23E770u;
    {
        const bool branch_taken_0x23e770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E770u;
        // 0x23e774: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e770) {
            ctx->pc = 0x23E934u;
            goto label_23e934;
        }
    }
    ctx->pc = 0x23E778u;
    // 0x23e778: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e77c: 0x24575160  addiu       $s7, $v0, 0x5160
    ctx->pc = 0x23e77cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 20832));
    // 0x23e780: 0xc08089c  jal         func_202270
    ctx->pc = 0x23E780u;
    SET_GPR_U32(ctx, 31, 0x23E788u);
    ctx->pc = 0x23E784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E780u;
    // 0x23e784: 0x3c160033  lui         $s6, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23E780u, 0x23E788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E788u;
label_23e788:
    // 0x23e788: 0x26c399f0  addiu       $v1, $s6, -0x6610
    ctx->pc = 0x23e788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
    // 0x23e78c: 0x26e2fff0  addiu       $v0, $s7, -0x10
    ctx->pc = 0x23e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967280));
    // 0x23e790: 0x84440006  lh          $a0, 0x6($v0)
    ctx->pc = 0x23e790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x23e794: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x23e794u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23e798: 0x8c660058  lw          $a2, 0x58($v1)
    ctx->pc = 0x23e798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23e79c: 0x8c67005c  lw          $a3, 0x5C($v1)
    ctx->pc = 0x23e79cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x23e7a0: 0x8c680014  lw          $t0, 0x14($v1)
    ctx->pc = 0x23e7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23e7a4: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x23e7a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x23e7a8: 0x8ec399f0  lw          $v1, -0x6610($s6)
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941168)));
    // 0x23e7ac: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x23e7acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x23e7b0: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x23e7b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x23e7b4: 0x104a821  addu        $s5, $t0, $a0
    ctx->pc = 0x23e7b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x23e7b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e7bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E7BCu;
    {
        const bool branch_taken_0x23e7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7BCu;
        // 0x23e7c0: 0x659821  addu        $s3, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7bc) {
            ctx->pc = 0x23E7D8u;
            goto label_23e7d8;
        }
    }
    ctx->pc = 0x23E7C4u;
    // 0x23e7c4: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x23e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x23e7c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23e7cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23e7ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x23e7d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23E7D0u;
    {
        const bool branch_taken_0x23e7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7D0u;
        // 0x23e7d4: 0x2452ffff  addiu       $s2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7d0) {
            ctx->pc = 0x23E7E4u;
            goto label_23e7e4;
        }
    }
    ctx->pc = 0x23E7D8u;
label_23e7d8:
    // 0x23e7d8: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x23e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x23e7dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x23e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23e7e0: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x23e7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23e7e4:
    // 0x23e7e4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x23e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x23e7e8: 0x24825150  addiu       $v0, $a0, 0x5150
    ctx->pc = 0x23e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20816));
    // 0x23e7ec: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x23e7ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x355152u));
    // 0x23e7f0: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x23E7F0u;
    {
        const bool branch_taken_0x23e7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7F0u;
        // 0x23e7f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7f0) {
            ctx->pc = 0x23E8BCu;
            goto label_23e8bc;
        }
    }
    ctx->pc = 0x23E7F8u;
    // 0x23e7f8: 0x267400ae  addiu       $s4, $s3, 0xAE
    ctx->pc = 0x23e7f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 174));
    // 0x23e7fc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23e800: 0x24835150  addiu       $v1, $a0, 0x5150
    ctx->pc = 0x23e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20816));
    // 0x23e804: 0x0  nop
    ctx->pc = 0x23e804u;
    // NOP
label_23e808:
    // 0x23e808: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e80c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23e810: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x23e810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23e814: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23e818: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23e818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23e81c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x23e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x23e820: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x23e820u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23e824: 0xc088224  jal         func_220890
    ctx->pc = 0x23E824u;
    SET_GPR_U32(ctx, 31, 0x23E82Cu);
    ctx->pc = 0x23E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E824u;
    // 0x23e828: 0x2470ffff  addiu       $s0, $v1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x23E824u, 0x23E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E82Cu;
label_23e82c:
    // 0x23e82c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23e82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23e830: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23E830u;
    {
        const bool branch_taken_0x23e830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E830u;
        // 0x23e834: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e830) {
            ctx->pc = 0x23E878u;
            goto label_23e878;
        }
    }
    ctx->pc = 0x23E838u;
    // 0x23e838: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x23E838u;
    SET_GPR_U32(ctx, 31, 0x23E840u);
    ctx->pc = 0x23E83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E838u;
    // 0x23e83c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x23E838u, 0x23E840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E840u;
label_23e840:
    // 0x23e840: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x23e840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x23e844: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x23e844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x23e848: 0x24843310  addiu       $a0, $a0, 0x3310
    ctx->pc = 0x23e848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13072));
    // 0x23e84c: 0x24c6e1c8  addiu       $a2, $a2, -0x1E38
    ctx->pc = 0x23e84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959560));
    // 0x23e850: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x23e850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x23e854: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23e854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23e858: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x23e858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23e85c: 0x24a56510  addiu       $a1, $a1, 0x6510
    ctx->pc = 0x23e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25872));
    // 0x23e860: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23e860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23e864: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23e864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23e868: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e86c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e870: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23e874: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23e874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e878:
    // 0x23e878: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x23e878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23e87c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e880: 0x2686ffff  addiu       $a2, $s4, -0x1
    ctx->pc = 0x23e880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x23e884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23e884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23e888: 0x552821  addu        $a1, $v0, $s5
    ctx->pc = 0x23e888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23e88c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23e890: 0xb23821  addu        $a3, $a1, $s2
    ctx->pc = 0x23e890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x23e894: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x23E894u;
    SET_GPR_U32(ctx, 31, 0x23E89Cu);
    ctx->pc = 0x23E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E894u;
    // 0x23e898: 0x24e7fffe  addiu       $a3, $a3, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x23E894u, 0x23E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E89Cu;
label_23e89c:
    // 0x23e89c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x23E89Cu;
    SET_GPR_U32(ctx, 31, 0x23E8A4u);
    ctx->pc = 0x23E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E89Cu;
    // 0x23e8a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x23E89Cu, 0x23E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8A4u;
label_23e8a4:
    // 0x23e8a4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x23e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x23e8a8: 0x24835150  addiu       $v1, $a0, 0x5150
    ctx->pc = 0x23e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20816));
    // 0x23e8ac: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x23e8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x355152u));
    // 0x23e8b0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x23e8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23e8b4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x23E8B4u;
    {
        const bool branch_taken_0x23e8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8B4u;
        // 0x23e8b8: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8b4) {
            ctx->pc = 0x23E808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e808;
        }
    }
    ctx->pc = 0x23E8BCu;
label_23e8bc:
    // 0x23e8bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x23e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e8c0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x23E8C0u;
    {
        const bool branch_taken_0x23e8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e8c0) {
            ctx->pc = 0x23E934u;
            goto label_23e934;
        }
    }
    ctx->pc = 0x23E8C8u;
    // 0x23e8c8: 0x97c50004  lhu         $a1, 0x4($fp)
    ctx->pc = 0x23e8c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x23e8cc: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x23E8CCu;
    SET_GPR_U32(ctx, 31, 0x23E8D4u);
    ctx->pc = 0x23E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8CCu;
    // 0x23e8d0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x23E8CCu, 0x23E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8D4u;
label_23e8d4:
    // 0x23e8d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e8d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8d8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23E8D8u;
    {
        const bool branch_taken_0x23e8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8D8u;
        // 0x23e8dc: 0x26c599f0  addiu       $a1, $s6, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8d8) {
            ctx->pc = 0x23E934u;
            goto label_23e934;
        }
    }
    ctx->pc = 0x23E8E0u;
    // 0x23e8e0: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x23e8e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23e8e4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x23e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23e8e8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x23e8ec: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x23e8ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e8f0: 0x9385a02c  lbu         $a1, -0x5FD4($gp)
    ctx->pc = 0x23e8f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x23e8f4: 0x46a821  addu        $s5, $v0, $a2
    ctx->pc = 0x23e8f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23e8f8: 0x8ec799f0  lw          $a3, -0x6610($s6)
    ctx->pc = 0x23e8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941168)));
    // 0x23e8fc: 0x26a60002  addiu       $a2, $s5, 0x2
    ctx->pc = 0x23e8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x23e900: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23e900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e904: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x23e904u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e908: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x23e908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x23e90c: 0xe39821  addu        $s3, $a3, $v1
    ctx->pc = 0x23e90cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23e910: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x23e910u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x23e914: 0x2663ffe8  addiu       $v1, $s3, -0x18
    ctx->pc = 0x23e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x23e918: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23e918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x23e91c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x23e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23e920: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x23e920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23e924: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x23e924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x23e928: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x23e928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x23e92c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x23E92Cu;
    SET_GPR_U32(ctx, 31, 0x23E934u);
    ctx->pc = 0x23E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E92Cu;
    // 0x23e930: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x23E92Cu, 0x23E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E934u;
label_23e934:
    // 0x23e934: 0xc08089c  jal         func_202270
    ctx->pc = 0x23E934u;
    SET_GPR_U32(ctx, 31, 0x23E93Cu);
    ctx->pc = 0x23E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E934u;
    // 0x23e938: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23E934u, 0x23E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E93Cu;
label_23e93c:
    // 0x23e93c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23e940: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23e940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23e944: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23e944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e948: 0x2783b738  addiu       $v1, $gp, -0x48C8
    ctx->pc = 0x23e948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23e94c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x23e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23e950: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e954: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E954u;
    {
        const bool branch_taken_0x23e954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E954u;
        // 0x23e958: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e954) {
            ctx->pc = 0x23E970u;
            goto label_23e970;
        }
    }
    ctx->pc = 0x23E95Cu;
    // 0x23e95c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23e95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e960: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x23e960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e964: 0xc08bc3c  jal         func_22F0F0
    ctx->pc = 0x23E964u;
    SET_GPR_U32(ctx, 31, 0x23E96Cu);
    ctx->pc = 0x23E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E964u;
    // 0x23e968: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F0F0u, 0x23E964u, 0x23E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E96Cu;
label_23e96c:
    // 0x23e96c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x23e96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23e970:
    // 0x23e970: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x23e970u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23e974: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x23e974u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23e978: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x23e978u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23e97c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23e97cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23e980: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23e980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23e984: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23e984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e988: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23e988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e98c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23e98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e990: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23e990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e994: 0x3e00008  jr          $ra
    ctx->pc = 0x23E994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E994u;
        // 0x23e998: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E99Cu;
}
