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

// Function: __sfvwrite
// Address: 0x2eb708 - 0x2ebae0
void ps2___sfvwrite_0x2eb708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfvwrite_0x2eb708");
#endif

    switch (ctx->pc) {
        case 0x2eb708u: goto label_2eb708;
        case 0x2eb70cu: goto label_2eb70c;
        case 0x2eb710u: goto label_2eb710;
        case 0x2eb714u: goto label_2eb714;
        case 0x2eb718u: goto label_2eb718;
        case 0x2eb71cu: goto label_2eb71c;
        case 0x2eb720u: goto label_2eb720;
        case 0x2eb724u: goto label_2eb724;
        case 0x2eb728u: goto label_2eb728;
        case 0x2eb72cu: goto label_2eb72c;
        case 0x2eb730u: goto label_2eb730;
        case 0x2eb734u: goto label_2eb734;
        case 0x2eb738u: goto label_2eb738;
        case 0x2eb73cu: goto label_2eb73c;
        case 0x2eb740u: goto label_2eb740;
        case 0x2eb744u: goto label_2eb744;
        case 0x2eb748u: goto label_2eb748;
        case 0x2eb74cu: goto label_2eb74c;
        case 0x2eb750u: goto label_2eb750;
        case 0x2eb754u: goto label_2eb754;
        case 0x2eb758u: goto label_2eb758;
        case 0x2eb75cu: goto label_2eb75c;
        case 0x2eb760u: goto label_2eb760;
        case 0x2eb764u: goto label_2eb764;
        case 0x2eb768u: goto label_2eb768;
        case 0x2eb76cu: goto label_2eb76c;
        case 0x2eb770u: goto label_2eb770;
        case 0x2eb774u: goto label_2eb774;
        case 0x2eb778u: goto label_2eb778;
        case 0x2eb77cu: goto label_2eb77c;
        case 0x2eb780u: goto label_2eb780;
        case 0x2eb784u: goto label_2eb784;
        case 0x2eb788u: goto label_2eb788;
        case 0x2eb78cu: goto label_2eb78c;
        case 0x2eb790u: goto label_2eb790;
        case 0x2eb794u: goto label_2eb794;
        case 0x2eb798u: goto label_2eb798;
        case 0x2eb79cu: goto label_2eb79c;
        case 0x2eb7a0u: goto label_2eb7a0;
        case 0x2eb7a4u: goto label_2eb7a4;
        case 0x2eb7a8u: goto label_2eb7a8;
        case 0x2eb7acu: goto label_2eb7ac;
        case 0x2eb7b0u: goto label_2eb7b0;
        case 0x2eb7b4u: goto label_2eb7b4;
        case 0x2eb7b8u: goto label_2eb7b8;
        case 0x2eb7bcu: goto label_2eb7bc;
        case 0x2eb7c0u: goto label_2eb7c0;
        case 0x2eb7c4u: goto label_2eb7c4;
        case 0x2eb7c8u: goto label_2eb7c8;
        case 0x2eb7ccu: goto label_2eb7cc;
        case 0x2eb7d0u: goto label_2eb7d0;
        case 0x2eb7d4u: goto label_2eb7d4;
        case 0x2eb7d8u: goto label_2eb7d8;
        case 0x2eb7dcu: goto label_2eb7dc;
        case 0x2eb7e0u: goto label_2eb7e0;
        case 0x2eb7e4u: goto label_2eb7e4;
        case 0x2eb7e8u: goto label_2eb7e8;
        case 0x2eb7ecu: goto label_2eb7ec;
        case 0x2eb7f0u: goto label_2eb7f0;
        case 0x2eb7f4u: goto label_2eb7f4;
        case 0x2eb7f8u: goto label_2eb7f8;
        case 0x2eb7fcu: goto label_2eb7fc;
        case 0x2eb800u: goto label_2eb800;
        case 0x2eb804u: goto label_2eb804;
        case 0x2eb808u: goto label_2eb808;
        case 0x2eb80cu: goto label_2eb80c;
        case 0x2eb810u: goto label_2eb810;
        case 0x2eb814u: goto label_2eb814;
        case 0x2eb818u: goto label_2eb818;
        case 0x2eb81cu: goto label_2eb81c;
        case 0x2eb820u: goto label_2eb820;
        case 0x2eb824u: goto label_2eb824;
        case 0x2eb828u: goto label_2eb828;
        case 0x2eb82cu: goto label_2eb82c;
        case 0x2eb830u: goto label_2eb830;
        case 0x2eb834u: goto label_2eb834;
        case 0x2eb838u: goto label_2eb838;
        case 0x2eb83cu: goto label_2eb83c;
        case 0x2eb840u: goto label_2eb840;
        case 0x2eb844u: goto label_2eb844;
        case 0x2eb848u: goto label_2eb848;
        case 0x2eb84cu: goto label_2eb84c;
        case 0x2eb850u: goto label_2eb850;
        case 0x2eb854u: goto label_2eb854;
        case 0x2eb858u: goto label_2eb858;
        case 0x2eb85cu: goto label_2eb85c;
        case 0x2eb860u: goto label_2eb860;
        case 0x2eb864u: goto label_2eb864;
        case 0x2eb868u: goto label_2eb868;
        case 0x2eb86cu: goto label_2eb86c;
        case 0x2eb870u: goto label_2eb870;
        case 0x2eb874u: goto label_2eb874;
        case 0x2eb878u: goto label_2eb878;
        case 0x2eb87cu: goto label_2eb87c;
        case 0x2eb880u: goto label_2eb880;
        case 0x2eb884u: goto label_2eb884;
        case 0x2eb888u: goto label_2eb888;
        case 0x2eb88cu: goto label_2eb88c;
        case 0x2eb890u: goto label_2eb890;
        case 0x2eb894u: goto label_2eb894;
        case 0x2eb898u: goto label_2eb898;
        case 0x2eb89cu: goto label_2eb89c;
        case 0x2eb8a0u: goto label_2eb8a0;
        case 0x2eb8a4u: goto label_2eb8a4;
        case 0x2eb8a8u: goto label_2eb8a8;
        case 0x2eb8acu: goto label_2eb8ac;
        case 0x2eb8b0u: goto label_2eb8b0;
        case 0x2eb8b4u: goto label_2eb8b4;
        case 0x2eb8b8u: goto label_2eb8b8;
        case 0x2eb8bcu: goto label_2eb8bc;
        case 0x2eb8c0u: goto label_2eb8c0;
        case 0x2eb8c4u: goto label_2eb8c4;
        case 0x2eb8c8u: goto label_2eb8c8;
        case 0x2eb8ccu: goto label_2eb8cc;
        case 0x2eb8d0u: goto label_2eb8d0;
        case 0x2eb8d4u: goto label_2eb8d4;
        case 0x2eb8d8u: goto label_2eb8d8;
        case 0x2eb8dcu: goto label_2eb8dc;
        case 0x2eb8e0u: goto label_2eb8e0;
        case 0x2eb8e4u: goto label_2eb8e4;
        case 0x2eb8e8u: goto label_2eb8e8;
        case 0x2eb8ecu: goto label_2eb8ec;
        case 0x2eb8f0u: goto label_2eb8f0;
        case 0x2eb8f4u: goto label_2eb8f4;
        case 0x2eb8f8u: goto label_2eb8f8;
        case 0x2eb8fcu: goto label_2eb8fc;
        case 0x2eb900u: goto label_2eb900;
        case 0x2eb904u: goto label_2eb904;
        case 0x2eb908u: goto label_2eb908;
        case 0x2eb90cu: goto label_2eb90c;
        case 0x2eb910u: goto label_2eb910;
        case 0x2eb914u: goto label_2eb914;
        case 0x2eb918u: goto label_2eb918;
        case 0x2eb91cu: goto label_2eb91c;
        case 0x2eb920u: goto label_2eb920;
        case 0x2eb924u: goto label_2eb924;
        case 0x2eb928u: goto label_2eb928;
        case 0x2eb92cu: goto label_2eb92c;
        case 0x2eb930u: goto label_2eb930;
        case 0x2eb934u: goto label_2eb934;
        case 0x2eb938u: goto label_2eb938;
        case 0x2eb93cu: goto label_2eb93c;
        case 0x2eb940u: goto label_2eb940;
        case 0x2eb944u: goto label_2eb944;
        case 0x2eb948u: goto label_2eb948;
        case 0x2eb94cu: goto label_2eb94c;
        case 0x2eb950u: goto label_2eb950;
        case 0x2eb954u: goto label_2eb954;
        case 0x2eb958u: goto label_2eb958;
        case 0x2eb95cu: goto label_2eb95c;
        case 0x2eb960u: goto label_2eb960;
        case 0x2eb964u: goto label_2eb964;
        case 0x2eb968u: goto label_2eb968;
        case 0x2eb96cu: goto label_2eb96c;
        case 0x2eb970u: goto label_2eb970;
        case 0x2eb974u: goto label_2eb974;
        case 0x2eb978u: goto label_2eb978;
        case 0x2eb97cu: goto label_2eb97c;
        case 0x2eb980u: goto label_2eb980;
        case 0x2eb984u: goto label_2eb984;
        case 0x2eb988u: goto label_2eb988;
        case 0x2eb98cu: goto label_2eb98c;
        case 0x2eb990u: goto label_2eb990;
        case 0x2eb994u: goto label_2eb994;
        case 0x2eb998u: goto label_2eb998;
        case 0x2eb99cu: goto label_2eb99c;
        case 0x2eb9a0u: goto label_2eb9a0;
        case 0x2eb9a4u: goto label_2eb9a4;
        case 0x2eb9a8u: goto label_2eb9a8;
        case 0x2eb9acu: goto label_2eb9ac;
        case 0x2eb9b0u: goto label_2eb9b0;
        case 0x2eb9b4u: goto label_2eb9b4;
        case 0x2eb9b8u: goto label_2eb9b8;
        case 0x2eb9bcu: goto label_2eb9bc;
        case 0x2eb9c0u: goto label_2eb9c0;
        case 0x2eb9c4u: goto label_2eb9c4;
        case 0x2eb9c8u: goto label_2eb9c8;
        case 0x2eb9ccu: goto label_2eb9cc;
        case 0x2eb9d0u: goto label_2eb9d0;
        case 0x2eb9d4u: goto label_2eb9d4;
        case 0x2eb9d8u: goto label_2eb9d8;
        case 0x2eb9dcu: goto label_2eb9dc;
        case 0x2eb9e0u: goto label_2eb9e0;
        case 0x2eb9e4u: goto label_2eb9e4;
        case 0x2eb9e8u: goto label_2eb9e8;
        case 0x2eb9ecu: goto label_2eb9ec;
        case 0x2eb9f0u: goto label_2eb9f0;
        case 0x2eb9f4u: goto label_2eb9f4;
        case 0x2eb9f8u: goto label_2eb9f8;
        case 0x2eb9fcu: goto label_2eb9fc;
        case 0x2eba00u: goto label_2eba00;
        case 0x2eba04u: goto label_2eba04;
        case 0x2eba08u: goto label_2eba08;
        case 0x2eba0cu: goto label_2eba0c;
        case 0x2eba10u: goto label_2eba10;
        case 0x2eba14u: goto label_2eba14;
        case 0x2eba18u: goto label_2eba18;
        case 0x2eba1cu: goto label_2eba1c;
        case 0x2eba20u: goto label_2eba20;
        case 0x2eba24u: goto label_2eba24;
        case 0x2eba28u: goto label_2eba28;
        case 0x2eba2cu: goto label_2eba2c;
        case 0x2eba30u: goto label_2eba30;
        case 0x2eba34u: goto label_2eba34;
        case 0x2eba38u: goto label_2eba38;
        case 0x2eba3cu: goto label_2eba3c;
        case 0x2eba40u: goto label_2eba40;
        case 0x2eba44u: goto label_2eba44;
        case 0x2eba48u: goto label_2eba48;
        case 0x2eba4cu: goto label_2eba4c;
        case 0x2eba50u: goto label_2eba50;
        case 0x2eba54u: goto label_2eba54;
        case 0x2eba58u: goto label_2eba58;
        case 0x2eba5cu: goto label_2eba5c;
        case 0x2eba60u: goto label_2eba60;
        case 0x2eba64u: goto label_2eba64;
        case 0x2eba68u: goto label_2eba68;
        case 0x2eba6cu: goto label_2eba6c;
        case 0x2eba70u: goto label_2eba70;
        case 0x2eba74u: goto label_2eba74;
        case 0x2eba78u: goto label_2eba78;
        case 0x2eba7cu: goto label_2eba7c;
        case 0x2eba80u: goto label_2eba80;
        case 0x2eba84u: goto label_2eba84;
        case 0x2eba88u: goto label_2eba88;
        case 0x2eba8cu: goto label_2eba8c;
        case 0x2eba90u: goto label_2eba90;
        case 0x2eba94u: goto label_2eba94;
        case 0x2eba98u: goto label_2eba98;
        case 0x2eba9cu: goto label_2eba9c;
        case 0x2ebaa0u: goto label_2ebaa0;
        case 0x2ebaa4u: goto label_2ebaa4;
        case 0x2ebaa8u: goto label_2ebaa8;
        case 0x2ebaacu: goto label_2ebaac;
        case 0x2ebab0u: goto label_2ebab0;
        case 0x2ebab4u: goto label_2ebab4;
        case 0x2ebab8u: goto label_2ebab8;
        case 0x2ebabcu: goto label_2ebabc;
        case 0x2ebac0u: goto label_2ebac0;
        case 0x2ebac4u: goto label_2ebac4;
        case 0x2ebac8u: goto label_2ebac8;
        case 0x2ebaccu: goto label_2ebacc;
        case 0x2ebad0u: goto label_2ebad0;
        case 0x2ebad4u: goto label_2ebad4;
        case 0x2ebad8u: goto label_2ebad8;
        case 0x2ebadcu: goto label_2ebadc;
        default: break;
    }

    ctx->pc = 0x2eb708u;

label_2eb708:
    // 0x2eb708: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2eb708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2eb70c:
    // 0x2eb70c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2eb70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2eb710:
    // 0x2eb710: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2eb710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2eb714:
    // 0x2eb714: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2eb714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2eb718:
    // 0x2eb718: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2eb718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2eb71c:
    // 0x2eb71c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2eb71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2eb720:
    // 0x2eb720: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2eb720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2eb724:
    // 0x2eb724: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2eb724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2eb728:
    // 0x2eb728: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2eb728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2eb72c:
    // 0x2eb72c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eb730:
    // 0x2eb730: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2eb730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2eb734:
    // 0x2eb734: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x2eb734u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2eb738:
    // 0x2eb738: 0x124000d8  beqz        $s2, . + 4 + (0xD8 << 2)
label_2eb73c:
    if (ctx->pc == 0x2EB73Cu) {
        ctx->pc = 0x2EB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB738u;
        // 0x2eb73c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB740u;
        goto label_2eb740;
    }
    ctx->pc = 0x2EB738u;
    {
        const bool branch_taken_0x2eb738 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB738u;
        // 0x2eb73c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb738) {
            ctx->pc = 0x2EBA9Cu;
            goto label_2eba9c;
        }
    }
    ctx->pc = 0x2EB740u;
label_2eb740:
    // 0x2eb740: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2eb740u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2eb744:
    // 0x2eb744: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2eb744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2eb748:
    // 0x2eb748: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2eb74c:
    if (ctx->pc == 0x2EB74Cu) {
        ctx->pc = 0x2EB750u;
        goto label_2eb750;
    }
    ctx->pc = 0x2EB748u;
    {
        const bool branch_taken_0x2eb748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb748) {
            ctx->pc = 0x2EB75Cu;
            goto label_2eb75c;
        }
    }
    ctx->pc = 0x2EB750u;
label_2eb750:
    // 0x2eb750: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2eb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb754:
    // 0x2eb754: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2eb758:
    if (ctx->pc == 0x2EB758u) {
        ctx->pc = 0x2EB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB754u;
        // 0x2eb758: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB75Cu;
        goto label_2eb75c;
    }
    ctx->pc = 0x2EB754u;
    {
        const bool branch_taken_0x2eb754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb754) {
            ctx->pc = 0x2EB758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB754u;
            // 0x2eb758: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB774u;
            goto label_2eb774;
        }
    }
    ctx->pc = 0x2EB75Cu;
label_2eb75c:
    // 0x2eb75c: 0xc0ba6b0  jal         func_2E9AC0
label_2eb760:
    if (ctx->pc == 0x2EB760u) {
        ctx->pc = 0x2EB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB75Cu;
        // 0x2eb760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB764u;
        goto label_2eb764;
    }
    ctx->pc = 0x2EB75Cu;
    SET_GPR_U32(ctx, 31, 0x2EB764u);
    ctx->pc = 0x2EB760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB75Cu;
    // 0x2eb760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9AC0u, 0x2EB75Cu, 0x2EB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB764u;
label_2eb764:
    // 0x2eb764: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
label_2eb768:
    if (ctx->pc == 0x2EB768u) {
        ctx->pc = 0x2EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB764u;
        // 0x2eb768: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB76Cu;
        goto label_2eb76c;
    }
    ctx->pc = 0x2EB764u;
    {
        const bool branch_taken_0x2eb764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB764u;
        // 0x2eb768: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb764) {
            ctx->pc = 0x2EBAB4u;
            goto label_2ebab4;
        }
    }
    ctx->pc = 0x2EB76Cu;
label_2eb76c:
    // 0x2eb76c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2eb76cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2eb770:
    // 0x2eb770: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x2eb770u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2eb774:
    // 0x2eb774: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2eb774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2eb778:
    // 0x2eb778: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2eb77c:
    if (ctx->pc == 0x2EB77Cu) {
        ctx->pc = 0x2EB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB778u;
        // 0x2eb77c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB780u;
        goto label_2eb780;
    }
    ctx->pc = 0x2EB778u;
    {
        const bool branch_taken_0x2eb778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB778u;
        // 0x2eb77c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb778) {
            ctx->pc = 0x2EB7F4u;
            goto label_2eb7f4;
        }
    }
    ctx->pc = 0x2EB780u;
label_2eb780:
    // 0x2eb780: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x2eb780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2eb784:
    // 0x2eb784: 0x0  nop
    ctx->pc = 0x2eb784u;
    // NOP
label_2eb788:
    // 0x2eb788: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_2eb78c:
    if (ctx->pc == 0x2EB78Cu) {
        ctx->pc = 0x2EB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB788u;
        // 0x2eb78c: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB790u;
        goto label_2eb790;
    }
    ctx->pc = 0x2EB788u;
    {
        const bool branch_taken_0x2eb788 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB788u;
        // 0x2eb78c: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb788) {
            ctx->pc = 0x2EB7B4u;
            goto label_2eb7b4;
        }
    }
    ctx->pc = 0x2EB790u;
label_2eb790:
    // 0x2eb790: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2eb790u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2eb794:
    // 0x2eb794: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2eb794u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2eb798:
    // 0x2eb798: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2eb798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_2eb79c:
    // 0x2eb79c: 0x0  nop
    ctx->pc = 0x2eb79cu;
    // NOP
label_2eb7a0:
    // 0x2eb7a0: 0x0  nop
    ctx->pc = 0x2eb7a0u;
    // NOP
label_2eb7a4:
    // 0x2eb7a4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_2eb7a8:
    if (ctx->pc == 0x2EB7A8u) {
        ctx->pc = 0x2EB7ACu;
        goto label_2eb7ac;
    }
    ctx->pc = 0x2EB7A4u;
    {
        const bool branch_taken_0x2eb7a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7a4) {
            ctx->pc = 0x2EB790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb790;
        }
    }
    ctx->pc = 0x2EB7ACu;
label_2eb7ac:
    // 0x2eb7ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_2eb7b0:
    if (ctx->pc == 0x2EB7B0u) {
        ctx->pc = 0x2EB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7ACu;
        // 0x2eb7b0: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7B4u;
        goto label_2eb7b4;
    }
    ctx->pc = 0x2EB7ACu;
    {
        const bool branch_taken_0x2eb7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7ACu;
        // 0x2eb7b0: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7ac) {
            ctx->pc = 0x2EB7B8u;
            goto label_2eb7b8;
        }
    }
    ctx->pc = 0x2EB7B4u;
label_2eb7b4:
    // 0x2eb7b4: 0x2e420401  sltiu       $v0, $s2, 0x401
    ctx->pc = 0x2eb7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_2eb7b8:
    // 0x2eb7b8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2eb7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2eb7bc:
    // 0x2eb7bc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2eb7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2eb7c0:
    // 0x2eb7c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb7c4:
    // 0x2eb7c4: 0x60f809  jalr        $v1
label_2eb7c8:
    if (ctx->pc == 0x2EB7C8u) {
        ctx->pc = 0x2EB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7C4u;
        // 0x2eb7c8: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7CCu;
        goto label_2eb7cc;
    }
    ctx->pc = 0x2EB7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EB7CCu);
        ctx->pc = 0x2EB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7C4u;
        // 0x2eb7c8: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB7C4u, 0x2EB7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB7CCu;
label_2eb7cc:
    // 0x2eb7cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb7d0:
    // 0x2eb7d0: 0x1a0000b4  blez        $s0, . + 4 + (0xB4 << 2)
label_2eb7d4:
    if (ctx->pc == 0x2EB7D4u) {
        ctx->pc = 0x2EB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7D0u;
        // 0x2eb7d4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7D8u;
        goto label_2eb7d8;
    }
    ctx->pc = 0x2EB7D0u;
    {
        const bool branch_taken_0x2eb7d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2EB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7D0u;
        // 0x2eb7d4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7d0) {
            ctx->pc = 0x2EBAA4u;
            goto label_2ebaa4;
        }
    }
    ctx->pc = 0x2EB7D8u;
label_2eb7d8:
    // 0x2eb7d8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2eb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2eb7dc:
    // 0x2eb7dc: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2eb7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2eb7e0:
    // 0x2eb7e0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2eb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2eb7e4:
    // 0x2eb7e4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2eb7e8:
    if (ctx->pc == 0x2EB7E8u) {
        ctx->pc = 0x2EB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7E4u;
        // 0x2eb7e8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7ECu;
        goto label_2eb7ec;
    }
    ctx->pc = 0x2EB7E4u;
    {
        const bool branch_taken_0x2eb7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7E4u;
        // 0x2eb7e8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7e4) {
            ctx->pc = 0x2EB788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb788;
        }
    }
    ctx->pc = 0x2EB7ECu;
label_2eb7ec:
    // 0x2eb7ec: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_2eb7f0:
    if (ctx->pc == 0x2EB7F0u) {
        ctx->pc = 0x2EB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7ECu;
        // 0x2eb7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB7F4u;
        goto label_2eb7f4;
    }
    ctx->pc = 0x2EB7ECu;
    {
        const bool branch_taken_0x2eb7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7ECu;
        // 0x2eb7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7ec) {
            ctx->pc = 0x2EBAB4u;
            goto label_2ebab4;
        }
    }
    ctx->pc = 0x2EB7F4u;
label_2eb7f4:
    // 0x2eb7f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2eb7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2eb7f8:
    // 0x2eb7f8: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_2eb7fc:
    if (ctx->pc == 0x2EB7FCu) {
        ctx->pc = 0x2EB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F8u;
        // 0x2eb7fc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB800u;
        goto label_2eb800;
    }
    ctx->pc = 0x2EB7F8u;
    {
        const bool branch_taken_0x2eb7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F8u;
        // 0x2eb7fc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7f8) {
            ctx->pc = 0x2EB948u;
            goto label_2eb948;
        }
    }
    ctx->pc = 0x2EB800u;
label_2eb800:
    // 0x2eb800: 0x10000002  b           . + 4 + (0x2 << 2)
label_2eb804:
    if (ctx->pc == 0x2EB804u) {
        ctx->pc = 0x2EB808u;
        goto label_2eb808;
    }
    ctx->pc = 0x2EB800u;
    {
        const bool branch_taken_0x2eb800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb800) {
            ctx->pc = 0x2EB80Cu;
            goto label_2eb80c;
        }
    }
    ctx->pc = 0x2EB808u;
label_2eb808:
    // 0x2eb808: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2eb808u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2eb80c:
    // 0x2eb80c: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
label_2eb810:
    if (ctx->pc == 0x2EB810u) {
        ctx->pc = 0x2EB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB80Cu;
        // 0x2eb810: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB814u;
        goto label_2eb814;
    }
    ctx->pc = 0x2EB80Cu;
    {
        const bool branch_taken_0x2eb80c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB80Cu;
        // 0x2eb810: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb80c) {
            ctx->pc = 0x2EB83Cu;
            goto label_2eb83c;
        }
    }
    ctx->pc = 0x2EB814u;
label_2eb814:
    // 0x2eb814: 0x0  nop
    ctx->pc = 0x2eb814u;
    // NOP
label_2eb818:
    // 0x2eb818: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2eb818u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2eb81c:
    // 0x2eb81c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2eb81cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2eb820:
    // 0x2eb820: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2eb820u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_2eb824:
    // 0x2eb824: 0x0  nop
    ctx->pc = 0x2eb824u;
    // NOP
label_2eb828:
    // 0x2eb828: 0x0  nop
    ctx->pc = 0x2eb828u;
    // NOP
label_2eb82c:
    // 0x2eb82c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_2eb830:
    if (ctx->pc == 0x2EB830u) {
        ctx->pc = 0x2EB834u;
        goto label_2eb834;
    }
    ctx->pc = 0x2EB82Cu;
    {
        const bool branch_taken_0x2eb82c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb82c) {
            ctx->pc = 0x2EB818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb818;
        }
    }
    ctx->pc = 0x2EB834u;
label_2eb834:
    // 0x2eb834: 0x10000002  b           . + 4 + (0x2 << 2)
label_2eb838:
    if (ctx->pc == 0x2EB838u) {
        ctx->pc = 0x2EB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB834u;
        // 0x2eb838: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB83Cu;
        goto label_2eb83c;
    }
    ctx->pc = 0x2EB834u;
    {
        const bool branch_taken_0x2eb834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB834u;
        // 0x2eb838: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb834) {
            ctx->pc = 0x2EB840u;
            goto label_2eb840;
        }
    }
    ctx->pc = 0x2EB83Cu;
label_2eb83c:
    // 0x2eb83c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb840:
    // 0x2eb840: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2eb840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2eb844:
    // 0x2eb844: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2eb848:
    if (ctx->pc == 0x2EB848u) {
        ctx->pc = 0x2EB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB844u;
        // 0x2eb848: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB84Cu;
        goto label_2eb84c;
    }
    ctx->pc = 0x2EB844u;
    {
        const bool branch_taken_0x2eb844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB844u;
        // 0x2eb848: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb844) {
            ctx->pc = 0x2EB880u;
            goto label_2eb880;
        }
    }
    ctx->pc = 0x2EB84Cu;
label_2eb84c:
    // 0x2eb84c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb850:
    // 0x2eb850: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x2eb850u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_2eb854:
    // 0x2eb854: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb858:
    // 0x2eb858: 0xc0b9542  jal         func_2E5508
label_2eb85c:
    if (ctx->pc == 0x2EB85Cu) {
        ctx->pc = 0x2EB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB858u;
        // 0x2eb85c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB860u;
        goto label_2eb860;
    }
    ctx->pc = 0x2EB858u;
    SET_GPR_U32(ctx, 31, 0x2EB860u);
    ctx->pc = 0x2EB85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB858u;
    // 0x2eb85c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5508u, 0x2EB858u, 0x2EB860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB860u;
label_2eb860:
    // 0x2eb860: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2eb860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2eb864:
    // 0x2eb864: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb868:
    // 0x2eb868: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2eb868u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2eb86c:
    // 0x2eb86c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2eb86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2eb870:
    // 0x2eb870: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2eb870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2eb874:
    // 0x2eb874: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2eb874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2eb878:
    // 0x2eb878: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2eb87c:
    if (ctx->pc == 0x2EB87Cu) {
        ctx->pc = 0x2EB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB878u;
        // 0x2eb87c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB880u;
        goto label_2eb880;
    }
    ctx->pc = 0x2EB878u;
    {
        const bool branch_taken_0x2eb878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB878u;
        // 0x2eb87c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb878) {
            ctx->pc = 0x2EB928u;
            goto label_2eb928;
        }
    }
    ctx->pc = 0x2EB880u;
label_2eb880:
    // 0x2eb880: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb884:
    // 0x2eb884: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2eb884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb888:
    // 0x2eb888: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2eb888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2eb88c:
    // 0x2eb88c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2eb890:
    if (ctx->pc == 0x2EB890u) {
        ctx->pc = 0x2EB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB88Cu;
        // 0x2eb890: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB894u;
        goto label_2eb894;
    }
    ctx->pc = 0x2EB88Cu;
    {
        const bool branch_taken_0x2eb88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB88Cu;
        // 0x2eb890: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb88c) {
            ctx->pc = 0x2EB8C8u;
            goto label_2eb8c8;
        }
    }
    ctx->pc = 0x2EB894u;
label_2eb894:
    // 0x2eb894: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2eb898:
    if (ctx->pc == 0x2EB898u) {
        ctx->pc = 0x2EB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB894u;
        // 0x2eb898: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB89Cu;
        goto label_2eb89c;
    }
    ctx->pc = 0x2EB894u;
    {
        const bool branch_taken_0x2eb894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB894u;
        // 0x2eb898: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb894) {
            ctx->pc = 0x2EB8C8u;
            goto label_2eb8c8;
        }
    }
    ctx->pc = 0x2EB89Cu;
label_2eb89c:
    // 0x2eb89c: 0xc0b9542  jal         func_2E5508
label_2eb8a0:
    if (ctx->pc == 0x2EB8A0u) {
        ctx->pc = 0x2EB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB89Cu;
        // 0x2eb8a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8A4u;
        goto label_2eb8a4;
    }
    ctx->pc = 0x2EB89Cu;
    SET_GPR_U32(ctx, 31, 0x2EB8A4u);
    ctx->pc = 0x2EB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB89Cu;
    // 0x2eb8a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5508u, 0x2EB89Cu, 0x2EB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB8A4u;
label_2eb8a4:
    // 0x2eb8a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2eb8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb8a8:
    // 0x2eb8a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb8ac:
    // 0x2eb8ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2eb8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2eb8b0:
    // 0x2eb8b0: 0xc0bac14  jal         func_2EB050
label_2eb8b4:
    if (ctx->pc == 0x2EB8B4u) {
        ctx->pc = 0x2EB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8B0u;
        // 0x2eb8b4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8B8u;
        goto label_2eb8b8;
    }
    ctx->pc = 0x2EB8B0u;
    SET_GPR_U32(ctx, 31, 0x2EB8B8u);
    ctx->pc = 0x2EB8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8B0u;
    // 0x2eb8b4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB050u, 0x2EB8B0u, 0x2EB8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB8B8u;
label_2eb8b8:
    // 0x2eb8b8: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
label_2eb8bc:
    if (ctx->pc == 0x2EB8BCu) {
        ctx->pc = 0x2EB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8B8u;
        // 0x2eb8bc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8C0u;
        goto label_2eb8c0;
    }
    ctx->pc = 0x2EB8B8u;
    {
        const bool branch_taken_0x2eb8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8b8) {
            ctx->pc = 0x2EB8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB8B8u;
            // 0x2eb8bc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBAA8u;
            goto label_2ebaa8;
        }
    }
    ctx->pc = 0x2EB8C0u;
label_2eb8c0:
    // 0x2eb8c0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2eb8c4:
    if (ctx->pc == 0x2EB8C4u) {
        ctx->pc = 0x2EB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8C0u;
        // 0x2eb8c4: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8C8u;
        goto label_2eb8c8;
    }
    ctx->pc = 0x2EB8C0u;
    {
        const bool branch_taken_0x2eb8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8C0u;
        // 0x2eb8c4: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8c0) {
            ctx->pc = 0x2EB92Cu;
            goto label_2eb92c;
        }
    }
    ctx->pc = 0x2EB8C8u;
label_2eb8c8:
    // 0x2eb8c8: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2eb8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2eb8cc:
    // 0x2eb8cc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2eb8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2eb8d0:
    // 0x2eb8d0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2eb8d4:
    if (ctx->pc == 0x2EB8D4u) {
        ctx->pc = 0x2EB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8D0u;
        // 0x2eb8d4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8D8u;
        goto label_2eb8d8;
    }
    ctx->pc = 0x2EB8D0u;
    {
        const bool branch_taken_0x2eb8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8d0) {
            ctx->pc = 0x2EB8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB8D0u;
            // 0x2eb8d4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB900u;
            goto label_2eb900;
        }
    }
    ctx->pc = 0x2EB8D8u;
label_2eb8d8:
    // 0x2eb8d8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2eb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2eb8dc:
    // 0x2eb8dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2eb8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eb8e0:
    // 0x2eb8e0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2eb8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2eb8e4:
    // 0x2eb8e4: 0x40f809  jalr        $v0
label_2eb8e8:
    if (ctx->pc == 0x2EB8E8u) {
        ctx->pc = 0x2EB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8E4u;
        // 0x2eb8e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8ECu;
        goto label_2eb8ec;
    }
    ctx->pc = 0x2EB8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EB8ECu);
        ctx->pc = 0x2EB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8E4u;
        // 0x2eb8e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB8E4u, 0x2EB8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EB8ECu;
label_2eb8ec:
    // 0x2eb8ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb8f0:
    // 0x2eb8f0: 0x5a00006d  blezl       $s0, . + 4 + (0x6D << 2)
label_2eb8f4:
    if (ctx->pc == 0x2EB8F4u) {
        ctx->pc = 0x2EB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8F0u;
        // 0x2eb8f4: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB8F8u;
        goto label_2eb8f8;
    }
    ctx->pc = 0x2EB8F0u;
    {
        const bool branch_taken_0x2eb8f0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2eb8f0) {
            ctx->pc = 0x2EB8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB8F0u;
            // 0x2eb8f4: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBAA8u;
            goto label_2ebaa8;
        }
    }
    ctx->pc = 0x2EB8F8u;
label_2eb8f8:
    // 0x2eb8f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2eb8fc:
    if (ctx->pc == 0x2EB8FCu) {
        ctx->pc = 0x2EB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8F8u;
        // 0x2eb8fc: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB900u;
        goto label_2eb900;
    }
    ctx->pc = 0x2EB8F8u;
    {
        const bool branch_taken_0x2eb8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8F8u;
        // 0x2eb8fc: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8f8) {
            ctx->pc = 0x2EB92Cu;
            goto label_2eb92c;
        }
    }
    ctx->pc = 0x2EB900u;
label_2eb900:
    // 0x2eb900: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eb900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb904:
    // 0x2eb904: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb908:
    // 0x2eb908: 0xc0b9542  jal         func_2E5508
label_2eb90c:
    if (ctx->pc == 0x2EB90Cu) {
        ctx->pc = 0x2EB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB908u;
        // 0x2eb90c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB910u;
        goto label_2eb910;
    }
    ctx->pc = 0x2EB908u;
    SET_GPR_U32(ctx, 31, 0x2EB910u);
    ctx->pc = 0x2EB90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB908u;
    // 0x2eb90c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5508u, 0x2EB908u, 0x2EB910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB910u;
label_2eb910:
    // 0x2eb910: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2eb910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2eb914:
    // 0x2eb914: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb918:
    // 0x2eb918: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2eb918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2eb91c:
    // 0x2eb91c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2eb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2eb920:
    // 0x2eb920: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2eb920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2eb924:
    // 0x2eb924: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2eb924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2eb928:
    // 0x2eb928: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2eb928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2eb92c:
    // 0x2eb92c: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2eb92cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2eb930:
    // 0x2eb930: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2eb930u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2eb934:
    // 0x2eb934: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2eb934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2eb938:
    // 0x2eb938: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_2eb93c:
    if (ctx->pc == 0x2EB93Cu) {
        ctx->pc = 0x2EB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB938u;
        // 0x2eb93c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB940u;
        goto label_2eb940;
    }
    ctx->pc = 0x2EB938u;
    {
        const bool branch_taken_0x2eb938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB938u;
        // 0x2eb93c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb938) {
            ctx->pc = 0x2EB808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb808;
        }
    }
    ctx->pc = 0x2EB940u;
label_2eb940:
    // 0x2eb940: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2eb944:
    if (ctx->pc == 0x2EB944u) {
        ctx->pc = 0x2EB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB940u;
        // 0x2eb944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB948u;
        goto label_2eb948;
    }
    ctx->pc = 0x2EB940u;
    {
        const bool branch_taken_0x2eb940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB940u;
        // 0x2eb944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb940) {
            ctx->pc = 0x2EBAB4u;
            goto label_2ebab4;
        }
    }
    ctx->pc = 0x2EB948u;
label_2eb948:
    // 0x2eb948: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_2eb94c:
    if (ctx->pc == 0x2EB94Cu) {
        ctx->pc = 0x2EB950u;
        goto label_2eb950;
    }
    ctx->pc = 0x2EB948u;
    {
        const bool branch_taken_0x2eb948 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb948) {
            ctx->pc = 0x2EB974u;
            goto label_2eb974;
        }
    }
    ctx->pc = 0x2EB950u;
label_2eb950:
    // 0x2eb950: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2eb950u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb954:
    // 0x2eb954: 0x0  nop
    ctx->pc = 0x2eb954u;
    // NOP
label_2eb958:
    // 0x2eb958: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2eb958u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2eb95c:
    // 0x2eb95c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2eb95cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2eb960:
    // 0x2eb960: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2eb960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_2eb964:
    // 0x2eb964: 0x0  nop
    ctx->pc = 0x2eb964u;
    // NOP
label_2eb968:
    // 0x2eb968: 0x0  nop
    ctx->pc = 0x2eb968u;
    // NOP
label_2eb96c:
    // 0x2eb96c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_2eb970:
    if (ctx->pc == 0x2EB970u) {
        ctx->pc = 0x2EB974u;
        goto label_2eb974;
    }
    ctx->pc = 0x2EB96Cu;
    {
        const bool branch_taken_0x2eb96c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb96c) {
            ctx->pc = 0x2EB958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb958;
        }
    }
    ctx->pc = 0x2EB974u;
label_2eb974:
    // 0x2eb974: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_2eb978:
    if (ctx->pc == 0x2EB978u) {
        ctx->pc = 0x2EB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB974u;
        // 0x2eb978: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB97Cu;
        goto label_2eb97c;
    }
    ctx->pc = 0x2EB974u;
    {
        const bool branch_taken_0x2eb974 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb974) {
            ctx->pc = 0x2EB978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB974u;
            // 0x2eb978: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB9ACu;
            goto label_2eb9ac;
        }
    }
    ctx->pc = 0x2EB97Cu;
label_2eb97c:
    // 0x2eb97c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eb97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb980:
    // 0x2eb980: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2eb980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2eb984:
    // 0x2eb984: 0xc0baf6f  jal         func_2EBDBC
label_2eb988:
    if (ctx->pc == 0x2EB988u) {
        ctx->pc = 0x2EB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB984u;
        // 0x2eb988: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB98Cu;
        goto label_2eb98c;
    }
    ctx->pc = 0x2EB984u;
    SET_GPR_U32(ctx, 31, 0x2EB98Cu);
    ctx->pc = 0x2EB988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB984u;
    // 0x2eb988: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBDBCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBDBCu, 0x2EB984u, 0x2EB98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB98Cu;
label_2eb98c:
    // 0x2eb98c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2eb98cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb990:
    // 0x2eb990: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2eb994:
    if (ctx->pc == 0x2EB994u) {
        ctx->pc = 0x2EB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB990u;
        // 0x2eb994: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB998u;
        goto label_2eb998;
    }
    ctx->pc = 0x2EB990u;
    {
        const bool branch_taken_0x2eb990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB990u;
        // 0x2eb994: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb990) {
            ctx->pc = 0x2EB9A0u;
            goto label_2eb9a0;
        }
    }
    ctx->pc = 0x2EB998u;
label_2eb998:
    // 0x2eb998: 0x10000002  b           . + 4 + (0x2 << 2)
label_2eb99c:
    if (ctx->pc == 0x2EB99Cu) {
        ctx->pc = 0x2EB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB998u;
        // 0x2eb99c: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9A0u;
        goto label_2eb9a0;
    }
    ctx->pc = 0x2EB998u;
    {
        const bool branch_taken_0x2eb998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB998u;
        // 0x2eb99c: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb998) {
            ctx->pc = 0x2EB9A4u;
            goto label_2eb9a4;
        }
    }
    ctx->pc = 0x2EB9A0u;
label_2eb9a0:
    // 0x2eb9a0: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x2eb9a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2eb9a4:
    // 0x2eb9a4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2eb9a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb9a8:
    // 0x2eb9a8: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2eb9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2eb9ac:
    // 0x2eb9ac: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x2eb9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2eb9b0:
    // 0x2eb9b0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2eb9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2eb9b4:
    // 0x2eb9b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eb9b8:
    // 0x2eb9b8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2eb9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb9bc:
    // 0x2eb9bc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2eb9bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2eb9c0:
    // 0x2eb9c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2eb9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2eb9c4:
    // 0x2eb9c4: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x2eb9c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_2eb9c8:
    // 0x2eb9c8: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x2eb9c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2eb9cc:
    // 0x2eb9cc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_2eb9d0:
    if (ctx->pc == 0x2EB9D0u) {
        ctx->pc = 0x2EB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9CCu;
        // 0x2eb9d0: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9D4u;
        goto label_2eb9d4;
    }
    ctx->pc = 0x2EB9CCu;
    {
        const bool branch_taken_0x2eb9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9CCu;
        // 0x2eb9d0: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9cc) {
            ctx->pc = 0x2EBA10u;
            goto label_2eba10;
        }
    }
    ctx->pc = 0x2EB9D4u;
label_2eb9d4:
    // 0x2eb9d4: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2eb9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2eb9d8:
    // 0x2eb9d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2eb9dc:
    if (ctx->pc == 0x2EB9DCu) {
        ctx->pc = 0x2EB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9D8u;
        // 0x2eb9dc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9E0u;
        goto label_2eb9e0;
    }
    ctx->pc = 0x2EB9D8u;
    {
        const bool branch_taken_0x2eb9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9D8u;
        // 0x2eb9dc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9d8) {
            ctx->pc = 0x2EBA10u;
            goto label_2eba10;
        }
    }
    ctx->pc = 0x2EB9E0u;
label_2eb9e0:
    // 0x2eb9e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb9e4:
    // 0x2eb9e4: 0xc0b9542  jal         func_2E5508
label_2eb9e8:
    if (ctx->pc == 0x2EB9E8u) {
        ctx->pc = 0x2EB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9E4u;
        // 0x2eb9e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB9ECu;
        goto label_2eb9ec;
    }
    ctx->pc = 0x2EB9E4u;
    SET_GPR_U32(ctx, 31, 0x2EB9ECu);
    ctx->pc = 0x2EB9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB9E4u;
    // 0x2eb9e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5508u, 0x2EB9E4u, 0x2EB9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB9ECu;
label_2eb9ec:
    // 0x2eb9ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2eb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb9f0:
    // 0x2eb9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eb9f4:
    // 0x2eb9f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2eb9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2eb9f8:
    // 0x2eb9f8: 0xc0bac14  jal         func_2EB050
label_2eb9fc:
    if (ctx->pc == 0x2EB9FCu) {
        ctx->pc = 0x2EB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9F8u;
        // 0x2eb9fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA00u;
        goto label_2eba00;
    }
    ctx->pc = 0x2EB9F8u;
    SET_GPR_U32(ctx, 31, 0x2EBA00u);
    ctx->pc = 0x2EB9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB9F8u;
    // 0x2eb9fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB050u, 0x2EB9F8u, 0x2EBA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA00u;
label_2eba00:
    // 0x2eba00: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2eba04:
    if (ctx->pc == 0x2EBA04u) {
        ctx->pc = 0x2EBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA00u;
        // 0x2eba04: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA08u;
        goto label_2eba08;
    }
    ctx->pc = 0x2EBA00u;
    {
        const bool branch_taken_0x2eba00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA00u;
        // 0x2eba04: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba00) {
            ctx->pc = 0x2EBAA4u;
            goto label_2ebaa4;
        }
    }
    ctx->pc = 0x2EBA08u;
label_2eba08:
    // 0x2eba08: 0x10000018  b           . + 4 + (0x18 << 2)
label_2eba0c:
    if (ctx->pc == 0x2EBA0Cu) {
        ctx->pc = 0x2EBA10u;
        goto label_2eba10;
    }
    ctx->pc = 0x2EBA08u;
    {
        const bool branch_taken_0x2eba08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eba08) {
            ctx->pc = 0x2EBA6Cu;
            goto label_2eba6c;
        }
    }
    ctx->pc = 0x2EBA10u;
label_2eba10:
    // 0x2eba10: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x2eba10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2eba14:
    // 0x2eba14: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2eba18:
    if (ctx->pc == 0x2EBA18u) {
        ctx->pc = 0x2EBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA14u;
        // 0x2eba18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA1Cu;
        goto label_2eba1c;
    }
    ctx->pc = 0x2EBA14u;
    {
        const bool branch_taken_0x2eba14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA14u;
        // 0x2eba18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba14) {
            ctx->pc = 0x2EBA40u;
            goto label_2eba40;
        }
    }
    ctx->pc = 0x2EBA1Cu;
label_2eba1c:
    // 0x2eba1c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2eba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2eba20:
    // 0x2eba20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eba20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eba24:
    // 0x2eba24: 0x40f809  jalr        $v0
label_2eba28:
    if (ctx->pc == 0x2EBA28u) {
        ctx->pc = 0x2EBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA24u;
        // 0x2eba28: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA2Cu;
        goto label_2eba2c;
    }
    ctx->pc = 0x2EBA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EBA2Cu);
        ctx->pc = 0x2EBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA24u;
        // 0x2eba28: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBA24u, 0x2EBA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EBA2Cu;
label_2eba2c:
    // 0x2eba2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eba2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eba30:
    // 0x2eba30: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_2eba34:
    if (ctx->pc == 0x2EBA34u) {
        ctx->pc = 0x2EBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA30u;
        // 0x2eba34: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA38u;
        goto label_2eba38;
    }
    ctx->pc = 0x2EBA30u;
    {
        const bool branch_taken_0x2eba30 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2EBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA30u;
        // 0x2eba34: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba30) {
            ctx->pc = 0x2EBAA4u;
            goto label_2ebaa4;
        }
    }
    ctx->pc = 0x2EBA38u;
label_2eba38:
    // 0x2eba38: 0x1000000c  b           . + 4 + (0xC << 2)
label_2eba3c:
    if (ctx->pc == 0x2EBA3Cu) {
        ctx->pc = 0x2EBA40u;
        goto label_2eba40;
    }
    ctx->pc = 0x2EBA38u;
    {
        const bool branch_taken_0x2eba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eba38) {
            ctx->pc = 0x2EBA6Cu;
            goto label_2eba6c;
        }
    }
    ctx->pc = 0x2EBA40u;
label_2eba40:
    // 0x2eba40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eba44:
    // 0x2eba44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eba44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eba48:
    // 0x2eba48: 0xc0b9542  jal         func_2E5508
label_2eba4c:
    if (ctx->pc == 0x2EBA4Cu) {
        ctx->pc = 0x2EBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA48u;
        // 0x2eba4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA50u;
        goto label_2eba50;
    }
    ctx->pc = 0x2EBA48u;
    SET_GPR_U32(ctx, 31, 0x2EBA50u);
    ctx->pc = 0x2EBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA48u;
    // 0x2eba4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5508u, 0x2EBA48u, 0x2EBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA50u;
label_2eba50:
    // 0x2eba50: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2eba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2eba54:
    // 0x2eba54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eba58:
    // 0x2eba58: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2eba58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2eba5c:
    // 0x2eba5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2eba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2eba60:
    // 0x2eba60: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2eba60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2eba64:
    // 0x2eba64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2eba64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2eba68:
    // 0x2eba68: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x2eba68u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_2eba6c:
    // 0x2eba6c: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_2eba70:
    if (ctx->pc == 0x2EBA70u) {
        ctx->pc = 0x2EBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA6Cu;
        // 0x2eba70: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA74u;
        goto label_2eba74;
    }
    ctx->pc = 0x2EBA6Cu;
    {
        const bool branch_taken_0x2eba6c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eba6c) {
            ctx->pc = 0x2EBA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBA6Cu;
            // 0x2eba70: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBA88u;
            goto label_2eba88;
        }
    }
    ctx->pc = 0x2EBA74u;
label_2eba74:
    // 0x2eba74: 0xc0bac14  jal         func_2EB050
label_2eba78:
    if (ctx->pc == 0x2EBA78u) {
        ctx->pc = 0x2EBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA74u;
        // 0x2eba78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA7Cu;
        goto label_2eba7c;
    }
    ctx->pc = 0x2EBA74u;
    SET_GPR_U32(ctx, 31, 0x2EBA7Cu);
    ctx->pc = 0x2EBA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA74u;
    // 0x2eba78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB050u, 0x2EBA74u, 0x2EBA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA7Cu;
label_2eba7c:
    // 0x2eba7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2eba80:
    if (ctx->pc == 0x2EBA80u) {
        ctx->pc = 0x2EBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA7Cu;
        // 0x2eba80: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA84u;
        goto label_2eba84;
    }
    ctx->pc = 0x2EBA7Cu;
    {
        const bool branch_taken_0x2eba7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA7Cu;
        // 0x2eba80: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba7c) {
            ctx->pc = 0x2EBAA4u;
            goto label_2ebaa4;
        }
    }
    ctx->pc = 0x2EBA84u;
label_2eba84:
    // 0x2eba84: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2eba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2eba88:
    // 0x2eba88: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2eba88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2eba8c:
    // 0x2eba8c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2eba8cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2eba90:
    // 0x2eba90: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2eba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2eba94:
    // 0x2eba94: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_2eba98:
    if (ctx->pc == 0x2EBA98u) {
        ctx->pc = 0x2EBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA94u;
        // 0x2eba98: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBA9Cu;
        goto label_2eba9c;
    }
    ctx->pc = 0x2EBA94u;
    {
        const bool branch_taken_0x2eba94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA94u;
        // 0x2eba98: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba94) {
            ctx->pc = 0x2EB948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb948;
        }
    }
    ctx->pc = 0x2EBA9Cu;
label_2eba9c:
    // 0x2eba9c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ebaa0:
    if (ctx->pc == 0x2EBAA0u) {
        ctx->pc = 0x2EBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA9Cu;
        // 0x2ebaa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAA4u;
        goto label_2ebaa4;
    }
    ctx->pc = 0x2EBA9Cu;
    {
        const bool branch_taken_0x2eba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA9Cu;
        // 0x2ebaa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba9c) {
            ctx->pc = 0x2EBAB4u;
            goto label_2ebab4;
        }
    }
    ctx->pc = 0x2EBAA4u;
label_2ebaa4:
    // 0x2ebaa4: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2ebaa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2ebaa8:
    // 0x2ebaa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ebaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ebaac:
    // 0x2ebaac: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ebaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ebab0:
    // 0x2ebab0: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x2ebab0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_2ebab4:
    // 0x2ebab4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ebab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ebab8:
    // 0x2ebab8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2ebab8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ebabc:
    // 0x2ebabc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ebabcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ebac0:
    // 0x2ebac0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ebac0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ebac4:
    // 0x2ebac4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ebac4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ebac8:
    // 0x2ebac8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ebac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebacc:
    // 0x2ebacc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ebaccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ebad0:
    // 0x2ebad0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ebad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ebad4:
    // 0x2ebad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ebad8:
    // 0x2ebad8: 0x3e00008  jr          $ra
label_2ebadc:
    if (ctx->pc == 0x2EBADCu) {
        ctx->pc = 0x2EBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAD8u;
        // 0x2ebadc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBAE0u;
        goto label_fallthrough_0x2ebad8;
    }
    ctx->pc = 0x2EBAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAD8u;
        // 0x2ebadc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ebad8:
    ctx->pc = 0x2EBAE0u;
}
