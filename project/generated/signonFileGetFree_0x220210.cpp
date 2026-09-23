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

// Function: signonFileGetFree
// Address: 0x220210 - 0x220240
void signonFileGetFree_0x220210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonFileGetFree_0x220210");
#endif

    switch (ctx->pc) {
        case 0x220218u: goto label_220218;
        default: break;
    }

    ctx->pc = 0x220210u;

    // 0x220210: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x220210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220214: 0x0  nop
    ctx->pc = 0x220214u;
    // NOP
label_220218:
    // 0x220218: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x220218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22021c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22021Cu;
    {
        const bool branch_taken_0x22021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22021c) {
            ctx->pc = 0x220220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22021Cu;
            // 0x220220: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22022Cu;
            goto label_22022c;
        }
    }
    ctx->pc = 0x220224u;
    // 0x220224: 0x3e00008  jr          $ra
    ctx->pc = 0x220224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220224u;
        // 0x220228: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22022Cu;
label_22022c:
    // 0x22022c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x22022cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x220230: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x220230u;
    {
        const bool branch_taken_0x220230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220230u;
        // 0x220234: 0x24840b78  addiu       $a0, $a0, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220230) {
            ctx->pc = 0x220218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220218;
        }
    }
    ctx->pc = 0x220238u;
    // 0x220238: 0x3e00008  jr          $ra
    ctx->pc = 0x220238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220238u;
        // 0x22023c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220240u;
}
