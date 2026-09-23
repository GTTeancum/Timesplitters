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

// Function: tobcd
// Address: 0x2e0c40 - 0x2e0ca4
void tobcd_0x2e0c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tobcd_0x2e0c40");
#endif

    switch (ctx->pc) {
        case 0x2e0c70u: goto label_2e0c70;
        default: break;
    }

    ctx->pc = 0x2e0c40u;

    // 0x2e0c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0c48: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2e0c48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e0c4c: 0x2e020064  sltiu       $v0, $s0, 0x64
    ctx->pc = 0x2e0c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x2e0c50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0C50u;
    {
        const bool branch_taken_0x2e0c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C50u;
        // 0x2e0c54: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c50) {
            ctx->pc = 0x2E0C70u;
            goto label_2e0c70;
        }
    }
    ctx->pc = 0x2E0C58u;
    // 0x2e0c58: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0c5c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e0c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e0c60: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e0c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e0c64: 0x24c6b718  addiu       $a2, $a2, -0x48E8
    ctx->pc = 0x2e0c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948632));
    // 0x2e0c68: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E0C68u;
    SET_GPR_U32(ctx, 31, 0x2E0C70u);
    ctx->pc = 0x2E0C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C68u;
    // 0x2e0c6c: 0x2405011b  addiu       $a1, $zero, 0x11B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E0C68u, 0x2E0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C70u;
label_2e0c70:
    // 0x2e0c70: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e0c74: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e0c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e0c78: 0x203001b  divu        $zero, $s0, $v1
    ctx->pc = 0x2e0c78u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2e0c7c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0C7Cu;
    {
        const bool branch_taken_0x2e0c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c7c) {
            ctx->pc = 0x2E0C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0C7Cu;
            // 0x2e0c80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C84u;
            goto label_2e0c84;
        }
    }
    ctx->pc = 0x2E0C84u;
label_2e0c84:
    // 0x2e0c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0c88: 0x1012  mflo        $v0
    ctx->pc = 0x2e0c88u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e0c8c: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x2e0c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e0c90: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2e0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e0c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0c98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e0c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C9Cu;
        // 0x2e0ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0CA4u;
}
