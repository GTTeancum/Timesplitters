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

// Function: clearmapconfirmfunc
// Address: 0x24ee98 - 0x24eef4
void clearmapconfirmfunc_0x24ee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("clearmapconfirmfunc_0x24ee98");
#endif

    switch (ctx->pc) {
        case 0x24eea8u: goto label_24eea8;
        case 0x24eebcu: goto label_24eebc;
        case 0x24eec4u: goto label_24eec4;
        case 0x24eeccu: goto label_24eecc;
        case 0x24eee0u: goto label_24eee0;
        default: break;
    }

    ctx->pc = 0x24ee98u;

    // 0x24ee98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ee98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ee9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24eea0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24EEA0u;
    SET_GPR_U32(ctx, 31, 0x24EEA8u);
    ctx->pc = 0x24EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EEA0u;
    // 0x24eea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24EEA0u, 0x24EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEA8u;
label_24eea8:
    // 0x24eea8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24eea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24eeac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24EEACu;
    {
        const bool branch_taken_0x24eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eeac) {
            ctx->pc = 0x24EED8u;
            goto label_24eed8;
        }
    }
    ctx->pc = 0x24EEB4u;
    // 0x24eeb4: 0xc0920ba  jal         func_2482E8
    ctx->pc = 0x24EEB4u;
    SET_GPR_U32(ctx, 31, 0x24EEBCu);
    ctx->pc = 0x2482E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E8u, 0x24EEB4u, 0x24EEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEBCu;
label_24eebc:
    // 0x24eebc: 0xc09193e  jal         func_2464F8
    ctx->pc = 0x24EEBCu;
    SET_GPR_U32(ctx, 31, 0x24EEC4u);
    ctx->pc = 0x2464F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2464F8u, 0x24EEBCu, 0x24EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEC4u;
label_24eec4:
    // 0x24eec4: 0xc092632  jal         func_2498C8
    ctx->pc = 0x24EEC4u;
    SET_GPR_U32(ctx, 31, 0x24EECCu);
    ctx->pc = 0x2498C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498C8u, 0x24EEC4u, 0x24EECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EECCu;
label_24eecc:
    // 0x24eecc: 0xaf80b85c  sw          $zero, -0x47A4($gp)
    ctx->pc = 0x24eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948956), GPR_U32(ctx, 0));
    // 0x24eed0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24EED0u;
    {
        const bool branch_taken_0x24eed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EED0u;
        // 0x24eed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eed0) {
            ctx->pc = 0x24EEE8u;
            goto label_24eee8;
        }
    }
    ctx->pc = 0x24EED8u;
label_24eed8:
    // 0x24eed8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24EED8u;
    SET_GPR_U32(ctx, 31, 0x24EEE0u);
    ctx->pc = 0x24EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EED8u;
    // 0x24eedc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24EED8u, 0x24EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEE0u;
label_24eee0:
    // 0x24eee0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x24eee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x24eee4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24eee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24eee8:
    // 0x24eee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24eee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24eeec: 0x3e00008  jr          $ra
    ctx->pc = 0x24EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEECu;
        // 0x24eef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EEF4u;
}
