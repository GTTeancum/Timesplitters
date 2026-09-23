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

// Function: soundDelayStop
// Address: 0x2054c0 - 0x205514
void soundDelayStop_0x2054c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundDelayStop_0x2054c0");
#endif

    switch (ctx->pc) {
        case 0x2054f8u: goto label_2054f8;
        default: break;
    }

    ctx->pc = 0x2054c0u;

    // 0x2054c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2054c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2054c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2054c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2054c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2054c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2054cc: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2054CCu;
    {
        const bool branch_taken_0x2054cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2054D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054CCu;
        // 0x2054d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054cc) {
            ctx->pc = 0x205500u;
            goto label_205500;
        }
    }
    ctx->pc = 0x2054D4u;
    // 0x2054d4: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x2054d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x2054d8: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x2054d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2054dc: 0x24711870  addiu       $s1, $v1, 0x1870
    ctx->pc = 0x2054dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 6256));
    // 0x2054e0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2054e4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2054e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2054e8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2054E8u;
    {
        const bool branch_taken_0x2054e8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2054ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054E8u;
        // 0x2054ec: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054e8) {
            ctx->pc = 0x2054FCu;
            goto label_2054fc;
        }
    }
    ctx->pc = 0x2054F0u;
    // 0x2054f0: 0xc081528  jal         func_2054A0
    ctx->pc = 0x2054F0u;
    SET_GPR_U32(ctx, 31, 0x2054F8u);
    ctx->pc = 0x2054A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054A0u, 0x2054F0u, 0x2054F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054F8u;
label_2054f8:
    // 0x2054f8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2054f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2054fc:
    // 0x2054fc: 0xa440000a  sh          $zero, 0xA($v0)
    ctx->pc = 0x2054fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
label_205500:
    // 0x205500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205504: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x205504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20550c: 0x3e00008  jr          $ra
    ctx->pc = 0x20550Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20550Cu;
        // 0x205510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20550Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205514u;
}
