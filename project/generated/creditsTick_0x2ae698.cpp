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

// Function: creditsTick
// Address: 0x2ae698 - 0x2ae6c8
void creditsTick_0x2ae698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsTick_0x2ae698");
#endif

    switch (ctx->pc) {
        case 0x2ae6bcu: goto label_2ae6bc;
        default: break;
    }

    ctx->pc = 0x2ae698u;

    // 0x2ae698: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2ae698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae69c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae69cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae6a0: 0xc7828f60  lwc1        $f2, -0x70A0($gp)
    ctx->pc = 0x2ae6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ae6a4: 0xc781b384  lwc1        $f1, -0x4C7C($gp)
    ctx->pc = 0x2ae6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae6a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ae6a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ae6ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae6b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ae6b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ae6b4: 0xc0abab2  jal         func_2AEAC8
    ctx->pc = 0x2AE6B4u;
    SET_GPR_U32(ctx, 31, 0x2AE6BCu);
    ctx->pc = 0x2AE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6B4u;
    // 0x2ae6b8: 0xe781b384  swc1        $f1, -0x4C7C($gp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947716), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAC8u, 0x2AE6B4u, 0x2AE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE6BCu;
label_2ae6bc:
    // 0x2ae6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae6c0: 0x80abfd0  j           func_2AFF40
    ctx->pc = 0x2AE6C0u;
    ctx->pc = 0x2AE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6C0u;
    // 0x2ae6c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFF40u;
    creditsTextTick_0x2aff40(rdram, ctx, runtime); return;
    ctx->pc = 0x2AE6C8u;
}
