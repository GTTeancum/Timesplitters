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

// Function: padFileInName
// Address: 0x264058 - 0x2640e8
void padFileInName_0x264058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padFileInName_0x264058");
#endif

    switch (ctx->pc) {
        case 0x2640b4u: goto label_2640b4;
        case 0x2640d4u: goto label_2640d4;
        default: break;
    }

    ctx->pc = 0x264058u;

    // 0x264058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26405c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x26405cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x264060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264064: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x264064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x264068: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x264068u;
    {
        const bool branch_taken_0x264068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264068u;
        // 0x26406c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264068) {
            ctx->pc = 0x2640BCu;
            goto label_2640bc;
        }
    }
    ctx->pc = 0x264070u;
    // 0x264070: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x264070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x264074: 0x8c63c4f0  lw          $v1, -0x3B10($v1)
    ctx->pc = 0x264074u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x264078: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x264078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26407c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x26407cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x264080: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264080u;
    {
        const bool branch_taken_0x264080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264080u;
        // 0x264084: 0x3c1001fc  lui         $s0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264080) {
            ctx->pc = 0x2640A0u;
            goto label_2640a0;
        }
    }
    ctx->pc = 0x264088u;
    // 0x264088: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x264088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26408c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26408Cu;
    {
        const bool branch_taken_0x26408c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x264090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26408Cu;
        // 0x264090: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26408c) {
            ctx->pc = 0x2640A0u;
            goto label_2640a0;
        }
    }
    ctx->pc = 0x264094u;
    // 0x264094: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x264094u;
    {
        const bool branch_taken_0x264094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x264098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264094u;
        // 0x264098: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264094) {
            ctx->pc = 0x2640C4u;
            goto label_2640c4;
        }
    }
    ctx->pc = 0x26409Cu;
    // 0x26409c: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x26409cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
label_2640a0:
    // 0x2640a0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2640a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2640a4: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x2640a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2640a8: 0x24a52730  addiu       $a1, $a1, 0x2730
    ctx->pc = 0x2640a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10032));
    // 0x2640ac: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2640ACu;
    SET_GPR_U32(ctx, 31, 0x2640B4u);
    ctx->pc = 0x2640B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640ACu;
    // 0x2640b0: 0x26046410  addiu       $a0, $s0, 0x6410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2640ACu, 0x2640B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640B4u;
label_2640b4:
    // 0x2640b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2640B4u;
    {
        const bool branch_taken_0x2640b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2640B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640B4u;
        // 0x2640b8: 0x26026410  addiu       $v0, $s0, 0x6410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 25616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640b4) {
            ctx->pc = 0x2640D8u;
            goto label_2640d8;
        }
    }
    ctx->pc = 0x2640BCu;
label_2640bc:
    // 0x2640bc: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x2640bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x2640c0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2640c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_2640c4:
    // 0x2640c4: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x2640c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2640c8: 0x24a52758  addiu       $a1, $a1, 0x2758
    ctx->pc = 0x2640c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10072));
    // 0x2640cc: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2640CCu;
    SET_GPR_U32(ctx, 31, 0x2640D4u);
    ctx->pc = 0x2640D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640CCu;
    // 0x2640d0: 0x26046410  addiu       $a0, $s0, 0x6410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2640CCu, 0x2640D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640D4u;
label_2640d4:
    // 0x2640d4: 0x26026410  addiu       $v0, $s0, 0x6410
    ctx->pc = 0x2640d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 25616));
label_2640d8:
    // 0x2640d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2640d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2640dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2640dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2640e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2640E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2640E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640E0u;
        // 0x2640e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2640E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2640E8u;
}
