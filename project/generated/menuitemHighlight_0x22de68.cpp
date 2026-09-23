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

// Function: menuitemHighlight
// Address: 0x22de68 - 0x22dec4
void menuitemHighlight_0x22de68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuitemHighlight_0x22de68");
#endif

    switch (ctx->pc) {
        case 0x22de78u: goto label_22de78;
        default: break;
    }

    ctx->pc = 0x22de68u;

    // 0x22de68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22de68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22de6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22de70: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x22DE70u;
    SET_GPR_U32(ctx, 31, 0x22DE78u);
    ctx->pc = 0x22DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE70u;
    // 0x22de74: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x22DE70u, 0x22DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE78u;
label_22de78:
    // 0x22de78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22DE78u;
    {
        const bool branch_taken_0x22de78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE78u;
        // 0x22de7c: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de78) {
            ctx->pc = 0x22DEA0u;
            goto label_22dea0;
        }
    }
    ctx->pc = 0x22DE80u;
    // 0x22de80: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22de80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22de84: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x22de84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22de88: 0x24632e50  addiu       $v1, $v1, 0x2E50
    ctx->pc = 0x22de88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11856));
    // 0x22de8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22de90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22de90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22de94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22de98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22DE98u;
    {
        const bool branch_taken_0x22de98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE98u;
        // 0x22de9c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de98) {
            ctx->pc = 0x22DEB8u;
            goto label_22deb8;
        }
    }
    ctx->pc = 0x22DEA0u;
label_22dea0:
    // 0x22dea0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22dea4: 0x24632e50  addiu       $v1, $v1, 0x2E50
    ctx->pc = 0x22dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11856));
    // 0x22dea8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22deac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22deacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22deb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22deb4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_22deb8:
    // 0x22deb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22deb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22debc: 0x3e00008  jr          $ra
    ctx->pc = 0x22DEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEBCu;
        // 0x22dec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DEC4u;
}
