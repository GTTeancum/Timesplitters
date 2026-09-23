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

// Function: displayoffsetx_onchange
// Address: 0x231240 - 0x231288
void displayoffsetx_onchange_0x231240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("displayoffsetx_onchange_0x231240");
#endif

    ctx->pc = 0x231240u;

    // 0x231240: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x231240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231244: 0x2406f000  addiu       $a2, $zero, -0x1000
    ctx->pc = 0x231244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x231248: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x231248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x23124c: 0x24843480  addiu       $a0, $a0, 0x3480
    ctx->pc = 0x23124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    // 0x231250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x231250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x231254: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x231254u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x231258: 0x244202a4  addiu       $v0, $v0, 0x2A4
    ctx->pc = 0x231258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 676));
    // 0x23125c: 0x30420ffc  andi        $v0, $v0, 0xFFC
    ctx->pc = 0x23125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4092);
    // 0x231260: 0xdc850040  ld          $a1, 0x40($a0)
    ctx->pc = 0x231260u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x231264: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x231264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x231268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x231268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23126c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x23126cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x231270: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x231270u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x231274: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x231274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x231278: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x231278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23127c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x23127cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x231280: 0x3e00008  jr          $ra
    ctx->pc = 0x231280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231280u;
        // 0x231284: 0xfc850040  sd          $a1, 0x40($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231288u;
}
