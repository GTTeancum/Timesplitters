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

// Function: fileGetMem
// Address: 0x21a288 - 0x21a2ec
void fileGetMem_0x21a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileGetMem_0x21a288");
#endif

    switch (ctx->pc) {
        case 0x21a2a0u: goto label_21a2a0;
        default: break;
    }

    ctx->pc = 0x21a288u;

    // 0x21a288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a28c: 0x8f82b6b8  lw          $v0, -0x4948($gp)
    ctx->pc = 0x21a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948536)));
    // 0x21a290: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21A290u;
    {
        const bool branch_taken_0x21a290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A290u;
        // 0x21a294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a290) {
            ctx->pc = 0x21A2DCu;
            goto label_21a2dc;
        }
    }
    ctx->pc = 0x21A298u;
    // 0x21a298: 0xc086854  jal         func_21A150
    ctx->pc = 0x21A298u;
    SET_GPR_U32(ctx, 31, 0x21A2A0u);
    ctx->pc = 0x21A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A150u, 0x21A298u, 0x21A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2A0u;
label_21a2a0:
    // 0x21a2a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a2a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2a4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21A2A4u;
    {
        const bool branch_taken_0x21a2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2A4u;
        // 0x21a2a8: 0x8f82b6c0  lw          $v0, -0x4940($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2a4) {
            ctx->pc = 0x21A2DCu;
            goto label_21a2dc;
        }
    }
    ctx->pc = 0x21A2ACu;
    // 0x21a2ac: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x21a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21a2b0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x21A2B0u;
    {
        const bool branch_taken_0x21a2b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2B0u;
        // 0x21a2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2b0) {
            ctx->pc = 0x21A2E0u;
            goto label_21a2e0;
        }
    }
    ctx->pc = 0x21A2B8u;
    // 0x21a2b8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x21a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x21a2bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A2BCu;
    {
        const bool branch_taken_0x21a2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2BCu;
        // 0x21a2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2bc) {
            ctx->pc = 0x21A2E0u;
            goto label_21a2e0;
        }
    }
    ctx->pc = 0x21A2C4u;
    // 0x21a2c4: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x21a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x21a2c8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x21a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x21a2cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A2CCu;
    {
        const bool branch_taken_0x21a2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2CCu;
        // 0x21a2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2cc) {
            ctx->pc = 0x21A2E0u;
            goto label_21a2e0;
        }
    }
    ctx->pc = 0x21A2D4u;
    // 0x21a2d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21A2D4u;
    {
        const bool branch_taken_0x21a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2D4u;
        // 0x21a2d8: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2d4) {
            ctx->pc = 0x21A2E0u;
            goto label_21a2e0;
        }
    }
    ctx->pc = 0x21A2DCu;
label_21a2dc:
    // 0x21a2dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a2e0:
    // 0x21a2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2E4u;
        // 0x21a2e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A2ECu;
}
