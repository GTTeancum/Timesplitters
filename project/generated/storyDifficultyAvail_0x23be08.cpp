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

// Function: storyDifficultyAvail
// Address: 0x23be08 - 0x23bee8
void storyDifficultyAvail_0x23be08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("storyDifficultyAvail_0x23be08");
#endif

    switch (ctx->pc) {
        case 0x23be80u: goto label_23be80;
        case 0x23bec0u: goto label_23bec0;
        default: break;
    }

    ctx->pc = 0x23be08u;

    // 0x23be08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23be08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23be0c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x23be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x23be10: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23be14: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x23be14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x23be18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23be1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23be1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be20: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23be24: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23be24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23be28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23be2c: 0x8046df88  lb          $a2, -0x2078($v0)
    ctx->pc = 0x23be2cu;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x31DF88u));
    // 0x23be30: 0x24681dd8  addiu       $t0, $v1, 0x1DD8
    ctx->pc = 0x23be30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 7640));
    // 0x23be34: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x23be34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x23be38: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x23be38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x23be3c: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x23be3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x23be40: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x23be40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x23be44: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x23be44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23be48: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x23be48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23be4c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x23be4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23be50: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x23be50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23be54: 0x14c0001d  bnez        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x23BE54u;
    {
        const bool branch_taken_0x23be54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE54u;
        // 0x23be58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be54) {
            ctx->pc = 0x23BECCu;
            goto label_23becc;
        }
    }
    ctx->pc = 0x23BE5Cu;
    // 0x23be5c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x23be5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23be60: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23BE60u;
    {
        const bool branch_taken_0x23be60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE60u;
        // 0x23be64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be60) {
            ctx->pc = 0x23BECCu;
            goto label_23becc;
        }
    }
    ctx->pc = 0x23BE68u;
    // 0x23be68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23be6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23be70: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x23be70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23be74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23be74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be78: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x23be78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x23be7c: 0x26120003  addiu       $s2, $s0, 0x3
    ctx->pc = 0x23be7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_23be80:
    // 0x23be80: 0x212882a  slt         $s1, $s0, $s2
    ctx->pc = 0x23be80u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23be84: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x23BE84u;
    {
        const bool branch_taken_0x23be84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE84u;
        // 0x23be88: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be84) {
            ctx->pc = 0x23BEC8u;
            goto label_23bec8;
        }
    }
    ctx->pc = 0x23BE8Cu;
    // 0x23be8c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x23be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x23be90: 0x2442c338  addiu       $v0, $v0, -0x3CC8
    ctx->pc = 0x23be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951736));
    // 0x23be94: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x23be94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23be98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23be9c: 0x3266ffff  andi        $a2, $s3, 0xFFFF
    ctx->pc = 0x23be9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x23bea0: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x23bea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23bea4: 0x28a50002  slti        $a1, $a1, 0x2
    ctx->pc = 0x23bea4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23bea8: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x23bea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x23beac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23beb0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23beb4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x23beb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x23beb8: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x23BEB8u;
    SET_GPR_U32(ctx, 31, 0x23BEC0u);
    ctx->pc = 0x23BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BEB8u;
    // 0x23bebc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x23BEB8u, 0x23BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BEC0u;
label_23bec0:
    // 0x23bec0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23BEC0u;
    {
        const bool branch_taken_0x23bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEC0u;
        // 0x23bec4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bec0) {
            ctx->pc = 0x23BE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23be80;
        }
    }
    ctx->pc = 0x23BEC8u;
label_23bec8:
    // 0x23bec8: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x23bec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_23becc:
    // 0x23becc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23beccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23bed0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23bed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23bed4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23bed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bed8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23bed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bedc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23bedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bee0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEE0u;
        // 0x23bee4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BEE8u;
}
