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

// Function: zoomtileWindowDest
// Address: 0x250538 - 0x250554
void zoomtileWindowDest_0x250538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtileWindowDest_0x250538");
#endif

    ctx->pc = 0x250538u;

    // 0x250538: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x250538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x25053c: 0xaf87b884  sw          $a3, -0x477C($gp)
    ctx->pc = 0x25053cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948996), GPR_U32(ctx, 7));
    // 0x250540: 0x244340f8  addiu       $v1, $v0, 0x40F8
    ctx->pc = 0x250540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
    // 0x250544: 0xac4440f8  sw          $a0, 0x40F8($v0)
    ctx->pc = 0x250544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1FC40F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC40F8u, _value); } while (0);
    // 0x250548: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x250548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1FC4100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC4100u, _value); } while (0);
    // 0x25054c: 0x3e00008  jr          $ra
    ctx->pc = 0x25054Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25054Cu;
        // 0x250550: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25054Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250554u;
}
