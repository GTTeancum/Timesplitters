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

// Function: drawStoryNotCompleted
// Address: 0x211630 - 0x211990
void drawStoryNotCompleted_0x211630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawStoryNotCompleted_0x211630");
#endif

    switch (ctx->pc) {
        case 0x211668u: goto label_211668;
        case 0x211678u: goto label_211678;
        case 0x211688u: goto label_211688;
        case 0x2116ecu: goto label_2116ec;
        case 0x211718u: goto label_211718;
        case 0x211748u: goto label_211748;
        case 0x211764u: goto label_211764;
        case 0x211780u: goto label_211780;
        case 0x2117a0u: goto label_2117a0;
        case 0x2117ccu: goto label_2117cc;
        case 0x211800u: goto label_211800;
        case 0x211808u: goto label_211808;
        case 0x211820u: goto label_211820;
        case 0x211850u: goto label_211850;
        case 0x211888u: goto label_211888;
        case 0x2118b4u: goto label_2118b4;
        case 0x211900u: goto label_211900;
        case 0x211928u: goto label_211928;
        case 0x211930u: goto label_211930;
        case 0x211960u: goto label_211960;
        default: break;
    }

    ctx->pc = 0x211630u;

    // 0x211630: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x211630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x211634: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x211634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x211638: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x211638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21163c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x211640: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x211640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x211644: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x211644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x211648: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x211648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21164c: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x211650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211654: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x211654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x211658: 0x267099f0  addiu       $s0, $s3, -0x6610
    ctx->pc = 0x211658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x21165c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x21165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x211660: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x211660u;
    SET_GPR_U32(ctx, 31, 0x211668u);
    ctx->pc = 0x211664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211660u;
    // 0x211664: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x211660u, 0x211668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211668u;
label_211668:
    // 0x211668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21166c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x21166cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x211670: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x211670u;
    SET_GPR_U32(ctx, 31, 0x211678u);
    ctx->pc = 0x211674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211670u;
    // 0x211674: 0x3a00b  movn        $s4, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x211670u, 0x211678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211678u;
label_211678:
    // 0x211678: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x211678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21167c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211680: 0xc08089c  jal         func_202270
    ctx->pc = 0x211680u;
    SET_GPR_U32(ctx, 31, 0x211688u);
    ctx->pc = 0x211684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211680u;
    // 0x211684: 0x38550001  xori        $s5, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211680u, 0x211688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211688u;
label_211688:
    // 0x211688: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x211688u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21168c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x21168cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x211690: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x211690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x211694: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x211694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x211698: 0x8f849dac  lw          $a0, -0x6254($gp)
    ctx->pc = 0x211698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x21169c: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x21169cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2116a0: 0x24420026  addiu       $v0, $v0, 0x26
    ctx->pc = 0x2116a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    // 0x2116a4: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x2116a4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2116a8: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2116a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2116ac: 0x24520014  addiu       $s2, $v0, 0x14
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2116b0: 0x1486006b  bne         $a0, $a2, . + 4 + (0x6B << 2)
    ctx->pc = 0x2116B0u;
    {
        const bool branch_taken_0x2116b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2116B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116B0u;
        // 0x2116b4: 0x65900b  movn        $s2, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116b0) {
            ctx->pc = 0x211860u;
            goto label_211860;
        }
    }
    ctx->pc = 0x2116B8u;
    // 0x2116b8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2116b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2116bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2116bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2116c0: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2116c4: 0x10640066  beq         $v1, $a0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2116C4u;
    {
        const bool branch_taken_0x2116c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2116C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116C4u;
        // 0x2116c8: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116c4) {
            ctx->pc = 0x211860u;
            goto label_211860;
        }
    }
    ctx->pc = 0x2116CCu;
    // 0x2116cc: 0x3c16002f  lui         $s6, 0x2F
    ctx->pc = 0x2116ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)47 << 16));
    // 0x2116d0: 0x26c42c18  addiu       $a0, $s6, 0x2C18
    ctx->pc = 0x2116d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 11288));
    // 0x2116d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2116d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2116d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2116d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2116dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2116dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2116e0: 0x8c710700  lw          $s1, 0x700($v1)
    ctx->pc = 0x2116e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1792)));
    // 0x2116e4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2116E4u;
    SET_GPR_U32(ctx, 31, 0x2116ECu);
    ctx->pc = 0x2116E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2116E4u;
    // 0x2116e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2116E4u, 0x2116ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2116ECu;
label_2116ec:
    // 0x2116ec: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2116ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2116f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2116f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2116f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2116f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2116f8: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x2116f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x2116fc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2116fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211700: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x211700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211704: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211704u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211708: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21170c: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x21170cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x211710: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211710u;
    SET_GPR_U32(ctx, 31, 0x211718u);
    ctx->pc = 0x211714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211710u;
    // 0x211714: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211710u, 0x211718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211718u;
label_211718:
    // 0x211718: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x211718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x21171c: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x21171cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211720: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x211720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x211724: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211728: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x211728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x21172c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21172Cu;
    {
        const bool branch_taken_0x21172c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21172Cu;
        // 0x211730: 0x473807  srav        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21172c) {
            ctx->pc = 0x21173Cu;
            goto label_21173c;
        }
    }
    ctx->pc = 0x211734u;
    // 0x211734: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x211734u;
    {
        const bool branch_taken_0x211734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211734u;
        // 0x211738: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211734) {
            ctx->pc = 0x211740u;
            goto label_211740;
        }
    }
    ctx->pc = 0x21173Cu;
label_21173c:
    // 0x21173c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x21173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_211740:
    // 0x211740: 0xc084536  jal         func_2114D8
    ctx->pc = 0x211740u;
    SET_GPR_U32(ctx, 31, 0x211748u);
    ctx->pc = 0x211744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211740u;
    // 0x211744: 0x479021  addu        $s2, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2114D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2114D8u, 0x211740u, 0x211748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211748u;
label_211748:
    // 0x211748: 0x8f88a01c  lw          $t0, -0x5FE4($gp)
    ctx->pc = 0x211748u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x21174c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211750: 0x8f89a020  lw          $t1, -0x5FE0($gp)
    ctx->pc = 0x211750u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x211754: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x211754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21175c: 0xc08ba4c  jal         func_22E930
    ctx->pc = 0x21175Cu;
    SET_GPR_U32(ctx, 31, 0x211764u);
    ctx->pc = 0x211760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21175Cu;
    // 0x211760: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E930u, 0x21175Cu, 0x211764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211764u;
label_211764:
    // 0x211764: 0x266299f0  addiu       $v0, $s3, -0x6610
    ctx->pc = 0x211764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x211768: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x211768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x21176c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x21176Cu;
    {
        const bool branch_taken_0x21176c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21176c) {
            ctx->pc = 0x211770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21176Cu;
            // 0x211770: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211778u;
            goto label_211778;
        }
    }
    ctx->pc = 0x211774u;
    // 0x211774: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x211774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_211778:
    // 0x211778: 0xc08089c  jal         func_202270
    ctx->pc = 0x211778u;
    SET_GPR_U32(ctx, 31, 0x211780u);
    ctx->pc = 0x21177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211778u;
    // 0x21177c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211778u, 0x211780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211780u;
label_211780:
    // 0x211780: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x211780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211784: 0x26c42c18  addiu       $a0, $s6, 0x2C18
    ctx->pc = 0x211784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 11288));
    // 0x211788: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21178c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x211790: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211794: 0x8c510704  lw          $s1, 0x704($v0)
    ctx->pc = 0x211794u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1796)));
    // 0x211798: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211798u;
    SET_GPR_U32(ctx, 31, 0x2117A0u);
    ctx->pc = 0x21179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211798u;
    // 0x21179c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211798u, 0x2117A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117A0u;
label_2117a0:
    // 0x2117a0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2117a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2117a4: 0x266599f0  addiu       $a1, $s3, -0x6610
    ctx->pc = 0x2117a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x2117a8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2117ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2117acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2117b0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2117b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2117b4: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x2117b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x2117b8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2117b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2117bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2117bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2117c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117c4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2117C4u;
    SET_GPR_U32(ctx, 31, 0x2117CCu);
    ctx->pc = 0x2117C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117C4u;
    // 0x2117c8: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2117C4u, 0x2117CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117CCu;
label_2117cc:
    // 0x2117cc: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x2117ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2117d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2117d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2117d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2117D4u;
    {
        const bool branch_taken_0x2117d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117D4u;
        // 0x2117d8: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117d4) {
            ctx->pc = 0x2117ECu;
            goto label_2117ec;
        }
    }
    ctx->pc = 0x2117DCu;
    // 0x2117dc: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2117dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2117e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2117e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2117e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2117E4u;
    {
        const bool branch_taken_0x2117e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117E4u;
        // 0x2117e8: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117e4) {
            ctx->pc = 0x2117F4u;
            goto label_2117f4;
        }
    }
    ctx->pc = 0x2117ECu;
label_2117ec:
    // 0x2117ec: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2117ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2117f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2117f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2117f4:
    // 0x2117f4: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x2117f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2117f8: 0xc08089c  jal         func_202270
    ctx->pc = 0x2117F8u;
    SET_GPR_U32(ctx, 31, 0x211800u);
    ctx->pc = 0x2117FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117F8u;
    // 0x2117fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2117F8u, 0x211800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211800u;
label_211800:
    // 0x211800: 0xc087284  jal         func_21CA10
    ctx->pc = 0x211800u;
    SET_GPR_U32(ctx, 31, 0x211808u);
    ctx->pc = 0x211804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211800u;
    // 0x211804: 0x8f849da8  lw          $a0, -0x6258($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CA10u, 0x211800u, 0x211808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211808u;
label_211808:
    // 0x211808: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x211808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x21180c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21180cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211814: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x211814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x211818: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211818u;
    SET_GPR_U32(ctx, 31, 0x211820u);
    ctx->pc = 0x21181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211818u;
    // 0x21181c: 0xa3839ab5  sb          $v1, -0x654B($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211818u, 0x211820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211820u;
label_211820:
    // 0x211820: 0x266599f0  addiu       $a1, $s3, -0x6610
    ctx->pc = 0x211820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x211824: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211824u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211828: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x211828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21182c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21182cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211830: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211830u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211834: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x211834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x211838: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211838u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21183c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21183cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211840: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x211840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211844: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x211844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x211848: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211848u;
    SET_GPR_U32(ctx, 31, 0x211850u);
    ctx->pc = 0x21184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211848u;
    // 0x21184c: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211848u, 0x211850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211850u;
label_211850:
    // 0x211850: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x211850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211854: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x211854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x211858: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x211858u;
    {
        const bool branch_taken_0x211858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211858u;
        // 0x21185c: 0xa3829ab5  sb          $v0, -0x654B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211858) {
            ctx->pc = 0x211960u;
            goto label_211960;
        }
    }
    ctx->pc = 0x211860u;
label_211860:
    // 0x211860: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211864: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x211864u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x211868: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x211868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x21186c: 0x267099f0  addiu       $s0, $s3, -0x6610
    ctx->pc = 0x21186cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x211870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211874: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211878: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21187c: 0x8c71070c  lw          $s1, 0x70C($v1)
    ctx->pc = 0x21187cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1804)));
    // 0x211880: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211880u;
    SET_GPR_U32(ctx, 31, 0x211888u);
    ctx->pc = 0x211884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211880u;
    // 0x211884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211880u, 0x211888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211888u;
label_211888:
    // 0x211888: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x21188c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x211890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211894: 0x3c077f20  lui         $a3, 0x7F20
    ctx->pc = 0x211894u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32544 << 16));
    // 0x211898: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211898u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x21189c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21189cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118a0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2118a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2118a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2118a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118a8: 0x34e72080  ori         $a3, $a3, 0x2080
    ctx->pc = 0x2118a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8320);
    // 0x2118ac: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2118ACu;
    SET_GPR_U32(ctx, 31, 0x2118B4u);
    ctx->pc = 0x2118B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118ACu;
    // 0x2118b0: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2118ACu, 0x2118B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118B4u;
label_2118b4:
    // 0x2118b4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2118b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2118b8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2118b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2118bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2118bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2118c0: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2118C0u;
    {
        const bool branch_taken_0x2118c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2118C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118C0u;
        // 0x2118c4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118c0) {
            ctx->pc = 0x21190Cu;
            goto label_21190c;
        }
    }
    ctx->pc = 0x2118C8u;
    // 0x2118c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2118c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2118cc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2118ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2118d0: 0x8c43c4f8  lw          $v1, -0x3B08($v0)
    ctx->pc = 0x2118d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x2118d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2118d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2118d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2118D8u;
    {
        const bool branch_taken_0x2118d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118D8u;
        // 0x2118dc: 0x266599f0  addiu       $a1, $s3, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118d8) {
            ctx->pc = 0x211908u;
            goto label_211908;
        }
    }
    ctx->pc = 0x2118E0u;
    // 0x2118e0: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x2118e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x2118e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2118E4u;
    {
        const bool branch_taken_0x2118e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118E4u;
        // 0x2118e8: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118e4) {
            ctx->pc = 0x2118F4u;
            goto label_2118f4;
        }
    }
    ctx->pc = 0x2118ECu;
    // 0x2118ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2118ECu;
    {
        const bool branch_taken_0x2118ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118ECu;
        // 0x2118f0: 0x2444ffe2  addiu       $a0, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118ec) {
            ctx->pc = 0x2118F8u;
            goto label_2118f8;
        }
    }
    ctx->pc = 0x2118F4u;
label_2118f4:
    // 0x2118f4: 0x2444ffc8  addiu       $a0, $v0, -0x38
    ctx->pc = 0x2118f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
label_2118f8:
    // 0x2118f8: 0xc0841dc  jal         func_210770
    ctx->pc = 0x2118F8u;
    SET_GPR_U32(ctx, 31, 0x211900u);
    ctx->pc = 0x210770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210770u, 0x2118F8u, 0x211900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211900u;
label_211900:
    // 0x211900: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x211900u;
    {
        const bool branch_taken_0x211900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211900u;
        // 0x211904: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211900) {
            ctx->pc = 0x211964u;
            goto label_211964;
        }
    }
    ctx->pc = 0x211908u;
label_211908:
    // 0x211908: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_21190c:
    // 0x21190c: 0x26852c18  addiu       $a1, $s4, 0x2C18
    ctx->pc = 0x21190cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x211910: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x211910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211914: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211918: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x211918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21191c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21191cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211920: 0xc08089c  jal         func_202270
    ctx->pc = 0x211920u;
    SET_GPR_U32(ctx, 31, 0x211928u);
    ctx->pc = 0x211924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211920u;
    // 0x211924: 0x8c710698  lw          $s1, 0x698($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211920u, 0x211928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211928u;
label_211928:
    // 0x211928: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211928u;
    SET_GPR_U32(ctx, 31, 0x211930u);
    ctx->pc = 0x21192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211928u;
    // 0x21192c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211928u, 0x211930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211930u;
label_211930:
    // 0x211930: 0x266699f0  addiu       $a2, $s3, -0x6610
    ctx->pc = 0x211930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x211934: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211938: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x211938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x21193c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211940: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x211940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x211944: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211944u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211948: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x211948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x21194c: 0x24a5ffe2  addiu       $a1, $a1, -0x1E
    ctx->pc = 0x21194cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x211950: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x211950u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x211954: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211954u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211958: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211958u;
    SET_GPR_U32(ctx, 31, 0x211960u);
    ctx->pc = 0x21195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211958u;
    // 0x21195c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211958u, 0x211960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211960u;
label_211960:
    // 0x211960: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x211960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_211964:
    // 0x211964: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x211964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211968: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x211968u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21196c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21196cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211970: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x211970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211974: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x211974u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211978: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x211978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21197c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21197cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211980: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x211980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211988: 0x808089c  j           func_202270
    ctx->pc = 0x211988u;
    ctx->pc = 0x21198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211988u;
    // 0x21198c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x211990u;
}
