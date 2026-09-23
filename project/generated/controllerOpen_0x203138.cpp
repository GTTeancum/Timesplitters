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

// Function: controllerOpen
// Address: 0x203138 - 0x2031a4
void controllerOpen_0x203138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("controllerOpen_0x203138");
#endif

    switch (ctx->pc) {
        case 0x203150u: goto label_203150;
        case 0x203188u: goto label_203188;
        default: break;
    }

    ctx->pc = 0x203138u;

    // 0x203138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20313c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x20313cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203144: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x203144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x203148: 0x24e20145  addiu       $v0, $a3, 0x145
    ctx->pc = 0x203148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 325));
    // 0x20314c: 0x0  nop
    ctx->pc = 0x20314cu;
    // NOP
label_203150:
    // 0x203150: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x203150u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x203154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x203154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x203158: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x203158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20315c: 0x0  nop
    ctx->pc = 0x20315cu;
    // NOP
    // 0x203160: 0x0  nop
    ctx->pc = 0x203160u;
    // NOP
    // 0x203164: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x203164u;
    {
        const bool branch_taken_0x203164 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x203164) {
            ctx->pc = 0x203150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203150;
        }
    }
    ctx->pc = 0x20316Cu;
    // 0x20316c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x20316cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x203170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203174: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x203174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203178: 0x8ce40100  lw          $a0, 0x100($a3)
    ctx->pc = 0x203178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x20317c: 0x8ce50104  lw          $a1, 0x104($a3)
    ctx->pc = 0x20317cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    // 0x203180: 0xc0b52f0  jal         func_2D4BC0
    ctx->pc = 0x203180u;
    SET_GPR_U32(ctx, 31, 0x203188u);
    ctx->pc = 0x203184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203180u;
    // 0x203184: 0xe4e0013c  swc1        $f0, 0x13C($a3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 316), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4BC0u, 0x203180u, 0x203188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203188u;
label_203188:
    // 0x203188: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203188u;
    {
        const bool branch_taken_0x203188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203188u;
        // 0x20318c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203188) {
            ctx->pc = 0x20319Cu;
            goto label_20319c;
        }
    }
    ctx->pc = 0x203190u;
    // 0x203190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203194: 0x80b8690  j           func_2E1A40
    ctx->pc = 0x203194u;
    ctx->pc = 0x203198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203194u;
    // 0x203198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    exit_0x2e1a40(rdram, ctx, runtime); return;
    ctx->pc = 0x20319Cu;
label_20319c:
    // 0x20319c: 0x3e00008  jr          $ra
    ctx->pc = 0x20319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2031A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20319Cu;
        // 0x2031a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20319Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2031A4u;
}
