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

// Function: mmUndoMap
// Address: 0x248370 - 0x2483a8
void mmUndoMap_0x248370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmUndoMap_0x248370");
#endif

    switch (ctx->pc) {
        case 0x248384u: goto label_248384;
        default: break;
    }

    ctx->pc = 0x248370u;

    // 0x248370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248374: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x248374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x248378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24837c: 0xc092018  jal         func_248060
    ctx->pc = 0x24837Cu;
    SET_GPR_U32(ctx, 31, 0x248384u);
    ctx->pc = 0x248380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24837Cu;
    // 0x248380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248060u, 0x24837Cu, 0x248384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248384u;
label_248384:
    // 0x248384: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x248384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x248388: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x248388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24838c: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x24838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x248390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248394: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x248394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248398: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x248398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x24839c: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x24839cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    // 0x2483a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2483A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2483A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483A0u;
        // 0x2483a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2483A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2483A8u;
}
