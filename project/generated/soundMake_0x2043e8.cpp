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

// Function: soundMake
// Address: 0x2043e8 - 0x20445c
void soundMake_0x2043e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundMake_0x2043e8");
#endif

    switch (ctx->pc) {
        case 0x2043f8u: goto label_2043f8;
        case 0x204400u: goto label_204400;
        case 0x204410u: goto label_204410;
        case 0x204418u: goto label_204418;
        case 0x204428u: goto label_204428;
        case 0x204430u: goto label_204430;
        case 0x204440u: goto label_204440;
        default: break;
    }

    ctx->pc = 0x2043e8u;

    // 0x2043e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2043ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2043ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2043f0: 0xc0b4ef6  jal         func_2D3BD8
    ctx->pc = 0x2043F0u;
    SET_GPR_U32(ctx, 31, 0x2043F8u);
    ctx->pc = 0x2D3BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3BD8u, 0x2043F0u, 0x2043F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043F8u;
label_2043f8:
    // 0x2043f8: 0xc0b4f1a  jal         func_2D3C68
    ctx->pc = 0x2043F8u;
    SET_GPR_U32(ctx, 31, 0x204400u);
    ctx->pc = 0x2043FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2043F8u;
    // 0x2043fc: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3C68u, 0x2043F8u, 0x204400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204400u;
label_204400:
    // 0x204400: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204400u;
    {
        const bool branch_taken_0x204400 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x204404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204400u;
        // 0x204404: 0xaf82b630  sw          $v0, -0x49D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204400) {
            ctx->pc = 0x204410u;
            goto label_204410;
        }
    }
    ctx->pc = 0x204408u;
    // 0x204408: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x204408u;
    SET_GPR_U32(ctx, 31, 0x204410u);
    ctx->pc = 0x20440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204408u;
    // 0x20440c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x204408u, 0x204410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204410u;
label_204410:
    // 0x204410: 0xc0b4f1a  jal         func_2D3C68
    ctx->pc = 0x204410u;
    SET_GPR_U32(ctx, 31, 0x204418u);
    ctx->pc = 0x204414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204410u;
    // 0x204414: 0x24040640  addiu       $a0, $zero, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3C68u, 0x204410u, 0x204418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204418u;
label_204418:
    // 0x204418: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204418u;
    {
        const bool branch_taken_0x204418 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204418u;
        // 0x20441c: 0xaf82b634  sw          $v0, -0x49CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204418) {
            ctx->pc = 0x204428u;
            goto label_204428;
        }
    }
    ctx->pc = 0x204420u;
    // 0x204420: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x204420u;
    SET_GPR_U32(ctx, 31, 0x204428u);
    ctx->pc = 0x204424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204420u;
    // 0x204424: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x204420u, 0x204428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204428u;
label_204428:
    // 0x204428: 0xc0b7632  jal         func_2DD8C8
    ctx->pc = 0x204428u;
    SET_GPR_U32(ctx, 31, 0x204430u);
    ctx->pc = 0x2DD8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD8C8u, 0x204428u, 0x204430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204430u;
label_204430:
    // 0x204430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204434: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x204434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x204438: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x204438u;
    SET_GPR_U32(ctx, 31, 0x204440u);
    ctx->pc = 0x20443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204438u;
    // 0x20443c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x204438u, 0x204440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204440u;
label_204440:
    // 0x204440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204448: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x204448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x20444c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x20444cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204450: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x204450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x204454: 0x80b7684  j           func_2DDA10
    ctx->pc = 0x204454u;
    ctx->pc = 0x204458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204454u;
    // 0x204458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    sceSdRemote_0x2dda10(rdram, ctx, runtime); return;
    ctx->pc = 0x20445Cu;
}
