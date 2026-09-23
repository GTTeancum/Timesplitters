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

// Function: frombcd
// Address: 0x2e0ca8 - 0x2e0d00
void frombcd_0x2e0ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frombcd_0x2e0ca8");
#endif

    switch (ctx->pc) {
        case 0x2e0cd8u: goto label_2e0cd8;
        default: break;
    }

    ctx->pc = 0x2e0ca8u;

    // 0x2e0ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0cb0: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2e0cb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e0cb4: 0x2e02009a  sltiu       $v0, $s0, 0x9A
    ctx->pc = 0x2e0cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)154) ? 1 : 0);
    // 0x2e0cb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0CB8u;
    {
        const bool branch_taken_0x2e0cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CB8u;
        // 0x2e0cbc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0cb8) {
            ctx->pc = 0x2E0CD8u;
            goto label_2e0cd8;
        }
    }
    ctx->pc = 0x2E0CC0u;
    // 0x2e0cc0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0cc4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e0cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e0cc8: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e0ccc: 0x24c6b720  addiu       $a2, $a2, -0x48E0
    ctx->pc = 0x2e0cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948640));
    // 0x2e0cd0: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E0CD0u;
    SET_GPR_U32(ctx, 31, 0x2E0CD8u);
    ctx->pc = 0x2E0CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0CD0u;
    // 0x2e0cd4: 0x24050128  addiu       $a1, $zero, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E0CD0u, 0x2E0CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CD8u;
label_2e0cd8:
    // 0x2e0cd8: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x2e0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x2e0cdc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2e0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e0ce0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2e0ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e0ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0ce8: 0x1012  mflo        $v0
    ctx->pc = 0x2e0ce8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e0cec: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2e0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e0cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0cf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e0cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CF8u;
        // 0x2e0cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0D00u;
}
