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

// Function: r_calcestcost
// Address: 0x266768 - 0x2667f0
void r_calcestcost_0x266768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r_calcestcost_0x266768");
#endif

    switch (ctx->pc) {
        case 0x2667e4u: goto label_2667e4;
        default: break;
    }

    ctx->pc = 0x266768u;

    // 0x266768: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x266768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26676c: 0x8f82a2ec  lw          $v0, -0x5D14($gp)
    ctx->pc = 0x26676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x266770: 0xa33018  mult        $a2, $a1, $v1
    ctx->pc = 0x266770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x266774: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x266774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x266778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26677c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266780: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x266780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x266784: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266788: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x266788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26678c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x26678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x266790: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x266790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x266794: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x266794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x266798: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x266798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x26679c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x26679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2667a0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2667a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2667a4: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2667a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2667a8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2667a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2667ac: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2667acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2667b0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2667b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2667b4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2667b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2667b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2667b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2667bc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2667bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2667c0: 0x0  nop
    ctx->pc = 0x2667c0u;
    // NOP
    // 0x2667c4: 0x0  nop
    ctx->pc = 0x2667c4u;
    // NOP
    // 0x2667c8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2667c8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2667cc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2667ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2667d0: 0x0  nop
    ctx->pc = 0x2667d0u;
    // NOP
    // 0x2667d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2667D4u;
    {
        const bool branch_taken_0x2667d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2667D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667D4u;
        // 0x2667d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667d4) {
            ctx->pc = 0x2667E8u;
            goto label_2667e8;
        }
    }
    ctx->pc = 0x2667DCu;
    // 0x2667dc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2667DCu;
    SET_GPR_U32(ctx, 31, 0x2667E4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2667DCu, 0x2667E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667E4u;
label_2667e4:
    // 0x2667e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2667e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2667e8:
    // 0x2667e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2667E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2667ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667E8u;
        // 0x2667ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2667E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2667F0u;
}
