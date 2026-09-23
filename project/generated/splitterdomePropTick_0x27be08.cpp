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

// Function: splitterdomePropTick
// Address: 0x27be08 - 0x27beac
void splitterdomePropTick_0x27be08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("splitterdomePropTick_0x27be08");
#endif

    switch (ctx->pc) {
        case 0x27be48u: goto label_27be48;
        case 0x27be60u: goto label_27be60;
        default: break;
    }

    ctx->pc = 0x27be08u;

    // 0x27be08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27be08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27be0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27be10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27be14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27be14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27be1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27be1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27be24: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x27be24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27be28: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x27be28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27be2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27be30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27be30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27be34: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x27BE34u;
    {
        const bool branch_taken_0x27be34 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE34u;
        // 0x27be38: 0x8e320160  lw          $s2, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be34) {
            ctx->pc = 0x27BE7Cu;
            goto label_27be7c;
        }
    }
    ctx->pc = 0x27BE3Cu;
    // 0x27be3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27be3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27be40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27be40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27be44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27be48:
    // 0x27be48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27be48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27be4c: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x27be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x27be50: 0xc64d002c  lwc1        $f13, 0x2C($s2)
    ctx->pc = 0x27be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27be54: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x27be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27be58: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x27BE58u;
    SET_GPR_U32(ctx, 31, 0x27BE60u);
    ctx->pc = 0x27BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE58u;
    // 0x27be5c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x27BE58u, 0x27BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE60u;
label_27be60:
    // 0x27be60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27be60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27be64: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x27be64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27be68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27be68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27be6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27be70: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27be70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27be74: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x27BE74u;
    {
        const bool branch_taken_0x27be74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27be74) {
            ctx->pc = 0x27BE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BE74u;
            // 0x27be78: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27be48;
        }
    }
    ctx->pc = 0x27BE7Cu;
label_27be7c:
    // 0x27be7c: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x27be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27be80: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x27be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27be84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27be84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x27be88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27be88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27be8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27be8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27be90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27be90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27be94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27be94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27be98: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x27be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27be9c: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x27be9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x27bea0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27bea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bea4: 0x3e00008  jr          $ra
    ctx->pc = 0x27BEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEA4u;
        // 0x27bea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BEACu;
}
