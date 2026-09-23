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

// Function: onlyoneselectableteam
// Address: 0x235710 - 0x235788
void onlyoneselectableteam_0x235710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("onlyoneselectableteam_0x235710");
#endif

    switch (ctx->pc) {
        case 0x235738u: goto label_235738;
        case 0x235740u: goto label_235740;
        default: break;
    }

    ctx->pc = 0x235710u;

    // 0x235710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x235714: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x235714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x235718: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x235718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23571c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23571cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235720: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x235720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x235724: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x235724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235728: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x235728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23572c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23572cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235734: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x235734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_235738:
    // 0x235738: 0xc08d582  jal         func_235608
    ctx->pc = 0x235738u;
    SET_GPR_U32(ctx, 31, 0x235740u);
    ctx->pc = 0x23573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235738u;
    // 0x23573c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235608u, 0x235738u, 0x235740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235740u;
label_235740:
    // 0x235740: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x235740u;
    {
        const bool branch_taken_0x235740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235740) {
            ctx->pc = 0x235744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235740u;
            // 0x235744: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235754u;
            goto label_235754;
        }
    }
    ctx->pc = 0x235748u;
    // 0x235748: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x235748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23574c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23574cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x235750: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x235750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235754:
    // 0x235754: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x235754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x235758: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x235758u;
    {
        const bool branch_taken_0x235758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235758u;
        // 0x23575c: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235758) {
            ctx->pc = 0x235738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235738;
        }
    }
    ctx->pc = 0x235760u;
    // 0x235760: 0x3a430001  xori        $v1, $s2, 0x1
    ctx->pc = 0x235760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x235764: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x235764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x235768: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x235768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23576c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x23576cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x235770: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x235770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235774: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235778: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x235778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23577c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23577cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235780: 0x3e00008  jr          $ra
    ctx->pc = 0x235780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235780u;
        // 0x235784: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235788u;
}
