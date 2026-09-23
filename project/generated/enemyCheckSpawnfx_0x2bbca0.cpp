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

// Function: enemyCheckSpawnfx
// Address: 0x2bbca0 - 0x2bbcf8
void enemyCheckSpawnfx_0x2bbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyCheckSpawnfx_0x2bbca0");
#endif

    switch (ctx->pc) {
        case 0x2bbce4u: goto label_2bbce4;
        default: break;
    }

    ctx->pc = 0x2bbca0u;

    // 0x2bbca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bbcac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbcb0: 0x8e0411a4  lw          $a0, 0x11A4($s0)
    ctx->pc = 0x2bbcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4516)));
    // 0x2bbcb4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BBCB4u;
    {
        const bool branch_taken_0x2bbcb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCB4u;
        // 0x2bbcb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbcb4) {
            ctx->pc = 0x2BBCECu;
            goto label_2bbcec;
        }
    }
    ctx->pc = 0x2BBCBCu;
    // 0x2bbcbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2bbcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bbcc0: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2BBCC0u;
    {
        const bool branch_taken_0x2bbcc0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2BBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCC0u;
        // 0x2bbcc4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbcc0) {
            ctx->pc = 0x2BBCECu;
            goto label_2bbcec;
        }
    }
    ctx->pc = 0x2BBCC8u;
    // 0x2bbcc8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BBCC8u;
    {
        const bool branch_taken_0x2bbcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbcc8) {
            ctx->pc = 0x2BBCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBCC8u;
            // 0x2bbccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBCF0u;
            goto label_2bbcf0;
        }
    }
    ctx->pc = 0x2BBCD0u;
    // 0x2bbcd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bbcd4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBCD4u;
    {
        const bool branch_taken_0x2bbcd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbcd4) {
            ctx->pc = 0x2BBCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBCD4u;
            // 0x2bbcd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBCF0u;
            goto label_2bbcf0;
        }
    }
    ctx->pc = 0x2BBCDCu;
    // 0x2bbcdc: 0xc0ab870  jal         func_2AE1C0
    ctx->pc = 0x2BBCDCu;
    SET_GPR_U32(ctx, 31, 0x2BBCE4u);
    ctx->pc = 0x2AE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1C0u, 0x2BBCDCu, 0x2BBCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBCE4u;
label_2bbce4:
    // 0x2bbce4: 0xae0011a4  sw          $zero, 0x11A4($s0)
    ctx->pc = 0x2bbce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4516), GPR_U32(ctx, 0));
    // 0x2bbce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bbcec:
    // 0x2bbcec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbcecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bbcf0:
    // 0x2bbcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCF0u;
        // 0x2bbcf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBCF8u;
}
