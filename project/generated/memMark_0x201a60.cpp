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

// Function: memMark
// Address: 0x201a60 - 0x201abc
void memMark_0x201a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memMark_0x201a60");
#endif

    switch (ctx->pc) {
        case 0x201a88u: goto label_201a88;
        default: break;
    }

    ctx->pc = 0x201a60u;

    // 0x201a60: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x201a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x201a64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x201A64u;
    {
        const bool branch_taken_0x201a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A64u;
        // 0x201a68: 0x2403006d  addiu       $v1, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a64) {
            ctx->pc = 0x201AB4u;
            goto label_201ab4;
        }
    }
    ctx->pc = 0x201A6Cu;
    // 0x201a6c: 0x240a0065  addiu       $t2, $zero, 0x65
    ctx->pc = 0x201a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x201a70: 0x2409005f  addiu       $t1, $zero, 0x5F
    ctx->pc = 0x201a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x201a74: 0x24080061  addiu       $t0, $zero, 0x61
    ctx->pc = 0x201a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x201a78: 0x24070072  addiu       $a3, $zero, 0x72
    ctx->pc = 0x201a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x201a7c: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x201a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x201a80: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x201a80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x201a84: 0x0  nop
    ctx->pc = 0x201a84u;
    // NOP
label_201a88:
    // 0x201a88: 0xa08a0001  sb          $t2, 0x1($a0)
    ctx->pc = 0x201a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x201a8c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x201a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x201a90: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x201a90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x201a94: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x201a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x201a98: 0xa0880005  sb          $t0, 0x5($a0)
    ctx->pc = 0x201a98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x201a9c: 0xa0870006  sb          $a3, 0x6($a0)
    ctx->pc = 0x201a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 7));
    // 0x201aa0: 0xa0860007  sb          $a2, 0x7($a0)
    ctx->pc = 0x201aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x201aa4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x201aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x201aa8: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x201aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x201aac: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x201AACu;
    {
        const bool branch_taken_0x201aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201aac) {
            ctx->pc = 0x201AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201AACu;
            // 0x201ab0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201a88;
        }
    }
    ctx->pc = 0x201AB4u;
label_201ab4:
    // 0x201ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x201AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201ABCu;
}
