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

// Function: inflate_fixed
// Address: 0x21b4e0 - 0x21b65c
void inflate_fixed_0x21b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("inflate_fixed_0x21b4e0");
#endif

    switch (ctx->pc) {
        case 0x21b500u: goto label_21b500;
        case 0x21b528u: goto label_21b528;
        case 0x21b550u: goto label_21b550;
        case 0x21b580u: goto label_21b580;
        case 0x21b5c4u: goto label_21b5c4;
        case 0x21b5e0u: goto label_21b5e0;
        case 0x21b624u: goto label_21b624;
        case 0x21b64cu: goto label_21b64c;
        default: break;
    }

    ctx->pc = 0x21b4e0u;

    // 0x21b4e0: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x21b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x21b4e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21b4e8: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x21b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
    // 0x21b4ec: 0x27a90480  addiu       $t1, $sp, 0x480
    ctx->pc = 0x21b4ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x21b4f0: 0x27aa0484  addiu       $t2, $sp, 0x484
    ctx->pc = 0x21b4f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1156));
    // 0x21b4f4: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x21b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x21b4f8: 0x27a2023c  addiu       $v0, $sp, 0x23C
    ctx->pc = 0x21b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
    // 0x21b4fc: 0x0  nop
    ctx->pc = 0x21b4fcu;
    // NOP
label_21b500:
    // 0x21b500: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21b500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21b504: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21b504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21b508: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x21b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x21b50c: 0x0  nop
    ctx->pc = 0x21b50cu;
    // NOP
    // 0x21b510: 0x0  nop
    ctx->pc = 0x21b510u;
    // NOP
    // 0x21b514: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B514u;
    {
        const bool branch_taken_0x21b514 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x21b514) {
            ctx->pc = 0x21B500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b500;
        }
    }
    ctx->pc = 0x21B51Cu;
    // 0x21b51c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x21b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21b520: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x21b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x21b524: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x21b524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_21b528:
    // 0x21b528: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21b528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21b52c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21b530: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21b534: 0x0  nop
    ctx->pc = 0x21b534u;
    // NOP
    // 0x21b538: 0x0  nop
    ctx->pc = 0x21b538u;
    // NOP
    // 0x21b53c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B53Cu;
    {
        const bool branch_taken_0x21b53c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x21b53c) {
            ctx->pc = 0x21B528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b528;
        }
    }
    ctx->pc = 0x21B544u;
    // 0x21b544: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x21b544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x21b548: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21b548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21b54c: 0x27a30400  addiu       $v1, $sp, 0x400
    ctx->pc = 0x21b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_21b550:
    // 0x21b550: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x21b550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x21b554: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21b554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21b558: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21b558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21b55c: 0x28820118  slti        $v0, $a0, 0x118
    ctx->pc = 0x21b55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)280) ? 1 : 0);
    // 0x21b560: 0x0  nop
    ctx->pc = 0x21b560u;
    // NOP
    // 0x21b564: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B564u;
    {
        const bool branch_taken_0x21b564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b564) {
            ctx->pc = 0x21B550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b550;
        }
    }
    ctx->pc = 0x21B56Cu;
    // 0x21b56c: 0x28820120  slti        $v0, $a0, 0x120
    ctx->pc = 0x21b56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x21b570: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21B570u;
    {
        const bool branch_taken_0x21b570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B570u;
        // 0x21b574: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b570) {
            ctx->pc = 0x21B59Cu;
            goto label_21b59c;
        }
    }
    ctx->pc = 0x21B578u;
    // 0x21b578: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21b578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21b57c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x21b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_21b580:
    // 0x21b580: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x21b580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x21b584: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21b584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21b588: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21b588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21b58c: 0x28820120  slti        $v0, $a0, 0x120
    ctx->pc = 0x21b58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x21b590: 0x0  nop
    ctx->pc = 0x21b590u;
    // NOP
    // 0x21b594: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B594u;
    {
        const bool branch_taken_0x21b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b594) {
            ctx->pc = 0x21B580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b580;
        }
    }
    ctx->pc = 0x21B59Cu;
label_21b59c:
    // 0x21b59c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x21b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21b5a0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x21b5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x21b5a4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x21b5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x21b5a8: 0x24e7c210  addiu       $a3, $a3, -0x3DF0
    ctx->pc = 0x21b5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951440));
    // 0x21b5ac: 0xafa20484  sw          $v0, 0x484($sp)
    ctx->pc = 0x21b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 2));
    // 0x21b5b0: 0x2508c250  addiu       $t0, $t0, -0x3DB0
    ctx->pc = 0x21b5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951504));
    // 0x21b5b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21b5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5b8: 0x24050120  addiu       $a1, $zero, 0x120
    ctx->pc = 0x21b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x21b5bc: 0xc0869ec  jal         func_21A7B0
    ctx->pc = 0x21B5BCu;
    SET_GPR_U32(ctx, 31, 0x21B5C4u);
    ctx->pc = 0x21B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5BCu;
    // 0x21b5c0: 0x24060101  addiu       $a2, $zero, 0x101 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A7B0u, 0x21B5BCu, 0x21B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B5C4u;
label_21b5c4:
    // 0x21b5c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5c8: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21B5C8u;
    {
        const bool branch_taken_0x21b5c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5C8u;
        // 0x21b5cc: 0xdfbf0490  ld          $ra, 0x490($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5c8) {
            ctx->pc = 0x21B654u;
            goto label_21b654;
        }
    }
    ctx->pc = 0x21B5D0u;
    // 0x21b5d0: 0x27a90488  addiu       $t1, $sp, 0x488
    ctx->pc = 0x21b5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1160));
    // 0x21b5d4: 0x27aa048c  addiu       $t2, $sp, 0x48C
    ctx->pc = 0x21b5d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1164));
    // 0x21b5d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21b5dc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x21b5dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21b5e0:
    // 0x21b5e0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x21b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x21b5e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21b5e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21b5ec: 0x2882001e  slti        $v0, $a0, 0x1E
    ctx->pc = 0x21b5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x21b5f0: 0x0  nop
    ctx->pc = 0x21b5f0u;
    // NOP
    // 0x21b5f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B5F4u;
    {
        const bool branch_taken_0x21b5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b5f4) {
            ctx->pc = 0x21B5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b5e0;
        }
    }
    ctx->pc = 0x21B5FCu;
    // 0x21b5fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21b600: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x21b600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x21b604: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x21b604u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x21b608: 0x24e7c290  addiu       $a3, $a3, -0x3D70
    ctx->pc = 0x21b608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951568));
    // 0x21b60c: 0xafa2048c  sw          $v0, 0x48C($sp)
    ctx->pc = 0x21b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1164), GPR_U32(ctx, 2));
    // 0x21b610: 0x2508c2d0  addiu       $t0, $t0, -0x3D30
    ctx->pc = 0x21b610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951632));
    // 0x21b614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21b614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b618: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x21b618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21b61c: 0xc0869ec  jal         func_21A7B0
    ctx->pc = 0x21B61Cu;
    SET_GPR_U32(ctx, 31, 0x21B624u);
    ctx->pc = 0x21B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B61Cu;
    // 0x21b620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A7B0u, 0x21B61Cu, 0x21B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B624u;
label_21b624:
    // 0x21b624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b628: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x21b628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21b62c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B62Cu;
    {
        const bool branch_taken_0x21b62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b62c) {
            ctx->pc = 0x21B630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B62Cu;
            // 0x21b630: 0x8fa40480  lw          $a0, 0x480($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B63Cu;
            goto label_21b63c;
        }
    }
    ctx->pc = 0x21B634u;
    // 0x21b634: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21B634u;
    {
        const bool branch_taken_0x21b634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B634u;
        // 0x21b638: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b634) {
            ctx->pc = 0x21B650u;
            goto label_21b650;
        }
    }
    ctx->pc = 0x21B63Cu;
label_21b63c:
    // 0x21b63c: 0x8fa50488  lw          $a1, 0x488($sp)
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1160)));
    // 0x21b640: 0x8fa60484  lw          $a2, 0x484($sp)
    ctx->pc = 0x21b640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1156)));
    // 0x21b644: 0xc086b66  jal         func_21AD98
    ctx->pc = 0x21B644u;
    SET_GPR_U32(ctx, 31, 0x21B64Cu);
    ctx->pc = 0x21B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B644u;
    // 0x21b648: 0x8fa7048c  lw          $a3, 0x48C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AD98u, 0x21B644u, 0x21B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B64Cu;
label_21b64c:
    // 0x21b64c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21b64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21b650:
    // 0x21b650: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x21b650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_21b654:
    // 0x21b654: 0x3e00008  jr          $ra
    ctx->pc = 0x21B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B654u;
        // 0x21b658: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B65Cu;
}
