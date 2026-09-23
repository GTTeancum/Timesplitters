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

// Function: joyMtapTick
// Address: 0x2035a8 - 0x20360c
void joyMtapTick_0x2035a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyMtapTick_0x2035a8");
#endif

    switch (ctx->pc) {
        case 0x2035c0u: goto label_2035c0;
        case 0x2035dcu: goto label_2035dc;
        default: break;
    }

    ctx->pc = 0x2035a8u;

    // 0x2035a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2035a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2035ac: 0x8f839acc  lw          $v1, -0x6534($gp)
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941388)));
    // 0x2035b0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2035B0u;
    {
        const bool branch_taken_0x2035b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2035B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035B0u;
        // 0x2035b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035b0) {
            ctx->pc = 0x2035C8u;
            goto label_2035c8;
        }
    }
    ctx->pc = 0x2035B8u;
    // 0x2035b8: 0xc0b5618  jal         func_2D5860
    ctx->pc = 0x2035B8u;
    SET_GPR_U32(ctx, 31, 0x2035C0u);
    ctx->pc = 0x2035BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035B8u;
    // 0x2035bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5860u, 0x2035B8u, 0x2035C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035C0u;
label_2035c0:
    // 0x2035c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2035C0u;
    {
        const bool branch_taken_0x2035c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035C0u;
        // 0x2035c4: 0xaf829ad0  sw          $v0, -0x6530($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035c0) {
            ctx->pc = 0x2035E0u;
            goto label_2035e0;
        }
    }
    ctx->pc = 0x2035C8u;
label_2035c8:
    // 0x2035c8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2035c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2035cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2035CCu;
    {
        const bool branch_taken_0x2035cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2035D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035CCu;
        // 0x2035d0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035cc) {
            ctx->pc = 0x2035E8u;
            goto label_2035e8;
        }
    }
    ctx->pc = 0x2035D4u;
    // 0x2035d4: 0xc0b5618  jal         func_2D5860
    ctx->pc = 0x2035D4u;
    SET_GPR_U32(ctx, 31, 0x2035DCu);
    ctx->pc = 0x2035D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035D4u;
    // 0x2035d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5860u, 0x2035D4u, 0x2035DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035DCu;
label_2035dc:
    // 0x2035dc: 0xaf829ad4  sw          $v0, -0x652C($gp)
    ctx->pc = 0x2035dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941396), GPR_U32(ctx, 2));
label_2035e0:
    // 0x2035e0: 0x8f839acc  lw          $v1, -0x6534($gp)
    ctx->pc = 0x2035e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941388)));
    // 0x2035e4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2035e8:
    // 0x2035e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2035e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2035ec: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2035ecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2035f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2035F0u;
    {
        const bool branch_taken_0x2035f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2035f0) {
            ctx->pc = 0x2035F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2035F0u;
            // 0x2035f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2035F8u;
            goto label_2035f8;
        }
    }
    ctx->pc = 0x2035F8u;
label_2035f8:
    // 0x2035f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2035f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2035fc: 0x2010  mfhi        $a0
    ctx->pc = 0x2035fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x203600: 0xaf849acc  sw          $a0, -0x6534($gp)
    ctx->pc = 0x203600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941388), GPR_U32(ctx, 4));
    // 0x203604: 0x3e00008  jr          $ra
    ctx->pc = 0x203604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203604u;
        // 0x203608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20360Cu;
}
