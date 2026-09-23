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

// Function: frontfxRenderLayer
// Address: 0x22b340 - 0x22b5f0
void frontfxRenderLayer_0x22b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxRenderLayer_0x22b340");
#endif

    switch (ctx->pc) {
        case 0x22b3a0u: goto label_22b3a0;
        case 0x22b3b0u: goto label_22b3b0;
        case 0x22b3c0u: goto label_22b3c0;
        case 0x22b3d0u: goto label_22b3d0;
        case 0x22b420u: goto label_22b420;
        case 0x22b488u: goto label_22b488;
        case 0x22b490u: goto label_22b490;
        case 0x22b4ecu: goto label_22b4ec;
        case 0x22b564u: goto label_22b564;
        case 0x22b5b4u: goto label_22b5b4;
        default: break;
    }

    ctx->pc = 0x22b340u;

    // 0x22b340: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22b344: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x22b344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22b348: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x22b348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x22b34c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b350: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x22b350u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x22b354: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x22b354u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x22b358: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22b358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22b35c: 0x46147302  mul.s       $f12, $f14, $f20
    ctx->pc = 0x22b35cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x22b360: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x22b360u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x22b364: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x22b364u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x22b368: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22b368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b36c: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x22b36cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x22b370: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x22b370u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x22b374: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x22b374u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22b378: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x22b378u;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x22b37c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22b37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22b380: 0x46008d46  mov.s       $f21, $f17
    ctx->pc = 0x22b380u;
    ctx->f[21] = FPU_MOV_S(ctx->f[17]);
    // 0x22b384: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22b384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22b388: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x22b388u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x22b38c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22b390: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22b394: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22b398: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x22B398u;
    SET_GPR_U32(ctx, 31, 0x22B3A0u);
    ctx->pc = 0x22B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B398u;
    // 0x22b39c: 0xffb40050  sd          $s4, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x22B398u, 0x22B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3A0u;
label_22b3a0:
    // 0x22b3a0: 0x8f929fbc  lw          $s2, -0x6044($gp)
    ctx->pc = 0x22b3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942652)));
    // 0x22b3a4: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x22b3a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x22b3a8: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x22B3A8u;
    SET_GPR_U32(ctx, 31, 0x22B3B0u);
    ctx->pc = 0x22B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3A8u;
    // 0x22b3ac: 0x28e00  sll         $s1, $v0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x22B3A8u, 0x22B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3B0u;
label_22b3b0:
    // 0x22b3b0: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x22b3b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x22b3b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22b3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b3b8: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x22B3B8u;
    SET_GPR_U32(ctx, 31, 0x22B3C0u);
    ctx->pc = 0x22B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3B8u;
    // 0x22b3bc: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x22B3B8u, 0x22B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3C0u;
label_22b3c0:
    // 0x22b3c0: 0x4614bb02  mul.s       $f12, $f23, $f20
    ctx->pc = 0x22b3c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x22b3c4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x22b3c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b3c8: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x22B3C8u;
    SET_GPR_U32(ctx, 31, 0x22B3D0u);
    ctx->pc = 0x22B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3C8u;
    // 0x22b3cc: 0x108200  sll         $s0, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x22B3C8u, 0x22B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3D0u;
label_22b3d0:
    // 0x22b3d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b3d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b3d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22b3dc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x22b3dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x22b3e0: 0x16630044  bne         $s3, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x22B3E0u;
    {
        const bool branch_taken_0x22b3e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x22B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3E0u;
        // 0x22b3e4: 0x230a825  or          $s5, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3e0) {
            ctx->pc = 0x22B4F4u;
            goto label_22b4f4;
        }
    }
    ctx->pc = 0x22B3E8u;
    // 0x22b3e8: 0x3c014260  lui         $at, 0x4260
    ctx->pc = 0x22b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16992 << 16));
    // 0x22b3ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b3f0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x22b3f0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b3f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22b3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b3f8: 0x8f849f98  lw          $a0, -0x6068($gp)
    ctx->pc = 0x22b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
    // 0x22b3fc: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x22b3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x22b400: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x22b400u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b404: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22b404u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22b408: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22b40c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x22b40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x22b410: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22b414: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x22b414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x22b418: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22B418u;
    SET_GPR_U32(ctx, 31, 0x22B420u);
    ctx->pc = 0x22B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B418u;
    // 0x22b41c: 0x24120028  addiu       $s2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22B418u, 0x22B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B420u;
label_22b420:
    // 0x22b420: 0x8f869fb8  lw          $a2, -0x6048($gp)
    ctx->pc = 0x22b420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942648)));
    // 0x22b424: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22b424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b428: 0x8f829f98  lw          $v0, -0x6068($gp)
    ctx->pc = 0x22b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
    // 0x22b42c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b430: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x22b434: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b438: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x22b438u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b43c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b440: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x22b440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22b444: 0x8f83b498  lw          $v1, -0x4B68($gp)
    ctx->pc = 0x22b444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22b448: 0x4614cd02  mul.s       $f20, $f25, $f20
    ctx->pc = 0x22b448u;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x22b44c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22b44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b450: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x22b450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22b454: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b458: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x22b458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x22b45c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22b460: 0x944b0002  lhu         $t3, 0x2($v0)
    ctx->pc = 0x22b460u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x22b464: 0x944a0000  lhu         $t2, 0x0($v0)
    ctx->pc = 0x22b464u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b468: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22b46c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x22b46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x22b470: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x22b470u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x22b474: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x22b474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x22b478: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x22b478u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x22b47c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x22b47cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x22b480: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22B480u;
    SET_GPR_U32(ctx, 31, 0x22B488u);
    ctx->pc = 0x22B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B480u;
    // 0x22b484: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22B480u, 0x22B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B488u;
label_22b488:
    // 0x22b488: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22B488u;
    SET_GPR_U32(ctx, 31, 0x22B490u);
    ctx->pc = 0x22B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B488u;
    // 0x22b48c: 0x8f849f9c  lw          $a0, -0x6064($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22B488u, 0x22B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B490u;
label_22b490:
    // 0x22b490: 0x8f849fb8  lw          $a0, -0x6048($gp)
    ctx->pc = 0x22b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942648)));
    // 0x22b494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b498: 0x8f829f9c  lw          $v0, -0x6064($gp)
    ctx->pc = 0x22b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
    // 0x22b49c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22b49cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b4a0: 0x8f83b498  lw          $v1, -0x4B68($gp)
    ctx->pc = 0x22b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22b4a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22b4a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b4a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b4ac: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x22b4acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22b4b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22b4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b4b4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x22b4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22b4b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b4b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b4bc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x22b4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22b4c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22b4c4: 0x944b0002  lhu         $t3, 0x2($v0)
    ctx->pc = 0x22b4c4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x22b4c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b4c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22b4cc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x22b4ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x22b4d0: 0x944a0000  lhu         $t2, 0x0($v0)
    ctx->pc = 0x22b4d0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b4d4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x22b4d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x22b4d8: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x22b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x22b4dc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x22b4dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x22b4e0: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x22b4e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x22b4e4: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22B4E4u;
    SET_GPR_U32(ctx, 31, 0x22B4ECu);
    ctx->pc = 0x22B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B4E4u;
    // 0x22b4e8: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22B4E4u, 0x22B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B4ECu;
label_22b4ec:
    // 0x22b4ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x22B4ECu;
    {
        const bool branch_taken_0x22b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4ECu;
        // 0x22b4f0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4ec) {
            ctx->pc = 0x22B5B8u;
            goto label_22b5b8;
        }
    }
    ctx->pc = 0x22B4F4u;
label_22b4f4:
    // 0x22b4f4: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x22b4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x22b4f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22b4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b4fc: 0x44921800  mtc1        $s2, $f3
    ctx->pc = 0x22b4fcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22b500: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22b500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x22b504: 0x3c014260  lui         $at, 0x4260
    ctx->pc = 0x22b504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16992 << 16));
    // 0x22b508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b50c: 0xc7829fb8  lwc1        $f2, -0x6048($gp)
    ctx->pc = 0x22b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b510: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22b510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22b514: 0x4601c842  mul.s       $f1, $f25, $f1
    ctx->pc = 0x22b514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[1]);
    // 0x22b518: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22b518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22b51c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x22b51cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x22b520: 0x2442d1a8  addiu       $v0, $v0, -0x2E58
    ctx->pc = 0x22b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955432));
    // 0x22b524: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x22b528: 0x46011100  add.s       $f4, $f2, $f1
    ctx->pc = 0x22b528u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x22b52c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22b52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22b530: 0x46001940  add.s       $f5, $f3, $f0
    ctx->pc = 0x22b530u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x22b534: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x22b534u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x22b538: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x22b538u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x22b53c: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b53cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22b540: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x22b540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x22b544: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22b548: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x22b548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x22b54c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b54cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22b550: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x22b550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x22b554: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22b554u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22b558: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x22b558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x22b55c: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22B55Cu;
    SET_GPR_U32(ctx, 31, 0x22B564u);
    ctx->pc = 0x22B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B55Cu;
    // 0x22b560: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22B55Cu, 0x22B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B564u;
label_22b564:
    // 0x22b564: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22b568: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x22b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22b56c: 0x8f86b498  lw          $a2, -0x4B68($gp)
    ctx->pc = 0x22b56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22b570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b574: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22b574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22b578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b57c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x22b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22b580: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22b580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b584: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22b584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22b588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b58c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b58cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b594: 0x944b0002  lhu         $t3, 0x2($v0)
    ctx->pc = 0x22b594u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x22b598: 0x944a0000  lhu         $t2, 0x0($v0)
    ctx->pc = 0x22b598u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b59c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x22b59cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x22b5a0: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x22b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x22b5a4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x22b5a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x22b5a8: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x22b5a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x22b5ac: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22B5ACu;
    SET_GPR_U32(ctx, 31, 0x22B5B4u);
    ctx->pc = 0x22B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5ACu;
    // 0x22b5b0: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22B5ACu, 0x22B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5B4u;
label_22b5b4:
    // 0x22b5b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22b5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22b5b8:
    // 0x22b5b8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22b5b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22b5bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22b5bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b5c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22b5c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b5c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22b5c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b5c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22b5c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b5cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22b5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b5d0: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x22b5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x22b5d4: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x22b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x22b5d8: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x22b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22b5dc: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x22b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22b5e0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x22b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22b5e4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x22b5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x22B5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5E8u;
        // 0x22b5ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B5F0u;
}
