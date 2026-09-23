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

// Function: mcseqWindowSet
// Address: 0x243f28 - 0x243fa0
void mcseqWindowSet_0x243f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqWindowSet_0x243f28");
#endif

    switch (ctx->pc) {
        case 0x243f94u: goto label_243f94;
        default: break;
    }

    ctx->pc = 0x243f28u;

    // 0x243f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243f2c: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x243f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x243f30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x243f34: 0x252999f0  addiu       $t1, $t1, -0x6610
    ctx->pc = 0x243f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941168));
    // 0x243f38: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x243f38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243f3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x243f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f40: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x243f40u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3299FCu));
    // 0x243f44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x243f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f48: 0x8d220020  lw          $v0, 0x20($t1)
    ctx->pc = 0x243f48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A10u));
    // 0x243f4c: 0x24062880  addiu       $a2, $zero, 0x2880
    ctx->pc = 0x243f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x243f50: 0x148582a  slt         $t3, $t2, $t0
    ctx->pc = 0x243f50u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x243f54: 0x25030007  addiu       $v1, $t0, 0x7
    ctx->pc = 0x243f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x243f58: 0x142502a  slt         $t2, $t2, $v0
    ctx->pc = 0x243f58u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x243f5c: 0x24470003  addiu       $a3, $v0, 0x3
    ctx->pc = 0x243f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x243f60: 0x10b180b  movn        $v1, $t0, $t3
    ctx->pc = 0x243f60u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x243f64: 0x4a380b  movn        $a3, $v0, $t2
    ctx->pc = 0x243f64u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x243f68: 0x8d280018  lw          $t0, 0x18($t1)
    ctx->pc = 0x243f68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x243f6c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x243f6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x243f70: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x243f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x243f74: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x243f74u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x243f78: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x243f78u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x243f7c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x243f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x243f80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x243f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x243f84: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x243f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x243f88: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x243f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x243f8c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x243F8Cu;
    SET_GPR_U32(ctx, 31, 0x243F94u);
    ctx->pc = 0x243F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F8Cu;
    // 0x243f90: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF58u, 0x243F8Cu, 0x243F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F94u;
label_243f94:
    // 0x243f94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243f98: 0x3e00008  jr          $ra
    ctx->pc = 0x243F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F98u;
        // 0x243f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243FA0u;
}
