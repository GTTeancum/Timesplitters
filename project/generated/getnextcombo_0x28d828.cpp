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

// Function: getnextcombo
// Address: 0x28d828 - 0x28d91c
void getnextcombo_0x28d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getnextcombo_0x28d828");
#endif

    switch (ctx->pc) {
        case 0x28d890u: goto label_28d890;
        case 0x28d8c0u: goto label_28d8c0;
        case 0x28d8dcu: goto label_28d8dc;
        default: break;
    }

    ctx->pc = 0x28d828u;

    // 0x28d828: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28d82c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x28d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x28d830: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28d834: 0x2443c4a8  addiu       $v1, $v0, -0x3B58
    ctx->pc = 0x28d834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x28d838: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28d83c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d83cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d840: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28d844: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28d848: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28d848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28d84c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28d850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28d854: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x28d854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x28d858: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x28d858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x28d85c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D85Cu;
    {
        const bool branch_taken_0x28d85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D85Cu;
        // 0x28d860: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d85c) {
            ctx->pc = 0x28D878u;
            goto label_28d878;
        }
    }
    ctx->pc = 0x28D864u;
    // 0x28d864: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28d864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x28d868: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D868u;
    {
        const bool branch_taken_0x28d868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D868u;
        // 0x28d86c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d868) {
            ctx->pc = 0x28D87Cu;
            goto label_28d87c;
        }
    }
    ctx->pc = 0x28D870u;
    // 0x28d870: 0x8e620278  lw          $v0, 0x278($s3)
    ctx->pc = 0x28d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x28d874: 0x2a02a  slt         $s4, $zero, $v0
    ctx->pc = 0x28d874u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28d878:
    // 0x28d878: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28d878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_28d87c:
    // 0x28d87c: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x28d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x28d880: 0x24439200  addiu       $v1, $v0, -0x6E00
    ctx->pc = 0x28d880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939136));
    // 0x28d884: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28d884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d888: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x28d888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28d88c: 0x0  nop
    ctx->pc = 0x28d88cu;
    // NOP
label_28d890:
    // 0x28d890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d894: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x28d894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x28d898: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x28d898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x28d89c: 0x242800a  movz        $s0, $s2, $v0
    ctx->pc = 0x28d89cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x28d8a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28d8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28d8a4: 0x2a420021  slti        $v0, $s2, 0x21
    ctx->pc = 0x28d8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28d8a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28D8A8u;
    {
        const bool branch_taken_0x28d8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d8a8) {
            ctx->pc = 0x28D890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d890;
        }
    }
    ctx->pc = 0x28D8B0u;
    // 0x28d8b0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x28d8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8b4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x28d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x28d8b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28d8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28d8bc: 0x24759200  addiu       $s5, $v1, -0x6E00
    ctx->pc = 0x28d8bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939136));
label_28d8c0:
    // 0x28d8c0: 0x2a020021  slti        $v0, $s0, 0x21
    ctx->pc = 0x28d8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28d8c4: 0x282800a  movz        $s0, $s4, $v0
    ctx->pc = 0x28d8c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    // 0x28d8c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28d8cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28d8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8d0: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x28d8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x28d8d4: 0xc0a530c  jal         func_294C30
    ctx->pc = 0x28D8D4u;
    SET_GPR_U32(ctx, 31, 0x28D8DCu);
    ctx->pc = 0x28D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D8D4u;
    // 0x28d8d8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294C30u, 0x28D8D4u, 0x28D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8DCu;
label_28d8dc:
    // 0x28d8dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D8DCu;
    {
        const bool branch_taken_0x28d8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d8dc) {
            ctx->pc = 0x28D8ECu;
            goto label_28d8ec;
        }
    }
    ctx->pc = 0x28D8E4u;
    // 0x28d8e4: 0x5650fff6  bnel        $s2, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28D8E4u;
    {
        const bool branch_taken_0x28d8e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x28d8e4) {
            ctx->pc = 0x28D8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D8E4u;
            // 0x28d8e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d8c0;
        }
    }
    ctx->pc = 0x28D8ECu;
label_28d8ec:
    // 0x28d8ec: 0x52500002  beql        $s2, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28D8ECu;
    {
        const bool branch_taken_0x28d8ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x28d8ec) {
            ctx->pc = 0x28D8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D8ECu;
            // 0x28d8f0: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8F8u;
            goto label_28d8f8;
        }
    }
    ctx->pc = 0x28D8F4u;
    // 0x28d8f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28d8f8:
    // 0x28d8f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28d8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d8fc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28d8fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d900: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28d900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d904: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28d904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d908: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28d908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d90c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28d90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d914: 0x3e00008  jr          $ra
    ctx->pc = 0x28D914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D914u;
        // 0x28d918: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D91Cu;
}
