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

// Function: ImageGetDetails
// Address: 0x2b9b98 - 0x2b9bec
void ImageGetDetails_0x2b9b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImageGetDetails_0x2b9b98");
#endif

    switch (ctx->pc) {
        case 0x2b9bc4u: goto label_2b9bc4;
        case 0x2b9bd4u: goto label_2b9bd4;
        case 0x2b9bdcu: goto label_2b9bdc;
        default: break;
    }

    ctx->pc = 0x2b9b98u;

    // 0x2b9b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9b9c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2b9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2b9ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9ba4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2b9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2b9ba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9bac: 0x24422c80  addiu       $v0, $v0, 0x2C80
    ctx->pc = 0x2b9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11392));
    // 0x2b9bb0: 0x24633100  addiu       $v1, $v1, 0x3100
    ctx->pc = 0x2b9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12544));
    // 0x2b9bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b9bb8: 0xaf82b4b8  sw          $v0, -0x4B48($gp)
    ctx->pc = 0x2b9bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948024), GPR_U32(ctx, 2));
    // 0x2b9bbc: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x2B9BBCu;
    SET_GPR_U32(ctx, 31, 0x2B9BC4u);
    ctx->pc = 0x2B9BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BBCu;
    // 0x2b9bc0: 0xaf83b4bc  sw          $v1, -0x4B44($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948028), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x2B9BBCu, 0x2B9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BC4u;
label_2b9bc4:
    // 0x2b9bc4: 0x8f85b4b8  lw          $a1, -0x4B48($gp)
    ctx->pc = 0x2b9bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b9bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9bcc: 0xc086922  jal         func_21A488
    ctx->pc = 0x2B9BCCu;
    SET_GPR_U32(ctx, 31, 0x2B9BD4u);
    ctx->pc = 0x2B9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BCCu;
    // 0x2b9bd0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A488u, 0x2B9BCCu, 0x2B9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BD4u;
label_2b9bd4:
    // 0x2b9bd4: 0xc0ae6b6  jal         func_2B9AD8
    ctx->pc = 0x2B9BD4u;
    SET_GPR_U32(ctx, 31, 0x2B9BDCu);
    ctx->pc = 0x2B9BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BD4u;
    // 0x2b9bd8: 0x8f84b4b8  lw          $a0, -0x4B48($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AD8u, 0x2B9BD4u, 0x2B9BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BDCu;
label_2b9bdc:
    // 0x2b9bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BE4u;
        // 0x2b9be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9BECu;
}
