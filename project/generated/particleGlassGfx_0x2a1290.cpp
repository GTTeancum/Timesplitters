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

// Function: particleGlassGfx
// Address: 0x2a1290 - 0x2a189c
void particleGlassGfx_0x2a1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleGlassGfx_0x2a1290");
#endif

    switch (ctx->pc) {
        case 0x2a13b8u: goto label_2a13b8;
        case 0x2a13ccu: goto label_2a13cc;
        case 0x2a13ecu: goto label_2a13ec;
        case 0x2a13f4u: goto label_2a13f4;
        default: break;
    }

    ctx->pc = 0x2a1290u;

    // 0x2a1290: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2a1290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2a1294: 0x248203a0  addiu       $v0, $a0, 0x3A0
    ctx->pc = 0x2a1294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2a1298: 0xffb70130  sd          $s7, 0x130($sp)
    ctx->pc = 0x2a1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 23));
    // 0x2a129c: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x2a129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x2a12a0: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x2a12a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x2a12a4: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x2a12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x2a12a8: 0xffb50110  sd          $s5, 0x110($sp)
    ctx->pc = 0x2a12a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 21));
    // 0x2a12ac: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x2a12acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x2a12b0: 0xffb300f0  sd          $s3, 0xF0($sp)
    ctx->pc = 0x2a12b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 19));
    // 0x2a12b4: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x2a12b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x2a12b8: 0xffb100d0  sd          $s1, 0xD0($sp)
    ctx->pc = 0x2a12b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 17));
    // 0x2a12bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a12bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a12c0: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2a12c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x2a12c4: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x2a12c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2a12c8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2a12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2a12cc: 0x260403a0  addiu       $a0, $s0, 0x3A0
    ctx->pc = 0x2a12ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    // 0x2a12d0: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2a12d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2a12d4: 0x246503a0  addiu       $a1, $v1, 0x3A0
    ctx->pc = 0x2a12d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x2a12d8: 0x8c6c003c  lw          $t4, 0x3C($v1)
    ctx->pc = 0x2a12d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2a12dc: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2a12dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2a12e0: 0x259703a0  addiu       $s7, $t4, 0x3A0
    ctx->pc = 0x2a12e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 12), 928));
    // 0x2a12e4: 0x8ee21188  lw          $v0, 0x1188($s7)
    ctx->pc = 0x2a12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4488)));
    // 0x2a12e8: 0x18400160  blez        $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x2A12E8u;
    {
        const bool branch_taken_0x2a12e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12E8u;
        // 0x2a12ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12e8) {
            ctx->pc = 0x2A186Cu;
            goto label_2a186c;
        }
    }
    ctx->pc = 0x2A12F0u;
    // 0x2a12f0: 0x260703d8  addiu       $a3, $s0, 0x3D8
    ctx->pc = 0x2a12f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 984));
    // 0x2a12f4: 0x246803d8  addiu       $t0, $v1, 0x3D8
    ctx->pc = 0x2a12f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 984));
    // 0x2a12f8: 0x258b03ac  addiu       $t3, $t4, 0x3AC
    ctx->pc = 0x2a12f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 940));
    // 0x2a12fc: 0x260203a4  addiu       $v0, $s0, 0x3A4
    ctx->pc = 0x2a12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 932));
    // 0x2a1300: 0xafa7008c  sw          $a3, 0x8C($sp)
    ctx->pc = 0x2a1300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
    // 0x2a1304: 0x260403a8  addiu       $a0, $s0, 0x3A8
    ctx->pc = 0x2a1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 936));
    // 0x2a1308: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2a1308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2a130c: 0x260503b0  addiu       $a1, $s0, 0x3B0
    ctx->pc = 0x2a130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x2a1310: 0xafab0048  sw          $t3, 0x48($sp)
    ctx->pc = 0x2a1310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 11));
    // 0x2a1314: 0x260703b4  addiu       $a3, $s0, 0x3B4
    ctx->pc = 0x2a1314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 948));
    // 0x2a1318: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2a1318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2a131c: 0x260803b8  addiu       $t0, $s0, 0x3B8
    ctx->pc = 0x2a131cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 952));
    // 0x2a1320: 0x260b03c0  addiu       $t3, $s0, 0x3C0
    ctx->pc = 0x2a1320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x2a1324: 0x260203c4  addiu       $v0, $s0, 0x3C4
    ctx->pc = 0x2a1324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
    // 0x2a1328: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x2a1328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x2a132c: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x2a132cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x2a1330: 0x260403c8  addiu       $a0, $s0, 0x3C8
    ctx->pc = 0x2a1330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 968));
    // 0x2a1334: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x2a1334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
    // 0x2a1338: 0x260503d0  addiu       $a1, $s0, 0x3D0
    ctx->pc = 0x2a1338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x2a133c: 0xafa8005c  sw          $t0, 0x5C($sp)
    ctx->pc = 0x2a133cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 8));
    // 0x2a1340: 0x246703a4  addiu       $a3, $v1, 0x3A4
    ctx->pc = 0x2a1340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 932));
    // 0x2a1344: 0xafab0064  sw          $t3, 0x64($sp)
    ctx->pc = 0x2a1344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 11));
    // 0x2a1348: 0x246803a8  addiu       $t0, $v1, 0x3A8
    ctx->pc = 0x2a1348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 936));
    // 0x2a134c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2a134cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2a1350: 0x246b03b0  addiu       $t3, $v1, 0x3B0
    ctx->pc = 0x2a1350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
    // 0x2a1354: 0x246203b4  addiu       $v0, $v1, 0x3B4
    ctx->pc = 0x2a1354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 948));
    // 0x2a1358: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x2a1358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x2a135c: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x2a135cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x2a1360: 0x246403b8  addiu       $a0, $v1, 0x3B8
    ctx->pc = 0x2a1360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 952));
    // 0x2a1364: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x2a1364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x2a1368: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x2a1368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x2a136c: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x2a136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x2a1370: 0x246703c4  addiu       $a3, $v1, 0x3C4
    ctx->pc = 0x2a1370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 964));
    // 0x2a1374: 0xafab0050  sw          $t3, 0x50($sp)
    ctx->pc = 0x2a1374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 11));
    // 0x2a1378: 0x246803c8  addiu       $t0, $v1, 0x3C8
    ctx->pc = 0x2a1378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 968));
    // 0x2a137c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2a137cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2a1380: 0x246b03d0  addiu       $t3, $v1, 0x3D0
    ctx->pc = 0x2a1380u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    // 0x2a1384: 0x258203a4  addiu       $v0, $t4, 0x3A4
    ctx->pc = 0x2a1384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 932));
    // 0x2a1388: 0x261003d4  addiu       $s0, $s0, 0x3D4
    ctx->pc = 0x2a1388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 980));
    // 0x2a138c: 0x246303d4  addiu       $v1, $v1, 0x3D4
    ctx->pc = 0x2a138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 980));
    // 0x2a1390: 0x258c03a8  addiu       $t4, $t4, 0x3A8
    ctx->pc = 0x2a1390u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 936));
    // 0x2a1394: 0xafb00084  sw          $s0, 0x84($sp)
    ctx->pc = 0x2a1394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 16));
    // 0x2a1398: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2a1398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2a139c: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x2a139cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x2a13a0: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x2a13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x2a13a4: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x2a13a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x2a13a8: 0xafab0080  sw          $t3, 0x80($sp)
    ctx->pc = 0x2a13a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 11));
    // 0x2a13ac: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x2a13acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x2a13b0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2a13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2a13b4: 0xafac0044  sw          $t4, 0x44($sp)
    ctx->pc = 0x2a13b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 12));
label_2a13b8:
    // 0x2a13b8: 0x9c980  sll         $t9, $t1, 6
    ctx->pc = 0x2a13b8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x2a13bc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2a13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a13c0: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x2a13c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
    // 0x2a13c4: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2A13C4u;
    SET_GPR_U32(ctx, 31, 0x2A13CCu);
    ctx->pc = 0x2A13C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13C4u;
    // 0x2a13c8: 0x7fb900b0  sq          $t9, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2A13C4u, 0x2A13CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13CCu;
label_2a13cc:
    // 0x2a13cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a13d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a13d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13d4: 0x7bb900b0  lq          $t9, 0xB0($sp)
    ctx->pc = 0x2a13d4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a13d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a13d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13dc: 0x793021  addu        $a2, $v1, $t9
    ctx->pc = 0x2a13dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2a13e0: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2a13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a13e4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2A13E4u;
    SET_GPR_U32(ctx, 31, 0x2A13ECu);
    ctx->pc = 0x2A13E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13E4u;
    // 0x2a13e8: 0x8c6506e4  lw          $a1, 0x6E4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2A13E4u, 0x2A13ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13ECu;
label_2a13ec:
    // 0x2a13ec: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2A13ECu;
    SET_GPR_U32(ctx, 31, 0x2A13F4u);
    ctx->pc = 0x2A13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13ECu;
    // 0x2a13f0: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2A13ECu, 0x2A13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13F4u;
label_2a13f4:
    // 0x2a13f4: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a13f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a13f8: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x2a13f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a13fc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a13fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1400: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a1400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a1404: 0xa0680003  sb          $t0, 0x3($v1)
    ctx->pc = 0x2a1404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a1408: 0x24a496e0  addiu       $a0, $a1, -0x6920
    ctx->pc = 0x2a1408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940384));
    // 0x2a140c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2a140cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1410: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a1410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1414: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2a1414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a1418: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2a1418u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x2a141c: 0x7ba900a0  lq          $t1, 0xA0($sp)
    ctx->pc = 0x2a141cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a1420: 0x24e696f0  addiu       $a2, $a3, -0x6910
    ctx->pc = 0x2a1420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940400));
    // 0x2a1424: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2a1424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a1428: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2a1428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2a142c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a142cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2a1430: 0x29270002  slti        $a3, $t1, 0x2
    ctx->pc = 0x2a1430u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1434: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x2a1434u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2a1438: 0xa0680003  sb          $t0, 0x3($v1)
    ctx->pc = 0x2a1438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a143c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2a143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a1440: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2a1440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a1444: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2a1444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2a1448: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2a1448u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a144c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a144cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2a1450: 0xa0680003  sb          $t0, 0x3($v1)
    ctx->pc = 0x2a1450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a1454: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2a1454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a1458: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2a1458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2a145c: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x2a145cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a1460: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x2a1460u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2a1464: 0xaf8893a0  sw          $t0, -0x6C60($gp)
    ctx->pc = 0x2a1464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 8));
    // 0x2a1468: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A1468u;
    {
        const bool branch_taken_0x2a1468 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1468u;
        // 0x2a146c: 0x7bb900b0  lq          $t9, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1468) {
            ctx->pc = 0x2A14B8u;
            goto label_2a14b8;
        }
    }
    ctx->pc = 0x2A1470u;
    // 0x2a1470: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x2a1470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a1474: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a1474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1478: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2a1478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a147c: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x2a147cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2a1480: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2a1480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a1484: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x2a1484u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a1488: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2a1488u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2a148c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2a148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a1490: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2a1490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a1494: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a1494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a1498: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a1498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a149c: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2a149cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a14a0: 0xa10c0003  sb          $t4, 0x3($t0)
    ctx->pc = 0x2a14a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x2a14a4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2a14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a14a8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2a14a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a14ac: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2a14acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2a14b0: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x2a14b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a14b4: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a14b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_2a14b8:
    // 0x2a14b8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2a14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a14bc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2a14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a14c0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2a14c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2a14c4: 0x34078004  ori         $a3, $zero, 0x8004
    ctx->pc = 0x2a14c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x2a14c8: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x2a14c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a14cc: 0x24830520  addiu       $v1, $a0, 0x520
    ctx->pc = 0x2a14ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1312));
    // 0x2a14d0: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x2a14d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x2a14d4: 0x3c05302e  lui         $a1, 0x302E
    ctx->pc = 0x2a14d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12334 << 16));
    // 0x2a14d8: 0x8ee2118c  lw          $v0, 0x118C($s7)
    ctx->pc = 0x2a14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
    // 0x2a14dc: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2a14dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2a14e0: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x2a14e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a14e4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x2a14e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x2a14e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a14ec: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x2a14ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x2a14f0: 0xacde0004  sw          $fp, 0x4($a2)
    ctx->pc = 0x2a14f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 30));
    // 0x2a14f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a14f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a14fc: 0x250a0538  addiu       $t2, $t0, 0x538
    ctx->pc = 0x2a14fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1336));
    // 0x2a1500: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x2a1500u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a1504: 0x3c086804  lui         $t0, 0x6804
    ctx->pc = 0x2a1504u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26628 << 16));
    // 0x2a1508: 0x8fac0030  lw          $t4, 0x30($sp)
    ctx->pc = 0x2a1508u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a150c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1510: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a1510u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2a1514: 0x1791021  addu        $v0, $t3, $t9
    ctx->pc = 0x2a1514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
    // 0x2a1518: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a1518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a151c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a151cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1520: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2a1520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a1524: 0x1995821  addu        $t3, $t4, $t9
    ctx->pc = 0x2a1524u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
    // 0x2a1528: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2a1528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2a152c: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x2a152cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x2a1530: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x2a1530u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x2a1534: 0x592021  addu        $a0, $v0, $t9
    ctx->pc = 0x2a1534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2a1538: 0x8fa70054  lw          $a3, 0x54($sp)
    ctx->pc = 0x2a1538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2a153c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a153cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1540: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2a1540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2a1544: 0x796021  addu        $t4, $v1, $t9
    ctx->pc = 0x2a1544u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2a1548: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x2a1548u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x2a154c: 0xf96821  addu        $t5, $a3, $t9
    ctx->pc = 0x2a154cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x2a1550: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x2a1550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2a1554: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1554u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1558: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2a1558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2a155c: 0x24070412  addiu       $a3, $zero, 0x412
    ctx->pc = 0x2a155cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x2a1560: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x2a1560u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x2a1564: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x2a1564u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2a1568: 0x797821  addu        $t7, $v1, $t9
    ctx->pc = 0x2a1568u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2a156c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a156cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1570: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2a1570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2a1574: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x2a1574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2a1578: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2a1578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2a157c: 0xb98821  addu        $s1, $a1, $t9
    ctx->pc = 0x2a157cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2a1580: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2a1580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a1584: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x2a1584u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x2a1588: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2a1588u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a158c: 0x599021  addu        $s2, $v0, $t9
    ctx->pc = 0x2a158cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2a1590: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2a1590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2a1594: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1594u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1598: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x2a1598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2a159c: 0x8ee2118c  lw          $v0, 0x118C($s7)
    ctx->pc = 0x2a159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
    // 0x2a15a0: 0xb93821  addu        $a3, $a1, $t9
    ctx->pc = 0x2a15a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2a15a4: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a15a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2a15a8: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x2a15a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2a15ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a15acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a15b0: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x2a15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2a15b4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a15b8: 0xb98021  addu        $s0, $a1, $t9
    ctx->pc = 0x2a15b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2a15bc: 0x799821  addu        $s3, $v1, $t9
    ctx->pc = 0x2a15bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2a15c0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2a15c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a15c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a15c8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2a15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2a15cc: 0xb95021  addu        $t2, $a1, $t9
    ctx->pc = 0x2a15ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2a15d0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2a15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a15d4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2a15d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2a15d8: 0x59a021  addu        $s4, $v0, $t9
    ctx->pc = 0x2a15d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2a15dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a15e0: 0xb9a821  addu        $s5, $a1, $t9
    ctx->pc = 0x2a15e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2a15e4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a15e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2a15e8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2a15e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a15ec: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a15ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a15f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2a15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a15f4: 0x59b021  addu        $s6, $v0, $t9
    ctx->pc = 0x2a15f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2a15f8: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x2a15f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2a15fc: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2a15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2a1600: 0x79c021  addu        $t8, $v1, $t9
    ctx->pc = 0x2a1600u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2a1604: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a1604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1608: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1608u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a160c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1610: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2a1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1614: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x2a1614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2a1618: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2a1618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a161c: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x2a161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2a1620: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2a1620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2a1624: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2a1624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2a1628: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a162c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2a162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a1630: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2a1630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1634: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x2a1634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2a1638: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x2a1638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2a163c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2a163cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2a1640: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2a1640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2a1644: 0xb95821  addu        $t3, $a1, $t9
    ctx->pc = 0x2a1644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2a1648: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a1648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a164c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2a164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2a1650: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1650u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1654: 0x24460568  addiu       $a2, $v0, 0x568
    ctx->pc = 0x2a1654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1384));
    // 0x2a1658: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2a1658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a165c: 0xb9c821  addu        $t9, $a1, $t9
    ctx->pc = 0x2a165cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2a1660: 0xafb90024  sw          $t9, 0x24($sp)
    ctx->pc = 0x2a1660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 25));
    // 0x2a1664: 0x3c056e04  lui         $a1, 0x6E04
    ctx->pc = 0x2a1664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28164 << 16));
    // 0x2a1668: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2a1668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2a166c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1670: 0x92100  sll         $a0, $t1, 4
    ctx->pc = 0x2a1670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2a1674: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a1674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1678: 0x2e41821  addu        $v1, $s7, $a0
    ctx->pc = 0x2a1678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2a167c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2a167cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2a1680: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1680u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a1684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a1688: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a1688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a168c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2a168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2a1690: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a1690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a1694: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2a1694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2a1698: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a169c: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x2a169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16a0: 0x646021  addu        $t4, $v1, $a0
    ctx->pc = 0x2a16a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a16a4: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a16a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a16a8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2a16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a16ac: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a16acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a16b0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2a16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2a16b4: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2a16b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16b8: 0x24630550  addiu       $v1, $v1, 0x550
    ctx->pc = 0x2a16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1360));
    // 0x2a16bc: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a16bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a16c0: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a16c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a16c4: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x2a16c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16c8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a16c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a16cc: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a16ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a16d0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x2a16d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16d4: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a16d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a16d8: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a16d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a16dc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2a16dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16e0: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a16e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a16e4: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a16e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a16e8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2a16e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a16ec: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a16ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a16f0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2a16f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a16f4: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a16f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a16f8: 0x8ee2118c  lw          $v0, 0x118C($s7)
    ctx->pc = 0x2a16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
    // 0x2a16fc: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x2a16fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1700: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1700u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1704: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a1708: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a1708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a170c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1710: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1714: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a1714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1718: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1718u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a171c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2a171cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2a1720: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2a1720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1724: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a1724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1728: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1728u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a172c: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2a172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1730: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a1730u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2a1734: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1734u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1738: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a1738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a173c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a173cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1740: 0x8ee2118c  lw          $v0, 0x118C($s7)
    ctx->pc = 0x2a1740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
    // 0x2a1744: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2a1744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a174c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1750: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a1750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a1754: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1754u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1758: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a1758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a175c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2a175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1760: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a1760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a1764: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a1764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1768: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1768u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a176c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2a176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1770: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a1770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1774: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1774u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1778: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x2a1778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a177c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a177cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1780: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1780u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1784: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2a1784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1788: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a1788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a178c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a178cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a1790: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1790u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a1794: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x2a1794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a1798: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2a1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a179c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a179cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a17a0: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a17a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a17a4: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x2a17a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17a8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2a17a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a17ac: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a17acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a17b0: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a17b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a17b4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2a17b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a17b8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a17b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a17bc: 0x8fab001c  lw          $t3, 0x1C($sp)
    ctx->pc = 0x2a17bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2a17c0: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a17c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a17c4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2a17c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a17c8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a17c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a17cc: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a17ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a17d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a17d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a17d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a17d8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a17d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a17dc: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a17dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a17e0: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2a17e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2a17e4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a17e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a17e8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2a17e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2a17ec: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a17ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a17f0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2a17f4: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a17f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a17f8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2a17f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a17fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a1800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1804: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a1804u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a1808: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1808u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a180c: 0x8fa8002c  lw          $t0, 0x2C($sp)
    ctx->pc = 0x2a180cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2a1810: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a1810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a1814: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a1814u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a1818: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2a1818u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2a181c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x2a181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2a1820: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x2a1820u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a1824: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a1824u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a1828: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a1828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a182c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2a182cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2a1830: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x2a1830u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2a1834: 0x24840460  addiu       $a0, $a0, 0x460
    ctx->pc = 0x2a1834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    // 0x2a1838: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x2a1838u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2a183c: 0x8ee2118c  lw          $v0, 0x118C($s7)
    ctx->pc = 0x2a183cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
    // 0x2a1840: 0xa16c0003  sb          $t4, 0x3($t3)
    ctx->pc = 0x2a1840u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x2a1844: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a1844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1848: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a1848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a184c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a1850: 0x8ee41188  lw          $a0, 0x1188($s7)
    ctx->pc = 0x2a1850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4488)));
    // 0x2a1854: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x2a1854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a1858: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2a1858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2a185c: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x2a185cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a1860: 0x124202a  slt         $a0, $t1, $a0
    ctx->pc = 0x2a1860u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1864: 0x1480fed4  bnez        $a0, . + 4 + (-0x12C << 2)
    ctx->pc = 0x2A1864u;
    {
        const bool branch_taken_0x2a1864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1864u;
        // 0x2a1868: 0xaf8593a0  sw          $a1, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1864) {
            ctx->pc = 0x2A13B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a13b8;
        }
    }
    ctx->pc = 0x2A186Cu;
label_2a186c:
    // 0x2a186c: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x2a186cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a1870: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x2a1870u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a1874: 0xdfb70130  ld          $s7, 0x130($sp)
    ctx->pc = 0x2a1874u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a1878: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x2a1878u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a187c: 0xdfb50110  ld          $s5, 0x110($sp)
    ctx->pc = 0x2a187cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a1880: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x2a1880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a1884: 0xdfb300f0  ld          $s3, 0xF0($sp)
    ctx->pc = 0x2a1884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a1888: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2a1888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a188c: 0xdfb100d0  ld          $s1, 0xD0($sp)
    ctx->pc = 0x2a188cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a1890: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2a1890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a1894: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1894u;
        // 0x2a1898: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A189Cu;
}
