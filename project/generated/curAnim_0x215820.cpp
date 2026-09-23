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

// Function: curAnim
// Address: 0x215820 - 0x2158b4
void curAnim_0x215820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("curAnim_0x215820");
#endif

    ctx->pc = 0x215820u;

    // 0x215820: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x215820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x215824: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x215824u;
    {
        const bool branch_taken_0x215824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215824) {
            ctx->pc = 0x215828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215824u;
            // 0x215828: 0x24a2fe45  addiu       $v0, $a1, -0x1BB (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21586Cu;
            goto label_21586c;
        }
    }
    ctx->pc = 0x21582Cu;
    // 0x21582c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215830: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x215830u;
    {
        const bool branch_taken_0x215830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215830u;
        // 0x215834: 0x24a2fe45  addiu       $v0, $a1, -0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215830) {
            ctx->pc = 0x21586Cu;
            goto label_21586c;
        }
    }
    ctx->pc = 0x215838u;
    // 0x215838: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x215838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x21583c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x21583cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x215840: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x215840u;
    {
        const bool branch_taken_0x215840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215840) {
            ctx->pc = 0x215844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215840u;
            // 0x215844: 0x8c830158  lw          $v1, 0x158($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21585Cu;
            goto label_21585c;
        }
    }
    ctx->pc = 0x215848u;
    // 0x215848: 0x24a2ff8f  addiu       $v0, $a1, -0x71
    ctx->pc = 0x215848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967183));
    // 0x21584c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x21584cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x215850: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215850u;
    {
        const bool branch_taken_0x215850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215850u;
        // 0x215854: 0x24a2fe45  addiu       $v0, $a1, -0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215850) {
            ctx->pc = 0x21586Cu;
            goto label_21586c;
        }
    }
    ctx->pc = 0x215858u;
    // 0x215858: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x215858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_21585c:
    // 0x21585c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x21585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x215860: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x215860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x215864: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x215864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215868: 0x24a2fe45  addiu       $v0, $a1, -0x1BB
    ctx->pc = 0x215868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
label_21586c:
    // 0x21586c: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x21586cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x215870: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215870u;
    {
        const bool branch_taken_0x215870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215870u;
        // 0x215874: 0x8c860020  lw          $a2, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215870) {
            ctx->pc = 0x21588Cu;
            goto label_21588c;
        }
    }
    ctx->pc = 0x215878u;
    // 0x215878: 0x24a40026  addiu       $a0, $a1, 0x26
    ctx->pc = 0x215878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 38));
    // 0x21587c: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x21587cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x215880: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x215880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x215884: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x215884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x215888: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x215888u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_21588c:
    // 0x21588c: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x21588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x215890: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x215890u;
    {
        const bool branch_taken_0x215890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x215890) {
            ctx->pc = 0x2158A4u;
            goto label_2158a4;
        }
    }
    ctx->pc = 0x215898u;
    // 0x215898: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x215898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x21589c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21589Cu;
    {
        const bool branch_taken_0x21589c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x21589c) {
            ctx->pc = 0x2158ACu;
            goto label_2158ac;
        }
    }
    ctx->pc = 0x2158A4u;
label_2158a4:
    // 0x2158a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2158A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2158A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158A4u;
        // 0x2158a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2158A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2158ACu;
label_2158ac:
    // 0x2158ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2158ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2158B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158ACu;
        // 0x2158b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2158ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2158B4u;
}
