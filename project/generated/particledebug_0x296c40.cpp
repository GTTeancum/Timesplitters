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

// Function: particledebug
// Address: 0x296c40 - 0x296c90
void particledebug_0x296c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particledebug_0x296c40");
#endif

    switch (ctx->pc) {
        case 0x296c5cu: goto label_296c5c;
        case 0x296c68u: goto label_296c68;
        case 0x296c74u: goto label_296c74;
        default: break;
    }

    ctx->pc = 0x296c40u;

    // 0x296c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296c44: 0x8f84b960  lw          $a0, -0x46A0($gp)
    ctx->pc = 0x296c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949216)));
    // 0x296c48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296c50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296c54: 0xc0a5aaa  jal         func_296AA8
    ctx->pc = 0x296C54u;
    SET_GPR_U32(ctx, 31, 0x296C5Cu);
    ctx->pc = 0x296C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C54u;
    // 0x296c58: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AA8u, 0x296C54u, 0x296C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C5Cu;
label_296c5c:
    // 0x296c5c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x296c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x296c60: 0x245099c0  addiu       $s0, $v0, -0x6640
    ctx->pc = 0x296c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x296c64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x296c64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FE99C0u));
label_296c68:
    // 0x296c68: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x296c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x296c6c: 0xc0a5aaa  jal         func_296AA8
    ctx->pc = 0x296C6Cu;
    SET_GPR_U32(ctx, 31, 0x296C74u);
    ctx->pc = 0x296C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C6Cu;
    // 0x296c70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AA8u, 0x296C6Cu, 0x296C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C74u;
label_296c74:
    // 0x296c74: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x296C74u;
    {
        const bool branch_taken_0x296c74 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x296c74) {
            ctx->pc = 0x296C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296C74u;
            // 0x296c78: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296c68;
        }
    }
    ctx->pc = 0x296C7Cu;
    // 0x296c7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296c80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296c88: 0x3e00008  jr          $ra
    ctx->pc = 0x296C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C88u;
        // 0x296c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296C90u;
}
