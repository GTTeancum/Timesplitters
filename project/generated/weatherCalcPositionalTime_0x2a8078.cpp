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

// Function: weatherCalcPositionalTime
// Address: 0x2a8078 - 0x2a80c8
void weatherCalcPositionalTime_0x2a8078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weatherCalcPositionalTime_0x2a8078");
#endif

    ctx->pc = 0x2a8078u;

    // 0x2a8078: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a8078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a807c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8080: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x2a8080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x2a8084: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2a8084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8088: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2a8088u;
    { uint32_t bits = FAST_READ32(0x36A700u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a808c: 0xc4440034  lwc1        $f4, 0x34($v0)
    ctx->pc = 0x2a808cu;
    { uint32_t bits = FAST_READ32(0x36A704u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8090: 0x0  nop
    ctx->pc = 0x2a8090u;
    // NOP
    // 0x2a8094: 0x0  nop
    ctx->pc = 0x2a8094u;
    // NOP
    // 0x2a8098: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2a8098u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x2a809c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2a809cu;
    { uint32_t bits = FAST_READ32(0x36A708u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a80a0: 0x0  nop
    ctx->pc = 0x2a80a0u;
    // NOP
    // 0x2a80a4: 0x0  nop
    ctx->pc = 0x2a80a4u;
    // NOP
    // 0x2a80a8: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x2a80a8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
    // 0x2a80ac: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a80b0: 0x0  nop
    ctx->pc = 0x2a80b0u;
    // NOP
    // 0x2a80b4: 0x0  nop
    ctx->pc = 0x2a80b4u;
    // NOP
    // 0x2a80b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2a80b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a80bc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2a80bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2a80c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A80C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80C0u;
        // 0x2a80c4: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A80C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A80C8u;
}
