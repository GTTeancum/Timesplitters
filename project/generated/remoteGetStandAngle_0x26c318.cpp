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

// Function: remoteGetStandAngle
// Address: 0x26c318 - 0x26c440
void remoteGetStandAngle_0x26c318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("remoteGetStandAngle_0x26c318");
#endif

    switch (ctx->pc) {
        case 0x26c340u: goto label_26c340;
        case 0x26c384u: goto label_26c384;
        case 0x26c390u: goto label_26c390;
        case 0x26c3d4u: goto label_26c3d4;
        default: break;
    }

    ctx->pc = 0x26c318u;

    // 0x26c318: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26c318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26c31c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x26c31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x26c320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c324: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x26c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x26c328: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x26c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x26c32c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x26c32cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x26c330: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x26c330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x26c334: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26c338: 0xc09a530  jal         func_2694C0
    ctx->pc = 0x26C338u;
    SET_GPR_U32(ctx, 31, 0x26C340u);
    ctx->pc = 0x26C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C338u;
    // 0x26c33c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2694C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2694C0u, 0x26C338u, 0x26C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C340u;
label_26c340:
    // 0x26c340: 0xc7958448  lwc1        $f21, -0x7BB8($gp)
    ctx->pc = 0x26c340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26c344: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x26c344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c348: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x26c348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c34c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c354: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x26c354u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x26c358: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26c358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26c35c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26c35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26c360: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26c360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c364: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c368: 0x0  nop
    ctx->pc = 0x26c368u;
    // NOP
    // 0x26c36c: 0x0  nop
    ctx->pc = 0x26c36cu;
    // NOP
    // 0x26c370: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x26c370u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x26c374: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26c374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26c378: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26c378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c37c: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x26C37Cu;
    SET_GPR_U32(ctx, 31, 0x26C384u);
    ctx->pc = 0x26C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C37Cu;
    // 0x26c380: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x26C37Cu, 0x26C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C384u;
label_26c384:
    // 0x26c384: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26c384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c388: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x26C388u;
    SET_GPR_U32(ctx, 31, 0x26C390u);
    ctx->pc = 0x26C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C388u;
    // 0x26c38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x26C388u, 0x26C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C390u;
label_26c390:
    // 0x26c390: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x26c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c394: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x26c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c398: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x26c398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c39c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x26c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c3a0: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x26c3a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26c3a4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x26c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c3a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26c3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26c3ac: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x26c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26c3b0: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x26c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c3b4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x26c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c3b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x26c3b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26c3bc: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x26c3bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c3c0: 0x460d0341  sub.s       $f13, $f0, $f13
    ctx->pc = 0x26c3c0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x26c3c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26c3c8: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x26c3c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x26c3cc: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x26C3CCu;
    SET_GPR_U32(ctx, 31, 0x26C3D4u);
    ctx->pc = 0x26C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3CCu;
    // 0x26c3d0: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x26C3CCu, 0x26C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3D4u;
label_26c3d4:
    // 0x26c3d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26c3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x26c3d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26c3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c3dc: 0x0  nop
    ctx->pc = 0x26c3dcu;
    // NOP
    // 0x26c3e0: 0x0  nop
    ctx->pc = 0x26c3e0u;
    // NOP
    // 0x26c3e4: 0x46150083  div.s       $f2, $f0, $f21
    ctx->pc = 0x26c3e4u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[21];
    // 0x26c3e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x26c3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c3ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x26C3ECu;
    {
        const bool branch_taken_0x26c3ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c3ec) {
            ctx->pc = 0x26C404u;
            goto label_26c404;
        }
    }
    ctx->pc = 0x26C3F4u;
    // 0x26c3f4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26c3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26c3f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c3fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26C3FCu;
    {
        const bool branch_taken_0x26c3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3FCu;
        // 0x26c400: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3fc) {
            ctx->pc = 0x26C41Cu;
            goto label_26c41c;
        }
    }
    ctx->pc = 0x26C404u;
label_26c404:
    // 0x26c404: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26c404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26c408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c40c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x26c40cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c410: 0x0  nop
    ctx->pc = 0x26c410u;
    // NOP
    // 0x26c414: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26C414u;
    {
        const bool branch_taken_0x26c414 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c414) {
            ctx->pc = 0x26C418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C414u;
            // 0x26c418: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C41Cu;
            goto label_26c41c;
        }
    }
    ctx->pc = 0x26C41Cu;
label_26c41c:
    // 0x26c41c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26c41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26c420: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x26c420u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x26c424: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x26c424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c428: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x26c428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c42c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x26c42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c430: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x26c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26c434: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x26c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c438: 0x3e00008  jr          $ra
    ctx->pc = 0x26C438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C438u;
        // 0x26c43c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C440u;
}
