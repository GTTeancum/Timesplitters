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

// Function: frontmpgPreload
// Address: 0x2410a0 - 0x24115c
void frontmpgPreload_0x2410a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgPreload_0x2410a0");
#endif

    switch (ctx->pc) {
        case 0x2410b0u: goto label_2410b0;
        case 0x2410b8u: goto label_2410b8;
        case 0x2410c0u: goto label_2410c0;
        case 0x2410c8u: goto label_2410c8;
        case 0x2410d0u: goto label_2410d0;
        case 0x2410d8u: goto label_2410d8;
        case 0x2410e0u: goto label_2410e0;
        case 0x2410e8u: goto label_2410e8;
        case 0x2410f0u: goto label_2410f0;
        case 0x2410f8u: goto label_2410f8;
        case 0x241100u: goto label_241100;
        case 0x241108u: goto label_241108;
        case 0x241110u: goto label_241110;
        case 0x241118u: goto label_241118;
        case 0x241120u: goto label_241120;
        case 0x241128u: goto label_241128;
        case 0x241130u: goto label_241130;
        case 0x241138u: goto label_241138;
        case 0x241140u: goto label_241140;
        case 0x241148u: goto label_241148;
        case 0x241150u: goto label_241150;
        default: break;
    }

    ctx->pc = 0x2410a0u;

    // 0x2410a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2410a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2410a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2410a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2410a8: 0xc08a8e4  jal         func_22A390
    ctx->pc = 0x2410A8u;
    SET_GPR_U32(ctx, 31, 0x2410B0u);
    ctx->pc = 0x22A390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A390u, 0x2410A8u, 0x2410B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410B0u;
label_2410b0:
    // 0x2410b0: 0xc08b894  jal         func_22E250
    ctx->pc = 0x2410B0u;
    SET_GPR_U32(ctx, 31, 0x2410B8u);
    ctx->pc = 0x22E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E250u, 0x2410B0u, 0x2410B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410B8u;
label_2410b8:
    // 0x2410b8: 0xc08bb38  jal         func_22ECE0
    ctx->pc = 0x2410B8u;
    SET_GPR_U32(ctx, 31, 0x2410C0u);
    ctx->pc = 0x22ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ECE0u, 0x2410B8u, 0x2410C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410C0u;
label_2410c0:
    // 0x2410c0: 0xc099c88  jal         func_267220
    ctx->pc = 0x2410C0u;
    SET_GPR_U32(ctx, 31, 0x2410C8u);
    ctx->pc = 0x2410C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410C0u;
    // 0x2410c4: 0x24040169  addiu       $a0, $zero, 0x169 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2410C0u, 0x2410C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410C8u;
label_2410c8:
    // 0x2410c8: 0xc099c88  jal         func_267220
    ctx->pc = 0x2410C8u;
    SET_GPR_U32(ctx, 31, 0x2410D0u);
    ctx->pc = 0x2410CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410C8u;
    // 0x2410cc: 0x2404016e  addiu       $a0, $zero, 0x16E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2410C8u, 0x2410D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410D0u;
label_2410d0:
    // 0x2410d0: 0xc099c88  jal         func_267220
    ctx->pc = 0x2410D0u;
    SET_GPR_U32(ctx, 31, 0x2410D8u);
    ctx->pc = 0x2410D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410D0u;
    // 0x2410d4: 0x2404016f  addiu       $a0, $zero, 0x16F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2410D0u, 0x2410D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410D8u;
label_2410d8:
    // 0x2410d8: 0xc099c88  jal         func_267220
    ctx->pc = 0x2410D8u;
    SET_GPR_U32(ctx, 31, 0x2410E0u);
    ctx->pc = 0x2410DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410D8u;
    // 0x2410dc: 0x2404017b  addiu       $a0, $zero, 0x17B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 379));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2410D8u, 0x2410E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410E0u;
label_2410e0:
    // 0x2410e0: 0xc099c88  jal         func_267220
    ctx->pc = 0x2410E0u;
    SET_GPR_U32(ctx, 31, 0x2410E8u);
    ctx->pc = 0x2410E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410E0u;
    // 0x2410e4: 0x24040172  addiu       $a0, $zero, 0x172 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2410E0u, 0x2410E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410E8u;
label_2410e8:
    // 0x2410e8: 0xc099c88  jal         func_267220
    ctx->pc = 0x2410E8u;
    SET_GPR_U32(ctx, 31, 0x2410F0u);
    ctx->pc = 0x2410ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410E8u;
    // 0x2410ec: 0x24040168  addiu       $a0, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2410E8u, 0x2410F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410F0u;
label_2410f0:
    // 0x2410f0: 0xc099c88  jal         func_267220
    ctx->pc = 0x2410F0u;
    SET_GPR_U32(ctx, 31, 0x2410F8u);
    ctx->pc = 0x2410F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410F0u;
    // 0x2410f4: 0x2404017d  addiu       $a0, $zero, 0x17D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2410F0u, 0x2410F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410F8u;
label_2410f8:
    // 0x2410f8: 0xc099c88  jal         func_267220
    ctx->pc = 0x2410F8u;
    SET_GPR_U32(ctx, 31, 0x241100u);
    ctx->pc = 0x2410FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410F8u;
    // 0x2410fc: 0x2404009f  addiu       $a0, $zero, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x2410F8u, 0x241100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241100u;
label_241100:
    // 0x241100: 0xc099c88  jal         func_267220
    ctx->pc = 0x241100u;
    SET_GPR_U32(ctx, 31, 0x241108u);
    ctx->pc = 0x241104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241100u;
    // 0x241104: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241100u, 0x241108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241108u;
label_241108:
    // 0x241108: 0xc099c88  jal         func_267220
    ctx->pc = 0x241108u;
    SET_GPR_U32(ctx, 31, 0x241110u);
    ctx->pc = 0x24110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241108u;
    // 0x24110c: 0x240400a1  addiu       $a0, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241108u, 0x241110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241110u;
label_241110:
    // 0x241110: 0xc099c88  jal         func_267220
    ctx->pc = 0x241110u;
    SET_GPR_U32(ctx, 31, 0x241118u);
    ctx->pc = 0x241114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241110u;
    // 0x241114: 0x240400a2  addiu       $a0, $zero, 0xA2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241110u, 0x241118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241118u;
label_241118:
    // 0x241118: 0xc099c88  jal         func_267220
    ctx->pc = 0x241118u;
    SET_GPR_U32(ctx, 31, 0x241120u);
    ctx->pc = 0x24111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241118u;
    // 0x24111c: 0x240400a3  addiu       $a0, $zero, 0xA3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241118u, 0x241120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241120u;
label_241120:
    // 0x241120: 0xc099c88  jal         func_267220
    ctx->pc = 0x241120u;
    SET_GPR_U32(ctx, 31, 0x241128u);
    ctx->pc = 0x241124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241120u;
    // 0x241124: 0x240400a4  addiu       $a0, $zero, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241120u, 0x241128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241128u;
label_241128:
    // 0x241128: 0xc099c88  jal         func_267220
    ctx->pc = 0x241128u;
    SET_GPR_U32(ctx, 31, 0x241130u);
    ctx->pc = 0x24112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241128u;
    // 0x24112c: 0x240400a5  addiu       $a0, $zero, 0xA5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241128u, 0x241130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241130u;
label_241130:
    // 0x241130: 0xc099c88  jal         func_267220
    ctx->pc = 0x241130u;
    SET_GPR_U32(ctx, 31, 0x241138u);
    ctx->pc = 0x241134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241130u;
    // 0x241134: 0x240400a6  addiu       $a0, $zero, 0xA6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241130u, 0x241138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241138u;
label_241138:
    // 0x241138: 0xc099c88  jal         func_267220
    ctx->pc = 0x241138u;
    SET_GPR_U32(ctx, 31, 0x241140u);
    ctx->pc = 0x24113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241138u;
    // 0x24113c: 0x240400a7  addiu       $a0, $zero, 0xA7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241138u, 0x241140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241140u;
label_241140:
    // 0x241140: 0xc099c88  jal         func_267220
    ctx->pc = 0x241140u;
    SET_GPR_U32(ctx, 31, 0x241148u);
    ctx->pc = 0x241144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241140u;
    // 0x241144: 0x240400a8  addiu       $a0, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241140u, 0x241148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241148u;
label_241148:
    // 0x241148: 0xc099c88  jal         func_267220
    ctx->pc = 0x241148u;
    SET_GPR_U32(ctx, 31, 0x241150u);
    ctx->pc = 0x24114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241148u;
    // 0x24114c: 0x240401f1  addiu       $a0, $zero, 0x1F1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 497));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x241148u, 0x241150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241150u;
label_241150:
    // 0x241150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241154: 0x8094d88  j           func_253620
    ctx->pc = 0x241154u;
    ctx->pc = 0x241158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241154u;
    // 0x241158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253620u;
    mmfilePreloadBuiltinMaps_0x253620(rdram, ctx, runtime); return;
    ctx->pc = 0x24115Cu;
}
