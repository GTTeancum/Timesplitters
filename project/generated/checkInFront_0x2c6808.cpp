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

// Function: checkInFront
// Address: 0x2c6808 - 0x2c6980
void checkInFront_0x2c6808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkInFront_0x2c6808");
#endif

    switch (ctx->pc) {
        case 0x2c68b0u: goto label_2c68b0;
        case 0x2c6918u: goto label_2c6918;
        case 0x2c6924u: goto label_2c6924;
        default: break;
    }

    ctx->pc = 0x2c6808u;

    // 0x2c6808: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c6808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c680c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c6810: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2c6810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2c6814: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2c6814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2c6818: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2c6818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c681c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c681cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2c6820: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6824: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c6824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c6828: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c6828u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c682c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2c682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2c6830: 0xc6240030  lwc1        $f4, 0x30($s1)
    ctx->pc = 0x2c6830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6834: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2c6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6838: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c683c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6840: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2c6840u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2c6844: 0xc6240038  lwc1        $f4, 0x38($s1)
    ctx->pc = 0x2c6844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6848: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c6848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c684c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2c684cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c6850: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2c6850u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c6854: 0x24469d30  addiu       $a2, $v0, -0x62D0
    ctx->pc = 0x2c6854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x2c6858: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2c6858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c685c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2c685cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c6860: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2c6860u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9D38u));
    // 0x2c6864: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2c6864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c6868: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2c6868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c686c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c686cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c6870: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c6870u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c6874: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2c6874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6878: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2c6878u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c687c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c687cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6880: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2c6880u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6884: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2c6884u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2c6888: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x2c6888u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2c688c: 0x0  nop
    ctx->pc = 0x2c688cu;
    // NOP
    // 0x2c6890: 0x0  nop
    ctx->pc = 0x2c6890u;
    // NOP
    // 0x2c6894: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2c6894u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c6898: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2c6898u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c689c: 0x0  nop
    ctx->pc = 0x2c689cu;
    // NOP
    // 0x2c68a0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C68A0u;
    {
        const bool branch_taken_0x2c68a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68A0u;
        // 0x2c68a4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68a0) {
            ctx->pc = 0x2C68B4u;
            goto label_2c68b4;
        }
    }
    ctx->pc = 0x2C68A8u;
    // 0x2c68a8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C68A8u;
    SET_GPR_U32(ctx, 31, 0x2C68B0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C68A8u, 0x2C68B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68B0u;
label_2c68b0:
    // 0x2c68b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c68b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c68b4:
    // 0x2c68b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c68b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c68b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c68b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c68bc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2c68bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c68c0: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x2c68c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c68c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c68c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68c8: 0xc7809190  lwc1        $f0, -0x6E70($gp)
    ctx->pc = 0x2c68c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68cc: 0x0  nop
    ctx->pc = 0x2c68ccu;
    // NOP
    // 0x2c68d0: 0x0  nop
    ctx->pc = 0x2c68d0u;
    // NOP
    // 0x2c68d4: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x2c68d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[1];
    // 0x2c68d8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c68d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c68dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2c68dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c68e0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2c68e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c68e4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c68e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c68e8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2c68e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c68ec: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c68ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68f0: 0x0  nop
    ctx->pc = 0x2c68f0u;
    // NOP
    // 0x2c68f4: 0x0  nop
    ctx->pc = 0x2c68f4u;
    // NOP
    // 0x2c68f8: 0x46046303  div.s       $f12, $f12, $f4
    ctx->pc = 0x2c68f8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[4];
    // 0x2c68fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c68fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c6900: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c6900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c6904: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c6904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c6908: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c6908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c690c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2c690cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6910: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C6910u;
    SET_GPR_U32(ctx, 31, 0x2C6918u);
    ctx->pc = 0x2C6914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6910u;
    // 0x2c6914: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C6910u, 0x2C6918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6918u;
label_2c6918:
    // 0x2c6918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c691c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2C691Cu;
    SET_GPR_U32(ctx, 31, 0x2C6924u);
    ctx->pc = 0x2C6920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C691Cu;
    // 0x2c6920: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2C691Cu, 0x2C6924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6924u;
label_2c6924:
    // 0x2c6924: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c6924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6928: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c6928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c692c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2c692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6930: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2c6930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6934: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6938: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2c6938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c693c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c693cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c6940: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2c6940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6944: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c6944u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c6948: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c6948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c694c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c694cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6950: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c6950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6954: 0x0  nop
    ctx->pc = 0x2c6954u;
    // NOP
    // 0x2c6958: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6958u;
    {
        const bool branch_taken_0x2c6958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6958u;
        // 0x2c695c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6958) {
            ctx->pc = 0x2C6964u;
            goto label_2c6964;
        }
    }
    ctx->pc = 0x2C6960u;
    // 0x2c6960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6964:
    // 0x2c6964: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c6964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c6968: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2c6968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c696c: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2c696cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6970: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2c6970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6974: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c6974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6978: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6978u;
        // 0x2c697c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6980u;
}
