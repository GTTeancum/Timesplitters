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

// Function: gunChrFire
// Address: 0x28f2d0 - 0x29000c
void gunChrFire_0x28f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunChrFire_0x28f2d0");
#endif

    switch (ctx->pc) {
        case 0x28f324u: goto label_28f324;
        case 0x28f4d0u: goto label_28f4d0;
        case 0x28f514u: goto label_28f514;
        case 0x28f530u: goto label_28f530;
        case 0x28f688u: goto label_28f688;
        case 0x28f6b0u: goto label_28f6b0;
        case 0x28f7c4u: goto label_28f7c4;
        case 0x28f7e8u: goto label_28f7e8;
        case 0x28f83cu: goto label_28f83c;
        case 0x28f860u: goto label_28f860;
        case 0x28f868u: goto label_28f868;
        case 0x28f878u: goto label_28f878;
        case 0x28f880u: goto label_28f880;
        case 0x28f8acu: goto label_28f8ac;
        case 0x28f900u: goto label_28f900;
        case 0x28f954u: goto label_28f954;
        case 0x28f9c8u: goto label_28f9c8;
        case 0x28f9d8u: goto label_28f9d8;
        case 0x28fa08u: goto label_28fa08;
        case 0x28fa80u: goto label_28fa80;
        case 0x28fa98u: goto label_28fa98;
        case 0x28faacu: goto label_28faac;
        case 0x28fabcu: goto label_28fabc;
        case 0x28fb04u: goto label_28fb04;
        case 0x28fb70u: goto label_28fb70;
        case 0x28fb94u: goto label_28fb94;
        case 0x28fb9cu: goto label_28fb9c;
        case 0x28fbacu: goto label_28fbac;
        case 0x28fbb4u: goto label_28fbb4;
        case 0x28fc24u: goto label_28fc24;
        case 0x28fc48u: goto label_28fc48;
        case 0x28fc50u: goto label_28fc50;
        case 0x28fc60u: goto label_28fc60;
        case 0x28fc68u: goto label_28fc68;
        case 0x28fcd0u: goto label_28fcd0;
        case 0x28fce0u: goto label_28fce0;
        case 0x28fcf4u: goto label_28fcf4;
        case 0x28fd08u: goto label_28fd08;
        case 0x28fd3cu: goto label_28fd3c;
        case 0x28fd50u: goto label_28fd50;
        case 0x28fe18u: goto label_28fe18;
        case 0x28fe20u: goto label_28fe20;
        case 0x28fe78u: goto label_28fe78;
        case 0x28ff24u: goto label_28ff24;
        case 0x28ffa4u: goto label_28ffa4;
        case 0x28ffd4u: goto label_28ffd4;
        default: break;
    }

    ctx->pc = 0x28f2d0u;

    // 0x28f2d0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x28f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x28f2d4: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x28f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x28f2d8: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x28f2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x28f2dc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28f2dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2e0: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x28f2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x28f2e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28f2e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2e8: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x28f2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x28f2ec: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x28f2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28f2f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28f2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2f4: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x28f2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x28f2f8: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x28f2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x28f2fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f300: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x28f300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x28f304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f308: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x28f308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x28f30c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x28f30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28f310: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x28f310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x28f314: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x28f314u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x28f318: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x28f318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x28f31c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x28F31Cu;
    SET_GPR_U32(ctx, 31, 0x28F324u);
    ctx->pc = 0x28F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F31Cu;
    // 0x28f320: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x28F31Cu, 0x28F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F324u;
label_28f324:
    // 0x28f324: 0x8e930160  lw          $s3, 0x160($s4)
    ctx->pc = 0x28f324u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
    // 0x28f328: 0xaf80b278  sw          $zero, -0x4D88($gp)
    ctx->pc = 0x28f328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947448), GPR_U32(ctx, 0));
    // 0x28f32c: 0x8e660ae4  lw          $a2, 0xAE4($s3)
    ctx->pc = 0x28f32cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2788)));
    // 0x28f330: 0x10c00328  beqz        $a2, . + 4 + (0x328 << 2)
    ctx->pc = 0x28F330u;
    {
        const bool branch_taken_0x28f330 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F330u;
        // 0x28f334: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f330) {
            ctx->pc = 0x28FFD4u;
            goto label_28ffd4;
        }
    }
    ctx->pc = 0x28F338u;
    // 0x28f338: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x28f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x28f33c: 0x10400325  beqz        $v0, . + 4 + (0x325 << 2)
    ctx->pc = 0x28F33Cu;
    {
        const bool branch_taken_0x28f33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F33Cu;
        // 0x28f340: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f33c) {
            ctx->pc = 0x28FFD4u;
            goto label_28ffd4;
        }
    }
    ctx->pc = 0x28F344u;
    // 0x28f344: 0x18400323  blez        $v0, . + 4 + (0x323 << 2)
    ctx->pc = 0x28F344u;
    {
        const bool branch_taken_0x28f344 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F344u;
        // 0x28f348: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f344) {
            ctx->pc = 0x28FFD4u;
            goto label_28ffd4;
        }
    }
    ctx->pc = 0x28F34Cu;
    // 0x28f34c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x28f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x28f350: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28F350u;
    {
        const bool branch_taken_0x28f350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F350u;
        // 0x28f354: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f350) {
            ctx->pc = 0x28F384u;
            goto label_28f384;
        }
    }
    ctx->pc = 0x28F358u;
    // 0x28f358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F358u;
    {
        const bool branch_taken_0x28f358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F358u;
        // 0x28f35c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f358) {
            ctx->pc = 0x28F370u;
            goto label_28f370;
        }
    }
    ctx->pc = 0x28F360u;
    // 0x28f360: 0x506200dc  beql        $v1, $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x28F360u;
    {
        const bool branch_taken_0x28f360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f360) {
            ctx->pc = 0x28F364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F360u;
            // 0x28f364: 0xc4c101fc  lwc1        $f1, 0x1FC($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F6D4u;
            goto label_28f6d4;
        }
    }
    ctx->pc = 0x28F368u;
    // 0x28f368: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x28F368u;
    {
        const bool branch_taken_0x28f368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F368u;
        // 0x28f36c: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f368) {
            ctx->pc = 0x28F728u;
            goto label_28f728;
        }
    }
    ctx->pc = 0x28F370u;
label_28f370:
    // 0x28f370: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x28f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28f374: 0x506200e3  beql        $v1, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x28F374u;
    {
        const bool branch_taken_0x28f374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f374) {
            ctx->pc = 0x28F378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F374u;
            // 0x28f378: 0xc4c10030  lwc1        $f1, 0x30($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F704u;
            goto label_28f704;
        }
    }
    ctx->pc = 0x28F37Cu;
    // 0x28f37c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x28F37Cu;
    {
        const bool branch_taken_0x28f37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F37Cu;
        // 0x28f380: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f37c) {
            ctx->pc = 0x28F728u;
            goto label_28f728;
        }
    }
    ctx->pc = 0x28F384u;
label_28f384:
    // 0x28f384: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x28f384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x28f388: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x28f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x28f38c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f390: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x28f390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28f394: 0x54600084  bnel        $v1, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x28F394u;
    {
        const bool branch_taken_0x28f394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f394) {
            ctx->pc = 0x28F398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F394u;
            // 0x28f398: 0xc4c00030  lwc1        $f0, 0x30($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F5A8u;
            goto label_28f5a8;
        }
    }
    ctx->pc = 0x28F39Cu;
    // 0x28f39c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x28f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x28f3a0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x28f3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x28f3a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F3A4u;
    {
        const bool branch_taken_0x28f3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3A4u;
        // 0x28f3a8: 0xc4c00030  lwc1        $f0, 0x30($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3a4) {
            ctx->pc = 0x28F3BCu;
            goto label_28f3bc;
        }
    }
    ctx->pc = 0x28F3ACu;
    // 0x28f3ac: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x28f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x28f3b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28f3b4: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x28F3B4u;
    {
        const bool branch_taken_0x28f3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f3b4) {
            ctx->pc = 0x28F5A8u;
            goto label_28f5a8;
        }
    }
    ctx->pc = 0x28F3BCu;
label_28f3bc:
    // 0x28f3bc: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x28f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28f3c0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28f3c4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x28f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x28f3c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28f3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28f3cc: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x28f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x28f3d0: 0xc7818ae8  lwc1        $f1, -0x7518($gp)
    ctx->pc = 0x28f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f3d4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x28f3d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28f3d8: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x28f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f3dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x28f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28f3e0: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x28f3e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28f3e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28f3e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28f3e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f3ec: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x28f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x28f3f0: 0x245200bc  addiu       $s2, $v0, 0xBC
    ctx->pc = 0x28f3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x28f3f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28f3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28f3f8: 0x90900a  movz        $s2, $a0, $s0
    ctx->pc = 0x28f3f8u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x28f3fc: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x28f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f400: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28f400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28f404: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F404u;
    {
        const bool branch_taken_0x28f404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x28F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F404u;
        // 0x28f408: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f404) {
            ctx->pc = 0x28F41Cu;
            goto label_28f41c;
        }
    }
    ctx->pc = 0x28F40Cu;
    // 0x28f40c: 0x38630009  xori        $v1, $v1, 0x9
    ctx->pc = 0x28f40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
    // 0x28f410: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x28f410u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f414: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28f414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f418: 0x43b00a  movz        $s6, $v0, $v1
    ctx->pc = 0x28f418u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
label_28f41c:
    // 0x28f41c: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x28f41cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x28f420: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x28f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28f424: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58
    ctx->pc = 0x28f424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x28f428: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x28f428u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x28f42c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F42Cu;
    {
        const bool branch_taken_0x28f42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28f42c) {
            ctx->pc = 0x28F430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F42Cu;
            // 0x28f430: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F43Cu;
            goto label_28f43c;
        }
    }
    ctx->pc = 0x28F434u;
    // 0x28f434: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x28F434u;
    {
        const bool branch_taken_0x28f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F434u;
        // 0x28f438: 0xaea00044  sw          $zero, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f434) {
            ctx->pc = 0x28FFD4u;
            goto label_28ffd4;
        }
    }
    ctx->pc = 0x28F43Cu;
label_28f43c:
    // 0x28f43c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f440: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28f444: 0x90440031  lbu         $a0, 0x31($v0)
    ctx->pc = 0x28f444u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 49)));
    // 0x28f448: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F448u;
    {
        const bool branch_taken_0x28f448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F448u;
        // 0x28f44c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f448) {
            ctx->pc = 0x28F490u;
            goto label_28f490;
        }
    }
    ctx->pc = 0x28F450u;
    // 0x28f450: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F450u;
    {
        const bool branch_taken_0x28f450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f450) {
            ctx->pc = 0x28F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F450u;
            // 0x28f454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F468u;
            goto label_28f468;
        }
    }
    ctx->pc = 0x28F458u;
    // 0x28f458: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28F458u;
    {
        const bool branch_taken_0x28f458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f458) {
            ctx->pc = 0x28F480u;
            goto label_28f480;
        }
    }
    ctx->pc = 0x28F460u;
    // 0x28f460: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28F460u;
    {
        const bool branch_taken_0x28f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f460) {
            ctx->pc = 0x28F4BCu;
            goto label_28f4bc;
        }
    }
    ctx->pc = 0x28F468u;
label_28f468:
    // 0x28f468: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28F468u;
    {
        const bool branch_taken_0x28f468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F468u;
        // 0x28f46c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f468) {
            ctx->pc = 0x28F4A0u;
            goto label_28f4a0;
        }
    }
    ctx->pc = 0x28F470u;
    // 0x28f470: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28F470u;
    {
        const bool branch_taken_0x28f470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f470) {
            ctx->pc = 0x28F4ACu;
            goto label_28f4ac;
        }
    }
    ctx->pc = 0x28F478u;
    // 0x28f478: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28F478u;
    {
        const bool branch_taken_0x28f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f478) {
            ctx->pc = 0x28F4BCu;
            goto label_28f4bc;
        }
    }
    ctx->pc = 0x28F480u;
label_28f480:
    // 0x28f480: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x28f480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x28f484: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28f484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28f488: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28F488u;
    {
        const bool branch_taken_0x28f488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F488u;
        // 0x28f48c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f488) {
            ctx->pc = 0x28F4C8u;
            goto label_28f4c8;
        }
    }
    ctx->pc = 0x28F490u;
label_28f490:
    // 0x28f490: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x28f490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x28f494: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28f494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28f498: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28F498u;
    {
        const bool branch_taken_0x28f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F498u;
        // 0x28f49c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f498) {
            ctx->pc = 0x28F4C8u;
            goto label_28f4c8;
        }
    }
    ctx->pc = 0x28F4A0u;
label_28f4a0:
    // 0x28f4a0: 0xc7948aec  lwc1        $f20, -0x7514($gp)
    ctx->pc = 0x28f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28f4a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28F4A4u;
    {
        const bool branch_taken_0x28f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4A4u;
        // 0x28f4a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4a4) {
            ctx->pc = 0x28F4C8u;
            goto label_28f4c8;
        }
    }
    ctx->pc = 0x28F4ACu;
label_28f4ac:
    // 0x28f4ac: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x28f4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x28f4b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28f4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28f4b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28F4B4u;
    {
        const bool branch_taken_0x28f4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4B4u;
        // 0x28f4b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4b4) {
            ctx->pc = 0x28F4C8u;
            goto label_28f4c8;
        }
    }
    ctx->pc = 0x28F4BCu;
label_28f4bc:
    // 0x28f4bc: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x28f4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x28f4c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28f4c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28f4c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28f4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f4c8:
    // 0x28f4c8: 0x12c00017  beqz        $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x28F4C8u;
    {
        const bool branch_taken_0x28f4c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4C8u;
        // 0x28f4cc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4c8) {
            ctx->pc = 0x28F528u;
            goto label_28f528;
        }
    }
    ctx->pc = 0x28F4D0u;
label_28f4d0:
    // 0x28f4d0: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x28f4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f4d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28f4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f4d8: 0xc6610b14  lwc1        $f1, 0xB14($s3)
    ctx->pc = 0x28f4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f4dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28f4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f4e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28f4e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28f4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28f4e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x28f4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x28f4ec: 0x8e640ae4  lw          $a0, 0xAE4($s3)
    ctx->pc = 0x28f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2788)));
    // 0x28f4f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28f4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f4f4: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x28f4f4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x28f4f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28f4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f4fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28f4fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f500: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28f500u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f504: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28f504u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f508: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28f508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28f50c: 0xc09c666  jal         func_271998
    ctx->pc = 0x28F50Cu;
    SET_GPR_U32(ctx, 31, 0x28F514u);
    ctx->pc = 0x28F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F50Cu;
    // 0x28f510: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x28F50Cu, 0x28F514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F514u;
label_28f514:
    // 0x28f514: 0x8f82b27c  lw          $v0, -0x4D84($gp)
    ctx->pc = 0x28f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947452)));
    // 0x28f518: 0x216182a  slt         $v1, $s0, $s6
    ctx->pc = 0x28f518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x28f51c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28f520: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28F520u;
    {
        const bool branch_taken_0x28f520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F520u;
        // 0x28f524: 0xaf82b27c  sw          $v0, -0x4D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f520) {
            ctx->pc = 0x28F4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f4d0;
        }
    }
    ctx->pc = 0x28F528u;
label_28f528:
    // 0x28f528: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28F528u;
    SET_GPR_U32(ctx, 31, 0x28F530u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28F528u, 0x28F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F530u;
label_28f530:
    // 0x28f530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f534: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x28f534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x28f538: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f53c: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x28f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x28f540: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x28f540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x28f544: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f548: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x28f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f54c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f550: 0x0  nop
    ctx->pc = 0x28f550u;
    // NOP
    // 0x28f554: 0x0  nop
    ctx->pc = 0x28f554u;
    // NOP
    // 0x28f558: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28f558u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x28f55c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F55Cu;
    {
        const bool branch_taken_0x28f55c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F55Cu;
        // 0x28f560: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f55c) {
            ctx->pc = 0x28F570u;
            goto label_28f570;
        }
    }
    ctx->pc = 0x28F564u;
    // 0x28f564: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f564u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f568: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F568u;
    {
        const bool branch_taken_0x28f568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F568u;
        // 0x28f56c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f568) {
            ctx->pc = 0x28F588u;
            goto label_28f588;
        }
    }
    ctx->pc = 0x28F570u;
label_28f570:
    // 0x28f570: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x28f570u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x28f574: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28f574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f578: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28f578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28f57c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28f57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f580: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f584: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28f584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28f588:
    // 0x28f588: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28f588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28f58c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f590: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28f590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f594: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28f594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28f598: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28f59c: 0xe6a10044  swc1        $f1, 0x44($s5)
    ctx->pc = 0x28f59cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x28f5a0: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x28F5A0u;
    {
        const bool branch_taken_0x28f5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5A0u;
        // 0x28f5a4: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5a0) {
            ctx->pc = 0x28FFD8u;
            goto label_28ffd8;
        }
    }
    ctx->pc = 0x28F5A8u;
label_28f5a8:
    // 0x28f5a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x28f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28f5ac: 0xc6810030  lwc1        $f1, 0x30($s4)
    ctx->pc = 0x28f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f5b0: 0xc6830038  lwc1        $f3, 0x38($s4)
    ctx->pc = 0x28f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f5b4: 0xc4c20038  lwc1        $f2, 0x38($a2)
    ctx->pc = 0x28f5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f5b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28f5b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f5bc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x28f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28f5c0: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x28f5c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x28f5c4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28f5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28f5c8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28f5c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28f5cc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28F5CCu;
    {
        const bool branch_taken_0x28f5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5CCu;
        // 0x28f5d0: 0x460008c0  add.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5cc) {
            ctx->pc = 0x28F5FCu;
            goto label_28f5fc;
        }
    }
    ctx->pc = 0x28F5D4u;
    // 0x28f5d4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x28f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28f5d8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F5D8u;
    {
        const bool branch_taken_0x28f5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5D8u;
        // 0x28f5dc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5d8) {
            ctx->pc = 0x28F5FCu;
            goto label_28f5fc;
        }
    }
    ctx->pc = 0x28F5E0u;
    // 0x28f5e0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F5E0u;
    {
        const bool branch_taken_0x28f5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5E0u;
        // 0x28f5e4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5e0) {
            ctx->pc = 0x28F5FCu;
            goto label_28f5fc;
        }
    }
    ctx->pc = 0x28F5E8u;
    // 0x28f5e8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F5E8u;
    {
        const bool branch_taken_0x28f5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5E8u;
        // 0x28f5ec: 0x2462fff2  addiu       $v0, $v1, -0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5e8) {
            ctx->pc = 0x28F5FCu;
            goto label_28f5fc;
        }
    }
    ctx->pc = 0x28F5F0u;
    // 0x28f5f0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x28f5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x28f5f4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x28F5F4u;
    {
        const bool branch_taken_0x28f5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f5f4) {
            ctx->pc = 0x28F5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F5F4u;
            // 0x28f5f8: 0xc4cf004c  lwc1        $f15, 0x4C($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F654u;
            goto label_28f654;
        }
    }
    ctx->pc = 0x28F5FCu;
label_28f5fc:
    // 0x28f5fc: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x28f5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f600: 0xc7818af0  lwc1        $f1, -0x7510($gp)
    ctx->pc = 0x28f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f604: 0xc4c20034  lwc1        $f2, 0x34($a2)
    ctx->pc = 0x28f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f608: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28f608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28f60c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x28f60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f610: 0x0  nop
    ctx->pc = 0x28f610u;
    // NOP
    // 0x28f614: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x28F614u;
    {
        const bool branch_taken_0x28f614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f614) {
            ctx->pc = 0x28F618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F614u;
            // 0x28f618: 0xc4cf004c  lwc1        $f15, 0x4C($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F654u;
            goto label_28f654;
        }
    }
    ctx->pc = 0x28F61Cu;
    // 0x28f61c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x28f61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x28f620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f624: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x28f624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f628: 0x0  nop
    ctx->pc = 0x28f628u;
    // NOP
    // 0x28f62c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x28F62Cu;
    {
        const bool branch_taken_0x28f62c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f62c) {
            ctx->pc = 0x28F630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F62Cu;
            // 0x28f630: 0xc4cf004c  lwc1        $f15, 0x4C($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F654u;
            goto label_28f654;
        }
    }
    ctx->pc = 0x28F634u;
    // 0x28f634: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x28f634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f638: 0xc7828af4  lwc1        $f2, -0x750C($gp)
    ctx->pc = 0x28f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f63c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x28f63cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28f640: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x28f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f644: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28f644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28f648: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28f648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28f64c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x28F64Cu;
    {
        const bool branch_taken_0x28f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F64Cu;
        // 0x28f650: 0xc4a10038  lwc1        $f1, 0x38($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f64c) {
            ctx->pc = 0x28F720u;
            goto label_28f720;
        }
    }
    ctx->pc = 0x28F654u;
label_28f654:
    // 0x28f654: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x28f654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28f658: 0xc7808af8  lwc1        $f0, -0x7508($gp)
    ctx->pc = 0x28f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f660: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28f660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28f664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f668: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x28f668u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x28f66c: 0xc4ce0038  lwc1        $f14, 0x38($a2)
    ctx->pc = 0x28f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28f670: 0xc4cc0030  lwc1        $f12, 0x30($a2)
    ctx->pc = 0x28f670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f674: 0x0  nop
    ctx->pc = 0x28f674u;
    // NOP
    // 0x28f678: 0x0  nop
    ctx->pc = 0x28f678u;
    // NOP
    // 0x28f67c: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x28f67cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x28f680: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x28F680u;
    SET_GPR_U32(ctx, 31, 0x28F688u);
    ctx->pc = 0x28F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F680u;
    // 0x28f684: 0xc4cd0034  lwc1        $f13, 0x34($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x28F680u, 0x28F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F688u;
label_28f688:
    // 0x28f688: 0x8e660ae4  lw          $a2, 0xAE4($s3)
    ctx->pc = 0x28f688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2788)));
    // 0x28f68c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28f68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f690: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28f690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f694: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x28f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x28f698: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x28f698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x28f69c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x28f69cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f6a0: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x28f6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x28f6a4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x28f6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x28f6a8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28F6A8u;
    SET_GPR_U32(ctx, 31, 0x28F6B0u);
    ctx->pc = 0x28F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F6A8u;
    // 0x28f6ac: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28F6A8u, 0x28F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F6B0u;
label_28f6b0:
    // 0x28f6b0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x28f6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f6b4: 0xc7818afc  lwc1        $f1, -0x7504($gp)
    ctx->pc = 0x28f6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f6b8: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x28f6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f6bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28f6bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28f6c0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x28f6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f6c4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x28f6c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28f6c8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x28f6c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28f6cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28F6CCu;
    {
        const bool branch_taken_0x28f6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6CCu;
        // 0x28f6d0: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6cc) {
            ctx->pc = 0x28F724u;
            goto label_28f724;
        }
    }
    ctx->pc = 0x28F6D4u;
label_28f6d4:
    // 0x28f6d4: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x28f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f6d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28f6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28f6dc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28f6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28f6e0: 0xc4c00200  lwc1        $f0, 0x200($a2)
    ctx->pc = 0x28f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f6e4: 0xc4c10034  lwc1        $f1, 0x34($a2)
    ctx->pc = 0x28f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f6e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28f6e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28f6ec: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x28f6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28f6f0: 0xc4c20204  lwc1        $f2, 0x204($a2)
    ctx->pc = 0x28f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f6f4: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x28f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f6f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28f6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28f6fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28F6FCu;
    {
        const bool branch_taken_0x28f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6FCu;
        // 0x28f700: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6fc) {
            ctx->pc = 0x28F724u;
            goto label_28f724;
        }
    }
    ctx->pc = 0x28F704u;
label_28f704:
    // 0x28f704: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28f704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28f708: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f70c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x28f70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28f710: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x28f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f714: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28f714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28f718: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28f718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28f71c: 0xc4c10038  lwc1        $f1, 0x38($a2)
    ctx->pc = 0x28f71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f720:
    // 0x28f720: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x28f720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_28f724:
    // 0x28f724: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x28f724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28f728:
    // 0x28f728: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f72c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F72Cu;
    {
        const bool branch_taken_0x28f72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F72Cu;
        // 0x28f730: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f72c) {
            ctx->pc = 0x28F774u;
            goto label_28f774;
        }
    }
    ctx->pc = 0x28F734u;
    // 0x28f734: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x28f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x28f738: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x28f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x28f73c: 0x8f84b278  lw          $a0, -0x4D88($gp)
    ctx->pc = 0x28f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947448)));
    // 0x28f740: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x28f740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f744: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28f744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f748: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28f748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28f74c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28f750: 0xaf84b278  sw          $a0, -0x4D88($gp)
    ctx->pc = 0x28f750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947448), GPR_U32(ctx, 4));
    // 0x28f754: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28f754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28f758: 0xa28023  subu        $s0, $a1, $v0
    ctx->pc = 0x28f758u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28f75c: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x28f75cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x28f760: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x28f760u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28f764: 0x148000a5  bnez        $a0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x28F764u;
    {
        const bool branch_taken_0x28f764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F764u;
        // 0x28f768: 0x3c160036  lui         $s6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f764) {
            ctx->pc = 0x28F9FCu;
            goto label_28f9fc;
        }
    }
    ctx->pc = 0x28F76Cu;
    // 0x28f76c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x28F76Cu;
    {
        const bool branch_taken_0x28f76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F76Cu;
        // 0x28f770: 0xaf80b278  sw          $zero, -0x4D88($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f76c) {
            ctx->pc = 0x28F9FCu;
            goto label_28f9fc;
        }
    }
    ctx->pc = 0x28F774u;
label_28f774:
    // 0x28f774: 0x5462009a  bnel        $v1, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x28F774u;
    {
        const bool branch_taken_0x28f774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f774) {
            ctx->pc = 0x28F778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F774u;
            // 0x28f778: 0x8eb10040  lw          $s1, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F9E0u;
            goto label_28f9e0;
        }
    }
    ctx->pc = 0x28F77Cu;
    // 0x28f77c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x28f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x28f780: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x28f780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x28f784: 0x14400214  bnez        $v0, . + 4 + (0x214 << 2)
    ctx->pc = 0x28F784u;
    {
        const bool branch_taken_0x28f784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F784u;
        // 0x28f788: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f784) {
            ctx->pc = 0x28FFD8u;
            goto label_28ffd8;
        }
    }
    ctx->pc = 0x28F78Cu;
    // 0x28f78c: 0xc68f004c  lwc1        $f15, 0x4C($s4)
    ctx->pc = 0x28f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28f790: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x28f790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28f794: 0xc7808b00  lwc1        $f0, -0x7500($gp)
    ctx->pc = 0x28f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f79c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28f7a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f7a4: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x28f7a4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x28f7a8: 0xc68c0030  lwc1        $f12, 0x30($s4)
    ctx->pc = 0x28f7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f7ac: 0xc68d0034  lwc1        $f13, 0x34($s4)
    ctx->pc = 0x28f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28f7b0: 0x0  nop
    ctx->pc = 0x28f7b0u;
    // NOP
    // 0x28f7b4: 0x0  nop
    ctx->pc = 0x28f7b4u;
    // NOP
    // 0x28f7b8: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x28f7b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x28f7bc: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x28F7BCu;
    SET_GPR_U32(ctx, 31, 0x28F7C4u);
    ctx->pc = 0x28F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7BCu;
    // 0x28f7c0: 0xc68e0038  lwc1        $f14, 0x38($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x28F7BCu, 0x28F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7C4u;
label_28f7c4:
    // 0x28f7c4: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x28f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x28f7c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28f7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f7cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f7d0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x28f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x28f7d4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x28f7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28f7d8: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x28f7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x28f7dc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x28f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x28f7e0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28F7E0u;
    SET_GPR_U32(ctx, 31, 0x28F7E8u);
    ctx->pc = 0x28F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7E0u;
    // 0x28f7e4: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28F7E0u, 0x28F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7E8u;
label_28f7e8:
    // 0x28f7e8: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x28f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f7ec: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x28f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28f7f0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x28f7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f7f4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x28f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f7f8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x28f7f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x28f7fc: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x28f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f800: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x28f800u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x28f804: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x28f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f808: 0xe6a40048  swc1        $f4, 0x48($s5)
    ctx->pc = 0x28f808u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x28f80c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x28f80cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x28f810: 0xe6a30050  swc1        $f3, 0x50($s5)
    ctx->pc = 0x28f810u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
    // 0x28f814: 0x46010b02  mul.s       $f12, $f1, $f1
    ctx->pc = 0x28f814u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28f818: 0xe6a5004c  swc1        $f5, 0x4C($s5)
    ctx->pc = 0x28f818u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
    // 0x28f81c: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x28f81cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28f820: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x28f820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28f824: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x28f824u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28f828: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x28f828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28f82c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x28f82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28f830: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x28f830u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x28f834: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28F834u;
    SET_GPR_U32(ctx, 31, 0x28F83Cu);
    ctx->pc = 0x28F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F834u;
    // 0x28f838: 0x46036300  add.s       $f12, $f12, $f3 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28F834u, 0x28F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F83Cu;
label_28f83c:
    // 0x28f83c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x28f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f840: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x28f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f844: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28f844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28f848: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x28f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f84c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28f84cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28f850: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x28f850u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x28f854: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28f854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28f858: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28F858u;
    SET_GPR_U32(ctx, 31, 0x28F860u);
    ctx->pc = 0x28F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F858u;
    // 0x28f85c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28F858u, 0x28F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F860u;
label_28f860:
    // 0x28f860: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x28F860u;
    SET_GPR_U32(ctx, 31, 0x28F868u);
    ctx->pc = 0x28F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F860u;
    // 0x28f864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x28F860u, 0x28F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F868u;
label_28f868:
    // 0x28f868: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x28f868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28f86c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x28f86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x28f870: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x28F870u;
    SET_GPR_U32(ctx, 31, 0x28F878u);
    ctx->pc = 0x28F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F870u;
    // 0x28f874: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28F870u, 0x28F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F878u;
label_28f878:
    // 0x28f878: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x28F878u;
    SET_GPR_U32(ctx, 31, 0x28F880u);
    ctx->pc = 0x28F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F878u;
    // 0x28f87c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28F878u, 0x28F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F880u;
label_28f880:
    // 0x28f880: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x28f880u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x28f884: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x28f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f888: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f88c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x28f88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f890: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x28f890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x28f894: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28f894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x28f898: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x28f898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x28f89c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x28f89cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28f8a0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28f8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28f8a4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28F8A4u;
    SET_GPR_U32(ctx, 31, 0x28F8ACu);
    ctx->pc = 0x28F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F8A4u;
    // 0x28f8a8: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28F8A4u, 0x28F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F8ACu;
label_28f8ac:
    // 0x28f8ac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F8ACu;
    {
        const bool branch_taken_0x28f8ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8ACu;
        // 0x28f8b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8ac) {
            ctx->pc = 0x28F8C0u;
            goto label_28f8c0;
        }
    }
    ctx->pc = 0x28F8B4u;
    // 0x28f8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f8b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28F8B8u;
    {
        const bool branch_taken_0x28f8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8B8u;
        // 0x28f8bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8b8) {
            ctx->pc = 0x28F8D4u;
            goto label_28f8d4;
        }
    }
    ctx->pc = 0x28F8C0u;
label_28f8c0:
    // 0x28f8c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f8c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28f8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28f8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f8cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f8ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f8d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f8d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f8d4:
    // 0x28f8d4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28f8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28f8d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f8dc: 0xc7838b04  lwc1        $f3, -0x74FC($gp)
    ctx->pc = 0x28f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f8e0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28f8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f8e4: 0xc7828b08  lwc1        $f2, -0x74F8($gp)
    ctx->pc = 0x28f8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f8e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x28f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f8ec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28f8ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28f8f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28f8f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28f8f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28f8f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28f8f8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28F8F8u;
    SET_GPR_U32(ctx, 31, 0x28F900u);
    ctx->pc = 0x28F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F8F8u;
    // 0x28f8fc: 0xe6600ba0  swc1        $f0, 0xBA0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2976), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28F8F8u, 0x28F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F900u;
label_28f900:
    // 0x28f900: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F900u;
    {
        const bool branch_taken_0x28f900 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F900u;
        // 0x28f904: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f900) {
            ctx->pc = 0x28F914u;
            goto label_28f914;
        }
    }
    ctx->pc = 0x28F908u;
    // 0x28f908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f90c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28F90Cu;
    {
        const bool branch_taken_0x28f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F90Cu;
        // 0x28f910: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f90c) {
            ctx->pc = 0x28F928u;
            goto label_28f928;
        }
    }
    ctx->pc = 0x28F914u;
label_28f914:
    // 0x28f914: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28f918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28f91c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f920: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f924: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f928:
    // 0x28f928: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28f928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28f92c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f930: 0xc7838b0c  lwc1        $f3, -0x74F4($gp)
    ctx->pc = 0x28f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f934: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28f934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f938: 0xc7828b10  lwc1        $f2, -0x74F0($gp)
    ctx->pc = 0x28f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f93c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28f93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f940: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28f940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28f944: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28f944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28f948: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28f948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28f94c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28F94Cu;
    SET_GPR_U32(ctx, 31, 0x28F954u);
    ctx->pc = 0x28F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F94Cu;
    // 0x28f950: 0xe6600ba4  swc1        $f0, 0xBA4($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2980), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28F94Cu, 0x28F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F954u;
label_28f954:
    // 0x28f954: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F954u;
    {
        const bool branch_taken_0x28f954 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F954u;
        // 0x28f958: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f954) {
            ctx->pc = 0x28F968u;
            goto label_28f968;
        }
    }
    ctx->pc = 0x28F95Cu;
    // 0x28f95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f960: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28F960u;
    {
        const bool branch_taken_0x28f960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F960u;
        // 0x28f964: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f960) {
            ctx->pc = 0x28F97Cu;
            goto label_28f97c;
        }
    }
    ctx->pc = 0x28F968u;
label_28f968:
    // 0x28f968: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f96c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28f96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28f970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f978: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f97c:
    // 0x28f97c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28f97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28f980: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28f984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f988: 0xc7828b14  lwc1        $f2, -0x74EC($gp)
    ctx->pc = 0x28f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f98c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28f98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f990: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28f990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f994: 0xc7838b18  lwc1        $f3, -0x74E8($gp)
    ctx->pc = 0x28f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f998: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x28f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f99c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28f99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9a0: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x28f9a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28f9a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f9a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28f9a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28f9ac: 0x26680ba0  addiu       $t0, $s3, 0xBA0
    ctx->pc = 0x28f9acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 2976));
    // 0x28f9b0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x28f9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f9b4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x28f9b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f9b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28f9b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28f9bc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x28f9bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x28f9c0: 0xc0a41b2  jal         func_2906C8
    ctx->pc = 0x28F9C0u;
    SET_GPR_U32(ctx, 31, 0x28F9C8u);
    ctx->pc = 0x28F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9C0u;
    // 0x28f9c4: 0xe6600ba8  swc1        $f0, 0xBA8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2984), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906C8u, 0x28F9C0u, 0x28F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9C8u;
label_28f9c8:
    // 0x28f9c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9cc: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x28f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x28f9d0: 0xc0a379a  jal         func_28DE68
    ctx->pc = 0x28F9D0u;
    SET_GPR_U32(ctx, 31, 0x28F9D8u);
    ctx->pc = 0x28F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9D0u;
    // 0x28f9d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE68u, 0x28F9D0u, 0x28F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9D8u;
label_28f9d8:
    // 0x28f9d8: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x28F9D8u;
    {
        const bool branch_taken_0x28f9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9D8u;
        // 0x28f9dc: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9d8) {
            ctx->pc = 0x28FFD8u;
            goto label_28ffd8;
        }
    }
    ctx->pc = 0x28F9E0u;
label_28f9e0:
    // 0x28f9e0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x28f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x28f9e4: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x28f9e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
    // 0x28f9e8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x28f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28f9ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x28f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f9f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28f9f4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x28f9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28f9f8: 0xa28023  subu        $s0, $a1, $v0
    ctx->pc = 0x28f9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28f9fc:
    // 0x28f9fc: 0xaea00044  sw          $zero, 0x44($s5)
    ctx->pc = 0x28f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
    // 0x28fa00: 0xc0a38d2  jal         func_28E348
    ctx->pc = 0x28FA00u;
    SET_GPR_U32(ctx, 31, 0x28FA08u);
    ctx->pc = 0x28FA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA00u;
    // 0x28fa04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E348u, 0x28FA00u, 0x28FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA08u;
label_28fa08:
    // 0x28fa08: 0x8f84b278  lw          $a0, -0x4D88($gp)
    ctx->pc = 0x28fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947448)));
    // 0x28fa0c: 0x82020007  lb          $v0, 0x7($s0)
    ctx->pc = 0x28fa0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x28fa10: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x28fa10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28fa14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FA14u;
    {
        const bool branch_taken_0x28fa14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA14u;
        // 0x28fa18: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa14) {
            ctx->pc = 0x28FA28u;
            goto label_28fa28;
        }
    }
    ctx->pc = 0x28FA1Cu;
    // 0x28fa1c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x28fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x28fa20: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28fa20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28fa24: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x28fa24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28fa28:
    // 0x28fa28: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x28fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x28fa2c: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x28fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
    // 0x28fa30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28fa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28fa34: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28FA34u;
    {
        const bool branch_taken_0x28fa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA34u;
        // 0x28fa38: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa34) {
            ctx->pc = 0x28FAF4u;
            goto label_28faf4;
        }
    }
    ctx->pc = 0x28FA3Cu;
    // 0x28fa3c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x28fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28fa40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28fa44: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x28FA44u;
    {
        const bool branch_taken_0x28fa44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA44u;
        // 0x28fa48: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa44) {
            ctx->pc = 0x28FAF0u;
            goto label_28faf0;
        }
    }
    ctx->pc = 0x28FA4Cu;
    // 0x28fa4c: 0xc62f004c  lwc1        $f15, 0x4C($s1)
    ctx->pc = 0x28fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28fa50: 0xc7808b1c  lwc1        $f0, -0x74E4($gp)
    ctx->pc = 0x28fa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fa54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa58: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28fa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28fa5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28fa5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fa60: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x28fa60u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x28fa64: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x28fa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fa68: 0xc62d0034  lwc1        $f13, 0x34($s1)
    ctx->pc = 0x28fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28fa6c: 0x0  nop
    ctx->pc = 0x28fa6cu;
    // NOP
    // 0x28fa70: 0x0  nop
    ctx->pc = 0x28fa70u;
    // NOP
    // 0x28fa74: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x28fa74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x28fa78: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x28FA78u;
    SET_GPR_U32(ctx, 31, 0x28FA80u);
    ctx->pc = 0x28FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA78u;
    // 0x28fa7c: 0xc62e0038  lwc1        $f14, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x28FA78u, 0x28FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA80u;
label_28fa80:
    // 0x28fa80: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x28fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28fa84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa88: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x28fa88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28fa8c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x28fa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28fa90: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28FA90u;
    SET_GPR_U32(ctx, 31, 0x28FA98u);
    ctx->pc = 0x28FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA90u;
    // 0x28fa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28FA90u, 0x28FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA98u;
label_28fa98:
    // 0x28fa98: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x28fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28fa9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28faa0: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x28faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28faa4: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x28FAA4u;
    SET_GPR_U32(ctx, 31, 0x28FAACu);
    ctx->pc = 0x28FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAA4u;
    // 0x28faa8: 0xc64d0004  lwc1        $f13, 0x4($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x28FAA4u, 0x28FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAACu;
label_28faac:
    // 0x28faac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28faacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fab0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28fab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fab4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28FAB4u;
    SET_GPR_U32(ctx, 31, 0x28FABCu);
    ctx->pc = 0x28FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAB4u;
    // 0x28fab8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28FAB4u, 0x28FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FABCu;
label_28fabc:
    // 0x28fabc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x28fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fac0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x28fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fac4: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x28fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fac8: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x28fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28facc: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x28faccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fad0: 0xc7a500d8  lwc1        $f5, 0xD8($sp)
    ctx->pc = 0x28fad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28fad4: 0xe6a00048  swc1        $f0, 0x48($s5)
    ctx->pc = 0x28fad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x28fad8: 0xe6a1004c  swc1        $f1, 0x4C($s5)
    ctx->pc = 0x28fad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
    // 0x28fadc: 0xe6a20050  swc1        $f2, 0x50($s5)
    ctx->pc = 0x28fadcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
    // 0x28fae0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x28fae0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28fae4: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x28fae4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28fae8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x28FAE8u;
    {
        const bool branch_taken_0x28fae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAE8u;
        // 0x28faec: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fae8) {
            ctx->pc = 0x28FBDCu;
            goto label_28fbdc;
        }
    }
    ctx->pc = 0x28FAF0u;
label_28faf0:
    // 0x28faf0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x28faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_28faf4:
    // 0x28faf4: 0x26640af8  addiu       $a0, $s3, 0xAF8
    ctx->pc = 0x28faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2808));
    // 0x28faf8: 0xc78c8b20  lwc1        $f12, -0x74E0($gp)
    ctx->pc = 0x28faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fafc: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x28FAFCu;
    SET_GPR_U32(ctx, 31, 0x28FB04u);
    ctx->pc = 0x28FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAFCu;
    // 0x28fb00: 0xc44d0084  lwc1        $f13, 0x84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x28FAFCu, 0x28FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB04u;
label_28fb04:
    // 0x28fb04: 0x10400133  beqz        $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x28FB04u;
    {
        const bool branch_taken_0x28fb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB04u;
        // 0x28fb08: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb04) {
            ctx->pc = 0x28FFD4u;
            goto label_28ffd4;
        }
    }
    ctx->pc = 0x28FB0Cu;
    // 0x28fb0c: 0xc6610af8  lwc1        $f1, 0xAF8($s3)
    ctx->pc = 0x28fb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fb10: 0x8e620ae4  lw          $v0, 0xAE4($s3)
    ctx->pc = 0x28fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2788)));
    // 0x28fb14: 0xe6a10048  swc1        $f1, 0x48($s5)
    ctx->pc = 0x28fb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x28fb18: 0xc6600afc  lwc1        $f0, 0xAFC($s3)
    ctx->pc = 0x28fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fb1c: 0xe6a0004c  swc1        $f0, 0x4C($s5)
    ctx->pc = 0x28fb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
    // 0x28fb20: 0xc6610b00  lwc1        $f1, 0xB00($s3)
    ctx->pc = 0x28fb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fb24: 0xe6a10050  swc1        $f1, 0x50($s5)
    ctx->pc = 0x28fb24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
    // 0x28fb28: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x28fb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fb2c: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x28fb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fb30: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x28fb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fb34: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x28fb34u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x28fb38: 0xc6820038  lwc1        $f2, 0x38($s4)
    ctx->pc = 0x28fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fb3c: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x28fb3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28fb40: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x28fb40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x28fb44: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x28fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fb48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28fb48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28fb4c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28fb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28fb50: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28fb50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28fb54: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x28fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fb58: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x28fb58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x28fb5c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x28fb5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x28fb60: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x28fb60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28fb64: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28fb64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28fb68: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28FB68u;
    SET_GPR_U32(ctx, 31, 0x28FB70u);
    ctx->pc = 0x28FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB68u;
    // 0x28fb6c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28FB68u, 0x28FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB70u;
label_28fb70:
    // 0x28fb70: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x28fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fb74: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x28fb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fb78: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28fb78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28fb7c: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x28fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fb80: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28fb80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28fb84: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x28fb84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x28fb88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28fb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28fb8c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28FB8Cu;
    SET_GPR_U32(ctx, 31, 0x28FB94u);
    ctx->pc = 0x28FB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB8Cu;
    // 0x28fb90: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28FB8Cu, 0x28FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB94u;
label_28fb94:
    // 0x28fb94: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x28FB94u;
    SET_GPR_U32(ctx, 31, 0x28FB9Cu);
    ctx->pc = 0x28FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB94u;
    // 0x28fb98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x28FB94u, 0x28FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB9Cu;
label_28fb9c:
    // 0x28fb9c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x28fb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28fba0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x28fba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x28fba4: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x28FBA4u;
    SET_GPR_U32(ctx, 31, 0x28FBACu);
    ctx->pc = 0x28FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBA4u;
    // 0x28fba8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28FBA4u, 0x28FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBACu;
label_28fbac:
    // 0x28fbac: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x28FBACu;
    SET_GPR_U32(ctx, 31, 0x28FBB4u);
    ctx->pc = 0x28FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBACu;
    // 0x28fbb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28FBACu, 0x28FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBB4u;
label_28fbb4:
    // 0x28fbb4: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x28fbb4u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x28fbb8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x28fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fbbc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x28fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fbc0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x28fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fbc4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x28fbc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x28fbc8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28fbc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x28fbcc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x28fbccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x28fbd0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28fbd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28fbd4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28fbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28fbd8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28fbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_28fbdc:
    // 0x28fbdc: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x28fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fbe0: 0xc6a3004c  lwc1        $f3, 0x4C($s5)
    ctx->pc = 0x28fbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28fbe4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x28fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fbe8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28fbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fbec: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x28fbecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x28fbf0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x28fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fbf4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x28fbf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x28fbf8: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x28fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fbfc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x28fbfcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28fc00: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28fc00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28fc04: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x28fc04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28fc08: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x28fc08u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x28fc0c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28fc0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28fc10: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x28fc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28fc14: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x28fc14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28fc18: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28fc18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28fc1c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28FC1Cu;
    SET_GPR_U32(ctx, 31, 0x28FC24u);
    ctx->pc = 0x28FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC1Cu;
    // 0x28fc20: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28FC1Cu, 0x28FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC24u;
label_28fc24:
    // 0x28fc24: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x28fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fc28: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x28fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fc2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28fc2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28fc30: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x28fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fc34: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28fc34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28fc38: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x28fc38u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x28fc3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28fc3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28fc40: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28FC40u;
    SET_GPR_U32(ctx, 31, 0x28FC48u);
    ctx->pc = 0x28FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC40u;
    // 0x28fc44: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28FC40u, 0x28FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC48u;
label_28fc48:
    // 0x28fc48: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x28FC48u;
    SET_GPR_U32(ctx, 31, 0x28FC50u);
    ctx->pc = 0x28FC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC48u;
    // 0x28fc4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x28FC48u, 0x28FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC50u;
label_28fc50:
    // 0x28fc50: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x28fc50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28fc54: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x28fc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x28fc58: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x28FC58u;
    SET_GPR_U32(ctx, 31, 0x28FC60u);
    ctx->pc = 0x28FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC58u;
    // 0x28fc5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x28FC58u, 0x28FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC60u;
label_28fc60:
    // 0x28fc60: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x28FC60u;
    SET_GPR_U32(ctx, 31, 0x28FC68u);
    ctx->pc = 0x28FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC60u;
    // 0x28fc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28FC60u, 0x28FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC68u;
label_28fc68:
    // 0x28fc68: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x28fc68u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x28fc6c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x28fc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fc70: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fc74: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x28fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fc78: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x28fc78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x28fc7c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28fc7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x28fc80: 0x8e620ae4  lw          $v0, 0xAE4($s3)
    ctx->pc = 0x28fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2788)));
    // 0x28fc84: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x28fc84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x28fc88: 0xc6830030  lwc1        $f3, 0x30($s4)
    ctx->pc = 0x28fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28fc8c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x28fc8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28fc90: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28fc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28fc94: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x28fc94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28fc98: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x28fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fc9c: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x28fc9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x28fca0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28fca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28fca4: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x28fca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28fca8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x28fca8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28fcac: 0x0  nop
    ctx->pc = 0x28fcacu;
    // NOP
    // 0x28fcb0: 0x0  nop
    ctx->pc = 0x28fcb0u;
    // NOP
    // 0x28fcb4: 0x460c0504  c1          0xC0504
    ctx->pc = 0x28fcb4u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x28fcb8: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x28fcb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fcbc: 0x0  nop
    ctx->pc = 0x28fcbcu;
    // NOP
    // 0x28fcc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28FCC0u;
    {
        const bool branch_taken_0x28fcc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCC0u;
        // 0x28fcc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcc0) {
            ctx->pc = 0x28FCD8u;
            goto label_28fcd8;
        }
    }
    ctx->pc = 0x28FCC8u;
    // 0x28fcc8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x28FCC8u;
    SET_GPR_U32(ctx, 31, 0x28FCD0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28FCC8u, 0x28FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCD0u;
label_28fcd0:
    // 0x28fcd0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28fcd0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x28fcd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28fcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28fcd8:
    // 0x28fcd8: 0xc085608  jal         func_215820
    ctx->pc = 0x28FCD8u;
    SET_GPR_U32(ctx, 31, 0x28FCE0u);
    ctx->pc = 0x28FCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCD8u;
    // 0x28fcdc: 0x240501c1  addiu       $a1, $zero, 0x1C1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x28FCD8u, 0x28FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCE0u;
label_28fce0:
    // 0x28fce0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28FCE0u;
    {
        const bool branch_taken_0x28fce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCE0u;
        // 0x28fce4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fce0) {
            ctx->pc = 0x28FD10u;
            goto label_28fd10;
        }
    }
    ctx->pc = 0x28FCE8u;
    // 0x28fce8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28fce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcec: 0xc085608  jal         func_215820
    ctx->pc = 0x28FCECu;
    SET_GPR_U32(ctx, 31, 0x28FCF4u);
    ctx->pc = 0x28FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCECu;
    // 0x28fcf0: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x28FCECu, 0x28FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCF4u;
label_28fcf4:
    // 0x28fcf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FCF4u;
    {
        const bool branch_taken_0x28fcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCF4u;
        // 0x28fcf8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcf4) {
            ctx->pc = 0x28FD10u;
            goto label_28fd10;
        }
    }
    ctx->pc = 0x28FCFCu;
    // 0x28fcfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28fcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd00: 0xc085608  jal         func_215820
    ctx->pc = 0x28FD00u;
    SET_GPR_U32(ctx, 31, 0x28FD08u);
    ctx->pc = 0x28FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD00u;
    // 0x28fd04: 0x240501de  addiu       $a1, $zero, 0x1DE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x28FD00u, 0x28FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD08u;
label_28fd08:
    // 0x28fd08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28FD08u;
    {
        const bool branch_taken_0x28fd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD08u;
        // 0x28fd0c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd08) {
            ctx->pc = 0x28FD60u;
            goto label_28fd60;
        }
    }
    ctx->pc = 0x28FD10u;
label_28fd10:
    // 0x28fd10: 0xc7948b24  lwc1        $f20, -0x74DC($gp)
    ctx->pc = 0x28fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28fd14: 0xe6600ba0  swc1        $f0, 0xBA0($s3)
    ctx->pc = 0x28fd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2976), bits); }
    // 0x28fd18: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x28fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fd1c: 0xe6610ba4  swc1        $f1, 0xBA4($s3)
    ctx->pc = 0x28fd1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2980), bits); }
    // 0x28fd20: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x28fd20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fd24: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x28fd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fd28: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x28FD28u;
    {
        const bool branch_taken_0x28fd28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD28u;
        // 0x28fd2c: 0xe6600ba8  swc1        $f0, 0xBA8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2984), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd28) {
            ctx->pc = 0x28FDC8u;
            goto label_28fdc8;
        }
    }
    ctx->pc = 0x28FD30u;
    // 0x28fd30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28fd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd34: 0xc085608  jal         func_215820
    ctx->pc = 0x28FD34u;
    SET_GPR_U32(ctx, 31, 0x28FD3Cu);
    ctx->pc = 0x28FD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD34u;
    // 0x28fd38: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x28FD34u, 0x28FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD3Cu;
label_28fd3c:
    // 0x28fd3c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x28FD3Cu;
    {
        const bool branch_taken_0x28fd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fd3c) {
            ctx->pc = 0x28FD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FD3Cu;
            // 0x28fd40: 0xe6740ba4  swc1        $f20, 0xBA4($s3) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2980), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FDC8u;
            goto label_28fdc8;
        }
    }
    ctx->pc = 0x28FD44u;
    // 0x28fd44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28fd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd48: 0xc085608  jal         func_215820
    ctx->pc = 0x28FD48u;
    SET_GPR_U32(ctx, 31, 0x28FD50u);
    ctx->pc = 0x28FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD48u;
    // 0x28fd4c: 0x240501de  addiu       $a1, $zero, 0x1DE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x28FD48u, 0x28FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD50u;
label_28fd50:
    // 0x28fd50: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28FD50u;
    {
        const bool branch_taken_0x28fd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fd50) {
            ctx->pc = 0x28FD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FD50u;
            // 0x28fd54: 0xc6600ba0  lwc1        $f0, 0xBA0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FDCCu;
            goto label_28fdcc;
        }
    }
    ctx->pc = 0x28FD58u;
    // 0x28fd58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28FD58u;
    {
        const bool branch_taken_0x28fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD58u;
        // 0x28fd5c: 0xe6740ba4  swc1        $f20, 0xBA4($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd58) {
            ctx->pc = 0x28FDC8u;
            goto label_28fdc8;
        }
    }
    ctx->pc = 0x28FD60u;
label_28fd60:
    // 0x28fd60: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x28fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fd64: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x28fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28fd68: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x28fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fd6c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28fd6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x28fd70: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x28fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fd74: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28fd74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28fd78: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x28fd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28fd7c: 0xc7848b28  lwc1        $f4, -0x74D8($gp)
    ctx->pc = 0x28fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fd80: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28fd80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28fd84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28fd84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28fd88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28fd88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28fd8c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x28fd8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fd90: 0x0  nop
    ctx->pc = 0x28fd90u;
    // NOP
    // 0x28fd94: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x28FD94u;
    {
        const bool branch_taken_0x28fd94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28fd94) {
            ctx->pc = 0x28FD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FD94u;
            // 0x28fd98: 0xe6650ba0  swc1        $f5, 0xBA0($s3) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2976), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FDB8u;
            goto label_28fdb8;
        }
    }
    ctx->pc = 0x28FD9Cu;
    // 0x28fd9c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x28fd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x28fda0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fda4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28fda4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fda8: 0x0  nop
    ctx->pc = 0x28fda8u;
    // NOP
    // 0x28fdac: 0x4500008a  bc1f        . + 4 + (0x8A << 2)
    ctx->pc = 0x28FDACu;
    {
        const bool branch_taken_0x28fdac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDACu;
        // 0x28fdb0: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdac) {
            ctx->pc = 0x28FFD8u;
            goto label_28ffd8;
        }
    }
    ctx->pc = 0x28FDB4u;
    // 0x28fdb4: 0xe6650ba0  swc1        $f5, 0xBA0($s3)
    ctx->pc = 0x28fdb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2976), bits); }
label_28fdb8:
    // 0x28fdb8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28fdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fdbc: 0xe6600ba4  swc1        $f0, 0xBA4($s3)
    ctx->pc = 0x28fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2980), bits); }
    // 0x28fdc0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x28fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fdc4: 0xe6610ba8  swc1        $f1, 0xBA8($s3)
    ctx->pc = 0x28fdc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2984), bits); }
label_28fdc8:
    // 0x28fdc8: 0xc6600ba0  lwc1        $f0, 0xBA0($s3)
    ctx->pc = 0x28fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28fdcc:
    // 0x28fdcc: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x28fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28fdd0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x28fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28fdd4: 0x26c46218  addiu       $a0, $s6, 0x6218
    ctx->pc = 0x28fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25112));
    // 0x28fdd8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28fdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28fddc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x28fddcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fde0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x28fde0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28fde4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28fde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28fde8: 0xc6600ba4  lwc1        $f0, 0xBA4($s3)
    ctx->pc = 0x28fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fdec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28fdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdf0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28fdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28fdf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28fdf8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x28fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x28fdfc: 0x24710034  addiu       $s1, $v1, 0x34
    ctx->pc = 0x28fdfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x28fe00: 0xc6600ba8  lwc1        $f0, 0xBA8($s3)
    ctx->pc = 0x28fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fe04: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x28fe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x28fe08: 0xa2b00a  movz        $s6, $a1, $v0
    ctx->pc = 0x28fe08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 5));
    // 0x28fe0c: 0x12c0006c  beqz        $s6, . + 4 + (0x6C << 2)
    ctx->pc = 0x28FE0Cu;
    {
        const bool branch_taken_0x28fe0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE0Cu;
        // 0x28fe10: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe0c) {
            ctx->pc = 0x28FFC0u;
            goto label_28ffc0;
        }
    }
    ctx->pc = 0x28FE14u;
    // 0x28fe14: 0x26920030  addiu       $s2, $s4, 0x30
    ctx->pc = 0x28fe14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_28fe18:
    // 0x28fe18: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28FE18u;
    SET_GPR_U32(ctx, 31, 0x28FE20u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28FE18u, 0x28FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE20u;
label_28fe20:
    // 0x28fe20: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FE20u;
    {
        const bool branch_taken_0x28fe20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE20u;
        // 0x28fe24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe20) {
            ctx->pc = 0x28FE34u;
            goto label_28fe34;
        }
    }
    ctx->pc = 0x28FE28u;
    // 0x28fe28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28fe28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fe2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28FE2Cu;
    {
        const bool branch_taken_0x28fe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE2Cu;
        // 0x28fe30: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe2c) {
            ctx->pc = 0x28FE48u;
            goto label_28fe48;
        }
    }
    ctx->pc = 0x28FE34u;
label_28fe34:
    // 0x28fe34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28fe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28fe38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28fe38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28fe3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28fe3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fe40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28fe40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28fe44: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28fe44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28fe48:
    // 0x28fe48: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28fe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28fe4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fe4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fe50: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x28fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fe54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28fe54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28fe58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28fe58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28fe5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28fe5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fe60: 0xc6610b94  lwc1        $f1, 0xB94($s3)
    ctx->pc = 0x28fe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fe64: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28fe64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28fe68: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28fe68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28fe6c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x28fe6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x28fe70: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28FE70u;
    SET_GPR_U32(ctx, 31, 0x28FE78u);
    ctx->pc = 0x28FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE70u;
    // 0x28fe74: 0x46020582  mul.s       $f22, $f0, $f2 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28FE70u, 0x28FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE78u;
label_28fe78:
    // 0x28fe78: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FE78u;
    {
        const bool branch_taken_0x28fe78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE78u;
        // 0x28fe7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe78) {
            ctx->pc = 0x28FE8Cu;
            goto label_28fe8c;
        }
    }
    ctx->pc = 0x28FE80u;
    // 0x28fe80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28fe80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fe84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28FE84u;
    {
        const bool branch_taken_0x28fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE84u;
        // 0x28fe88: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe84) {
            ctx->pc = 0x28FEA0u;
            goto label_28fea0;
        }
    }
    ctx->pc = 0x28FE8Cu;
label_28fe8c:
    // 0x28fe8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28fe90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28fe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28fe94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28fe94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fe98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28fe98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28fe9c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28fe9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28fea0:
    // 0x28fea0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28fea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28fea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28fea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28feac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28feacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28feb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28feb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28feb4: 0xc6620b94  lwc1        $f2, 0xB94($s3)
    ctx->pc = 0x28feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28feb8: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x28feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28febc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28febcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28fec0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28fec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28fec4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x28fec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x28fec8: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FEC8u;
    {
        const bool branch_taken_0x28fec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEC8u;
        // 0x28fecc: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fec8) {
            ctx->pc = 0x28FEE4u;
            goto label_28fee4;
        }
    }
    ctx->pc = 0x28FED0u;
    // 0x28fed0: 0x4600a146  mov.s       $f5, $f20
    ctx->pc = 0x28fed0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[20]);
    // 0x28fed4: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x28fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28fed8: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x28fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28fedc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28FEDCu;
    {
        const bool branch_taken_0x28fedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEDCu;
        // 0x28fee0: 0xc7a30008  lwc1        $f3, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fedc) {
            ctx->pc = 0x28FF3Cu;
            goto label_28ff3c;
        }
    }
    ctx->pc = 0x28FEE4u;
label_28fee4:
    // 0x28fee4: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x28fee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28fee8: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x28fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28feec: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x28feecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x28fef0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x28fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28fef4: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x28fef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x28fef8: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x28fef8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x28fefc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28fefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28ff00: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x28ff00u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28ff04: 0x0  nop
    ctx->pc = 0x28ff04u;
    // NOP
    // 0x28ff08: 0x0  nop
    ctx->pc = 0x28ff08u;
    // NOP
    // 0x28ff0c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x28ff0cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x28ff10: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x28ff10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ff14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x28FF14u;
    {
        const bool branch_taken_0x28ff14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ff14) {
            ctx->pc = 0x28FF30u;
            goto label_28ff30;
        }
    }
    ctx->pc = 0x28FF1Cu;
    // 0x28ff1c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x28FF1Cu;
    SET_GPR_U32(ctx, 31, 0x28FF24u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28FF1Cu, 0x28FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF24u;
label_28ff24:
    // 0x28ff24: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x28ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28ff28: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x28ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28ff2c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x28ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28ff30:
    // 0x28ff30: 0x0  nop
    ctx->pc = 0x28ff30u;
    // NOP
    // 0x28ff34: 0x0  nop
    ctx->pc = 0x28ff34u;
    // NOP
    // 0x28ff38: 0x4600a143  div.s       $f5, $f20, $f0
    ctx->pc = 0x28ff38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[5] = ctx->f[20] / ctx->f[0];
label_28ff3c:
    // 0x28ff3c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x28ff3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x28ff40: 0xc624001c  lwc1        $f4, 0x1C($s1)
    ctx->pc = 0x28ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28ff44: 0x46053882  mul.s       $f2, $f7, $f5
    ctx->pc = 0x28ff44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x28ff48: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x28ff48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28ff4c: 0x46053042  mul.s       $f1, $f6, $f5
    ctx->pc = 0x28ff4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x28ff50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28ff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff54: 0x4603b002  mul.s       $f0, $f22, $f3
    ctx->pc = 0x28ff54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x28ff58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28ff58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ff5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ff60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff64: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x28ff64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x28ff68: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x28ff68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff6c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28ff6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28ff70: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x28ff70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ff74: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x28ff74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ff78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28ff78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28ff7c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x28ff7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x28ff80: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28ff80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28ff84: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x28ff84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28ff88: 0x46051002  mul.s       $f0, $f2, $f5
    ctx->pc = 0x28ff88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x28ff8c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28ff8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28ff90: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x28ff90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x28ff94: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x28ff94u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x28ff98: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x28ff98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x28ff9c: 0xc0a41b2  jal         func_2906C8
    ctx->pc = 0x28FF9Cu;
    SET_GPR_U32(ctx, 31, 0x28FFA4u);
    ctx->pc = 0x28FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF9Cu;
    // 0x28ffa0: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906C8u, 0x28FF9Cu, 0x28FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFA4u;
label_28ffa4:
    // 0x28ffa4: 0x8f82b280  lw          $v0, -0x4D80($gp)
    ctx->pc = 0x28ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947456)));
    // 0x28ffa8: 0x216182a  slt         $v1, $s0, $s6
    ctx->pc = 0x28ffa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x28ffac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28ffb0: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x28FFB0u;
    {
        const bool branch_taken_0x28ffb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFB0u;
        // 0x28ffb4: 0xaf82b280  sw          $v0, -0x4D80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffb0) {
            ctx->pc = 0x28FE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fe18;
        }
    }
    ctx->pc = 0x28FFB8u;
    // 0x28ffb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28FFB8u;
    {
        const bool branch_taken_0x28ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFB8u;
        // 0x28ffbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffb8) {
            ctx->pc = 0x28FFC8u;
            goto label_28ffc8;
        }
    }
    ctx->pc = 0x28FFC0u;
label_28ffc0:
    // 0x28ffc0: 0x26920030  addiu       $s2, $s4, 0x30
    ctx->pc = 0x28ffc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x28ffc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28ffc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28ffc8:
    // 0x28ffc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28ffc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffcc: 0xc0a379a  jal         func_28DE68
    ctx->pc = 0x28FFCCu;
    SET_GPR_U32(ctx, 31, 0x28FFD4u);
    ctx->pc = 0x28FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFCCu;
    // 0x28ffd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE68u, 0x28FFCCu, 0x28FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFD4u;
label_28ffd4:
    // 0x28ffd4: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x28ffd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_28ffd8:
    // 0x28ffd8: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x28ffd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28ffdc: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x28ffdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28ffe0: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x28ffe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28ffe4: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x28ffe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28ffe8: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x28ffe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28ffec: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x28ffecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28fff0: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x28fff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28fff4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x28fff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28fff8: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x28fff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28fffc: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x28fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x290000: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x290000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x290004: 0x3e00008  jr          $ra
    ctx->pc = 0x290004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290004u;
        // 0x290008: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29000Cu;
}
