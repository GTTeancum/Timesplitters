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

// Function: lvTickAfter
// Address: 0x2263a0 - 0x2265a4
void lvTickAfter_0x2263a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvTickAfter_0x2263a0");
#endif

    switch (ctx->pc) {
        case 0x2263dcu: goto label_2263dc;
        case 0x2263f4u: goto label_2263f4;
        case 0x2263fcu: goto label_2263fc;
        case 0x226404u: goto label_226404;
        case 0x22640cu: goto label_22640c;
        case 0x226414u: goto label_226414;
        case 0x226428u: goto label_226428;
        case 0x226440u: goto label_226440;
        case 0x226448u: goto label_226448;
        case 0x226450u: goto label_226450;
        case 0x226458u: goto label_226458;
        case 0x226460u: goto label_226460;
        case 0x226474u: goto label_226474;
        case 0x22648cu: goto label_22648c;
        case 0x2264a0u: goto label_2264a0;
        case 0x2264b8u: goto label_2264b8;
        case 0x2264c0u: goto label_2264c0;
        case 0x2264c8u: goto label_2264c8;
        case 0x2264d0u: goto label_2264d0;
        case 0x2264d8u: goto label_2264d8;
        case 0x2264e0u: goto label_2264e0;
        case 0x2264e8u: goto label_2264e8;
        case 0x2264fcu: goto label_2264fc;
        case 0x226514u: goto label_226514;
        case 0x22651cu: goto label_22651c;
        case 0x226524u: goto label_226524;
        case 0x22652cu: goto label_22652c;
        case 0x226534u: goto label_226534;
        case 0x226548u: goto label_226548;
        case 0x226550u: goto label_226550;
        case 0x226558u: goto label_226558;
        case 0x226560u: goto label_226560;
        case 0x226568u: goto label_226568;
        case 0x226570u: goto label_226570;
        case 0x226578u: goto label_226578;
        case 0x226580u: goto label_226580;
        case 0x226588u: goto label_226588;
        case 0x226590u: goto label_226590;
        case 0x226598u: goto label_226598;
        default: break;
    }

    ctx->pc = 0x2263a0u;

    // 0x2263a0: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x2263a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2263a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2263a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2263a8: 0x2444ff9b  addiu       $a0, $v0, -0x65
    ctx->pc = 0x2263a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967195));
    // 0x2263ac: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2263acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2263b0: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2263B0u;
    {
        const bool branch_taken_0x2263b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2263B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263B0u;
        // 0x2263b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263b0) {
            ctx->pc = 0x226540u;
            goto label_226540;
        }
    }
    ctx->pc = 0x2263B8u;
    // 0x2263b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2263b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2263bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2263bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2263c0: 0x24420e40  addiu       $v0, $v0, 0xE40
    ctx->pc = 0x2263c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3648));
    // 0x2263c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2263c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2263c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2263c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2263cc: 0x800008  jr          $a0
    ctx->pc = 0x2263CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2263D4u: goto label_2263d4;
            case 0x226420u: goto label_226420;
            case 0x22646Cu: goto label_22646c;
            case 0x226498u: goto label_226498;
            case 0x2264F4u: goto label_2264f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2263CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2263D4u;
label_2263d4:
    // 0x2263d4: 0xc0831f8  jal         func_20C7E0
    ctx->pc = 0x2263D4u;
    SET_GPR_U32(ctx, 31, 0x2263DCu);
    ctx->pc = 0x20C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E0u, 0x2263D4u, 0x2263DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263DCu;
label_2263dc:
    // 0x2263dc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2263dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2263e0: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2263e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2263e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2263e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2263e8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2263e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2263ec: 0xc083108  jal         func_20C420
    ctx->pc = 0x2263ECu;
    SET_GPR_U32(ctx, 31, 0x2263F4u);
    ctx->pc = 0x2263F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263ECu;
    // 0x2263f0: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x2263ECu, 0x2263F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263F4u;
label_2263f4:
    // 0x2263f4: 0xc09ceec  jal         func_273BB0
    ctx->pc = 0x2263F4u;
    SET_GPR_U32(ctx, 31, 0x2263FCu);
    ctx->pc = 0x273BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273BB0u, 0x2263F4u, 0x2263FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263FCu;
label_2263fc:
    // 0x2263fc: 0xc09be7a  jal         func_26F9E8
    ctx->pc = 0x2263FCu;
    SET_GPR_U32(ctx, 31, 0x226404u);
    ctx->pc = 0x26F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F9E8u, 0x2263FCu, 0x226404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226404u;
label_226404:
    // 0x226404: 0xc0813b0  jal         func_204EC0
    ctx->pc = 0x226404u;
    SET_GPR_U32(ctx, 31, 0x22640Cu);
    ctx->pc = 0x204EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204EC0u, 0x226404u, 0x22640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22640Cu;
label_22640c:
    // 0x22640c: 0xc081744  jal         func_205D10
    ctx->pc = 0x22640Cu;
    SET_GPR_U32(ctx, 31, 0x226414u);
    ctx->pc = 0x205D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205D10u, 0x22640Cu, 0x226414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226414u;
label_226414:
    // 0x226414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226418: 0x8081eb4  j           func_207AD0
    ctx->pc = 0x226418u;
    ctx->pc = 0x22641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226418u;
    // 0x22641c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207AD0u;
    mcardTick_0x207ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x226420u;
label_226420:
    // 0x226420: 0xc0831f8  jal         func_20C7E0
    ctx->pc = 0x226420u;
    SET_GPR_U32(ctx, 31, 0x226428u);
    ctx->pc = 0x20C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E0u, 0x226420u, 0x226428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226428u;
label_226428:
    // 0x226428: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x226428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x22642c: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x22642cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x226430: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x226430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x226434: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x226434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x226438: 0xc083108  jal         func_20C420
    ctx->pc = 0x226438u;
    SET_GPR_U32(ctx, 31, 0x226440u);
    ctx->pc = 0x22643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226438u;
    // 0x22643c: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x226438u, 0x226440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226440u;
label_226440:
    // 0x226440: 0xc09ceec  jal         func_273BB0
    ctx->pc = 0x226440u;
    SET_GPR_U32(ctx, 31, 0x226448u);
    ctx->pc = 0x273BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273BB0u, 0x226440u, 0x226448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226448u;
label_226448:
    // 0x226448: 0xc09be7a  jal         func_26F9E8
    ctx->pc = 0x226448u;
    SET_GPR_U32(ctx, 31, 0x226450u);
    ctx->pc = 0x26F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F9E8u, 0x226448u, 0x226450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226450u;
label_226450:
    // 0x226450: 0xc0813b0  jal         func_204EC0
    ctx->pc = 0x226450u;
    SET_GPR_U32(ctx, 31, 0x226458u);
    ctx->pc = 0x204EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204EC0u, 0x226450u, 0x226458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226458u;
label_226458:
    // 0x226458: 0xc081744  jal         func_205D10
    ctx->pc = 0x226458u;
    SET_GPR_U32(ctx, 31, 0x226460u);
    ctx->pc = 0x205D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205D10u, 0x226458u, 0x226460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226460u;
label_226460:
    // 0x226460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226464: 0x8081eb4  j           func_207AD0
    ctx->pc = 0x226464u;
    ctx->pc = 0x226468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226464u;
    // 0x226468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207AD0u;
    mcardTick_0x207ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x22646Cu;
label_22646c:
    // 0x22646c: 0xc0831f8  jal         func_20C7E0
    ctx->pc = 0x22646Cu;
    SET_GPR_U32(ctx, 31, 0x226474u);
    ctx->pc = 0x20C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E0u, 0x22646Cu, 0x226474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226474u;
label_226474:
    // 0x226474: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x226474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x226478: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x226478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22647c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x226480: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x226480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x226484: 0xc083108  jal         func_20C420
    ctx->pc = 0x226484u;
    SET_GPR_U32(ctx, 31, 0x22648Cu);
    ctx->pc = 0x226488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226484u;
    // 0x226488: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x226484u, 0x22648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22648Cu;
label_22648c:
    // 0x22648c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22648cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226490: 0x808a852  j           func_22A148
    ctx->pc = 0x226490u;
    ctx->pc = 0x226494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226490u;
    // 0x226494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A148u;
    loadingTick_0x22a148(rdram, ctx, runtime); return;
    ctx->pc = 0x226498u;
label_226498:
    // 0x226498: 0xc0831f8  jal         func_20C7E0
    ctx->pc = 0x226498u;
    SET_GPR_U32(ctx, 31, 0x2264A0u);
    ctx->pc = 0x20C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E0u, 0x226498u, 0x2264A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264A0u;
label_2264a0:
    // 0x2264a0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2264a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2264a4: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2264a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2264a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2264a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2264ac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2264acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2264b0: 0xc083108  jal         func_20C420
    ctx->pc = 0x2264B0u;
    SET_GPR_U32(ctx, 31, 0x2264B8u);
    ctx->pc = 0x2264B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2264B0u;
    // 0x2264b4: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x2264B0u, 0x2264B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264B8u;
label_2264b8:
    // 0x2264b8: 0xc091aba  jal         func_246AE8
    ctx->pc = 0x2264B8u;
    SET_GPR_U32(ctx, 31, 0x2264C0u);
    ctx->pc = 0x246AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AE8u, 0x2264B8u, 0x2264C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264C0u;
label_2264c0:
    // 0x2264c0: 0xc09f8c8  jal         func_27E320
    ctx->pc = 0x2264C0u;
    SET_GPR_U32(ctx, 31, 0x2264C8u);
    ctx->pc = 0x27E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E320u, 0x2264C0u, 0x2264C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264C8u;
label_2264c8:
    // 0x2264c8: 0xc09ceec  jal         func_273BB0
    ctx->pc = 0x2264C8u;
    SET_GPR_U32(ctx, 31, 0x2264D0u);
    ctx->pc = 0x273BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273BB0u, 0x2264C8u, 0x2264D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264D0u;
label_2264d0:
    // 0x2264d0: 0xc09be7a  jal         func_26F9E8
    ctx->pc = 0x2264D0u;
    SET_GPR_U32(ctx, 31, 0x2264D8u);
    ctx->pc = 0x26F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F9E8u, 0x2264D0u, 0x2264D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264D8u;
label_2264d8:
    // 0x2264d8: 0xc0813b0  jal         func_204EC0
    ctx->pc = 0x2264D8u;
    SET_GPR_U32(ctx, 31, 0x2264E0u);
    ctx->pc = 0x204EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204EC0u, 0x2264D8u, 0x2264E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264E0u;
label_2264e0:
    // 0x2264e0: 0xc081744  jal         func_205D10
    ctx->pc = 0x2264E0u;
    SET_GPR_U32(ctx, 31, 0x2264E8u);
    ctx->pc = 0x205D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205D10u, 0x2264E0u, 0x2264E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264E8u;
label_2264e8:
    // 0x2264e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2264e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2264ec: 0x8081eb4  j           func_207AD0
    ctx->pc = 0x2264ECu;
    ctx->pc = 0x2264F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2264ECu;
    // 0x2264f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207AD0u;
    mcardTick_0x207ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x2264F4u;
label_2264f4:
    // 0x2264f4: 0xc0831f8  jal         func_20C7E0
    ctx->pc = 0x2264F4u;
    SET_GPR_U32(ctx, 31, 0x2264FCu);
    ctx->pc = 0x20C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E0u, 0x2264F4u, 0x2264FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264FCu;
label_2264fc:
    // 0x2264fc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2264fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x226500: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x226500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x226504: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x226504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x226508: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x226508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22650c: 0xc083108  jal         func_20C420
    ctx->pc = 0x22650Cu;
    SET_GPR_U32(ctx, 31, 0x226514u);
    ctx->pc = 0x226510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22650Cu;
    // 0x226510: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x22650Cu, 0x226514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226514u;
label_226514:
    // 0x226514: 0xc0ab9a6  jal         func_2AE698
    ctx->pc = 0x226514u;
    SET_GPR_U32(ctx, 31, 0x22651Cu);
    ctx->pc = 0x2AE698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE698u, 0x226514u, 0x22651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22651Cu;
label_22651c:
    // 0x22651c: 0xc09ceec  jal         func_273BB0
    ctx->pc = 0x22651Cu;
    SET_GPR_U32(ctx, 31, 0x226524u);
    ctx->pc = 0x273BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273BB0u, 0x22651Cu, 0x226524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226524u;
label_226524:
    // 0x226524: 0xc09be7a  jal         func_26F9E8
    ctx->pc = 0x226524u;
    SET_GPR_U32(ctx, 31, 0x22652Cu);
    ctx->pc = 0x26F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F9E8u, 0x226524u, 0x22652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22652Cu;
label_22652c:
    // 0x22652c: 0xc0813b0  jal         func_204EC0
    ctx->pc = 0x22652Cu;
    SET_GPR_U32(ctx, 31, 0x226534u);
    ctx->pc = 0x204EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204EC0u, 0x22652Cu, 0x226534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226534u;
label_226534:
    // 0x226534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226538: 0x8081744  j           func_205D10
    ctx->pc = 0x226538u;
    ctx->pc = 0x22653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226538u;
    // 0x22653c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D10u;
    musicTick_0x205d10(rdram, ctx, runtime); return;
    ctx->pc = 0x226540u;
label_226540:
    // 0x226540: 0xc0968ee  jal         func_25A3B8
    ctx->pc = 0x226540u;
    SET_GPR_U32(ctx, 31, 0x226548u);
    ctx->pc = 0x25A3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B8u, 0x226540u, 0x226548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226548u;
label_226548:
    // 0x226548: 0xc09ceec  jal         func_273BB0
    ctx->pc = 0x226548u;
    SET_GPR_U32(ctx, 31, 0x226550u);
    ctx->pc = 0x273BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273BB0u, 0x226548u, 0x226550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226550u;
label_226550:
    // 0x226550: 0xc0a9f48  jal         func_2A7D20
    ctx->pc = 0x226550u;
    SET_GPR_U32(ctx, 31, 0x226558u);
    ctx->pc = 0x2A7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D20u, 0x226550u, 0x226558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226558u;
label_226558:
    // 0x226558: 0xc09be7a  jal         func_26F9E8
    ctx->pc = 0x226558u;
    SET_GPR_U32(ctx, 31, 0x226560u);
    ctx->pc = 0x26F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F9E8u, 0x226558u, 0x226560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226560u;
label_226560:
    // 0x226560: 0xc0a525c  jal         func_294970
    ctx->pc = 0x226560u;
    SET_GPR_U32(ctx, 31, 0x226568u);
    ctx->pc = 0x294970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294970u, 0x226560u, 0x226568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226568u;
label_226568:
    // 0x226568: 0xc0b3492  jal         func_2CD248
    ctx->pc = 0x226568u;
    SET_GPR_U32(ctx, 31, 0x226570u);
    ctx->pc = 0x2CD248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD248u, 0x226568u, 0x226570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226570u;
label_226570:
    // 0x226570: 0xc0813b0  jal         func_204EC0
    ctx->pc = 0x226570u;
    SET_GPR_U32(ctx, 31, 0x226578u);
    ctx->pc = 0x204EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204EC0u, 0x226570u, 0x226578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226578u;
label_226578:
    // 0x226578: 0xc081744  jal         func_205D10
    ctx->pc = 0x226578u;
    SET_GPR_U32(ctx, 31, 0x226580u);
    ctx->pc = 0x205D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205D10u, 0x226578u, 0x226580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226580u;
label_226580:
    // 0x226580: 0xc0b36f0  jal         func_2CDBC0
    ctx->pc = 0x226580u;
    SET_GPR_U32(ctx, 31, 0x226588u);
    ctx->pc = 0x2CDBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDBC0u, 0x226580u, 0x226588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226588u;
label_226588:
    // 0x226588: 0xc0882ea  jal         func_220BA8
    ctx->pc = 0x226588u;
    SET_GPR_U32(ctx, 31, 0x226590u);
    ctx->pc = 0x220BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BA8u, 0x226588u, 0x226590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226590u;
label_226590:
    // 0x226590: 0xc089b7c  jal         func_226DF0
    ctx->pc = 0x226590u;
    SET_GPR_U32(ctx, 31, 0x226598u);
    ctx->pc = 0x226DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226DF0u, 0x226590u, 0x226598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226598u;
label_226598:
    // 0x226598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22659c: 0x8084ae6  j           func_212B98
    ctx->pc = 0x22659Cu;
    ctx->pc = 0x2265A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22659Cu;
    // 0x2265a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212B98u;
    ingamemenuCheckUnpause_0x212b98(rdram, ctx, runtime); return;
    ctx->pc = 0x2265A4u;
}
