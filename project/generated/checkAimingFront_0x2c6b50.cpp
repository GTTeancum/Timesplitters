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

// Function: checkAimingFront
// Address: 0x2c6b50 - 0x2c6cc8
void checkAimingFront_0x2c6b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkAimingFront_0x2c6b50");
#endif

    switch (ctx->pc) {
        case 0x2c6bf8u: goto label_2c6bf8;
        case 0x2c6c60u: goto label_2c6c60;
        case 0x2c6c6cu: goto label_2c6c6c;
        default: break;
    }

    ctx->pc = 0x2c6b50u;

    // 0x2c6b50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c6b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c6b54: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c6b58: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2c6b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2c6b5c: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2c6b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2c6b60: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c6b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2c6b64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c6b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c6b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c6b6c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c6b6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6b70: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2c6b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2c6b74: 0xc6240030  lwc1        $f4, 0x30($s1)
    ctx->pc = 0x2c6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6b78: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x2c6b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6b7c: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c6b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6b80: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x2c6b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b84: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2c6b84u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2c6b88: 0xc6240038  lwc1        $f4, 0x38($s1)
    ctx->pc = 0x2c6b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6b8c: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2c6b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b90: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2c6b90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c6b94: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2c6b94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c6b98: 0x24469d30  addiu       $a2, $v0, -0x62D0
    ctx->pc = 0x2c6b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x2c6b9c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2c6b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c6ba0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2c6ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c6ba4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2c6ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9D38u));
    // 0x2c6ba8: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2c6ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c6bac: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2c6bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c6bb0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c6bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c6bb4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c6bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c6bb8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2c6bb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6bbc: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2c6bbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c6bc0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c6bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6bc4: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2c6bc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6bc8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c6bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6bcc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2c6bccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2c6bd0: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x2c6bd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2c6bd4: 0x0  nop
    ctx->pc = 0x2c6bd4u;
    // NOP
    // 0x2c6bd8: 0x0  nop
    ctx->pc = 0x2c6bd8u;
    // NOP
    // 0x2c6bdc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2c6bdcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c6be0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2c6be0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6be4: 0x0  nop
    ctx->pc = 0x2c6be4u;
    // NOP
    // 0x2c6be8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6BE8u;
    {
        const bool branch_taken_0x2c6be8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BE8u;
        // 0x2c6bec: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6be8) {
            ctx->pc = 0x2C6BF8u;
            goto label_2c6bf8;
        }
    }
    ctx->pc = 0x2C6BF0u;
    // 0x2c6bf0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C6BF0u;
    SET_GPR_U32(ctx, 31, 0x2C6BF8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C6BF0u, 0x2C6BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BF8u;
label_2c6bf8:
    // 0x2c6bf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6bfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6c00: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2c6c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6c04: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2c6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6c08: 0x0  nop
    ctx->pc = 0x2c6c08u;
    // NOP
    // 0x2c6c0c: 0x0  nop
    ctx->pc = 0x2c6c0cu;
    // NOP
    // 0x2c6c10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2c6c10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2c6c14: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2c6c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6c18: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c6c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c1c: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x2c6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2c6c20: 0xc7849198  lwc1        $f4, -0x6E68($gp)
    ctx->pc = 0x2c6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6c24: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c6c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c6c28: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2c6c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c6c2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6c30: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2c6c30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2c6c34: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c6c34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c6c38: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c6c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6c3c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2c6c3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6c40: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2c6c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6c44: 0xc44c0b9c  lwc1        $f12, 0xB9C($v0)
    ctx->pc = 0x2c6c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c6c48: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x2c6c48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2c6c4c: 0x0  nop
    ctx->pc = 0x2c6c4cu;
    // NOP
    // 0x2c6c50: 0x0  nop
    ctx->pc = 0x2c6c50u;
    // NOP
    // 0x2c6c54: 0x46056303  div.s       $f12, $f12, $f5
    ctx->pc = 0x2c6c54u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[5];
    // 0x2c6c58: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C6C58u;
    SET_GPR_U32(ctx, 31, 0x2C6C60u);
    ctx->pc = 0x2C6C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6C58u;
    // 0x2c6c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C6C58u, 0x2C6C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C60u;
label_2c6c60:
    // 0x2c6c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c64: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2C6C64u;
    SET_GPR_U32(ctx, 31, 0x2C6C6Cu);
    ctx->pc = 0x2C6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6C64u;
    // 0x2c6c68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2C6C64u, 0x2C6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C6Cu;
label_2c6c6c:
    // 0x2c6c6c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c6c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c70: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c6c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c74: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2c6c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6c78: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2c6c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6c7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6c80: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2c6c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6c84: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c6c84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c6c88: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2c6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c8c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c6c8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c6c90: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c6c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c6c94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c6c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6c98: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c6c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6c9c: 0x0  nop
    ctx->pc = 0x2c6c9cu;
    // NOP
    // 0x2c6ca0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6CA0u;
    {
        const bool branch_taken_0x2c6ca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CA0u;
        // 0x2c6ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ca0) {
            ctx->pc = 0x2C6CACu;
            goto label_2c6cac;
        }
    }
    ctx->pc = 0x2C6CA8u;
    // 0x2c6ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6cac:
    // 0x2c6cac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c6cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c6cb0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2c6cb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6cb4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2c6cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6cb8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2c6cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6cbc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CC0u;
        // 0x2c6cc4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6CC8u;
}
