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

// Function: quitconfirmfunc
// Address: 0x24ee50 - 0x24ee98
void quitconfirmfunc_0x24ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quitconfirmfunc_0x24ee50");
#endif

    switch (ctx->pc) {
        case 0x24ee60u: goto label_24ee60;
        case 0x24ee84u: goto label_24ee84;
        default: break;
    }

    ctx->pc = 0x24ee50u;

    // 0x24ee50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ee54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ee58: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24EE58u;
    SET_GPR_U32(ctx, 31, 0x24EE60u);
    ctx->pc = 0x24EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE58u;
    // 0x24ee5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24EE58u, 0x24EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE60u;
label_24ee60:
    // 0x24ee60: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24ee64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EE64u;
    {
        const bool branch_taken_0x24ee64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE64u;
        // 0x24ee68: 0x8f83a0d8  lw          $v1, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee64) {
            ctx->pc = 0x24EE7Cu;
            goto label_24ee7c;
        }
    }
    ctx->pc = 0x24EE6Cu;
    // 0x24ee6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ee70: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x24ee70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x24ee74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24EE74u;
    {
        const bool branch_taken_0x24ee74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE74u;
        // 0x24ee78: 0xaf83a0d8  sw          $v1, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee74) {
            ctx->pc = 0x24EE8Cu;
            goto label_24ee8c;
        }
    }
    ctx->pc = 0x24EE7Cu;
label_24ee7c:
    // 0x24ee7c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24EE7Cu;
    SET_GPR_U32(ctx, 31, 0x24EE84u);
    ctx->pc = 0x24EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE7Cu;
    // 0x24ee80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24EE7Cu, 0x24EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE84u;
label_24ee84:
    // 0x24ee84: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x24ee84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x24ee88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24ee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24ee8c:
    // 0x24ee8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ee8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ee90: 0x3e00008  jr          $ra
    ctx->pc = 0x24EE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE90u;
        // 0x24ee94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EE98u;
}
