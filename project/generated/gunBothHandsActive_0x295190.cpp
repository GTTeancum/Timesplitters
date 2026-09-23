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

// Function: gunBothHandsActive
// Address: 0x295190 - 0x2951d8
void gunBothHandsActive_0x295190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunBothHandsActive_0x295190");
#endif

    switch (ctx->pc) {
        case 0x2951a8u: goto label_2951a8;
        case 0x2951b4u: goto label_2951b4;
        default: break;
    }

    ctx->pc = 0x295190u;

    // 0x295190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295198: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29519c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2951a0: 0xc0a543c  jal         func_2950F0
    ctx->pc = 0x2951A0u;
    SET_GPR_U32(ctx, 31, 0x2951A8u);
    ctx->pc = 0x2951A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2951A0u;
    // 0x2951a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950F0u, 0x2951A0u, 0x2951A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2951A8u;
label_2951a8:
    // 0x2951a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2951a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951ac: 0xc0a5450  jal         func_295140
    ctx->pc = 0x2951ACu;
    SET_GPR_U32(ctx, 31, 0x2951B4u);
    ctx->pc = 0x2951B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2951ACu;
    // 0x2951b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295140u, 0x2951ACu, 0x2951B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2951B4u;
label_2951b4:
    // 0x2951b4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2951B4u;
    {
        const bool branch_taken_0x2951b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951B4u;
        // 0x2951b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951b4) {
            ctx->pc = 0x2951C0u;
            goto label_2951c0;
        }
    }
    ctx->pc = 0x2951BCu;
    // 0x2951bc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2951bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2951c0:
    // 0x2951c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2951c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2951c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2951c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2951c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2951cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2951ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2951d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2951D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2951D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951D0u;
        // 0x2951d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2951D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2951D8u;
}
