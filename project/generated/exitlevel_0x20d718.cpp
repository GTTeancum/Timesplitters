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

// Function: exitlevel
// Address: 0x20d718 - 0x20d74c
void exitlevel_0x20d718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("exitlevel_0x20d718");
#endif

    switch (ctx->pc) {
        case 0x20d740u: goto label_20d740;
        default: break;
    }

    ctx->pc = 0x20d718u;

    // 0x20d718: 0x8f829f60  lw          $v0, -0x60A0($gp)
    ctx->pc = 0x20d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942560)));
    // 0x20d71c: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x20d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x20d720: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x20d720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x20d724: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20d724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20d728: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20d728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20d72c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20d72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20d730: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x20d730u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x20d734: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20d734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d738: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x20D738u;
    SET_GPR_U32(ctx, 31, 0x20D740u);
    ctx->pc = 0x20D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D738u;
    // 0x20d73c: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x20D738u, 0x20D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D740u;
label_20d740:
    // 0x20d740: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20d740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20d744: 0x3e00008  jr          $ra
    ctx->pc = 0x20D744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D744u;
        // 0x20d748: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D74Cu;
}
