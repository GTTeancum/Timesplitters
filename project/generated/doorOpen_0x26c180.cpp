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

// Function: doorOpen
// Address: 0x26c180 - 0x26c1a4
void doorOpen_0x26c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("doorOpen_0x26c180");
#endif

    ctx->pc = 0x26c180u;

    // 0x26c180: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x26c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x26c184: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26c184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26c188: 0x24420da0  addiu       $v0, $v0, 0xDA0
    ctx->pc = 0x26c188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x26c18c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26c18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c190: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26c194: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c198: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x26c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x26c19c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C19Cu;
        // 0x26c1a0: 0xac450018  sw          $a1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C1A4u;
}
