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

// Function: flareGfx
// Address: 0x2a67b8 - 0x2a6b6c
void flareGfx_0x2a67b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("flareGfx_0x2a67b8");
#endif

    switch (ctx->pc) {
        case 0x2a6830u: goto label_2a6830;
        case 0x2a6840u: goto label_2a6840;
        case 0x2a690cu: goto label_2a690c;
        case 0x2a6970u: goto label_2a6970;
        case 0x2a6998u: goto label_2a6998;
        case 0x2a69e4u: goto label_2a69e4;
        case 0x2a69f8u: goto label_2a69f8;
        case 0x2a6a04u: goto label_2a6a04;
        case 0x2a6aa0u: goto label_2a6aa0;
        case 0x2a6af0u: goto label_2a6af0;
        case 0x2a6b18u: goto label_2a6b18;
        default: break;
    }

    ctx->pc = 0x2a67b8u;

    // 0x2a67b8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2a67b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2a67bc: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2a67bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2a67c0: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2a67c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2a67c4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2a67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a67c8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2a67c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2a67cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a67ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67d0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2a67d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2a67d4: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x2a67d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2a67d8: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2a67d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2a67dc: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2a67dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2a67e0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2a67e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2a67e4: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2a67e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2a67e8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2a67e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2a67ec: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2a67ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2a67f0: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x2a67f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2a67f4: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x2a67f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2a67f8: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2a67f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2a67fc: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2a67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2a6800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6804: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a6804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a6808: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6808u;
    {
        const bool branch_taken_0x2a6808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6808u;
        // 0x2a680c: 0x8e360004  lw          $s6, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6808) {
            ctx->pc = 0x2A6818u;
            goto label_2a6818;
        }
    }
    ctx->pc = 0x2A6810u;
    // 0x2a6810: 0xc7948e20  lwc1        $f20, -0x71E0($gp)
    ctx->pc = 0x2a6810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a6814: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2a6814u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6818:
    // 0x2a6818: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2a6818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a681c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2a681cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a6820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6824: 0x8c4606e4  lw          $a2, 0x6E4($v0)
    ctx->pc = 0x2a6824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x2a6828: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2A6828u;
    SET_GPR_U32(ctx, 31, 0x2A6830u);
    ctx->pc = 0x2A682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6828u;
    // 0x2a682c: 0x8c4506e0  lw          $a1, 0x6E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2A6828u, 0x2A6830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6830u;
label_2a6830:
    // 0x2a6830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6834: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2a6834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a6838: 0xc0ad53e  jal         func_2B54F8
    ctx->pc = 0x2A6838u;
    SET_GPR_U32(ctx, 31, 0x2A6840u);
    ctx->pc = 0x2A683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6838u;
    // 0x2a683c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54F8u, 0x2A6838u, 0x2A6840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6840u;
label_2a6840:
    // 0x2a6840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6844: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2a6844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a6848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a6848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a684c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2a684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6850: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2a6850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6854: 0x0  nop
    ctx->pc = 0x2a6854u;
    // NOP
    // 0x2a6858: 0x0  nop
    ctx->pc = 0x2a6858u;
    // NOP
    // 0x2a685c: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x2a685cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
    // 0x2a6860: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2a6860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6864: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2a6864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a6868: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2a6868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a686c: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x2a686cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6870: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a6870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6874: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a6874u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a6878: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a6878u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a687c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2a687cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a6880: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2a6880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a6884: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2A6884u;
    {
        const bool branch_taken_0x2a6884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6884u;
        // 0x2a6888: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6884) {
            ctx->pc = 0x2A68D4u;
            goto label_2a68d4;
        }
    }
    ctx->pc = 0x2A688Cu;
    // 0x2a688c: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x2a688cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6890: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2A6890u;
    {
        const bool branch_taken_0x2a6890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6890) {
            ctx->pc = 0x2A68D4u;
            goto label_2a68d4;
        }
    }
    ctx->pc = 0x2A6898u;
    // 0x2a6898: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a6898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a689c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a689cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a68a0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2a68a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a68a4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2A68A4u;
    {
        const bool branch_taken_0x2a68a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a68a4) {
            ctx->pc = 0x2A68D4u;
            goto label_2a68d4;
        }
    }
    ctx->pc = 0x2A68ACu;
    // 0x2a68ac: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x2a68acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a68b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2A68B0u;
    {
        const bool branch_taken_0x2a68b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a68b0) {
            ctx->pc = 0x2A68D4u;
            goto label_2a68d4;
        }
    }
    ctx->pc = 0x2A68B8u;
    // 0x2a68b8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2a68b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a68bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A68BCu;
    {
        const bool branch_taken_0x2a68bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a68bc) {
            ctx->pc = 0x2A68D4u;
            goto label_2a68d4;
        }
    }
    ctx->pc = 0x2A68C4u;
    // 0x2a68c4: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x2a68c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a68c8: 0x0  nop
    ctx->pc = 0x2a68c8u;
    // NOP
    // 0x2a68cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A68CCu;
    {
        const bool branch_taken_0x2a68cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a68cc) {
            ctx->pc = 0x2A68D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A68CCu;
            // 0x2a68d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A68D4u;
            goto label_2a68d4;
        }
    }
    ctx->pc = 0x2A68D4u;
label_2a68d4:
    // 0x2a68d4: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2A68D4u;
    {
        const bool branch_taken_0x2a68d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68D4u;
        // 0x2a68d8: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68d4) {
            ctx->pc = 0x2A6B2Cu;
            goto label_2a6b2c;
        }
    }
    ctx->pc = 0x2A68DCu;
    // 0x2a68dc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a68dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a68e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2a68e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a68e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a68e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2a68e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a68e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a68ec: 0x0  nop
    ctx->pc = 0x2a68ecu;
    // NOP
    // 0x2a68f0: 0x0  nop
    ctx->pc = 0x2a68f0u;
    // NOP
    // 0x2a68f4: 0x460c0084  c1          0xC0084
    ctx->pc = 0x2a68f4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a68f8: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x2a68f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a68fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A68FCu;
    {
        const bool branch_taken_0x2a68fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a68fc) {
            ctx->pc = 0x2A6910u;
            goto label_2a6910;
        }
    }
    ctx->pc = 0x2A6904u;
    // 0x2a6904: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A6904u;
    SET_GPR_U32(ctx, 31, 0x2A690Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A6904u, 0x2A690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A690Cu;
label_2a690c:
    // 0x2a690c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a690cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2a6910:
    // 0x2a6910: 0xc7818e24  lwc1        $f1, -0x71DC($gp)
    ctx->pc = 0x2a6910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6914: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a691c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a691cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a6920: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a6920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6924: 0x0  nop
    ctx->pc = 0x2a6924u;
    // NOP
    // 0x2a6928: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6928u;
    {
        const bool branch_taken_0x2a6928 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6928u;
        // 0x2a692c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6928) {
            ctx->pc = 0x2A6934u;
            goto label_2a6934;
        }
    }
    ctx->pc = 0x2A6930u;
    // 0x2a6930: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x2a6930u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_2a6934:
    // 0x2a6934: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2a6934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2a6938: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6938u;
    {
        const bool branch_taken_0x2a6938 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6938u;
        // 0x2a693c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6938) {
            ctx->pc = 0x2A6950u;
            goto label_2a6950;
        }
    }
    ctx->pc = 0x2A6940u;
    // 0x2a6940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a6944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a6948: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6948u;
    {
        const bool branch_taken_0x2a6948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6948u;
        // 0x2a694c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6948) {
            ctx->pc = 0x2A6968u;
            goto label_2a6968;
        }
    }
    ctx->pc = 0x2A6950u;
label_2a6950:
    // 0x2a6950: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a6950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a6954: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a695c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a695cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a6960: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a6960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a6964: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2a6964u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2a6968:
    // 0x2a6968: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2A6968u;
    SET_GPR_U32(ctx, 31, 0x2A6970u);
    ctx->pc = 0x2A696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6968u;
    // 0x2a696c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2A6968u, 0x2A6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6970u;
label_2a6970:
    // 0x2a6970: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2a6970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2a6974: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a6974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a6978: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x2a6978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x2a697c: 0x24a3a2b0  addiu       $v1, $a1, -0x5D50
    ctx->pc = 0x2a697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943408));
    // 0x2a6980: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x2a6980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a6984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6988: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a6988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a698c: 0x18800067  blez        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2A698Cu;
    {
        const bool branch_taken_0x2a698c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A698Cu;
        // 0x2a6990: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a698c) {
            ctx->pc = 0x2A6B2Cu;
            goto label_2a6b2c;
        }
    }
    ctx->pc = 0x2A6994u;
    // 0x2a6994: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x2a6994u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_2a6998:
    // 0x2a6998: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a6998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a699c: 0x241100f4  addiu       $s1, $zero, 0xF4
    ctx->pc = 0x2a699cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x2a69a0: 0x2d18818  mult        $s1, $s6, $s1
    ctx->pc = 0x2a69a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2a69a4: 0x72821018  mult1       $v0, $s4, $v0
    ctx->pc = 0x2a69a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a69a8: 0x24b0a2b0  addiu       $s0, $a1, -0x5D50
    ctx->pc = 0x2a69a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943408));
    // 0x2a69ac: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2a69acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2a69b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a69b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a69b4: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x2a69b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a69b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a69bc: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2a69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a69c0: 0xc46c007c  lwc1        $f12, 0x7C($v1)
    ctx->pc = 0x2a69c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a69c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a69c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a69c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69cc: 0xc4940084  lwc1        $f20, 0x84($a0)
    ctx->pc = 0x2a69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a69d0: 0xc4550080  lwc1        $f21, 0x80($v0)
    ctx->pc = 0x2a69d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a69d4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2a69d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a69d8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a69d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a69dc: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2A69DCu;
    SET_GPR_U32(ctx, 31, 0x2A69E4u);
    ctx->pc = 0x2A69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69DCu;
    // 0x2a69e0: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2A69DCu, 0x2A69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69E4u;
label_2a69e4:
    // 0x2a69e4: 0x29e00  sll         $s3, $v0, 24
    ctx->pc = 0x2a69e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a69e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a69e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a69ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a69f0: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2A69F0u;
    SET_GPR_U32(ctx, 31, 0x2A69F8u);
    ctx->pc = 0x2A69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69F0u;
    // 0x2a69f4: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2A69F0u, 0x2A69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69F8u;
label_2a69f8:
    // 0x2a69f8: 0x29200  sll         $s2, $v0, 8
    ctx->pc = 0x2a69f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2a69fc: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2A69FCu;
    SET_GPR_U32(ctx, 31, 0x2A6A04u);
    ctx->pc = 0x2A6A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69FCu;
    // 0x2a6a00: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2A69FCu, 0x2A6A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A04u;
label_2a6a04:
    // 0x2a6a04: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2a6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2a6a08: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6a0c: 0x246499f0  addiu       $a0, $v1, -0x6610
    ctx->pc = 0x2a6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x2a6a10: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2a6a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6a14: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2a6a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a6a18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a6a18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a6a1c: 0xc4840024  lwc1        $f4, 0x24($a0)
    ctx->pc = 0x2a6a1cu;
    { uint32_t bits = FAST_READ32(0x329A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a6a20: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2a6a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2a6a24: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x2a6a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x2a6a28: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x2a6a28u;
    { uint32_t bits = FAST_READ32(0x329A00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6a2c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a6a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a6a30: 0xc4620104  lwc1        $f2, 0x104($v1)
    ctx->pc = 0x2a6a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6a34: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x2a6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2a6a38: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2a6a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2a6a3c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a6a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a6a40: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a6a40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a6a44: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2a6a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a48: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2a6a48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a6a4c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a6a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6a50: 0x0  nop
    ctx->pc = 0x2a6a50u;
    // NOP
    // 0x2a6a54: 0x0  nop
    ctx->pc = 0x2a6a54u;
    // NOP
    // 0x2a6a58: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x2a6a58u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[2];
    // 0x2a6a5c: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x2a6a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6a60: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2a6a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2a6a64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a6a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a6a68: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a6a68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a6a6c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a6a6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a6a70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2a6a74: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x2a6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a6a78: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2a6a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2a6a7c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x2a6a7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2a6a80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a6a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a6a84: 0x2729825  or          $s3, $s3, $s2
    ctx->pc = 0x2a6a84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x2a6a88: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2a6a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6a8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a6a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a6a90: 0x46033580  add.s       $f22, $f6, $f3
    ctx->pc = 0x2a6a90u;
    ctx->f[22] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x2a6a94: 0x46050d02  mul.s       $f20, $f1, $f5
    ctx->pc = 0x2a6a94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2a6a98: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A6A98u;
    SET_GPR_U32(ctx, 31, 0x2A6AA0u);
    ctx->pc = 0x2A6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A98u;
    // 0x2a6a9c: 0x460405c0  add.s       $f23, $f0, $f4 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A6A98u, 0x2A6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AA0u;
label_2a6aa0:
    // 0x2a6aa0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2a6aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a6aa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6AA4u;
    {
        const bool branch_taken_0x2a6aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AA4u;
        // 0x2a6aa8: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6aa4) {
            ctx->pc = 0x2A6AB8u;
            goto label_2a6ab8;
        }
    }
    ctx->pc = 0x2A6AACu;
    // 0x2a6aac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a6aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a6ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6ab4: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x2a6ab4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2a6ab8:
    // 0x2a6ab8: 0x241000f4  addiu       $s0, $zero, 0xF4
    ctx->pc = 0x2a6ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x2a6abc: 0x26f1a2b0  addiu       $s1, $s7, -0x5D50
    ctx->pc = 0x2a6abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943408));
    // 0x2a6ac0: 0x2d08018  mult        $s0, $s6, $s0
    ctx->pc = 0x2a6ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2a6ac4: 0x27c4a5b8  addiu       $a0, $fp, -0x5A48
    ctx->pc = 0x2a6ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944184));
    // 0x2a6ac8: 0xc7948e28  lwc1        $f20, -0x71D8($gp)
    ctx->pc = 0x2a6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a6acc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a6accu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a6ad0: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x2a6ad0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2a6ad4: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x2a6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2a6ad8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a6adc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2a6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a6ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a6ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6ae8: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A6AE8u;
    SET_GPR_U32(ctx, 31, 0x2A6AF0u);
    ctx->pc = 0x2A6AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AE8u;
    // 0x2a6aec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A6AE8u, 0x2A6AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AF0u;
label_2a6af0:
    // 0x2a6af0: 0x4615b380  add.s       $f14, $f22, $f21
    ctx->pc = 0x2a6af0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x2a6af4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a6af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6af8: 0x4614bbc0  add.s       $f15, $f23, $f20
    ctx->pc = 0x2a6af8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x2a6afc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b00: 0x4615b301  sub.s       $f12, $f22, $f21
    ctx->pc = 0x2a6b00u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x2a6b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b08: 0x4614bb41  sub.s       $f13, $f23, $f20
    ctx->pc = 0x2a6b08u;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x2a6b0c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2a6b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2a6b10: 0xc0ae37e  jal         func_2B8DF8
    ctx->pc = 0x2A6B10u;
    SET_GPR_U32(ctx, 31, 0x2A6B18u);
    ctx->pc = 0x2A6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B10u;
    // 0x2a6b14: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8DF8u, 0x2A6B10u, 0x2A6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B18u;
label_2a6b18:
    // 0x2a6b18: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2a6b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2a6b1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a6b20: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2a6b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a6b24: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x2A6B24u;
    {
        const bool branch_taken_0x2a6b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B24u;
        // 0x2a6b28: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b24) {
            ctx->pc = 0x2A6998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6998;
        }
    }
    ctx->pc = 0x2A6B2Cu;
label_2a6b2c:
    // 0x2a6b2c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2a6b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a6b30: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x2a6b30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a6b34: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x2a6b34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a6b38: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2a6b38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a6b3c: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x2a6b3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a6b40: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2a6b40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6b44: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2a6b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a6b48: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2a6b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a6b4c: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2a6b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a6b50: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2a6b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a6b54: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x2a6b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a6b58: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x2a6b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a6b5c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2a6b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a6b60: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2a6b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a6b64: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B64u;
        // 0x2a6b68: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6B6Cu;
}
