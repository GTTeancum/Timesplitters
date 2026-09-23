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

// Function: cyclepropview
// Address: 0x20d5c8 - 0x20d624
void cyclepropview_0x20d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cyclepropview_0x20d5c8");
#endif

    switch (ctx->pc) {
        case 0x20d5d8u: goto label_20d5d8;
        default: break;
    }

    ctx->pc = 0x20d5c8u;

    // 0x20d5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d5cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d5d0: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x20D5D0u;
    SET_GPR_U32(ctx, 31, 0x20D5D8u);
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x20D5D0u, 0x20D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5D8u;
label_20d5d8:
    // 0x20d5d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20d5d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d5dc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x20d5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20d5e0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20D5E0u;
    {
        const bool branch_taken_0x20d5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d5e0) {
            ctx->pc = 0x20D5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D5E0u;
            // 0x20d5e4: 0x8f83b234  lw          $v1, -0x4DCC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D60Cu;
            goto label_20d60c;
        }
    }
    ctx->pc = 0x20D5E8u;
    // 0x20d5e8: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x20d5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x20d5ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D5ECu;
    {
        const bool branch_taken_0x20d5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5ECu;
        // 0x20d5f0: 0x8f83b234  lw          $v1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5ec) {
            ctx->pc = 0x20D60Cu;
            goto label_20d60c;
        }
    }
    ctx->pc = 0x20D5F4u;
    // 0x20d5f4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x20d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20d5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d5fc: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x20d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x20d600: 0xac620388  sw          $v0, 0x388($v1)
    ctx->pc = 0x20d600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 904), GPR_U32(ctx, 2));
    // 0x20d604: 0x809f8c4  j           func_27E310
    ctx->pc = 0x20D604u;
    ctx->pc = 0x20D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D604u;
    // 0x20d608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    camSetMode_0x27e310(rdram, ctx, runtime); return;
    ctx->pc = 0x20D60Cu;
label_20d60c:
    // 0x20d60c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d614: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x20d614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x20d618: 0xac620388  sw          $v0, 0x388($v1)
    ctx->pc = 0x20d618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 904), GPR_U32(ctx, 2));
    // 0x20d61c: 0x809f8c4  j           func_27E310
    ctx->pc = 0x20D61Cu;
    ctx->pc = 0x20D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D61Cu;
    // 0x20d620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    camSetMode_0x27e310(rdram, ctx, runtime); return;
    ctx->pc = 0x20D624u;
}
