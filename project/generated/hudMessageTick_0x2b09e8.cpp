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

// Function: hudMessageTick
// Address: 0x2b09e8 - 0x2b0a2c
void hudMessageTick_0x2b09e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudMessageTick_0x2b09e8");
#endif

    ctx->pc = 0x2b09e8u;

    // 0x2b09e8: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x2b09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2b09ec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b09f0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b09f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b09f4: 0x2442f838  addiu       $v0, $v0, -0x7C8
    ctx->pc = 0x2b09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965304));
    // 0x2b09f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b09fc: 0x8c83015c  lw          $v1, 0x15C($a0)
    ctx->pc = 0x2b09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x2b0a00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0A00u;
    {
        const bool branch_taken_0x2b0a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A00u;
        // 0x2b0a04: 0x286200b4  slti        $v0, $v1, 0xB4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)180) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a00) {
            ctx->pc = 0x2B0A24u;
            goto label_2b0a24;
        }
    }
    ctx->pc = 0x2B0A08u;
    // 0x2b0a08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0A08u;
    {
        const bool branch_taken_0x2b0a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A08u;
        // 0x2b0a0c: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a08) {
            ctx->pc = 0x2B0A20u;
            goto label_2b0a20;
        }
    }
    ctx->pc = 0x2B0A10u;
    // 0x2b0a10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2b0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0a14: 0x284300b4  slti        $v1, $v0, 0xB4
    ctx->pc = 0x2b0a14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x2b0a18: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0A18u;
    {
        const bool branch_taken_0x2b0a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A18u;
        // 0x2b0a1c: 0xac82015c  sw          $v0, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a18) {
            ctx->pc = 0x2B0A24u;
            goto label_2b0a24;
        }
    }
    ctx->pc = 0x2B0A20u;
label_2b0a20:
    // 0x2b0a20: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x2b0a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
label_2b0a24:
    // 0x2b0a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0A2Cu;
}
