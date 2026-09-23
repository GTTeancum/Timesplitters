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

// Function: zbtestRestart
// Address: 0x2a6608 - 0x2a663c
void zbtestRestart_0x2a6608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestRestart_0x2a6608");
#endif

    ctx->pc = 0x2a6608u;

    // 0x2a6608: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2a6608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2a660c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6610: 0x2444a0a0  addiu       $a0, $v0, -0x5F60
    ctx->pc = 0x2a6610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x2a6614: 0xaf83b984  sw          $v1, -0x467C($gp)
    ctx->pc = 0x2a6614u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949252), GPR_U32(ctx, 3));
    // 0x2a6618: 0xac40a0a0  sw          $zero, -0x5F60($v0)
    ctx->pc = 0x2a6618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1FEA0A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FEA0A0u, _value); } while (0);
    // 0x2a661c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a661cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1FEA0A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FEA0A8u, _value); } while (0);
    // 0x2a6620: 0xaf83b980  sw          $v1, -0x4680($gp)
    ctx->pc = 0x2a6620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949248), GPR_U32(ctx, 3));
    // 0x2a6624: 0xaf80b988  sw          $zero, -0x4678($gp)
    ctx->pc = 0x2a6624u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949256), GPR_U32(ctx, 0));
    // 0x2a6628: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a6628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1FEA0A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FEA0A4u, _value); } while (0);
    // 0x2a662c: 0xaf80b98c  sw          $zero, -0x4674($gp)
    ctx->pc = 0x2a662cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949260), GPR_U32(ctx, 0));
    // 0x2a6630: 0xaf80b990  sw          $zero, -0x4670($gp)
    ctx->pc = 0x2a6630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949264), GPR_U32(ctx, 0));
    // 0x2a6634: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6634u;
        // 0x2a6638: 0xaf80b994  sw          $zero, -0x466C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A663Cu;
}
