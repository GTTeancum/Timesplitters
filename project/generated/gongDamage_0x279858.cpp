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

// Function: gongDamage
// Address: 0x279858 - 0x279908
void gongDamage_0x279858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gongDamage_0x279858");
#endif

    switch (ctx->pc) {
        case 0x2798b0u: goto label_2798b0;
        case 0x2798c4u: goto label_2798c4;
        case 0x2798ecu: goto label_2798ec;
        default: break;
    }

    ctx->pc = 0x279858u;

    // 0x279858: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x279858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27985c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27985cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x279860: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x279860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x279864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279868: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x279868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27986c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27986cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279870: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x279870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x279874: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x279874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279878: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x279878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27987c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x27987cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x279880: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x279880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x279884: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x279884u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x279888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27988c: 0x244985a8  addiu       $t1, $v0, -0x7A58
    ctx->pc = 0x27988cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935976));
    // 0x279890: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x279890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x279894: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x279894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x279898: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x279898u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3A85B0u));
    // 0x27989c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x27989cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2798a0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2798a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2798a4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2798a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2798a8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2798A8u;
    SET_GPR_U32(ctx, 31, 0x2798B0u);
    ctx->pc = 0x2798ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798A8u;
    // 0x2798ac: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2798A8u, 0x2798B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798B0u;
label_2798b0:
    // 0x2798b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2798b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2798b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798b8: 0x8e500160  lw          $s0, 0x160($s2)
    ctx->pc = 0x2798b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2798bc: 0xc09e528  jal         func_2794A0
    ctx->pc = 0x2798BCu;
    SET_GPR_U32(ctx, 31, 0x2798C4u);
    ctx->pc = 0x2798C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798BCu;
    // 0x2798c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794A0u, 0x2798BCu, 0x2798C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798C4u;
label_2798c4:
    // 0x2798c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2798c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2798c8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2798c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2798cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2798ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2798d0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2798d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2798d4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x2798d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2798d8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2798d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2798dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2798dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2798e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2798e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2798e4: 0xc081546  jal         func_205518
    ctx->pc = 0x2798E4u;
    SET_GPR_U32(ctx, 31, 0x2798ECu);
    ctx->pc = 0x2798E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798E4u;
    // 0x2798e8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2798E4u, 0x2798ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798ECu;
label_2798ec:
    // 0x2798ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2798ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2798f0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2798f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2798f4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2798f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2798f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2798f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2798fc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2798fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x279900: 0x3e00008  jr          $ra
    ctx->pc = 0x279900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279900u;
        // 0x279904: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279908u;
}
