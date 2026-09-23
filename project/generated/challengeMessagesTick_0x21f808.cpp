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

// Function: challengeMessagesTick
// Address: 0x21f808 - 0x21f904
void challengeMessagesTick_0x21f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeMessagesTick_0x21f808");
#endif

    switch (ctx->pc) {
        case 0x21f830u: goto label_21f830;
        case 0x21f850u: goto label_21f850;
        case 0x21f8b4u: goto label_21f8b4;
        case 0x21f8c0u: goto label_21f8c0;
        default: break;
    }

    ctx->pc = 0x21f808u;

    // 0x21f808: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21f808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21f80c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21f810: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21f814: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21f814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21f818: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21f818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f81c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21f81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21f820: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21f824: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21f828: 0xc087c18  jal         func_21F060
    ctx->pc = 0x21F828u;
    SET_GPR_U32(ctx, 31, 0x21F830u);
    ctx->pc = 0x21F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F828u;
    // 0x21f82c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x21F828u, 0x21F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F830u;
label_21f830:
    // 0x21f830: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21f830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f834: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x21f834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x21f838: 0x18a00029  blez        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x21F838u;
    {
        const bool branch_taken_0x21f838 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x21F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F838u;
        // 0x21f83c: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f838) {
            ctx->pc = 0x21F8E0u;
            goto label_21f8e0;
        }
    }
    ctx->pc = 0x21F840u;
    // 0x21f840: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x21f840u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x21f844: 0x24542c18  addiu       $s4, $v0, 0x2C18
    ctx->pc = 0x21f844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21f848: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21f848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f84c: 0x0  nop
    ctx->pc = 0x21f84cu;
    // NOP
label_21f850:
    // 0x21f850: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x21f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x21f854: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x21f854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x21f858: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21f85c: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x21F85Cu;
    {
        const bool branch_taken_0x21f85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f85c) {
            ctx->pc = 0x21F860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F85Cu;
            // 0x21f860: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F8D4u;
            goto label_21f8d4;
        }
    }
    ctx->pc = 0x21F864u;
    // 0x21f864: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x21f864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f868: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21f86c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21F86Cu;
    {
        const bool branch_taken_0x21f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F86Cu;
        // 0x21f870: 0x8f839da8  lw          $v1, -0x6258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f86c) {
            ctx->pc = 0x21F8D0u;
            goto label_21f8d0;
        }
    }
    ctx->pc = 0x21F874u;
    // 0x21f874: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x21f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21f878: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21f878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f87c: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x21f87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x21f880: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21F880u;
    {
        const bool branch_taken_0x21f880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F880u;
        // 0x21f884: 0x26b0c4a8  addiu       $s0, $s5, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f880) {
            ctx->pc = 0x21F8D0u;
            goto label_21f8d0;
        }
    }
    ctx->pc = 0x21F888u;
    // 0x21f888: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x21f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21f88c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x21f88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x21f890: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x21F890u;
    {
        const bool branch_taken_0x21f890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f890) {
            ctx->pc = 0x21F894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F890u;
            // 0x21f894: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F8D4u;
            goto label_21f8d4;
        }
    }
    ctx->pc = 0x21F898u;
    // 0x21f898: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f89c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21f8a4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x21f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21f8a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f8ac: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x21F8ACu;
    SET_GPR_U32(ctx, 31, 0x21F8B4u);
    ctx->pc = 0x21F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8ACu;
    // 0x21f8b0: 0x8c650748  lw          $a1, 0x748($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x21F8ACu, 0x21F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8B4u;
label_21f8b4:
    // 0x21f8b4: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x21f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x21f8b8: 0xc081546  jal         func_205518
    ctx->pc = 0x21F8B8u;
    SET_GPR_U32(ctx, 31, 0x21F8C0u);
    ctx->pc = 0x21F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8B8u;
    // 0x21f8bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x21F8B8u, 0x21F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8C0u;
label_21f8c0:
    // 0x21f8c0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x21f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21f8c4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x21f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x21f8c8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x21f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x21f8cc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x21f8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_21f8d0:
    // 0x21f8d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21f8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21f8d4:
    // 0x21f8d4: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x21f8d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21f8d8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x21F8D8u;
    {
        const bool branch_taken_0x21f8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8D8u;
        // 0x21f8dc: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8d8) {
            ctx->pc = 0x21F850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f850;
        }
    }
    ctx->pc = 0x21F8E0u;
label_21f8e0:
    // 0x21f8e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21f8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f8e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21f8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f8e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21f8e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f8ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21f8ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f8f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21f8f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f8f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21f8f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f8f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x21F8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8FCu;
        // 0x21f900: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F904u;
}
