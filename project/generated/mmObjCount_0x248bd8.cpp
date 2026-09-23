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

// Function: mmObjCount
// Address: 0x248bd8 - 0x248c1c
void mmObjCount_0x248bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmObjCount_0x248bd8");
#endif

    switch (ctx->pc) {
        case 0x248bf8u: goto label_248bf8;
        default: break;
    }

    ctx->pc = 0x248bd8u;

    // 0x248bd8: 0x8f82a128  lw          $v0, -0x5ED8($gp)
    ctx->pc = 0x248bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943016)));
    // 0x248bdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248BDCu;
    {
        const bool branch_taken_0x248bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BDCu;
        // 0x248be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bdc) {
            ctx->pc = 0x248BECu;
            goto label_248bec;
        }
    }
    ctx->pc = 0x248BE4u;
    // 0x248be4: 0x3e00008  jr          $ra
    ctx->pc = 0x248BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BE4u;
        // 0x248be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248BECu;
label_248bec:
    // 0x248bec: 0x8f85a12c  lw          $a1, -0x5ED4($gp)
    ctx->pc = 0x248becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x248bf0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x248BF0u;
    {
        const bool branch_taken_0x248bf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x248bf0) {
            ctx->pc = 0x248C14u;
            goto label_248c14;
        }
    }
    ctx->pc = 0x248BF8u;
label_248bf8:
    // 0x248bf8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x248bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248bfc: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x248bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x248c00: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x248c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x248c04: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x248c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x248c08: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x248c08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x248c0c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x248C0Cu;
    {
        const bool branch_taken_0x248c0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c0c) {
            ctx->pc = 0x248BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248bf8;
        }
    }
    ctx->pc = 0x248C14u;
label_248c14:
    // 0x248c14: 0x3e00008  jr          $ra
    ctx->pc = 0x248C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C14u;
        // 0x248c18: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248C1Cu;
}
