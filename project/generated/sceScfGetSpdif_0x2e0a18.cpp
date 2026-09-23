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

// Function: sceScfGetSpdif
// Address: 0x2e0a18 - 0x2e0a54
void sceScfGetSpdif_0x2e0a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceScfGetSpdif_0x2e0a18");
#endif

    switch (ctx->pc) {
        case 0x2e0a28u: goto label_2e0a28;
        case 0x2e0a40u: goto label_2e0a40;
        default: break;
    }

    ctx->pc = 0x2e0a18u;

    // 0x2e0a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0a20: 0xc0b8246  jal         func_2E0918
    ctx->pc = 0x2E0A20u;
    SET_GPR_U32(ctx, 31, 0x2E0A28u);
    ctx->pc = 0x2E0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0918u, 0x2E0A20u, 0x2E0A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A28u;
label_2e0a28:
    // 0x2e0a28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0A28u;
    {
        const bool branch_taken_0x2e0a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A28u;
        // 0x2e0a2c: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a28) {
            ctx->pc = 0x2E0A38u;
            goto label_2e0a38;
        }
    }
    ctx->pc = 0x2E0A30u;
    // 0x2e0a30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0A30u;
    {
        const bool branch_taken_0x2e0a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A30u;
        // 0x2e0a34: 0x90623005  lbu         $v0, 0x3005($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12293)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a30) {
            ctx->pc = 0x2E0A48u;
            goto label_2e0a48;
        }
    }
    ctx->pc = 0x2E0A38u;
label_2e0a38:
    // 0x2e0a38: 0xc0b4074  jal         func_2D01D0
    ctx->pc = 0x2E0A38u;
    SET_GPR_U32(ctx, 31, 0x2E0A40u);
    ctx->pc = 0x2E0A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A38u;
    // 0x2e0a3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D01D0u, 0x2E0A38u, 0x2E0A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A40u;
label_2e0a40:
    // 0x2e0a40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0a44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e0a48:
    // 0x2e0a48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A4Cu;
        // 0x2e0a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0A54u;
}
