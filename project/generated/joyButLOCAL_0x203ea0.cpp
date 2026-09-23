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

// Function: joyButLOCAL
// Address: 0x203ea0 - 0x203edc
void joyButLOCAL_0x203ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyButLOCAL_0x203ea0");
#endif

    ctx->pc = 0x203ea0u;

    // 0x203ea0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x203ea4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x203ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x203ea8: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x203ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x203eac: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x203eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x203eb0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x203eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x203eb4: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x203eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x203eb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x203eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203ebc: 0x24a5c740  addiu       $a1, $a1, -0x38C0
    ctx->pc = 0x203ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952768));
    // 0x203ec0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x203ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x203ec4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x203ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x203ec8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x203ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x203ecc: 0x8c640120  lw          $a0, 0x120($v1)
    ctx->pc = 0x203eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x203ed0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x203ed0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x203ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x203ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ED4u;
        // 0x203ed8: 0x821024  and         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203EDCu;
}
