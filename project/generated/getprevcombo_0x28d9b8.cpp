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

// Function: getprevcombo
// Address: 0x28d9b8 - 0x28dac8
void getprevcombo_0x28d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getprevcombo_0x28d9b8");
#endif

    switch (ctx->pc) {
        case 0x28da20u: goto label_28da20;
        case 0x28da68u: goto label_28da68;
        case 0x28da84u: goto label_28da84;
        default: break;
    }

    ctx->pc = 0x28d9b8u;

    // 0x28d9b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28d9bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x28d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x28d9c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28d9c4: 0x2443c4a8  addiu       $v1, $v0, -0x3B58
    ctx->pc = 0x28d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x28d9c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28d9cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d9ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28d9d4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x28d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x28d9d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28d9dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28d9e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28d9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28d9e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28d9e8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x28d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x28d9ec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x28d9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x28d9f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D9F0u;
    {
        const bool branch_taken_0x28d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9F0u;
        // 0x28d9f4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9f0) {
            ctx->pc = 0x28DA0Cu;
            goto label_28da0c;
        }
    }
    ctx->pc = 0x28D9F8u;
    // 0x28d9f8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x28d9fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D9FCu;
    {
        const bool branch_taken_0x28d9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9FCu;
        // 0x28da00: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9fc) {
            ctx->pc = 0x28DA10u;
            goto label_28da10;
        }
    }
    ctx->pc = 0x28DA04u;
    // 0x28da04: 0x8e620278  lw          $v0, 0x278($s3)
    ctx->pc = 0x28da04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x28da08: 0x2a02a  slt         $s4, $zero, $v0
    ctx->pc = 0x28da08u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28da0c:
    // 0x28da0c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_28da10:
    // 0x28da10: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x28da10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x28da14: 0x24439200  addiu       $v1, $v0, -0x6E00
    ctx->pc = 0x28da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939136));
    // 0x28da18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28da18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da1c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x28da1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28da20:
    // 0x28da20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28da24: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x28da24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x28da28: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x28da28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x28da2c: 0x242800a  movz        $s0, $s2, $v0
    ctx->pc = 0x28da2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x28da30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28da30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28da34: 0x2a420021  slti        $v0, $s2, 0x21
    ctx->pc = 0x28da34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28da38: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28DA38u;
    {
        const bool branch_taken_0x28da38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28da38) {
            ctx->pc = 0x28DA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28da20;
        }
    }
    ctx->pc = 0x28DA40u;
    // 0x28da40: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x28da40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da44: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x28da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28da48: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x28da48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28da4c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x28da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x28da50: 0x214202a  slt         $a0, $s0, $s4
    ctx->pc = 0x28da50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x28da54: 0x24769200  addiu       $s6, $v1, -0x6E00
    ctx->pc = 0x28da54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939136));
    // 0x28da58: 0x44800b  movn        $s0, $v0, $a0
    ctx->pc = 0x28da58u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x28da5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28DA5Cu;
    {
        const bool branch_taken_0x28da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA5Cu;
        // 0x28da60: 0x24150020  addiu       $s5, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da5c) {
            ctx->pc = 0x28DA70u;
            goto label_28da70;
        }
    }
    ctx->pc = 0x28DA64u;
    // 0x28da64: 0x0  nop
    ctx->pc = 0x28da64u;
    // NOP
label_28da68:
    // 0x28da68: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x28da68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x28da6c: 0x2a2800b  movn        $s0, $s5, $v0
    ctx->pc = 0x28da6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
label_28da70:
    // 0x28da70: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28da70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28da74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28da74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da78: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x28da78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28da7c: 0xc0a530c  jal         func_294C30
    ctx->pc = 0x28DA7Cu;
    SET_GPR_U32(ctx, 31, 0x28DA84u);
    ctx->pc = 0x28DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA7Cu;
    // 0x28da80: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294C30u, 0x28DA7Cu, 0x28DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA84u;
label_28da84:
    // 0x28da84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DA84u;
    {
        const bool branch_taken_0x28da84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28da84) {
            ctx->pc = 0x28DA94u;
            goto label_28da94;
        }
    }
    ctx->pc = 0x28DA8Cu;
    // 0x28da8c: 0x5650fff6  bnel        $s2, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28DA8Cu;
    {
        const bool branch_taken_0x28da8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x28da8c) {
            ctx->pc = 0x28DA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DA8Cu;
            // 0x28da90: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28da68;
        }
    }
    ctx->pc = 0x28DA94u;
label_28da94:
    // 0x28da94: 0x52500002  beql        $s2, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28DA94u;
    {
        const bool branch_taken_0x28da94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x28da94) {
            ctx->pc = 0x28DA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DA94u;
            // 0x28da98: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DAA0u;
            goto label_28daa0;
        }
    }
    ctx->pc = 0x28DA9Cu;
    // 0x28da9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28daa0:
    // 0x28daa0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28daa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28daa4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28daa4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28daa8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28daa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28daac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28daacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28dab0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28dab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28dab4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28dab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dab8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28dab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dabc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dac0: 0x3e00008  jr          $ra
    ctx->pc = 0x28DAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC0u;
        // 0x28dac4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DAC8u;
}
