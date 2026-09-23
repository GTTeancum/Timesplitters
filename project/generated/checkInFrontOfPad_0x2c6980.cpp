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

// Function: checkInFrontOfPad
// Address: 0x2c6980 - 0x2c6b00
void checkInFrontOfPad_0x2c6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkInFrontOfPad_0x2c6980");
#endif

    switch (ctx->pc) {
        case 0x2c6a30u: goto label_2c6a30;
        case 0x2c6a9cu: goto label_2c6a9c;
        case 0x2c6aa8u: goto label_2c6aa8;
        default: break;
    }

    ctx->pc = 0x2c6980u;

    // 0x2c6980: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c6984: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c6984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c6988: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2c6988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2c698c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c698cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c6990: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x2c6990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2c6994: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2c6994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2c6998: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2c6998u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2c699c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2c699cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c69a0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c69a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c69a4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c69a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c69a8: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2c69a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c69ac: 0x24689d30  addiu       $t0, $v1, -0x62D0
    ctx->pc = 0x2c69acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942000));
    // 0x2c69b0: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x2c69b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c69b4: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x2c69b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c69b8: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2c69b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c69bc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2c69bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c69c0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2c69c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c69c4: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x2c69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x2c69c8: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2c69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2c69cc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69d0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2c69d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c69d4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c69d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c69d8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c69d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c69dc: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2c69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c69e0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2c69e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c69e4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c69e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c69e8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c69ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c69f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c69f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c69f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c69f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c69f8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2c69f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69fc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c69fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c6a00: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c6a00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c6a04: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2c6a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c6a08: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x2c6a08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c6a0c: 0x0  nop
    ctx->pc = 0x2c6a0cu;
    // NOP
    // 0x2c6a10: 0x0  nop
    ctx->pc = 0x2c6a10u;
    // NOP
    // 0x2c6a14: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2c6a14u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c6a18: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2c6a18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6a1c: 0x0  nop
    ctx->pc = 0x2c6a1cu;
    // NOP
    // 0x2c6a20: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6A20u;
    {
        const bool branch_taken_0x2c6a20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A20u;
        // 0x2c6a24: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a20) {
            ctx->pc = 0x2C6A34u;
            goto label_2c6a34;
        }
    }
    ctx->pc = 0x2C6A28u;
    // 0x2c6a28: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C6A28u;
    SET_GPR_U32(ctx, 31, 0x2C6A30u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C6A28u, 0x2C6A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A30u;
label_2c6a30:
    // 0x2c6a30: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2c6a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
label_2c6a34:
    // 0x2c6a34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6a38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6a3c: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2c6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2c6a40: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2c6a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6a44: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2c6a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6a48: 0x0  nop
    ctx->pc = 0x2c6a48u;
    // NOP
    // 0x2c6a4c: 0x0  nop
    ctx->pc = 0x2c6a4cu;
    // NOP
    // 0x2c6a50: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2c6a50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2c6a54: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2c6a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6a58: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c6a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6a5c: 0xc7849194  lwc1        $f4, -0x6E6C($gp)
    ctx->pc = 0x2c6a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6a60: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c6a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c6a64: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2c6a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c6a68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6a6c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2c6a6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2c6a70: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c6a70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c6a74: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c6a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6a78: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2c6a78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6a7c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2c6a7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6a80: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x2c6a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c6a84: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x2c6a84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2c6a88: 0x0  nop
    ctx->pc = 0x2c6a88u;
    // NOP
    // 0x2c6a8c: 0x0  nop
    ctx->pc = 0x2c6a8cu;
    // NOP
    // 0x2c6a90: 0x46056303  div.s       $f12, $f12, $f5
    ctx->pc = 0x2c6a90u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[5];
    // 0x2c6a94: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C6A94u;
    SET_GPR_U32(ctx, 31, 0x2C6A9Cu);
    ctx->pc = 0x2C6A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A94u;
    // 0x2c6a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C6A94u, 0x2C6A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A9Cu;
label_2c6a9c:
    // 0x2c6a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6aa0: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2C6AA0u;
    SET_GPR_U32(ctx, 31, 0x2C6AA8u);
    ctx->pc = 0x2C6AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6AA0u;
    // 0x2c6aa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2C6AA0u, 0x2C6AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6AA8u;
label_2c6aa8:
    // 0x2c6aa8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c6aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6aac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c6aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ab0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2c6ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6ab4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2c6ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6ab8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6abc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2c6abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6ac0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c6ac0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c6ac4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2c6ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6ac8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c6ac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c6acc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c6accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c6ad0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c6ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6ad4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c6ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6ad8: 0x0  nop
    ctx->pc = 0x2c6ad8u;
    // NOP
    // 0x2c6adc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6ADCu;
    {
        const bool branch_taken_0x2c6adc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6ADCu;
        // 0x2c6ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6adc) {
            ctx->pc = 0x2C6AE8u;
            goto label_2c6ae8;
        }
    }
    ctx->pc = 0x2C6AE4u;
    // 0x2c6ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6ae8:
    // 0x2c6ae8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c6ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6aec: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2c6aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6af0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2c6af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6af4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2c6af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6af8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AF8u;
        // 0x2c6afc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6B00u;
}
