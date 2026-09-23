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

// Function: zoomtileSizeToDist
// Address: 0x250600 - 0x2506bc
void zoomtileSizeToDist_0x250600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtileSizeToDist_0x250600");
#endif

    ctx->pc = 0x250600u;

    // 0x250600: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x250600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x250604: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x250604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250608: 0x24a26588  addiu       $v0, $a1, 0x6588
    ctx->pc = 0x250608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 25992));
    // 0x25060c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250610: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250614: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x250614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250618: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x250618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25061c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x25061Cu;
    {
        const bool branch_taken_0x25061c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25061c) {
            ctx->pc = 0x250620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25061Cu;
            // 0x250620: 0x24a26588  addiu       $v0, $a1, 0x6588 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 25992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250644u;
            goto label_250644;
        }
    }
    ctx->pc = 0x250624u;
    // 0x250624: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x250624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x250628: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x250628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25062c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25062Cu;
    {
        const bool branch_taken_0x25062c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25062Cu;
        // 0x250630: 0x24a26588  addiu       $v0, $a1, 0x6588 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 25992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25062c) {
            ctx->pc = 0x250644u;
            goto label_250644;
        }
    }
    ctx->pc = 0x250634u;
    // 0x250634: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x250634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x250638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25063c: 0x3e00008  jr          $ra
    ctx->pc = 0x25063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250644u;
label_250644:
    // 0x250644: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x250644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250648: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25064c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250650: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x250650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x250654: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x250654u;
    {
        const bool branch_taken_0x250654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250654u;
        // 0x250658: 0x24a36588  addiu       $v1, $a1, 0x6588 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 25992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250654) {
            ctx->pc = 0x25067Cu;
            goto label_25067c;
        }
    }
    ctx->pc = 0x25065Cu;
    // 0x25065c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x250660: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x250660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x250664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250664u;
    {
        const bool branch_taken_0x250664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250664) {
            ctx->pc = 0x25067Cu;
            goto label_25067c;
        }
    }
    ctx->pc = 0x25066Cu;
    // 0x25066c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x25066cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x250670: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250674: 0x3e00008  jr          $ra
    ctx->pc = 0x250674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25067Cu;
label_25067c:
    // 0x25067c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x25067cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x250680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250684: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x250684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x250688: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x250688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25068c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250690: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x250690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x250694: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x250694u;
    {
        const bool branch_taken_0x250694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250694) {
            ctx->pc = 0x2506B4u;
            goto label_2506b4;
        }
    }
    ctx->pc = 0x25069Cu;
    // 0x25069c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2506a0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2506a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2506a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2506A4u;
    {
        const bool branch_taken_0x2506a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2506a4) {
            ctx->pc = 0x2506B4u;
            goto label_2506b4;
        }
    }
    ctx->pc = 0x2506ACu;
    // 0x2506ac: 0x3c014198  lui         $at, 0x4198
    ctx->pc = 0x2506acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16792 << 16));
    // 0x2506b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2506b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2506b4:
    // 0x2506b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2506B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2506B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2506BCu;
}
