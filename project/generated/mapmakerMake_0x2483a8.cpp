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

// Function: mapmakerMake
// Address: 0x2483a8 - 0x2483e0
void mapmakerMake_0x2483a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakerMake_0x2483a8");
#endif

    switch (ctx->pc) {
        case 0x2483bcu: goto label_2483bc;
        case 0x2483d0u: goto label_2483d0;
        default: break;
    }

    ctx->pc = 0x2483a8u;

    // 0x2483a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2483a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2483ac: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x2483acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2483b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2483b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2483b4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2483B4u;
    SET_GPR_U32(ctx, 31, 0x2483BCu);
    ctx->pc = 0x2483B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483B4u;
    // 0x2483b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2483B4u, 0x2483BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483BCu;
label_2483bc:
    // 0x2483bc: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x2483bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2483c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2483c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483c4: 0xaf82a0d0  sw          $v0, -0x5F30($gp)
    ctx->pc = 0x2483c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 2));
    // 0x2483c8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2483C8u;
    SET_GPR_U32(ctx, 31, 0x2483D0u);
    ctx->pc = 0x2483CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483C8u;
    // 0x2483cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2483C8u, 0x2483D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483D0u;
label_2483d0:
    // 0x2483d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2483d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2483d4: 0xaf80a0d8  sw          $zero, -0x5F28($gp)
    ctx->pc = 0x2483d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 0));
    // 0x2483d8: 0x8094d26  j           func_253498
    ctx->pc = 0x2483D8u;
    ctx->pc = 0x2483DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483D8u;
    // 0x2483dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253498u;
    mmDialogsMake_0x253498(rdram, ctx, runtime); return;
    ctx->pc = 0x2483E0u;
}
