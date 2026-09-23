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

// Function: vibmode_onchange
// Address: 0x20f870 - 0x20f8d4
void vibmode_onchange_0x20f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vibmode_onchange_0x20f870");
#endif

    ctx->pc = 0x20f870u;

    // 0x20f870: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x20f870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f878: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20f878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f87c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x20f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x20f880: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x20f880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20f884: 0x3042ff9f  andi        $v0, $v0, 0xFF9F
    ctx->pc = 0x20f884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65439);
    // 0x20f888: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x20f888u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x20f88c: 0x1085000b  beq         $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x20F88Cu;
    {
        const bool branch_taken_0x20f88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x20F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F88Cu;
        // 0x20f890: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f88c) {
            ctx->pc = 0x20F8BCu;
            goto label_20f8bc;
        }
    }
    ctx->pc = 0x20F894u;
    // 0x20f894: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x20f894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20f898: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20F898u;
    {
        const bool branch_taken_0x20f898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f898) {
            ctx->pc = 0x20F89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F898u;
            // 0x20f89c: 0x8cc20018  lw          $v0, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F8CCu;
            goto label_20f8cc;
        }
    }
    ctx->pc = 0x20F8A0u;
    // 0x20f8a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f8a4: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F8A4u;
    {
        const bool branch_taken_0x20f8a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8A4u;
        // 0x20f8a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8a4) {
            ctx->pc = 0x20F8C4u;
            goto label_20f8c4;
        }
    }
    ctx->pc = 0x20F8ACu;
    // 0x20f8ac: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F8ACu;
    {
        const bool branch_taken_0x20f8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f8ac) {
            ctx->pc = 0x20F8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F8ACu;
            // 0x20f8b0: 0x34630060  ori         $v1, $v1, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F8C8u;
            goto label_20f8c8;
        }
    }
    ctx->pc = 0x20F8B4u;
    // 0x20f8b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20F8B4u;
    {
        const bool branch_taken_0x20f8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8B4u;
        // 0x20f8b8: 0x8cc20018  lw          $v0, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8b4) {
            ctx->pc = 0x20F8CCu;
            goto label_20f8cc;
        }
    }
    ctx->pc = 0x20F8BCu;
label_20f8bc:
    // 0x20f8bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20F8BCu;
    {
        const bool branch_taken_0x20f8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8BCu;
        // 0x20f8c0: 0x34630040  ori         $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8bc) {
            ctx->pc = 0x20F8C8u;
            goto label_20f8c8;
        }
    }
    ctx->pc = 0x20F8C4u;
label_20f8c4:
    // 0x20f8c4: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x20f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_20f8c8:
    // 0x20f8c8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x20f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_20f8cc:
    // 0x20f8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x20F8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8CCu;
        // 0x20f8d0: 0xa4430002  sh          $v1, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F8D4u;
}
