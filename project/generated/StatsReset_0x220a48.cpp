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

// Function: StatsReset
// Address: 0x220a48 - 0x220ac4
void StatsReset_0x220a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsReset_0x220a48");
#endif

    switch (ctx->pc) {
        case 0x220a80u: goto label_220a80;
        case 0x220a88u: goto label_220a88;
        default: break;
    }

    ctx->pc = 0x220a48u;

    // 0x220a48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x220a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220a4c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x220a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x220a50: 0x2442e6a8  addiu       $v0, $v0, -0x1958
    ctx->pc = 0x220a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
    // 0x220a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220a58: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x220a58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x220a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x220a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x220a64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x220a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x220a68: 0x26124ad0  addiu       $s2, $s0, 0x4AD0
    ctx->pc = 0x220a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 19152));
    // 0x220a6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x220a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x220a70: 0x24510550  addiu       $s1, $v0, 0x550
    ctx->pc = 0x220a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x220a74: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x220a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x220a78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x220a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x220a7c: 0x0  nop
    ctx->pc = 0x220a7cu;
    // NOP
label_220a80:
    // 0x220a80: 0xc0882b2  jal         func_220AC8
    ctx->pc = 0x220A80u;
    SET_GPR_U32(ctx, 31, 0x220A88u);
    ctx->pc = 0x220A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A80u;
    // 0x220a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x220A80u, 0x220A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A88u;
label_220a88:
    // 0x220a88: 0xae0004f8  sw          $zero, 0x4F8($s0)
    ctx->pc = 0x220a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1272), GPR_U32(ctx, 0));
    // 0x220a8c: 0xae00054c  sw          $zero, 0x54C($s0)
    ctx->pc = 0x220a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1356), GPR_U32(ctx, 0));
    // 0x220a90: 0xe6140554  swc1        $f20, 0x554($s0)
    ctx->pc = 0x220a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1364), bits); }
    // 0x220a94: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x220a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x220a98: 0x26100558  addiu       $s0, $s0, 0x558
    ctx->pc = 0x220a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1368));
    // 0x220a9c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x220a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x220aa0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x220AA0u;
    {
        const bool branch_taken_0x220aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AA0u;
        // 0x220aa4: 0x26310558  addiu       $s1, $s1, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220aa0) {
            ctx->pc = 0x220A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220a80;
        }
    }
    ctx->pc = 0x220AA8u;
    // 0x220aa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x220aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220aac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x220aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220ab0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x220ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220ab8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x220ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x220abc: 0x3e00008  jr          $ra
    ctx->pc = 0x220ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ABCu;
        // 0x220ac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220AC4u;
}
