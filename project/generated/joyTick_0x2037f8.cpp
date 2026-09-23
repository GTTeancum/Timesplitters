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

// Function: joyTick
// Address: 0x2037f8 - 0x20385c
void joyTick_0x2037f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyTick_0x2037f8");
#endif

    switch (ctx->pc) {
        case 0x203810u: goto label_203810;
        case 0x203828u: goto label_203828;
        case 0x203830u: goto label_203830;
        case 0x203848u: goto label_203848;
        default: break;
    }

    ctx->pc = 0x2037f8u;

    // 0x2037f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2037f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2037fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2037fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203808: 0xc080d6a  jal         func_2035A8
    ctx->pc = 0x203808u;
    SET_GPR_U32(ctx, 31, 0x203810u);
    ctx->pc = 0x2035A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2035A8u, 0x203808u, 0x203810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203810u;
label_203810:
    // 0x203810: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x203814: 0xaf809ad8  sw          $zero, -0x6528($gp)
    ctx->pc = 0x203814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941400), GPR_U32(ctx, 0));
    // 0x203818: 0x2450c740  addiu       $s0, $v0, -0x38C0
    ctx->pc = 0x203818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x20381c: 0x26110c00  addiu       $s1, $s0, 0xC00
    ctx->pc = 0x20381cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
    // 0x203820: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x203820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x31C894u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x31C894u, _value); } while (0);
    // 0x203824: 0x0  nop
    ctx->pc = 0x203824u;
    // NOP
label_203828:
    // 0x203828: 0xc080c6a  jal         func_2031A8
    ctx->pc = 0x203828u;
    SET_GPR_U32(ctx, 31, 0x203830u);
    ctx->pc = 0x20382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203828u;
    // 0x20382c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2031A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2031A8u, 0x203828u, 0x203830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203830u;
label_203830:
    // 0x203830: 0x26100180  addiu       $s0, $s0, 0x180
    ctx->pc = 0x203830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x203834: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x203834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x203838: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x203838u;
    {
        const bool branch_taken_0x203838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203838) {
            ctx->pc = 0x20383Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203838u;
            // 0x20383c: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203828;
        }
    }
    ctx->pc = 0x203840u;
    // 0x203840: 0xc080dac  jal         func_2036B0
    ctx->pc = 0x203840u;
    SET_GPR_U32(ctx, 31, 0x203848u);
    ctx->pc = 0x2036B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2036B0u, 0x203840u, 0x203848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203848u;
label_203848:
    // 0x203848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20384c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20384cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203854: 0x8080b64  j           func_202D90
    ctx->pc = 0x203854u;
    ctx->pc = 0x203858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203854u;
    // 0x203858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D90u;
    replayTick_0x202d90(rdram, ctx, runtime); return;
    ctx->pc = 0x20385Cu;
}
