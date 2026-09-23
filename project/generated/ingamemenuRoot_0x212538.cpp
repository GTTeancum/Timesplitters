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

// Function: ingamemenuRoot
// Address: 0x212538 - 0x212890
void ingamemenuRoot_0x212538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingamemenuRoot_0x212538");
#endif

    switch (ctx->pc) {
        case 0x2125e4u: goto label_2125e4;
        case 0x212850u: goto label_212850;
        default: break;
    }

    ctx->pc = 0x212538u;

    // 0x212538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x212538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21253c: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x21253cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x212540: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x212540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212544: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x212544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x212548: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x212548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21254c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21254cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212550: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x212550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x212554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x212554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x212558: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x212558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21255c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21255cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212560: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x212560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x212564: 0x8f879dac  lw          $a3, -0x6254($gp)
    ctx->pc = 0x212564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x212568: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x212568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21256c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x21256cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x212570: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x212570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212574: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x212574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x212578: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x212578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x21257c: 0x10e60003  beq         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21257Cu;
    {
        const bool branch_taken_0x21257c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x212580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21257Cu;
        // 0x212580: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21257c) {
            ctx->pc = 0x21258Cu;
            goto label_21258c;
        }
    }
    ctx->pc = 0x212584u;
    // 0x212584: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x212584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x212588: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x212588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_21258c:
    // 0x21258c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x21258cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x212590: 0x2624c4a8  addiu       $a0, $s1, -0x3B58
    ctx->pc = 0x212590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x212594: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x212594u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x212598: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x212598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x21259c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x21259cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2125a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2125A0u;
    {
        const bool branch_taken_0x2125a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2125A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125A0u;
        // 0x2125a4: 0x8c840050  lw          $a0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125a0) {
            ctx->pc = 0x2125BCu;
            goto label_2125bc;
        }
    }
    ctx->pc = 0x2125A8u;
    // 0x2125a8: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x2125a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x2125ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2125ACu;
    {
        const bool branch_taken_0x2125ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2125ac) {
            ctx->pc = 0x2125DCu;
            goto label_2125dc;
        }
    }
    ctx->pc = 0x2125B4u;
    // 0x2125b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2125B4u;
    {
        const bool branch_taken_0x2125b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2125B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125B4u;
        // 0x2125b8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125b4) {
            ctx->pc = 0x2125C0u;
            goto label_2125c0;
        }
    }
    ctx->pc = 0x2125BCu;
label_2125bc:
    // 0x2125bc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2125bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2125c0:
    // 0x2125c0: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x2125c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x2125c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2125c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2125c8: 0x34430204  ori         $v1, $v0, 0x204
    ctx->pc = 0x2125c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)516);
    // 0x2125cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2125CCu;
    {
        const bool branch_taken_0x2125cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2125D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125CCu;
        // 0x2125d0: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125cc) {
            ctx->pc = 0x2125DCu;
            goto label_2125dc;
        }
    }
    ctx->pc = 0x2125D4u;
    // 0x2125d4: 0x34420205  ori         $v0, $v0, 0x205
    ctx->pc = 0x2125d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)517);
    // 0x2125d8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2125d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2125dc:
    // 0x2125dc: 0xc08730c  jal         func_21CC30
    ctx->pc = 0x2125DCu;
    SET_GPR_U32(ctx, 31, 0x2125E4u);
    ctx->pc = 0x21CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CC30u, 0x2125DCu, 0x2125E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2125E4u;
label_2125e4:
    // 0x2125e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2125E4u;
    {
        const bool branch_taken_0x2125e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2125E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125E4u;
        // 0x2125e8: 0x2623c4a8  addiu       $v1, $s1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125e4) {
            ctx->pc = 0x2125F8u;
            goto label_2125f8;
        }
    }
    ctx->pc = 0x2125ECu;
    // 0x2125ec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2125ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2125f0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2125f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2125f4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2125f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2125f8:
    // 0x2125f8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2125f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2125fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2125fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x212600: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x212600u;
    {
        const bool branch_taken_0x212600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212600) {
            ctx->pc = 0x212604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212600u;
            // 0x212604: 0x2623c4a8  addiu       $v1, $s1, -0x3B58 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212640u;
            goto label_212640;
        }
    }
    ctx->pc = 0x212608u;
    // 0x212608: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x212608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x21260c: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x21260cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x212610: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x212610u;
    {
        const bool branch_taken_0x212610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212610u;
        // 0x212614: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212610) {
            ctx->pc = 0x21263Cu;
            goto label_21263c;
        }
    }
    ctx->pc = 0x212618u;
    // 0x212618: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x212618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21261c: 0x2442a430  addiu       $v0, $v0, -0x5BD0
    ctx->pc = 0x21261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x212620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x212620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x212624: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x212624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212628: 0x800008  jr          $a0
    ctx->pc = 0x212628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212630u: goto label_212630;
            case 0x21263Cu: goto label_21263c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212628u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x212630u;
label_212630:
    // 0x212630: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x212630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212634: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x212634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x212638: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x212638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_21263c:
    // 0x21263c: 0x2623c4a8  addiu       $v1, $s1, -0x3B58
    ctx->pc = 0x21263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
label_212640:
    // 0x212640: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x212640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x212644: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x212644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x212648: 0x50860005  beql        $a0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x212648u;
    {
        const bool branch_taken_0x212648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x212648) {
            ctx->pc = 0x21264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212648u;
            // 0x21264c: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212660u;
            goto label_212660;
        }
    }
    ctx->pc = 0x212650u;
    // 0x212650: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x212650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212654: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x212654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x212658: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x212658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x21265c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_212660:
    // 0x212660: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x212660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x212664: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x212664u;
    {
        const bool branch_taken_0x212664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212664u;
        // 0x212668: 0x8f889dac  lw          $t0, -0x6254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212664) {
            ctx->pc = 0x21267Cu;
            goto label_21267c;
        }
    }
    ctx->pc = 0x21266Cu;
    // 0x21266c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x21266cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212670: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x212670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x212674: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x212674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x212678: 0x8f889dac  lw          $t0, -0x6254($gp)
    ctx->pc = 0x212678u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
label_21267c:
    // 0x21267c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x21267cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212680: 0x15050004  bne         $t0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x212680u;
    {
        const bool branch_taken_0x212680 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x212680) {
            ctx->pc = 0x212694u;
            goto label_212694;
        }
    }
    ctx->pc = 0x212688u;
    // 0x212688: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x212688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21268c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x21268cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x212690: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x212690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_212694:
    // 0x212694: 0x5486000c  bnel        $a0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x212694u;
    {
        const bool branch_taken_0x212694 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x212694) {
            ctx->pc = 0x212698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212694u;
            // 0x212698: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2126C8u;
            goto label_2126c8;
        }
    }
    ctx->pc = 0x21269Cu;
    // 0x21269c: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x21269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2126a0: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x2126a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2126a4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2126a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2126a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2126a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2126ac: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x2126acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2126b0: 0x54650005  bnel        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2126B0u;
    {
        const bool branch_taken_0x2126b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2126b0) {
            ctx->pc = 0x2126B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2126B0u;
            // 0x2126b4: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2126C8u;
            goto label_2126c8;
        }
    }
    ctx->pc = 0x2126B8u;
    // 0x2126b8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x2126b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2126bc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2126bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2126c0: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x2126c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2126c4: 0x96060008  lhu         $a2, 0x8($s0)
    ctx->pc = 0x2126c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2126c8:
    // 0x2126c8: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x2126c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x2126cc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2126CCu;
    {
        const bool branch_taken_0x2126cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2126D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126CCu;
        // 0x2126d0: 0x2627c4a8  addiu       $a3, $s1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126cc) {
            ctx->pc = 0x212778u;
            goto label_212778;
        }
    }
    ctx->pc = 0x2126D4u;
    // 0x2126d4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2126d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2126d8: 0x8ce50048  lw          $a1, 0x48($a3)
    ctx->pc = 0x2126d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x2126dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2126dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2126e0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2126e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2126e4: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x2126e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2126e8: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2126E8u;
    {
        const bool branch_taken_0x2126e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2126ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126E8u;
        // 0x2126ec: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126e8) {
            ctx->pc = 0x212700u;
            goto label_212700;
        }
    }
    ctx->pc = 0x2126F0u;
    // 0x2126f0: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x2126f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2126f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2126f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2126f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2126F8u;
    {
        const bool branch_taken_0x2126f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2126FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126F8u;
        // 0x2126fc: 0x2622c4a8  addiu       $v0, $s1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126f8) {
            ctx->pc = 0x21270Cu;
            goto label_21270c;
        }
    }
    ctx->pc = 0x212700u;
label_212700:
    // 0x212700: 0x34620300  ori         $v0, $v1, 0x300
    ctx->pc = 0x212700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)768);
    // 0x212704: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x212704u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x212708: 0x2622c4a8  addiu       $v0, $s1, -0x3B58
    ctx->pc = 0x212708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
label_21270c:
    // 0x21270c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x21270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x212710: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x212710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x212714: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x212714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x212718: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x212718u;
    {
        const bool branch_taken_0x212718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212718u;
        // 0x21271c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212718) {
            ctx->pc = 0x212758u;
            goto label_212758;
        }
    }
    ctx->pc = 0x212720u;
    // 0x212720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x212720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x212724: 0x2442a4a0  addiu       $v0, $v0, -0x5B60
    ctx->pc = 0x212724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x212728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x212728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21272c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21272cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212730: 0x800008  jr          $a0
    ctx->pc = 0x212730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212738u: goto label_212738;
            case 0x212750u: goto label_212750;
            case 0x212758u: goto label_212758;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x212738u;
label_212738:
    // 0x212738: 0x2622c4a8  addiu       $v0, $s1, -0x3B58
    ctx->pc = 0x212738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x21273c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21273cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x212740: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x212740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x212744: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x212744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x212748: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x212748u;
    {
        const bool branch_taken_0x212748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212748u;
        // 0x21274c: 0x2623c4a8  addiu       $v1, $s1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212748) {
            ctx->pc = 0x21275Cu;
            goto label_21275c;
        }
    }
    ctx->pc = 0x212750u;
label_212750:
    // 0x212750: 0x34c20008  ori         $v0, $a2, 0x8
    ctx->pc = 0x212750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x212754: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x212754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_212758:
    // 0x212758: 0x2623c4a8  addiu       $v1, $s1, -0x3B58
    ctx->pc = 0x212758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
label_21275c:
    // 0x21275c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x212760: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x212760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x212764: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x212764u;
    {
        const bool branch_taken_0x212764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212764u;
        // 0x212768: 0x2624c4a8  addiu       $a0, $s1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212764) {
            ctx->pc = 0x21277Cu;
            goto label_21277c;
        }
    }
    ctx->pc = 0x21276Cu;
    // 0x21276c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x21276cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212770: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x212770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x212774: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x212774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_212778:
    // 0x212778: 0x2624c4a8  addiu       $a0, $s1, -0x3B58
    ctx->pc = 0x212778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
label_21277c:
    // 0x21277c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x21277cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x212780: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x212780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x212784: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x212788: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x212788u;
    {
        const bool branch_taken_0x212788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212788u;
        // 0x21278c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212788) {
            ctx->pc = 0x2127A4u;
            goto label_2127a4;
        }
    }
    ctx->pc = 0x212790u;
    // 0x212790: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x212790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212794: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x212794u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x212798: 0x3442020f  ori         $v0, $v0, 0x20F
    ctx->pc = 0x212798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)527);
    // 0x21279c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x21279Cu;
    {
        const bool branch_taken_0x21279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21279Cu;
        // 0x2127a0: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21279c) {
            ctx->pc = 0x212870u;
            goto label_212870;
        }
    }
    ctx->pc = 0x2127A4u;
label_2127a4:
    // 0x2127a4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2127a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2127a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2127A8u;
    {
        const bool branch_taken_0x2127a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2127ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127A8u;
        // 0x2127ac: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127a8) {
            ctx->pc = 0x2127BCu;
            goto label_2127bc;
        }
    }
    ctx->pc = 0x2127B0u;
    // 0x2127b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2127b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2127b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2127B4u;
    {
        const bool branch_taken_0x2127b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127B4u;
        // 0x2127b8: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127b4) {
            ctx->pc = 0x212870u;
            goto label_212870;
        }
    }
    ctx->pc = 0x2127BCu;
label_2127bc:
    // 0x2127bc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2127bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2127c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2127C0u;
    {
        const bool branch_taken_0x2127c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2127C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127C0u;
        // 0x2127c4: 0x2623c4a8  addiu       $v1, $s1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127c0) {
            ctx->pc = 0x2127E0u;
            goto label_2127e0;
        }
    }
    ctx->pc = 0x2127C8u;
    // 0x2127c8: 0x8f82b688  lw          $v0, -0x4978($gp)
    ctx->pc = 0x2127c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948488)));
    // 0x2127cc: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2127CCu;
    {
        const bool branch_taken_0x2127cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2127cc) {
            ctx->pc = 0x2127D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2127CCu;
            // 0x2127d0: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2127E4u;
            goto label_2127e4;
        }
    }
    ctx->pc = 0x2127D4u;
    // 0x2127d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2127d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2127d8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2127D8u;
    {
        const bool branch_taken_0x2127d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127D8u;
        // 0x2127dc: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127d8) {
            ctx->pc = 0x212870u;
            goto label_212870;
        }
    }
    ctx->pc = 0x2127E0u;
label_2127e0:
    // 0x2127e0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2127e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2127e4:
    // 0x2127e4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2127e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2127e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2127E8u;
    {
        const bool branch_taken_0x2127e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127E8u;
        // 0x2127ec: 0x29020004  slti        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127e8) {
            ctx->pc = 0x212804u;
            goto label_212804;
        }
    }
    ctx->pc = 0x2127F0u;
    // 0x2127f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2127F0u;
    {
        const bool branch_taken_0x2127f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2127F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127F0u;
        // 0x2127f4: 0x2622c4a8  addiu       $v0, $s1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127f0) {
            ctx->pc = 0x212808u;
            goto label_212808;
        }
    }
    ctx->pc = 0x2127F8u;
    // 0x2127f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2127f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2127fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2127FCu;
    {
        const bool branch_taken_0x2127fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127FCu;
        // 0x212800: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127fc) {
            ctx->pc = 0x212870u;
            goto label_212870;
        }
    }
    ctx->pc = 0x212804u;
label_212804:
    // 0x212804: 0x2622c4a8  addiu       $v0, $s1, -0x3B58
    ctx->pc = 0x212804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
label_212808:
    // 0x212808: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x212808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21280c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x21280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x212810: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x212810u;
    {
        const bool branch_taken_0x212810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x212810) {
            ctx->pc = 0x212814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212810u;
            // 0x212814: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212830u;
            goto label_212830;
        }
    }
    ctx->pc = 0x212818u;
    // 0x212818: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x212818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21281c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21281Cu;
    {
        const bool branch_taken_0x21281c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21281c) {
            ctx->pc = 0x212820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21281Cu;
            // 0x212820: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212830u;
            goto label_212830;
        }
    }
    ctx->pc = 0x212824u;
    // 0x212824: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212828: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x212828u;
    {
        const bool branch_taken_0x212828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212828u;
        // 0x21282c: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212828) {
            ctx->pc = 0x212870u;
            goto label_212870;
        }
    }
    ctx->pc = 0x212830u;
label_212830:
    // 0x212830: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x212830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212834: 0x410c3  sra         $v0, $a0, 3
    ctx->pc = 0x212834u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 3));
    // 0x212838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x212838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21283c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21283Cu;
    {
        const bool branch_taken_0x21283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21283Cu;
        // 0x212840: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21283c) {
            ctx->pc = 0x212870u;
            goto label_212870;
        }
    }
    ctx->pc = 0x212844u;
    // 0x212844: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x212844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212848: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x212848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21284c: 0x0  nop
    ctx->pc = 0x21284cu;
    // NOP
label_212850:
    // 0x212850: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x212850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x212854: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x212854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212858: 0x851007  srav        $v0, $a1, $a0
    ctx->pc = 0x212858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x21285c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x212860: 0x0  nop
    ctx->pc = 0x212860u;
    // NOP
    // 0x212864: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x212864u;
    {
        const bool branch_taken_0x212864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212864) {
            ctx->pc = 0x212850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212850;
        }
    }
    ctx->pc = 0x21286Cu;
    // 0x21286c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x21286cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_212870:
    // 0x212870: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x212870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x212874: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x212874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212878: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x212878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x21287c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21287cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212880: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212888: 0x3e00008  jr          $ra
    ctx->pc = 0x212888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212888u;
        // 0x21288c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212890u;
}
