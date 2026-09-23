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

// Function: ipViewZB
// Address: 0x296120 - 0x2961ec
void ipViewZB_0x296120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipViewZB_0x296120");
#endif

    switch (ctx->pc) {
        case 0x29614cu: goto label_29614c;
        case 0x296154u: goto label_296154;
        case 0x296160u: goto label_296160;
        case 0x296178u: goto label_296178;
        case 0x2961a8u: goto label_2961a8;
        default: break;
    }

    ctx->pc = 0x296120u;

    // 0x296120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x296120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x296124: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x296124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x296128: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x296128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29612c: 0x3c157f7f  lui         $s5, 0x7F7F
    ctx->pc = 0x29612cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32639 << 16));
    // 0x296130: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x296130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x296134: 0x36b57f4f  ori         $s5, $s5, 0x7F4F
    ctx->pc = 0x296134u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32591);
    // 0x296138: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x296138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29613c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x296140: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x296140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x296144: 0xc0a57ee  jal         func_295FB8
    ctx->pc = 0x296144u;
    SET_GPR_U32(ctx, 31, 0x29614Cu);
    ctx->pc = 0x296148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296144u;
    // 0x296148: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295FB8u, 0x296144u, 0x29614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29614Cu;
label_29614c:
    // 0x29614c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x29614Cu;
    SET_GPR_U32(ctx, 31, 0x296154u);
    ctx->pc = 0x296150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29614Cu;
    // 0x296150: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x29614Cu, 0x296154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296154u;
label_296154:
    // 0x296154: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296158: 0x38f20001  xori        $s2, $a3, 0x1
    ctx->pc = 0x296158u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x29615c: 0x0  nop
    ctx->pc = 0x29615cu;
    // NOP
label_296160:
    // 0x296160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x296160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296164: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x296164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x296168: 0x7a140  sll         $s4, $a3, 5
    ctx->pc = 0x296168u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x29616c: 0x3453001f  ori         $s3, $v0, 0x1F
    ctx->pc = 0x29616cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x296170: 0x24f10001  addiu       $s1, $a3, 0x1
    ctx->pc = 0x296170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x296174: 0x38880001  xori        $t0, $a0, 0x1
    ctx->pc = 0x296174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_296178:
    // 0x296178: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x296178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29617c: 0x85240  sll         $t2, $t0, 9
    ctx->pc = 0x29617cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 9));
    // 0x296180: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x296180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x296184: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x296184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296188: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x296188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x29618c: 0x354a01f0  ori         $t2, $t2, 0x1F0
    ctx->pc = 0x29618cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)496);
    // 0x296190: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x296190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296194: 0x103140  sll         $a2, $s0, 5
    ctx->pc = 0x296194u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x296198: 0x113940  sll         $a3, $s1, 5
    ctx->pc = 0x296198u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x29619c: 0x124a40  sll         $t1, $s2, 9
    ctx->pc = 0x29619cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x2961a0: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x2961A0u;
    SET_GPR_U32(ctx, 31, 0x2961A8u);
    ctx->pc = 0x2961A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961A0u;
    // 0x2961a4: 0x135900  sll         $t3, $s3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x2961A0u, 0x2961A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961A8u;
label_2961a8:
    // 0x2961a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2961a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961ac: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x2961acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2961b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2961B0u;
    {
        const bool branch_taken_0x2961b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2961B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961B0u;
        // 0x2961b4: 0x38880001  xori        $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961b0) {
            ctx->pc = 0x296178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296178;
        }
    }
    ctx->pc = 0x2961B8u;
    // 0x2961b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2961b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961bc: 0x28e20007  slti        $v0, $a3, 0x7
    ctx->pc = 0x2961bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2961c0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2961C0u;
    {
        const bool branch_taken_0x2961c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2961C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961C0u;
        // 0x2961c4: 0x38f20001  xori        $s2, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961c0) {
            ctx->pc = 0x296160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296160;
        }
    }
    ctx->pc = 0x2961C8u;
    // 0x2961c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2961c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2961cc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2961ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2961d0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2961d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2961d4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2961d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2961d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2961d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2961dc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2961dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2961e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2961e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2961e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2961E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2961E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961E4u;
        // 0x2961e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2961E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2961ECu;
}
