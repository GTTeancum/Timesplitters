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

// Function: weatherGetWindAtPosition
// Address: 0x2a8450 - 0x2a8484
void weatherGetWindAtPosition_0x2a8450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weatherGetWindAtPosition_0x2a8450");
#endif

    switch (ctx->pc) {
        case 0x2a8464u: goto label_2a8464;
        default: break;
    }

    ctx->pc = 0x2a8450u;

    // 0x2a8450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a8454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a8458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a845c: 0xc0aa01e  jal         func_2A8078
    ctx->pc = 0x2A845Cu;
    SET_GPR_U32(ctx, 31, 0x2A8464u);
    ctx->pc = 0x2A8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A845Cu;
    // 0x2a8460: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8078u, 0x2A845Cu, 0x2A8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8464u;
label_2a8464:
    // 0x2a8464: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a8464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a8468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a846c: 0xc44ca70c  lwc1        $f12, -0x58F4($v0)
    ctx->pc = 0x2a846cu;
    { uint32_t bits = FAST_READ32(0x36A70Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8474: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2a8474u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2a8478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a8478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a847c: 0x80aa032  j           func_2A80C8
    ctx->pc = 0x2A847Cu;
    ctx->pc = 0x2A8480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A847Cu;
    // 0x2a8480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A80C8u;
    weatherCalcWindAtTime_0x2a80c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8484u;
}
