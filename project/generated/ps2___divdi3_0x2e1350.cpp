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

// Function: __divdi3
// Address: 0x2e1350 - 0x2e1a3c
void ps2___divdi3_0x2e1350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___divdi3_0x2e1350");
#endif

    ctx->pc = 0x2e1350u;

    // 0x2e1350: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e1350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1354: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2e1354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1358: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x2e1358u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2e135c: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x2e135cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2e1360: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2e1360u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e1364: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E1364u;
    {
        const bool branch_taken_0x2e1364 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2E1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1364u;
        // 0x2e1368: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1364) {
            ctx->pc = 0x2E13C0u;
            goto label_2e13c0;
        }
    }
    ctx->pc = 0x2E136Cu;
    // 0x2e136c: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2e136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2e1370: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e1370u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e1374: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e1374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e1378: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e137c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e137cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e1380: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2e1380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e1384: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e1384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e1388: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2e1388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2e138c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e1390: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2e1390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2e1394: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2e1394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2e1398: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2e1398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2e139c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2e139cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e13a0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2e13a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2e13a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e13a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e13a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e13a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e13ac: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2e13acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2e13b0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e13b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e13b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e13b8: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x2e13b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e13bc: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x2e13bcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_2e13c0:
    // 0x2e13c0: 0x9203f  dsra32      $a0, $t1, 0
    ctx->pc = 0x2e13c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2e13c4: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E13C4u;
    {
        const bool branch_taken_0x2e13c4 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x2e13c4) {
            ctx->pc = 0x2E141Cu;
            goto label_2e141c;
        }
    }
    ctx->pc = 0x2E13CCu;
    // 0x2e13cc: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x2e13ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2e13d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e13d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e13d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e13d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e13d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e13dc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e13e0: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2e13e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2e13e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e13e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e13e8: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2e13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2e13ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e13ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e13f0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2e13f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2e13f4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2e13f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2e13f8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2e13f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2e13fc: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x2e13fcu;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x2e1400: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2e1400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2e1404: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e1404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e1408: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e1408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e140c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x2e140cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2e1410: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e1410u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1414: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1418: 0xe34825  or          $t1, $a3, $v1
    ctx->pc = 0x2e1418u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_2e141c:
    // 0x2e141c: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x2e141cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2e1420: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2e1420u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2e1424: 0x9283f  dsra32      $a1, $t1, 0
    ctx->pc = 0x2e1424u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2e1428: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2e1428u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2e142c: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x2e142cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x2e1430: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x2e1430u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2e1434: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2e1434u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2e1438: 0x14a000f2  bnez        $a1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x2E1438u;
    {
        const bool branch_taken_0x2e1438 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1438u;
        // 0x2e143c: 0x145102b  sltu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1438) {
            ctx->pc = 0x2E1804u;
            goto label_2e1804;
        }
    }
    ctx->pc = 0x2E1440u;
    // 0x2e1440: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x2e1440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1444: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2E1444u;
    {
        const bool branch_taken_0x2e1444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1444u;
        // 0x2e1448: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1444) {
            ctx->pc = 0x2E1594u;
            goto label_2e1594;
        }
    }
    ctx->pc = 0x2E144Cu;
    // 0x2e144c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e144cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1450: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1450u;
    {
        const bool branch_taken_0x2e1450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1450u;
        // 0x2e1454: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1450) {
            ctx->pc = 0x2E1468u;
            goto label_2e1468;
        }
    }
    ctx->pc = 0x2E1458u;
    // 0x2e1458: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2e1458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e145c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e145cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1460: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1460u;
    {
        const bool branch_taken_0x2e1460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1460u;
        // 0x2e1464: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1460) {
            ctx->pc = 0x2E1480u;
            goto label_2e1480;
        }
    }
    ctx->pc = 0x2E1468u;
label_2e1468:
    // 0x2e1468: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e1468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e146c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e1470: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e1470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e1474: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e1474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1478: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e1478u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e147c: 0x0  nop
    ctx->pc = 0x2e147cu;
    // NOP
label_2e1480:
    // 0x2e1480: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e1480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e1484: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2e1484u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e1488: 0x2442b770  addiu       $v0, $v0, -0x4890
    ctx->pc = 0x2e1488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948720));
    // 0x2e148c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2e148cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e1490: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e1490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e1494: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e1494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1498: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e1498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e149c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2e149cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e14a0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E14A0u;
    {
        const bool branch_taken_0x2e14a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14A0u;
        // 0x2e14a4: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14a0) {
            ctx->pc = 0x2E14BCu;
            goto label_2e14bc;
        }
    }
    ctx->pc = 0x2E14A8u;
    // 0x2e14a8: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x2e14a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e14ac: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x2e14acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e14b0: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2e14b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e14b4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e14b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e14b8: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2e14b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_2e14bc:
    // 0x2e14bc: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2e14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e14c0: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x2e14c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e14c4: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x2e14c4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2e14c8: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2e14c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2e14cc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E14CCu;
    {
        const bool branch_taken_0x2e14cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e14cc) {
            ctx->pc = 0x2E14D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E14CCu;
            // 0x2e14d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E14D4u;
            goto label_2e14d4;
        }
    }
    ctx->pc = 0x2E14D4u;
label_2e14d4:
    // 0x2e14d4: 0x1012  mflo        $v0
    ctx->pc = 0x2e14d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e14d8: 0x1810  mfhi        $v1
    ctx->pc = 0x2e14d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e14dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e14dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e14e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e14e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e14e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e14e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e14e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e14ec: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x2e14ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e14f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e14f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e14f4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e14f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e14f8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E14F8u;
    {
        const bool branch_taken_0x2e14f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e14f8) {
            ctx->pc = 0x2E14FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E14F8u;
            // 0x2e14fc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E152Cu;
            goto label_2e152c;
        }
    }
    ctx->pc = 0x2E1500u;
    // 0x2e1500: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e1504: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e1504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1508: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1508u;
    {
        const bool branch_taken_0x2e1508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1508u;
        // 0x2e150c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1508) {
            ctx->pc = 0x2E1528u;
            goto label_2e1528;
        }
    }
    ctx->pc = 0x2E1510u;
    // 0x2e1510: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1514: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1514u;
    {
        const bool branch_taken_0x2e1514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1514) {
            ctx->pc = 0x2E1518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1514u;
            // 0x2e1518: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E152Cu;
            goto label_2e152c;
        }
    }
    ctx->pc = 0x2E151Cu;
    // 0x2e151c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e151cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e1520: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e1524: 0x0  nop
    ctx->pc = 0x2e1524u;
    // NOP
label_2e1528:
    // 0x2e1528: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e1528u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e152c:
    // 0x2e152c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E152Cu;
    {
        const bool branch_taken_0x2e152c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e152c) {
            ctx->pc = 0x2E1530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E152Cu;
            // 0x2e1530: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1534u;
            goto label_2e1534;
        }
    }
    ctx->pc = 0x2E1534u;
label_2e1534:
    // 0x2e1534: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e1534u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e1538: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2e1538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2e153c: 0x1012  mflo        $v0
    ctx->pc = 0x2e153cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e1540: 0x1810  mfhi        $v1
    ctx->pc = 0x2e1540u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e1544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e1544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1548: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e154c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e1550: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e1550u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e1554: 0xa93018  mult        $a2, $a1, $t1
    ctx->pc = 0x2e1554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e1558: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e1558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e155c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e155cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1560: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1560u;
    {
        const bool branch_taken_0x2e1560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1560u;
        // 0x2e1564: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1560) {
            ctx->pc = 0x2E1580u;
            goto label_2e1580;
        }
    }
    ctx->pc = 0x2E1568u;
    // 0x2e1568: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e1568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e156c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E156Cu;
    {
        const bool branch_taken_0x2e156c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E156Cu;
        // 0x2e1570: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e156c) {
            ctx->pc = 0x2E1580u;
            goto label_2e1580;
        }
    }
    ctx->pc = 0x2E1574u;
    // 0x2e1574: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1578: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1578u;
    {
        const bool branch_taken_0x2e1578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1578) {
            ctx->pc = 0x2E157Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1578u;
            // 0x2e157c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1580u;
            goto label_2e1580;
        }
    }
    ctx->pc = 0x2E1580u;
label_2e1580:
    // 0x2e1580: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2e1580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2e1584: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e1584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e1588: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e1588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e158c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2E158Cu;
    {
        const bool branch_taken_0x2e158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E158Cu;
        // 0x2e1590: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e158c) {
            ctx->pc = 0x2E19C8u;
            goto label_2e19c8;
        }
    }
    ctx->pc = 0x2E1594u;
label_2e1594:
    // 0x2e1594: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E1594u;
    {
        const bool branch_taken_0x2e1594 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1594u;
        // 0x2e1598: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1594) {
            ctx->pc = 0x2E15C0u;
            goto label_2e15c0;
        }
    }
    ctx->pc = 0x2E159Cu;
    // 0x2e159c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e15a0: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E15A0u;
    {
        const bool branch_taken_0x2e15a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15a0) {
            ctx->pc = 0x2E15A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E15A0u;
            // 0x2e15a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E15A8u;
            goto label_2e15a8;
        }
    }
    ctx->pc = 0x2E15A8u;
label_2e15a8:
    // 0x2e15a8: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2e15a8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e15ac: 0x1012  mflo        $v0
    ctx->pc = 0x2e15acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e15b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e15b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e15b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e15b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e15b8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e15b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e15bc: 0x0  nop
    ctx->pc = 0x2e15bcu;
    // NOP
label_2e15c0:
    // 0x2e15c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E15C0u;
    {
        const bool branch_taken_0x2e15c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15C0u;
        // 0x2e15c4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15c0) {
            ctx->pc = 0x2E15D8u;
            goto label_2e15d8;
        }
    }
    ctx->pc = 0x2E15C8u;
    // 0x2e15c8: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2e15c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e15cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e15ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e15d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E15D0u;
    {
        const bool branch_taken_0x2e15d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15D0u;
        // 0x2e15d4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15d0) {
            ctx->pc = 0x2E15F0u;
            goto label_2e15f0;
        }
    }
    ctx->pc = 0x2E15D8u;
label_2e15d8:
    // 0x2e15d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e15d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e15dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e15dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e15e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e15e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e15e4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e15e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e15e8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e15e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e15ec: 0x0  nop
    ctx->pc = 0x2e15ecu;
    // NOP
label_2e15f0:
    // 0x2e15f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e15f4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2e15f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e15f8: 0x2442b770  addiu       $v0, $v0, -0x4890
    ctx->pc = 0x2e15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948720));
    // 0x2e15fc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2e15fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e1600: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e1600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e1604: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e1604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1608: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e1608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e160c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2e160cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e1610: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1610u;
    {
        const bool branch_taken_0x2e1610 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1610u;
        // 0x2e1614: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1610) {
            ctx->pc = 0x2E162Cu;
            goto label_2e162c;
        }
    }
    ctx->pc = 0x2E1618u;
    // 0x2e1618: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x2e1618u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2e161c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2e161cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1620: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x2e1620u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e1624: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2E1624u;
    {
        const bool branch_taken_0x2e1624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1624u;
        // 0x2e1628: 0x310bffff  andi        $t3, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1624) {
            ctx->pc = 0x2E1730u;
            goto label_2e1730;
        }
    }
    ctx->pc = 0x2E162Cu;
label_2e162c:
    // 0x2e162c: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x2e162cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e1630: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x2e1630u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e1634: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2e1634u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e1638: 0xea3806  srlv        $a3, $t2, $a3
    ctx->pc = 0x2e1638u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e163c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2e163cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e1640: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e1640u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1644: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x2e1644u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e1648: 0xe9001b  divu        $zero, $a3, $t1
    ctx->pc = 0x2e1648u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2e164c: 0x310bffff  andi        $t3, $t0, 0xFFFF
    ctx->pc = 0x2e164cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e1650: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2e1650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1654: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2e1654u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2e1658: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1658u;
    {
        const bool branch_taken_0x2e1658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1658) {
            ctx->pc = 0x2E165Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1658u;
            // 0x2e165c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1660u;
            goto label_2e1660;
        }
    }
    ctx->pc = 0x2E1660u;
label_2e1660:
    // 0x2e1660: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x2e1660u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1664: 0x1012  mflo        $v0
    ctx->pc = 0x2e1664u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e1668: 0x1810  mfhi        $v1
    ctx->pc = 0x2e1668u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e166c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e166cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1670: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1674: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e1674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e1678: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e1678u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e167c: 0xeb3018  mult        $a2, $a3, $t3
    ctx->pc = 0x2e167cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e1680: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e1680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e1684: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1688: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E1688u;
    {
        const bool branch_taken_0x2e1688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1688) {
            ctx->pc = 0x2E168Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1688u;
            // 0x2e168c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E16BCu;
            goto label_2e16bc;
        }
    }
    ctx->pc = 0x2E1690u;
    // 0x2e1690: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e1694: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e1694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1698: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1698u;
    {
        const bool branch_taken_0x2e1698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1698u;
        // 0x2e169c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1698) {
            ctx->pc = 0x2E16B8u;
            goto label_2e16b8;
        }
    }
    ctx->pc = 0x2E16A0u;
    // 0x2e16a0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e16a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e16a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E16A4u;
    {
        const bool branch_taken_0x2e16a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16a4) {
            ctx->pc = 0x2E16A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E16A4u;
            // 0x2e16a8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E16BCu;
            goto label_2e16bc;
        }
    }
    ctx->pc = 0x2E16ACu;
    // 0x2e16ac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e16acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e16b0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e16b4: 0x0  nop
    ctx->pc = 0x2e16b4u;
    // NOP
label_2e16b8:
    // 0x2e16b8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e16bc:
    // 0x2e16bc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E16BCu;
    {
        const bool branch_taken_0x2e16bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16bc) {
            ctx->pc = 0x2E16C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E16BCu;
            // 0x2e16c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E16C4u;
            goto label_2e16c4;
        }
    }
    ctx->pc = 0x2E16C4u;
label_2e16c4:
    // 0x2e16c4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e16c4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e16c8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2e16c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2e16cc: 0x1012  mflo        $v0
    ctx->pc = 0x2e16ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e16d0: 0x1810  mfhi        $v1
    ctx->pc = 0x2e16d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e16d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e16d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e16d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e16dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e16dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e16e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e16e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e16e4: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x2e16e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e16e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e16e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e16ec: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e16ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e16f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E16F0u;
    {
        const bool branch_taken_0x2e16f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16F0u;
        // 0x2e16f4: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16f0) {
            ctx->pc = 0x2E1720u;
            goto label_2e1720;
        }
    }
    ctx->pc = 0x2E16F8u;
    // 0x2e16f8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e16fc: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e16fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1700: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1700u;
    {
        const bool branch_taken_0x2e1700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1700u;
        // 0x2e1704: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1700) {
            ctx->pc = 0x2E171Cu;
            goto label_2e171c;
        }
    }
    ctx->pc = 0x2E1708u;
    // 0x2e1708: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e170c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E170Cu;
    {
        const bool branch_taken_0x2e170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E170Cu;
        // 0x2e1710: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e170c) {
            ctx->pc = 0x2E1720u;
            goto label_2e1720;
        }
    }
    ctx->pc = 0x2E1714u;
    // 0x2e1714: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2e1714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2e1718: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2e171c:
    // 0x2e171c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2e171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_2e1720:
    // 0x2e1720: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x2e1720u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e1724: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e1724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e1728: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e1728u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e172c: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x2e172cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2e1730:
    // 0x2e1730: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2e1730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1734: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2e1734u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2e1738: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x2e1738u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2e173c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x2e173cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1740: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1740u;
    {
        const bool branch_taken_0x2e1740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1740) {
            ctx->pc = 0x2E1744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1740u;
            // 0x2e1744: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1748u;
            goto label_2e1748;
        }
    }
    ctx->pc = 0x2E1748u;
label_2e1748:
    // 0x2e1748: 0x1012  mflo        $v0
    ctx->pc = 0x2e1748u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e174c: 0x1810  mfhi        $v1
    ctx->pc = 0x2e174cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e1750: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e1750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1754: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1758: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e1758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e175c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e175cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e1760: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x2e1760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e1764: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e1764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e1768: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e176c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E176Cu;
    {
        const bool branch_taken_0x2e176c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e176c) {
            ctx->pc = 0x2E1770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E176Cu;
            // 0x2e1770: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E179Cu;
            goto label_2e179c;
        }
    }
    ctx->pc = 0x2E1774u;
    // 0x2e1774: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e1778: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e1778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e177c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E177Cu;
    {
        const bool branch_taken_0x2e177c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E177Cu;
        // 0x2e1780: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e177c) {
            ctx->pc = 0x2E1798u;
            goto label_2e1798;
        }
    }
    ctx->pc = 0x2E1784u;
    // 0x2e1784: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1788: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1788u;
    {
        const bool branch_taken_0x2e1788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1788) {
            ctx->pc = 0x2E178Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1788u;
            // 0x2e178c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E179Cu;
            goto label_2e179c;
        }
    }
    ctx->pc = 0x2E1790u;
    // 0x2e1790: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e1790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e1794: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2e1798:
    // 0x2e1798: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e1798u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e179c:
    // 0x2e179c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E179Cu;
    {
        const bool branch_taken_0x2e179c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e179c) {
            ctx->pc = 0x2E17A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E179Cu;
            // 0x2e17a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E17A4u;
            goto label_2e17a4;
        }
    }
    ctx->pc = 0x2E17A4u;
label_2e17a4:
    // 0x2e17a4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e17a4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e17a8: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2e17a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2e17ac: 0x1012  mflo        $v0
    ctx->pc = 0x2e17acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e17b0: 0x1810  mfhi        $v1
    ctx->pc = 0x2e17b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e17b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e17b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e17b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e17bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e17bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e17c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e17c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e17c4: 0xa93018  mult        $a2, $a1, $t1
    ctx->pc = 0x2e17c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e17c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e17c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e17cc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e17ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e17d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E17D0u;
    {
        const bool branch_taken_0x2e17d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17D0u;
        // 0x2e17d4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17d0) {
            ctx->pc = 0x2E17F0u;
            goto label_2e17f0;
        }
    }
    ctx->pc = 0x2E17D8u;
    // 0x2e17d8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e17d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e17dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E17DCu;
    {
        const bool branch_taken_0x2e17dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17DCu;
        // 0x2e17e0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17dc) {
            ctx->pc = 0x2E17F0u;
            goto label_2e17f0;
        }
    }
    ctx->pc = 0x2E17E4u;
    // 0x2e17e4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e17e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e17e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E17E8u;
    {
        const bool branch_taken_0x2e17e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e17e8) {
            ctx->pc = 0x2E17ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E17E8u;
            // 0x2e17ec: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E17F0u;
            goto label_2e17f0;
        }
    }
    ctx->pc = 0x2E17F0u;
label_2e17f0:
    // 0x2e17f0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2e17f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2e17f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e17f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e17f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e17f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e17fc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2E17FCu;
    {
        const bool branch_taken_0x2e17fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17FCu;
        // 0x2e1800: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17fc) {
            ctx->pc = 0x2E19D0u;
            goto label_2e19d0;
        }
    }
    ctx->pc = 0x2E1804u;
label_2e1804:
    // 0x2e1804: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1804u;
    {
        const bool branch_taken_0x2e1804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1804u;
        // 0x2e1808: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1804) {
            ctx->pc = 0x2E1814u;
            goto label_2e1814;
        }
    }
    ctx->pc = 0x2E180Cu;
    // 0x2e180c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2E180Cu;
    {
        const bool branch_taken_0x2e180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E180Cu;
        // 0x2e1810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e180c) {
            ctx->pc = 0x2E19C8u;
            goto label_2e19c8;
        }
    }
    ctx->pc = 0x2E1814u;
label_2e1814:
    // 0x2e1814: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2e1814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e1818: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1818u;
    {
        const bool branch_taken_0x2e1818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1818u;
        // 0x2e181c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1818) {
            ctx->pc = 0x2E1830u;
            goto label_2e1830;
        }
    }
    ctx->pc = 0x2E1820u;
    // 0x2e1820: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x2e1820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e1824: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2e1824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1828: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1828u;
    {
        const bool branch_taken_0x2e1828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1828u;
        // 0x2e182c: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1828) {
            ctx->pc = 0x2E1848u;
            goto label_2e1848;
        }
    }
    ctx->pc = 0x2E1830u;
label_2e1830:
    // 0x2e1830: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2e1830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e1834: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e1838: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e1838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e183c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2e183cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e1840: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2e1840u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2e1844: 0x0  nop
    ctx->pc = 0x2e1844u;
    // NOP
label_2e1848:
    // 0x2e1848: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e1848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e184c: 0xc52006  srlv        $a0, $a1, $a2
    ctx->pc = 0x2e184cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e1850: 0x2442b770  addiu       $v0, $v0, -0x4890
    ctx->pc = 0x2e1850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948720));
    // 0x2e1854: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2e1854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e1858: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e1858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e185c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e185cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1860: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e1860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e1864: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2e1864u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e1868: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1868u;
    {
        const bool branch_taken_0x2e1868 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1868) {
            ctx->pc = 0x2E186Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1868u;
            // 0x2e186c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1890u;
            goto label_2e1890;
        }
    }
    ctx->pc = 0x2E1870u;
    // 0x2e1870: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x2e1870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2e1874: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E1874u;
    {
        const bool branch_taken_0x2e1874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1874u;
        // 0x2e1878: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1874) {
            ctx->pc = 0x2E19C8u;
            goto label_2e19c8;
        }
    }
    ctx->pc = 0x2E187Cu;
    // 0x2e187c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x2e187cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1880: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E1880u;
    {
        const bool branch_taken_0x2e1880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1880u;
        // 0x2e1884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1880) {
            ctx->pc = 0x2E19C8u;
            goto label_2e19c8;
        }
    }
    ctx->pc = 0x2E1888u;
    // 0x2e1888: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2E1888u;
    {
        const bool branch_taken_0x2e1888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1888u;
        // 0x2e188c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1888) {
            ctx->pc = 0x2E19C8u;
            goto label_2e19c8;
        }
    }
    ctx->pc = 0x2E1890u;
label_2e1890:
    // 0x2e1890: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x2e1890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e1894: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x2e1894u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e1898: 0xe81806  srlv        $v1, $t0, $a3
    ctx->pc = 0x2e1898u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e189c: 0xea3806  srlv        $a3, $t2, $a3
    ctx->pc = 0x2e189cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x2e18a0: 0xca1004  sllv        $v0, $t2, $a2
    ctx->pc = 0x2e18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e18a4: 0x445025  or          $t2, $v0, $a0
    ctx->pc = 0x2e18a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e18a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2e18a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2e18ac: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2e18acu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e18b0: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2e18b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e18b4: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x2e18b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2e18b8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2e18b8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2e18bc: 0x30abffff  andi        $t3, $a1, 0xFFFF
    ctx->pc = 0x2e18bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2e18c0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2e18c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2e18c4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E18C4u;
    {
        const bool branch_taken_0x2e18c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e18c4) {
            ctx->pc = 0x2E18C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18C4u;
            // 0x2e18c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E18CCu;
            goto label_2e18cc;
        }
    }
    ctx->pc = 0x2E18CCu;
label_2e18cc:
    // 0x2e18cc: 0x1012  mflo        $v0
    ctx->pc = 0x2e18ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e18d0: 0x1810  mfhi        $v1
    ctx->pc = 0x2e18d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e18d4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e18d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e18d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e18dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e18dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e18e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e18e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e18e4: 0x12b3818  mult        $a3, $t1, $t3
    ctx->pc = 0x2e18e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2e18e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e18e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e18ec: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e18ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e18f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E18F0u;
    {
        const bool branch_taken_0x2e18f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e18f0) {
            ctx->pc = 0x2E18F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18F0u;
            // 0x2e18f4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1924u;
            goto label_2e1924;
        }
    }
    ctx->pc = 0x2E18F8u;
    // 0x2e18f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e18fc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2e18fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e1900: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1900u;
    {
        const bool branch_taken_0x2e1900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1900u;
        // 0x2e1904: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1900) {
            ctx->pc = 0x2E1920u;
            goto label_2e1920;
        }
    }
    ctx->pc = 0x2E1908u;
    // 0x2e1908: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e1908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e190c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E190Cu;
    {
        const bool branch_taken_0x2e190c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e190c) {
            ctx->pc = 0x2E1910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E190Cu;
            // 0x2e1910: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1924u;
            goto label_2e1924;
        }
    }
    ctx->pc = 0x2E1914u;
    // 0x2e1914: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2e1914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2e1918: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e1918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e191c: 0x0  nop
    ctx->pc = 0x2e191cu;
    // NOP
label_2e1920:
    // 0x2e1920: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2e1920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2e1924:
    // 0x2e1924: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1924u;
    {
        const bool branch_taken_0x2e1924 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1924) {
            ctx->pc = 0x2E1928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1924u;
            // 0x2e1928: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E192Cu;
            goto label_2e192c;
        }
    }
    ctx->pc = 0x2E192Cu;
label_2e192c:
    // 0x2e192c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2e192cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e1930: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2e1930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2e1934: 0x1012  mflo        $v0
    ctx->pc = 0x2e1934u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e1938: 0x1810  mfhi        $v1
    ctx->pc = 0x2e1938u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e193c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e193cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1940: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1944: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e1944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e1948: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e1948u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e194c: 0xcb3818  mult        $a3, $a2, $t3
    ctx->pc = 0x2e194cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2e1950: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e1950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e1954: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e1954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e1958: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E1958u;
    {
        const bool branch_taken_0x2e1958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1958u;
        // 0x2e195c: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1958) {
            ctx->pc = 0x2E1988u;
            goto label_2e1988;
        }
    }
    ctx->pc = 0x2E1960u;
    // 0x2e1960: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e1960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e1964: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2e1964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e1968: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1968u;
    {
        const bool branch_taken_0x2e1968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1968u;
        // 0x2e196c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1968) {
            ctx->pc = 0x2E1984u;
            goto label_2e1984;
        }
    }
    ctx->pc = 0x2E1970u;
    // 0x2e1970: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e1970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e1974: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1974u;
    {
        const bool branch_taken_0x2e1974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1974u;
        // 0x2e1978: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1974) {
            ctx->pc = 0x2E1988u;
            goto label_2e1988;
        }
    }
    ctx->pc = 0x2E197Cu;
    // 0x2e197c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e1980: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e1980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2e1984:
    // 0x2e1984: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x2e1984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_2e1988:
    // 0x2e1988: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2e1988u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2e198c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e1990: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e1990u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e1994: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x2e1994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e1998: 0xa80019  multu       $a1, $t0
    ctx->pc = 0x2e1998u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e199c: 0x3010  mfhi        $a2
    ctx->pc = 0x2e199cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2e19a0: 0x2012  mflo        $a0
    ctx->pc = 0x2e19a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2e19a4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e19a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e19a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E19A8u;
    {
        const bool branch_taken_0x2e19a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e19a8) {
            ctx->pc = 0x2E19ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E19A8u;
            // 0x2e19ac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E19C8u;
            goto label_2e19c8;
        }
    }
    ctx->pc = 0x2E19B0u;
    // 0x2e19b0: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E19B0u;
    {
        const bool branch_taken_0x2e19b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E19B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19B0u;
        // 0x2e19b4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19b0) {
            ctx->pc = 0x2E19D0u;
            goto label_2e19d0;
        }
    }
    ctx->pc = 0x2E19B8u;
    // 0x2e19b8: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2e19b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e19bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E19BCu;
    {
        const bool branch_taken_0x2e19bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19BCu;
        // 0x2e19c0: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19bc) {
            ctx->pc = 0x2E19D4u;
            goto label_2e19d4;
        }
    }
    ctx->pc = 0x2E19C4u;
    // 0x2e19c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2e19c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2e19c8:
    // 0x2e19c8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2e19c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19cc: 0x0  nop
    ctx->pc = 0x2e19ccu;
    // NOP
label_2e19d0:
    // 0x2e19d0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2e19d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_2e19d4:
    // 0x2e19d4: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x2e19d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2e19d8: 0x2c03e  dsrl32      $t8, $v0, 0
    ctx->pc = 0x2e19d8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e19dc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e19dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2e19e0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2e19e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2e19e4: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E19E4u;
    {
        const bool branch_taken_0x2e19e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19E4u;
        // 0x2e19e8: 0x3032025  or          $a0, $t8, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19e4) {
            ctx->pc = 0x2E1A34u;
            goto label_2e1a34;
        }
    }
    ctx->pc = 0x2E19ECu;
    // 0x2e19ec: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2e19ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e19f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e19f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e19f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e19f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e19f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e19fc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e1a00: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x2e1a00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x2e1a04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e1a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e1a08: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2e1a08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e1a0c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e1a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e1a10: 0x42023  negu        $a0, $a0
    ctx->pc = 0x2e1a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2e1a14: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x2e1a14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x2e1a18: 0xe183c  dsll32      $v1, $t6, 0
    ctx->pc = 0x2e1a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x2e1a1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e1a1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e1a20: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2e1a20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e1a24: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x2e1a24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x2e1a28: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2e1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e1a2c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e1a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e1a30: 0x1c42025  or          $a0, $t6, $a0
    ctx->pc = 0x2e1a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
label_2e1a34:
    // 0x2e1a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A34u;
        // 0x2e1a38: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1A3Cu;
}
