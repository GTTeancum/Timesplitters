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

// Function: frontmpgSetGoodiesPage
// Address: 0x240e50 - 0x240ea0
void frontmpgSetGoodiesPage_0x240e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgSetGoodiesPage_0x240e50");
#endif

    switch (ctx->pc) {
        case 0x240e60u: goto label_240e60;
        case 0x240e88u: goto label_240e88;
        case 0x240e90u: goto label_240e90;
        default: break;
    }

    ctx->pc = 0x240e50u;

    // 0x240e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240e58: 0xc08c2b8  jal         func_230AE0
    ctx->pc = 0x240E58u;
    SET_GPR_U32(ctx, 31, 0x240E60u);
    ctx->pc = 0x240E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E58u;
    // 0x240e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AE0u, 0x240E58u, 0x240E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E60u;
label_240e60:
    // 0x240e60: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x240e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x240e64: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x240e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x240e68: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x240e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x240e6c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x240e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x240e70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x240e70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x240e74: 0x24a56500  addiu       $a1, $a1, 0x6500
    ctx->pc = 0x240e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
    // 0x240e78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e7c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x240e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x240e80: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x240E80u;
    SET_GPR_U32(ctx, 31, 0x240E88u);
    ctx->pc = 0x240E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E80u;
    // 0x240e84: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x240E80u, 0x240E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E88u;
label_240e88:
    // 0x240e88: 0xc09018c  jal         func_240630
    ctx->pc = 0x240E88u;
    SET_GPR_U32(ctx, 31, 0x240E90u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x240E88u, 0x240E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E90u;
label_240e90:
    // 0x240e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e98: 0x809021a  j           func_240868
    ctx->pc = 0x240E98u;
    ctx->pc = 0x240E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E98u;
    // 0x240e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240868u;
    goodieMessage_0x240868(rdram, ctx, runtime); return;
    ctx->pc = 0x240EA0u;
}
