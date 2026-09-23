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

// Function: debugmenuEnd
// Address: 0x20dbf0 - 0x20dc44
void debugmenuEnd_0x20dbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugmenuEnd_0x20dbf0");
#endif

    switch (ctx->pc) {
        case 0x20dc00u: goto label_20dc00;
        default: break;
    }

    ctx->pc = 0x20dbf0u;

    // 0x20dbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20dbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20dbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20dbf8: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x20DBF8u;
    SET_GPR_U32(ctx, 31, 0x20DC00u);
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x20DBF8u, 0x20DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC00u;
label_20dc00:
    // 0x20dc00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20dc00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dc08: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20DC08u;
    {
        const bool branch_taken_0x20dc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC08u;
        // 0x20dc0c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc08) {
            ctx->pc = 0x20DC34u;
            goto label_20dc34;
        }
    }
    ctx->pc = 0x20DC10u;
    // 0x20dc10: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20DC10u;
    {
        const bool branch_taken_0x20dc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC10u;
        // 0x20dc14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc10) {
            ctx->pc = 0x20DC38u;
            goto label_20dc38;
        }
    }
    ctx->pc = 0x20DC18u;
    // 0x20dc18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20dc1c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DC1Cu;
    {
        const bool branch_taken_0x20dc1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC1Cu;
        // 0x20dc20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc1c) {
            ctx->pc = 0x20DC3Cu;
            goto label_20dc3c;
        }
    }
    ctx->pc = 0x20DC24u;
    // 0x20dc24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dc28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dc2c: 0x80836c8  j           func_20DB20
    ctx->pc = 0x20DC2Cu;
    ctx->pc = 0x20DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC2Cu;
    // 0x20dc30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB20u;
    debugmenuSetJoyMode_0x20db20(rdram, ctx, runtime); return;
    ctx->pc = 0x20DC34u;
label_20dc34:
    // 0x20dc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20dc38:
    // 0x20dc38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20dc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dc3c:
    // 0x20dc3c: 0x80836c8  j           func_20DB20
    ctx->pc = 0x20DC3Cu;
    ctx->pc = 0x20DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC3Cu;
    // 0x20dc40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB20u;
    debugmenuSetJoyMode_0x20db20(rdram, ctx, runtime); return;
    ctx->pc = 0x20DC44u;
}
