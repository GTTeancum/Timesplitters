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

// Function: propCalculateWalls
// Address: 0x267338 - 0x2675b8
void propCalculateWalls_0x267338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propCalculateWalls_0x267338");
#endif

    switch (ctx->pc) {
        case 0x2673a0u: goto label_2673a0;
        case 0x2673d4u: goto label_2673d4;
        case 0x2673f0u: goto label_2673f0;
        case 0x26745cu: goto label_26745c;
        case 0x267480u: goto label_267480;
        case 0x26748cu: goto label_26748c;
        case 0x267498u: goto label_267498;
        case 0x267550u: goto label_267550;
        default: break;
    }

    ctx->pc = 0x267338u;

    // 0x267338: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x267338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x26733c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x26733cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x267340: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x267340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x267344: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x267344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x267348: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x267348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x26734c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x26734cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267350: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x267350u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x267354: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x267354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267358: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x267358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x26735c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x26735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x267360: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x267360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x267364: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x267364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x267368: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x267368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x26736c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x26736cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x267370: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x267370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x267374: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x267374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x267378: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x267378u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x26737c: 0xc456f8f8  lwc1        $f22, -0x708($v0)
    ctx->pc = 0x26737cu;
    { uint32_t bits = FAST_READ32(0x3AF8F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x267380: 0x8e6401e4  lw          $a0, 0x1E4($s3)
    ctx->pc = 0x267380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 484)));
    // 0x267384: 0x1080007e  beqz        $a0, . + 4 + (0x7E << 2)
    ctx->pc = 0x267384u;
    {
        const bool branch_taken_0x267384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x267388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267384u;
        // 0x267388: 0xc475f8fc  lwc1        $f21, -0x704($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267384) {
            ctx->pc = 0x267580u;
            goto label_267580;
        }
    }
    ctx->pc = 0x26738Cu;
    // 0x26738c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26738cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x267390: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x267390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x267394: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x267394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x267398: 0xc099b92  jal         func_266E48
    ctx->pc = 0x267398u;
    SET_GPR_U32(ctx, 31, 0x2673A0u);
    ctx->pc = 0x26739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267398u;
    // 0x26739c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266E48u, 0x267398u, 0x2673A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2673A0u;
label_2673a0:
    // 0x2673a0: 0xc66f004c  lwc1        $f15, 0x4C($s3)
    ctx->pc = 0x2673a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2673a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2673a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673a8: 0xc78083d4  lwc1        $f0, -0x7C2C($gp)
    ctx->pc = 0x2673a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2673ac: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2673acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2673b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2673b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2673b4: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2673b4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2673b8: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x2673b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2673bc: 0xc66d0034  lwc1        $f13, 0x34($s3)
    ctx->pc = 0x2673bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2673c0: 0x0  nop
    ctx->pc = 0x2673c0u;
    // NOP
    // 0x2673c4: 0x0  nop
    ctx->pc = 0x2673c4u;
    // NOP
    // 0x2673c8: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x2673c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x2673cc: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x2673CCu;
    SET_GPR_U32(ctx, 31, 0x2673D4u);
    ctx->pc = 0x2673D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2673CCu;
    // 0x2673d0: 0xc66e0038  lwc1        $f14, 0x38($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x2673CCu, 0x2673D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2673D4u;
label_2673d4:
    // 0x2673d4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2673d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2673d8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2673d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2673dc: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2673DCu;
    {
        const bool branch_taken_0x2673dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2673E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673DCu;
        // 0x2673e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673dc) {
            ctx->pc = 0x26752Cu;
            goto label_26752c;
        }
    }
    ctx->pc = 0x2673E4u;
    // 0x2673e4: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x2673e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2673e8: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x2673e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2673ec: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2673ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2673f0:
    // 0x2673f0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2673f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2673f4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2673f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2673f8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2673f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2673fc: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x2673fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x267400: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x267400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267404: 0x8e6201e4  lw          $v0, 0x1E4($s3)
    ctx->pc = 0x267404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 484)));
    // 0x267408: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x267408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26740c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x26740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x267410: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x267410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267414: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x267414u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267418: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x267418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26741c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x26741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267420: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x267420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x267424: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x267424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267428: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x267428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26742c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x26742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267430: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
    ctx->pc = 0x267430u;
    {
        const bool branch_taken_0x267430 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x267434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267430u;
        // 0x267434: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267430) {
            ctx->pc = 0x267480u;
            goto label_267480;
        }
    }
    ctx->pc = 0x267438u;
    // 0x267438: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x267438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x26743c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26743cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267440: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x267440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x267444: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x267444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x267448: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26744c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x26744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x267450: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x267450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x267454: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x267454u;
    SET_GPR_U32(ctx, 31, 0x26745Cu);
    ctx->pc = 0x267458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267454u;
    // 0x267458: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x267454u, 0x26745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26745Cu;
label_26745c:
    // 0x26745c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x26745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x267460: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x267460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267464: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x267464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x267468: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x267468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x26746c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267470: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x267470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x267474: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x267474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x267478: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x267478u;
    SET_GPR_U32(ctx, 31, 0x267480u);
    ctx->pc = 0x26747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267478u;
    // 0x26747c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x267478u, 0x267480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267480u;
label_267480:
    // 0x267480: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267484: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x267484u;
    SET_GPR_U32(ctx, 31, 0x26748Cu);
    ctx->pc = 0x267488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267484u;
    // 0x267488: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x267484u, 0x26748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26748Cu;
label_26748c:
    // 0x26748c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267490: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x267490u;
    SET_GPR_U32(ctx, 31, 0x267498u);
    ctx->pc = 0x267494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267490u;
    // 0x267494: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x267490u, 0x267498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267498u;
label_267498:
    // 0x267498: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x267498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26749c: 0x24030137  addiu       $v1, $zero, 0x137
    ctx->pc = 0x26749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x2674a0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2674a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2674a4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2674a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2674a8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2674a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2674ac: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x2674acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2674b0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x2674b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2674b4: 0xe6230018  swc1        $f3, 0x18($s1)
    ctx->pc = 0x2674b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2674b8: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x2674b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2674bc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2674bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2674c0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2674c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2674c4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2674c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2674c8: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x2674c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2674cc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2674ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2674d0: 0x46140080  add.s       $f2, $f0, $f20
    ctx->pc = 0x2674d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2674d4: 0xe6220020  swc1        $f2, 0x20($s1)
    ctx->pc = 0x2674d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2674d8: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x2674d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2674dc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2674dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2674e0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2674E0u;
    {
        const bool branch_taken_0x2674e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2674E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674E0u;
        // 0x2674e4: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674e0) {
            ctx->pc = 0x267508u;
            goto label_267508;
        }
    }
    ctx->pc = 0x2674E8u;
    // 0x2674e8: 0x46161834  c.lt.s      $f3, $f22
    ctx->pc = 0x2674e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2674ec: 0x0  nop
    ctx->pc = 0x2674ecu;
    // NOP
    // 0x2674f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2674F0u;
    {
        const bool branch_taken_0x2674f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2674f0) {
            ctx->pc = 0x2674F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2674F0u;
            // 0x2674f4: 0x46001d86  mov.s       $f22, $f3 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2674F8u;
            goto label_2674f8;
        }
    }
    ctx->pc = 0x2674F8u;
label_2674f8:
    // 0x2674f8: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x2674f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2674fc: 0x0  nop
    ctx->pc = 0x2674fcu;
    // NOP
    // 0x267500: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x267500u;
    {
        const bool branch_taken_0x267500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267500) {
            ctx->pc = 0x267504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267500u;
            // 0x267504: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x267508u;
            goto label_267508;
        }
    }
    ctx->pc = 0x267508u;
label_267508:
    // 0x267508: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x267508u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26750c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x26750cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267510: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x267510u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x267514: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x267514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x267518: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x267518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26751c: 0x5600ffb4  bnel        $s0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x26751Cu;
    {
        const bool branch_taken_0x26751c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26751c) {
            ctx->pc = 0x267520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26751Cu;
            // 0x267520: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2673F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2673f0;
        }
    }
    ctx->pc = 0x267524u;
    // 0x267524: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267524u;
    {
        const bool branch_taken_0x267524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267524u;
        // 0x267528: 0x24020137  addiu       $v0, $zero, 0x137 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267524) {
            ctx->pc = 0x267534u;
            goto label_267534;
        }
    }
    ctx->pc = 0x26752Cu;
label_26752c:
    // 0x26752c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x267530: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x267530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
label_267534:
    // 0x267534: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x267534u;
    {
        const bool branch_taken_0x267534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x267538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267534u;
        // 0x267538: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267534) {
            ctx->pc = 0x267584u;
            goto label_267584;
        }
    }
    ctx->pc = 0x26753Cu;
    // 0x26753c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x26753cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x267540: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x267540u;
    {
        const bool branch_taken_0x267540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x267544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267540u;
        // 0x267544: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267540) {
            ctx->pc = 0x267584u;
            goto label_267584;
        }
    }
    ctx->pc = 0x267548u;
    // 0x267548: 0x8e6601e4  lw          $a2, 0x1E4($s3)
    ctx->pc = 0x267548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 484)));
    // 0x26754c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26754cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267550:
    // 0x267550: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x267550u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x267554: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x267554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x267558: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x267558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x26755c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267560: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x267560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267564: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x267564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x267568: 0xe4550010  swc1        $f21, 0x10($v0)
    ctx->pc = 0x267568u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x26756c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x26756cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267570: 0xe4560018  swc1        $f22, 0x18($v0)
    ctx->pc = 0x267570u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x267574: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x267574u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x267578: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x267578u;
    {
        const bool branch_taken_0x267578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267578u;
        // 0x26757c: 0xe4550020  swc1        $f21, 0x20($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267578) {
            ctx->pc = 0x267550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267550;
        }
    }
    ctx->pc = 0x267580u;
label_267580:
    // 0x267580: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x267580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_267584:
    // 0x267584: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x267584u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x267588: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x267588u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26758c: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x26758cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x267590: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x267590u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x267594: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x267594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x267598: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x267598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26759c: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x26759cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2675a0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2675a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2675a4: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2675a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2675a8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2675a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2675ac: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2675acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2675b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2675B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2675B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675B0u;
        // 0x2675b4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2675B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2675B8u;
}
