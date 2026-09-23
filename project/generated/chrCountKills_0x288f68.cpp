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

// Function: chrCountKills
// Address: 0x288f68 - 0x289028
void chrCountKills_0x288f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrCountKills_0x288f68");
#endif

    switch (ctx->pc) {
        case 0x288f90u: goto label_288f90;
        case 0x288ff8u: goto label_288ff8;
        default: break;
    }

    ctx->pc = 0x288f68u;

    // 0x288f68: 0x8f8a9f74  lw          $t2, -0x608C($gp)
    ctx->pc = 0x288f68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x288f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x288f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f70: 0x8f89b59c  lw          $t1, -0x4A64($gp)
    ctx->pc = 0x288f70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x288f74: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x288f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x288f78: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x288F78u;
    {
        const bool branch_taken_0x288f78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x288F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F78u;
        // 0x288f7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f78) {
            ctx->pc = 0x288FCCu;
            goto label_288fcc;
        }
    }
    ctx->pc = 0x288F80u;
    // 0x288f80: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x288f80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x288f84: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x288f84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x288f88: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x288f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x288f8c: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x288f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_288f90:
    // 0x288f90: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x288f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x288f94: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x288f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x288f98: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x288f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x288f9c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x288F9Cu;
    {
        const bool branch_taken_0x288f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x288FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F9Cu;
        // 0x288fa0: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f9c) {
            ctx->pc = 0x288FB0u;
            goto label_288fb0;
        }
    }
    ctx->pc = 0x288FA4u;
    // 0x288fa4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x288fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x288fa8: 0x84430020  lh          $v1, 0x20($v0)
    ctx->pc = 0x288fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x288fac: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x288facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_288fb0:
    // 0x288fb0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x288fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x288fb4: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x288fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x288fb8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x288fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x288fbc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x288FBCu;
    {
        const bool branch_taken_0x288fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FBCu;
        // 0x288fc0: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fbc) {
            ctx->pc = 0x288F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288f90;
        }
    }
    ctx->pc = 0x288FC4u;
    // 0x288fc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288FC4u;
    {
        const bool branch_taken_0x288fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FC4u;
        // 0x288fc8: 0x2563c4a8  addiu       $v1, $t3, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fc4) {
            ctx->pc = 0x288FD4u;
            goto label_288fd4;
        }
    }
    ctx->pc = 0x288FCCu;
label_288fcc:
    // 0x288fcc: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x288fccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x288fd0: 0x2563c4a8  addiu       $v1, $t3, -0x3B58
    ctx->pc = 0x288fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952104));
label_288fd4:
    // 0x288fd4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x288fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x288fd8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x288fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x288fdc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x288FDCu;
    {
        const bool branch_taken_0x288fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FDCu;
        // 0x288fe0: 0x1495021  addu        $t2, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fdc) {
            ctx->pc = 0x289020u;
            goto label_289020;
        }
    }
    ctx->pc = 0x288FE4u;
    // 0x288fe4: 0x1940000e  blez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x288FE4u;
    {
        const bool branch_taken_0x288fe4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x288FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FE4u;
        // 0x288fe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fe4) {
            ctx->pc = 0x289020u;
            goto label_289020;
        }
    }
    ctx->pc = 0x288FECu;
    // 0x288fec: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x288fecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288ff0: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x288ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x288ff4: 0x0  nop
    ctx->pc = 0x288ff4u;
    // NOP
label_288ff8:
    // 0x288ff8: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x288ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x288ffc: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x288ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x289000: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x289000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x289004: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x289004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x289008: 0xca282a  slt         $a1, $a2, $t2
    ctx->pc = 0x289008u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x28900c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x28900cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x289010: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x289010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289014: 0x84620020  lh          $v0, 0x20($v1)
    ctx->pc = 0x289014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x289018: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x289018u;
    {
        const bool branch_taken_0x289018 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289018u;
        // 0x28901c: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289018) {
            ctx->pc = 0x288FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288ff8;
        }
    }
    ctx->pc = 0x289020u;
label_289020:
    // 0x289020: 0x3e00008  jr          $ra
    ctx->pc = 0x289020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289020u;
        // 0x289024: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289028u;
}
