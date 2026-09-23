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

// Function: checkSide
// Address: 0x2c6cc8 - 0x2c6dc4
void checkSide_0x2c6cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkSide_0x2c6cc8");
#endif

    switch (ctx->pc) {
        case 0x2c6d60u: goto label_2c6d60;
        case 0x2c6d6cu: goto label_2c6d6c;
        default: break;
    }

    ctx->pc = 0x2c6cc8u;

    // 0x2c6cc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c6cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c6ccc: 0xc781919c  lwc1        $f1, -0x6E64($gp)
    ctx->pc = 0x2c6cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6cd0: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2c6cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2c6cd4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c6cd8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2c6cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2c6cdc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2c6cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c6ce0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2c6ce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2c6ce4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2c6ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6ce8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c6ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c6cec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c6cecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6cf0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c6cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c6cf4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c6cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c6cf8: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x2c6cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6cfc: 0xc4850030  lwc1        $f5, 0x30($a0)
    ctx->pc = 0x2c6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6d00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6d04: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2c6d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6d08: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2c6d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6d0c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c6d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6d10: 0x0  nop
    ctx->pc = 0x2c6d10u;
    // NOP
    // 0x2c6d14: 0x0  nop
    ctx->pc = 0x2c6d14u;
    // NOP
    // 0x2c6d18: 0x46030303  div.s       $f12, $f0, $f3
    ctx->pc = 0x2c6d18u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[3];
    // 0x2c6d1c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x2c6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d20: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c6d20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c6d24: 0xc4830038  lwc1        $f3, 0x38($a0)
    ctx->pc = 0x2c6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6d28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6d28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6d2c: 0x24469e60  addiu       $a2, $v0, -0x61A0
    ctx->pc = 0x2c6d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942304));
    // 0x2c6d30: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2c6d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c6d34: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2c6d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c6d38: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2c6d38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9E68u));
    // 0x2c6d3c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2c6d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c6d40: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2c6d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c6d44: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c6d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c6d48: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2c6d48u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2c6d4c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2c6d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d54: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c6d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6d58: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C6D58u;
    SET_GPR_U32(ctx, 31, 0x2C6D60u);
    ctx->pc = 0x2C6D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6D58u;
    // 0x2c6d5c: 0xe7a40008  swc1        $f4, 0x8($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C6D58u, 0x2C6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D60u;
label_2c6d60:
    // 0x2c6d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d64: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2C6D64u;
    SET_GPR_U32(ctx, 31, 0x2C6D6Cu);
    ctx->pc = 0x2C6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6D64u;
    // 0x2c6d68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2C6D64u, 0x2C6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D6Cu;
label_2c6d6c:
    // 0x2c6d6c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c6d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6d70: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d74: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2c6d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6d78: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2c6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6d7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6d80: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2c6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6d84: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c6d84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c6d88: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2c6d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6d8c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c6d8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c6d90: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c6d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c6d94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c6d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6d98: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c6d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6d9c: 0x0  nop
    ctx->pc = 0x2c6d9cu;
    // NOP
    // 0x2c6da0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6DA0u;
    {
        const bool branch_taken_0x2c6da0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DA0u;
        // 0x2c6da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6da0) {
            ctx->pc = 0x2C6DACu;
            goto label_2c6dac;
        }
    }
    ctx->pc = 0x2C6DA8u;
    // 0x2c6da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6dac:
    // 0x2c6dac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c6dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6db0: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2c6db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6db4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2c6db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6db8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2c6db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DBCu;
        // 0x2c6dc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6DC4u;
}
