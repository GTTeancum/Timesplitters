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

// Function: sceScfGetAspect
// Address: 0x2e09d8 - 0x2e0a18
void sceScfGetAspect_0x2e09d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceScfGetAspect_0x2e09d8");
#endif

    switch (ctx->pc) {
        case 0x2e09e8u: goto label_2e09e8;
        case 0x2e0a00u: goto label_2e0a00;
        default: break;
    }

    ctx->pc = 0x2e09d8u;

    // 0x2e09d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e09d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e09dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e09dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e09e0: 0xc0b8246  jal         func_2E0918
    ctx->pc = 0x2E09E0u;
    SET_GPR_U32(ctx, 31, 0x2E09E8u);
    ctx->pc = 0x2E0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0918u, 0x2E09E0u, 0x2E09E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09E8u;
label_2e09e8:
    // 0x2e09e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E09E8u;
    {
        const bool branch_taken_0x2e09e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09E8u;
        // 0x2e09ec: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09e8) {
            ctx->pc = 0x2E09F8u;
            goto label_2e09f8;
        }
    }
    ctx->pc = 0x2E09F0u;
    // 0x2e09f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E09F0u;
    {
        const bool branch_taken_0x2e09f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09F0u;
        // 0x2e09f4: 0x90623002  lbu         $v0, 0x3002($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12290)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09f0) {
            ctx->pc = 0x2E0A0Cu;
            goto label_2e0a0c;
        }
    }
    ctx->pc = 0x2E09F8u;
label_2e09f8:
    // 0x2e09f8: 0xc0b4074  jal         func_2D01D0
    ctx->pc = 0x2E09F8u;
    SET_GPR_U32(ctx, 31, 0x2E0A00u);
    ctx->pc = 0x2E09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E09F8u;
    // 0x2e09fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D01D0u, 0x2E09F8u, 0x2E0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A00u;
label_2e0a00:
    // 0x2e0a00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0a04: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2e0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e0a08: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2e0a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2e0a0c:
    // 0x2e0a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0a10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A10u;
        // 0x2e0a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0A18u;
}
