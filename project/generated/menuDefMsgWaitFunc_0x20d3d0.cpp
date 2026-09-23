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

// Function: menuDefMsgWaitFunc
// Address: 0x20d3d0 - 0x20d414
void menuDefMsgWaitFunc_0x20d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuDefMsgWaitFunc_0x20d3d0");
#endif

    switch (ctx->pc) {
        case 0x20d3e4u: goto label_20d3e4;
        case 0x20d400u: goto label_20d400;
        default: break;
    }

    ctx->pc = 0x20d3d0u;

    // 0x20d3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d3d4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20d3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d3dc: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20D3DCu;
    SET_GPR_U32(ctx, 31, 0x20D3E4u);
    ctx->pc = 0x20D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3DCu;
    // 0x20d3e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20D3DCu, 0x20D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3E4u;
label_20d3e4:
    // 0x20d3e4: 0x304208f0  andi        $v0, $v0, 0x8F0
    ctx->pc = 0x20d3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2288);
    // 0x20d3e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D3E8u;
    {
        const bool branch_taken_0x20d3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3E8u;
        // 0x20d3ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3e8) {
            ctx->pc = 0x20D40Cu;
            goto label_20d40c;
        }
    }
    ctx->pc = 0x20D3F0u;
    // 0x20d3f0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20d3f4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x20d3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d3f8: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x20D3F8u;
    SET_GPR_U32(ctx, 31, 0x20D400u);
    ctx->pc = 0x20D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3F8u;
    // 0x20d3fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x20D3F8u, 0x20D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D400u;
label_20d400:
    // 0x20d400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d404: 0x8083512  j           func_20D448
    ctx->pc = 0x20D404u;
    ctx->pc = 0x20D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D404u;
    // 0x20d408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D448u;
    menuEndMessage_0x20d448(rdram, ctx, runtime); return;
    ctx->pc = 0x20D40Cu;
label_20d40c:
    // 0x20d40c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D40Cu;
        // 0x20d410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D414u;
}
