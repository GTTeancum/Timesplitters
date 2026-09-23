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

// Function: mmStartMainMenu
// Address: 0x24edc0 - 0x24ee0c
void mmStartMainMenu_0x24edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmStartMainMenu_0x24edc0");
#endif

    switch (ctx->pc) {
        case 0x24edd8u: goto label_24edd8;
        default: break;
    }

    ctx->pc = 0x24edc0u;

    // 0x24edc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24edc4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x24edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x24edc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24edc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24edcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24edccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24edd0: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x24EDD0u;
    SET_GPR_U32(ctx, 31, 0x24EDD8u);
    ctx->pc = 0x24EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EDD0u;
    // 0x24edd4: 0x24a56ef8  addiu       $a1, $a1, 0x6EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x24EDD0u, 0x24EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDD8u;
label_24edd8:
    // 0x24edd8: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x24edd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24eddc: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x24eddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x24ede0: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24ede4: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x24ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x24ede8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x24ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24edec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24edecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24edf0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x24edf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x24edf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24edf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24edf8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x24edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x24edfc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x24edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x24ee00: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x24ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    // 0x24ee04: 0x8081546  j           func_205518
    ctx->pc = 0x24EE04u;
    ctx->pc = 0x24EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE04u;
    // 0x24ee08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x24EE0Cu;
}
