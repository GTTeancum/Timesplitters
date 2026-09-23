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

// Function: __sfmoreglue
// Address: 0x2e4780 - 0x2e47f0
void ps2___sfmoreglue_0x2e4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfmoreglue_0x2e4780");
#endif

    switch (ctx->pc) {
        case 0x2e47a8u: goto label_2e47a8;
        case 0x2e47d4u: goto label_2e47d4;
        default: break;
    }

    ctx->pc = 0x2e4780u;

    // 0x2e4780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e4780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e4784: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2e4784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2e4788: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e4788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e478c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e4790: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e4790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4794: 0x2229018  mult        $s2, $s1, $v0
    ctx->pc = 0x2e4794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2e4798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e479c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e47a0: 0xc0b9338  jal         func_2E4CE0
    ctx->pc = 0x2E47A0u;
    SET_GPR_U32(ctx, 31, 0x2E47A8u);
    ctx->pc = 0x2E47A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47A0u;
    // 0x2e47a4: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4CE0u, 0x2E47A0u, 0x2E47A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47A8u;
label_2e47a8:
    // 0x2e47a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e47a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47ac: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E47ACu;
    {
        const bool branch_taken_0x2e47ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47ACu;
        // 0x2e47b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47ac) {
            ctx->pc = 0x2E47D8u;
            goto label_2e47d8;
        }
    }
    ctx->pc = 0x2E47B4u;
    // 0x2e47b4: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x2e47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2e47b8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2e47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2e47bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e47bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e47c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e47c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e47c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e47cc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2E47CCu;
    SET_GPR_U32(ctx, 31, 0x2E47D4u);
    ctx->pc = 0x2E47D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47CCu;
    // 0x2e47d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2E47CCu, 0x2E47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47D4u;
label_2e47d4:
    // 0x2e47d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e47d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e47d8:
    // 0x2e47d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e47d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e47dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e47dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e47e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e47e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e47e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e47e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e47e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E47E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47E8u;
        // 0x2e47ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E47E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E47F0u;
}
