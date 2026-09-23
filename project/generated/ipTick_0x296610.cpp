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

// Function: ipTick
// Address: 0x296610 - 0x296678
void ipTick_0x296610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipTick_0x296610");
#endif

    switch (ctx->pc) {
        case 0x296640u: goto label_296640;
        default: break;
    }

    ctx->pc = 0x296610u;

    // 0x296610: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x296610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x296614: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x296614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x296618: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x296618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29661c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x296620: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x296620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x296624: 0x244296c0  addiu       $v0, $v0, -0x6940
    ctx->pc = 0x296624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940352));
    // 0x296628: 0x246396d0  addiu       $v1, $v1, -0x6930
    ctx->pc = 0x296628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940368));
    // 0x29662c: 0x248496b0  addiu       $a0, $a0, -0x6950
    ctx->pc = 0x29662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940336));
    // 0x296630: 0x24a596a0  addiu       $a1, $a1, -0x6960
    ctx->pc = 0x296630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940320));
    // 0x296634: 0x24c69690  addiu       $a2, $a2, -0x6970
    ctx->pc = 0x296634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940304));
    // 0x296638: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x296638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29663c: 0x0  nop
    ctx->pc = 0x29663cu;
    // NOP
label_296640:
    // 0x296640: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x296640u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x296644: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x296644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x296648: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x296648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x29664c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x29664cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x296650: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x296650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x296654: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x296654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x296658: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x296658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29665c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x29665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x296660: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x296660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x296664: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x296664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x296668: 0x4e1fff5  bgez        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x296668u;
    {
        const bool branch_taken_0x296668 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x29666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296668u;
        // 0x29666c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296668) {
            ctx->pc = 0x296640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296640;
        }
    }
    ctx->pc = 0x296670u;
    // 0x296670: 0x3e00008  jr          $ra
    ctx->pc = 0x296670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296678u;
}
