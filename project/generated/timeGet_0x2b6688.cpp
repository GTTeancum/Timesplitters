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

// Function: timeGet
// Address: 0x2b6688 - 0x2b66e4
void timeGet_0x2b6688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("timeGet_0x2b6688");
#endif

    ctx->pc = 0x2b6688u;

    // 0x2b6688: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2b6688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2b668c: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x2b668cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x2b6690: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x2b6690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x2b6694: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b6694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b6698: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b6698u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 4));
    // 0x2b669c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x2b669cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x2b66a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x2b66a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B66A4u;
    {
        const bool branch_taken_0x2b66a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B66A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66A4u;
        // 0x2b66a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66a4) {
            ctx->pc = 0x2B66B8u;
            goto label_2b66b8;
        }
    }
    ctx->pc = 0x2B66ACu;
    // 0x2b66ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b66acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b66b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B66B0u;
    {
        const bool branch_taken_0x2b66b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66B0u;
        // 0x2b66b4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66b0) {
            ctx->pc = 0x2B66CCu;
            goto label_2b66cc;
        }
    }
    ctx->pc = 0x2B66B8u;
label_2b66b8:
    // 0x2b66b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b66b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b66bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b66bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b66c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b66c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b66c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b66c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b66c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b66c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b66cc:
    // 0x2b66cc: 0xc7808fd8  lwc1        $f0, -0x7028($gp)
    ctx->pc = 0x2b66ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b66d0: 0x0  nop
    ctx->pc = 0x2b66d0u;
    // NOP
    // 0x2b66d4: 0x0  nop
    ctx->pc = 0x2b66d4u;
    // NOP
    // 0x2b66d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b66d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2b66dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B66DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B66DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B66E4u;
}
