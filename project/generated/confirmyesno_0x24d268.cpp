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

// Function: confirmyesno
// Address: 0x24d268 - 0x24d2a0
void confirmyesno_0x24d268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("confirmyesno_0x24d268");
#endif

    switch (ctx->pc) {
        case 0x24d278u: goto label_24d278;
        case 0x24d28cu: goto label_24d28c;
        default: break;
    }

    ctx->pc = 0x24d268u;

    // 0x24d268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d26c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d270: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24D270u;
    SET_GPR_U32(ctx, 31, 0x24D278u);
    ctx->pc = 0x24D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D270u;
    // 0x24d274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24D270u, 0x24D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D278u;
label_24d278:
    // 0x24d278: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24d278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24d27c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D27Cu;
    {
        const bool branch_taken_0x24d27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D27Cu;
        // 0x24d280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d27c) {
            ctx->pc = 0x24D294u;
            goto label_24d294;
        }
    }
    ctx->pc = 0x24D284u;
    // 0x24d284: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24D284u;
    SET_GPR_U32(ctx, 31, 0x24D28Cu);
    ctx->pc = 0x24D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D284u;
    // 0x24d288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24D284u, 0x24D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D28Cu;
label_24d28c:
    // 0x24d28c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x24d28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x24d290: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24d294:
    // 0x24d294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d298: 0x3e00008  jr          $ra
    ctx->pc = 0x24D298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D298u;
        // 0x24d29c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D2A0u;
}
