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

// Function: StoryGetBriefing
// Address: 0x2114d8 - 0x21162c
void StoryGetBriefing_0x2114d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoryGetBriefing_0x2114d8");
#endif

    ctx->pc = 0x2114d8u;

    // 0x2114d8: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2114d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2114dc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2114dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2114e0: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x2114e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2114e4: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2114E4u;
    {
        const bool branch_taken_0x2114e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114E4u;
        // 0x2114e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114e4) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x2114ECu;
    // 0x2114ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2114ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2114f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2114f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2114f4: 0x2442a3c0  addiu       $v0, $v0, -0x5C40
    ctx->pc = 0x2114f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943680));
    // 0x2114f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2114f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2114fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2114fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211500: 0x800008  jr          $a0
    ctx->pc = 0x211500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211508u: goto label_211508;
            case 0x211528u: goto label_211528;
            case 0x211548u: goto label_211548;
            case 0x211568u: goto label_211568;
            case 0x211588u: goto label_211588;
            case 0x2115A8u: goto label_2115a8;
            case 0x2115C8u: goto label_2115c8;
            case 0x2115E8u: goto label_2115e8;
            case 0x211608u: goto label_211608;
            case 0x211624u: goto label_211624;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211500u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x211508u;
label_211508:
    // 0x211508: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21150c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21150cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x211510: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x211510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x211514: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21151c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211520: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x211520u;
    {
        const bool branch_taken_0x211520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211520u;
        // 0x211524: 0x8c851188  lw          $a1, 0x1188($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211520) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x211528u;
label_211528:
    // 0x211528: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21152c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21152cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x211530: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x211530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x211534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21153c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21153cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211540: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x211540u;
    {
        const bool branch_taken_0x211540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211540u;
        // 0x211544: 0x8c85118c  lw          $a1, 0x118C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211540) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x211548u;
label_211548:
    // 0x211548: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21154c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21154cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x211550: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x211550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x211554: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21155c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21155cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211560: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x211560u;
    {
        const bool branch_taken_0x211560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211560u;
        // 0x211564: 0x8c851190  lw          $a1, 0x1190($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211560) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x211568u;
label_211568:
    // 0x211568: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21156c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x211570: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x211574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21157c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211580: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x211580u;
    {
        const bool branch_taken_0x211580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211580u;
        // 0x211584: 0x8c851194  lw          $a1, 0x1194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211580) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x211588u;
label_211588:
    // 0x211588: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21158c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x211590: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x211590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x211594: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21159c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21159cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2115a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2115A0u;
    {
        const bool branch_taken_0x2115a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2115A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115A0u;
        // 0x2115a4: 0x8c851198  lw          $a1, 0x1198($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115a0) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x2115A8u;
label_2115a8:
    // 0x2115a8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2115a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2115ac: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2115acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2115b0: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2115b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2115b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2115b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2115b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2115b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2115bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2115bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2115c0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2115C0u;
    {
        const bool branch_taken_0x2115c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2115C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115C0u;
        // 0x2115c4: 0x8c85119c  lw          $a1, 0x119C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115c0) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x2115C8u;
label_2115c8:
    // 0x2115c8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2115c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2115cc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2115ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2115d0: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2115d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2115d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2115d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2115d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2115d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2115dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2115dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2115e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2115E0u;
    {
        const bool branch_taken_0x2115e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115E0u;
        // 0x2115e4: 0x8c8511a0  lw          $a1, 0x11A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115e0) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x2115E8u;
label_2115e8:
    // 0x2115e8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2115e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2115ec: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2115ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2115f0: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2115f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2115f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2115f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2115f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2115f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2115fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2115fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211600: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x211600u;
    {
        const bool branch_taken_0x211600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211600u;
        // 0x211604: 0x8c8511a4  lw          $a1, 0x11A4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211600) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x211608u;
label_211608:
    // 0x211608: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21160c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21160cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x211610: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x211610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x211614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21161c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21161cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211620: 0x8c8511a8  lw          $a1, 0x11A8($a0)
    ctx->pc = 0x211620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4520)));
label_211624:
    // 0x211624: 0x3e00008  jr          $ra
    ctx->pc = 0x211624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211624u;
        // 0x211628: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21162Cu;
}
