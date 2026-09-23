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

// Function: actingsoundStop
// Address: 0x238490 - 0x2384d8
void actingsoundStop_0x238490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("actingsoundStop_0x238490");
#endif

    switch (ctx->pc) {
        case 0x2384c0u: goto label_2384c0;
        default: break;
    }

    ctx->pc = 0x238490u;

    // 0x238490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238494: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x238494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23849c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23849cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2384a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2384a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2384a4: 0x244212f8  addiu       $v0, $v0, 0x12F8
    ctx->pc = 0x2384a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4856));
    // 0x2384a8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2384a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2384ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2384acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2384b0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2384B0u;
    {
        const bool branch_taken_0x2384b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2384B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384B0u;
        // 0x2384b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384b0) {
            ctx->pc = 0x2384CCu;
            goto label_2384cc;
        }
    }
    ctx->pc = 0x2384B8u;
    // 0x2384b8: 0xc081530  jal         func_2054C0
    ctx->pc = 0x2384B8u;
    SET_GPR_U32(ctx, 31, 0x2384C0u);
    ctx->pc = 0x2054C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054C0u, 0x2384B8u, 0x2384C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384C0u;
label_2384c0:
    // 0x2384c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2384c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2384c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2384c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2384c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2384c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2384cc:
    // 0x2384cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2384ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2384d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2384D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2384D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384D0u;
        // 0x2384d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2384D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2384D8u;
}
