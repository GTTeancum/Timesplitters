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

// Function: creditsTextReset
// Address: 0x2aff10 - 0x2aff3c
void creditsTextReset_0x2aff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsTextReset_0x2aff10");
#endif

    ctx->pc = 0x2aff10u;

    // 0x2aff10: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2aff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2aff14: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x2aff14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x2aff18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aff18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff1c: 0x2443f718  addiu       $v1, $v0, -0x8E8
    ctx->pc = 0x2aff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
    // 0x2aff20: 0xac40f718  sw          $zero, -0x8E8($v0)
    ctx->pc = 0x2aff20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F718u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F718u, _value); } while (0);
    // 0x2aff24: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2aff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x36F720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F720u, _value); } while (0); }
    // 0x2aff28: 0xaf80b360  sw          $zero, -0x4CA0($gp)
    ctx->pc = 0x2aff28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947680), GPR_U32(ctx, 0));
    // 0x2aff2c: 0xaf80b354  sw          $zero, -0x4CAC($gp)
    ctx->pc = 0x2aff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947668), GPR_U32(ctx, 0));
    // 0x2aff30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2aff30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F71Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F71Cu, _value); } while (0);
    // 0x2aff34: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF34u;
        // 0x2aff38: 0xaf80b370  sw          $zero, -0x4C90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFF3Cu;
}
