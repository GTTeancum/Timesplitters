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

// Function: particleGetScale
// Address: 0x296838 - 0x2968a0
void particleGetScale_0x296838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleGetScale_0x296838");
#endif

    switch (ctx->pc) {
        case 0x296848u: goto label_296848;
        default: break;
    }

    ctx->pc = 0x296838u;

    // 0x296838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29683c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296840: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x296840u;
    SET_GPR_U32(ctx, 31, 0x296848u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x296840u, 0x296848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296848u;
label_296848:
    // 0x296848: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x296848u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29684c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296850: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x296850u;
    {
        const bool branch_taken_0x296850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x296854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296850u;
        // 0x296854: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296850) {
            ctx->pc = 0x29687Cu;
            goto label_29687c;
        }
    }
    ctx->pc = 0x296858u;
    // 0x296858: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x296858u;
    {
        const bool branch_taken_0x296858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296858u;
        // 0x29685c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296858) {
            ctx->pc = 0x29688Cu;
            goto label_29688c;
        }
    }
    ctx->pc = 0x296860u;
    // 0x296860: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x296860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x296864: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296864u;
    {
        const bool branch_taken_0x296864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296864u;
        // 0x296868: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296864) {
            ctx->pc = 0x29688Cu;
            goto label_29688c;
        }
    }
    ctx->pc = 0x29686Cu;
    // 0x29686c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x29686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x296870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296874: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296874u;
    {
        const bool branch_taken_0x296874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296874) {
            ctx->pc = 0x296898u;
            goto label_296898;
        }
    }
    ctx->pc = 0x29687Cu;
label_29687c:
    // 0x29687c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29687cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x296880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296884: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x296884u;
    {
        const bool branch_taken_0x296884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296884u;
        // 0x296888: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296884) {
            ctx->pc = 0x296898u;
            goto label_296898;
        }
    }
    ctx->pc = 0x29688Cu;
label_29688c:
    // 0x29688c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29688cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x296890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296898:
    // 0x296898: 0x3e00008  jr          $ra
    ctx->pc = 0x296898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296898u;
        // 0x29689c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2968A0u;
}
