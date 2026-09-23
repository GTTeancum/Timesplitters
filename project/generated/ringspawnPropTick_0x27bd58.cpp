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

// Function: ringspawnPropTick
// Address: 0x27bd58 - 0x27be04
void ringspawnPropTick_0x27bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ringspawnPropTick_0x27bd58");
#endif

    switch (ctx->pc) {
        case 0x27bd98u: goto label_27bd98;
        case 0x27bdb0u: goto label_27bdb0;
        default: break;
    }

    ctx->pc = 0x27bd58u;

    // 0x27bd58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27bd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27bd5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27bd60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27bd64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27bd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27bd6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27bd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27bd74: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x27bd74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27bd78: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x27bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27bd7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27bd80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27bd84: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x27BD84u;
    {
        const bool branch_taken_0x27bd84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD84u;
        // 0x27bd88: 0x8e320160  lw          $s2, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd84) {
            ctx->pc = 0x27BDCCu;
            goto label_27bdcc;
        }
    }
    ctx->pc = 0x27BD8Cu;
    // 0x27bd8c: 0xc79487a8  lwc1        $f20, -0x7858($gp)
    ctx->pc = 0x27bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27bd90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27bd94: 0x0  nop
    ctx->pc = 0x27bd94u;
    // NOP
label_27bd98:
    // 0x27bd98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27bd98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27bd9c: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x27bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x27bda0: 0xc64d002c  lwc1        $f13, 0x2C($s2)
    ctx->pc = 0x27bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27bda4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x27bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27bda8: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x27BDA8u;
    SET_GPR_U32(ctx, 31, 0x27BDB0u);
    ctx->pc = 0x27BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDA8u;
    // 0x27bdac: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x27BDA8u, 0x27BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDB0u;
label_27bdb0:
    // 0x27bdb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27bdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27bdb4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x27bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27bdb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27bdbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bdc0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27bdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27bdc4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x27BDC4u;
    {
        const bool branch_taken_0x27bdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bdc4) {
            ctx->pc = 0x27BDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BDC4u;
            // 0x27bdc8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27bd98;
        }
    }
    ctx->pc = 0x27BDCCu;
label_27bdcc:
    // 0x27bdcc: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x27bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bdd0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x27bdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x27bdd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27bdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27bdd8: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x27bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bddc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27bddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27bde0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27bde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bde4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27bde4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bde8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bdec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27bdecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27bdf0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x27bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27bdf4: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x27bdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x27bdf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27bdf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x27BDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDFCu;
        // 0x27be00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BE04u;
}
