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

// Function: signonUpdateStart
// Address: 0x231d18 - 0x231d4c
void signonUpdateStart_0x231d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonUpdateStart_0x231d18");
#endif

    ctx->pc = 0x231d18u;

    // 0x231d18: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x231d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x231d1c: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x231d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x231d20: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x231d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x231d24: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x231d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x231d28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x231d28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x231d2c: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x231d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x231d30: 0xa380b75b  sb          $zero, -0x48A5($gp)
    ctx->pc = 0x231d30u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948699), (uint8_t)GPR_U32(ctx, 0));
    // 0x231d34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x231d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x231d38: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x231d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x231d3c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x231d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x231d40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x231d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x231d44: 0x3e00008  jr          $ra
    ctx->pc = 0x231D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D44u;
        // 0x231d48: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D4Cu;
}
