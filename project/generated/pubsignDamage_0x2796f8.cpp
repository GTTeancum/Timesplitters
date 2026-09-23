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

// Function: pubsignDamage
// Address: 0x2796f8 - 0x2797a8
void pubsignDamage_0x2796f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pubsignDamage_0x2796f8");
#endif

    switch (ctx->pc) {
        case 0x279750u: goto label_279750;
        case 0x279764u: goto label_279764;
        case 0x27978cu: goto label_27978c;
        default: break;
    }

    ctx->pc = 0x2796f8u;

    // 0x2796f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2796f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2796fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2796fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x279700: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x279700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x279704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279708: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x279708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27970c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27970cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279710: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x279710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x279714: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x279714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279718: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x279718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27971c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x27971cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x279720: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x279720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x279724: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x279724u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x279728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27972c: 0x244985a8  addiu       $t1, $v0, -0x7A58
    ctx->pc = 0x27972cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935976));
    // 0x279730: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x279730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x279734: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x279734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x279738: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x279738u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3A85B0u));
    // 0x27973c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x27973cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279740: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x279740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279744: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x279744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x279748: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x279748u;
    SET_GPR_U32(ctx, 31, 0x279750u);
    ctx->pc = 0x27974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279748u;
    // 0x27974c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x279748u, 0x279750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279750u;
label_279750:
    // 0x279750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279754: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x279754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279758: 0x8e500160  lw          $s0, 0x160($s2)
    ctx->pc = 0x279758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x27975c: 0xc09e528  jal         func_2794A0
    ctx->pc = 0x27975Cu;
    SET_GPR_U32(ctx, 31, 0x279764u);
    ctx->pc = 0x279760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27975Cu;
    // 0x279760: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794A0u, 0x27975Cu, 0x279764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279764u;
label_279764:
    // 0x279764: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x279764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x279768: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x279768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x27976c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27976cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279770: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x279770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279774: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x279774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x279778: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x279778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x27977c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27977cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x279780: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x279780u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279784: 0xc081546  jal         func_205518
    ctx->pc = 0x279784u;
    SET_GPR_U32(ctx, 31, 0x27978Cu);
    ctx->pc = 0x279788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279784u;
    // 0x279788: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x279784u, 0x27978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27978Cu;
label_27978c:
    // 0x27978c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27978cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279790: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x279790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279794: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x279794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279798: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x279798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27979c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27979cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2797a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2797A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2797A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797A0u;
        // 0x2797a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2797A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2797A8u;
}
