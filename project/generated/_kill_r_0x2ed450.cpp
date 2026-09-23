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

// Function: _kill_r
// Address: 0x2ed450 - 0x2ed4ac
void _kill_r_0x2ed450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_kill_r_0x2ed450");
#endif

    switch (ctx->pc) {
        case 0x2ed478u: goto label_2ed478;
        default: break;
    }

    ctx->pc = 0x2ed450u;

    // 0x2ed450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ed450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ed454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed458: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ed458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ed45c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed460: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ed460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed464: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2ed464u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2ed468: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ed468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ed46c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ed46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed470: 0xc0b420a  jal         func_2D0828
    ctx->pc = 0x2ED470u;
    SET_GPR_U32(ctx, 31, 0x2ED478u);
    ctx->pc = 0x2ED474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED470u;
    // 0x2ed474: 0xae2001f8  sw          $zero, 0x1F8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0828u, 0x2ED470u, 0x2ED478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED478u;
label_2ed478:
    // 0x2ed478: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ed478u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed47c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ed47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed480: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED480u;
    {
        const bool branch_taken_0x2ed480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED480u;
        // 0x2ed484: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed480) {
            ctx->pc = 0x2ED498u;
            goto label_2ed498;
        }
    }
    ctx->pc = 0x2ED488u;
    // 0x2ed488: 0x8e2201f8  lw          $v0, 0x1F8($s1)
    ctx->pc = 0x2ed488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x2ed48c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED48Cu;
    {
        const bool branch_taken_0x2ed48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed48c) {
            ctx->pc = 0x2ED490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED48Cu;
            // 0x2ed490: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED498u;
            goto label_2ed498;
        }
    }
    ctx->pc = 0x2ED494u;
    // 0x2ed494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ed498:
    // 0x2ed498: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ed498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed49c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ed49cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4A4u;
        // 0x2ed4a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED4ACu;
}
