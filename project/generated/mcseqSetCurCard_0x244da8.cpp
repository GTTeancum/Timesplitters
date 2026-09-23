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

// Function: mcseqSetCurCard
// Address: 0x244da8 - 0x244ddc
void mcseqSetCurCard_0x244da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqSetCurCard_0x244da8");
#endif

    ctx->pc = 0x244da8u;

    // 0x244da8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x244da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x244dac: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x244dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x244db0: 0x24423710  addiu       $v0, $v0, 0x3710
    ctx->pc = 0x244db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x244db4: 0x8f86a0c8  lw          $a2, -0x5F38($gp)
    ctx->pc = 0x244db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x244db8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x244db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x244dbc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x244dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x244dc0: 0x3463fff9  ori         $v1, $v1, 0xFFF9
    ctx->pc = 0x244dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65529);
    // 0x244dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244dc8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x244dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x244dcc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x244dccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x244dd0: 0xaf86a0c8  sw          $a2, -0x5F38($gp)
    ctx->pc = 0x244dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 6));
    // 0x244dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x244DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DD4u;
        // 0x244dd8: 0xaf84b818  sw          $a0, -0x47E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948888), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244DDCu;
}
