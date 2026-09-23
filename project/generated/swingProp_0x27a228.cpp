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

// Function: swingProp
// Address: 0x27a228 - 0x27a4d4
void swingProp_0x27a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("swingProp_0x27a228");
#endif

    switch (ctx->pc) {
        case 0x27a2fcu: goto label_27a2fc;
        case 0x27a30cu: goto label_27a30c;
        case 0x27a31cu: goto label_27a31c;
        case 0x27a35cu: goto label_27a35c;
        case 0x27a36cu: goto label_27a36c;
        case 0x27a37cu: goto label_27a37c;
        case 0x27a384u: goto label_27a384;
        case 0x27a428u: goto label_27a428;
        case 0x27a438u: goto label_27a438;
        case 0x27a480u: goto label_27a480;
        case 0x27a490u: goto label_27a490;
        default: break;
    }

    ctx->pc = 0x27a228u;

    // 0x27a228: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27a228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27a22c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x27a22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x27a230: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a234: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27a238: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a23c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x27a23cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27a240: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x27a240u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27a244: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x27a244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27a248: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x27a248u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x27a24c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27a24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27a250: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27a250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27a254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a258: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x27a258u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27a25c: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x27a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x27a260: 0x24530014  addiu       $s3, $v0, 0x14
    ctx->pc = 0x27a260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x27a264: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x27a264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x27a268: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a26c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27a26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a270: 0x0  nop
    ctx->pc = 0x27a270u;
    // NOP
    // 0x27a274: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27A274u;
    {
        const bool branch_taken_0x27a274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A274u;
        // 0x27a278: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a274) {
            ctx->pc = 0x27A284u;
            goto label_27a284;
        }
    }
    ctx->pc = 0x27A27Cu;
    // 0x27a27c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x27a27cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27a280: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x27a280u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_27a284:
    // 0x27a284: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x27a284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x27a288: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27a288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27a28c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27a28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a290: 0x0  nop
    ctx->pc = 0x27a290u;
    // NOP
    // 0x27a294: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27A294u;
    {
        const bool branch_taken_0x27a294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A294u;
        // 0x27a298: 0x24520008  addiu       $s2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a294) {
            ctx->pc = 0x27A2A4u;
            goto label_27a2a4;
        }
    }
    ctx->pc = 0x27A29Cu;
    // 0x27a29c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x27a29cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27a2a0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x27a2a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_27a2a4:
    // 0x27a2a4: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x27a2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x27a2a8: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x27a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x27a2ac: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x27a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27a2b0: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x27a2b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x27a2b4: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x27a2b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a2b8: 0x0  nop
    ctx->pc = 0x27a2b8u;
    // NOP
    // 0x27a2bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27A2BCu;
    {
        const bool branch_taken_0x27a2bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2BCu;
        // 0x27a2c0: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2bc) {
            ctx->pc = 0x27A2D0u;
            goto label_27a2d0;
        }
    }
    ctx->pc = 0x27A2C4u;
    // 0x27a2c4: 0x460c0801  sub.s       $f0, $f1, $f12
    ctx->pc = 0x27a2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x27a2c8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27A2C8u;
    {
        const bool branch_taken_0x27a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2C8u;
        // 0x27a2cc: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2c8) {
            ctx->pc = 0x27A39Cu;
            goto label_27a39c;
        }
    }
    ctx->pc = 0x27A2D0u;
label_27a2d0:
    // 0x27a2d0: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x27a2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a2d4: 0x0  nop
    ctx->pc = 0x27a2d4u;
    // NOP
    // 0x27a2d8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x27A2D8u;
    {
        const bool branch_taken_0x27a2d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2D8u;
        // 0x27a2dc: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2d8) {
            ctx->pc = 0x27A324u;
            goto label_27a324;
        }
    }
    ctx->pc = 0x27A2E0u;
    // 0x27a2e0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27a2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27a2e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a2e8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x27a2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a2ec: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x27A2ECu;
    {
        const bool branch_taken_0x27a2ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a2ec) {
            ctx->pc = 0x27A324u;
            goto label_27a324;
        }
    }
    ctx->pc = 0x27A2F4u;
    // 0x27a2f4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27A2F4u;
    SET_GPR_U32(ctx, 31, 0x27A2FCu);
    ctx->pc = 0x27A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A2F4u;
    // 0x27a2f8: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27A2F4u, 0x27A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A2FCu;
label_27a2fc:
    // 0x27a2fc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27a2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27a300: 0xdc2585e8  ld          $a1, -0x7A18($at)
    ctx->pc = 0x27a300u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A85E8u));
    // 0x27a304: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x27A304u;
    SET_GPR_U32(ctx, 31, 0x27A30Cu);
    ctx->pc = 0x27A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A304u;
    // 0x27a308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x27A304u, 0x27A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A30Cu;
label_27a30c:
    // 0x27a30c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27a30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27a310: 0xdc2585f0  ld          $a1, -0x7A10($at)
    ctx->pc = 0x27a310u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A85F0u));
    // 0x27a314: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x27A314u;
    SET_GPR_U32(ctx, 31, 0x27A31Cu);
    ctx->pc = 0x27A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A314u;
    // 0x27a318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x27A314u, 0x27A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A31Cu;
label_27a31c:
    // 0x27a31c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27A31Cu;
    {
        const bool branch_taken_0x27a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a31c) {
            ctx->pc = 0x27A37Cu;
            goto label_27a37c;
        }
    }
    ctx->pc = 0x27A324u;
label_27a324:
    // 0x27a324: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27a324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27a328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a32c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x27a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27a330: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x27a330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a334: 0x0  nop
    ctx->pc = 0x27a334u;
    // NOP
    // 0x27a338: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x27A338u;
    {
        const bool branch_taken_0x27a338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A338u;
        // 0x27a33c: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a338) {
            ctx->pc = 0x27A38Cu;
            goto label_27a38c;
        }
    }
    ctx->pc = 0x27A340u;
    // 0x27a340: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x27a340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x27a344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a348: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x27a348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a34c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x27A34Cu;
    {
        const bool branch_taken_0x27a34c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a34c) {
            ctx->pc = 0x27A38Cu;
            goto label_27a38c;
        }
    }
    ctx->pc = 0x27A354u;
    // 0x27a354: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27A354u;
    SET_GPR_U32(ctx, 31, 0x27A35Cu);
    ctx->pc = 0x27A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A354u;
    // 0x27a358: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27A354u, 0x27A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A35Cu;
label_27a35c:
    // 0x27a35c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27a35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27a360: 0xdc2585f8  ld          $a1, -0x7A08($at)
    ctx->pc = 0x27a360u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A85F8u));
    // 0x27a364: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x27A364u;
    SET_GPR_U32(ctx, 31, 0x27A36Cu);
    ctx->pc = 0x27A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A364u;
    // 0x27a368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x27A364u, 0x27A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A36Cu;
label_27a36c:
    // 0x27a36c: 0x34058044  ori         $a1, $zero, 0x8044
    ctx->pc = 0x27a36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32836);
    // 0x27a370: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x27a370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x27a374: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x27A374u;
    SET_GPR_U32(ctx, 31, 0x27A37Cu);
    ctx->pc = 0x27A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A374u;
    // 0x27a378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x27A374u, 0x27A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A37Cu;
label_27a37c:
    // 0x27a37c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27A37Cu;
    SET_GPR_U32(ctx, 31, 0x27A384u);
    ctx->pc = 0x27A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A37Cu;
    // 0x27a380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27A37Cu, 0x27A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A384u;
label_27a384:
    // 0x27a384: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A384u;
    {
        const bool branch_taken_0x27a384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A384u;
        // 0x27a388: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a384) {
            ctx->pc = 0x27A39Cu;
            goto label_27a39c;
        }
    }
    ctx->pc = 0x27A38Cu;
label_27a38c:
    // 0x27a38c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27a38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27a390: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a394: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a398: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x27a398u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27a39c:
    // 0x27a39c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x27a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x27a3a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a3a4: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x27a3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x27a3a8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x27a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a3ac: 0x0  nop
    ctx->pc = 0x27a3acu;
    // NOP
    // 0x27a3b0: 0x0  nop
    ctx->pc = 0x27a3b0u;
    // NOP
    // 0x27a3b4: 0x46006003  div.s       $f0, $f12, $f0
    ctx->pc = 0x27a3b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[0];
    // 0x27a3b8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27a3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27a3bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27a3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27a3c0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x27a3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x27a3c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a3c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a3c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x27a3c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a3cc: 0x0  nop
    ctx->pc = 0x27a3ccu;
    // NOP
    // 0x27a3d0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27A3D0u;
    {
        const bool branch_taken_0x27a3d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3D0u;
        // 0x27a3d4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3d0) {
            ctx->pc = 0x27A3E4u;
            goto label_27a3e4;
        }
    }
    ctx->pc = 0x27A3D8u;
    // 0x27a3d8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27a3d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27a3dc: 0x4602ad41  sub.s       $f21, $f21, $f2
    ctx->pc = 0x27a3dcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x27a3e0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27a3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_27a3e4:
    // 0x27a3e4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27a3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a3e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27a3e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a3ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27a3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a3f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27A3F0u;
    {
        const bool branch_taken_0x27a3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a3f0) {
            ctx->pc = 0x27A404u;
            goto label_27a404;
        }
    }
    ctx->pc = 0x27A3F8u;
    // 0x27a3f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27a3f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27a3fc: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x27a3fcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x27a400: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27a400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_27a404:
    // 0x27a404: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x27a404u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a408: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x27A408u;
    {
        const bool branch_taken_0x27a408 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a408) {
            ctx->pc = 0x27A440u;
            goto label_27a440;
        }
    }
    ctx->pc = 0x27A410u;
    // 0x27a410: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x27a410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27a414: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x27a414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a418: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x27A418u;
    {
        const bool branch_taken_0x27a418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a418) {
            ctx->pc = 0x27A440u;
            goto label_27a440;
        }
    }
    ctx->pc = 0x27A420u;
    // 0x27a420: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27A420u;
    SET_GPR_U32(ctx, 31, 0x27A428u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27A420u, 0x27A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A428u;
label_27a428:
    // 0x27a428: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27a42c: 0xdc258600  ld          $a1, -0x7A00($at)
    ctx->pc = 0x27a42cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8600u));
    // 0x27a430: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x27A430u;
    SET_GPR_U32(ctx, 31, 0x27A438u);
    ctx->pc = 0x27A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A430u;
    // 0x27a434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x27A430u, 0x27A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A438u;
label_27a438:
    // 0x27a438: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x27A438u;
    {
        const bool branch_taken_0x27a438 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27a438) {
            ctx->pc = 0x27A43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A438u;
            // 0x27a43c: 0xe6140000  swc1        $f20, 0x0($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A440u;
            goto label_27a440;
        }
    }
    ctx->pc = 0x27A440u;
label_27a440:
    // 0x27a440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a444: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x27a444u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a448: 0x0  nop
    ctx->pc = 0x27a448u;
    // NOP
    // 0x27a44c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x27A44Cu;
    {
        const bool branch_taken_0x27a44c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A44Cu;
        // 0x27a450: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a44c) {
            ctx->pc = 0x27A49Cu;
            goto label_27a49c;
        }
    }
    ctx->pc = 0x27A454u;
    // 0x27a454: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27a454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27a458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a45c: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x27a45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x27a460: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x27a460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27a464: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x27a464u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27a468: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x27a468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a46c: 0x0  nop
    ctx->pc = 0x27a46cu;
    // NOP
    // 0x27a470: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27A470u;
    {
        const bool branch_taken_0x27a470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A470u;
        // 0x27a474: 0x2711821  addu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a470) {
            ctx->pc = 0x27A4A0u;
            goto label_27a4a0;
        }
    }
    ctx->pc = 0x27A478u;
    // 0x27a478: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27A478u;
    SET_GPR_U32(ctx, 31, 0x27A480u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27A478u, 0x27A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A480u;
label_27a480:
    // 0x27a480: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27a480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27a484: 0xdc258608  ld          $a1, -0x79F8($at)
    ctx->pc = 0x27a484u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8608u));
    // 0x27a488: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x27A488u;
    SET_GPR_U32(ctx, 31, 0x27A490u);
    ctx->pc = 0x27A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A488u;
    // 0x27a48c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x27A488u, 0x27A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A490u;
label_27a490:
    // 0x27a490: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x27A490u;
    {
        const bool branch_taken_0x27a490 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27a490) {
            ctx->pc = 0x27A494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A490u;
            // 0x27a494: 0xe6140000  swc1        $f20, 0x0($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A498u;
            goto label_27a498;
        }
    }
    ctx->pc = 0x27A498u;
label_27a498:
    // 0x27a498: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x27a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_27a49c:
    // 0x27a49c: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x27a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_27a4a0:
    // 0x27a4a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a4a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a4a8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x27a4a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x27a4ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27a4acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a4b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27a4b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a4b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27a4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a4bc: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x27a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27a4c0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x27a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27a4c4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x27a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27a4c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27a4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27a4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x27A4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4CCu;
        // 0x27a4d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A4D4u;
}
