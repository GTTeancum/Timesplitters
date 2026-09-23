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

// Function: r_findroute
// Address: 0x266680 - 0x2666bc
void r_findroute_0x266680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r_findroute_0x266680");
#endif

    switch (ctx->pc) {
        case 0x266690u: goto label_266690;
        default: break;
    }

    ctx->pc = 0x266680u;

    // 0x266680: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x266680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266684: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x266684u;
    {
        const bool branch_taken_0x266684 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x266688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266684u;
        // 0x266688: 0x3c0701fd  lui         $a3, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)509 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266684) {
            ctx->pc = 0x2666B4u;
            goto label_2666b4;
        }
    }
    ctx->pc = 0x26668Cu;
    // 0x26668c: 0x24e2a310  addiu       $v0, $a3, -0x5CF0
    ctx->pc = 0x26668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943504));
label_266690:
    // 0x266690: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x266690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x266694: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x266694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x266698: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x266698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x26669c: 0x54850003  bnel        $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26669Cu;
    {
        const bool branch_taken_0x26669c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x26669c) {
            ctx->pc = 0x2666A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26669Cu;
            // 0x2666a0: 0x84660000  lh          $a2, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2666ACu;
            goto label_2666ac;
        }
    }
    ctx->pc = 0x2666A4u;
    // 0x2666a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2666A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2666A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666A4u;
        // 0x2666a8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2666A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2666ACu;
label_2666ac:
    // 0x2666ac: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2666ACu;
    {
        const bool branch_taken_0x2666ac = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2666B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666ACu;
        // 0x2666b0: 0x24e2a310  addiu       $v0, $a3, -0x5CF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666ac) {
            ctx->pc = 0x266690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266690;
        }
    }
    ctx->pc = 0x2666B4u;
label_2666b4:
    // 0x2666b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2666B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2666B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666B4u;
        // 0x2666b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2666B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2666BCu;
}
