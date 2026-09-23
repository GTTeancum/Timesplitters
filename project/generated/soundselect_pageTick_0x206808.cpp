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

// Function: soundselect_pageTick
// Address: 0x206808 - 0x206b08
void soundselect_pageTick_0x206808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundselect_pageTick_0x206808");
#endif

    switch (ctx->pc) {
        case 0x206878u: goto label_206878;
        case 0x2068a4u: goto label_2068a4;
        case 0x2068acu: goto label_2068ac;
        case 0x2068b8u: goto label_2068b8;
        case 0x2068e4u: goto label_2068e4;
        case 0x2068f0u: goto label_2068f0;
        case 0x2069ccu: goto label_2069cc;
        case 0x2069f8u: goto label_2069f8;
        case 0x206a20u: goto label_206a20;
        case 0x206a48u: goto label_206a48;
        case 0x206a84u: goto label_206a84;
        case 0x206ad4u: goto label_206ad4;
        default: break;
    }

    ctx->pc = 0x206808u;

    // 0x206808: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x206808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20680c: 0x8f839b60  lw          $v1, -0x64A0($gp)
    ctx->pc = 0x20680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941536)));
    // 0x206810: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x206810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x206814: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x206814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x206818: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x206818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x20681c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20681cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206820: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x206820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x206824: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x206824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x206828: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x206828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20682c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x20682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x206830: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x206830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x206834: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x206834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x206838: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x206838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20683c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20683Cu;
    {
        const bool branch_taken_0x20683c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20683Cu;
        // 0x206840: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20683c) {
            ctx->pc = 0x206870u;
            goto label_206870;
        }
    }
    ctx->pc = 0x206844u;
    // 0x206844: 0x8f849b40  lw          $a0, -0x64C0($gp)
    ctx->pc = 0x206844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    // 0x206848: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x206848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20684c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20684Cu;
    {
        const bool branch_taken_0x20684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20684c) {
            ctx->pc = 0x206850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20684Cu;
            // 0x206850: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206854u;
            goto label_206854;
        }
    }
    ctx->pc = 0x206854u;
label_206854:
    // 0x206854: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x206854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x206858: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x206858u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20685c: 0x1810  mfhi        $v1
    ctx->pc = 0x20685cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206860: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x206860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206864: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x206864u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x206868: 0xa6450004  sh          $a1, 0x4($s2)
    ctx->pc = 0x206868u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x20686c: 0xaf849b60  sw          $a0, -0x64A0($gp)
    ctx->pc = 0x20686cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941536), GPR_U32(ctx, 4));
label_206870:
    // 0x206870: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x206870u;
    SET_GPR_U32(ctx, 31, 0x206878u);
    ctx->pc = 0x206874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206870u;
    // 0x206874: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x206870u, 0x206878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206878u;
label_206878:
    // 0x206878: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x206878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x20687c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20687Cu;
    {
        const bool branch_taken_0x20687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20687Cu;
        // 0x206880: 0x8f829b60  lw          $v0, -0x64A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20687c) {
            ctx->pc = 0x2068A4u;
            goto label_2068a4;
        }
    }
    ctx->pc = 0x206884u;
    // 0x206884: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x206884u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x206888: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x206888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20688c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20688cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206890: 0x288304bf  slti        $v1, $a0, 0x4BF
    ctx->pc = 0x206890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x206894: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206894u;
    {
        const bool branch_taken_0x206894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206894) {
            ctx->pc = 0x2068A4u;
            goto label_2068a4;
        }
    }
    ctx->pc = 0x20689Cu;
    // 0x20689c: 0xc081546  jal         func_205518
    ctx->pc = 0x20689Cu;
    SET_GPR_U32(ctx, 31, 0x2068A4u);
    ctx->pc = 0x2068A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20689Cu;
    // 0x2068a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x20689Cu, 0x2068A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068A4u;
label_2068a4:
    // 0x2068a4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2068A4u;
    SET_GPR_U32(ctx, 31, 0x2068ACu);
    ctx->pc = 0x2068A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068A4u;
    // 0x2068a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2068A4u, 0x2068ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068ACu;
label_2068ac:
    // 0x2068ac: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2068acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2068b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2068B0u;
    {
        const bool branch_taken_0x2068b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2068b0) {
            ctx->pc = 0x2068DCu;
            goto label_2068dc;
        }
    }
    ctx->pc = 0x2068B8u;
label_2068b8:
    // 0x2068b8: 0x8f829b60  lw          $v0, -0x64A0($gp)
    ctx->pc = 0x2068b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941536)));
    // 0x2068bc: 0x2443fff6  addiu       $v1, $v0, -0xA
    ctx->pc = 0x2068bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x2068c0: 0x4610012  bgez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2068C0u;
    {
        const bool branch_taken_0x2068c0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2068C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068C0u;
        // 0x2068c4: 0xaf839b60  sw          $v1, -0x64A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941536), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068c0) {
            ctx->pc = 0x20690Cu;
            goto label_20690c;
        }
    }
    ctx->pc = 0x2068C8u;
    // 0x2068c8: 0x240204ba  addiu       $v0, $zero, 0x4BA
    ctx->pc = 0x2068c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1210));
    // 0x2068cc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2068ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2068d0: 0xaf829b60  sw          $v0, -0x64A0($gp)
    ctx->pc = 0x2068d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941536), GPR_U32(ctx, 2));
    // 0x2068d4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2068D4u;
    {
        const bool branch_taken_0x2068d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068D4u;
        // 0x2068d8: 0xa6430004  sh          $v1, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068d4) {
            ctx->pc = 0x2069C4u;
            goto label_2069c4;
        }
    }
    ctx->pc = 0x2068DCu;
label_2068dc:
    // 0x2068dc: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2068DCu;
    SET_GPR_U32(ctx, 31, 0x2068E4u);
    ctx->pc = 0x2068E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068DCu;
    // 0x2068e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2068DCu, 0x2068E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068E4u;
label_2068e4:
    // 0x2068e4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2068e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2068e8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2068E8u;
    {
        const bool branch_taken_0x2068e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068E8u;
        // 0x2068ec: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068e8) {
            ctx->pc = 0x20692Cu;
            goto label_20692c;
        }
    }
    ctx->pc = 0x2068F0u;
label_2068f0:
    // 0x2068f0: 0x8f829b60  lw          $v0, -0x64A0($gp)
    ctx->pc = 0x2068f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941536)));
    // 0x2068f4: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2068f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2068f8: 0x286204bf  slti        $v0, $v1, 0x4BF
    ctx->pc = 0x2068f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x2068fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2068FCu;
    {
        const bool branch_taken_0x2068fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068FCu;
        // 0x206900: 0xaf839b60  sw          $v1, -0x64A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941536), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068fc) {
            ctx->pc = 0x20690Cu;
            goto label_20690c;
        }
    }
    ctx->pc = 0x206904u;
    // 0x206904: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x206904u;
    {
        const bool branch_taken_0x206904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206904u;
        // 0x206908: 0xaf809b60  sw          $zero, -0x64A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206904) {
            ctx->pc = 0x2069C4u;
            goto label_2069c4;
        }
    }
    ctx->pc = 0x20690Cu;
label_20690c:
    // 0x20690c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x20690cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x206910: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x206910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206914: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x206914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x206918: 0x284204bf  slti        $v0, $v0, 0x4BF
    ctx->pc = 0x206918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x20691c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x20691Cu;
    {
        const bool branch_taken_0x20691c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20691Cu;
        // 0x206920: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20691c) {
            ctx->pc = 0x2069C4u;
            goto label_2069c4;
        }
    }
    ctx->pc = 0x206924u;
    // 0x206924: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x206924u;
    {
        const bool branch_taken_0x206924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206924u;
        // 0x206928: 0xa6420004  sh          $v0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206924) {
            ctx->pc = 0x2069C4u;
            goto label_2069c4;
        }
    }
    ctx->pc = 0x20692Cu;
label_20692c:
    // 0x20692c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x20692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x206930: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x206930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x206934: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x206934u;
    {
        const bool branch_taken_0x206934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206934u;
        // 0x206938: 0x8f839b60  lw          $v1, -0x64A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206934) {
            ctx->pc = 0x206998u;
            goto label_206998;
        }
    }
    ctx->pc = 0x20693Cu;
    // 0x20693c: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x20693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x206940: 0x284204bf  slti        $v0, $v0, 0x4BF
    ctx->pc = 0x206940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x206944: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x206944u;
    {
        const bool branch_taken_0x206944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206944u;
        // 0x206948: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206944) {
            ctx->pc = 0x20696Cu;
            goto label_20696c;
        }
    }
    ctx->pc = 0x20694Cu;
    // 0x20694c: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x20694cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x206950: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x206950u;
    {
        const bool branch_taken_0x206950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206950u;
        // 0x206954: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206950) {
            ctx->pc = 0x2069C4u;
            goto label_2069c4;
        }
    }
    ctx->pc = 0x206958u;
    // 0x206958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20695c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x20695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x206960: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x206960u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x206964: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x206964u;
    {
        const bool branch_taken_0x206964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206964u;
        // 0x206968: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206964) {
            ctx->pc = 0x2068F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2068f0;
        }
    }
    ctx->pc = 0x20696Cu;
label_20696c:
    // 0x20696c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x20696cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x206970: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x206970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206974: 0x284204bf  slti        $v0, $v0, 0x4BF
    ctx->pc = 0x206974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x206978: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x206978u;
    {
        const bool branch_taken_0x206978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206978u;
        // 0x20697c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206978) {
            ctx->pc = 0x2069C4u;
            goto label_2069c4;
        }
    }
    ctx->pc = 0x206980u;
    // 0x206980: 0xaf809b60  sw          $zero, -0x64A0($gp)
    ctx->pc = 0x206980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941536), GPR_U32(ctx, 0));
    // 0x206984: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x206984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x206988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20698c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x20698cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x206990: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x206990u;
    {
        const bool branch_taken_0x206990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206990u;
        // 0x206994: 0xa6430004  sh          $v1, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206990) {
            ctx->pc = 0x2069C4u;
            goto label_2069c4;
        }
    }
    ctx->pc = 0x206998u;
label_206998:
    // 0x206998: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x206998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x20699c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20699Cu;
    {
        const bool branch_taken_0x20699c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20699Cu;
        // 0x2069a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20699c) {
            ctx->pc = 0x2069C4u;
            goto label_2069c4;
        }
    }
    ctx->pc = 0x2069A4u;
    // 0x2069a4: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x2069a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2069a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2069A8u;
    {
        const bool branch_taken_0x2069a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2069ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069A8u;
        // 0x2069ac: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069a8) {
            ctx->pc = 0x2069C4u;
            goto label_2069c4;
        }
    }
    ctx->pc = 0x2069B0u;
    // 0x2069b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2069b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2069b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2069b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2069b8: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x2069b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x2069bc: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
    ctx->pc = 0x2069BCu;
    {
        const bool branch_taken_0x2069bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069BCu;
        // 0x2069c0: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069bc) {
            ctx->pc = 0x2068B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2068b8;
        }
    }
    ctx->pc = 0x2069C4u;
label_2069c4:
    // 0x2069c4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2069C4u;
    SET_GPR_U32(ctx, 31, 0x2069CCu);
    ctx->pc = 0x2069C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069C4u;
    // 0x2069c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2069C4u, 0x2069CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069CCu;
label_2069cc:
    // 0x2069cc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2069ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2069d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2069D0u;
    {
        const bool branch_taken_0x2069d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069D0u;
        // 0x2069d4: 0x8f829b60  lw          $v0, -0x64A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069d0) {
            ctx->pc = 0x206A0Cu;
            goto label_206a0c;
        }
    }
    ctx->pc = 0x2069D8u;
    // 0x2069d8: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x2069d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2069dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2069dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2069e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2069e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2069e4: 0x288304bf  slti        $v1, $a0, 0x4BF
    ctx->pc = 0x2069e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x2069e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2069E8u;
    {
        const bool branch_taken_0x2069e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069E8u;
        // 0x2069ec: 0x3c1e0033  lui         $fp, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069e8) {
            ctx->pc = 0x206A10u;
            goto label_206a10;
        }
    }
    ctx->pc = 0x2069F0u;
    // 0x2069f0: 0xc081800  jal         func_206000
    ctx->pc = 0x2069F0u;
    SET_GPR_U32(ctx, 31, 0x2069F8u);
    ctx->pc = 0x206000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206000u, 0x2069F0u, 0x2069F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069F8u;
label_2069f8:
    // 0x2069f8: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x2069f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2069fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2069fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x206a00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x206a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x206a04: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x206A04u;
    {
        const bool branch_taken_0x206a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A04u;
        // 0x206a08: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a04) {
            ctx->pc = 0x206AD8u;
            goto label_206ad8;
        }
    }
    ctx->pc = 0x206A0Cu;
label_206a0c:
    // 0x206a0c: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x206a0cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
label_206a10:
    // 0x206a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a14: 0x27c59278  addiu       $a1, $fp, -0x6D88
    ctx->pc = 0x206a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939256));
    // 0x206a18: 0xc0818b0  jal         func_2062C0
    ctx->pc = 0x206A18u;
    SET_GPR_U32(ctx, 31, 0x206A20u);
    ctx->pc = 0x206A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A18u;
    // 0x206a1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2062C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2062C0u, 0x206A18u, 0x206A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A20u;
label_206a20:
    // 0x206a20: 0x24170024  addiu       $s7, $zero, 0x24
    ctx->pc = 0x206a20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x206a24: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x206a28: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x206a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x206a2c: 0x24539288  addiu       $s3, $v0, -0x6D78
    ctx->pc = 0x206a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939272));
    // 0x206a30: 0x2476e180  addiu       $s6, $v1, -0x1E80
    ctx->pc = 0x206a30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959488));
    // 0x206a34: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x206a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x206a38: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x206a38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x206a3c: 0x24542068  addiu       $s4, $v0, 0x2068
    ctx->pc = 0x206a3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 8296));
    // 0x206a40: 0x8f829b60  lw          $v0, -0x64A0($gp)
    ctx->pc = 0x206a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941536)));
    // 0x206a44: 0x0  nop
    ctx->pc = 0x206a44u;
    // NOP
label_206a48:
    // 0x206a48: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x206a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206a4c: 0x28c304bf  slti        $v1, $a2, 0x4BF
    ctx->pc = 0x206a4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x206a50: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x206A50u;
    {
        const bool branch_taken_0x206a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A50u;
        // 0x206a54: 0xd71018  mult        $v0, $a2, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a50) {
            ctx->pc = 0x206A98u;
            goto label_206a98;
        }
    }
    ctx->pc = 0x206A58u;
    // 0x206a58: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x206a58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x206a5c: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x206a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x206a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a64: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x206a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x206a68: 0x2622000b  addiu       $v0, $s1, 0xB
    ctx->pc = 0x206a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x206a6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x206a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x206a70: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x206a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x206a74: 0x26a5e358  addiu       $a1, $s5, -0x1CA8
    ctx->pc = 0x206a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959960));
    // 0x206a78: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x206a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x206a7c: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x206A7Cu;
    SET_GPR_U32(ctx, 31, 0x206A84u);
    ctx->pc = 0x206A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A7Cu;
    // 0x206a80: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x206A7Cu, 0x206A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A84u;
label_206a84:
    // 0x206a84: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x206a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x206a88: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x206a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x206a8c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x206a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x206a90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x206A90u;
    {
        const bool branch_taken_0x206a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A90u;
        // 0x206a94: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a90) {
            ctx->pc = 0x206AB8u;
            goto label_206ab8;
        }
    }
    ctx->pc = 0x206A98u;
label_206a98:
    // 0x206a98: 0x2622000b  addiu       $v0, $s1, 0xB
    ctx->pc = 0x206a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x206a9c: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x206a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x206aa0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x206aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x206aa4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x206aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x206aa8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x206aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x206aac: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x206aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x206ab0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x206ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x206ab4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x206ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_206ab8:
    // 0x206ab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206abc: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x206abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x206ac0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x206AC0u;
    {
        const bool branch_taken_0x206ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AC0u;
        // 0x206ac4: 0x8f829b60  lw          $v0, -0x64A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ac0) {
            ctx->pc = 0x206A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206a48;
        }
    }
    ctx->pc = 0x206AC8u;
    // 0x206ac8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x206ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x206acc: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x206ACCu;
    SET_GPR_U32(ctx, 31, 0x206AD4u);
    ctx->pc = 0x206AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206ACCu;
    // 0x206ad0: 0x27c59278  addiu       $a1, $fp, -0x6D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x206ACCu, 0x206AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AD4u;
label_206ad4:
    // 0x206ad4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x206ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_206ad8:
    // 0x206ad8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x206ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x206adc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x206adcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x206ae0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x206ae0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x206ae4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x206ae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206ae8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x206ae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206aec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x206aecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206af0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x206af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206af4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x206af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206af8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x206af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206b00: 0x3e00008  jr          $ra
    ctx->pc = 0x206B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B00u;
        // 0x206b04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206B08u;
}
