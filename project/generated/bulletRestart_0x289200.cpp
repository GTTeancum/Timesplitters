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

// Function: bulletRestart
// Address: 0x289200 - 0x2892a4
void bulletRestart_0x289200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletRestart_0x289200");
#endif

    switch (ctx->pc) {
        case 0x289210u: goto label_289210;
        default: break;
    }

    ctx->pc = 0x289200u;

    // 0x289200: 0x8f87b948  lw          $a3, -0x46B8($gp)
    ctx->pc = 0x289200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x289204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289208: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x289208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28920c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x28920cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_289210:
    // 0x289210: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x289210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x289214: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x289214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289218: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x289218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x28921c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289220: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x289220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x289224: 0x28a20032  slti        $v0, $a1, 0x32
    ctx->pc = 0x289224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x289228: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x289228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x28922c: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x28922cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x289230: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x289230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x289234: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x289234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x289238: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x289238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x28923c: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x28923cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x289240: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x289240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x289244: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x289244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x289248: 0xac86006c  sw          $a2, 0x6C($a0)
    ctx->pc = 0x289248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 6));
    // 0x28924c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28924Cu;
    {
        const bool branch_taken_0x28924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28924Cu;
        // 0x289250: 0x24840114  addiu       $a0, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28924c) {
            ctx->pc = 0x289210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289210;
        }
    }
    ctx->pc = 0x289254u;
    // 0x289254: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x289254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x289258: 0xaf80b950  sw          $zero, -0x46B0($gp)
    ctx->pc = 0x289258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949200), GPR_U32(ctx, 0));
    // 0x28925c: 0xaf82b958  sw          $v0, -0x46A8($gp)
    ctx->pc = 0x28925cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949208), GPR_U32(ctx, 2));
    // 0x289260: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x289260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289264: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x289264u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x289268: 0x24060114  addiu       $a2, $zero, 0x114
    ctx->pc = 0x289268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x28926c: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x28926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x289270: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x289270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x289274: 0x8f82b958  lw          $v0, -0x46A8($gp)
    ctx->pc = 0x289274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949208)));
    // 0x289278: 0x464018  mult        $t0, $v0, $a2
    ctx->pc = 0x289278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x28927c: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x28927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x289280: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x289280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x289284: 0xaf84b95c  sw          $a0, -0x46A4($gp)
    ctx->pc = 0x289284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949212), GPR_U32(ctx, 4));
    // 0x289288: 0xaf85b954  sw          $a1, -0x46AC($gp)
    ctx->pc = 0x289288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949204), GPR_U32(ctx, 5));
    // 0x28928c: 0xace31598  sw          $v1, 0x1598($a3)
    ctx->pc = 0x28928cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5528), GPR_U32(ctx, 3));
    // 0x289290: 0x8f82b95c  lw          $v0, -0x46A4($gp)
    ctx->pc = 0x289290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949212)));
    // 0x289294: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x289294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x289298: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x289298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x28929c: 0x3e00008  jr          $ra
    ctx->pc = 0x28929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2892A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28929Cu;
        // 0x2892a0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28929Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2892A4u;
}
