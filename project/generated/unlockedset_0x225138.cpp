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

// Function: unlockedset
// Address: 0x225138 - 0x2251a8
void unlockedset_0x225138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unlockedset_0x225138");
#endif

    switch (ctx->pc) {
        case 0x225160u: goto label_225160;
        case 0x22516cu: goto label_22516c;
        default: break;
    }

    ctx->pc = 0x225138u;

    // 0x225138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22513c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22513cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x225140: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x225140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x225144: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x225144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225148: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x225148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22514c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22514cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225150: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x225150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x225154: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x225154u;
    {
        const bool branch_taken_0x225154 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x225158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225154u;
        // 0x225158: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225154) {
            ctx->pc = 0x22518Cu;
            goto label_22518c;
        }
    }
    ctx->pc = 0x22515Cu;
    // 0x22515c: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x22515cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_225160:
    // 0x225160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225164: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x225164u;
    SET_GPR_U32(ctx, 31, 0x22516Cu);
    ctx->pc = 0x225168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225164u;
    // 0x225168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x225164u, 0x22516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22516Cu;
label_22516c:
    // 0x22516c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22516Cu;
    {
        const bool branch_taken_0x22516c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22516c) {
            ctx->pc = 0x225170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22516Cu;
            // 0x225170: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22517Cu;
            goto label_22517c;
        }
    }
    ctx->pc = 0x225174u;
    // 0x225174: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x225174u;
    {
        const bool branch_taken_0x225174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225174u;
        // 0x225178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225174) {
            ctx->pc = 0x225190u;
            goto label_225190;
        }
    }
    ctx->pc = 0x22517Cu;
label_22517c:
    // 0x22517c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22517cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x225180: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x225180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225184: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x225184u;
    {
        const bool branch_taken_0x225184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225184u;
        // 0x225188: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225184) {
            ctx->pc = 0x225160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225160;
        }
    }
    ctx->pc = 0x22518Cu;
label_22518c:
    // 0x22518c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225190:
    // 0x225190: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x225190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225194: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x225194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225198: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x225198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22519c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22519cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2251a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2251A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2251A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251A0u;
        // 0x2251a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2251A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2251A8u;
}
