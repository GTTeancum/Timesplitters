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

// Function: zbtestResetAfter
// Address: 0x2a6730 - 0x2a6790
void zbtestResetAfter_0x2a6730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestResetAfter_0x2a6730");
#endif

    switch (ctx->pc) {
        case 0x2a6758u: goto label_2a6758;
        case 0x2a6768u: goto label_2a6768;
        default: break;
    }

    ctx->pc = 0x2a6730u;

    // 0x2a6730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a6730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a6734: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a6734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a6738: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a6738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a673c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a6740: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a6740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a6744: 0x2452a5b8  addiu       $s2, $v0, -0x5A48
    ctx->pc = 0x2a6744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944184));
    // 0x2a6748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a674c: 0x2471a290  addiu       $s1, $v1, -0x5D70
    ctx->pc = 0x2a674cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943376));
    // 0x2a6750: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a6750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a6754: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x2a6754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a6758:
    // 0x2a6758: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a6758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a675c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a675cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a6760: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2A6760u;
    SET_GPR_U32(ctx, 31, 0x2A6768u);
    ctx->pc = 0x2A6764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6760u;
    // 0x2a6764: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2A6760u, 0x2A6768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6768u;
label_2a6768:
    // 0x2a6768: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2a6768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a676c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2a676cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2a6770: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A6770u;
    {
        const bool branch_taken_0x2a6770 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2A6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6770u;
        // 0x2a6774: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6770) {
            ctx->pc = 0x2A6758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6758;
        }
    }
    ctx->pc = 0x2A6778u;
    // 0x2a6778: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a6778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a677c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a677cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6780: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a6780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6788: 0x80a99ca  j           func_2A6728
    ctx->pc = 0x2A6788u;
    ctx->pc = 0x2A678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6788u;
    // 0x2a678c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6728u;
    zbtestRestartAfter_0x2a6728(rdram, ctx, runtime); return;
    ctx->pc = 0x2A6790u;
}
