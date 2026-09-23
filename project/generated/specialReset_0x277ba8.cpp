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

// Function: specialReset
// Address: 0x277ba8 - 0x277bdc
void specialReset_0x277ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialReset_0x277ba8");
#endif

    switch (ctx->pc) {
        case 0x277bbcu: goto label_277bbc;
        case 0x277bd0u: goto label_277bd0;
        default: break;
    }

    ctx->pc = 0x277ba8u;

    // 0x277ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x277bac: 0x24040e80  addiu       $a0, $zero, 0xE80
    ctx->pc = 0x277bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3712));
    // 0x277bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277bb4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x277BB4u;
    SET_GPR_U32(ctx, 31, 0x277BBCu);
    ctx->pc = 0x277BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BB4u;
    // 0x277bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x277BB4u, 0x277BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BBCu;
label_277bbc:
    // 0x277bbc: 0x24060e80  addiu       $a2, $zero, 0xE80
    ctx->pc = 0x277bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3712));
    // 0x277bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bc4: 0xaf82b180  sw          $v0, -0x4E80($gp)
    ctx->pc = 0x277bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947200), GPR_U32(ctx, 2));
    // 0x277bc8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x277BC8u;
    SET_GPR_U32(ctx, 31, 0x277BD0u);
    ctx->pc = 0x277BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BC8u;
    // 0x277bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x277BC8u, 0x277BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BD0u;
label_277bd0:
    // 0x277bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277bd4: 0x809dedc  j           func_277B70
    ctx->pc = 0x277BD4u;
    ctx->pc = 0x277BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BD4u;
    // 0x277bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B70u;
    specialRestart_0x277b70(rdram, ctx, runtime); return;
    ctx->pc = 0x277BDCu;
}
