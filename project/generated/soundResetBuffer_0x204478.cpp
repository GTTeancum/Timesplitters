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

// Function: soundResetBuffer
// Address: 0x204478 - 0x20449c
void soundResetBuffer_0x204478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundResetBuffer_0x204478");
#endif

    ctx->pc = 0x204478u;

    // 0x204478: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x204478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x20447c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20447cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x204480: 0x24421790  addiu       $v0, $v0, 0x1790
    ctx->pc = 0x204480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
    // 0x204484: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x204484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x204488: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x204488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20448c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204490: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x204490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x204494: 0x3e00008  jr          $ra
    ctx->pc = 0x204494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204494u;
        // 0x204498: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20449Cu;
}
