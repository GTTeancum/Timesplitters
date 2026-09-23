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

// Function: cheatsReset
// Address: 0x225680 - 0x2256dc
void cheatsReset_0x225680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheatsReset_0x225680");
#endif

    switch (ctx->pc) {
        case 0x2256bcu: goto label_2256bc;
        case 0x2256ccu: goto label_2256cc;
        default: break;
    }

    ctx->pc = 0x225680u;

    // 0x225680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225684: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x225684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x225688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22568c: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x22568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x225690: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x225690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x225694: 0x30422020  andi        $v0, $v0, 0x2020
    ctx->pc = 0x225694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8224);
    // 0x225698: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x225698u;
    {
        const bool branch_taken_0x225698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225698) {
            ctx->pc = 0x22569Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225698u;
            // 0x22569c: 0x8c630048  lw          $v1, 0x48($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2256A8u;
            goto label_2256a8;
        }
    }
    ctx->pc = 0x2256A0u;
    // 0x2256a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2256A0u;
    {
        const bool branch_taken_0x2256a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2256A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256A0u;
        // 0x2256a4: 0xaf809f54  sw          $zero, -0x60AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256a0) {
            ctx->pc = 0x2256D0u;
            goto label_2256d0;
        }
    }
    ctx->pc = 0x2256A8u;
label_2256a8:
    // 0x2256a8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2256a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2256ac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2256ACu;
    {
        const bool branch_taken_0x2256ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2256ac) {
            ctx->pc = 0x2256C4u;
            goto label_2256c4;
        }
    }
    ctx->pc = 0x2256B4u;
    // 0x2256b4: 0xc089584  jal         func_225610
    ctx->pc = 0x2256B4u;
    SET_GPR_U32(ctx, 31, 0x2256BCu);
    ctx->pc = 0x225610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225610u, 0x2256B4u, 0x2256BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256BCu;
label_2256bc:
    // 0x2256bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2256BCu;
    {
        const bool branch_taken_0x2256bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2256C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256BCu;
        // 0x2256c0: 0xaf829f54  sw          $v0, -0x60AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256bc) {
            ctx->pc = 0x2256D0u;
            goto label_2256d0;
        }
    }
    ctx->pc = 0x2256C4u;
label_2256c4:
    // 0x2256c4: 0xc08956c  jal         func_2255B0
    ctx->pc = 0x2256C4u;
    SET_GPR_U32(ctx, 31, 0x2256CCu);
    ctx->pc = 0x2255B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255B0u, 0x2256C4u, 0x2256CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256CCu;
label_2256cc:
    // 0x2256cc: 0xaf829f54  sw          $v0, -0x60AC($gp)
    ctx->pc = 0x2256ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942548), GPR_U32(ctx, 2));
label_2256d0:
    // 0x2256d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2256d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2256d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2256D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2256D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256D4u;
        // 0x2256d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2256D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2256DCu;
}
