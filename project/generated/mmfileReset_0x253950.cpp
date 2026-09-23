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

// Function: mmfileReset
// Address: 0x253950 - 0x253998
void mmfileReset_0x253950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileReset_0x253950");
#endif

    switch (ctx->pc) {
        case 0x25396cu: goto label_25396c;
        case 0x25397cu: goto label_25397c;
        case 0x253988u: goto label_253988;
        default: break;
    }

    ctx->pc = 0x253950u;

    // 0x253950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253954: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x253954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x253958: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x253958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x25395c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25395Cu;
    {
        const bool branch_taken_0x25395c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x253960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25395Cu;
        // 0x253960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25395c) {
            ctx->pc = 0x253974u;
            goto label_253974;
        }
    }
    ctx->pc = 0x253964u;
    // 0x253964: 0xc094e3c  jal         func_2538F0
    ctx->pc = 0x253964u;
    SET_GPR_U32(ctx, 31, 0x25396Cu);
    ctx->pc = 0x2538F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538F0u, 0x253964u, 0x25396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25396Cu;
label_25396c:
    // 0x25396c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25396Cu;
    {
        const bool branch_taken_0x25396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25396Cu;
        // 0x253970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25396c) {
            ctx->pc = 0x253980u;
            goto label_253980;
        }
    }
    ctx->pc = 0x253974u;
label_253974:
    // 0x253974: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x253974u;
    SET_GPR_U32(ctx, 31, 0x25397Cu);
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x253974u, 0x25397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25397Cu;
label_25397c:
    // 0x25397c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_253980:
    // 0x253980: 0xc08070e  jal         func_201C38
    ctx->pc = 0x253980u;
    SET_GPR_U32(ctx, 31, 0x253988u);
    ctx->pc = 0x253984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253980u;
    // 0x253984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x253980u, 0x253988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253988u;
label_253988:
    // 0x253988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25398c: 0xaf82a22c  sw          $v0, -0x5DD4($gp)
    ctx->pc = 0x25398cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943276), GPR_U32(ctx, 2));
    // 0x253990: 0x8094e46  j           func_253918
    ctx->pc = 0x253990u;
    ctx->pc = 0x253994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253990u;
    // 0x253994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253918u;
    mmfileDirReset_0x253918(rdram, ctx, runtime); return;
    ctx->pc = 0x253998u;
}
