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

// Function: decalGetBulletTexScaleCol
// Address: 0x2a4758 - 0x2a4934
void decalGetBulletTexScaleCol_0x2a4758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalGetBulletTexScaleCol_0x2a4758");
#endif

    switch (ctx->pc) {
        case 0x2a4758u: goto label_2a4758;
        case 0x2a475cu: goto label_2a475c;
        case 0x2a4760u: goto label_2a4760;
        case 0x2a4764u: goto label_2a4764;
        case 0x2a4768u: goto label_2a4768;
        case 0x2a476cu: goto label_2a476c;
        case 0x2a4770u: goto label_2a4770;
        case 0x2a4774u: goto label_2a4774;
        case 0x2a4778u: goto label_2a4778;
        case 0x2a477cu: goto label_2a477c;
        case 0x2a4780u: goto label_2a4780;
        case 0x2a4784u: goto label_2a4784;
        case 0x2a4788u: goto label_2a4788;
        case 0x2a478cu: goto label_2a478c;
        case 0x2a4790u: goto label_2a4790;
        case 0x2a4794u: goto label_2a4794;
        case 0x2a4798u: goto label_2a4798;
        case 0x2a479cu: goto label_2a479c;
        case 0x2a47a0u: goto label_2a47a0;
        case 0x2a47a4u: goto label_2a47a4;
        case 0x2a47a8u: goto label_2a47a8;
        case 0x2a47acu: goto label_2a47ac;
        case 0x2a47b0u: goto label_2a47b0;
        case 0x2a47b4u: goto label_2a47b4;
        case 0x2a47b8u: goto label_2a47b8;
        case 0x2a47bcu: goto label_2a47bc;
        case 0x2a47c0u: goto label_2a47c0;
        case 0x2a47c4u: goto label_2a47c4;
        case 0x2a47c8u: goto label_2a47c8;
        case 0x2a47ccu: goto label_2a47cc;
        case 0x2a47d0u: goto label_2a47d0;
        case 0x2a47d4u: goto label_2a47d4;
        case 0x2a47d8u: goto label_2a47d8;
        case 0x2a47dcu: goto label_2a47dc;
        case 0x2a47e0u: goto label_2a47e0;
        case 0x2a47e4u: goto label_2a47e4;
        case 0x2a47e8u: goto label_2a47e8;
        case 0x2a47ecu: goto label_2a47ec;
        case 0x2a47f0u: goto label_2a47f0;
        case 0x2a47f4u: goto label_2a47f4;
        case 0x2a47f8u: goto label_2a47f8;
        case 0x2a47fcu: goto label_2a47fc;
        case 0x2a4800u: goto label_2a4800;
        case 0x2a4804u: goto label_2a4804;
        case 0x2a4808u: goto label_2a4808;
        case 0x2a480cu: goto label_2a480c;
        case 0x2a4810u: goto label_2a4810;
        case 0x2a4814u: goto label_2a4814;
        case 0x2a4818u: goto label_2a4818;
        case 0x2a481cu: goto label_2a481c;
        case 0x2a4820u: goto label_2a4820;
        case 0x2a4824u: goto label_2a4824;
        case 0x2a4828u: goto label_2a4828;
        case 0x2a482cu: goto label_2a482c;
        case 0x2a4830u: goto label_2a4830;
        case 0x2a4834u: goto label_2a4834;
        case 0x2a4838u: goto label_2a4838;
        case 0x2a483cu: goto label_2a483c;
        case 0x2a4840u: goto label_2a4840;
        case 0x2a4844u: goto label_2a4844;
        case 0x2a4848u: goto label_2a4848;
        case 0x2a484cu: goto label_2a484c;
        case 0x2a4850u: goto label_2a4850;
        case 0x2a4854u: goto label_2a4854;
        case 0x2a4858u: goto label_2a4858;
        case 0x2a485cu: goto label_2a485c;
        case 0x2a4860u: goto label_2a4860;
        case 0x2a4864u: goto label_2a4864;
        case 0x2a4868u: goto label_2a4868;
        case 0x2a486cu: goto label_2a486c;
        case 0x2a4870u: goto label_2a4870;
        case 0x2a4874u: goto label_2a4874;
        case 0x2a4878u: goto label_2a4878;
        case 0x2a487cu: goto label_2a487c;
        case 0x2a4880u: goto label_2a4880;
        case 0x2a4884u: goto label_2a4884;
        case 0x2a4888u: goto label_2a4888;
        case 0x2a488cu: goto label_2a488c;
        case 0x2a4890u: goto label_2a4890;
        case 0x2a4894u: goto label_2a4894;
        case 0x2a4898u: goto label_2a4898;
        case 0x2a489cu: goto label_2a489c;
        case 0x2a48a0u: goto label_2a48a0;
        case 0x2a48a4u: goto label_2a48a4;
        case 0x2a48a8u: goto label_2a48a8;
        case 0x2a48acu: goto label_2a48ac;
        case 0x2a48b0u: goto label_2a48b0;
        case 0x2a48b4u: goto label_2a48b4;
        case 0x2a48b8u: goto label_2a48b8;
        case 0x2a48bcu: goto label_2a48bc;
        case 0x2a48c0u: goto label_2a48c0;
        case 0x2a48c4u: goto label_2a48c4;
        case 0x2a48c8u: goto label_2a48c8;
        case 0x2a48ccu: goto label_2a48cc;
        case 0x2a48d0u: goto label_2a48d0;
        case 0x2a48d4u: goto label_2a48d4;
        case 0x2a48d8u: goto label_2a48d8;
        case 0x2a48dcu: goto label_2a48dc;
        case 0x2a48e0u: goto label_2a48e0;
        case 0x2a48e4u: goto label_2a48e4;
        case 0x2a48e8u: goto label_2a48e8;
        case 0x2a48ecu: goto label_2a48ec;
        case 0x2a48f0u: goto label_2a48f0;
        case 0x2a48f4u: goto label_2a48f4;
        case 0x2a48f8u: goto label_2a48f8;
        case 0x2a48fcu: goto label_2a48fc;
        case 0x2a4900u: goto label_2a4900;
        case 0x2a4904u: goto label_2a4904;
        case 0x2a4908u: goto label_2a4908;
        case 0x2a490cu: goto label_2a490c;
        case 0x2a4910u: goto label_2a4910;
        case 0x2a4914u: goto label_2a4914;
        case 0x2a4918u: goto label_2a4918;
        case 0x2a491cu: goto label_2a491c;
        case 0x2a4920u: goto label_2a4920;
        case 0x2a4924u: goto label_2a4924;
        case 0x2a4928u: goto label_2a4928;
        case 0x2a492cu: goto label_2a492c;
        case 0x2a4930u: goto label_2a4930;
        default: break;
    }

    ctx->pc = 0x2a4758u;

label_2a4758:
    // 0x2a4758: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a4758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a475c:
    // 0x2a475c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2a4760:
    // 0x2a4760: 0x2492fffe  addiu       $s2, $a0, -0x2
    ctx->pc = 0x2a4760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2a4764:
    // 0x2a4764: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a4764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2a4768:
    // 0x2a4768: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a4768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2a476c:
    // 0x2a476c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2a476cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a4770:
    // 0x2a4770: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a4770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a4774:
    // 0x2a4774: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a4774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a4778:
    // 0x2a4778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a477c:
    // 0x2a477c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a477cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a4780:
    // 0x2a4780: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a4780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a4784:
    // 0x2a4784: 0x2e420011  sltiu       $v0, $s2, 0x11
    ctx->pc = 0x2a4784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_2a4788:
    // 0x2a4788: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a478c:
    if (ctx->pc == 0x2A478Cu) {
        ctx->pc = 0x2A478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4788u;
        // 0x2a478c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4790u;
        goto label_2a4790;
    }
    ctx->pc = 0x2A4788u;
    {
        const bool branch_taken_0x2a4788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4788u;
        // 0x2a478c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4788) {
            ctx->pc = 0x2A47ACu;
            goto label_2a47ac;
        }
    }
    ctx->pc = 0x2A4790u;
label_2a4790:
    // 0x2a4790: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a4790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a4794:
    // 0x2a4794: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2a4794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2a4798:
    // 0x2a4798: 0x24429320  addiu       $v0, $v0, -0x6CE0
    ctx->pc = 0x2a4798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939424));
label_2a479c:
    // 0x2a479c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a47a0:
    // 0x2a47a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a47a4:
    // 0x2a47a4: 0x800008  jr          $a0
label_2a47a8:
    if (ctx->pc == 0x2A47A8u) {
        ctx->pc = 0x2A47ACu;
        goto label_2a47ac;
    }
    ctx->pc = 0x2A47A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A47ACu: goto label_2a47ac;
            case 0x2A47CCu: goto label_2a47cc;
            case 0x2A47E0u: goto label_2a47e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A47A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A47ACu;
label_2a47ac:
    // 0x2a47ac: 0xc0ada34  jal         func_2B68D0
label_2a47b0:
    if (ctx->pc == 0x2A47B0u) {
        ctx->pc = 0x2A47B4u;
        goto label_2a47b4;
    }
    ctx->pc = 0x2A47ACu;
    SET_GPR_U32(ctx, 31, 0x2A47B4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A47ACu, 0x2A47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47B4u;
label_2a47b4:
    // 0x2a47b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a47b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a47b8:
    // 0x2a47b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a47b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a47bc:
    // 0x2a47bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a47bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a47c0:
    // 0x2a47c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2a47c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2a47c4:
    // 0x2a47c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2a47c8:
    if (ctx->pc == 0x2A47C8u) {
        ctx->pc = 0x2A47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47C4u;
        // 0x2a47c8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47CCu;
        goto label_2a47cc;
    }
    ctx->pc = 0x2A47C4u;
    {
        const bool branch_taken_0x2a47c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47C4u;
        // 0x2a47c8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a47c4) {
            ctx->pc = 0x2A4810u;
            goto label_2a4810;
        }
    }
    ctx->pc = 0x2A47CCu;
label_2a47cc:
    // 0x2a47cc: 0xc0ada34  jal         func_2B68D0
label_2a47d0:
    if (ctx->pc == 0x2A47D0u) {
        ctx->pc = 0x2A47D4u;
        goto label_2a47d4;
    }
    ctx->pc = 0x2A47CCu;
    SET_GPR_U32(ctx, 31, 0x2A47D4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A47CCu, 0x2A47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47D4u;
label_2a47d4:
    // 0x2a47d4: 0xc7808dec  lwc1        $f0, -0x7214($gp)
    ctx->pc = 0x2a47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a47d8:
    // 0x2a47d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a47dc:
    if (ctx->pc == 0x2A47DCu) {
        ctx->pc = 0x2A47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47D8u;
        // 0x2a47dc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47E0u;
        goto label_2a47e0;
    }
    ctx->pc = 0x2A47D8u;
    {
        const bool branch_taken_0x2a47d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47D8u;
        // 0x2a47dc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a47d8) {
            ctx->pc = 0x2A47F4u;
            goto label_2a47f4;
        }
    }
    ctx->pc = 0x2A47E0u;
label_2a47e0:
    // 0x2a47e0: 0xc0ada34  jal         func_2B68D0
label_2a47e4:
    if (ctx->pc == 0x2A47E4u) {
        ctx->pc = 0x2A47E8u;
        goto label_2a47e8;
    }
    ctx->pc = 0x2A47E0u;
    SET_GPR_U32(ctx, 31, 0x2A47E8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A47E0u, 0x2A47E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47E8u;
label_2a47e8:
    // 0x2a47e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a47ec:
    // 0x2a47ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a47ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a47f0:
    // 0x2a47f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a47f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a47f4:
    // 0x2a47f4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a47f4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a47f8:
    // 0x2a47f8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a47fc:
    if (ctx->pc == 0x2A47FCu) {
        ctx->pc = 0x2A47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47F8u;
        // 0x2a47fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4800u;
        goto label_2a4800;
    }
    ctx->pc = 0x2A47F8u;
    {
        const bool branch_taken_0x2a47f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a47f8) {
            ctx->pc = 0x2A47FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A47F8u;
            // 0x2a47fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4800u;
            goto label_2a4800;
        }
    }
    ctx->pc = 0x2A4800u;
label_2a4800:
    // 0x2a4800: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2a4800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2a4804:
    // 0x2a4804: 0x2010  mfhi        $a0
    ctx->pc = 0x2a4804u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a4808:
    // 0x2a4808: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2a4808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_2a480c:
    // 0x2a480c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2a480cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2a4810:
    // 0x2a4810: 0x8f829f54  lw          $v0, -0x60AC($gp)
    ctx->pc = 0x2a4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
label_2a4814:
    // 0x2a4814: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x2a4814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
label_2a4818:
    // 0x2a4818: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x2a4818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
label_2a481c:
    // 0x2a481c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2a481cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2a4820:
    // 0x2a4820: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2a4824:
    // 0x2a4824: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a4828:
    // 0x2a4828: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2a482c:
    if (ctx->pc == 0x2A482Cu) {
        ctx->pc = 0x2A482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4828u;
        // 0x2a482c: 0x2e820011  sltiu       $v0, $s4, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4830u;
        goto label_2a4830;
    }
    ctx->pc = 0x2A4828u;
    {
        const bool branch_taken_0x2a4828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4828u;
        // 0x2a482c: 0x2e820011  sltiu       $v0, $s4, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4828) {
            ctx->pc = 0x2A4908u;
            goto label_2a4908;
        }
    }
    ctx->pc = 0x2A4830u;
label_2a4830:
    // 0x2a4830: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a4834:
    // 0x2a4834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a4834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a4838:
    // 0x2a4838: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a483c:
    if (ctx->pc == 0x2A483Cu) {
        ctx->pc = 0x2A483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4838u;
        // 0x2a483c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4840u;
        goto label_2a4840;
    }
    ctx->pc = 0x2A4838u;
    {
        const bool branch_taken_0x2a4838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4838u;
        // 0x2a483c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4838) {
            ctx->pc = 0x2A485Cu;
            goto label_2a485c;
        }
    }
    ctx->pc = 0x2A4840u;
label_2a4840:
    // 0x2a4840: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a4840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a4844:
    // 0x2a4844: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2a4844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2a4848:
    // 0x2a4848: 0x24429370  addiu       $v0, $v0, -0x6C90
    ctx->pc = 0x2a4848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939504));
label_2a484c:
    // 0x2a484c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a4850:
    // 0x2a4850: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a4850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a4854:
    // 0x2a4854: 0x800008  jr          $a0
label_2a4858:
    if (ctx->pc == 0x2A4858u) {
        ctx->pc = 0x2A485Cu;
        goto label_2a485c;
    }
    ctx->pc = 0x2A4854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4854u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A485Cu;
label_2a485c:
    // 0x2a485c: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x2a485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_2a4860:
    // 0x2a4860: 0x10000023  b           . + 4 + (0x23 << 2)
label_2a4864:
    if (ctx->pc == 0x2A4864u) {
        ctx->pc = 0x2A4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4860u;
        // 0x2a4864: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4868u;
        goto label_2a4868;
    }
    ctx->pc = 0x2A4860u;
    {
        const bool branch_taken_0x2a4860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4860u;
        // 0x2a4864: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4860) {
            ctx->pc = 0x2A48F0u;
            goto label_2a48f0;
        }
    }
    ctx->pc = 0x2A4868u;
label_2a4868:
    // 0x2a4868: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a4868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2a486c:
    // 0x2a486c: 0x34423f00  ori         $v0, $v0, 0x3F00
    ctx->pc = 0x2a486cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16128);
label_2a4870:
    // 0x2a4870: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2a4874:
    if (ctx->pc == 0x2A4874u) {
        ctx->pc = 0x2A4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4870u;
        // 0x2a4874: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4878u;
        goto label_2a4878;
    }
    ctx->pc = 0x2A4870u;
    {
        const bool branch_taken_0x2a4870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4870u;
        // 0x2a4874: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4870) {
            ctx->pc = 0x2A48F0u;
            goto label_2a48f0;
        }
    }
    ctx->pc = 0x2A4878u;
label_2a4878:
    // 0x2a4878: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a4878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2a487c:
    // 0x2a487c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2a4880:
    if (ctx->pc == 0x2A4880u) {
        ctx->pc = 0x2A4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A487Cu;
        // 0x2a4880: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4884u;
        goto label_2a4884;
    }
    ctx->pc = 0x2A487Cu;
    {
        const bool branch_taken_0x2a487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A487Cu;
        // 0x2a4880: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a487c) {
            ctx->pc = 0x2A48F0u;
            goto label_2a48f0;
        }
    }
    ctx->pc = 0x2A4884u;
label_2a4884:
    // 0x2a4884: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2a4884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4888:
    // 0x2a4888: 0x10000019  b           . + 4 + (0x19 << 2)
label_2a488c:
    if (ctx->pc == 0x2A488Cu) {
        ctx->pc = 0x2A488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4888u;
        // 0x2a488c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4890u;
        goto label_2a4890;
    }
    ctx->pc = 0x2A4888u;
    {
        const bool branch_taken_0x2a4888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4888u;
        // 0x2a488c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4888) {
            ctx->pc = 0x2A48F0u;
            goto label_2a48f0;
        }
    }
    ctx->pc = 0x2A4890u;
label_2a4890:
    // 0x2a4890: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x2a4890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_2a4894:
    // 0x2a4894: 0x10000016  b           . + 4 + (0x16 << 2)
label_2a4898:
    if (ctx->pc == 0x2A4898u) {
        ctx->pc = 0x2A4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4894u;
        // 0x2a4898: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A489Cu;
        goto label_2a489c;
    }
    ctx->pc = 0x2A4894u;
    {
        const bool branch_taken_0x2a4894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4894u;
        // 0x2a4898: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4894) {
            ctx->pc = 0x2A48F0u;
            goto label_2a48f0;
        }
    }
    ctx->pc = 0x2A489Cu;
label_2a489c:
    // 0x2a489c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a489cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2a48a0:
    // 0x2a48a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a48a4:
    if (ctx->pc == 0x2A48A4u) {
        ctx->pc = 0x2A48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48A0u;
        // 0x2a48a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48A8u;
        goto label_2a48a8;
    }
    ctx->pc = 0x2A48A0u;
    {
        const bool branch_taken_0x2a48a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48A0u;
        // 0x2a48a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48a0) {
            ctx->pc = 0x2A48F0u;
            goto label_2a48f0;
        }
    }
    ctx->pc = 0x2A48A8u;
label_2a48a8:
    // 0x2a48a8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2a48ac:
    // 0x2a48ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a48acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a48b0:
    // 0x2a48b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a48b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a48b4:
    // 0x2a48b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2a48b8:
    if (ctx->pc == 0x2A48B8u) {
        ctx->pc = 0x2A48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48B4u;
        // 0x2a48b8: 0x3442003f  ori         $v0, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48BCu;
        goto label_2a48bc;
    }
    ctx->pc = 0x2A48B4u;
    {
        const bool branch_taken_0x2a48b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48B4u;
        // 0x2a48b8: 0x3442003f  ori         $v0, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48b4) {
            ctx->pc = 0x2A48E8u;
            goto label_2a48e8;
        }
    }
    ctx->pc = 0x2A48BCu;
label_2a48bc:
    // 0x2a48bc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2a48c0:
    // 0x2a48c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a48c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a48c4:
    // 0x2a48c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a48c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a48c8:
    // 0x2a48c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a48cc:
    if (ctx->pc == 0x2A48CCu) {
        ctx->pc = 0x2A48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48C8u;
        // 0x2a48cc: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48D0u;
        goto label_2a48d0;
    }
    ctx->pc = 0x2A48C8u;
    {
        const bool branch_taken_0x2a48c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48C8u;
        // 0x2a48cc: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48c8) {
            ctx->pc = 0x2A48E8u;
            goto label_2a48e8;
        }
    }
    ctx->pc = 0x2A48D0u;
label_2a48d0:
    // 0x2a48d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a48d4:
    if (ctx->pc == 0x2A48D4u) {
        ctx->pc = 0x2A48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48D0u;
        // 0x2a48d4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48D8u;
        goto label_2a48d8;
    }
    ctx->pc = 0x2A48D0u;
    {
        const bool branch_taken_0x2a48d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48D0u;
        // 0x2a48d4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48d0) {
            ctx->pc = 0x2A48DCu;
            goto label_2a48dc;
        }
    }
    ctx->pc = 0x2A48D8u;
label_2a48d8:
    // 0x2a48d8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2a48dc:
    // 0x2a48dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a48dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a48e0:
    // 0x2a48e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a48e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a48e4:
    // 0x2a48e4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x2a48e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_2a48e8:
    // 0x2a48e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a48e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a48ec:
    // 0x2a48ec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2a48ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2a48f0:
    // 0x2a48f0: 0xc0ada34  jal         func_2B68D0
label_2a48f4:
    if (ctx->pc == 0x2A48F4u) {
        ctx->pc = 0x2A48F8u;
        goto label_2a48f8;
    }
    ctx->pc = 0x2A48F0u;
    SET_GPR_U32(ctx, 31, 0x2A48F8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A48F0u, 0x2A48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48F8u;
label_2a48f8:
    // 0x2a48f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a48f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a48fc:
    // 0x2a48fc: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2a48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_2a4900:
    // 0x2a4900: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a4904:
    if (ctx->pc == 0x2A4904u) {
        ctx->pc = 0x2A4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4900u;
        // 0x2a4904: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4908u;
        goto label_2a4908;
    }
    ctx->pc = 0x2A4900u;
    {
        const bool branch_taken_0x2a4900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4900u;
        // 0x2a4904: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4900) {
            ctx->pc = 0x2A4914u;
            goto label_2a4914;
        }
    }
    ctx->pc = 0x2A4908u;
label_2a4908:
    // 0x2a4908: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a4908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2a490c:
    // 0x2a490c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a490cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a4910:
    // 0x2a4910: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a4910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a4914:
    // 0x2a4914: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a4914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a4918:
    // 0x2a4918: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a4918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a491c:
    // 0x2a491c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a491cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a4920:
    // 0x2a4920: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a4920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4924:
    // 0x2a4924: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a4924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4928:
    // 0x2a4928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a492c:
    // 0x2a492c: 0x3e00008  jr          $ra
label_2a4930:
    if (ctx->pc == 0x2A4930u) {
        ctx->pc = 0x2A4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A492Cu;
        // 0x2a4930: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4934u;
        goto label_fallthrough_0x2a492c;
    }
    ctx->pc = 0x2A492Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A492Cu;
        // 0x2a4930: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A492Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a492c:
    ctx->pc = 0x2A4934u;
}
