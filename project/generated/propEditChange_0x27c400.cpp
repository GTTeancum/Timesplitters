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

// Function: propEditChange
// Address: 0x27c400 - 0x27c49c
void propEditChange_0x27c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propEditChange_0x27c400");
#endif

    switch (ctx->pc) {
        case 0x27c440u: goto label_27c440;
        case 0x27c458u: goto label_27c458;
        case 0x27c468u: goto label_27c468;
        case 0x27c474u: goto label_27c474;
        default: break;
    }

    ctx->pc = 0x27c400u;

    // 0x27c400: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27c400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27c404: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27c404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27c408: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27c408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27c40c: 0x241502c9  addiu       $s5, $zero, 0x2C9
    ctx->pc = 0x27c40cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 713));
    // 0x27c410: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c414: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x27c414u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c418: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27c41c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27c41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c424: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27c424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c428: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27c42c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27c430: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x27c430u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27c434: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27c438: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27C438u;
    {
        const bool branch_taken_0x27c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C438u;
        // 0x27c43c: 0x518021  addu        $s0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c438) {
            ctx->pc = 0x27C450u;
            goto label_27c450;
        }
    }
    ctx->pc = 0x27C440u;
label_27c440:
    // 0x27c440: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x27c440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x27c444: 0x2a2800a  movz        $s0, $s5, $v0
    ctx->pc = 0x27c444u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
    // 0x27c448: 0x2a0302ca  slti        $v1, $s0, 0x2CA
    ctx->pc = 0x27c448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)714) ? 1 : 0);
    // 0x27c44c: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x27c44cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_27c450:
    // 0x27c450: 0xc09f060  jal         func_27C180
    ctx->pc = 0x27C450u;
    SET_GPR_U32(ctx, 31, 0x27C458u);
    ctx->pc = 0x27C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C450u;
    // 0x27c454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C180u, 0x27C450u, 0x27C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C458u;
label_27c458:
    // 0x27c458: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27C458u;
    {
        const bool branch_taken_0x27c458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c458) {
            ctx->pc = 0x27C45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C458u;
            // 0x27c45c: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c440;
        }
    }
    ctx->pc = 0x27C460u;
    // 0x27c460: 0xc09f070  jal         func_27C1C0
    ctx->pc = 0x27C460u;
    SET_GPR_U32(ctx, 31, 0x27C468u);
    ctx->pc = 0x27C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C460u;
    // 0x27c464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C1C0u, 0x27C460u, 0x27C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C468u;
label_27c468:
    // 0x27c468: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27c468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c46c: 0xc09f072  jal         func_27C1C8
    ctx->pc = 0x27C46Cu;
    SET_GPR_U32(ctx, 31, 0x27C474u);
    ctx->pc = 0x27C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C46Cu;
    // 0x27c470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C1C8u, 0x27C46Cu, 0x27C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C474u;
label_27c474:
    // 0x27c474: 0xaf90b1b8  sw          $s0, -0x4E48($gp)
    ctx->pc = 0x27c474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947256), GPR_U32(ctx, 16));
    // 0x27c478: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27c478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27c47c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27c47cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27c480: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27c480u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c484: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27c484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c488: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c48c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27c48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c494: 0x3e00008  jr          $ra
    ctx->pc = 0x27C494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C494u;
        // 0x27c498: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C49Cu;
}
