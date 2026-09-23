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

// Function: sceScfGetTimeZone
// Address: 0x2e0a58 - 0x2e0abc
void sceScfGetTimeZone_0x2e0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceScfGetTimeZone_0x2e0a58");
#endif

    switch (ctx->pc) {
        case 0x2e0a68u: goto label_2e0a68;
        case 0x2e0a84u: goto label_2e0a84;
        case 0x2e0aa8u: goto label_2e0aa8;
        default: break;
    }

    ctx->pc = 0x2e0a58u;

    // 0x2e0a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0a5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e0a60: 0xc0b8246  jal         func_2E0918
    ctx->pc = 0x2E0A60u;
    SET_GPR_U32(ctx, 31, 0x2E0A68u);
    ctx->pc = 0x2E0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A60u;
    // 0x2e0a64: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0918u, 0x2E0A60u, 0x2E0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A68u;
label_2e0a68:
    // 0x2e0a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0A68u;
    {
        const bool branch_taken_0x2e0a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A68u;
        // 0x2e0a6c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a68) {
            ctx->pc = 0x2E0A78u;
            goto label_2e0a78;
        }
    }
    ctx->pc = 0x2E0A70u;
    // 0x2e0a70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E0A70u;
    {
        const bool branch_taken_0x2e0a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A70u;
        // 0x2e0a74: 0x84503000  lh          $s0, 0x3000($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a70) {
            ctx->pc = 0x2E0AA8u;
            goto label_2e0aa8;
        }
    }
    ctx->pc = 0x2E0A78u;
label_2e0a78:
    // 0x2e0a78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e0a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a7c: 0xc0b4074  jal         func_2D01D0
    ctx->pc = 0x2E0A7Cu;
    SET_GPR_U32(ctx, 31, 0x2E0A84u);
    ctx->pc = 0x2E0A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A7Cu;
    // 0x2e0a80: 0x2410021c  addiu       $s0, $zero, 0x21C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D01D0u, 0x2E0A7Cu, 0x2E0A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A84u;
label_2e0a84:
    // 0x2e0a84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0a88: 0x31342  srl         $v0, $v1, 13
    ctx->pc = 0x2e0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
    // 0x2e0a8c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e0a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e0a90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0A90u;
    {
        const bool branch_taken_0x2e0a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A90u;
        // 0x2e0a94: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a90) {
            ctx->pc = 0x2E0AA8u;
            goto label_2e0aa8;
        }
    }
    ctx->pc = 0x2E0A98u;
    // 0x2e0a98: 0x38543  sra         $s0, $v1, 21
    ctx->pc = 0x2e0a98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 21));
    // 0x2e0a9c: 0x2484b6b8  addiu       $a0, $a0, -0x4948
    ctx->pc = 0x2e0a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948536));
    // 0x2e0aa0: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2E0AA0u;
    SET_GPR_U32(ctx, 31, 0x2E0AA8u);
    ctx->pc = 0x2E0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0AA0u;
    // 0x2e0aa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2E0AA0u, 0x2E0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AA8u;
label_2e0aa8:
    // 0x2e0aa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e0aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0aac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e0aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0ab0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AB4u;
        // 0x2e0ab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0ABCu;
}
