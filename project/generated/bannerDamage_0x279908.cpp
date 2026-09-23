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

// Function: bannerDamage
// Address: 0x279908 - 0x2799dc
void bannerDamage_0x279908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bannerDamage_0x279908");
#endif

    switch (ctx->pc) {
        case 0x279978u: goto label_279978;
        default: break;
    }

    ctx->pc = 0x279908u;

    // 0x279908: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x279908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27990c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27990cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x279910: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x279910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x279914: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x279914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x279918: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x279918u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27991c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27991cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279920: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x279920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x279924: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x279924u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x279928: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x279928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27992c: 0x8e110160  lw          $s1, 0x160($s0)
    ctx->pc = 0x27992cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x279930: 0x244785b8  addiu       $a3, $v0, -0x7A48
    ctx->pc = 0x279930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935992));
    // 0x279934: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x279934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x279938: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x279938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27993c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x27993cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A85C0u));
    // 0x279940: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x279940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279944: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x279944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279948: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x279948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x27994c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x27994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279950: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x279950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279954: 0x246785c8  addiu       $a3, $v1, -0x7A38
    ctx->pc = 0x279954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936008));
    // 0x279958: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x279958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27995c: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x27995cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x279960: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x279960u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3A85D0u));
    // 0x279964: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x279964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279968: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x279968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27996c: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x27996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x279970: 0xc09e528  jal         func_2794A0
    ctx->pc = 0x279970u;
    SET_GPR_U32(ctx, 31, 0x279978u);
    ctx->pc = 0x279974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279970u;
    // 0x279974: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794A0u, 0x279970u, 0x279978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279978u;
label_279978:
    // 0x279978: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x279978u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x27997c: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x27997cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279980: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x279980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x279984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279988: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27998c: 0x0  nop
    ctx->pc = 0x27998cu;
    // NOP
    // 0x279990: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x279990u;
    {
        const bool branch_taken_0x279990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279990u;
        // 0x279994: 0xc62c0014  lwc1        $f12, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279990) {
            ctx->pc = 0x2799ACu;
            goto label_2799ac;
        }
    }
    ctx->pc = 0x279998u;
    // 0x279998: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x279998u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x27999c: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x27999cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x2799a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2799a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2799a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2799A4u;
    {
        const bool branch_taken_0x2799a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2799A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799A4u;
        // 0x2799a8: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799a4) {
            ctx->pc = 0x2799B8u;
            goto label_2799b8;
        }
    }
    ctx->pc = 0x2799ACu;
label_2799ac:
    // 0x2799ac: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x2799acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2799b0: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x2799b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x2799b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2799b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2799b8:
    // 0x2799b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2799b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2799bc: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2799bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2799c0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2799c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2799c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2799c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2799c8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2799c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2799cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2799ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2799d0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2799d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2799d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2799D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2799D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799D4u;
        // 0x2799d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2799D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2799DCu;
}
