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

// Function: mmfileOffset
// Address: 0x253998 - 0x2539c4
void mmfileOffset_0x253998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileOffset_0x253998");
#endif

    switch (ctx->pc) {
        case 0x2539acu: goto label_2539ac;
        default: break;
    }

    ctx->pc = 0x253998u;

    // 0x253998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25399c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25399cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2539a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2539a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2539a4: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x2539A4u;
    SET_GPR_U32(ctx, 31, 0x2539ACu);
    ctx->pc = 0x2539A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539A4u;
    // 0x2539a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x2539A4u, 0x2539ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539ACu;
label_2539ac:
    // 0x2539ac: 0x108340  sll         $s0, $s0, 13
    ctx->pc = 0x2539acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 13));
    // 0x2539b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2539b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2539b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2539b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2539b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2539b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2539bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2539BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2539C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539BCu;
        // 0x2539c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2539BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2539C4u;
}
