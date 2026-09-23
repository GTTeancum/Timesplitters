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

// Function: chrReset
// Address: 0x284ff8 - 0x285034
void chrReset_0x284ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrReset_0x284ff8");
#endif

    switch (ctx->pc) {
        case 0x285024u: goto label_285024;
        default: break;
    }

    ctx->pc = 0x284ff8u;

    // 0x284ff8: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x284ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x284ffc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x284ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x285000: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x285000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x285004: 0x24061210  addiu       $a2, $zero, 0x1210
    ctx->pc = 0x285004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x285008: 0x38420066  xori        $v0, $v0, 0x66
    ctx->pc = 0x285008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)102);
    // 0x28500c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28500cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285010: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x285010u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x285014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285018: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x285018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28501c: 0xc08070e  jal         func_201C38
    ctx->pc = 0x28501Cu;
    SET_GPR_U32(ctx, 31, 0x285024u);
    ctx->pc = 0x285020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28501Cu;
    // 0x285020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x28501Cu, 0x285024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285024u;
label_285024:
    // 0x285024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285028: 0xaf82b238  sw          $v0, -0x4DC8($gp)
    ctx->pc = 0x285028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947384), GPR_U32(ctx, 2));
    // 0x28502c: 0x80a13f2  j           func_284FC8
    ctx->pc = 0x28502Cu;
    ctx->pc = 0x285030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28502Cu;
    // 0x285030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC8u;
    chrRestart_0x284fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x285034u;
}
