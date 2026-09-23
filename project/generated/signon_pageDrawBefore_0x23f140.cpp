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

// Function: signon_pageDrawBefore
// Address: 0x23f140 - 0x23f18c
void signon_pageDrawBefore_0x23f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signon_pageDrawBefore_0x23f140");
#endif

    switch (ctx->pc) {
        case 0x23f154u: goto label_23f154;
        default: break;
    }

    ctx->pc = 0x23f140u;

    // 0x23f140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f14c: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x23F14Cu;
    SET_GPR_U32(ctx, 31, 0x23F154u);
    ctx->pc = 0x23F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F14Cu;
    // 0x23f150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x23F14Cu, 0x23F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F154u;
label_23f154:
    // 0x23f154: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23f154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23f158: 0x8c6211fc  lw          $v0, 0x11FC($v1)
    ctx->pc = 0x23f158u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23f15c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23f15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x23f160: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F160u;
    {
        const bool branch_taken_0x23f160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F160u;
        // 0x23f164: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f160) {
            ctx->pc = 0x23F180u;
            goto label_23f180;
        }
    }
    ctx->pc = 0x23F168u;
    // 0x23f168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f16c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23f170: 0x24a56430  addiu       $a1, $a1, 0x6430
    ctx->pc = 0x23f170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25648));
    // 0x23f174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f178: 0x808c40a  j           func_231028
    ctx->pc = 0x23F178u;
    ctx->pc = 0x23F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F178u;
    // 0x23f17c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231028u;
    splitpageDraw_0x231028(rdram, ctx, runtime); return;
    ctx->pc = 0x23F180u;
label_23f180:
    // 0x23f180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f184: 0x3e00008  jr          $ra
    ctx->pc = 0x23F184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F184u;
        // 0x23f188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F18Cu;
}
