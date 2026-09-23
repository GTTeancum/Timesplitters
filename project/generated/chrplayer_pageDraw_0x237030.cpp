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

// Function: chrplayer_pageDraw
// Address: 0x237030 - 0x237510
void chrplayer_pageDraw_0x237030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrplayer_pageDraw_0x237030");
#endif

    switch (ctx->pc) {
        case 0x237070u: goto label_237070;
        case 0x23709cu: goto label_23709c;
        case 0x2370a4u: goto label_2370a4;
        case 0x2370b0u: goto label_2370b0;
        case 0x237140u: goto label_237140;
        case 0x2371d8u: goto label_2371d8;
        case 0x237224u: goto label_237224;
        case 0x23724cu: goto label_23724c;
        case 0x237288u: goto label_237288;
        case 0x237294u: goto label_237294;
        case 0x2372b0u: goto label_2372b0;
        case 0x2372d8u: goto label_2372d8;
        case 0x23735cu: goto label_23735c;
        case 0x23736cu: goto label_23736c;
        case 0x237414u: goto label_237414;
        case 0x237434u: goto label_237434;
        case 0x23745cu: goto label_23745c;
        case 0x237464u: goto label_237464;
        case 0x2374b0u: goto label_2374b0;
        case 0x2374dcu: goto label_2374dc;
        default: break;
    }

    ctx->pc = 0x237030u;

    // 0x237030: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x237030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x237034: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x237034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237038: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x237038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x23703c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23703cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x237040: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x237040u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237044: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x237044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x237048: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x237048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x23704c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x23704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x237050: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x237050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x237054: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x237054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x237058: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x237058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x23705c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x237060: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x237060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x237064: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x237064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x237068: 0xc08828c  jal         func_220A30
    ctx->pc = 0x237068u;
    SET_GPR_U32(ctx, 31, 0x237070u);
    ctx->pc = 0x23706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237068u;
    // 0x23706c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x237068u, 0x237070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237070u;
label_237070:
    // 0x237070: 0x24050b78  addiu       $a1, $zero, 0xB78
    ctx->pc = 0x237070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x237074: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x237074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x237078: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x237078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23707c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237080: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x237080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237084: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x237084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x237088: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x237088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x23708c: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23708Cu;
    {
        const bool branch_taken_0x23708c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x237090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23708Cu;
        // 0x237090: 0x8e110054  lw          $s1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23708c) {
            ctx->pc = 0x23709Cu;
            goto label_23709c;
        }
    }
    ctx->pc = 0x237094u;
    // 0x237094: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x237094u;
    SET_GPR_U32(ctx, 31, 0x23709Cu);
    ctx->pc = 0x237098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237094u;
    // 0x237098: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x237094u, 0x23709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23709Cu;
label_23709c:
    // 0x23709c: 0xc08e318  jal         func_238C60
    ctx->pc = 0x23709Cu;
    SET_GPR_U32(ctx, 31, 0x2370A4u);
    ctx->pc = 0x238C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238C60u, 0x23709Cu, 0x2370A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370A4u;
label_2370a4:
    // 0x2370a4: 0x96a50004  lhu         $a1, 0x4($s5)
    ctx->pc = 0x2370a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2370a8: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x2370A8u;
    SET_GPR_U32(ctx, 31, 0x2370B0u);
    ctx->pc = 0x2370ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370A8u;
    // 0x2370ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x2370A8u, 0x2370B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370B0u;
label_2370b0:
    // 0x2370b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2370b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370b4: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2370B4u;
    {
        const bool branch_taken_0x2370b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2370B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370B4u;
        // 0x2370b8: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370b4) {
            ctx->pc = 0x237144u;
            goto label_237144;
        }
    }
    ctx->pc = 0x2370BCu;
    // 0x2370bc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2370bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2370c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2370C0u;
    {
        const bool branch_taken_0x2370c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2370C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370C0u;
        // 0x2370c4: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370c0) {
            ctx->pc = 0x237140u;
            goto label_237140;
        }
    }
    ctx->pc = 0x2370C8u;
    // 0x2370c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2370c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2370cc: 0x248499f0  addiu       $a0, $a0, -0x6610
    ctx->pc = 0x2370ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x2370d0: 0x94ea0002  lhu         $t2, 0x2($a3)
    ctx->pc = 0x2370d0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2370d4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2370d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2370d8: 0x8c890014  lw          $t1, 0x14($a0)
    ctx->pc = 0x2370d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2370dc: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x2370dcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2370e0: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x2370e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2370e4: 0x94e60006  lhu         $a2, 0x6($a3)
    ctx->pc = 0x2370e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2370e8: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x2370e8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2370ec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2370ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2370f0: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2370f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370f4: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x2370f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2370f8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2370f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2370fc: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x2370fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237100: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x237100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x237104: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x237104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x237108: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x237108u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x23710c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x23710cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x237110: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x237110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x237114: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x237114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237118: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x237118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23711c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237120: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x237120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237124: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x237124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237128: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x237128u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x23712c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23712cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x237130: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x237130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x237134: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x237134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x237138: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x237138u;
    SET_GPR_U32(ctx, 31, 0x237140u);
    ctx->pc = 0x23713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237138u;
    // 0x23713c: 0xafaa000c  sw          $t2, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x237138u, 0x237140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237140u;
label_237140:
    // 0x237140: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x237140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_237144:
    // 0x237144: 0x2783b738  addiu       $v1, $gp, -0x48C8
    ctx->pc = 0x237144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x237148: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x237148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23714c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23714cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237150: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x237150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x237154: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x237154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237158: 0x10640021  beq         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x237158u;
    {
        const bool branch_taken_0x237158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237158u;
        // 0x23715c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237158) {
            ctx->pc = 0x2371E0u;
            goto label_2371e0;
        }
    }
    ctx->pc = 0x237160u;
    // 0x237160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237160u;
    {
        const bool branch_taken_0x237160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237160u;
        // 0x237164: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237160) {
            ctx->pc = 0x237178u;
            goto label_237178;
        }
    }
    ctx->pc = 0x237168u;
    // 0x237168: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x237168u;
    {
        const bool branch_taken_0x237168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237168u;
        // 0x23716c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237168) {
            ctx->pc = 0x23718Cu;
            goto label_23718c;
        }
    }
    ctx->pc = 0x237170u;
    // 0x237170: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x237170u;
    {
        const bool branch_taken_0x237170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237170u;
        // 0x237174: 0xdfbe0090  ld          $fp, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237170) {
            ctx->pc = 0x2374E4u;
            goto label_2374e4;
        }
    }
    ctx->pc = 0x237178u;
label_237178:
    // 0x237178: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x237178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23717c: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x23717Cu;
    {
        const bool branch_taken_0x23717c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23717Cu;
        // 0x237180: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23717c) {
            ctx->pc = 0x2372E0u;
            goto label_2372e0;
        }
    }
    ctx->pc = 0x237184u;
    // 0x237184: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x237184u;
    {
        const bool branch_taken_0x237184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237184u;
        // 0x237188: 0xdfbe0090  ld          $fp, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237184) {
            ctx->pc = 0x2374E4u;
            goto label_2374e4;
        }
    }
    ctx->pc = 0x23718Cu;
label_23718c:
    // 0x23718c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x23718cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x237190: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x237190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x237194: 0x2263018  mult        $a2, $s1, $a2
    ctx->pc = 0x237194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x237198: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x237198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x23719c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2371a0: 0x24a550e0  addiu       $a1, $a1, 0x50E0
    ctx->pc = 0x2371a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20704));
    // 0x2371a4: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x2371a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2371a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2371a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2371ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2371acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2371b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2371b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371b4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2371b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2371b8: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2371b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2371bc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x2371bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2371c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2371c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2371c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2371c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2371c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2371c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2371cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2371ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2371d0: 0xc08dbd0  jal         func_236F40
    ctx->pc = 0x2371D0u;
    SET_GPR_U32(ctx, 31, 0x2371D8u);
    ctx->pc = 0x2371D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2371D0u;
    // 0x2371d4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F40u, 0x2371D0u, 0x2371D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371D8u;
label_2371d8:
    // 0x2371d8: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2371D8u;
    {
        const bool branch_taken_0x2371d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371D8u;
        // 0x2371dc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371d8) {
            ctx->pc = 0x2374E0u;
            goto label_2374e0;
        }
    }
    ctx->pc = 0x2371E0u;
label_2371e0:
    // 0x2371e0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2371e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2371e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2371e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2371e8: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x2371e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2371ec: 0x24424008  addiu       $v0, $v0, 0x4008
    ctx->pc = 0x2371ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16392));
    // 0x2371f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2371f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2371f4: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x2371f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x2371f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2371f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2371fc: 0x26732c18  addiu       $s3, $s3, 0x2C18
    ctx->pc = 0x2371fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x237200: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x237200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x237204: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x237204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237208: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x237208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x23720c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x237210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237218: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x237218u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23721c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23721Cu;
    SET_GPR_U32(ctx, 31, 0x237224u);
    ctx->pc = 0x237220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23721Cu;
    // 0x237220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23721Cu, 0x237224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237224u;
label_237224:
    // 0x237224: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x237224u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x237228: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x237228u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x23722c: 0x265299f0  addiu       $s2, $s2, -0x6610
    ctx->pc = 0x23722cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941168));
    // 0x237230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237234: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x237234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x237238: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x237238u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x23723c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237244: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x237244u;
    SET_GPR_U32(ctx, 31, 0x23724Cu);
    ctx->pc = 0x237248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237244u;
    // 0x237248: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x237244u, 0x23724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23724Cu;
label_23724c:
    // 0x23724c: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x23724cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x237250: 0x3c034078  lui         $v1, 0x4078
    ctx->pc = 0x237250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16504 << 16));
    // 0x237254: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x237254u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x237258: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x237258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x23725c: 0x8f82b454  lw          $v0, -0x4BAC($gp)
    ctx->pc = 0x23725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947924)));
    // 0x237260: 0x34637880  ori         $v1, $v1, 0x7880
    ctx->pc = 0x237260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30848);
    // 0x237264: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x237264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x237268: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x237268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x23726c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x237270: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x237270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237278: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x237278u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x23727c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23727cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237280: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x237280u;
    SET_GPR_U32(ctx, 31, 0x237288u);
    ctx->pc = 0x237284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237280u;
    // 0x237284: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x237280u, 0x237288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237288u;
label_237288:
    // 0x237288: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23728c: 0xc08db98  jal         func_236E60
    ctx->pc = 0x23728Cu;
    SET_GPR_U32(ctx, 31, 0x237294u);
    ctx->pc = 0x237290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23728Cu;
    // 0x237290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E60u, 0x23728Cu, 0x237294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237294u;
label_237294:
    // 0x237294: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x237294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x237298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23729c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2372a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2372a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2372a4: 0x8c740694  lw          $s4, 0x694($v1)
    ctx->pc = 0x2372a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1684)));
    // 0x2372a8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2372A8u;
    SET_GPR_U32(ctx, 31, 0x2372B0u);
    ctx->pc = 0x2372ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372A8u;
    // 0x2372ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2372A8u, 0x2372B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372B0u;
label_2372b0:
    // 0x2372b0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2372b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2372b4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2372b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2372b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2372b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2372bc: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x2372bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x2372c0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2372c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2372c4: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x2372c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x2372c8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2372c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2372cc: 0x2625fff4  addiu       $a1, $s1, -0xC
    ctx->pc = 0x2372ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x2372d0: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2372D0u;
    SET_GPR_U32(ctx, 31, 0x2372D8u);
    ctx->pc = 0x2372D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372D0u;
    // 0x2372d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2372D0u, 0x2372D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372D8u;
label_2372d8:
    // 0x2372d8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2372D8u;
    {
        const bool branch_taken_0x2372d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372D8u;
        // 0x2372dc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372d8) {
            ctx->pc = 0x2374E0u;
            goto label_2374e0;
        }
    }
    ctx->pc = 0x2372E0u;
label_2372e0:
    // 0x2372e0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2372e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2372e4: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2372E4u;
    {
        const bool branch_taken_0x2372e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372E4u;
        // 0x2372e8: 0x3c1201fc  lui         $s2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372e4) {
            ctx->pc = 0x2374DCu;
            goto label_2374dc;
        }
    }
    ctx->pc = 0x2372ECu;
    // 0x2372ec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2372ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2372f0: 0x26432c88  addiu       $v1, $s2, 0x2C88
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11400));
    // 0x2372f4: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x2372f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2372f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2372f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2372fc: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x2372fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x237300: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x237300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237304: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x237304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x237308: 0x2622c380  addiu       $v0, $s1, -0x3C80
    ctx->pc = 0x237308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951808));
    // 0x23730c: 0x24842c18  addiu       $a0, $a0, 0x2C18
    ctx->pc = 0x23730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x237310: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x237310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x237314: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x237314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x237318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23731c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x237320: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x237320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237324: 0x3c144078  lui         $s4, 0x4078
    ctx->pc = 0x237324u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16504 << 16));
    // 0x237328: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x237328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23732c: 0x3c067f7f  lui         $a2, 0x7F7F
    ctx->pc = 0x23732cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32639 << 16));
    // 0x237330: 0x8f83b45c  lw          $v1, -0x4BA4($gp)
    ctx->pc = 0x237330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x237334: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237338: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x237338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23733c: 0x34c67f80  ori         $a2, $a2, 0x7F80
    ctx->pc = 0x23733cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32640);
    // 0x237340: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x237340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x237344: 0x36947880  ori         $s4, $s4, 0x7880
    ctx->pc = 0x237344u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)30848);
    // 0x237348: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x237348u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23734c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x237350: 0xc3a00b  movn        $s4, $a2, $v1
    ctx->pc = 0x237350u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
    // 0x237354: 0xc08089c  jal         func_202270
    ctx->pc = 0x237354u;
    SET_GPR_U32(ctx, 31, 0x23735Cu);
    ctx->pc = 0x237358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237354u;
    // 0x237358: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x237354u, 0x23735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23735Cu;
label_23735c:
    // 0x23735c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x23735cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237360: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x237360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237364: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x237364u;
    SET_GPR_U32(ctx, 31, 0x23736Cu);
    ctx->pc = 0x237368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237364u;
    // 0x237368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x237364u, 0x23736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23736Cu;
label_23736c:
    // 0x23736c: 0x260399f0  addiu       $v1, $s0, -0x6610
    ctx->pc = 0x23736cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x237370: 0x94480002  lhu         $t0, 0x2($v0)
    ctx->pc = 0x237370u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x237374: 0x8c670058  lw          $a3, 0x58($v1)
    ctx->pc = 0x237374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x237378: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x237378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x23737c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x23737cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x237380: 0x24040168  addiu       $a0, $zero, 0x168
    ctx->pc = 0x237380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x237384: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x237384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x237388: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x237388u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x23738c: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x23738cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x237390: 0xa89821  addu        $s3, $a1, $t0
    ctx->pc = 0x237390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x237394: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x237394u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x237398: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x237398u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x23739c: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x23739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2373a0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2373a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2373a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2373A4u;
    {
        const bool branch_taken_0x2373a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373A4u;
        // 0x2373a8: 0xc44821  addu        $t1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373a4) {
            ctx->pc = 0x2373C0u;
            goto label_2373c0;
        }
    }
    ctx->pc = 0x2373ACu;
    // 0x2373ac: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x2373acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2373b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2373b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2373b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2373b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2373b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2373B8u;
    {
        const bool branch_taken_0x2373b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373B8u;
        // 0x2373bc: 0x2623821  addu        $a3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373b8) {
            ctx->pc = 0x2373CCu;
            goto label_2373cc;
        }
    }
    ctx->pc = 0x2373C0u;
label_2373c0:
    // 0x2373c0: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x2373c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2373c4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2373c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2373c8: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x2373c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2373cc:
    // 0x2373cc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2373ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2373d0: 0x26482c88  addiu       $t0, $s2, 0x2C88
    ctx->pc = 0x2373d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 11400));
    // 0x2373d4: 0x262bc380  addiu       $t3, $s1, -0x3C80
    ctx->pc = 0x2373d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951808));
    // 0x2373d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2373d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2373dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2373e0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2373e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373e4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2373e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2373e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2373e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2373ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2373f0: 0x261699f0  addiu       $s6, $s0, -0x6610
    ctx->pc = 0x2373f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x2373f4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2373f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2373f8: 0x24115080  addiu       $s1, $zero, 0x5080
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x2373fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2373fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237400: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x237400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237404: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x237404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x237408: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x237408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x23740c: 0xc08b9ec  jal         func_22E7B0
    ctx->pc = 0x23740Cu;
    SET_GPR_U32(ctx, 31, 0x237414u);
    ctx->pc = 0x237410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23740Cu;
    // 0x237410: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x23740Cu, 0x237414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237414u;
label_237414:
    // 0x237414: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x237414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x237418: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x237418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23741c: 0x8f90a01c  lw          $s0, -0x5FE4($gp)
    ctx->pc = 0x23741cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x237420: 0x8f83a020  lw          $v1, -0x5FE0($gp)
    ctx->pc = 0x237420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x237424: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x237424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x237428: 0x282800a  movz        $s0, $s4, $v0
    ctx->pc = 0x237428u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    // 0x23742c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23742Cu;
    SET_GPR_U32(ctx, 31, 0x237434u);
    ctx->pc = 0x237430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23742Cu;
    // 0x237430: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23742Cu, 0x237434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237434u;
label_237434:
    // 0x237434: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x237434u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x237438: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x237438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x23743c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237440: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x237440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237444: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x237444u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x237448: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x237448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23744c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x23744cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x237450: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x237450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237454: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x237454u;
    SET_GPR_U32(ctx, 31, 0x23745Cu);
    ctx->pc = 0x237458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237454u;
    // 0x237458: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x237454u, 0x23745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23745Cu;
label_23745c:
    // 0x23745c: 0xc08089c  jal         func_202270
    ctx->pc = 0x23745Cu;
    SET_GPR_U32(ctx, 31, 0x237464u);
    ctx->pc = 0x237460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23745Cu;
    // 0x237460: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23745Cu, 0x237464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237464u;
label_237464:
    // 0x237464: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x237464u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x237468: 0x1472001d  bne         $v1, $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x237468u;
    {
        const bool branch_taken_0x237468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x23746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237468u;
        // 0x23746c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237468) {
            ctx->pc = 0x2374E0u;
            goto label_2374e0;
        }
    }
    ctx->pc = 0x237470u;
    // 0x237470: 0x8ec20058  lw          $v0, 0x58($s6)
    ctx->pc = 0x237470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x237474: 0x241000c8  addiu       $s0, $zero, 0xC8
    ctx->pc = 0x237474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x237478: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x237478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x23747c: 0x26640003  addiu       $a0, $s3, 0x3
    ctx->pc = 0x23747cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x237480: 0x501007  srav        $v0, $s0, $v0
    ctx->pc = 0x237480u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x237484: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x237484u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x237488: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x237488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x23748c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23748cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237490: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x237490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x237494: 0x2466ffee  addiu       $a2, $v1, -0x12
    ctx->pc = 0x237494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967278));
    // 0x237498: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x237498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23749c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x23749cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2374a0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2374a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2374a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2374a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2374a8: 0xc08b952  jal         func_22E548
    ctx->pc = 0x2374A8u;
    SET_GPR_U32(ctx, 31, 0x2374B0u);
    ctx->pc = 0x2374ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374A8u;
    // 0x2374ac: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x2374A8u, 0x2374B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374B0u;
label_2374b0:
    // 0x2374b0: 0x8ec20058  lw          $v0, 0x58($s6)
    ctx->pc = 0x2374b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x2374b4: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x2374b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x2374b8: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2374b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2374bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2374bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2374c0: 0x508007  srav        $s0, $s0, $v0
    ctx->pc = 0x2374c0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2374c4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x2374c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2374c8: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x2374c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2374cc: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2374ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2374d0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2374d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2374d4: 0xc08b952  jal         func_22E548
    ctx->pc = 0x2374D4u;
    SET_GPR_U32(ctx, 31, 0x2374DCu);
    ctx->pc = 0x2374D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374D4u;
    // 0x2374d8: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x2374D4u, 0x2374DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374DCu;
label_2374dc:
    // 0x2374dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2374dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2374e0:
    // 0x2374e0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2374e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2374e4:
    // 0x2374e4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2374e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2374e8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2374e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2374ec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2374ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2374f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2374f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2374f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2374f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2374f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2374f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2374fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2374fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237500: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x237500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237504: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x237504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x237508: 0x3e00008  jr          $ra
    ctx->pc = 0x237508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237508u;
        // 0x23750c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237510u;
}
