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

// Function: ImageGetDetailsFromMem
// Address: 0x2b9c90 - 0x2b9cd4
void ImageGetDetailsFromMem_0x2b9c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImageGetDetailsFromMem_0x2b9c90");
#endif

    switch (ctx->pc) {
        case 0x2b9cc0u: goto label_2b9cc0;
        case 0x2b9cc8u: goto label_2b9cc8;
        default: break;
    }

    ctx->pc = 0x2b9c90u;

    // 0x2b9c90: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2b9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2b9c94: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2b9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2b9c98: 0x24632c80  addiu       $v1, $v1, 0x2C80
    ctx->pc = 0x2b9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11392));
    // 0x2b9c9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9ca0: 0x24423100  addiu       $v0, $v0, 0x3100
    ctx->pc = 0x2b9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12544));
    // 0x2b9ca4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2b9ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2b9ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b9cac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b9cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9cb0: 0xaf82b4bc  sw          $v0, -0x4B44($gp)
    ctx->pc = 0x2b9cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948028), GPR_U32(ctx, 2));
    // 0x2b9cb4: 0x34c60480  ori         $a2, $a2, 0x480
    ctx->pc = 0x2b9cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1152);
    // 0x2b9cb8: 0xc0b91c2  jal         func_2E4708
    ctx->pc = 0x2B9CB8u;
    SET_GPR_U32(ctx, 31, 0x2B9CC0u);
    ctx->pc = 0x2B9CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CB8u;
    // 0x2b9cbc: 0xaf83b4b8  sw          $v1, -0x4B48($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948024), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4708u, 0x2B9CB8u, 0x2B9CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CC0u;
label_2b9cc0:
    // 0x2b9cc0: 0xc0ae6b6  jal         func_2B9AD8
    ctx->pc = 0x2B9CC0u;
    SET_GPR_U32(ctx, 31, 0x2B9CC8u);
    ctx->pc = 0x2B9CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CC0u;
    // 0x2b9cc4: 0x8f84b4b8  lw          $a0, -0x4B48($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AD8u, 0x2B9CC0u, 0x2B9CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CC8u;
label_2b9cc8:
    // 0x2b9cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CCCu;
        // 0x2b9cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9CD4u;
}
