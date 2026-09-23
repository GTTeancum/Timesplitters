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

// Function: preloadInsert
// Address: 0x21c240 - 0x21c2d4
void preloadInsert_0x21c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadInsert_0x21c240");
#endif

    switch (ctx->pc) {
        case 0x21c288u: goto label_21c288;
        default: break;
    }

    ctx->pc = 0x21c240u;

    // 0x21c240: 0x8f83b6f0  lw          $v1, -0x4910($gp)
    ctx->pc = 0x21c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948592)));
    // 0x21c244: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C244u;
    {
        const bool branch_taken_0x21c244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C244u;
        // 0x21c248: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c244) {
            ctx->pc = 0x21C254u;
            goto label_21c254;
        }
    }
    ctx->pc = 0x21C24Cu;
    // 0x21c24c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C24Cu;
        // 0x21c250: 0xaf84b6f0  sw          $a0, -0x4910($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C254u;
label_21c254:
    // 0x21c254: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x21c254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21c258: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21c25c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x21c25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21c260: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C260u;
    {
        const bool branch_taken_0x21c260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C260u;
        // 0x21c264: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c260) {
            ctx->pc = 0x21C274u;
            goto label_21c274;
        }
    }
    ctx->pc = 0x21C268u;
    // 0x21c268: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x21c268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x21c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C26Cu;
        // 0x21c270: 0xaf84b6f0  sw          $a0, -0x4910($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C274u;
label_21c274:
    // 0x21c274: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x21c274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21c278: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21C278u;
    {
        const bool branch_taken_0x21c278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c278) {
            ctx->pc = 0x21C2BCu;
            goto label_21c2bc;
        }
    }
    ctx->pc = 0x21C280u;
    // 0x21c280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21C280u;
    {
        const bool branch_taken_0x21c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C280u;
        // 0x21c284: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c280) {
            ctx->pc = 0x21C28Cu;
            goto label_21c28c;
        }
    }
    ctx->pc = 0x21C288u;
label_21c288:
    // 0x21c288: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21c288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_21c28c:
    // 0x21c28c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x21c28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21c290: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C290u;
    {
        const bool branch_taken_0x21c290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c290) {
            ctx->pc = 0x21C294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C290u;
            // 0x21c294: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C2A8u;
            goto label_21c2a8;
        }
    }
    ctx->pc = 0x21C298u;
    // 0x21c298: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x21c298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x21c29c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21c29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c2a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21C2A0u;
    {
        const bool branch_taken_0x21c2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2A0u;
        // 0x21c2a4: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2a0) {
            ctx->pc = 0x21C2ACu;
            goto label_21c2ac;
        }
    }
    ctx->pc = 0x21C2A8u;
label_21c2a8:
    // 0x21c2a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x21c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_21c2ac:
    // 0x21c2ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C2ACu;
    {
        const bool branch_taken_0x21c2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c2ac) {
            ctx->pc = 0x21C2BCu;
            goto label_21c2bc;
        }
    }
    ctx->pc = 0x21C2B4u;
    // 0x21c2b4: 0x50e0fff4  beql        $a3, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x21C2B4u;
    {
        const bool branch_taken_0x21c2b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c2b4) {
            ctx->pc = 0x21C2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C2B4u;
            // 0x21c2b8: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c288;
        }
    }
    ctx->pc = 0x21C2BCu;
label_21c2bc:
    // 0x21c2bc: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C2BCu;
    {
        const bool branch_taken_0x21c2bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c2bc) {
            ctx->pc = 0x21C2CCu;
            goto label_21c2cc;
        }
    }
    ctx->pc = 0x21C2C4u;
    // 0x21c2c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x21c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x21c2c8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x21c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_21c2cc:
    // 0x21c2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x21C2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C2D4u;
}
