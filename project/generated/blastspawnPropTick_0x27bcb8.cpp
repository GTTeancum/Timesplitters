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

// Function: blastspawnPropTick
// Address: 0x27bcb8 - 0x27bd54
void blastspawnPropTick_0x27bcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("blastspawnPropTick_0x27bcb8");
#endif

    switch (ctx->pc) {
        case 0x27bd08u: goto label_27bd08;
        case 0x27bd24u: goto label_27bd24;
        default: break;
    }

    ctx->pc = 0x27bcb8u;

    // 0x27bcb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27bcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27bcbc: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x27bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bcc0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x27bcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x27bcc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27bcc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27bcc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27bccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27bcd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bcd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bcd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27bcd8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27bcd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27bcdc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27bce0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27bce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bce4: 0x8e320160  lw          $s2, 0x160($s1)
    ctx->pc = 0x27bce4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x27bce8: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x27bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bcec: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x27bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27bcf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27bcf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27bcf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27bcf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27bcfc: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x27BCFCu;
    {
        const bool branch_taken_0x27bcfc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCFCu;
        // 0x27bd00: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcfc) {
            ctx->pc = 0x27BD3Cu;
            goto label_27bd3c;
        }
    }
    ctx->pc = 0x27BD04u;
    // 0x27bd04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27bd08:
    // 0x27bd08: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x27bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27bd0c: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x27bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x27bd10: 0xc64d002c  lwc1        $f13, 0x2C($s2)
    ctx->pc = 0x27bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27bd14: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x27bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27bd18: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x27bd18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x27bd1c: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x27BD1Cu;
    SET_GPR_U32(ctx, 31, 0x27BD24u);
    ctx->pc = 0x27BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD1Cu;
    // 0x27bd20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x27BD1Cu, 0x27BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD24u;
label_27bd24:
    // 0x27bd24: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x27bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27bd28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27bd2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bd30: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27bd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27bd34: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x27BD34u;
    {
        const bool branch_taken_0x27bd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bd34) {
            ctx->pc = 0x27BD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BD34u;
            // 0x27bd38: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27bd08;
        }
    }
    ctx->pc = 0x27BD3Cu;
label_27bd3c:
    // 0x27bd3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27bd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bd40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27bd40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bd44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27bd44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bd48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD4Cu;
        // 0x27bd50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BD54u;
}
