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

// Function: _close_r
// Address: 0x2e9c10 - 0x2e9c68
void _close_r_0x2e9c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_close_r_0x2e9c10");
#endif

    switch (ctx->pc) {
        case 0x2e9c34u: goto label_2e9c34;
        default: break;
    }

    ctx->pc = 0x2e9c10u;

    // 0x2e9c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9c14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e9c18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9c1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c20: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2e9c20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2e9c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9c28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e9c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c2c: 0xc0b41d0  jal         func_2D0740
    ctx->pc = 0x2E9C2Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C34u);
    ctx->pc = 0x2E9C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C2Cu;
    // 0x2e9c30: 0xae0001f8  sw          $zero, 0x1F8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0740u, 0x2E9C2Cu, 0x2E9C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C34u;
label_2e9c34:
    // 0x2e9c34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e9c34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e9c3c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9C3Cu;
    {
        const bool branch_taken_0x2e9c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C3Cu;
        // 0x2e9c40: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c3c) {
            ctx->pc = 0x2E9C54u;
            goto label_2e9c54;
        }
    }
    ctx->pc = 0x2E9C44u;
    // 0x2e9c44: 0x8e0201f8  lw          $v0, 0x1F8($s0)
    ctx->pc = 0x2e9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x2e9c48: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9C48u;
    {
        const bool branch_taken_0x2e9c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c48) {
            ctx->pc = 0x2E9C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9C48u;
            // 0x2e9c4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9C54u;
            goto label_2e9c54;
        }
    }
    ctx->pc = 0x2E9C50u;
    // 0x2e9c50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e9c54:
    // 0x2e9c54: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e9c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e9c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C60u;
        // 0x2e9c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9C68u;
}
