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

// Function: bgFloorTransform
// Address: 0x2542f0 - 0x25435c
void bgFloorTransform_0x2542f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgFloorTransform_0x2542f0");
#endif

    switch (ctx->pc) {
        case 0x254320u: goto label_254320;
        case 0x25432cu: goto label_25432c;
        default: break;
    }

    ctx->pc = 0x2542f0u;

    // 0x2542f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2542f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2542f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2542f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2542f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2542f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2542fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2542fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254300: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x254300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x254304: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x254304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254308: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x254308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25430c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254310: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x254310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x254314: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x254314u;
    {
        const bool branch_taken_0x254314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254314u;
        // 0x254318: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254314) {
            ctx->pc = 0x254340u;
            goto label_254340;
        }
    }
    ctx->pc = 0x25431Cu;
    // 0x25431c: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x25431cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_254320:
    // 0x254320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254324: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x254324u;
    SET_GPR_U32(ctx, 31, 0x25432Cu);
    ctx->pc = 0x254328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254324u;
    // 0x254328: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x254324u, 0x25432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25432Cu;
label_25432c:
    // 0x25432c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25432cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x254330: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x254330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x254334: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x254334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x254338: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x254338u;
    {
        const bool branch_taken_0x254338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254338u;
        // 0x25433c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254338) {
            ctx->pc = 0x254320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254320;
        }
    }
    ctx->pc = 0x254340u;
label_254340:
    // 0x254340: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x254340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254344: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x254344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254348: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x254348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25434c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25434cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254354: 0x3e00008  jr          $ra
    ctx->pc = 0x254354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254354u;
        // 0x254358: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25435Cu;
}
