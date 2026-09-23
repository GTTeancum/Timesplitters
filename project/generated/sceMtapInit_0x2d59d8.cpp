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

// Function: sceMtapInit
// Address: 0x2d59d8 - 0x2d5c34
void sceMtapInit_0x2d59d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMtapInit_0x2d59d8");
#endif

    switch (ctx->pc) {
        case 0x2d59f0u: goto label_2d59f0;
        case 0x2d59f8u: goto label_2d59f8;
        case 0x2d5a08u: goto label_2d5a08;
        case 0x2d5a3cu: goto label_2d5a3c;
        case 0x2d5a50u: goto label_2d5a50;
        case 0x2d5a58u: goto label_2d5a58;
        case 0x2d5a70u: goto label_2d5a70;
        case 0x2d5a80u: goto label_2d5a80;
        case 0x2d5ab0u: goto label_2d5ab0;
        case 0x2d5ac0u: goto label_2d5ac0;
        case 0x2d5ac8u: goto label_2d5ac8;
        case 0x2d5ae0u: goto label_2d5ae0;
        case 0x2d5af0u: goto label_2d5af0;
        case 0x2d5b20u: goto label_2d5b20;
        case 0x2d5b30u: goto label_2d5b30;
        case 0x2d5b38u: goto label_2d5b38;
        case 0x2d5b50u: goto label_2d5b50;
        case 0x2d5b60u: goto label_2d5b60;
        case 0x2d5b90u: goto label_2d5b90;
        case 0x2d5ba0u: goto label_2d5ba0;
        case 0x2d5ba8u: goto label_2d5ba8;
        case 0x2d5bc0u: goto label_2d5bc0;
        case 0x2d5bd0u: goto label_2d5bd0;
        case 0x2d5c00u: goto label_2d5c00;
        case 0x2d5c10u: goto label_2d5c10;
        case 0x2d5c18u: goto label_2d5c18;
        default: break;
    }

    ctx->pc = 0x2d59d8u;

    // 0x2d59d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d59d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d59dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d59dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d59e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d59e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d59e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d59e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d59e8: 0xc0b4948  jal         func_2D2520
    ctx->pc = 0x2D59E8u;
    SET_GPR_U32(ctx, 31, 0x2D59F0u);
    ctx->pc = 0x2D59ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59E8u;
    // 0x2d59ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2520u, 0x2D59E8u, 0x2D59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59F0u;
label_2d59f0:
    // 0x2d59f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D59F0u;
    {
        const bool branch_taken_0x2d59f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59F0u;
        // 0x2d59f4: 0x3c1101ff  lui         $s1, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59f0) {
            ctx->pc = 0x2D5A24u;
            goto label_2d5a24;
        }
    }
    ctx->pc = 0x2D59F8u;
label_2d59f8:
    // 0x2d59f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d59fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5a00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d5a04: 0x0  nop
    ctx->pc = 0x2d5a04u;
    // NOP
label_2d5a08:
    // 0x2d5a08: 0x0  nop
    ctx->pc = 0x2d5a08u;
    // NOP
    // 0x2d5a0c: 0x0  nop
    ctx->pc = 0x2d5a0cu;
    // NOP
    // 0x2d5a10: 0x0  nop
    ctx->pc = 0x2d5a10u;
    // NOP
    // 0x2d5a14: 0x0  nop
    ctx->pc = 0x2d5a14u;
    // NOP
    // 0x2d5a18: 0x0  nop
    ctx->pc = 0x2d5a18u;
    // NOP
    // 0x2d5a1c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D5A1Cu;
    {
        const bool branch_taken_0x2d5a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A1Cu;
        // 0x2d5a20: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a1c) {
            ctx->pc = 0x2D5A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5a08;
        }
    }
    ctx->pc = 0x2D5A24u;
label_2d5a24:
    // 0x2d5a24: 0x26301380  addiu       $s0, $s1, 0x1380
    ctx->pc = 0x2d5a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4992));
    // 0x2d5a28: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2d5a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2d5a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a30: 0x34a50901  ori         $a1, $a1, 0x901
    ctx->pc = 0x2d5a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2305);
    // 0x2d5a34: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x2D5A34u;
    SET_GPR_U32(ctx, 31, 0x2D5A3Cu);
    ctx->pc = 0x2D5A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A34u;
    // 0x2d5a38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x2D5A34u, 0x2D5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A3Cu;
label_2d5a3c:
    // 0x2d5a3c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5A3Cu;
    {
        const bool branch_taken_0x2d5a3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5a3c) {
            ctx->pc = 0x2D5A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5A3Cu;
            // 0x2d5a40: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5A58u;
            goto label_2d5a58;
        }
    }
    ctx->pc = 0x2D5A44u;
    // 0x2d5a44: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d5a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d5a48: 0xc0b5668  jal         func_2D59A0
    ctx->pc = 0x2D5A48u;
    SET_GPR_U32(ctx, 31, 0x2D5A50u);
    ctx->pc = 0x2D5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A48u;
    // 0x2d5a4c: 0x2484a6c0  addiu       $a0, $a0, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59A0u, 0x2D5A48u, 0x2D5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A50u;
label_2d5a50:
    // 0x2d5a50: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2D5A50u;
    SET_GPR_U32(ctx, 31, 0x2D5A58u);
    ctx->pc = 0x2D5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A50u;
    // 0x2d5a54: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2D5A50u, 0x2D5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A58u;
label_2d5a58:
    // 0x2d5a58: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D5A58u;
    {
        const bool branch_taken_0x2d5a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A58u;
        // 0x2d5a5c: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a58) {
            ctx->pc = 0x2D59F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d59f8;
        }
    }
    ctx->pc = 0x2D5A60u;
    // 0x2d5a60: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2d5a60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2d5a64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D5A64u;
    {
        const bool branch_taken_0x2d5a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A64u;
        // 0x2d5a68: 0x245013a8  addiu       $s0, $v0, 0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a64) {
            ctx->pc = 0x2D5A9Cu;
            goto label_2d5a9c;
        }
    }
    ctx->pc = 0x2D5A6Cu;
    // 0x2d5a6c: 0x0  nop
    ctx->pc = 0x2d5a6cu;
    // NOP
label_2d5a70:
    // 0x2d5a70: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d5a74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5a78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d5a7c: 0x0  nop
    ctx->pc = 0x2d5a7cu;
    // NOP
label_2d5a80:
    // 0x2d5a80: 0x0  nop
    ctx->pc = 0x2d5a80u;
    // NOP
    // 0x2d5a84: 0x0  nop
    ctx->pc = 0x2d5a84u;
    // NOP
    // 0x2d5a88: 0x0  nop
    ctx->pc = 0x2d5a88u;
    // NOP
    // 0x2d5a8c: 0x0  nop
    ctx->pc = 0x2d5a8cu;
    // NOP
    // 0x2d5a90: 0x0  nop
    ctx->pc = 0x2d5a90u;
    // NOP
    // 0x2d5a94: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D5A94u;
    {
        const bool branch_taken_0x2d5a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A94u;
        // 0x2d5a98: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a94) {
            ctx->pc = 0x2D5A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5a80;
        }
    }
    ctx->pc = 0x2D5A9Cu;
label_2d5a9c:
    // 0x2d5a9c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2d5a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2d5aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5aa4: 0x34a50902  ori         $a1, $a1, 0x902
    ctx->pc = 0x2d5aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2306);
    // 0x2d5aa8: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x2D5AA8u;
    SET_GPR_U32(ctx, 31, 0x2D5AB0u);
    ctx->pc = 0x2D5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AA8u;
    // 0x2d5aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x2D5AA8u, 0x2D5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AB0u;
label_2d5ab0:
    // 0x2d5ab0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5AB0u;
    {
        const bool branch_taken_0x2d5ab0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5ab0) {
            ctx->pc = 0x2D5AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5AB0u;
            // 0x2d5ab4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5AC8u;
            goto label_2d5ac8;
        }
    }
    ctx->pc = 0x2D5AB8u;
    // 0x2d5ab8: 0xc0b5668  jal         func_2D59A0
    ctx->pc = 0x2D5AB8u;
    SET_GPR_U32(ctx, 31, 0x2D5AC0u);
    ctx->pc = 0x2D5ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AB8u;
    // 0x2d5abc: 0x2624a6c0  addiu       $a0, $s1, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59A0u, 0x2D5AB8u, 0x2D5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AC0u;
label_2d5ac0:
    // 0x2d5ac0: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2D5AC0u;
    SET_GPR_U32(ctx, 31, 0x2D5AC8u);
    ctx->pc = 0x2D5AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AC0u;
    // 0x2d5ac4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2D5AC0u, 0x2D5AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AC8u;
label_2d5ac8:
    // 0x2d5ac8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D5AC8u;
    {
        const bool branch_taken_0x2d5ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AC8u;
        // 0x2d5acc: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ac8) {
            ctx->pc = 0x2D5A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5a70;
        }
    }
    ctx->pc = 0x2D5AD0u;
    // 0x2d5ad0: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2d5ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2d5ad4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D5AD4u;
    {
        const bool branch_taken_0x2d5ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AD4u;
        // 0x2d5ad8: 0x245013d0  addiu       $s0, $v0, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ad4) {
            ctx->pc = 0x2D5B0Cu;
            goto label_2d5b0c;
        }
    }
    ctx->pc = 0x2D5ADCu;
    // 0x2d5adc: 0x0  nop
    ctx->pc = 0x2d5adcu;
    // NOP
label_2d5ae0:
    // 0x2d5ae0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d5ae4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5ae8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d5aec: 0x0  nop
    ctx->pc = 0x2d5aecu;
    // NOP
label_2d5af0:
    // 0x2d5af0: 0x0  nop
    ctx->pc = 0x2d5af0u;
    // NOP
    // 0x2d5af4: 0x0  nop
    ctx->pc = 0x2d5af4u;
    // NOP
    // 0x2d5af8: 0x0  nop
    ctx->pc = 0x2d5af8u;
    // NOP
    // 0x2d5afc: 0x0  nop
    ctx->pc = 0x2d5afcu;
    // NOP
    // 0x2d5b00: 0x0  nop
    ctx->pc = 0x2d5b00u;
    // NOP
    // 0x2d5b04: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D5B04u;
    {
        const bool branch_taken_0x2d5b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B04u;
        // 0x2d5b08: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b04) {
            ctx->pc = 0x2D5AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5af0;
        }
    }
    ctx->pc = 0x2D5B0Cu;
label_2d5b0c:
    // 0x2d5b0c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2d5b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2d5b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b14: 0x34a50903  ori         $a1, $a1, 0x903
    ctx->pc = 0x2d5b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2307);
    // 0x2d5b18: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x2D5B18u;
    SET_GPR_U32(ctx, 31, 0x2D5B20u);
    ctx->pc = 0x2D5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B18u;
    // 0x2d5b1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x2D5B18u, 0x2D5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B20u;
label_2d5b20:
    // 0x2d5b20: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5B20u;
    {
        const bool branch_taken_0x2d5b20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5b20) {
            ctx->pc = 0x2D5B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5B20u;
            // 0x2d5b24: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5B38u;
            goto label_2d5b38;
        }
    }
    ctx->pc = 0x2D5B28u;
    // 0x2d5b28: 0xc0b5668  jal         func_2D59A0
    ctx->pc = 0x2D5B28u;
    SET_GPR_U32(ctx, 31, 0x2D5B30u);
    ctx->pc = 0x2D5B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B28u;
    // 0x2d5b2c: 0x2624a6c0  addiu       $a0, $s1, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59A0u, 0x2D5B28u, 0x2D5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B30u;
label_2d5b30:
    // 0x2d5b30: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2D5B30u;
    SET_GPR_U32(ctx, 31, 0x2D5B38u);
    ctx->pc = 0x2D5B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B30u;
    // 0x2d5b34: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2D5B30u, 0x2D5B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B38u;
label_2d5b38:
    // 0x2d5b38: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D5B38u;
    {
        const bool branch_taken_0x2d5b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B38u;
        // 0x2d5b3c: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b38) {
            ctx->pc = 0x2D5AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5ae0;
        }
    }
    ctx->pc = 0x2D5B40u;
    // 0x2d5b40: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2d5b40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2d5b44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D5B44u;
    {
        const bool branch_taken_0x2d5b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B44u;
        // 0x2d5b48: 0x245013f8  addiu       $s0, $v0, 0x13F8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b44) {
            ctx->pc = 0x2D5B7Cu;
            goto label_2d5b7c;
        }
    }
    ctx->pc = 0x2D5B4Cu;
    // 0x2d5b4c: 0x0  nop
    ctx->pc = 0x2d5b4cu;
    // NOP
label_2d5b50:
    // 0x2d5b50: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d5b54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5b58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d5b5c: 0x0  nop
    ctx->pc = 0x2d5b5cu;
    // NOP
label_2d5b60:
    // 0x2d5b60: 0x0  nop
    ctx->pc = 0x2d5b60u;
    // NOP
    // 0x2d5b64: 0x0  nop
    ctx->pc = 0x2d5b64u;
    // NOP
    // 0x2d5b68: 0x0  nop
    ctx->pc = 0x2d5b68u;
    // NOP
    // 0x2d5b6c: 0x0  nop
    ctx->pc = 0x2d5b6cu;
    // NOP
    // 0x2d5b70: 0x0  nop
    ctx->pc = 0x2d5b70u;
    // NOP
    // 0x2d5b74: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D5B74u;
    {
        const bool branch_taken_0x2d5b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B74u;
        // 0x2d5b78: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b74) {
            ctx->pc = 0x2D5B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5b60;
        }
    }
    ctx->pc = 0x2D5B7Cu;
label_2d5b7c:
    // 0x2d5b7c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2d5b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2d5b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b84: 0x34a509fe  ori         $a1, $a1, 0x9FE
    ctx->pc = 0x2d5b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2558);
    // 0x2d5b88: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x2D5B88u;
    SET_GPR_U32(ctx, 31, 0x2D5B90u);
    ctx->pc = 0x2D5B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B88u;
    // 0x2d5b8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x2D5B88u, 0x2D5B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B90u;
label_2d5b90:
    // 0x2d5b90: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5B90u;
    {
        const bool branch_taken_0x2d5b90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5b90) {
            ctx->pc = 0x2D5B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5B90u;
            // 0x2d5b94: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5BA8u;
            goto label_2d5ba8;
        }
    }
    ctx->pc = 0x2D5B98u;
    // 0x2d5b98: 0xc0b5668  jal         func_2D59A0
    ctx->pc = 0x2D5B98u;
    SET_GPR_U32(ctx, 31, 0x2D5BA0u);
    ctx->pc = 0x2D5B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B98u;
    // 0x2d5b9c: 0x2624a6c0  addiu       $a0, $s1, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59A0u, 0x2D5B98u, 0x2D5BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BA0u;
label_2d5ba0:
    // 0x2d5ba0: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2D5BA0u;
    SET_GPR_U32(ctx, 31, 0x2D5BA8u);
    ctx->pc = 0x2D5BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5BA0u;
    // 0x2d5ba4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2D5BA0u, 0x2D5BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BA8u;
label_2d5ba8:
    // 0x2d5ba8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D5BA8u;
    {
        const bool branch_taken_0x2d5ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BA8u;
        // 0x2d5bac: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ba8) {
            ctx->pc = 0x2D5B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5b50;
        }
    }
    ctx->pc = 0x2D5BB0u;
    // 0x2d5bb0: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2d5bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2d5bb4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D5BB4u;
    {
        const bool branch_taken_0x2d5bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BB4u;
        // 0x2d5bb8: 0x24501420  addiu       $s0, $v0, 0x1420 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bb4) {
            ctx->pc = 0x2D5BECu;
            goto label_2d5bec;
        }
    }
    ctx->pc = 0x2D5BBCu;
    // 0x2d5bbc: 0x0  nop
    ctx->pc = 0x2d5bbcu;
    // NOP
label_2d5bc0:
    // 0x2d5bc0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d5bc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d5bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5bc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d5bcc: 0x0  nop
    ctx->pc = 0x2d5bccu;
    // NOP
label_2d5bd0:
    // 0x2d5bd0: 0x0  nop
    ctx->pc = 0x2d5bd0u;
    // NOP
    // 0x2d5bd4: 0x0  nop
    ctx->pc = 0x2d5bd4u;
    // NOP
    // 0x2d5bd8: 0x0  nop
    ctx->pc = 0x2d5bd8u;
    // NOP
    // 0x2d5bdc: 0x0  nop
    ctx->pc = 0x2d5bdcu;
    // NOP
    // 0x2d5be0: 0x0  nop
    ctx->pc = 0x2d5be0u;
    // NOP
    // 0x2d5be4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D5BE4u;
    {
        const bool branch_taken_0x2d5be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BE4u;
        // 0x2d5be8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5be4) {
            ctx->pc = 0x2D5BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5bd0;
        }
    }
    ctx->pc = 0x2D5BECu;
label_2d5bec:
    // 0x2d5bec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2d5becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2d5bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bf4: 0x34a509ff  ori         $a1, $a1, 0x9FF
    ctx->pc = 0x2d5bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2559);
    // 0x2d5bf8: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x2D5BF8u;
    SET_GPR_U32(ctx, 31, 0x2D5C00u);
    ctx->pc = 0x2D5BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5BF8u;
    // 0x2d5bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x2D5BF8u, 0x2D5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C00u;
label_2d5c00:
    // 0x2d5c00: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5C00u;
    {
        const bool branch_taken_0x2d5c00 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d5c00) {
            ctx->pc = 0x2D5C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5C00u;
            // 0x2d5c04: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5C18u;
            goto label_2d5c18;
        }
    }
    ctx->pc = 0x2D5C08u;
    // 0x2d5c08: 0xc0b5668  jal         func_2D59A0
    ctx->pc = 0x2D5C08u;
    SET_GPR_U32(ctx, 31, 0x2D5C10u);
    ctx->pc = 0x2D5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C08u;
    // 0x2d5c0c: 0x2624a6c0  addiu       $a0, $s1, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59A0u, 0x2D5C08u, 0x2D5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C10u;
label_2d5c10:
    // 0x2d5c10: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2D5C10u;
    SET_GPR_U32(ctx, 31, 0x2D5C18u);
    ctx->pc = 0x2D5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C10u;
    // 0x2d5c14: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2D5C10u, 0x2D5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C18u;
label_2d5c18:
    // 0x2d5c18: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D5C18u;
    {
        const bool branch_taken_0x2d5c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C18u;
        // 0x2d5c1c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c18) {
            ctx->pc = 0x2D5BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5bc0;
        }
    }
    ctx->pc = 0x2D5C20u;
    // 0x2d5c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5c24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d5c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C2Cu;
        // 0x2d5c30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5C34u;
}
