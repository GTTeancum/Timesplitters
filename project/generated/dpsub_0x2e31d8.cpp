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

// Function: dpsub
// Address: 0x2e31d8 - 0x2e323c
void dpsub_0x2e31d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpsub_0x2e31d8");
#endif

    switch (ctx->pc) {
        case 0x2e31f8u: goto label_2e31f8;
        case 0x2e3208u: goto label_2e3208;
        case 0x2e3224u: goto label_2e3224;
        case 0x2e322cu: goto label_2e322c;
        default: break;
    }

    ctx->pc = 0x2e31d8u;

    // 0x2e31d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e31d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e31dc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2e31dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2e31e0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2e31e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2e31e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e31e8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2e31e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2e31ec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e31ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e31f0: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E31F0u;
    SET_GPR_U32(ctx, 31, 0x2E31F8u);
    ctx->pc = 0x2E31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E31F0u;
    // 0x2e31f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E31F0u, 0x2E31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E31F8u;
label_2e31f8:
    // 0x2e31f8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2e31f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e31fc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2e31fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e3200: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3200u;
    SET_GPR_U32(ctx, 31, 0x2E3208u);
    ctx->pc = 0x2E3204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3200u;
    // 0x2e3204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3200u, 0x2E3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3208u;
label_2e3208:
    // 0x2e3208: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2e3208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2e320c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e320cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3210: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2e3210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e3214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3218: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e3218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e321c: 0xc0b8bd0  jal         func_2E2F40
    ctx->pc = 0x2E321Cu;
    SET_GPR_U32(ctx, 31, 0x2E3224u);
    ctx->pc = 0x2E3220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E321Cu;
    // 0x2e3220: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2F40u, 0x2E321Cu, 0x2E3224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3224u;
label_2e3224:
    // 0x2e3224: 0xc0b8b5c  jal         func_2E2D70
    ctx->pc = 0x2E3224u;
    SET_GPR_U32(ctx, 31, 0x2E322Cu);
    ctx->pc = 0x2E3228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3224u;
    // 0x2e3228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D70u, 0x2E3224u, 0x2E322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E322Cu;
label_2e322c:
    // 0x2e322c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3230: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2e3230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3234: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3234u;
        // 0x2e3238: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E323Cu;
}
