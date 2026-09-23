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

// Function: specialfxTimeSplitterRadiusGfx
// Address: 0x2ab340 - 0x2ab870
void specialfxTimeSplitterRadiusGfx_0x2ab340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxTimeSplitterRadiusGfx_0x2ab340");
#endif

    switch (ctx->pc) {
        case 0x2ab3c4u: goto label_2ab3c4;
        case 0x2ab3d0u: goto label_2ab3d0;
        case 0x2ab4c8u: goto label_2ab4c8;
        case 0x2ab528u: goto label_2ab528;
        case 0x2ab534u: goto label_2ab534;
        case 0x2ab54cu: goto label_2ab54c;
        case 0x2ab55cu: goto label_2ab55c;
        case 0x2ab56cu: goto label_2ab56c;
        case 0x2ab574u: goto label_2ab574;
        case 0x2ab59cu: goto label_2ab59c;
        case 0x2ab77cu: goto label_2ab77c;
        case 0x2ab7ccu: goto label_2ab7cc;
        case 0x2ab7e8u: goto label_2ab7e8;
        case 0x2ab800u: goto label_2ab800;
        case 0x2ab808u: goto label_2ab808;
        case 0x2ab810u: goto label_2ab810;
        default: break;
    }

    ctx->pc = 0x2ab340u;

    // 0x2ab340: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2ab340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2ab344: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ab344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ab348: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x2ab348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x2ab34c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ab34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2ab350: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2ab350u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab354: 0x2e28018  mult        $s0, $s7, $v0
    ctx->pc = 0x2ab354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ab358: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2ab358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2ab35c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ab35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ab360: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x2ab360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x2ab364: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2ab364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2ab368: 0x2452c268  addiu       $s2, $v0, -0x3D98
    ctx->pc = 0x2ab368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951528));
    // 0x2ab36c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2ab36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2ab370: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ab370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab374: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x2ab374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2ab378: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2ab378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2ab37c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2ab37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2ab380: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2ab380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2ab384: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2ab384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2ab388: 0xe7bf0158  swc1        $f31, 0x158($sp)
    ctx->pc = 0x2ab388u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2ab38c: 0xe7be0150  swc1        $f30, 0x150($sp)
    ctx->pc = 0x2ab38cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2ab390: 0xe7bd0148  swc1        $f29, 0x148($sp)
    ctx->pc = 0x2ab390u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2ab394: 0xe7bc0140  swc1        $f28, 0x140($sp)
    ctx->pc = 0x2ab394u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2ab398: 0xe7bb0138  swc1        $f27, 0x138($sp)
    ctx->pc = 0x2ab398u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2ab39c: 0xe7ba0130  swc1        $f26, 0x130($sp)
    ctx->pc = 0x2ab39cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2ab3a0: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x2ab3a0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2ab3a4: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x2ab3a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2ab3a8: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x2ab3a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2ab3ac: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x2ab3acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2ab3b0: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2ab3b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2ab3b4: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2ab3b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2ab3b8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2ab3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab3bc: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2AB3BCu;
    SET_GPR_U32(ctx, 31, 0x2AB3C4u);
    ctx->pc = 0x2AB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3BCu;
    // 0x2ab3c0: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2AB3BCu, 0x2AB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB3C4u;
label_2ab3c4:
    // 0x2ab3c4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2ab3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2ab3c8: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2AB3C8u;
    SET_GPR_U32(ctx, 31, 0x2AB3D0u);
    ctx->pc = 0x2AB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3C8u;
    // 0x2ab3cc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2AB3C8u, 0x2AB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB3D0u;
label_2ab3d0:
    // 0x2ab3d0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2ab3d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3d4: 0xc7818ea0  lwc1        $f1, -0x7160($gp)
    ctx->pc = 0x2ab3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab3d8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2ab3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2ab3dc: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x2ab3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab3e0: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2ab3e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab3e4: 0x0  nop
    ctx->pc = 0x2ab3e4u;
    // NOP
    // 0x2ab3e8: 0x450200e8  bc1fl       . + 4 + (0xE8 << 2)
    ctx->pc = 0x2AB3E8u;
    {
        const bool branch_taken_0x2ab3e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab3e8) {
            ctx->pc = 0x2AB3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB3E8u;
            // 0x2ab3ec: 0x2410005c  addiu       $s0, $zero, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB78Cu;
            goto label_2ab78c;
        }
    }
    ctx->pc = 0x2AB3F0u;
    // 0x2ab3f0: 0xc7808ea4  lwc1        $f0, -0x715C($gp)
    ctx->pc = 0x2ab3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab3f4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2ab3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab3f8: 0x0  nop
    ctx->pc = 0x2ab3f8u;
    // NOP
    // 0x2ab3fc: 0x450000e2  bc1f        . + 4 + (0xE2 << 2)
    ctx->pc = 0x2AB3FCu;
    {
        const bool branch_taken_0x2ab3fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB3FCu;
        // 0x2ab400: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab3fc) {
            ctx->pc = 0x2AB788u;
            goto label_2ab788;
        }
    }
    ctx->pc = 0x2AB404u;
    // 0x2ab404: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2ab404u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2ab408: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ab408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ab40c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab414: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab418: 0x202b021  addu        $s6, $s0, $v0
    ctx->pc = 0x2ab418u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ab41c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2ab41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2ab420: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ab420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ab424: 0x46001e82  mul.s       $f26, $f3, $f0
    ctx->pc = 0x2ab424u;
    ctx->f[26] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ab428: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ab428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ab42c: 0x24515c60  addiu       $s1, $v0, 0x5C60
    ctx->pc = 0x2ab42cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x2ab430: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x2ab430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2ab434: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x2ab434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2ab438: 0x203a021  addu        $s4, $s0, $v1
    ctx->pc = 0x2ab438u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ab43c: 0x461ad002  mul.s       $f0, $f26, $f26
    ctx->pc = 0x2ab43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x2ab440: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x2ab440u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ab444: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2ab444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2ab448: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab44c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2ab44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2ab450: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ab450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ab454: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2ab454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2ab458: 0x34846a7f  ori         $a0, $a0, 0x6A7F
    ctx->pc = 0x2ab458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27263);
    // 0x2ab45c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2ab45cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2ab460: 0xc79f8ea8  lwc1        $f31, -0x7158($gp)
    ctx->pc = 0x2ab460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2ab464: 0x4601d042  mul.s       $f1, $f26, $f1
    ctx->pc = 0x2ab464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[1]);
    // 0x2ab468: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2ab468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2ab46c: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x2ab46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x2ab470: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2ab470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ab474: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ab474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab478: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2ab478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2ab47c: 0xc79d8eac  lwc1        $f29, -0x7154($gp)
    ctx->pc = 0x2ab47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2ab480: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x2ab480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x2ab484: 0xc79c8eb0  lwc1        $f28, -0x7150($gp)
    ctx->pc = 0x2ab484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2ab488: 0x0  nop
    ctx->pc = 0x2ab488u;
    // NOP
    // 0x2ab48c: 0x0  nop
    ctx->pc = 0x2ab48cu;
    // NOP
    // 0x2ab490: 0x461a0644  c1          0x1A0644
    ctx->pc = 0x2ab490u;
    ctx->f[25] = FPU_SQRT_S(ctx->f[26]);
    // 0x2ab494: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ab498: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ab498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ab49c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2ab49cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ab4a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab4a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ab4a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ab4a8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ab4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ab4ac: 0x449825  or          $s3, $v0, $a0
    ctx->pc = 0x2ab4acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ab4b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2ab4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ab4b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab4b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ab4b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ab4b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ab4bc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ab4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ab4c0: 0x449025  or          $s2, $v0, $a0
    ctx->pc = 0x2ab4c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ab4c4: 0x0  nop
    ctx->pc = 0x2ab4c4u;
    // NOP
label_2ab4c8:
    // 0x2ab4c8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2ab4c8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab4cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ab4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ab4d0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2ab4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2ab4d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab4d8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2ab4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab4dc: 0x4619c832  c.eq.s      $f25, $f25
    ctx->pc = 0x2ab4dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[25], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab4e0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2ab4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2ab4e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ab4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ab4e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ab4e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab4ec: 0x46020d40  add.s       $f21, $f1, $f2
    ctx->pc = 0x2ab4ecu;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ab4f0: 0x4603a801  sub.s       $f0, $f21, $f3
    ctx->pc = 0x2ab4f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x2ab4f4: 0x4603a840  add.s       $f1, $f21, $f3
    ctx->pc = 0x2ab4f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
    // 0x2ab4f8: 0x461f0002  mul.s       $f0, $f0, $f31
    ctx->pc = 0x2ab4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x2ab4fc: 0x461f0842  mul.s       $f1, $f1, $f31
    ctx->pc = 0x2ab4fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[31]);
    // 0x2ab500: 0x0  nop
    ctx->pc = 0x2ab500u;
    // NOP
    // 0x2ab504: 0x0  nop
    ctx->pc = 0x2ab504u;
    // NOP
    // 0x2ab508: 0x461e0583  div.s       $f22, $f0, $f30
    ctx->pc = 0x2ab508u;
    if (ctx->f[30] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[30];
    // 0x2ab50c: 0x0  nop
    ctx->pc = 0x2ab50cu;
    // NOP
    // 0x2ab510: 0x0  nop
    ctx->pc = 0x2ab510u;
    // NOP
    // 0x2ab514: 0x461e0dc3  div.s       $f23, $f1, $f30
    ctx->pc = 0x2ab514u;
    if (ctx->f[30] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[30];
    // 0x2ab518: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB518u;
    {
        const bool branch_taken_0x2ab518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB518u;
        // 0x2ab51c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab518) {
            ctx->pc = 0x2AB52Cu;
            goto label_2ab52c;
        }
    }
    ctx->pc = 0x2AB520u;
    // 0x2ab520: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2AB520u;
    SET_GPR_U32(ctx, 31, 0x2AB528u);
    ctx->pc = 0x2AB524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB520u;
    // 0x2ab524: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2AB520u, 0x2AB528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB528u;
label_2ab528:
    // 0x2ab528: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ab528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ab52c:
    // 0x2ab52c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AB52Cu;
    SET_GPR_U32(ctx, 31, 0x2AB534u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AB52Cu, 0x2AB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB534u;
label_2ab534:
    // 0x2ab534: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2ab534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2ab538: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x2ab538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x2ab53c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ab53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ab540: 0xdc259700  ld          $a1, -0x6900($at)
    ctx->pc = 0x2ab540u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9700u));
    // 0x2ab544: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AB544u;
    SET_GPR_U32(ctx, 31, 0x2AB54Cu);
    ctx->pc = 0x2AB548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB544u;
    // 0x2ab548: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AB544u, 0x2AB54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB54Cu;
label_2ab54c:
    // 0x2ab54c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ab54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ab550: 0xdc259708  ld          $a1, -0x68F8($at)
    ctx->pc = 0x2ab550u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9708u));
    // 0x2ab554: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AB554u;
    SET_GPR_U32(ctx, 31, 0x2AB55Cu);
    ctx->pc = 0x2AB558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB554u;
    // 0x2ab558: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AB554u, 0x2AB55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB55Cu;
label_2ab55c:
    // 0x2ab55c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2ab55cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ab560: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ab560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ab564: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AB564u;
    SET_GPR_U32(ctx, 31, 0x2AB56Cu);
    ctx->pc = 0x2AB568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB564u;
    // 0x2ab568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AB564u, 0x2AB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB56Cu;
label_2ab56c:
    // 0x2ab56c: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2AB56Cu;
    SET_GPR_U32(ctx, 31, 0x2AB574u);
    ctx->pc = 0x2AB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB56Cu;
    // 0x2ab570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2AB56Cu, 0x2AB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB574u;
label_2ab574:
    // 0x2ab574: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ab574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ab578: 0x4600c986  mov.s       $f6, $f25
    ctx->pc = 0x2ab578u;
    ctx->f[6] = FPU_MOV_S(ctx->f[25]);
    // 0x2ab57c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ab57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab580: 0x46063032  c.eq.s      $f6, $f6
    ctx->pc = 0x2ab580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab584: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ab584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ab588: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2ab588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ab58c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB58Cu;
    {
        const bool branch_taken_0x2ab58c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB58Cu;
        // 0x2ab590: 0x461ba602  mul.s       $f24, $f20, $f27 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[20], ctx->f[27]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab58c) {
            ctx->pc = 0x2AB5A0u;
            goto label_2ab5a0;
        }
    }
    ctx->pc = 0x2AB594u;
    // 0x2ab594: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2AB594u;
    SET_GPR_U32(ctx, 31, 0x2AB59Cu);
    ctx->pc = 0x2AB598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB594u;
    // 0x2ab598: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2AB594u, 0x2AB59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB59Cu;
label_2ab59c:
    // 0x2ab59c: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2ab59cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
label_2ab5a0:
    // 0x2ab5a0: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x2ab5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x2ab5a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab5a8: 0x461db042  mul.s       $f1, $f22, $f29
    ctx->pc = 0x2ab5a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[29]);
    // 0x2ab5ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ab5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ab5b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ab5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ab5b4: 0x461db882  mul.s       $f2, $f23, $f29
    ctx->pc = 0x2ab5b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[29]);
    // 0x2ab5b8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2ab5b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2ab5bc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2ab5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2ab5c0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2ab5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2ab5c4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2ab5c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2ab5c8: 0xc6aa0000  lwc1        $f10, 0x0($s5)
    ctx->pc = 0x2ab5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2ab5cc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2ab5ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2ab5d0: 0xc6890000  lwc1        $f9, 0x0($s4)
    ctx->pc = 0x2ab5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2ab5d4: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x2ab5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x2ab5d8: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x2ab5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab5dc: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab5dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2ab5e0: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x2ab5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ab5e4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2ab5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2ab5e8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab5e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ab5ec: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2ab5ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ab5f0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2ab5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2ab5f4: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x2ab5f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2ab5f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ab5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ab5fc: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2ab5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2ab600: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x2ab600u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2ab604: 0x8c4506e4  lw          $a1, 0x6E4($v0)
    ctx->pc = 0x2ab604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x2ab608: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2ab608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2ab60c: 0x24e60200  addiu       $a2, $a3, 0x200
    ctx->pc = 0x2ab60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x2ab610: 0x461f0842  mul.s       $f1, $f1, $f31
    ctx->pc = 0x2ab610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[31]);
    // 0x2ab614: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ab614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ab618: 0x461f0002  mul.s       $f0, $f0, $f31
    ctx->pc = 0x2ab618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x2ab61c: 0x30c607ff  andi        $a2, $a2, 0x7FF
    ctx->pc = 0x2ab61cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x2ab620: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2ab620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2ab624: 0x30e707ff  andi        $a3, $a3, 0x7FF
    ctx->pc = 0x2ab624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x2ab628: 0x0  nop
    ctx->pc = 0x2ab628u;
    // NOP
    // 0x2ab62c: 0x0  nop
    ctx->pc = 0x2ab62cu;
    // NOP
    // 0x2ab630: 0x461e0843  div.s       $f1, $f1, $f30
    ctx->pc = 0x2ab630u;
    if (ctx->f[30] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[30];
    // 0x2ab634: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2ab634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ab638: 0x0  nop
    ctx->pc = 0x2ab638u;
    // NOP
    // 0x2ab63c: 0x0  nop
    ctx->pc = 0x2ab63cu;
    // NOP
    // 0x2ab640: 0x461e0003  div.s       $f0, $f0, $f30
    ctx->pc = 0x2ab640u;
    if (ctx->f[30] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[30];
    // 0x2ab644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ab644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab648: 0x46181880  add.s       $f2, $f3, $f24
    ctx->pc = 0x2ab648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[24]);
    // 0x2ab64c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ab64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab650: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2ab650u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ab654: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ab654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ab658: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ab658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ab65c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2ab65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ab660: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x2ab660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x2ab664: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x2ab664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2ab668: 0x461d0842  mul.s       $f1, $f1, $f29
    ctx->pc = 0x2ab668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x2ab66c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x2ab66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ab670: 0x461d0002  mul.s       $f0, $f0, $f29
    ctx->pc = 0x2ab670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x2ab674: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2ab674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab678: 0xc4e70000  lwc1        $f7, 0x0($a3)
    ctx->pc = 0x2ab678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ab67c: 0x461b3182  mul.s       $f6, $f6, $f27
    ctx->pc = 0x2ab67cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[27]);
    // 0x2ab680: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2ab680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x2ab684: 0xc4c80000  lwc1        $f8, 0x0($a2)
    ctx->pc = 0x2ab684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ab688: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x2ab688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x2ab68c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2ab68cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ab690: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2ab690u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ab694: 0x461c2102  mul.s       $f4, $f4, $f28
    ctx->pc = 0x2ab694u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[28]);
    // 0x2ab698: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ab69c: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x2ab69cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x2ab6a0: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2ab6a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ab6a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab6a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ab6a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ab6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ab6ac: 0x8f84b998  lw          $a0, -0x4668($gp)
    ctx->pc = 0x2ab6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949272)));
    // 0x2ab6b0: 0x461c2942  mul.s       $f5, $f5, $f28
    ctx->pc = 0x2ab6b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[28]);
    // 0x2ab6b4: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x2ab6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab6b8: 0x25490200  addiu       $t1, $t2, 0x200
    ctx->pc = 0x2ab6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 512));
    // 0x2ab6bc: 0x461c39c2  mul.s       $f7, $f7, $f28
    ctx->pc = 0x2ab6bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[28]);
    // 0x2ab6c0: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2ab6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2ab6c4: 0x314a07ff  andi        $t2, $t2, 0x7FF
    ctx->pc = 0x2ab6c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2047);
    // 0x2ab6c8: 0x312907ff  andi        $t1, $t1, 0x7FF
    ctx->pc = 0x2ab6c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2047);
    // 0x2ab6cc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ab6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ab6d0: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2ab6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2ab6d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ab6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab6d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ab6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab6dc: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2ab6dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2ab6e0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x2ab6e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2ab6e4: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x2ab6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x2ab6e8: 0x1314821  addu        $t1, $t1, $s1
    ctx->pc = 0x2ab6e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x2ab6ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2ab6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ab6f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ab6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ab6f4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2ab6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab6f8: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x2ab6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab6fc: 0x461c4202  mul.s       $f8, $f8, $f28
    ctx->pc = 0x2ab6fcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[28]);
    // 0x2ab700: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2ab700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab704: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2ab704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2ab708: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2ab708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab70c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2ab70cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2ab710: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2ab710u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2ab714: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2ab714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab718: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2ab718u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2ab71c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2ab71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ab720: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x2ab720u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x2ab724: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2ab724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ab728: 0x46054940  add.s       $f5, $f9, $f5
    ctx->pc = 0x2ab728u;
    ctx->f[5] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x2ab72c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2ab72cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab730: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x2ab730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2ab734: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2ab734u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab738: 0x46014840  add.s       $f1, $f9, $f1
    ctx->pc = 0x2ab738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2ab73c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2ab73cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ab740: 0x46025080  add.s       $f2, $f10, $f2
    ctx->pc = 0x2ab740u;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[2]);
    // 0x2ab744: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x2ab744u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab748: 0x460348c0  add.s       $f3, $f9, $f3
    ctx->pc = 0x2ab748u;
    ctx->f[3] = FPU_ADD_S(ctx->f[9], ctx->f[3]);
    // 0x2ab74c: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x2ab74cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ab750: 0x46075280  add.s       $f10, $f10, $f7
    ctx->pc = 0x2ab750u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[7]);
    // 0x2ab754: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2ab754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ab758: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x2ab758u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x2ab75c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2ab75cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ab760: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2ab760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ab764: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ab764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ab768: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2ab768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ab76c: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2ab76cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ab770: 0xe7aa0030  swc1        $f10, 0x30($sp)
    ctx->pc = 0x2ab770u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ab774: 0xc0aabfe  jal         func_2AAFF8
    ctx->pc = 0x2AB774u;
    SET_GPR_U32(ctx, 31, 0x2AB77Cu);
    ctx->pc = 0x2AB778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB774u;
    // 0x2ab778: 0xe7a90038  swc1        $f9, 0x38($sp) (Delay Slot)
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAFF8u, 0x2AB774u, 0x2AB77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB77Cu;
label_2ab77c:
    // 0x2ab77c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x2ab77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ab780: 0x1440ff51  bnez        $v0, . + 4 + (-0xAF << 2)
    ctx->pc = 0x2AB780u;
    {
        const bool branch_taken_0x2ab780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab780) {
            ctx->pc = 0x2AB4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab4c8;
        }
    }
    ctx->pc = 0x2AB788u;
label_2ab788:
    // 0x2ab788: 0x2410005c  addiu       $s0, $zero, 0x5C
    ctx->pc = 0x2ab788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ab78c:
    // 0x2ab78c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ab78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ab790: 0x2f08018  mult        $s0, $s7, $s0
    ctx->pc = 0x2ab790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ab794: 0x2462c268  addiu       $v0, $v1, -0x3D98
    ctx->pc = 0x2ab794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951528));
    // 0x2ab798: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x2ab798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2ab79c: 0xc7948eb4  lwc1        $f20, -0x714C($gp)
    ctx->pc = 0x2ab79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ab7a0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ab7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2ab7a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ab7a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ab7a8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2ab7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2ab7ac: 0xc78d8eb8  lwc1        $f13, -0x7148($gp)
    ctx->pc = 0x2ab7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ab7b0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2ab7b0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2ab7b4: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x2ab7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2ab7b8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2ab7b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2ab7bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ab7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ab7c0: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2ab7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab7c4: 0xc0aaf42  jal         func_2ABD08
    ctx->pc = 0x2AB7C4u;
    SET_GPR_U32(ctx, 31, 0x2AB7CCu);
    ctx->pc = 0x2AB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7C4u;
    // 0x2ab7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD08u, 0x2AB7C4u, 0x2AB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7CCu;
label_2ab7cc:
    // 0x2ab7cc: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2ab7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab7d0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2ab7d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2ab7d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab7d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ab7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ab7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7e0: 0xc0aaf42  jal         func_2ABD08
    ctx->pc = 0x2AB7E0u;
    SET_GPR_U32(ctx, 31, 0x2AB7E8u);
    ctx->pc = 0x2AB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7E0u;
    // 0x2ab7e4: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD08u, 0x2AB7E0u, 0x2AB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7E8u;
label_2ab7e8:
    // 0x2ab7e8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2ab7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7f0: 0xc78d8ebc  lwc1        $f13, -0x7144($gp)
    ctx->pc = 0x2ab7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ab7f4: 0xc78e8ec0  lwc1        $f14, -0x7140($gp)
    ctx->pc = 0x2ab7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ab7f8: 0xc0aaf42  jal         func_2ABD08
    ctx->pc = 0x2AB7F8u;
    SET_GPR_U32(ctx, 31, 0x2AB800u);
    ctx->pc = 0x2AB7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7F8u;
    // 0x2ab7fc: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD08u, 0x2AB7F8u, 0x2AB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB800u;
label_2ab800:
    // 0x2ab800: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2AB800u;
    SET_GPR_U32(ctx, 31, 0x2AB808u);
    ctx->pc = 0x2AB804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB800u;
    // 0x2ab804: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2AB800u, 0x2AB808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB808u;
label_2ab808:
    // 0x2ab808: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2AB808u;
    SET_GPR_U32(ctx, 31, 0x2AB810u);
    ctx->pc = 0x2AB80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB808u;
    // 0x2ab80c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2AB808u, 0x2AB810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB810u;
label_2ab810:
    // 0x2ab810: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2ab810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ab814: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x2ab814u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ab818: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x2ab818u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ab81c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2ab81cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ab820: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x2ab820u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ab824: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2ab824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ab828: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x2ab828u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ab82c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2ab82cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ab830: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2ab830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ab834: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2ab834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ab838: 0xc7bf0158  lwc1        $f31, 0x158($sp)
    ctx->pc = 0x2ab838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2ab83c: 0xc7be0150  lwc1        $f30, 0x150($sp)
    ctx->pc = 0x2ab83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2ab840: 0xc7bd0148  lwc1        $f29, 0x148($sp)
    ctx->pc = 0x2ab840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2ab844: 0xc7bc0140  lwc1        $f28, 0x140($sp)
    ctx->pc = 0x2ab844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2ab848: 0xc7bb0138  lwc1        $f27, 0x138($sp)
    ctx->pc = 0x2ab848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2ab84c: 0xc7ba0130  lwc1        $f26, 0x130($sp)
    ctx->pc = 0x2ab84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2ab850: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x2ab850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2ab854: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x2ab854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2ab858: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x2ab858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ab85c: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2ab85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ab860: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2ab860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ab864: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2ab864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ab868: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB868u;
        // 0x2ab86c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB870u;
}
