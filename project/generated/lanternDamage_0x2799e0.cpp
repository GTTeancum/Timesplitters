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

// Function: lanternDamage
// Address: 0x2799e0 - 0x279ae4
void lanternDamage_0x2799e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lanternDamage_0x2799e0");
#endif

    switch (ctx->pc) {
        case 0x279a68u: goto label_279a68;
        case 0x279a84u: goto label_279a84;
        case 0x279aa8u: goto label_279aa8;
        default: break;
    }

    ctx->pc = 0x2799e0u;

    // 0x2799e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2799e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2799e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2799e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2799e8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2799e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2799ec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2799ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2799f0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2799f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2799f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2799f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2799f8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2799f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2799fc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2799fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279a00: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x279a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x279a04: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x279a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a08: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x279a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x279a0c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x279a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279a10: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x279a10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x279a14: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x279a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x279a18: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x279a18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x279a1c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x279a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x279a20: 0x244785a8  addiu       $a3, $v0, -0x7A58
    ctx->pc = 0x279a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935976));
    // 0x279a24: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x279a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x279a28: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x279a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x279a2c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x279a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A85B0u));
    // 0x279a30: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x279a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279a34: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x279a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279a38: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x279a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x279a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a44: 0x246785d8  addiu       $a3, $v1, -0x7A28
    ctx->pc = 0x279a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936024));
    // 0x279a48: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x279a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x279a4c: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x279a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x279a50: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x279a50u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3A85E0u));
    // 0x279a54: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x279a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279a58: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x279a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279a5c: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x279a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x279a60: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x279A60u;
    SET_GPR_U32(ctx, 31, 0x279A68u);
    ctx->pc = 0x279A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A60u;
    // 0x279a64: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x279A60u, 0x279A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A68u;
label_279a68:
    // 0x279a68: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x279a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x279a6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x279a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x279a70: 0x8e700160  lw          $s0, 0x160($s3)
    ctx->pc = 0x279a70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x279a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x279a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a7c: 0xc09e528  jal         func_2794A0
    ctx->pc = 0x279A7Cu;
    SET_GPR_U32(ctx, 31, 0x279A84u);
    ctx->pc = 0x279A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A7Cu;
    // 0x279a80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794A0u, 0x279A7Cu, 0x279A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A84u;
label_279a84:
    // 0x279a84: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x279a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x279a88: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x279a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x279a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x279a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a98: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x279a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x279a9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x279a9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279aa0: 0xc09e528  jal         func_2794A0
    ctx->pc = 0x279AA0u;
    SET_GPR_U32(ctx, 31, 0x279AA8u);
    ctx->pc = 0x279AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279AA0u;
    // 0x279aa4: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794A0u, 0x279AA0u, 0x279AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AA8u;
label_279aa8:
    // 0x279aa8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x279aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x279aac: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x279aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279ab0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x279ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x279ab4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x279ab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x279ab8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x279ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x279abc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x279abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x279ac0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x279ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279ac4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x279ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279ac8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x279ac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279acc: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x279accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x279ad0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x279ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x279ad4: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x279ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x279ad8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x279ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279adc: 0x3e00008  jr          $ra
    ctx->pc = 0x279ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279ADCu;
        // 0x279ae0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279AE4u;
}
