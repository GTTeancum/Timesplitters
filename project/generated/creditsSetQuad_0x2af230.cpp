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

// Function: creditsSetQuad
// Address: 0x2af230 - 0x2af864
void creditsSetQuad_0x2af230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsSetQuad_0x2af230");
#endif

    switch (ctx->pc) {
        case 0x2af2f8u: goto label_2af2f8;
        case 0x2af304u: goto label_2af304;
        case 0x2af314u: goto label_2af314;
        case 0x2af320u: goto label_2af320;
        case 0x2af328u: goto label_2af328;
        case 0x2af338u: goto label_2af338;
        case 0x2af344u: goto label_2af344;
        case 0x2af558u: goto label_2af558;
        default: break;
    }

    ctx->pc = 0x2af230u;

    // 0x2af230: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2af230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x2af234: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2af234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2af238: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2af238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af23c: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x2af23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x2af240: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2af240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af244: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x2af244u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2af248: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2af248u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af24c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2af254: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2af254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2af258: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2af258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2af25c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2af25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2af260: 0xc7858f84  lwc1        $f5, -0x707C($gp)
    ctx->pc = 0x2af260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2af264: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x2af264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x2af268: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2af268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2af26c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2af26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2af270: 0x0  nop
    ctx->pc = 0x2af270u;
    // NOP
    // 0x2af274: 0x0  nop
    ctx->pc = 0x2af274u;
    // NOP
    // 0x2af278: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2af278u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2af27c: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x2af27cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2af280: 0xffbe01d0  sd          $fp, 0x1D0($sp)
    ctx->pc = 0x2af280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 30));
    // 0x2af284: 0x0  nop
    ctx->pc = 0x2af284u;
    // NOP
    // 0x2af288: 0x0  nop
    ctx->pc = 0x2af288u;
    // NOP
    // 0x2af28c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2af28cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2af290: 0xffb30180  sd          $s3, 0x180($sp)
    ctx->pc = 0x2af290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 19));
    // 0x2af294: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x2af294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x2af298: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2af298u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af29c: 0xffb10160  sd          $s1, 0x160($sp)
    ctx->pc = 0x2af29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 17));
    // 0x2af2a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2af2a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2a4: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x2af2a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2af2a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2af2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2ac: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2af2acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2af2b0: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x2af2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
    // 0x2af2b4: 0xffb701c0  sd          $s7, 0x1C0($sp)
    ctx->pc = 0x2af2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 23));
    // 0x2af2b8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2af2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2af2bc: 0xffb601b0  sd          $s6, 0x1B0($sp)
    ctx->pc = 0x2af2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 22));
    // 0x2af2c0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2af2c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2af2c4: 0xffb501a0  sd          $s5, 0x1A0($sp)
    ctx->pc = 0x2af2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 21));
    // 0x2af2c8: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2af2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x2af2cc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2af2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2af2d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2af2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2af2d4: 0xdc3198a8  ld          $s1, -0x6758($at)
    ctx->pc = 0x2af2d4u;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x3A98A8u));
    // 0x2af2d8: 0x0  nop
    ctx->pc = 0x2af2d8u;
    // NOP
    // 0x2af2dc: 0x0  nop
    ctx->pc = 0x2af2dcu;
    // NOP
    // 0x2af2e0: 0x46030d83  div.s       $f22, $f1, $f3
    ctx->pc = 0x2af2e0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[3];
    // 0x2af2e4: 0x0  nop
    ctx->pc = 0x2af2e4u;
    // NOP
    // 0x2af2e8: 0x0  nop
    ctx->pc = 0x2af2e8u;
    // NOP
    // 0x2af2ec: 0x46030503  div.s       $f20, $f0, $f3
    ctx->pc = 0x2af2ecu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[3];
    // 0x2af2f0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AF2F0u;
    SET_GPR_U32(ctx, 31, 0x2AF2F8u);
    ctx->pc = 0x2AF2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF2F0u;
    // 0x2af2f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AF2F0u, 0x2AF2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF2F8u;
label_2af2f8:
    // 0x2af2f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2fc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2AF2FCu;
    SET_GPR_U32(ctx, 31, 0x2AF304u);
    ctx->pc = 0x2AF300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF2FCu;
    // 0x2af300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2AF2FCu, 0x2AF304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF304u;
label_2af304:
    // 0x2af304: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AF304u;
    {
        const bool branch_taken_0x2af304 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2af304) {
            ctx->pc = 0x2AF308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF304u;
            // 0x2af308: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF330u;
            goto label_2af330;
        }
    }
    ctx->pc = 0x2AF30Cu;
    // 0x2af30c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AF30Cu;
    SET_GPR_U32(ctx, 31, 0x2AF314u);
    ctx->pc = 0x2AF310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF30Cu;
    // 0x2af310: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AF30Cu, 0x2AF314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF314u;
label_2af314:
    // 0x2af314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af318: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2AF318u;
    SET_GPR_U32(ctx, 31, 0x2AF320u);
    ctx->pc = 0x2AF31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF318u;
    // 0x2af31c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2AF318u, 0x2AF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF320u;
label_2af320:
    // 0x2af320: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2AF320u;
    SET_GPR_U32(ctx, 31, 0x2AF328u);
    ctx->pc = 0x2AF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF320u;
    // 0x2af324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2AF320u, 0x2AF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF328u;
label_2af328:
    // 0x2af328: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2af328u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2af32c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2af32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2af330:
    // 0x2af330: 0xc0abbf8  jal         func_2AEFE0
    ctx->pc = 0x2AF330u;
    SET_GPR_U32(ctx, 31, 0x2AF338u);
    ctx->pc = 0x2AF334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF330u;
    // 0x2af334: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEFE0u, 0x2AF330u, 0x2AF338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF338u;
label_2af338:
    // 0x2af338: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2af338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2af33c: 0xc0abbf8  jal         func_2AEFE0
    ctx->pc = 0x2AF33Cu;
    SET_GPR_U32(ctx, 31, 0x2AF344u);
    ctx->pc = 0x2AF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF33Cu;
    // 0x2af340: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEFE0u, 0x2AF33Cu, 0x2AF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF344u;
label_2af344:
    // 0x2af344: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2af344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2af348: 0x27c30004  addiu       $v1, $fp, 0x4
    ctx->pc = 0x2af348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2af34c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2af34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2af350: 0x27c40008  addiu       $a0, $fp, 0x8
    ctx->pc = 0x2af350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x2af354: 0x27c5000c  addiu       $a1, $fp, 0xC
    ctx->pc = 0x2af354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x2af358: 0x27c60010  addiu       $a2, $fp, 0x10
    ctx->pc = 0x2af358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2af35c: 0x27ca0014  addiu       $t2, $fp, 0x14
    ctx->pc = 0x2af35cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x2af360: 0x27cb0018  addiu       $t3, $fp, 0x18
    ctx->pc = 0x2af360u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x2af364: 0x27cd001c  addiu       $t5, $fp, 0x1C
    ctx->pc = 0x2af364u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x2af368: 0xc7808f88  lwc1        $f0, -0x7078($gp)
    ctx->pc = 0x2af368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af36c: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x2af36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x2af370: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x2af370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x2af374: 0xafa4012c  sw          $a0, 0x12C($sp)
    ctx->pc = 0x2af374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
    // 0x2af378: 0x27c30024  addiu       $v1, $fp, 0x24
    ctx->pc = 0x2af378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
    // 0x2af37c: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x2af37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x2af380: 0x27c40028  addiu       $a0, $fp, 0x28
    ctx->pc = 0x2af380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x2af384: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x2af384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x2af388: 0x27c5002c  addiu       $a1, $fp, 0x2C
    ctx->pc = 0x2af388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 44));
    // 0x2af38c: 0xafaa00b4  sw          $t2, 0xB4($sp)
    ctx->pc = 0x2af38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 10));
    // 0x2af390: 0x27c60030  addiu       $a2, $fp, 0x30
    ctx->pc = 0x2af390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x2af394: 0xafab00b8  sw          $t3, 0xB8($sp)
    ctx->pc = 0x2af394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 11));
    // 0x2af398: 0x27ca0034  addiu       $t2, $fp, 0x34
    ctx->pc = 0x2af398u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 52));
    // 0x2af39c: 0xafad00bc  sw          $t5, 0xBC($sp)
    ctx->pc = 0x2af39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 13));
    // 0x2af3a0: 0x27cb0038  addiu       $t3, $fp, 0x38
    ctx->pc = 0x2af3a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    // 0x2af3a4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2af3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2af3a8: 0x27cd003c  addiu       $t5, $fp, 0x3C
    ctx->pc = 0x2af3a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 60));
    // 0x2af3ac: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2af3acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2af3b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af3b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2af3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2af3b8: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2af3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2af3bc: 0x27c20908  addiu       $v0, $fp, 0x908
    ctx->pc = 0x2af3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 2312));
    // 0x2af3c0: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2af3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x2af3c4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2af3c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2af3c8: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x2af3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x2af3cc: 0x27c3090c  addiu       $v1, $fp, 0x90C
    ctx->pc = 0x2af3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 2316));
    // 0x2af3d0: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x2af3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x2af3d4: 0x27c40918  addiu       $a0, $fp, 0x918
    ctx->pc = 0x2af3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2328));
    // 0x2af3d8: 0xafaa00d4  sw          $t2, 0xD4($sp)
    ctx->pc = 0x2af3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 10));
    // 0x2af3dc: 0x27c5091c  addiu       $a1, $fp, 0x91C
    ctx->pc = 0x2af3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 2332));
    // 0x2af3e0: 0xafab00dc  sw          $t3, 0xDC($sp)
    ctx->pc = 0x2af3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 11));
    // 0x2af3e4: 0x27c60928  addiu       $a2, $fp, 0x928
    ctx->pc = 0x2af3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 2344));
    // 0x2af3e8: 0xafad00e4  sw          $t5, 0xE4($sp)
    ctx->pc = 0x2af3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 13));
    // 0x2af3ec: 0x27ca092c  addiu       $t2, $fp, 0x92C
    ctx->pc = 0x2af3ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 2348));
    // 0x2af3f0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2af3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2af3f4: 0x27cb0938  addiu       $t3, $fp, 0x938
    ctx->pc = 0x2af3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 2360));
    // 0x2af3f8: 0x27cd093c  addiu       $t5, $fp, 0x93C
    ctx->pc = 0x2af3f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 2364));
    // 0x2af3fc: 0x44932000  mtc1        $s3, $f4
    ctx->pc = 0x2af3fcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2af400: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2af400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2af404: 0x44922800  mtc1        $s2, $f5
    ctx->pc = 0x2af404u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2af408: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2af408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2af40c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2af40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2af410: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2af410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af414: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2af414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2af418: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2af418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2af41c: 0xafa400f4  sw          $a0, 0xF4($sp)
    ctx->pc = 0x2af41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 4));
    // 0x2af420: 0x27c21200  addiu       $v0, $fp, 0x1200
    ctx->pc = 0x2af420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4608));
    // 0x2af424: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x2af424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x2af428: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x2af428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2af42c: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x2af42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
    // 0x2af430: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2af430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2af434: 0xafaa0100  sw          $t2, 0x100($sp)
    ctx->pc = 0x2af434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 10));
    // 0x2af438: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x2af438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2af43c: 0xafab0110  sw          $t3, 0x110($sp)
    ctx->pc = 0x2af43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 11));
    // 0x2af440: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2af440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af444: 0xafad011c  sw          $t5, 0x11C($sp)
    ctx->pc = 0x2af444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 13));
    // 0x2af448: 0x27c61204  addiu       $a2, $fp, 0x1204
    ctx->pc = 0x2af448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4612));
    // 0x2af44c: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2af44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x2af450: 0x27ca1208  addiu       $t2, $fp, 0x1208
    ctx->pc = 0x2af450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4616));
    // 0x2af454: 0x27ab003c  addiu       $t3, $sp, 0x3C
    ctx->pc = 0x2af454u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2af458: 0x27ad0044  addiu       $t5, $sp, 0x44
    ctx->pc = 0x2af458u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2af45c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2af45cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2af460: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x2af460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x2af464: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2af464u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2af468: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2af468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2af46c: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x2af46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x2af470: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x2af470u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2af474: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x2af474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x2af478: 0x27c3120c  addiu       $v1, $fp, 0x120C
    ctx->pc = 0x2af478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4620));
    // 0x2af47c: 0xafa60118  sw          $a2, 0x118($sp)
    ctx->pc = 0x2af47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 6));
    // 0x2af480: 0x4600aa06  mov.s       $f8, $f21
    ctx->pc = 0x2af480u;
    ctx->f[8] = FPU_MOV_S(ctx->f[21]);
    // 0x2af484: 0xc7af0038  lwc1        $f15, 0x38($sp)
    ctx->pc = 0x2af484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2af488: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2af488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2af48c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x2af48cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2af490: 0xafaa0120  sw          $t2, 0x120($sp)
    ctx->pc = 0x2af490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 10));
    // 0x2af494: 0x46002ac6  mov.s       $f11, $f5
    ctx->pc = 0x2af494u;
    ctx->f[11] = FPU_MOV_S(ctx->f[5]);
    // 0x2af498: 0xafab0104  sw          $t3, 0x104($sp)
    ctx->pc = 0x2af498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 11));
    // 0x2af49c: 0x46002286  mov.s       $f10, $f4
    ctx->pc = 0x2af49cu;
    ctx->f[10] = FPU_MOV_S(ctx->f[4]);
    // 0x2af4a0: 0xafad0114  sw          $t5, 0x114($sp)
    ctx->pc = 0x2af4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 13));
    // 0x2af4a4: 0x24c40200  addiu       $a0, $a2, 0x200
    ctx->pc = 0x2af4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x2af4a8: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x2af4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x2af4ac: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x2af4acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x2af4b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2af4b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2af4b4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2af4b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2af4b8: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x2af4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x2af4bc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2af4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2af4c0: 0x30c607ff  andi        $a2, $a2, 0x7FF
    ctx->pc = 0x2af4c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x2af4c4: 0x24425c60  addiu       $v0, $v0, 0x5C60
    ctx->pc = 0x2af4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x2af4c8: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x2af4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2af4cc: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x2af4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x2af4d0: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x2af4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2af4d4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2af4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2af4d8: 0x30a507ff  andi        $a1, $a1, 0x7FF
    ctx->pc = 0x2af4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x2af4dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af4e0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2af4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af4e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af4e8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2af4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af4ec: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x2af4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x2af4f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2af4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2af4f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2af4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af4f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2af4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2af4fc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2af4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2af500: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2af500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af504: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2af504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2af508: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2af508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af50c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2af50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af510: 0x2463f6d8  addiu       $v1, $v1, -0x928
    ctx->pc = 0x2af510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964952));
    // 0x2af514: 0xafb00140  sw          $s0, 0x140($sp)
    ctx->pc = 0x2af514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 16));
    // 0x2af518: 0x46003346  mov.s       $f13, $f6
    ctx->pc = 0x2af518u;
    ctx->f[13] = FPU_MOV_S(ctx->f[6]);
    // 0x2af51c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2af51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2af520: 0x46003b06  mov.s       $f12, $f7
    ctx->pc = 0x2af520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[7]);
    // 0x2af524: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x2af524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x2af528: 0x46001246  mov.s       $f9, $f2
    ctx->pc = 0x2af528u;
    ctx->f[9] = FPU_MOV_S(ctx->f[2]);
    // 0x2af52c: 0xafa4008c  sw          $a0, 0x8C($sp)
    ctx->pc = 0x2af52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 4));
    // 0x2af530: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2af530u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2af534: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x2af534u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2af538: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x2af538u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x2af53c: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x2af53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x2af540: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x2af540u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2af544: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2af544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2af548: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x2af548u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2af54c: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x2af54cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2af550: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2af550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2af554: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x2af554u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2af558:
    // 0x2af558: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x2af558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2af55c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2af55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2af560: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2af560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2af564: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x2af564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2af568: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2af568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af56c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2af56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2af570: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2af570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af574: 0x600013  mtlo        $v1
    ctx->pc = 0x2af574u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2af578: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x2af578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2af57c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2af57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2af580: 0x46027042  mul.s       $f1, $f14, $f2
    ctx->pc = 0x2af580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2af584: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2af584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2af588: 0x46027882  mul.s       $f2, $f15, $f2
    ctx->pc = 0x2af588u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x2af58c: 0x70621000  madd        $v0, $v1, $v0
    ctx->pc = 0x2af58cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2af590: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2af590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2af594: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x2af594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x2af598: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2af598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2af59c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2af59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2af5a0: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x2af5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x2af5a4: 0x8fad00ac  lw          $t5, 0xAC($sp)
    ctx->pc = 0x2af5a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2af5a8: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x2af5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2af5ac: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x2af5acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af5b0: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x2af5b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2af5b4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2af5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2af5b8: 0x1a25821  addu        $t3, $t5, $v0
    ctx->pc = 0x2af5b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2af5bc: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x2af5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2af5c0: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x2af5c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x2af5c4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2af5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2af5c8: 0x826821  addu        $t5, $a0, $v0
    ctx->pc = 0x2af5c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af5cc: 0xa27021  addu        $t6, $a1, $v0
    ctx->pc = 0x2af5ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af5d0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2af5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2af5d4: 0xc27821  addu        $t7, $a2, $v0
    ctx->pc = 0x2af5d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2af5d8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2af5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2af5dc: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x2af5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2af5e0: 0x3c21821  addu        $v1, $fp, $v0
    ctx->pc = 0x2af5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2af5e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2af5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2af5e8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2af5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af5ec: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x2af5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af5f0: 0xc2b021  addu        $s6, $a2, $v0
    ctx->pc = 0x2af5f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2af5f4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x2af5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2af5f8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2af5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2af5fc: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x2af5fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af600: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2af600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2af604: 0xa2b821  addu        $s7, $a1, $v0
    ctx->pc = 0x2af604u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af608: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2af608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2af60c: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2af60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2af610: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2af610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af614: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x2af614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2af618: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2af618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af61c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2af61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af620: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2af620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af624: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2af624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2af628: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x2af628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x2af62c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2af62cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2af630: 0xafa5009c  sw          $a1, 0x9C($sp)
    ctx->pc = 0x2af630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
    // 0x2af634: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af638: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x2af638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2af63c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2af63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2af640: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2af640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2af644: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2af644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af648: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2af648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2af64c: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x2af64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x2af650: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2af650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af654: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2af654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2af658: 0xc2c021  addu        $t8, $a2, $v0
    ctx->pc = 0x2af658u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2af65c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2af65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x2af660: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x2af660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
    // 0x2af664: 0x62c821  addu        $t9, $v1, $v0
    ctx->pc = 0x2af664u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af668: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x2af668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2af66c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2af66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2af670: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x2af670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2af674: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x2af674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2af678: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x2af678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2af67c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2af67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af680: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2af680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af684: 0xc2a821  addu        $s5, $a2, $v0
    ctx->pc = 0x2af684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2af688: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2af688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2af68c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2af68cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2af690: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2af690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2af694: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2af694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2af698: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x2af698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2af69c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2af69cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2af6a0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2af6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2af6a4: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2af6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2af6a8: 0x800013  mtlo        $a0
    ctx->pc = 0x2af6a8u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x2af6ac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2af6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2af6b0: 0xe54a0000  swc1        $f10, 0x0($t2)
    ctx->pc = 0x2af6b0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2af6b4: 0x8faa0100  lw          $t2, 0x100($sp)
    ctx->pc = 0x2af6b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2af6b8: 0x70894800  madd        $t1, $a0, $t1
    ctx->pc = 0x2af6b8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2af6bc: 0xe5680000  swc1        $f8, 0x0($t3)
    ctx->pc = 0x2af6bcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2af6c0: 0x8fab008c  lw          $t3, 0x8C($sp)
    ctx->pc = 0x2af6c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2af6c4: 0x1428821  addu        $s1, $t2, $v0
    ctx->pc = 0x2af6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2af6c8: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x2af6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2af6cc: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2af6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af6d0: 0x8faa011c  lw          $t2, 0x11C($sp)
    ctx->pc = 0x2af6d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2af6d4: 0x3c0b7f00  lui         $t3, 0x7F00
    ctx->pc = 0x2af6d4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32512 << 16));
    // 0x2af6d8: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x2af6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2af6dc: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x2af6dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
    // 0x2af6e0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2af6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2af6e4: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x2af6e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x2af6e8: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x2af6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2af6ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2af6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2af6f0: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2af6f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2af6f4: 0x8fab0114  lw          $t3, 0x114($sp)
    ctx->pc = 0x2af6f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2af6f8: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x2af6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2af6fc: 0x1473021  addu        $a2, $t2, $a3
    ctx->pc = 0x2af6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2af700: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x2af700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x2af704: 0x8faa0104  lw          $t2, 0x104($sp)
    ctx->pc = 0x2af704u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2af708: 0x1672821  addu        $a1, $t3, $a3
    ctx->pc = 0x2af708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2af70c: 0x8fab0118  lw          $t3, 0x118($sp)
    ctx->pc = 0x2af70cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2af710: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x2af710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2af714: 0x1695021  addu        $t2, $t3, $t1
    ctx->pc = 0x2af714u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2af718: 0x8fab0120  lw          $t3, 0x120($sp)
    ctx->pc = 0x2af718u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2af71c: 0x1696021  addu        $t4, $t3, $t1
    ctx->pc = 0x2af71cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2af720: 0x8fab0124  lw          $t3, 0x124($sp)
    ctx->pc = 0x2af720u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2af724: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x2af724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2af728: 0x8fab0080  lw          $t3, 0x80($sp)
    ctx->pc = 0x2af728u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2af72c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2af72cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2af730: 0xafab0080  sw          $t3, 0x80($sp)
    ctx->pc = 0x2af730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 11));
    // 0x2af734: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x2af734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2af738: 0x8fad0080  lw          $t5, 0x80($sp)
    ctx->pc = 0x2af738u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2af73c: 0x29ab0003  slti        $t3, $t5, 0x3
    ctx->pc = 0x2af73cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2af740: 0x8fad0090  lw          $t5, 0x90($sp)
    ctx->pc = 0x2af740u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2af744: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2af744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af748: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2af748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2af74c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2af74cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2af750: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x2af750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x2af754: 0xe5ea0000  swc1        $f10, 0x0($t7)
    ctx->pc = 0x2af754u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x2af758: 0xe6080000  swc1        $f8, 0x0($s0)
    ctx->pc = 0x2af758u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2af75c: 0x8fad0084  lw          $t5, 0x84($sp)
    ctx->pc = 0x2af75cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2af760: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2af760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af764: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2af764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2af768: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x2af768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2af76c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2af76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2af770: 0x8fad0088  lw          $t5, 0x88($sp)
    ctx->pc = 0x2af770u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2af774: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x2af774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af778: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2af778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2af77c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2af77cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2af780: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x2af780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2af784: 0xe66b0000  swc1        $f11, 0x0($s3)
    ctx->pc = 0x2af784u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2af788: 0xe6880000  swc1        $f8, 0x0($s4)
    ctx->pc = 0x2af788u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2af78c: 0x8fad008c  lw          $t5, 0x8C($sp)
    ctx->pc = 0x2af78cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2af790: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2af790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af794: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2af794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2af798: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x2af798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2af79c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2af79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2af7a0: 0x8fad0090  lw          $t5, 0x90($sp)
    ctx->pc = 0x2af7a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2af7a4: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x2af7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af7a8: 0x8fad0094  lw          $t5, 0x94($sp)
    ctx->pc = 0x2af7a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2af7ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2af7acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2af7b0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2af7b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2af7b4: 0xe5a10000  swc1        $f1, 0x0($t5)
    ctx->pc = 0x2af7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2af7b8: 0x8fad0098  lw          $t5, 0x98($sp)
    ctx->pc = 0x2af7b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2af7bc: 0xe5ab0000  swc1        $f11, 0x0($t5)
    ctx->pc = 0x2af7bcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2af7c0: 0x8fad009c  lw          $t5, 0x9C($sp)
    ctx->pc = 0x2af7c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2af7c4: 0xe5a80000  swc1        $f8, 0x0($t5)
    ctx->pc = 0x2af7c4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2af7c8: 0xe7080000  swc1        $f8, 0x0($t8)
    ctx->pc = 0x2af7c8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x2af7cc: 0xe7280000  swc1        $f8, 0x0($t9)
    ctx->pc = 0x2af7ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x2af7d0: 0x8fad00a0  lw          $t5, 0xA0($sp)
    ctx->pc = 0x2af7d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2af7d4: 0xe5a80000  swc1        $f8, 0x0($t5)
    ctx->pc = 0x2af7d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2af7d8: 0x8fad00a4  lw          $t5, 0xA4($sp)
    ctx->pc = 0x2af7d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2af7dc: 0xe5a80000  swc1        $f8, 0x0($t5)
    ctx->pc = 0x2af7dcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2af7e0: 0xe6a80000  swc1        $f8, 0x0($s5)
    ctx->pc = 0x2af7e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2af7e4: 0xe6280000  swc1        $f8, 0x0($s1)
    ctx->pc = 0x2af7e4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2af7e8: 0xe4880000  swc1        $f8, 0x0($a0)
    ctx->pc = 0x2af7e8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2af7ec: 0xe4480000  swc1        $f8, 0x0($v0)
    ctx->pc = 0x2af7ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2af7f0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2af7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x2af7f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2af7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2af7f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2af7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2af7fc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2af7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2af800: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2af800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2af804: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2af804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2af808: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x2af808u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x2af80c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2af80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2af810: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x2af810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x2af814: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2af814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2af818: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2af818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2af81c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2af81cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2af820: 0x1560ff4d  bnez        $t3, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x2AF820u;
    {
        const bool branch_taken_0x2af820 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF820u;
        // 0x2af824: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af820) {
            ctx->pc = 0x2AF558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af558;
        }
    }
    ctx->pc = 0x2AF828u;
    // 0x2af828: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x2af828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2af82c: 0xdfbe01d0  ld          $fp, 0x1D0($sp)
    ctx->pc = 0x2af82cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2af830: 0xdfb701c0  ld          $s7, 0x1C0($sp)
    ctx->pc = 0x2af830u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2af834: 0xdfb601b0  ld          $s6, 0x1B0($sp)
    ctx->pc = 0x2af834u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2af838: 0xdfb501a0  ld          $s5, 0x1A0($sp)
    ctx->pc = 0x2af838u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2af83c: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x2af83cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2af840: 0xdfb30180  ld          $s3, 0x180($sp)
    ctx->pc = 0x2af840u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2af844: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x2af844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2af848: 0xdfb10160  ld          $s1, 0x160($sp)
    ctx->pc = 0x2af848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2af84c: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x2af84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2af850: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x2af850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2af854: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x2af854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2af858: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x2af858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2af85c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF85Cu;
        // 0x2af860: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF864u;
}
