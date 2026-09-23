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

// Function: animStopImmediately
// Address: 0x241c68 - 0x241d0c
void animStopImmediately_0x241c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("animStopImmediately_0x241c68");
#endif

    switch (ctx->pc) {
        case 0x241c98u: goto label_241c98;
        case 0x241ce0u: goto label_241ce0;
        default: break;
    }

    ctx->pc = 0x241c68u;

    // 0x241c68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x241c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x241c6c: 0x8f86b730  lw          $a2, -0x48D0($gp)
    ctx->pc = 0x241c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x241c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x241c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x241c78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x241c80: 0x18c0001c  blez        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x241C80u;
    {
        const bool branch_taken_0x241c80 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x241C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C80u;
        // 0x241c84: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c80) {
            ctx->pc = 0x241CF4u;
            goto label_241cf4;
        }
    }
    ctx->pc = 0x241C88u;
    // 0x241c88: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x241c88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x241c8c: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x241c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x241c90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x241c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x241c94: 0x0  nop
    ctx->pc = 0x241c94u;
    // NOP
label_241c98:
    // 0x241c98: 0x26421238  addiu       $v0, $s2, 0x1238
    ctx->pc = 0x241c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4664));
    // 0x241c9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241ca0: 0x26243710  addiu       $a0, $s1, 0x3710
    ctx->pc = 0x241ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14096));
    // 0x241ca4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x241ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x241cac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x241cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241cb0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x241cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x241cb4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x241CB4u;
    {
        const bool branch_taken_0x241cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CB4u;
        // 0x241cb8: 0xac40008c  sw          $zero, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cb4) {
            ctx->pc = 0x241CE4u;
            goto label_241ce4;
        }
    }
    ctx->pc = 0x241CBCu;
    // 0x241cbc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x241cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x241cc0: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x241cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x241cc4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x241cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x241cc8: 0xc78c8200  lwc1        $f12, -0x7E00($gp)
    ctx->pc = 0x241cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x241ccc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x241CCCu;
    {
        const bool branch_taken_0x241ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x241CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CCCu;
        // 0x241cd0: 0xac80008c  sw          $zero, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ccc) {
            ctx->pc = 0x241CD8u;
            goto label_241cd8;
        }
    }
    ctx->pc = 0x241CD4u;
    // 0x241cd4: 0xc78c8204  lwc1        $f12, -0x7DFC($gp)
    ctx->pc = 0x241cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_241cd8:
    // 0x241cd8: 0xc0850ec  jal         func_2143B0
    ctx->pc = 0x241CD8u;
    SET_GPR_U32(ctx, 31, 0x241CE0u);
    ctx->pc = 0x2143B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143B0u, 0x241CD8u, 0x241CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CE0u;
label_241ce0:
    // 0x241ce0: 0x8f86b730  lw          $a2, -0x48D0($gp)
    ctx->pc = 0x241ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_241ce4:
    // 0x241ce4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241ce8: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x241ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x241cec: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x241CECu;
    {
        const bool branch_taken_0x241cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CECu;
        // 0x241cf0: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cec) {
            ctx->pc = 0x241C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241c98;
        }
    }
    ctx->pc = 0x241CF4u;
label_241cf4:
    // 0x241cf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x241cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241cf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x241cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241cfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x241cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241d04: 0x3e00008  jr          $ra
    ctx->pc = 0x241D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D04u;
        // 0x241d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241D0Cu;
}
