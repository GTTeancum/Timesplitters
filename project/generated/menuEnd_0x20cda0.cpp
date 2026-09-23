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

// Function: menuEnd
// Address: 0x20cda0 - 0x20ce14
void menuEnd_0x20cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuEnd_0x20cda0");
#endif

    switch (ctx->pc) {
        case 0x20cdc0u: goto label_20cdc0;
        case 0x20cdd4u: goto label_20cdd4;
        case 0x20cddcu: goto label_20cddc;
        default: break;
    }

    ctx->pc = 0x20cda0u;

    // 0x20cda0: 0x8f839c60  lw          $v1, -0x63A0($gp)
    ctx->pc = 0x20cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941792)));
    // 0x20cda4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cda4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cda8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cdac: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x20cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20cdb0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20CDB0u;
    {
        const bool branch_taken_0x20cdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDB0u;
        // 0x20cdb4: 0xaf829c60  sw          $v0, -0x63A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cdb0) {
            ctx->pc = 0x20CDE4u;
            goto label_20cde4;
        }
    }
    ctx->pc = 0x20CDB8u;
    // 0x20cdb8: 0xc0836ca  jal         func_20DB28
    ctx->pc = 0x20CDB8u;
    SET_GPR_U32(ctx, 31, 0x20CDC0u);
    ctx->pc = 0x20DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB28u, 0x20CDB8u, 0x20CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDC0u;
label_20cdc0:
    // 0x20cdc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cdc4: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x20CDC4u;
    {
        const bool branch_taken_0x20cdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20cdc4) {
            ctx->pc = 0x20CDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CDC4u;
            // 0x20cdc8: 0xaf809c68  sw          $zero, -0x6398($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294941800), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CE00u;
            goto label_20ce00;
        }
    }
    ctx->pc = 0x20CDCCu;
    // 0x20cdcc: 0xc083250  jal         func_20C940
    ctx->pc = 0x20CDCCu;
    SET_GPR_U32(ctx, 31, 0x20CDD4u);
    ctx->pc = 0x20C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C940u, 0x20CDCCu, 0x20CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDD4u;
label_20cdd4:
    // 0x20cdd4: 0xc0836fc  jal         func_20DBF0
    ctx->pc = 0x20CDD4u;
    SET_GPR_U32(ctx, 31, 0x20CDDCu);
    ctx->pc = 0x20DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DBF0u, 0x20CDD4u, 0x20CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDDCu;
label_20cddc:
    // 0x20cddc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20CDDCu;
    {
        const bool branch_taken_0x20cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDDCu;
        // 0x20cde0: 0xaf809c68  sw          $zero, -0x6398($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cddc) {
            ctx->pc = 0x20CE00u;
            goto label_20ce00;
        }
    }
    ctx->pc = 0x20CDE4u;
label_20cde4:
    // 0x20cde4: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x20cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x20cde8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20cdec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20cdf0: 0x24639a50  addiu       $v1, $v1, -0x65B0
    ctx->pc = 0x20cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941264));
    // 0x20cdf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cdf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cdfc: 0xaf849c68  sw          $a0, -0x6398($gp)
    ctx->pc = 0x20cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941800), GPR_U32(ctx, 4));
label_20ce00:
    // 0x20ce00: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20ce04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ce04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ce08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ce0c: 0x8080ea2  j           func_203A88
    ctx->pc = 0x20CE0Cu;
    ctx->pc = 0x20CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE0Cu;
    // 0x20ce10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    joyClearAll_0x203a88(rdram, ctx, runtime); return;
    ctx->pc = 0x20CE14u;
}
