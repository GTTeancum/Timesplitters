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

// Function: bulletExplodeRemoteMine
// Address: 0x28a730 - 0x28a82c
void bulletExplodeRemoteMine_0x28a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletExplodeRemoteMine_0x28a730");
#endif

    switch (ctx->pc) {
        case 0x28a7a8u: goto label_28a7a8;
        case 0x28a7c8u: goto label_28a7c8;
        case 0x28a7ecu: goto label_28a7ec;
        case 0x28a7f8u: goto label_28a7f8;
        case 0x28a810u: goto label_28a810;
        default: break;
    }

    ctx->pc = 0x28a730u;

    // 0x28a730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28a734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a738: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28a73c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28a740: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28a744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28a744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a74c: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x28a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x28a750: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28A750u;
    {
        const bool branch_taken_0x28a750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A750u;
        // 0x28a754: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a750) {
            ctx->pc = 0x28A778u;
            goto label_28a778;
        }
    }
    ctx->pc = 0x28A758u;
    // 0x28a758: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x28a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x28a75c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A75Cu;
    {
        const bool branch_taken_0x28a75c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A75Cu;
        // 0x28a760: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a75c) {
            ctx->pc = 0x28A778u;
            goto label_28a778;
        }
    }
    ctx->pc = 0x28A764u;
    // 0x28a764: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x28a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x28a768: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28a768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28a76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a770: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28A770u;
    {
        const bool branch_taken_0x28a770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A770u;
        // 0x28a774: 0x8c520180  lw          $s2, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a770) {
            ctx->pc = 0x28A7A0u;
            goto label_28a7a0;
        }
    }
    ctx->pc = 0x28A778u;
label_28a778:
    // 0x28a778: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28a778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a77c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A77Cu;
    {
        const bool branch_taken_0x28a77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a77c) {
            ctx->pc = 0x28A7A0u;
            goto label_28a7a0;
        }
    }
    ctx->pc = 0x28A784u;
    // 0x28a784: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x28a784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x28a788: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A788u;
    {
        const bool branch_taken_0x28a788 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A788u;
        // 0x28a78c: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a788) {
            ctx->pc = 0x28A7A0u;
            goto label_28a7a0;
        }
    }
    ctx->pc = 0x28A790u;
    // 0x28a790: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x28a790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x28a794: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28a794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28a798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a79c: 0x8c520bcc  lw          $s2, 0xBCC($v0)
    ctx->pc = 0x28a79cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
label_28a7a0:
    // 0x28a7a0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28A7A0u;
    SET_GPR_U32(ctx, 31, 0x28A7A8u);
    ctx->pc = 0x28A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7A0u;
    // 0x28a7a4: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28A7A0u, 0x28A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7A8u;
label_28a7a8:
    // 0x28a7a8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28a7ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28a7b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28a7b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28A7B4u;
    {
        const bool branch_taken_0x28a7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a7b4) {
            ctx->pc = 0x28A7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A7B4u;
            // 0x28a7b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A7BCu;
            goto label_28a7bc;
        }
    }
    ctx->pc = 0x28A7BCu;
label_28a7bc:
    // 0x28a7bc: 0x2010  mfhi        $a0
    ctx->pc = 0x28a7bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x28a7c0: 0xc081546  jal         func_205518
    ctx->pc = 0x28A7C0u;
    SET_GPR_U32(ctx, 31, 0x28A7C8u);
    ctx->pc = 0x28A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7C0u;
    // 0x28a7c4: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28A7C0u, 0x28A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7C8u;
label_28a7c8:
    // 0x28a7c8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x28a7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a7cc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x28a7ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7d0: 0x26290030  addiu       $t1, $s1, 0x30
    ctx->pc = 0x28a7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28a7d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28a7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x28a7d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28a7dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7e4: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x28A7E4u;
    SET_GPR_U32(ctx, 31, 0x28A7ECu);
    ctx->pc = 0x28A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7E4u;
    // 0x28a7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x28A7E4u, 0x28A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7ECu;
label_28a7ec:
    // 0x28a7ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7f0: 0xc0a5f8c  jal         func_297E30
    ctx->pc = 0x28A7F0u;
    SET_GPR_U32(ctx, 31, 0x28A7F8u);
    ctx->pc = 0x28A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7F0u;
    // 0x28a7f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E30u, 0x28A7F0u, 0x28A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7F8u;
label_28a7f8:
    // 0x28a7f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a7fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28a7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a800: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x28a800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x28a804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a808: 0xc0a900a  jal         func_2A4028
    ctx->pc = 0x28A808u;
    SET_GPR_U32(ctx, 31, 0x28A810u);
    ctx->pc = 0x28A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A808u;
    // 0x28a80c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4028u, 0x28A808u, 0x28A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A810u;
label_28a810:
    // 0x28a810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a814: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28a814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a818: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28a818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a81c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28a81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a824: 0x80a2572  j           func_2895C8
    ctx->pc = 0x28A824u;
    ctx->pc = 0x28A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A824u;
    // 0x28a828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2895C8u;
    bulletFree_0x2895c8(rdram, ctx, runtime); return;
    ctx->pc = 0x28A82Cu;
}
