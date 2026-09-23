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

// Function: specialfxBlastShardTick
// Address: 0x2ac370 - 0x2ac50c
void specialfxBlastShardTick_0x2ac370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxBlastShardTick_0x2ac370");
#endif

    switch (ctx->pc) {
        case 0x2ac400u: goto label_2ac400;
        case 0x2ac410u: goto label_2ac410;
        case 0x2ac420u: goto label_2ac420;
        case 0x2ac430u: goto label_2ac430;
        case 0x2ac438u: goto label_2ac438;
        case 0x2ac488u: goto label_2ac488;
        case 0x2ac4acu: goto label_2ac4ac;
        case 0x2ac4dcu: goto label_2ac4dc;
        default: break;
    }

    ctx->pc = 0x2ac370u;

    // 0x2ac370: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ac370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ac374: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ac374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ac378: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2ac378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2ac37c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ac37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ac380: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ac380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ac384: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2ac384u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac388: 0x2e2a018  mult        $s4, $s7, $v0
    ctx->pc = 0x2ac388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2ac38c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ac38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ac390: 0x2475c268  addiu       $s5, $v1, -0x3D98
    ctx->pc = 0x2ac390u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951528));
    // 0x2ac394: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2ac394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2ac398: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ac398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ac39c: 0x26a20048  addiu       $v0, $s5, 0x48
    ctx->pc = 0x2ac39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    // 0x2ac3a0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2ac3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2ac3a4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ac3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ac3a8: 0x282b021  addu        $s6, $s4, $v0
    ctx->pc = 0x2ac3a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ac3ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ac3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ac3b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ac3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ac3b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ac3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ac3b8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2ac3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ac3bc: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2AC3BCu;
    {
        const bool branch_taken_0x2ac3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3BCu;
        // 0x2ac3c0: 0x26be0030  addiu       $fp, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3bc) {
            ctx->pc = 0x2AC4B4u;
            goto label_2ac4b4;
        }
    }
    ctx->pc = 0x2AC3C4u;
    // 0x2ac3c4: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x2ac3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2ac3c8: 0x29e9821  addu        $s3, $s4, $fp
    ctx->pc = 0x2ac3c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x2ac3cc: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x2ac3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac3d0: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x2ac3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ac3d4: 0x26b20010  addiu       $s2, $s5, 0x10
    ctx->pc = 0x2ac3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2ac3d8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2ac3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac3dc: 0x26b00054  addiu       $s0, $s5, 0x54
    ctx->pc = 0x2ac3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
    // 0x2ac3e0: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2ac3e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2ac3e4: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x2ac3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x2ac3e8: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x2ac3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2ac3ec: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2ac3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2ac3f0: 0x26315c60  addiu       $s1, $s1, 0x5C60
    ctx->pc = 0x2ac3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23648));
    // 0x2ac3f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac3f8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AC3F8u;
    SET_GPR_U32(ctx, 31, 0x2AC400u);
    ctx->pc = 0x2AC3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC3F8u;
    // 0x2ac3fc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AC3F8u, 0x2AC400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC400u;
label_2ac400:
    // 0x2ac400: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ac400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ac404: 0xdc259728  ld          $a1, -0x68D8($at)
    ctx->pc = 0x2ac404u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9728u));
    // 0x2ac408: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC408u;
    SET_GPR_U32(ctx, 31, 0x2AC410u);
    ctx->pc = 0x2AC40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC408u;
    // 0x2ac40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC408u, 0x2AC410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC410u;
label_2ac410:
    // 0x2ac410: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ac410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ac414: 0xdc259730  ld          $a1, -0x68D0($at)
    ctx->pc = 0x2ac414u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9730u));
    // 0x2ac418: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC418u;
    SET_GPR_U32(ctx, 31, 0x2AC420u);
    ctx->pc = 0x2AC41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC418u;
    // 0x2ac41c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC418u, 0x2AC420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC420u;
label_2ac420:
    // 0x2ac420: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2ac420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ac424: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ac424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2ac428: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AC428u;
    SET_GPR_U32(ctx, 31, 0x2AC430u);
    ctx->pc = 0x2AC42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC428u;
    // 0x2ac42c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AC428u, 0x2AC430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC430u;
label_2ac430:
    // 0x2ac430: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2AC430u;
    SET_GPR_U32(ctx, 31, 0x2AC438u);
    ctx->pc = 0x2AC434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC430u;
    // 0x2ac434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2AC430u, 0x2AC438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC438u;
label_2ac438:
    // 0x2ac438: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ac438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ac43c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ac43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac444: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2ac444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ac448: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ac448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ac44c: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x2ac44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2ac450: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2ac450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ac454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ac454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac458: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ac458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac45c: 0xc4620058  lwc1        $f2, 0x58($v1)
    ctx->pc = 0x2ac45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac460: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2ac460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2ac464: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2ac464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac468: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2ac468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ac46c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2ac46cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ac470: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2ac470u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ac474: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2ac474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac478: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ac478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ac47c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ac47cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ac480: 0xc0a5ba2  jal         func_296E88
    ctx->pc = 0x2AC480u;
    SET_GPR_U32(ctx, 31, 0x2AC488u);
    ctx->pc = 0x2AC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC480u;
    // 0x2ac484: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E88u, 0x2AC480u, 0x2AC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC488u;
label_2ac488:
    // 0x2ac488: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2ac488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac48c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac490: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ac490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac494: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2ac494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2ac498: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac49c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2ac49cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2ac4a0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2ac4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ac4a4: 0xc0a5b94  jal         func_296E50
    ctx->pc = 0x2AC4A4u;
    SET_GPR_U32(ctx, 31, 0x2AC4ACu);
    ctx->pc = 0x2AC4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC4A4u;
    // 0x2ac4a8: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x2AC4A4u, 0x2AC4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4ACu;
label_2ac4ac:
    // 0x2ac4ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC4ACu;
    {
        const bool branch_taken_0x2ac4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC4ACu;
        // 0x2ac4b0: 0x29e1021  addu        $v0, $s4, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4ac) {
            ctx->pc = 0x2AC4B8u;
            goto label_2ac4b8;
        }
    }
    ctx->pc = 0x2AC4B4u;
label_2ac4b4:
    // 0x2ac4b4: 0x29e1021  addu        $v0, $s4, $fp
    ctx->pc = 0x2ac4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
label_2ac4b8:
    // 0x2ac4b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ac4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ac4bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac4c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ac4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac4c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ac4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac4c8: 0x0  nop
    ctx->pc = 0x2ac4c8u;
    // NOP
    // 0x2ac4cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC4CCu;
    {
        const bool branch_taken_0x2ac4cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC4CCu;
        // 0x2ac4d0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4cc) {
            ctx->pc = 0x2AC4E0u;
            goto label_2ac4e0;
        }
    }
    ctx->pc = 0x2AC4D4u;
    // 0x2ac4d4: 0xc0aabb6  jal         func_2AAED8
    ctx->pc = 0x2AC4D4u;
    SET_GPR_U32(ctx, 31, 0x2AC4DCu);
    ctx->pc = 0x2AC4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC4D4u;
    // 0x2ac4d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAED8u, 0x2AC4D4u, 0x2AC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4DCu;
label_2ac4dc:
    // 0x2ac4dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ac4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2ac4e0:
    // 0x2ac4e0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2ac4e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ac4e4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2ac4e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ac4e8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2ac4e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ac4ec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ac4ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ac4f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ac4f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac4f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ac4f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac4f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ac4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac4fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ac4fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac500: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ac500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac504: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC504u;
        // 0x2ac508: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC50Cu;
}
