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

// Function: chandelierDamage
// Address: 0x279ae8 - 0x279bec
void chandelierDamage_0x279ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chandelierDamage_0x279ae8");
#endif

    switch (ctx->pc) {
        case 0x279b70u: goto label_279b70;
        case 0x279b8cu: goto label_279b8c;
        case 0x279bb0u: goto label_279bb0;
        default: break;
    }

    ctx->pc = 0x279ae8u;

    // 0x279ae8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x279ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x279aec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x279aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x279af0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x279af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x279af4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x279af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x279af8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x279af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x279afc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x279afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b00: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x279b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x279b04: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x279b04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279b08: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x279b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x279b0c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x279b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b10: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x279b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x279b14: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x279b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279b18: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x279b18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x279b1c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x279b1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x279b20: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x279b20u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x279b24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x279b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x279b28: 0x244785a8  addiu       $a3, $v0, -0x7A58
    ctx->pc = 0x279b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935976));
    // 0x279b2c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x279b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x279b30: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x279b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x279b34: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x279b34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A85B0u));
    // 0x279b38: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x279b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279b3c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x279b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279b40: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x279b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x279b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b4c: 0x246785d8  addiu       $a3, $v1, -0x7A28
    ctx->pc = 0x279b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936024));
    // 0x279b50: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x279b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x279b54: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x279b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x279b58: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x279b58u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3A85E0u));
    // 0x279b5c: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x279b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279b60: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x279b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279b64: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x279b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x279b68: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x279B68u;
    SET_GPR_U32(ctx, 31, 0x279B70u);
    ctx->pc = 0x279B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B68u;
    // 0x279b6c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x279B68u, 0x279B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B70u;
label_279b70:
    // 0x279b70: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x279b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x279b74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x279b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x279b78: 0x8e700160  lw          $s0, 0x160($s3)
    ctx->pc = 0x279b78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x279b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x279b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b84: 0xc09e528  jal         func_2794A0
    ctx->pc = 0x279B84u;
    SET_GPR_U32(ctx, 31, 0x279B8Cu);
    ctx->pc = 0x279B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B84u;
    // 0x279b88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794A0u, 0x279B84u, 0x279B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B8Cu;
label_279b8c:
    // 0x279b8c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x279b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x279b90: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x279b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x279b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x279b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ba0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x279ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x279ba4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x279ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279ba8: 0xc09e528  jal         func_2794A0
    ctx->pc = 0x279BA8u;
    SET_GPR_U32(ctx, 31, 0x279BB0u);
    ctx->pc = 0x279BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279BA8u;
    // 0x279bac: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794A0u, 0x279BA8u, 0x279BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BB0u;
label_279bb0:
    // 0x279bb0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x279bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x279bb4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x279bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279bb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x279bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x279bbc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x279bbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x279bc0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x279bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x279bc4: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x279bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x279bc8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x279bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279bcc: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x279bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279bd0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x279bd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279bd4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x279bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x279bd8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x279bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x279bdc: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x279bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x279be0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x279be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279be4: 0x3e00008  jr          $ra
    ctx->pc = 0x279BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BE4u;
        // 0x279be8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279BECu;
}
