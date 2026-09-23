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

// Function: zoomtileWindowTick
// Address: 0x250558 - 0x2505ec
void zoomtileWindowTick_0x250558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtileWindowTick_0x250558");
#endif

    ctx->pc = 0x250558u;

    // 0x250558: 0x8f8ab884  lw          $t2, -0x477C($gp)
    ctx->pc = 0x250558u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948996)));
    // 0x25055c: 0x19400021  blez        $t2, . + 4 + (0x21 << 2)
    ctx->pc = 0x25055Cu;
    {
        const bool branch_taken_0x25055c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x250560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25055Cu;
        // 0x250560: 0x3c0501fc  lui         $a1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25055c) {
            ctx->pc = 0x2505E4u;
            goto label_2505e4;
        }
    }
    ctx->pc = 0x250564u;
    // 0x250564: 0x8f84b874  lw          $a0, -0x478C($gp)
    ctx->pc = 0x250564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948980)));
    // 0x250568: 0x8ca240f8  lw          $v0, 0x40F8($a1)
    ctx->pc = 0x250568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16632)));
    // 0x25056c: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25056Cu;
    {
        const bool branch_taken_0x25056c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x25056c) {
            ctx->pc = 0x250570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25056Cu;
            // 0x250570: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250574u;
            goto label_250574;
        }
    }
    ctx->pc = 0x250574u;
label_250574:
    // 0x250574: 0x24a540f8  addiu       $a1, $a1, 0x40F8
    ctx->pc = 0x250574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16632));
    // 0x250578: 0x8f86b878  lw          $a2, -0x4788($gp)
    ctx->pc = 0x250578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
    // 0x25057c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x25057cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x250580: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x250580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x250584: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x250584u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x250588: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x250588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x25058c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x25058cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x250590: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x250590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x250594: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x250594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x250598: 0x1012  mflo        $v0
    ctx->pc = 0x250598u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x25059c: 0x6a001a  div         $zero, $v1, $t2
    ctx->pc = 0x25059cu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2505a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2505a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2505a4: 0xaf84b874  sw          $a0, -0x478C($gp)
    ctx->pc = 0x2505a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948980), GPR_U32(ctx, 4));
    // 0x2505a8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2505a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2505ac: 0x1812  mflo        $v1
    ctx->pc = 0x2505acu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2505b0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2505b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2505b4: 0x8f83b87c  lw          $v1, -0x4784($gp)
    ctx->pc = 0x2505b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948988)));
    // 0x2505b8: 0xaf86b878  sw          $a2, -0x4788($gp)
    ctx->pc = 0x2505b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948984), GPR_U32(ctx, 6));
    // 0x2505bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2505bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2505c0: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x2505c0u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2505c4: 0x1012  mflo        $v0
    ctx->pc = 0x2505c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2505c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2505c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2505cc: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x2505ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2505d0: 0xaf83b87c  sw          $v1, -0x4784($gp)
    ctx->pc = 0x2505d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948988), GPR_U32(ctx, 3));
    // 0x2505d4: 0xaf89b884  sw          $t1, -0x477C($gp)
    ctx->pc = 0x2505d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948996), GPR_U32(ctx, 9));
    // 0x2505d8: 0xe8001a  div         $zero, $a3, $t0
    ctx->pc = 0x2505d8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2505dc: 0x3812  mflo        $a3
    ctx->pc = 0x2505dcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2505e0: 0xaf87b880  sw          $a3, -0x4780($gp)
    ctx->pc = 0x2505e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948992), GPR_U32(ctx, 7));
label_2505e4:
    // 0x2505e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2505E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2505E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2505ECu;
}
