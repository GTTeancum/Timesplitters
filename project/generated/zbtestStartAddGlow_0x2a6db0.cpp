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

// Function: zbtestStartAddGlow
// Address: 0x2a6db0 - 0x2a6e24
void zbtestStartAddGlow_0x2a6db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestStartAddGlow_0x2a6db0");
#endif

    switch (ctx->pc) {
        case 0x2a6df8u: goto label_2a6df8;
        default: break;
    }

    ctx->pc = 0x2a6db0u;

    // 0x2a6db0: 0x8f82b980  lw          $v0, -0x4680($gp)
    ctx->pc = 0x2a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949248)));
    // 0x2a6db4: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2a6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2a6db8: 0x2463a0a0  addiu       $v1, $v1, -0x5F60
    ctx->pc = 0x2a6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942880));
    // 0x2a6dbc: 0xaf80b320  sw          $zero, -0x4CE0($gp)
    ctx->pc = 0x2a6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947616), GPR_U32(ctx, 0));
    // 0x2a6dc0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2a6dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a6dc4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2a6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a6dc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6dcc: 0x28820048  slti        $v0, $a0, 0x48
    ctx->pc = 0x2a6dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)72) ? 1 : 0);
    // 0x2a6dd0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A6DD0u;
    {
        const bool branch_taken_0x2a6dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DD0u;
        // 0x2a6dd4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6dd0) {
            ctx->pc = 0x2A6E1Cu;
            goto label_2a6e1c;
        }
    }
    ctx->pc = 0x2A6DD8u;
    // 0x2a6dd8: 0x240300d8  addiu       $v1, $zero, 0xD8
    ctx->pc = 0x2a6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2a6ddc: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2a6ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a6de0: 0x2442a590  addiu       $v0, $v0, -0x5A70
    ctx->pc = 0x2a6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944144));
    // 0x2a6de4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2a6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a6de8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2a6de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a6dec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a6decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6df0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a6df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a6df4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2a6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a6df8:
    // 0x2a6df8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2a6df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2a6dfc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a6e00: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2a6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2a6e04: 0x0  nop
    ctx->pc = 0x2a6e04u;
    // NOP
    // 0x2a6e08: 0x0  nop
    ctx->pc = 0x2a6e08u;
    // NOP
    // 0x2a6e0c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A6E0Cu;
    {
        const bool branch_taken_0x2a6e0c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2a6e0c) {
            ctx->pc = 0x2A6DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6df8;
        }
    }
    ctx->pc = 0x2A6E14u;
    // 0x2a6e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E14u;
        // 0x2a6e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6E1Cu;
label_2a6e1c:
    // 0x2a6e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E1Cu;
        // 0x2a6e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6E24u;
}
