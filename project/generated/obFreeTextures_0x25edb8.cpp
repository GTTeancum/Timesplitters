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

// Function: obFreeTextures
// Address: 0x25edb8 - 0x25ee00
void obFreeTextures_0x25edb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obFreeTextures_0x25edb8");
#endif

    switch (ctx->pc) {
        case 0x25edd4u: goto label_25edd4;
        default: break;
    }

    ctx->pc = 0x25edb8u;

    // 0x25edb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25edb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25edbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25edbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25edc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25edc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25edc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25edc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edc8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x25edcc: 0xc0ada6a  jal         func_2B69A8
    ctx->pc = 0x25EDCCu;
    SET_GPR_U32(ctx, 31, 0x25EDD4u);
    ctx->pc = 0x25EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDCCu;
    // 0x25edd0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69A8u, 0x25EDCCu, 0x25EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDD4u;
label_25edd4:
    // 0x25edd4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x25edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x25edd8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x25edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x25eddc: 0x24639020  addiu       $v1, $v1, -0x6FE0
    ctx->pc = 0x25eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938656));
    // 0x25ede0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ede0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ede4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25ede8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ede8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25edec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25edecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25edf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25edf4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25edf8: 0x3e00008  jr          $ra
    ctx->pc = 0x25EDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDF8u;
        // 0x25edfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EE00u;
}
