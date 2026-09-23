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

// Function: gunRightHandActive
// Address: 0x295140 - 0x295190
void gunRightHandActive_0x295140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunRightHandActive_0x295140");
#endif

    switch (ctx->pc) {
        case 0x295154u: goto label_295154;
        default: break;
    }

    ctx->pc = 0x295140u;

    // 0x295140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29514c: 0xc0a5432  jal         func_2950C8
    ctx->pc = 0x29514Cu;
    SET_GPR_U32(ctx, 31, 0x295154u);
    ctx->pc = 0x295150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29514Cu;
    // 0x295150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950C8u, 0x29514Cu, 0x295154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295154u;
label_295154:
    // 0x295154: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x295154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295158: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x295158u;
    {
        const bool branch_taken_0x295158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295158u;
        // 0x29515c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295158) {
            ctx->pc = 0x295180u;
            goto label_295180;
        }
    }
    ctx->pc = 0x295160u;
    // 0x295160: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x295160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x295164: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x295164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x295168: 0x246390f8  addiu       $v1, $v1, -0x6F08
    ctx->pc = 0x295168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938872));
    // 0x29516c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29516cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x295170: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x295170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295174: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x295174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x295178: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x295178u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x29517c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29517cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_295180:
    // 0x295180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295188: 0x3e00008  jr          $ra
    ctx->pc = 0x295188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295188u;
        // 0x29518c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295190u;
}
