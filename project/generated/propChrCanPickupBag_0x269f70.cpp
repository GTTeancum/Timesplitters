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

// Function: propChrCanPickupBag
// Address: 0x269f70 - 0x269fc4
void propChrCanPickupBag_0x269f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propChrCanPickupBag_0x269f70");
#endif

    ctx->pc = 0x269f70u;

    // 0x269f70: 0x8c820a94  lw          $v0, 0xA94($a0)
    ctx->pc = 0x269f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x269f74: 0x8ca60160  lw          $a2, 0x160($a1)
    ctx->pc = 0x269f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x269f78: 0x30421020  andi        $v0, $v0, 0x1020
    ctx->pc = 0x269f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4128);
    // 0x269f7c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x269F7Cu;
    {
        const bool branch_taken_0x269f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F7Cu;
        // 0x269f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f7c) {
            ctx->pc = 0x269FBCu;
            goto label_269fbc;
        }
    }
    ctx->pc = 0x269F84u;
    // 0x269f84: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x269f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x269f88: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x269F88u;
    {
        const bool branch_taken_0x269f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F88u;
        // 0x269f8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f88) {
            ctx->pc = 0x269FBCu;
            goto label_269fbc;
        }
    }
    ctx->pc = 0x269F90u;
    // 0x269f90: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x269f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x269f94: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269F94u;
    {
        const bool branch_taken_0x269f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x269F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F94u;
        // 0x269f98: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f94) {
            ctx->pc = 0x269FBCu;
            goto label_269fbc;
        }
    }
    ctx->pc = 0x269F9Cu;
    // 0x269f9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x269f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269fa0: 0x8c62c4f0  lw          $v0, -0x3B10($v1)
    ctx->pc = 0x269fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952176)));
    // 0x269fa4: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x269FA4u;
    {
        const bool branch_taken_0x269fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x269fa4) {
            ctx->pc = 0x269FBCu;
            goto label_269fbc;
        }
    }
    ctx->pc = 0x269FACu;
    // 0x269fac: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x269facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x269fb0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x269fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x269fb4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x269fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x269fb8: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x269fb8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_269fbc:
    // 0x269fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x269FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FBCu;
        // 0x269fc0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269FC4u;
}
