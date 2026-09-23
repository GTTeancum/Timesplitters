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

// Function: StatsSet
// Address: 0x223de0 - 0x223e60
void StatsSet_0x223de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsSet_0x223de0");
#endif

    switch (ctx->pc) {
        case 0x223e30u: goto label_223e30;
        default: break;
    }

    ctx->pc = 0x223de0u;

    // 0x223de0: 0x28a2000e  slti        $v0, $a1, 0xE
    ctx->pc = 0x223de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x223de4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x223DE4u;
    {
        const bool branch_taken_0x223de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DE4u;
        // 0x223de8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223de4) {
            ctx->pc = 0x223E30u;
            goto label_223e30;
        }
    }
    ctx->pc = 0x223DECu;
    // 0x223dec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x223decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x223df0: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x223df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x223df4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x223df4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x223df8: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x223dfc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x223dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223e00: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x223E00u;
    {
        const bool branch_taken_0x223e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E00u;
        // 0x223e04: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e00) {
            ctx->pc = 0x223E38u;
            goto label_223e38;
        }
    }
    ctx->pc = 0x223E08u;
    // 0x223e08: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x223e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x223e0c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x223e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223e10: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223E10u;
    {
        const bool branch_taken_0x223e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E10u;
        // 0x223e14: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e10) {
            ctx->pc = 0x223E38u;
            goto label_223e38;
        }
    }
    ctx->pc = 0x223E18u;
    // 0x223e18: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x223e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223e1c: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223e24: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x223e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x223e28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223E28u;
    {
        const bool branch_taken_0x223e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E28u;
        // 0x223e2c: 0x24040558  addiu       $a0, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e28) {
            ctx->pc = 0x223E40u;
            goto label_223e40;
        }
    }
    ctx->pc = 0x223E30u;
label_223e30:
    // 0x223e30: 0x3e00008  jr          $ra
    ctx->pc = 0x223E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E38u;
label_223e38:
    // 0x223e38: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x223E38u;
    {
        const bool branch_taken_0x223e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E38u;
        // 0x223e3c: 0x24040558  addiu       $a0, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e38) {
            ctx->pc = 0x223E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223e30;
        }
    }
    ctx->pc = 0x223E40u;
label_223e40:
    // 0x223e40: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x223e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x223e44: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x223e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x223e48: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223e4c: 0x2442e6a8  addiu       $v0, $v0, -0x1958
    ctx->pc = 0x223e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
    // 0x223e50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223e54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223e58: 0x3e00008  jr          $ra
    ctx->pc = 0x223E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E58u;
        // 0x223e5c: 0xe46c0000  swc1        $f12, 0x0($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E60u;
}
