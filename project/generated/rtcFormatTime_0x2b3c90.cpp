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

// Function: rtcFormatTime
// Address: 0x2b3c90 - 0x2b3d00
void rtcFormatTime_0x2b3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rtcFormatTime_0x2b3c90");
#endif

    switch (ctx->pc) {
        case 0x2b3cb0u: goto label_2b3cb0;
        case 0x2b3cd8u: goto label_2b3cd8;
        case 0x2b3cf0u: goto label_2b3cf0;
        default: break;
    }

    ctx->pc = 0x2b3c90u;

    // 0x2b3c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3c94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b3c98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b3c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b3c9c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B3C9Cu;
    {
        const bool branch_taken_0x2b3c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C9Cu;
        // 0x2b3ca0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c9c) {
            ctx->pc = 0x2B3CE0u;
            goto label_2b3ce0;
        }
    }
    ctx->pc = 0x2B3CA4u;
    // 0x2b3ca4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b3ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ca8: 0xc0acea2  jal         func_2B3A88
    ctx->pc = 0x2B3CA8u;
    SET_GPR_U32(ctx, 31, 0x2B3CB0u);
    ctx->pc = 0x2B3CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CA8u;
    // 0x2b3cac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3A88u, 0x2B3CA8u, 0x2B3CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CB0u;
label_2b3cb0:
    // 0x2b3cb0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2b3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2b3cb4: 0x93a60005  lbu         $a2, 0x5($sp)
    ctx->pc = 0x2b3cb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x2b3cb8: 0x93a70006  lbu         $a3, 0x6($sp)
    ctx->pc = 0x2b3cb8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x2b3cbc: 0x24a59a60  addiu       $a1, $a1, -0x65A0
    ctx->pc = 0x2b3cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941280));
    // 0x2b3cc0: 0x93a80007  lbu         $t0, 0x7($sp)
    ctx->pc = 0x2b3cc0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x2b3cc4: 0x93a90003  lbu         $t1, 0x3($sp)
    ctx->pc = 0x2b3cc4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2b3cc8: 0x93aa0002  lbu         $t2, 0x2($sp)
    ctx->pc = 0x2b3cc8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b3ccc: 0x93ab0001  lbu         $t3, 0x1($sp)
    ctx->pc = 0x2b3cccu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2b3cd0: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2B3CD0u;
    SET_GPR_U32(ctx, 31, 0x2B3CD8u);
    ctx->pc = 0x2B3CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CD0u;
    // 0x2b3cd4: 0x8f84b440  lw          $a0, -0x4BC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947904)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2B3CD0u, 0x2B3CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CD8u;
label_2b3cd8:
    // 0x2b3cd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3CD8u;
    {
        const bool branch_taken_0x2b3cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD8u;
        // 0x2b3cdc: 0x8f82b440  lw          $v0, -0x4BC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cd8) {
            ctx->pc = 0x2B3CF4u;
            goto label_2b3cf4;
        }
    }
    ctx->pc = 0x2B3CE0u;
label_2b3ce0:
    // 0x2b3ce0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2b3ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2b3ce4: 0x8f84b440  lw          $a0, -0x4BC0($gp)
    ctx->pc = 0x2b3ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947904)));
    // 0x2b3ce8: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2B3CE8u;
    SET_GPR_U32(ctx, 31, 0x2B3CF0u);
    ctx->pc = 0x2B3CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CE8u;
    // 0x2b3cec: 0x24a5fc38  addiu       $a1, $a1, -0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2B3CE8u, 0x2B3CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CF0u;
label_2b3cf0:
    // 0x2b3cf0: 0x8f82b440  lw          $v0, -0x4BC0($gp)
    ctx->pc = 0x2b3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947904)));
label_2b3cf4:
    // 0x2b3cf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CF8u;
        // 0x2b3cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3D00u;
}
