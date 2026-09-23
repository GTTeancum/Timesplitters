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

// Function: roomlightGetRoomColourIntensity
// Address: 0x2a7cc8 - 0x2a7d20
void roomlightGetRoomColourIntensity_0x2a7cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("roomlightGetRoomColourIntensity_0x2a7cc8");
#endif

    ctx->pc = 0x2a7cc8u;

    // 0x2a7cc8: 0x8f82b334  lw          $v0, -0x4CCC($gp)
    ctx->pc = 0x2a7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947636)));
    // 0x2a7ccc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2a7cccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7cd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A7CD0u;
    {
        const bool branch_taken_0x2a7cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CD0u;
        // 0x2a7cd4: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7cd0) {
            ctx->pc = 0x2A7D18u;
            goto label_2a7d18;
        }
    }
    ctx->pc = 0x2A7CD8u;
    // 0x2a7cd8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2a7cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a7cdc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2a7cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a7ce0: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x2a7ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a7ce4: 0x852818  mult        $a1, $a0, $a1
    ctx->pc = 0x2a7ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a7ce8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a7ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a7cec: 0x8f87b32c  lw          $a3, -0x4CD4($gp)
    ctx->pc = 0x2a7cecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947628)));
    // 0x2a7cf0: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x2a7cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x2a7cf4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2a7cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7cf8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2a7cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2a7cfc: 0x8cc3fffc  lw          $v1, -0x4($a2)
    ctx->pc = 0x2a7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x2a7d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7d04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7d08: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2a7d08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2a7d0c: 0x90a40018  lbu         $a0, 0x18($a1)
    ctx->pc = 0x2a7d0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2a7d10: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D10u;
        // 0x2a7d14: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7D18u;
label_2a7d18:
    // 0x2a7d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D18u;
        // 0x2a7d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7D20u;
}
