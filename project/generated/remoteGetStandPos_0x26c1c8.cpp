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

// Function: remoteGetStandPos
// Address: 0x26c1c8 - 0x26c314
void remoteGetStandPos_0x26c1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("remoteGetStandPos_0x26c1c8");
#endif

    switch (ctx->pc) {
        case 0x26c1fcu: goto label_26c1fc;
        case 0x26c244u: goto label_26c244;
        case 0x26c250u: goto label_26c250;
        case 0x26c2b0u: goto label_26c2b0;
        case 0x26c2bcu: goto label_26c2bc;
        default: break;
    }

    ctx->pc = 0x26c1c8u;

    // 0x26c1c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x26c1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x26c1cc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x26c1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x26c1d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c1d4: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x26c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x26c1d8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x26c1d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x26c1dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26c1dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c1e0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x26c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x26c1e4: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x26c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x26c1e8: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x26c1e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x26c1ec: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x26c1ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x26c1f0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x26c1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x26c1f4: 0xc09a530  jal         func_2694C0
    ctx->pc = 0x26C1F4u;
    SET_GPR_U32(ctx, 31, 0x26C1FCu);
    ctx->pc = 0x26C1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1F4u;
    // 0x26c1f8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2694C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2694C0u, 0x26C1F4u, 0x26C1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1FCu;
label_26c1fc:
    // 0x26c1fc: 0xc7968444  lwc1        $f22, -0x7BBC($gp)
    ctx->pc = 0x26c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26c200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c204: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x26c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c208: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x26c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c20c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x26c20cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c210: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x26c210u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x26c214: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26c214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26c218: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26c218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26c21c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26c220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c224: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x26c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c228: 0x0  nop
    ctx->pc = 0x26c228u;
    // NOP
    // 0x26c22c: 0x0  nop
    ctx->pc = 0x26c22cu;
    // NOP
    // 0x26c230: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x26c230u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x26c234: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26c234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26c238: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x26c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c23c: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x26C23Cu;
    SET_GPR_U32(ctx, 31, 0x26C244u);
    ctx->pc = 0x26C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C23Cu;
    // 0x26c240: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x26C23Cu, 0x26C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C244u;
label_26c244:
    // 0x26c244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c248: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x26C248u;
    SET_GPR_U32(ctx, 31, 0x26C250u);
    ctx->pc = 0x26C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C248u;
    // 0x26c24c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x26C248u, 0x26C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C250u;
label_26c250:
    // 0x26c250: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x26c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c254: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x26c254u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x26c258: 0xc6050038  lwc1        $f5, 0x38($s0)
    ctx->pc = 0x26c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26c25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c260: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x26c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c264: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x26c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c268: 0x0  nop
    ctx->pc = 0x26c268u;
    // NOP
    // 0x26c26c: 0x0  nop
    ctx->pc = 0x26c26cu;
    // NOP
    // 0x26c270: 0x4615a303  div.s       $f12, $f20, $f21
    ctx->pc = 0x26c270u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[21];
    // 0x26c274: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x26c274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c278: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c27c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x26c27cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x26c280: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x26c280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x26c284: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26c284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26c288: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x26c288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x26c28c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x26c28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x26c290: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26c290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26c294: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x26c294u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26c298: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26c298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26c29c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26c29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26c2a0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x26c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c2a4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26c2a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26c2a8: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x26C2A8u;
    SET_GPR_U32(ctx, 31, 0x26C2B0u);
    ctx->pc = 0x26C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C2A8u;
    // 0x26c2ac: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x26C2A8u, 0x26C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2B0u;
label_26c2b0:
    // 0x26c2b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2b4: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x26C2B4u;
    SET_GPR_U32(ctx, 31, 0x26C2BCu);
    ctx->pc = 0x26C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C2B4u;
    // 0x26c2b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x26C2B4u, 0x26C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2BCu;
label_26c2bc:
    // 0x26c2bc: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x26c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c2c0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x26c2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c2c4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x26c2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c2c8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x26c2c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x26c2cc: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x26c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c2d0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26c2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c2d4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x26c2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c2d8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x26c2d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x26c2dc: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x26c2dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x26c2e0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x26c2e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x26c2e4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x26c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c2e8: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x26c2e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x26c2ec: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x26c2ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26c2f0: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x26c2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x26c2f4: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x26c2f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26c2f8: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x26c2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c2fc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x26c2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c300: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x26c300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26c304: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x26c304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26c308: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x26c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c30c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C30Cu;
        // 0x26c310: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C314u;
}
