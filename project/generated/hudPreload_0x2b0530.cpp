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

// Function: hudPreload
// Address: 0x2b0530 - 0x2b0890
void hudPreload_0x2b0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudPreload_0x2b0530");
#endif

    switch (ctx->pc) {
        case 0x2b0588u: goto label_2b0588;
        case 0x2b0598u: goto label_2b0598;
        case 0x2b05a0u: goto label_2b05a0;
        case 0x2b05b8u: goto label_2b05b8;
        case 0x2b0608u: goto label_2b0608;
        case 0x2b0634u: goto label_2b0634;
        case 0x2b067cu: goto label_2b067c;
        case 0x2b0758u: goto label_2b0758;
        case 0x2b0770u: goto label_2b0770;
        case 0x2b0784u: goto label_2b0784;
        case 0x2b082cu: goto label_2b082c;
        default: break;
    }

    ctx->pc = 0x2b0530u;

    // 0x2b0530: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b0530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b0534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0538: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2b0538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2b053c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b053cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b0540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b0540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b0544: 0x3c1e01ff  lui         $fp, 0x1FF
    ctx->pc = 0x2b0544u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)511 << 16));
    // 0x2b0548: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b0548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b054c: 0x27d0afd0  addiu       $s0, $fp, -0x5030
    ctx->pc = 0x2b054cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946768));
    // 0x2b0550: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b0550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b0554: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x2b0554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x2b0558: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2b0558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2b055c: 0x24849920  addiu       $a0, $a0, -0x66E0
    ctx->pc = 0x2b055cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940960));
    // 0x2b0560: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b0560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b0564: 0x24a5afc0  addiu       $a1, $a1, -0x5040
    ctx->pc = 0x2b0564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946752));
    // 0x2b0568: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b0568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b056c: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x2b056cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b0570: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b0570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b0574: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b0574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b0578: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b0578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b057c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2b057cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1FEAFD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FEAFD4u, _value); } while (0);
    // 0x2b0580: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x2B0580u;
    SET_GPR_U32(ctx, 31, 0x2B0588u);
    ctx->pc = 0x2B0584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0580u;
    // 0x2b0584: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x2B0580u, 0x2B0588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0588u;
label_2b0588:
    // 0x2b0588: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b0588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b058c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b058cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0590: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x2B0590u;
    SET_GPR_U32(ctx, 31, 0x2B0598u);
    ctx->pc = 0x2B0594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0590u;
    // 0x2b0594: 0x24849940  addiu       $a0, $a0, -0x66C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x2B0590u, 0x2B0598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0598u;
label_2b0598:
    // 0x2b0598: 0xc089de4  jal         func_227790
    ctx->pc = 0x2B0598u;
    SET_GPR_U32(ctx, 31, 0x2B05A0u);
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x2B0598u, 0x2B05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B05A0u;
label_2b05a0:
    // 0x2b05a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b05a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05a4: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2b05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2b05a8: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2b05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2b05ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b05acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b05b0: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x2b05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x2b05b4: 0x2463af40  addiu       $v1, $v1, -0x50C0
    ctx->pc = 0x2b05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946624));
label_2b05b8:
    // 0x2b05b8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2b05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2b05bc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2b05bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2b05c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b05c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b05c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b05c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b05cc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B05CCu;
    {
        const bool branch_taken_0x2b05cc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2b05cc) {
            ctx->pc = 0x2B05B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b05b8;
        }
    }
    ctx->pc = 0x2B05D4u;
    // 0x2b05d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b05d8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b05dc: 0x2457c4a8  addiu       $s7, $v0, -0x3B58
    ctx->pc = 0x2b05dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2b05e0: 0x247690fc  addiu       $s6, $v1, -0x6F04
    ctx->pc = 0x2b05e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938876));
    // 0x2b05e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2b05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2b05e8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2b05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2b05ec: 0x24556228  addiu       $s5, $v0, 0x6228
    ctx->pc = 0x2b05ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 25128));
    // 0x2b05f0: 0x247461a4  addiu       $s4, $v1, 0x61A4
    ctx->pc = 0x2b05f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 24996));
    // 0x2b05f4: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2b05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2b05f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b05f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05fc: 0x2453af80  addiu       $s3, $v0, -0x5080
    ctx->pc = 0x2b05fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x2b0600: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b0600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0604: 0x24120190  addiu       $s2, $zero, 0x190
    ctx->pc = 0x2b0604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_2b0608:
    // 0x2b0608: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2b0608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2b060c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B060Cu;
    {
        const bool branch_taken_0x2b060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B060Cu;
        // 0x2b0610: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b060c) {
            ctx->pc = 0x2B061Cu;
            goto label_2b061c;
        }
    }
    ctx->pc = 0x2B0614u;
    // 0x2b0614: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0614u;
    {
        const bool branch_taken_0x2b0614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0614u;
        // 0x2b0618: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0614) {
            ctx->pc = 0x2B0638u;
            goto label_2b0638;
        }
    }
    ctx->pc = 0x2B061Cu;
label_2b061c:
    // 0x2b061c: 0x8ee20050  lw          $v0, 0x50($s7)
    ctx->pc = 0x2b061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
    // 0x2b0620: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2b0620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2b0624: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0624u;
    {
        const bool branch_taken_0x2b0624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0624) {
            ctx->pc = 0x2B0638u;
            goto label_2b0638;
        }
    }
    ctx->pc = 0x2B062Cu;
    // 0x2b062c: 0xc087c18  jal         func_21F060
    ctx->pc = 0x2B062Cu;
    SET_GPR_U32(ctx, 31, 0x2B0634u);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x2B062Cu, 0x2B0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0634u;
label_2b0634:
    // 0x2b0634: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2b0634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b0638:
    // 0x2b0638: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B0638u;
    {
        const bool branch_taken_0x2b0638 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0638u;
        // 0x2b063c: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0638) {
            ctx->pc = 0x2B067Cu;
            goto label_2b067c;
        }
    }
    ctx->pc = 0x2B0640u;
    // 0x2b0640: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2b0640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2b0644: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2b0644u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0648: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x2b0648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b064c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x2b064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2b0650: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b0650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0654: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2b0654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b0658: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b0658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b065c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2b065cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0660: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0660u;
    {
        const bool branch_taken_0x2b0660 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0660u;
        // 0x2b0664: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0660) {
            ctx->pc = 0x2B067Cu;
            goto label_2b067c;
        }
    }
    ctx->pc = 0x2B0668u;
    // 0x2b0668: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b0668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b066c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b0670: 0x27c5afd0  addiu       $a1, $fp, -0x5030
    ctx->pc = 0x2b0670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946768));
    // 0x2b0674: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x2B0674u;
    SET_GPR_U32(ctx, 31, 0x2B067Cu);
    ctx->pc = 0x2B0678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0674u;
    // 0x2b0678: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x2B0674u, 0x2B067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B067Cu;
label_2b067c:
    // 0x2b067c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b067cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b0680: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x2b0680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b0684: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2B0684u;
    {
        const bool branch_taken_0x2b0684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0684u;
        // 0x2b0688: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0684) {
            ctx->pc = 0x2B0608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0608;
        }
    }
    ctx->pc = 0x2B068Cu;
    // 0x2b068c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b0690: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b0690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b0694: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x2b0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2b0698: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b0698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b069c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x2b069cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2b06a0: 0x14a30020  bne         $a1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B06A0u;
    {
        const bool branch_taken_0x2b06a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06A0u;
        // 0x2b06a4: 0xaf84b9b0  sw          $a0, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06a0) {
            ctx->pc = 0x2B0724u;
            goto label_2b0724;
        }
    }
    ctx->pc = 0x2B06A8u;
    // 0x2b06a8: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x2b06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2b06ac: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x2b06acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2b06b0: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x2b06b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2b06b4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B06B4u;
    {
        const bool branch_taken_0x2b06b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06B4u;
        // 0x2b06b8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06b4) {
            ctx->pc = 0x2B071Cu;
            goto label_2b071c;
        }
    }
    ctx->pc = 0x2B06BCu;
    // 0x2b06bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b06c0: 0x24429970  addiu       $v0, $v0, -0x6690
    ctx->pc = 0x2b06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941040));
    // 0x2b06c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b06c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b06c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b06c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b06cc: 0x800008  jr          $a0
    ctx->pc = 0x2B06CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B06D4u: goto label_2b06d4;
            case 0x2B06E0u: goto label_2b06e0;
            case 0x2B06ECu: goto label_2b06ec;
            case 0x2B06F8u: goto label_2b06f8;
            case 0x2B0704u: goto label_2b0704;
            case 0x2B0710u: goto label_2b0710;
            case 0x2B071Cu: goto label_2b071c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B06CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B06D4u;
label_2b06d4:
    // 0x2b06d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b06d8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2B06D8u;
    {
        const bool branch_taken_0x2b06d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06D8u;
        // 0x2b06dc: 0xaf82b9b0  sw          $v0, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06d8) {
            ctx->pc = 0x2B0818u;
            goto label_2b0818;
        }
    }
    ctx->pc = 0x2B06E0u;
label_2b06e0:
    // 0x2b06e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b06e4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2B06E4u;
    {
        const bool branch_taken_0x2b06e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06E4u;
        // 0x2b06e8: 0xaf82b9b0  sw          $v0, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06e4) {
            ctx->pc = 0x2B0818u;
            goto label_2b0818;
        }
    }
    ctx->pc = 0x2B06ECu;
label_2b06ec:
    // 0x2b06ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b06f0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2B06F0u;
    {
        const bool branch_taken_0x2b06f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B06F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06F0u;
        // 0x2b06f4: 0xaf82b9b0  sw          $v0, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06f0) {
            ctx->pc = 0x2B0818u;
            goto label_2b0818;
        }
    }
    ctx->pc = 0x2B06F8u;
label_2b06f8:
    // 0x2b06f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b06fc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2B06FCu;
    {
        const bool branch_taken_0x2b06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06FCu;
        // 0x2b0700: 0xaf82b9b0  sw          $v0, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06fc) {
            ctx->pc = 0x2B0818u;
            goto label_2b0818;
        }
    }
    ctx->pc = 0x2B0704u;
label_2b0704:
    // 0x2b0704: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b0708: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2B0708u;
    {
        const bool branch_taken_0x2b0708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0708u;
        // 0x2b070c: 0xaf82b9b0  sw          $v0, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0708) {
            ctx->pc = 0x2B0818u;
            goto label_2b0818;
        }
    }
    ctx->pc = 0x2B0710u;
label_2b0710:
    // 0x2b0710: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b0710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b0714: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2B0714u;
    {
        const bool branch_taken_0x2b0714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0714u;
        // 0x2b0718: 0xaf82b9b0  sw          $v0, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0714) {
            ctx->pc = 0x2B0818u;
            goto label_2b0818;
        }
    }
    ctx->pc = 0x2B071Cu;
label_2b071c:
    // 0x2b071c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2B071Cu;
    {
        const bool branch_taken_0x2b071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B071Cu;
        // 0x2b0720: 0xaf80b9b0  sw          $zero, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b071c) {
            ctx->pc = 0x2B0818u;
            goto label_2b0818;
        }
    }
    ctx->pc = 0x2B0724u;
label_2b0724:
    // 0x2b0724: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b0724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0728: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0728u;
    {
        const bool branch_taken_0x2b0728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0728u;
        // 0x2b072c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0728) {
            ctx->pc = 0x2B0740u;
            goto label_2b0740;
        }
    }
    ctx->pc = 0x2B0730u;
    // 0x2b0730: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0730u;
    {
        const bool branch_taken_0x2b0730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0730u;
        // 0x2b0734: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0730) {
            ctx->pc = 0x2B0740u;
            goto label_2b0740;
        }
    }
    ctx->pc = 0x2B0738u;
    // 0x2b0738: 0x14a20038  bne         $a1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2B0738u;
    {
        const bool branch_taken_0x2b0738 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0738u;
        // 0x2b073c: 0x8f84b9b0  lw          $a0, -0x4650($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0738) {
            ctx->pc = 0x2B081Cu;
            goto label_2b081c;
        }
    }
    ctx->pc = 0x2B0740u;
label_2b0740:
    // 0x2b0740: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x2b0740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2b0744: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2b0744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b0748: 0x10820033  beq         $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2B0748u;
    {
        const bool branch_taken_0x2b0748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0748u;
        // 0x2b074c: 0xaf80b9b0  sw          $zero, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0748) {
            ctx->pc = 0x2B0818u;
            goto label_2b0818;
        }
    }
    ctx->pc = 0x2B0750u;
    // 0x2b0750: 0xc089e6e  jal         func_2279B8
    ctx->pc = 0x2B0750u;
    SET_GPR_U32(ctx, 31, 0x2B0758u);
    ctx->pc = 0x2B0754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0750u;
    // 0x2b0754: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2279B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2279B8u, 0x2B0750u, 0x2B0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0758u;
label_2b0758:
    // 0x2b0758: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b0758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b075c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2b075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b0760: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B0760u;
    {
        const bool branch_taken_0x2b0760 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0760u;
        // 0x2b0764: 0x8f84b9b0  lw          $a0, -0x4650($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0760) {
            ctx->pc = 0x2B081Cu;
            goto label_2b081c;
        }
    }
    ctx->pc = 0x2B0768u;
    // 0x2b0768: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b0768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b076c: 0x0  nop
    ctx->pc = 0x2b076cu;
    // NOP
label_2b0770:
    // 0x2b0770: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2b0770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b0774: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2b0774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b0778: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2b0778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b077c: 0xc08a362  jal         func_228D88
    ctx->pc = 0x2B077Cu;
    SET_GPR_U32(ctx, 31, 0x2B0784u);
    ctx->pc = 0x2B0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B077Cu;
    // 0x2b0780: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x2B077Cu, 0x2B0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0784u;
label_2b0784:
    // 0x2b0784: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B0784u;
    {
        const bool branch_taken_0x2b0784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0784u;
        // 0x2b0788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0784) {
            ctx->pc = 0x2B0804u;
            goto label_2b0804;
        }
    }
    ctx->pc = 0x2B078Cu;
    // 0x2b078c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b0790: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B0790u;
    {
        const bool branch_taken_0x2b0790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0790) {
            ctx->pc = 0x2B0794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0790u;
            // 0x2b0794: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0808u;
            goto label_2b0808;
        }
    }
    ctx->pc = 0x2B0798u;
    // 0x2b0798: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b079c: 0x2444febc  addiu       $a0, $v0, -0x144
    ctx->pc = 0x2b079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966972));
    // 0x2b07a0: 0x2c83000e  sltiu       $v1, $a0, 0xE
    ctx->pc = 0x2b07a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x2b07a4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B07A4u;
    {
        const bool branch_taken_0x2b07a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07A4u;
        // 0x2b07a8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07a4) {
            ctx->pc = 0x2B0804u;
            goto label_2b0804;
        }
    }
    ctx->pc = 0x2B07ACu;
    // 0x2b07ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b07acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b07b0: 0x244299e0  addiu       $v0, $v0, -0x6620
    ctx->pc = 0x2b07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941152));
    // 0x2b07b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b07b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b07b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b07b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b07bc: 0x800008  jr          $a0
    ctx->pc = 0x2B07BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B07C4u: goto label_2b07c4;
            case 0x2B07CCu: goto label_2b07cc;
            case 0x2B07D4u: goto label_2b07d4;
            case 0x2B07DCu: goto label_2b07dc;
            case 0x2B07E4u: goto label_2b07e4;
            case 0x2B07ECu: goto label_2b07ec;
            case 0x2B07F4u: goto label_2b07f4;
            case 0x2B07FCu: goto label_2b07fc;
            case 0x2B0804u: goto label_2b0804;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B07BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B07C4u;
label_2b07c4:
    // 0x2b07c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B07C4u;
    {
        const bool branch_taken_0x2b07c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07C4u;
        // 0x2b07c8: 0xaf80b9b0  sw          $zero, -0x4650($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07c4) {
            ctx->pc = 0x2B0804u;
            goto label_2b0804;
        }
    }
    ctx->pc = 0x2B07CCu;
label_2b07cc:
    // 0x2b07cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B07CCu;
    {
        const bool branch_taken_0x2b07cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07CCu;
        // 0x2b07d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07cc) {
            ctx->pc = 0x2B0800u;
            goto label_2b0800;
        }
    }
    ctx->pc = 0x2B07D4u;
label_2b07d4:
    // 0x2b07d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B07D4u;
    {
        const bool branch_taken_0x2b07d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07D4u;
        // 0x2b07d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07d4) {
            ctx->pc = 0x2B0800u;
            goto label_2b0800;
        }
    }
    ctx->pc = 0x2B07DCu;
label_2b07dc:
    // 0x2b07dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B07DCu;
    {
        const bool branch_taken_0x2b07dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07DCu;
        // 0x2b07e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07dc) {
            ctx->pc = 0x2B0800u;
            goto label_2b0800;
        }
    }
    ctx->pc = 0x2B07E4u;
label_2b07e4:
    // 0x2b07e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B07E4u;
    {
        const bool branch_taken_0x2b07e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07E4u;
        // 0x2b07e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07e4) {
            ctx->pc = 0x2B0800u;
            goto label_2b0800;
        }
    }
    ctx->pc = 0x2B07ECu;
label_2b07ec:
    // 0x2b07ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B07ECu;
    {
        const bool branch_taken_0x2b07ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07ECu;
        // 0x2b07f0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07ec) {
            ctx->pc = 0x2B0800u;
            goto label_2b0800;
        }
    }
    ctx->pc = 0x2B07F4u;
label_2b07f4:
    // 0x2b07f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B07F4u;
    {
        const bool branch_taken_0x2b07f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07F4u;
        // 0x2b07f8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07f4) {
            ctx->pc = 0x2B0800u;
            goto label_2b0800;
        }
    }
    ctx->pc = 0x2B07FCu;
label_2b07fc:
    // 0x2b07fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b0800:
    // 0x2b0800: 0xaf82b9b0  sw          $v0, -0x4650($gp)
    ctx->pc = 0x2b0800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949296), GPR_U32(ctx, 2));
label_2b0804:
    // 0x2b0804: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2b0804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2b0808:
    // 0x2b0808: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b0808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b080c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b080cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b0810: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2B0810u;
    {
        const bool branch_taken_0x2b0810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0810u;
        // 0x2b0814: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0810) {
            ctx->pc = 0x2B0770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0770;
        }
    }
    ctx->pc = 0x2B0818u;
label_2b0818:
    // 0x2b0818: 0x8f84b9b0  lw          $a0, -0x4650($gp)
    ctx->pc = 0x2b0818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949296)));
label_2b081c:
    // 0x2b081c: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B081Cu;
    {
        const bool branch_taken_0x2b081c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2B0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B081Cu;
        // 0x2b0820: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b081c) {
            ctx->pc = 0x2B0864u;
            goto label_2b0864;
        }
    }
    ctx->pc = 0x2B0824u;
    // 0x2b0824: 0xc0ac13e  jal         func_2B04F8
    ctx->pc = 0x2B0824u;
    SET_GPR_U32(ctx, 31, 0x2B082Cu);
    ctx->pc = 0x2B04F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F8u, 0x2B0824u, 0x2B082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B082Cu;
label_2b082c:
    // 0x2b082c: 0x27c5afd0  addiu       $a1, $fp, -0x5030
    ctx->pc = 0x2b082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946768));
    // 0x2b0830: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b0830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b0834: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2b0834u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b0838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b083c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2b083cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b0840: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b0840u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b0844: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b0844u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0848: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b0848u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b084c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b084cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0850: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b0850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0854: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b085c: 0x80870fa  j           func_21C3E8
    ctx->pc = 0x2B085Cu;
    ctx->pc = 0x2B0860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B085Cu;
    // 0x2b0860: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    preloadAddTexName_0x21c3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B0864u;
label_2b0864:
    // 0x2b0864: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2b0864u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b0868: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2b0868u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b086c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b086cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b0870: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b0870u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0874: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b0874u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0878: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b0878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b087c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b087cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0880: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0888: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0888u;
        // 0x2b088c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0890u;
}
