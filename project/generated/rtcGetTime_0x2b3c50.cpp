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

// Function: rtcGetTime
// Address: 0x2b3c50 - 0x2b3c90
void rtcGetTime_0x2b3c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rtcGetTime_0x2b3c50");
#endif

    switch (ctx->pc) {
        case 0x2b3c60u: goto label_2b3c60;
        case 0x2b3c70u: goto label_2b3c70;
        case 0x2b3c78u: goto label_2b3c78;
        default: break;
    }

    ctx->pc = 0x2b3c50u;

    // 0x2b3c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3c58: 0xc0b8080  jal         func_2E0200
    ctx->pc = 0x2B3C58u;
    SET_GPR_U32(ctx, 31, 0x2B3C60u);
    ctx->pc = 0x2B3C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C58u;
    // 0x2b3c5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0200u, 0x2B3C58u, 0x2B3C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C60u;
label_2b3c60:
    // 0x2b3c60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3C60u;
    {
        const bool branch_taken_0x2b3c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C60u;
        // 0x2b3c64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c60) {
            ctx->pc = 0x2B3C80u;
            goto label_2b3c80;
        }
    }
    ctx->pc = 0x2B3C68u;
    // 0x2b3c68: 0xc0b8470  jal         func_2E11C0
    ctx->pc = 0x2B3C68u;
    SET_GPR_U32(ctx, 31, 0x2B3C70u);
    ctx->pc = 0x2B3C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C68u;
    // 0x2b3c6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E11C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E11C0u, 0x2B3C68u, 0x2B3C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C70u;
label_2b3c70:
    // 0x2b3c70: 0xc0ace72  jal         func_2B39C8
    ctx->pc = 0x2B3C70u;
    SET_GPR_U32(ctx, 31, 0x2B3C78u);
    ctx->pc = 0x2B3C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C70u;
    // 0x2b3c74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39C8u, 0x2B3C70u, 0x2B3C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C78u;
label_2b3c78:
    // 0x2b3c78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3C78u;
    {
        const bool branch_taken_0x2b3c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C78u;
        // 0x2b3c7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c78) {
            ctx->pc = 0x2B3C88u;
            goto label_2b3c88;
        }
    }
    ctx->pc = 0x2B3C80u;
label_2b3c80:
    // 0x2b3c80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b3c84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b3c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2b3c88:
    // 0x2b3c88: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C88u;
        // 0x2b3c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3C90u;
}
