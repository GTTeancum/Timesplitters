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

// Function: debugmenuTick
// Address: 0x20db60 - 0x20db90
void debugmenuTick_0x20db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugmenuTick_0x20db60");
#endif

    switch (ctx->pc) {
        case 0x20db60u: goto label_20db60;
        case 0x20db64u: goto label_20db64;
        case 0x20db68u: goto label_20db68;
        case 0x20db6cu: goto label_20db6c;
        case 0x20db70u: goto label_20db70;
        case 0x20db74u: goto label_20db74;
        case 0x20db78u: goto label_20db78;
        case 0x20db7cu: goto label_20db7c;
        case 0x20db80u: goto label_20db80;
        case 0x20db84u: goto label_20db84;
        case 0x20db88u: goto label_20db88;
        case 0x20db8cu: goto label_20db8c;
        default: break;
    }

    ctx->pc = 0x20db60u;

label_20db60:
    // 0x20db60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20db64:
    // 0x20db64: 0x8f829c74  lw          $v0, -0x638C($gp)
    ctx->pc = 0x20db64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941812)));
label_20db68:
    // 0x20db68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20db6c:
    if (ctx->pc == 0x20DB6Cu) {
        ctx->pc = 0x20DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB68u;
        // 0x20db6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB70u;
        goto label_20db70;
    }
    ctx->pc = 0x20DB68u;
    {
        const bool branch_taken_0x20db68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB68u;
        // 0x20db6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db68) {
            ctx->pc = 0x20DB84u;
            goto label_20db84;
        }
    }
    ctx->pc = 0x20DB70u;
label_20db70:
    // 0x20db70: 0x8f829c78  lw          $v0, -0x6388($gp)
    ctx->pc = 0x20db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941816)));
label_20db74:
    // 0x20db74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20db78:
    if (ctx->pc == 0x20DB78u) {
        ctx->pc = 0x20DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB74u;
        // 0x20db78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB7Cu;
        goto label_20db7c;
    }
    ctx->pc = 0x20DB74u;
    {
        const bool branch_taken_0x20db74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB74u;
        // 0x20db78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db74) {
            ctx->pc = 0x20DB88u;
            goto label_20db88;
        }
    }
    ctx->pc = 0x20DB7Cu;
label_20db7c:
    // 0x20db7c: 0x40f809  jalr        $v0
label_20db80:
    if (ctx->pc == 0x20DB80u) {
        ctx->pc = 0x20DB84u;
        goto label_20db84;
    }
    ctx->pc = 0x20DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DB84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB7Cu, 0x20DB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DB84u;
label_20db84:
    // 0x20db84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20db84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20db88:
    // 0x20db88: 0x3e00008  jr          $ra
label_20db8c:
    if (ctx->pc == 0x20DB8Cu) {
        ctx->pc = 0x20DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB88u;
        // 0x20db8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB90u;
        goto label_fallthrough_0x20db88;
    }
    ctx->pc = 0x20DB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB88u;
        // 0x20db8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20db88:
    ctx->pc = 0x20DB90u;
}
