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

// Function: boatsignDamage
// Address: 0x2797a8 - 0x279854
void boatsignDamage_0x2797a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("boatsignDamage_0x2797a8");
#endif

    switch (ctx->pc) {
        case 0x279804u: goto label_279804;
        case 0x279818u: goto label_279818;
        default: break;
    }

    ctx->pc = 0x2797a8u;

    // 0x2797a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2797a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2797ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2797acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2797b0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2797b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2797b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2797b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797b8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2797b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2797bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2797bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797c0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2797c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2797c4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2797c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2797c8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2797c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2797ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2797d0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2797d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2797d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2797d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2797d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2797dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2797dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2797e0: 0x244985a8  addiu       $t1, $v0, -0x7A58
    ctx->pc = 0x2797e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935976));
    // 0x2797e4: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x2797e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2797e8: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x2797e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2797ec: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x2797ecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3A85B0u));
    // 0x2797f0: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2797f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2797f4: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2797f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2797f8: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2797f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2797fc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2797FCu;
    SET_GPR_U32(ctx, 31, 0x279804u);
    ctx->pc = 0x279800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797FCu;
    // 0x279800: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2797FCu, 0x279804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279804u;
label_279804:
    // 0x279804: 0x8e700160  lw          $s0, 0x160($s3)
    ctx->pc = 0x279804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x279808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27980c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27980cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279810: 0xc09e528  jal         func_2794A0
    ctx->pc = 0x279810u;
    SET_GPR_U32(ctx, 31, 0x279818u);
    ctx->pc = 0x279814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279810u;
    // 0x279814: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794A0u, 0x279810u, 0x279818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279818u;
label_279818:
    // 0x279818: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x279818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x27981c: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x27981cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x279820: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x279820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279824: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x279824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279828: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x279828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27982c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27982cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x279830: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x279830u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279834: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x279834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279838: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x279838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27983c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27983cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279840: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x279840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x279844: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x279844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x279848: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x279848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27984c: 0x3e00008  jr          $ra
    ctx->pc = 0x27984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27984Cu;
        // 0x279850: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27984Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279854u;
}
