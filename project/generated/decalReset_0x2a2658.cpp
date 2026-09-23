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

// Function: decalReset
// Address: 0x2a2658 - 0x2a26f4
void decalReset_0x2a2658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalReset_0x2a2658");
#endif

    switch (ctx->pc) {
        case 0x2a26c8u: goto label_2a26c8;
        case 0x2a26e4u: goto label_2a26e4;
        default: break;
    }

    ctx->pc = 0x2a2658u;

    // 0x2a2658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a265c: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2a265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2a2660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a2664: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a2664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2668: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A2668u;
    {
        const bool branch_taken_0x2a2668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2668u;
        // 0x2a266c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2668) {
            ctx->pc = 0x2A2698u;
            goto label_2a2698;
        }
    }
    ctx->pc = 0x2A2670u;
    // 0x2a2670: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2a2670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a2674: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A2674u;
    {
        const bool branch_taken_0x2a2674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2674u;
        // 0x2a2678: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2674) {
            ctx->pc = 0x2A26ACu;
            goto label_2a26ac;
        }
    }
    ctx->pc = 0x2A267Cu;
    // 0x2a267c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a2680: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2680u;
    {
        const bool branch_taken_0x2a2680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2680u;
        // 0x2a2684: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2680) {
            ctx->pc = 0x2A26A0u;
            goto label_2a26a0;
        }
    }
    ctx->pc = 0x2A2688u;
    // 0x2a2688: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2688u;
    {
        const bool branch_taken_0x2a2688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2688u;
        // 0x2a268c: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2688) {
            ctx->pc = 0x2A26A8u;
            goto label_2a26a8;
        }
    }
    ctx->pc = 0x2A2690u;
    // 0x2a2690: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2690u;
    {
        const bool branch_taken_0x2a2690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2690u;
        // 0x2a2694: 0xaf82b310  sw          $v0, -0x4CF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2690) {
            ctx->pc = 0x2A26B0u;
            goto label_2a26b0;
        }
    }
    ctx->pc = 0x2A2698u;
label_2a2698:
    // 0x2a2698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2698u;
    {
        const bool branch_taken_0x2a2698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2698u;
        // 0x2a269c: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2698) {
            ctx->pc = 0x2A26ACu;
            goto label_2a26ac;
        }
    }
    ctx->pc = 0x2A26A0u;
label_2a26a0:
    // 0x2a26a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A26A0u;
    {
        const bool branch_taken_0x2a26a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26A0u;
        // 0x2a26a4: 0x24020109  addiu       $v0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26a0) {
            ctx->pc = 0x2A26ACu;
            goto label_2a26ac;
        }
    }
    ctx->pc = 0x2A26A8u;
label_2a26a8:
    // 0x2a26a8: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2a26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2a26ac:
    // 0x2a26ac: 0xaf82b310  sw          $v0, -0x4CF0($gp)
    ctx->pc = 0x2a26acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947600), GPR_U32(ctx, 2));
label_2a26b0:
    // 0x2a26b0: 0x8f84b310  lw          $a0, -0x4CF0($gp)
    ctx->pc = 0x2a26b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947600)));
    // 0x2a26b4: 0x241000f0  addiu       $s0, $zero, 0xF0
    ctx->pc = 0x2a26b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2a26b8: 0x900018  mult        $zero, $a0, $s0
    ctx->pc = 0x2a26b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a26bc: 0x2012  mflo        $a0
    ctx->pc = 0x2a26bcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2a26c0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2A26C0u;
    SET_GPR_U32(ctx, 31, 0x2A26C8u);
    ctx->pc = 0x2A26C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26C0u;
    // 0x2a26c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2A26C0u, 0x2A26C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26C8u;
label_2a26c8:
    // 0x2a26c8: 0x8f86b310  lw          $a2, -0x4CF0($gp)
    ctx->pc = 0x2a26c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947600)));
    // 0x2a26cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a26ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26d0: 0xaf82b300  sw          $v0, -0x4D00($gp)
    ctx->pc = 0x2a26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947584), GPR_U32(ctx, 2));
    // 0x2a26d4: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x2a26d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a26d8: 0x3012  mflo        $a2
    ctx->pc = 0x2a26d8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2a26dc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A26DCu;
    SET_GPR_U32(ctx, 31, 0x2A26E4u);
    ctx->pc = 0x2A26E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26DCu;
    // 0x2a26e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A26DCu, 0x2A26E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26E4u;
label_2a26e4:
    // 0x2a26e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a26e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a26e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a26e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a26ec: 0x80a8938  j           func_2A24E0
    ctx->pc = 0x2A26ECu;
    ctx->pc = 0x2A26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26ECu;
    // 0x2a26f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A24E0u;
    decalRestart_0x2a24e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2A26F4u;
}
