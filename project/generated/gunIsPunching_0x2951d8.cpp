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

// Function: gunIsPunching
// Address: 0x2951d8 - 0x295238
void gunIsPunching_0x2951d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunIsPunching_0x2951d8");
#endif

    ctx->pc = 0x2951d8u;

    // 0x2951d8: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2951D8u;
    {
        const bool branch_taken_0x2951d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951D8u;
        // 0x2951dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951d8) {
            ctx->pc = 0x295230u;
            goto label_295230;
        }
    }
    ctx->pc = 0x2951E0u;
    // 0x2951e0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2951e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2951e4: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2951e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2951e8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2951e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2951ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2951ECu;
    {
        const bool branch_taken_0x2951ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951ECu;
        // 0x2951f0: 0x2403071c  addiu       $v1, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951ec) {
            ctx->pc = 0x295230u;
            goto label_295230;
        }
    }
    ctx->pc = 0x2951F4u;
    // 0x2951f4: 0x8f85b230  lw          $a1, -0x4DD0($gp)
    ctx->pc = 0x2951f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2951f8: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2951f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2951fc: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x2951fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x295200: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x295200u;
    {
        const bool branch_taken_0x295200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x295204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295200u;
        // 0x295204: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295200) {
            ctx->pc = 0x295230u;
            goto label_295230;
        }
    }
    ctx->pc = 0x295208u;
    // 0x295208: 0x8c640264  lw          $a0, 0x264($v1)
    ctx->pc = 0x295208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x29520c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29520Cu;
    {
        const bool branch_taken_0x29520c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29520c) {
            ctx->pc = 0x295230u;
            goto label_295230;
        }
    }
    ctx->pc = 0x295214u;
    // 0x295214: 0x8c6302f4  lw          $v1, 0x2F4($v1)
    ctx->pc = 0x295214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 756)));
    // 0x295218: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x295218u;
    {
        const bool branch_taken_0x295218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295218) {
            ctx->pc = 0x295230u;
            goto label_295230;
        }
    }
    ctx->pc = 0x295220u;
    // 0x295220: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x295220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x295224: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x295224u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x295228: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x295228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x29522c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29522cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_295230:
    // 0x295230: 0x3e00008  jr          $ra
    ctx->pc = 0x295230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295238u;
}
