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

// Function: goodiesGetMisc
// Address: 0x2402d8 - 0x24031c
void goodiesGetMisc_0x2402d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("goodiesGetMisc_0x2402d8");
#endif

    switch (ctx->pc) {
        case 0x2402f0u: goto label_2402f0;
        case 0x2402fcu: goto label_2402fc;
        default: break;
    }

    ctx->pc = 0x2402d8u;

    // 0x2402d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2402d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2402dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2402dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2402e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2402e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2402e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2402e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2402e8: 0xc08cb64  jal         func_232D90
    ctx->pc = 0x2402E8u;
    SET_GPR_U32(ctx, 31, 0x2402F0u);
    ctx->pc = 0x2402ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402E8u;
    // 0x2402ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D90u, 0x2402E8u, 0x2402F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402F0u;
label_2402f0:
    // 0x2402f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2402f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2402f4: 0xc089404  jal         func_225010
    ctx->pc = 0x2402F4u;
    SET_GPR_U32(ctx, 31, 0x2402FCu);
    ctx->pc = 0x2402F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402F4u;
    // 0x2402f8: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225010u, 0x2402F4u, 0x2402FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402FCu;
label_2402fc:
    // 0x2402fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2402FCu;
    {
        const bool branch_taken_0x2402fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402FCu;
        // 0x240300: 0x36020001  ori         $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402fc) {
            ctx->pc = 0x240308u;
            goto label_240308;
        }
    }
    ctx->pc = 0x240304u;
    // 0x240304: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x240304u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240308:
    // 0x240308: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24030c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24030cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240314: 0x3e00008  jr          $ra
    ctx->pc = 0x240314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240314u;
        // 0x240318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24031Cu;
}
