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

// Function: propFileInName
// Address: 0x27c138 - 0x27c174
void propFileInName_0x27c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propFileInName_0x27c138");
#endif

    switch (ctx->pc) {
        case 0x27c160u: goto label_27c160;
        default: break;
    }

    ctx->pc = 0x27c138u;

    // 0x27c138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c13c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x27c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x27c140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c144: 0x24a58748  addiu       $a1, $a1, -0x78B8
    ctx->pc = 0x27c144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936392));
    // 0x27c148: 0x3c1001ff  lui         $s0, 0x1FF
    ctx->pc = 0x27c148u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)511 << 16));
    // 0x27c14c: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x27c14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x27c150: 0x261098f0  addiu       $s0, $s0, -0x6710
    ctx->pc = 0x27c150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940912));
    // 0x27c154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27c158: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x27C158u;
    SET_GPR_U32(ctx, 31, 0x27C160u);
    ctx->pc = 0x27C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C158u;
    // 0x27c15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x27C158u, 0x27C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C160u;
label_27c160:
    // 0x27c160: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27c160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27c164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c16c: 0x3e00008  jr          $ra
    ctx->pc = 0x27C16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C16Cu;
        // 0x27c170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C174u;
}
