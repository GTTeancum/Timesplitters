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

// Function: animTest
// Address: 0x219c08 - 0x219cc8
void animTest_0x219c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("animTest_0x219c08");
#endif

    switch (ctx->pc) {
        case 0x219c50u: goto label_219c50;
        case 0x219c94u: goto label_219c94;
        default: break;
    }

    ctx->pc = 0x219c08u;

    // 0x219c08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x219c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x219c0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x219c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x219c10: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x219c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x219c14: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x219c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
    // 0x219c18: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x219c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x219c1c: 0x24150235  addiu       $s5, $zero, 0x235
    ctx->pc = 0x219c1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 565));
    // 0x219c20: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x219c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x219c24: 0x2414024a  addiu       $s4, $zero, 0x24A
    ctx->pc = 0x219c24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 586));
    // 0x219c28: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x219c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x219c2c: 0x2413025f  addiu       $s3, $zero, 0x25F
    ctx->pc = 0x219c2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 607));
    // 0x219c30: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x219c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x219c34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c38: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x219c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x219c3c: 0x2451000c  addiu       $s1, $v0, 0xC
    ctx->pc = 0x219c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x219c40: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x219c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x219c44: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x219c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x219c48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x219c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32AB6Cu));
    // 0x219c4c: 0x0  nop
    ctx->pc = 0x219c4cu;
    // NOP
label_219c50:
    // 0x219c50: 0x12150010  beq         $s0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x219C50u;
    {
        const bool branch_taken_0x219c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x219C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C50u;
        // 0x219c54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c50) {
            ctx->pc = 0x219C94u;
            goto label_219c94;
        }
    }
    ctx->pc = 0x219C58u;
    // 0x219c58: 0x5214000f  beql        $s0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x219C58u;
    {
        const bool branch_taken_0x219c58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x219c58) {
            ctx->pc = 0x219C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C58u;
            // 0x219c5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219C98u;
            goto label_219c98;
        }
    }
    ctx->pc = 0x219C60u;
    // 0x219c60: 0x1213000c  beq         $s0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x219C60u;
    {
        const bool branch_taken_0x219c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x219C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C60u;
        // 0x219c64: 0x2602fe0e  addiu       $v0, $s0, -0x1F2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966798));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c60) {
            ctx->pc = 0x219C94u;
            goto label_219c94;
        }
    }
    ctx->pc = 0x219C68u;
    // 0x219c68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219c6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219c70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x219c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x219c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c7c: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x219c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x219c80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x219C80u;
    {
        const bool branch_taken_0x219c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C80u;
        // 0x219c84: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c80) {
            ctx->pc = 0x219C94u;
            goto label_219c94;
        }
    }
    ctx->pc = 0x219C88u;
    // 0x219c88: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x219c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x219c8c: 0xc0854a0  jal         func_215280
    ctx->pc = 0x219C8Cu;
    SET_GPR_U32(ctx, 31, 0x219C94u);
    ctx->pc = 0x219C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C8Cu;
    // 0x219c90: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x219C8Cu, 0x219C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C94u;
label_219c94:
    // 0x219c94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x219c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_219c98:
    // 0x219c98: 0x2a0202cb  slti        $v0, $s0, 0x2CB
    ctx->pc = 0x219c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)715) ? 1 : 0);
    // 0x219c9c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x219C9Cu;
    {
        const bool branch_taken_0x219c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219c9c) {
            ctx->pc = 0x219CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C9Cu;
            // 0x219ca0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219c50;
        }
    }
    ctx->pc = 0x219CA4u;
    // 0x219ca4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x219ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219ca8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x219ca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x219cac: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x219cacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x219cb0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x219cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219cb4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x219cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219cb8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x219cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219cbc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x219cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x219CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CC0u;
        // 0x219cc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219CC8u;
}
