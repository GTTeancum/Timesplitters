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

// Function: particleReset
// Address: 0x296a68 - 0x296a90
void particleReset_0x296a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleReset_0x296a68");
#endif

    switch (ctx->pc) {
        case 0x296a80u: goto label_296a80;
        default: break;
    }

    ctx->pc = 0x296a68u;

    // 0x296a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296a6c: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x296a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
    // 0x296a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296a78: 0xc08070e  jal         func_201C38
    ctx->pc = 0x296A78u;
    SET_GPR_U32(ctx, 31, 0x296A80u);
    ctx->pc = 0x296A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A78u;
    // 0x296a7c: 0x34843a80  ori         $a0, $a0, 0x3A80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14976);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x296A78u, 0x296A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A80u;
label_296a80:
    // 0x296a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296a84: 0xaf82b2f0  sw          $v0, -0x4D10($gp)
    ctx->pc = 0x296a84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947568), GPR_U32(ctx, 2));
    // 0x296a88: 0x80a5a4a  j           func_296928
    ctx->pc = 0x296A88u;
    ctx->pc = 0x296A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A88u;
    // 0x296a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296928u;
    particleRestart_0x296928(rdram, ctx, runtime); return;
    ctx->pc = 0x296A90u;
}
