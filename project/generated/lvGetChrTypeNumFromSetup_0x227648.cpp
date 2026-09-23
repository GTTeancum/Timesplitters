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

// Function: lvGetChrTypeNumFromSetup
// Address: 0x227648 - 0x22778c
void lvGetChrTypeNumFromSetup_0x227648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetChrTypeNumFromSetup_0x227648");
#endif

    switch (ctx->pc) {
        case 0x227754u: goto label_227754;
        case 0x227768u: goto label_227768;
        default: break;
    }

    ctx->pc = 0x227648u;

    // 0x227648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22764c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227650: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x227650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x227654: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x227654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x227658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x227658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22765c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227660: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x227660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x227664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x227664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x227668: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22766c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22766cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x227670: 0x2882000b  slti        $v0, $a0, 0xB
    ctx->pc = 0x227670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x227674: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x227674u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x227678: 0x8ca3c4f0  lw          $v1, -0x3B10($a1)
    ctx->pc = 0x227678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952176)));
    // 0x22767c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227680: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x227680u;
    {
        const bool branch_taken_0x227680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227680u;
        // 0x227684: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227680) {
            ctx->pc = 0x22773Cu;
            goto label_22773c;
        }
    }
    ctx->pc = 0x227688u;
    // 0x227688: 0x8f869f54  lw          $a2, -0x60AC($gp)
    ctx->pc = 0x227688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x22768c: 0x8f859f4c  lw          $a1, -0x60B4($gp)
    ctx->pc = 0x22768cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x227690: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x227690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x227694: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x227694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x227698: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x227698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x22769c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2276a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2276A0u;
    {
        const bool branch_taken_0x2276a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2276A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276A0u;
        // 0x2276a4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276a0) {
            ctx->pc = 0x2276B8u;
            goto label_2276b8;
        }
    }
    ctx->pc = 0x2276A8u;
    // 0x2276a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2276a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2276ac: 0x8f869f54  lw          $a2, -0x60AC($gp)
    ctx->pc = 0x2276acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2276b0: 0x8f859f4c  lw          $a1, -0x60B4($gp)
    ctx->pc = 0x2276b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2276b4: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x2276b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
label_2276b8:
    // 0x2276b8: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x2276b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x2276bc: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2276bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2276c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2276c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2276c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2276C4u;
    {
        const bool branch_taken_0x2276c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2276C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276C4u;
        // 0x2276c8: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276c4) {
            ctx->pc = 0x2276DCu;
            goto label_2276dc;
        }
    }
    ctx->pc = 0x2276CCu;
    // 0x2276cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2276ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2276d0: 0x8f869f54  lw          $a2, -0x60AC($gp)
    ctx->pc = 0x2276d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2276d4: 0x8f859f4c  lw          $a1, -0x60B4($gp)
    ctx->pc = 0x2276d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2276d8: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x2276d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
label_2276dc:
    // 0x2276dc: 0x30c20400  andi        $v0, $a2, 0x400
    ctx->pc = 0x2276dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
    // 0x2276e0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2276e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2276e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2276e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2276e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2276E8u;
    {
        const bool branch_taken_0x2276e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276E8u;
        // 0x2276ec: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276e8) {
            ctx->pc = 0x227700u;
            goto label_227700;
        }
    }
    ctx->pc = 0x2276F0u;
    // 0x2276f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2276f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2276f4: 0x8f869f54  lw          $a2, -0x60AC($gp)
    ctx->pc = 0x2276f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2276f8: 0x8f859f4c  lw          $a1, -0x60B4($gp)
    ctx->pc = 0x2276f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2276fc: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x2276fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
label_227700:
    // 0x227700: 0x30c20800  andi        $v0, $a2, 0x800
    ctx->pc = 0x227700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
    // 0x227704: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x227704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x227708: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x227708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22770c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22770Cu;
    {
        const bool branch_taken_0x22770c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22770Cu;
        // 0x227710: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22770c) {
            ctx->pc = 0x227728u;
            goto label_227728;
        }
    }
    ctx->pc = 0x227714u;
    // 0x227714: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x227714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x227718: 0x8f869f54  lw          $a2, -0x60AC($gp)
    ctx->pc = 0x227718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x22771c: 0x8f859f4c  lw          $a1, -0x60B4($gp)
    ctx->pc = 0x22771cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x227720: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x227720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x227724: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x227724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_227728:
    // 0x227728: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x227728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x22772c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x227730: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x227730u;
    {
        const bool branch_taken_0x227730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227730u;
        // 0x227734: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227730) {
            ctx->pc = 0x22773Cu;
            goto label_22773c;
        }
    }
    ctx->pc = 0x227738u;
    // 0x227738: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x227738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22773c:
    // 0x22773c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x227740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227744: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227744u;
    {
        const bool branch_taken_0x227744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227744u;
        // 0x227748: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227744) {
            ctx->pc = 0x227760u;
            goto label_227760;
        }
    }
    ctx->pc = 0x22774Cu;
    // 0x22774c: 0xc089d5a  jal         func_227568
    ctx->pc = 0x22774Cu;
    SET_GPR_U32(ctx, 31, 0x227754u);
    ctx->pc = 0x227750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22774Cu;
    // 0x227750: 0x8f849f70  lw          $a0, -0x6090($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227568u, 0x22774Cu, 0x227754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227754u;
label_227754:
    // 0x227754: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x227754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x227758: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x227758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22775c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x22775cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_227760:
    // 0x227760: 0xc089d5a  jal         func_227568
    ctx->pc = 0x227760u;
    SET_GPR_U32(ctx, 31, 0x227768u);
    ctx->pc = 0x227764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227760u;
    // 0x227764: 0x8f849f70  lw          $a0, -0x6090($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227568u, 0x227760u, 0x227768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227768u;
label_227768:
    // 0x227768: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x227768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22776c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22776cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227770: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227774: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x227774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227778: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x227778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x22777c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22777cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227784: 0x3e00008  jr          $ra
    ctx->pc = 0x227784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227784u;
        // 0x227788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22778Cu;
}
