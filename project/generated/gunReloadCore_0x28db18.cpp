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

// Function: gunReloadCore
// Address: 0x28db18 - 0x28db90
void gunReloadCore_0x28db18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunReloadCore_0x28db18");
#endif

    switch (ctx->pc) {
        case 0x28db50u: goto label_28db50;
        default: break;
    }

    ctx->pc = 0x28db18u;

    // 0x28db18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28db18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db1c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x28db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x28db20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28db24: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x28db24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28db28: 0x244a6218  addiu       $t2, $v0, 0x6218
    ctx->pc = 0x28db28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x28db2c: 0x2484026c  addiu       $a0, $a0, 0x26C
    ctx->pc = 0x28db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 620));
    // 0x28db30: 0x654818  mult        $t1, $v1, $a1
    ctx->pc = 0x28db30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x28db34: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x28db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x28db38: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x28db38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28db3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28db40: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x28db40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28db44: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x28db44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28db48: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DB48u;
    {
        const bool branch_taken_0x28db48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28db48) {
            ctx->pc = 0x28DB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DB48u;
            // 0x28db4c: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DB58u;
            goto label_28db58;
        }
    }
    ctx->pc = 0x28DB50u;
label_28db50:
    // 0x28db50: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB50u;
        // 0x28db54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB58u;
label_28db58:
    // 0x28db58: 0x1840fffd  blez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x28DB58u;
    {
        const bool branch_taken_0x28db58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB58u;
        // 0x28db5c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db58) {
            ctx->pc = 0x28DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28db50;
        }
    }
    ctx->pc = 0x28DB60u;
    // 0x28db60: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x28db60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x28db64: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x28db64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28db68: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x28db68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28db6c: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x28db6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28db70: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x28db70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x28db74: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x28db74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28db78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28db78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db7c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x28db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x28db80: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x28db80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28db84: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x28db84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28db88: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB88u;
        // 0x28db8c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB90u;
}
