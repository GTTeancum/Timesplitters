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

// Function: frontmpgStartGame
// Address: 0x2415a8 - 0x241c68
void frontmpgStartGame_0x2415a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgStartGame_0x2415a8");
#endif

    switch (ctx->pc) {
        case 0x2415ecu: goto label_2415ec;
        case 0x241610u: goto label_241610;
        case 0x241620u: goto label_241620;
        case 0x241630u: goto label_241630;
        case 0x2416c0u: goto label_2416c0;
        case 0x241714u: goto label_241714;
        case 0x241730u: goto label_241730;
        case 0x2417d0u: goto label_2417d0;
        case 0x241a1cu: goto label_241a1c;
        case 0x241a38u: goto label_241a38;
        case 0x241a70u: goto label_241a70;
        case 0x241a78u: goto label_241a78;
        case 0x241ab0u: goto label_241ab0;
        case 0x241b08u: goto label_241b08;
        case 0x241b40u: goto label_241b40;
        case 0x241ba0u: goto label_241ba0;
        case 0x241c38u: goto label_241c38;
        default: break;
    }

    ctx->pc = 0x2415a8u;

    // 0x2415a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2415a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2415ac: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2415acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2415b0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2415b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2415b4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2415b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2415b8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2415b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2415bc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2415bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2415c0: 0x3c1301fc  lui         $s3, 0x1FC
    ctx->pc = 0x2415c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)508 << 16));
    // 0x2415c4: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2415c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2415c8: 0x26721898  addiu       $s2, $s3, 0x1898
    ctx->pc = 0x2415c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 6296));
    // 0x2415cc: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2415ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2415d0: 0x26570010  addiu       $s7, $s2, 0x10
    ctx->pc = 0x2415d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2415d4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2415d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2415d8: 0x26550023  addiu       $s5, $s2, 0x23
    ctx->pc = 0x2415d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 35));
    // 0x2415dc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2415dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2415e0: 0x26560015  addiu       $s6, $s2, 0x15
    ctx->pc = 0x2415e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 21));
    // 0x2415e4: 0xc090144  jal         func_240510
    ctx->pc = 0x2415E4u;
    SET_GPR_U32(ctx, 31, 0x2415ECu);
    ctx->pc = 0x2415E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2415E4u;
    // 0x2415e8: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240510u, 0x2415E4u, 0x2415ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415ECu;
label_2415ec:
    // 0x2415ec: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x2415ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x2415f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2415f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2415f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2415f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2415f8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2415f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2415fc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2415fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x241600: 0xae621898  sw          $v0, 0x1898($s3)
    ctx->pc = 0x241600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6296), GPR_U32(ctx, 2));
    // 0x241604: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x241604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x241608: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x241608u;
    SET_GPR_U32(ctx, 31, 0x241610u);
    ctx->pc = 0x24160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241608u;
    // 0x24160c: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x241608u, 0x241610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241610u;
label_241610:
    // 0x241610: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x241610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241618: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x241618u;
    SET_GPR_U32(ctx, 31, 0x241620u);
    ctx->pc = 0x24161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241618u;
    // 0x24161c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x241618u, 0x241620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241620u;
label_241620:
    // 0x241620: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x241620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241628: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x241628u;
    SET_GPR_U32(ctx, 31, 0x241630u);
    ctx->pc = 0x24162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241628u;
    // 0x24162c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x241628u, 0x241630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241630u;
label_241630:
    // 0x241630: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x241634: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x241634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241638: 0x944450f8  lhu         $a0, 0x50F8($v0)
    ctx->pc = 0x241638u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x3550F8u));
    // 0x24163c: 0x10870073  beq         $a0, $a3, . + 4 + (0x73 << 2)
    ctx->pc = 0x24163Cu;
    {
        const bool branch_taken_0x24163c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x241640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24163Cu;
        // 0x241640: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24163c) {
            ctx->pc = 0x24180Cu;
            goto label_24180c;
        }
    }
    ctx->pc = 0x241644u;
    // 0x241644: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241644u;
    {
        const bool branch_taken_0x241644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241644u;
        // 0x241648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241644) {
            ctx->pc = 0x24165Cu;
            goto label_24165c;
        }
    }
    ctx->pc = 0x24164Cu;
    // 0x24164c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24164Cu;
    {
        const bool branch_taken_0x24164c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24164Cu;
        // 0x241650: 0x3c0601fc  lui         $a2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24164c) {
            ctx->pc = 0x241670u;
            goto label_241670;
        }
    }
    ctx->pc = 0x241654u;
    // 0x241654: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x241654u;
    {
        const bool branch_taken_0x241654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241654) {
            ctx->pc = 0x241C30u;
            goto label_241c30;
        }
    }
    ctx->pc = 0x24165Cu;
label_24165c:
    // 0x24165c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241660: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x241660u;
    {
        const bool branch_taken_0x241660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241660u;
        // 0x241664: 0x3c1401fc  lui         $s4, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241660) {
            ctx->pc = 0x2416B4u;
            goto label_2416b4;
        }
    }
    ctx->pc = 0x241668u;
    // 0x241668: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x241668u;
    {
        const bool branch_taken_0x241668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241668) {
            ctx->pc = 0x241C30u;
            goto label_241c30;
        }
    }
    ctx->pc = 0x241670u;
label_241670:
    // 0x241670: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x241670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x241674: 0x24c411f8  addiu       $a0, $a2, 0x11F8
    ctx->pc = 0x241674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4600));
    // 0x241678: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x241678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24167c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x24167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x241680: 0x2463c338  addiu       $v1, $v1, -0x3CC8
    ctx->pc = 0x241680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951736));
    // 0x241684: 0xacc711f8  sw          $a3, 0x11F8($a2)
    ctx->pc = 0x241684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4600), GPR_U32(ctx, 7));
    // 0x241688: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x241688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24168c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24168cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x241690: 0xae450048  sw          $a1, 0x48($s2)
    ctx->pc = 0x241690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 5));
    // 0x241694: 0xae440050  sw          $a0, 0x50($s2)
    ctx->pc = 0x241694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 4));
    // 0x241698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24169c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x24169cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2416a0: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x2416a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x2416a4: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2416a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x2416a8: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x2416a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x2416ac: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x2416ACu;
    {
        const bool branch_taken_0x2416ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416ACu;
        // 0x2416b0: 0xae400060  sw          $zero, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416ac) {
            ctx->pc = 0x241C30u;
            goto label_241c30;
        }
    }
    ctx->pc = 0x2416B4u;
label_2416b4:
    // 0x2416b4: 0x269011f8  addiu       $s0, $s4, 0x11F8
    ctx->pc = 0x2416b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    // 0x2416b8: 0xc087c12  jal         func_21F048
    ctx->pc = 0x2416B8u;
    SET_GPR_U32(ctx, 31, 0x2416C0u);
    ctx->pc = 0x2416BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2416B8u;
    // 0x2416bc: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F048u, 0x2416B8u, 0x2416C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2416C0u;
label_2416c0:
    // 0x2416c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2416c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2416c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2416c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416c8: 0xae671898  sw          $a3, 0x1898($s3)
    ctx->pc = 0x2416c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6296), GPR_U32(ctx, 7));
    // 0x2416cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2416ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416d0: 0xae470004  sw          $a3, 0x4($s2)
    ctx->pc = 0x2416d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 7));
    // 0x2416d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2416d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416d8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2416d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2416dc: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2416dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2416e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2416e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2416e4: 0xae430044  sw          $v1, 0x44($s2)
    ctx->pc = 0x2416e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
    // 0x2416e8: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2416e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x2416ec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2416ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2416f0: 0xae47004c  sw          $a3, 0x4C($s2)
    ctx->pc = 0x2416f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 7));
    // 0x2416f4: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x2416f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x2416f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2416f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2416fc: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x2416fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x241700: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x241700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x241704: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x241704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x241708: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x241708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x24170c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x24170Cu;
    SET_GPR_U32(ctx, 31, 0x241714u);
    ctx->pc = 0x241710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24170Cu;
    // 0x241710: 0xae400060  sw          $zero, 0x60($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x24170Cu, 0x241714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241714u;
label_241714:
    // 0x241714: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x241714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x241718: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x241718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24171c: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x24171Cu;
    {
        const bool branch_taken_0x24171c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x241720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24171Cu;
        // 0x241720: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24171c) {
            ctx->pc = 0x2417ACu;
            goto label_2417ac;
        }
    }
    ctx->pc = 0x241724u;
    // 0x241724: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241728: 0x26530031  addiu       $s3, $s2, 0x31
    ctx->pc = 0x241728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 49));
    // 0x24172c: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x24172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_241730:
    // 0x241730: 0x2a83021  addu        $a2, $s5, $t0
    ctx->pc = 0x241730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
    // 0x241734: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x241734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241738: 0x2c82021  addu        $a0, $s6, $t0
    ctx->pc = 0x241738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x24173c: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x24173cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x241740: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x241740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241744: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x241744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x241748: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x241748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x24174c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x24174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x241750: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x241750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x241754: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x241754u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x241758: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x241758u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x24175c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x241764: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241764u;
    {
        const bool branch_taken_0x241764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241764u;
        // 0x241768: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241764) {
            ctx->pc = 0x241784u;
            goto label_241784;
        }
    }
    ctx->pc = 0x24176Cu;
    // 0x24176c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x24176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x241770: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x241770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x241774: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x241774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x241778: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24177c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x24177cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x241780: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x241780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_241784:
    // 0x241784: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x241784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x241788: 0x2902000b  slti        $v0, $t0, 0xB
    ctx->pc = 0x241788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x24178c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24178Cu;
    {
        const bool branch_taken_0x24178c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24178Cu;
        // 0x241790: 0x81100  sll         $v0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24178c) {
            ctx->pc = 0x2417ACu;
            goto label_2417ac;
        }
    }
    ctx->pc = 0x241794u;
    // 0x241794: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x241794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x241798: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x241798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24179c: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x24179cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2417a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2417a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2417a4: 0x441ffe2  bgez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2417A4u;
    {
        const bool branch_taken_0x2417a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2417A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417A4u;
        // 0x2417a8: 0x1241021  addu        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417a4) {
            ctx->pc = 0x241730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241730;
        }
    }
    ctx->pc = 0x2417ACu;
label_2417ac:
    // 0x2417ac: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x2417acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2417b0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2417b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2417b4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2417b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2417b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2417b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2417bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2417bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2417c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2417C0u;
    {
        const bool branch_taken_0x2417c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417C0u;
        // 0x2417c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417c0) {
            ctx->pc = 0x241800u;
            goto label_241800;
        }
    }
    ctx->pc = 0x2417C8u;
    // 0x2417c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2417c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2417cc: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2417ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2417d0:
    // 0x2417d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2417d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2417d4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2417D4u;
    {
        const bool branch_taken_0x2417d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2417d4) {
            ctx->pc = 0x2417D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2417D4u;
            // 0x2417d8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2417F4u;
            goto label_2417f4;
        }
    }
    ctx->pc = 0x2417DCu;
    // 0x2417dc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2417dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2417e0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2417e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2417e4: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x2417e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2417e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2417e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2417ec: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2417ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x2417f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2417f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2417f4:
    // 0x2417f4: 0x29020006  slti        $v0, $t0, 0x6
    ctx->pc = 0x2417f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2417f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2417F8u;
    {
        const bool branch_taken_0x2417f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2417FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417F8u;
        // 0x2417fc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417f8) {
            ctx->pc = 0x2417D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2417d0;
        }
    }
    ctx->pc = 0x241800u;
label_241800:
    // 0x241800: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x241800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x241804: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x241804u;
    {
        const bool branch_taken_0x241804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241804u;
        // 0x241808: 0xae8211f8  sw          $v0, 0x11F8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241804) {
            ctx->pc = 0x241C30u;
            goto label_241c30;
        }
    }
    ctx->pc = 0x24180Cu;
label_24180c:
    // 0x24180c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24180cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x241810: 0x3c1e01fc  lui         $fp, 0x1FC
    ctx->pc = 0x241810u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)508 << 16));
    // 0x241814: 0x8c6538d8  lw          $a1, 0x38D8($v1)
    ctx->pc = 0x241814u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3538D8u));
    // 0x241818: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24181c: 0x27c311f8  addiu       $v1, $fp, 0x11F8
    ctx->pc = 0x24181cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4600));
    // 0x241820: 0x8c463a08  lw          $a2, 0x3A08($v0)
    ctx->pc = 0x241820u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x353A08u));
    // 0x241824: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x241824u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x241828: 0x8c680030  lw          $t0, 0x30($v1)
    ctx->pc = 0x241828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24182c: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x24182cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x241830: 0x34820200  ori         $v0, $a0, 0x200
    ctx->pc = 0x241830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x241834: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x241834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x241838: 0x86100a  movz        $v0, $a0, $a2
    ctx->pc = 0x241838u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x24183c: 0x8c6739e0  lw          $a3, 0x39E0($v1)
    ctx->pc = 0x24183cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14816)));
    // 0x241840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x241840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241844: 0xae450040  sw          $a1, 0x40($s2)
    ctx->pc = 0x241844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 5));
    // 0x241848: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24184c: 0xae44004c  sw          $a0, 0x4C($s2)
    ctx->pc = 0x24184cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 4));
    // 0x241850: 0xae480048  sw          $t0, 0x48($s2)
    ctx->pc = 0x241850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 8));
    // 0x241854: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x241854u;
    {
        const bool branch_taken_0x241854 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x241858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241854u;
        // 0x241858: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241854) {
            ctx->pc = 0x241864u;
            goto label_241864;
        }
    }
    ctx->pc = 0x24185Cu;
    // 0x24185c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x24185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x241860: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x241860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_241864:
    // 0x241864: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x241864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x241868: 0xae450050  sw          $a1, 0x50($s2)
    ctx->pc = 0x241868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 5));
    // 0x24186c: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x24186cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x241870: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x241870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x241874: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x241874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x241878: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x241878u;
    {
        const bool branch_taken_0x241878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241878u;
        // 0x24187c: 0xae400060  sw          $zero, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241878) {
            ctx->pc = 0x2419E8u;
            goto label_2419e8;
        }
    }
    ctx->pc = 0x241880u;
    // 0x241880: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x241880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x241884: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x241884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241888: 0x24421e90  addiu       $v0, $v0, 0x1E90
    ctx->pc = 0x241888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7824));
    // 0x24188c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241890: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241894: 0x800008  jr          $a0
    ctx->pc = 0x241894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24189Cu: goto label_24189c;
            case 0x241904u: goto label_241904;
            case 0x241988u: goto label_241988;
            case 0x2419B8u: goto label_2419b8;
            case 0x2419D4u: goto label_2419d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241894u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24189Cu;
label_24189c:
    // 0x24189c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2418a0: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2418a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2418a4: 0x8c643838  lw          $a0, 0x3838($v1)
    ctx->pc = 0x2418a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x353838u));
    // 0x2418a8: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x2418a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2418ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2418acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2418b0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2418B0u;
    {
        const bool branch_taken_0x2418b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2418B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418B0u;
        // 0x2418b4: 0xae450050  sw          $a1, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418b0) {
            ctx->pc = 0x2418D4u;
            goto label_2418d4;
        }
    }
    ctx->pc = 0x2418B8u;
    // 0x2418b8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2418b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2418bc: 0x8c623888  lw          $v0, 0x3888($v1)
    ctx->pc = 0x2418bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353888u));
    // 0x2418c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2418C0u;
    {
        const bool branch_taken_0x2418c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2418C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418C0u;
        // 0x2418c4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418c0) {
            ctx->pc = 0x2418D8u;
            goto label_2418d8;
        }
    }
    ctx->pc = 0x2418C8u;
    // 0x2418c8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2418c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2418cc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2418ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2418d0: 0xae450050  sw          $a1, 0x50($s2)
    ctx->pc = 0x2418d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 5));
label_2418d4:
    // 0x2418d4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2418d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2418d8:
    // 0x2418d8: 0x8c4338b0  lw          $v1, 0x38B0($v0)
    ctx->pc = 0x2418d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14512)));
    // 0x2418dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2418DCu;
    {
        const bool branch_taken_0x2418dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2418E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418DCu;
        // 0x2418e0: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418dc) {
            ctx->pc = 0x2418F0u;
            goto label_2418f0;
        }
    }
    ctx->pc = 0x2418E4u;
    // 0x2418e4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2418e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2418e8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2418e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2418ec: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2418ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_2418f0:
    // 0x2418f0: 0x24040e10  addiu       $a0, $zero, 0xE10
    ctx->pc = 0x2418f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x2418f4: 0x8c623900  lw          $v0, 0x3900($v1)
    ctx->pc = 0x2418f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14592)));
    // 0x2418f8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2418f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2418fc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2418FCu;
    {
        const bool branch_taken_0x2418fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418FCu;
        // 0x241900: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418fc) {
            ctx->pc = 0x2419E8u;
            goto label_2419e8;
        }
    }
    ctx->pc = 0x241904u;
label_241904:
    // 0x241904: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x241904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x241908: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x24190c: 0x8c643838  lw          $a0, 0x3838($v1)
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x353838u));
    // 0x241910: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x241910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x241914: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x241914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x241918: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241918u;
    {
        const bool branch_taken_0x241918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241918u;
        // 0x24191c: 0xae450050  sw          $a1, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241918) {
            ctx->pc = 0x24193Cu;
            goto label_24193c;
        }
    }
    ctx->pc = 0x241920u;
    // 0x241920: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x241920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x241924: 0x8c623888  lw          $v0, 0x3888($v1)
    ctx->pc = 0x241924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353888u));
    // 0x241928: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241928u;
    {
        const bool branch_taken_0x241928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241928u;
        // 0x24192c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241928) {
            ctx->pc = 0x241940u;
            goto label_241940;
        }
    }
    ctx->pc = 0x241930u;
    // 0x241930: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x241930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x241934: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x241934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x241938: 0xae450050  sw          $a1, 0x50($s2)
    ctx->pc = 0x241938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 5));
label_24193c:
    // 0x24193c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_241940:
    // 0x241940: 0x24070e10  addiu       $a3, $zero, 0xE10
    ctx->pc = 0x241940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x241944: 0x8c433900  lw          $v1, 0x3900($v0)
    ctx->pc = 0x241944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14592)));
    // 0x241948: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x24194c: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x24194cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x241950: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x241954: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x241954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x241958: 0x8c8539b8  lw          $a1, 0x39B8($a0)
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14776)));
    // 0x24195c: 0x8c473928  lw          $a3, 0x3928($v0)
    ctx->pc = 0x24195cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14632)));
    // 0x241960: 0x34c80004  ori         $t0, $a2, 0x4
    ctx->pc = 0x241960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x241964: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x241968: 0xc5400a  movz        $t0, $a2, $a1
    ctx->pc = 0x241968u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x24196c: 0x8c443968  lw          $a0, 0x3968($v0)
    ctx->pc = 0x24196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14696)));
    // 0x241970: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x241970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x241974: 0xae47005c  sw          $a3, 0x5C($s2)
    ctx->pc = 0x241974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 7));
    // 0x241978: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x241978u;
    {
        const bool branch_taken_0x241978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241978u;
        // 0x24197c: 0xae480050  sw          $t0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241978) {
            ctx->pc = 0x2419E8u;
            goto label_2419e8;
        }
    }
    ctx->pc = 0x241980u;
    // 0x241980: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x241980u;
    {
        const bool branch_taken_0x241980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241980u;
        // 0x241984: 0x35020010  ori         $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241980) {
            ctx->pc = 0x2419E4u;
            goto label_2419e4;
        }
    }
    ctx->pc = 0x241988u;
label_241988:
    // 0x241988: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24198c: 0x24060e10  addiu       $a2, $zero, 0xE10
    ctx->pc = 0x24198cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x241990: 0x8c433900  lw          $v1, 0x3900($v0)
    ctx->pc = 0x241990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x353900u));
    // 0x241994: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x241994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x241998: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x241998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x24199c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x24199cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2419a0: 0x8c853990  lw          $a1, 0x3990($a0)
    ctx->pc = 0x2419a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14736)));
    // 0x2419a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2419a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2419a8: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2419a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x2419ac: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x2419acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
    // 0x2419b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2419B0u;
    {
        const bool branch_taken_0x2419b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B0u;
        // 0x2419b4: 0xae430058  sw          $v1, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419b0) {
            ctx->pc = 0x2419E8u;
            goto label_2419e8;
        }
    }
    ctx->pc = 0x2419B8u;
label_2419b8:
    // 0x2419b8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x2419b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2419bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2419bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2419c0: 0x3442fdff  ori         $v0, $v0, 0xFDFF
    ctx->pc = 0x2419c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65023);
    // 0x2419c4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2419c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2419c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2419c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2419cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2419CCu;
    {
        const bool branch_taken_0x2419cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419CCu;
        // 0x2419d0: 0xae430050  sw          $v1, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419cc) {
            ctx->pc = 0x2419E8u;
            goto label_2419e8;
        }
    }
    ctx->pc = 0x2419D4u;
label_2419d4:
    // 0x2419d4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2419d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2419d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2419d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2419dc: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x2419dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x2419e0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2419e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2419e4:
    // 0x2419e4: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2419e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_2419e8:
    // 0x2419e8: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2419e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2419ec: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2419ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2419f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2419F0u;
    {
        const bool branch_taken_0x2419f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419F0u;
        // 0x2419f4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419f0) {
            ctx->pc = 0x241A08u;
            goto label_241a08;
        }
    }
    ctx->pc = 0x2419F8u;
    // 0x2419f8: 0x34a30008  ori         $v1, $a1, 0x8
    ctx->pc = 0x2419f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x2419fc: 0x8c443860  lw          $a0, 0x3860($v0)
    ctx->pc = 0x2419fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14432)));
    // 0x241a00: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x241a00u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x241a04: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x241a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_241a08:
    // 0x241a08: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x241a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x241a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a14: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x241A14u;
    SET_GPR_U32(ctx, 31, 0x241A1Cu);
    ctx->pc = 0x241A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A14u;
    // 0x241a18: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x241A14u, 0x241A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A1Cu;
label_241a1c:
    // 0x241a1c: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x241a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x241a20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x241a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x241a24: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x241A24u;
    {
        const bool branch_taken_0x241a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A24u;
        // 0x241a28: 0x8f85b730  lw          $a1, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a24) {
            ctx->pc = 0x241AECu;
            goto label_241aec;
        }
    }
    ctx->pc = 0x241A2Cu;
    // 0x241a2c: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x241A2Cu;
    {
        const bool branch_taken_0x241a2c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x241A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A2Cu;
        // 0x241a30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a2c) {
            ctx->pc = 0x241A64u;
            goto label_241a64;
        }
    }
    ctx->pc = 0x241A34u;
    // 0x241a34: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x241a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
label_241a38:
    // 0x241a38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x241a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x241a3c: 0x24c22c88  addiu       $v0, $a2, 0x2C88
    ctx->pc = 0x241a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 11400));
    // 0x241a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x241a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241a48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x241a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241a4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241a50: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x241a50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x241a54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241a58: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x241a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x241a5c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x241A5Cu;
    {
        const bool branch_taken_0x241a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x241A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A5Cu;
        // 0x241a60: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a5c) {
            ctx->pc = 0x241A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241a38;
        }
    }
    ctx->pc = 0x241A64u;
label_241a64:
    // 0x241a64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a68: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x241a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241a6c: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x241a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_241a70:
    // 0x241a70: 0xc08d564  jal         func_235590
    ctx->pc = 0x241A70u;
    SET_GPR_U32(ctx, 31, 0x241A78u);
    ctx->pc = 0x241A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A70u;
    // 0x241a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x241A70u, 0x241A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A78u;
label_241a78:
    // 0x241a78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241A78u;
    {
        const bool branch_taken_0x241a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A78u;
        // 0x241a7c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a78) {
            ctx->pc = 0x241A88u;
            goto label_241a88;
        }
    }
    ctx->pc = 0x241A80u;
    // 0x241a80: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x241a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x241a84: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x241a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_241a88:
    // 0x241a88: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x241a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a8c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x241a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x241a90: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x241A90u;
    {
        const bool branch_taken_0x241a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A90u;
        // 0x241a94: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a90) {
            ctx->pc = 0x241A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241a70;
        }
    }
    ctx->pc = 0x241A98u;
    // 0x241a98: 0x8f88b730  lw          $t0, -0x48D0($gp)
    ctx->pc = 0x241a98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x241a9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x241a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241aa0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x241aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241aa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241aa8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x241aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x241aac: 0x0  nop
    ctx->pc = 0x241aacu;
    // NOP
label_241ab0:
    // 0x241ab0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x241ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x241ab4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ab8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x241AB8u;
    {
        const bool branch_taken_0x241ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AB8u;
        // 0x241abc: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ab8) {
            ctx->pc = 0x241AD4u;
            goto label_241ad4;
        }
    }
    ctx->pc = 0x241AC0u;
    // 0x241ac0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x241ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x241ac4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x241ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x241ac8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x241ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x241acc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x241accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x241ad0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x241ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_241ad4:
    // 0x241ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x241ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ad8: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x241ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x241adc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x241ADCu;
    {
        const bool branch_taken_0x241adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241ADCu;
        // 0x241ae0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241adc) {
            ctx->pc = 0x241AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241ab0;
        }
    }
    ctx->pc = 0x241AE4u;
    // 0x241ae4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x241AE4u;
    {
        const bool branch_taken_0x241ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AE4u;
        // 0x241ae8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ae4) {
            ctx->pc = 0x241AF4u;
            goto label_241af4;
        }
    }
    ctx->pc = 0x241AECu;
label_241aec:
    // 0x241aec: 0x8f88b730  lw          $t0, -0x48D0($gp)
    ctx->pc = 0x241aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x241af0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241af4:
    // 0x241af4: 0x19000021  blez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x241AF4u;
    {
        const bool branch_taken_0x241af4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x241AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AF4u;
        // 0x241af8: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241af4) {
            ctx->pc = 0x241B7Cu;
            goto label_241b7c;
        }
    }
    ctx->pc = 0x241AFCu;
    // 0x241afc: 0x26530031  addiu       $s3, $s2, 0x31
    ctx->pc = 0x241afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 49));
    // 0x241b00: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x241b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x241b04: 0x0  nop
    ctx->pc = 0x241b04u;
    // NOP
label_241b08:
    // 0x241b08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x241b0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241B0Cu;
    {
        const bool branch_taken_0x241b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B0Cu;
        // 0x241b10: 0x2b02821  addu        $a1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b0c) {
            ctx->pc = 0x241B30u;
            goto label_241b30;
        }
    }
    ctx->pc = 0x241B14u;
    // 0x241b14: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x241b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x241b18: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x241b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x241b1c: 0x24422c88  addiu       $v0, $v0, 0x2C88
    ctx->pc = 0x241b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11400));
    // 0x241b20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241b24: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x241b24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241B28u;
    {
        const bool branch_taken_0x241b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B28u;
        // 0x241b2c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b28) {
            ctx->pc = 0x241B34u;
            goto label_241b34;
        }
    }
    ctx->pc = 0x241B30u;
label_241b30:
    // 0x241b30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241b34:
    // 0x241b34: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x241b34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x241b38: 0xc08828c  jal         func_220A30
    ctx->pc = 0x241B38u;
    SET_GPR_U32(ctx, 31, 0x241B40u);
    ctx->pc = 0x241B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B38u;
    // 0x241b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x241B38u, 0x241B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B40u;
label_241b40:
    // 0x241b40: 0x24030b78  addiu       $v1, $zero, 0xB78
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x241b44: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x241b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x241b48: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x241b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x241b4c: 0x2d02821  addu        $a1, $s6, $s0
    ctx->pc = 0x241b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x241b50: 0x2703021  addu        $a2, $s3, $s0
    ctx->pc = 0x241b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x241b54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241b58: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x241b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x241b5c: 0x90430074  lbu         $v1, 0x74($v0)
    ctx->pc = 0x241b5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x241b60: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x241b60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x241b64: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x241b64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x241b68: 0x8f88b730  lw          $t0, -0x48D0($gp)
    ctx->pc = 0x241b68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x241b6c: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x241b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x241b70: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x241B70u;
    {
        const bool branch_taken_0x241b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241b70) {
            ctx->pc = 0x241B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241B70u;
            // 0x241b74: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241b08;
        }
    }
    ctx->pc = 0x241B78u;
    // 0x241b78: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x241b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
label_241b7c:
    // 0x241b7c: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x241b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x241b80: 0x24472a88  addiu       $a3, $v0, 0x2A88
    ctx->pc = 0x241b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 10888));
    // 0x241b84: 0x246c1234  addiu       $t4, $v1, 0x1234
    ctx->pc = 0x241b84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4660));
    // 0x241b88: 0x24eb00a0  addiu       $t3, $a3, 0xA0
    ctx->pc = 0x241b88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x241b8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x241b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b90: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x241b90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b94: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x241b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b98: 0x26490031  addiu       $t1, $s2, 0x31
    ctx->pc = 0x241b98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 49));
    // 0x241b9c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x241b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_241ba0:
    // 0x241ba0: 0x442001c  bltzl       $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x241BA0u;
    {
        const bool branch_taken_0x241ba0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x241ba0) {
            ctx->pc = 0x241BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241BA0u;
            // 0x241ba4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C14u;
            goto label_241c14;
        }
    }
    ctx->pc = 0x241BA8u;
    // 0x241ba8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x241ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x241bac: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x241BACu;
    {
        const bool branch_taken_0x241bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241bac) {
            ctx->pc = 0x241BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241BACu;
            // 0x241bb0: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C14u;
            goto label_241c14;
        }
    }
    ctx->pc = 0x241BB4u;
    // 0x241bb4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x241bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x241bb8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x241bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x241bbc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x241BBCu;
    {
        const bool branch_taken_0x241bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BBCu;
        // 0x241bc0: 0xd01821  addu        $v1, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241bbc) {
            ctx->pc = 0x241BECu;
            goto label_241bec;
        }
    }
    ctx->pc = 0x241BC4u;
    // 0x241bc4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x241bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x241bc8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x241bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x241bcc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x241bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241bd0: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x241BD0u;
    {
        const bool branch_taken_0x241bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x241bd0) {
            ctx->pc = 0x241BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241BD0u;
            // 0x241bd4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C14u;
            goto label_241c14;
        }
    }
    ctx->pc = 0x241BD8u;
    // 0x241bd8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241BD8u;
    {
        const bool branch_taken_0x241bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BD8u;
        // 0x241bdc: 0xd01821  addu        $v1, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241bd8) {
            ctx->pc = 0x241BECu;
            goto label_241bec;
        }
    }
    ctx->pc = 0x241BE0u;
    // 0x241be0: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x241be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x241be4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241BE4u;
    {
        const bool branch_taken_0x241be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BE4u;
        // 0x241be8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241be4) {
            ctx->pc = 0x241BF0u;
            goto label_241bf0;
        }
    }
    ctx->pc = 0x241BECu;
label_241bec:
    // 0x241bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x241becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241bf0:
    // 0x241bf0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x241bf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x241bf4: 0x1502021  addu        $a0, $t2, $s0
    ctx->pc = 0x241bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x241bf8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x241bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x241bfc: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x241bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x241c00: 0x1301821  addu        $v1, $t1, $s0
    ctx->pc = 0x241c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x241c04: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x241c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x241c08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241c0c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x241c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x241c10: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_241c14:
    // 0x241c14: 0xeb102a  slt         $v0, $a3, $t3
    ctx->pc = 0x241c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x241c18: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x241C18u;
    {
        const bool branch_taken_0x241c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241c18) {
            ctx->pc = 0x241C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241C18u;
            // 0x241c1c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241ba0;
        }
    }
    ctx->pc = 0x241C20u;
    // 0x241c20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x241c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241c24: 0x2081823  subu        $v1, $s0, $t0
    ctx->pc = 0x241c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x241c28: 0xafc211f8  sw          $v0, 0x11F8($fp)
    ctx->pc = 0x241c28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4600), GPR_U32(ctx, 2));
    // 0x241c2c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x241c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_241c30:
    // 0x241c30: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x241C30u;
    SET_GPR_U32(ctx, 31, 0x241C38u);
    ctx->pc = 0x241C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C30u;
    // 0x241c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x241C30u, 0x241C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C38u;
label_241c38:
    // 0x241c38: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x241c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x241c3c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x241c3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x241c40: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x241c40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x241c44: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x241c44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x241c48: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x241c48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x241c4c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x241c4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x241c50: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x241c50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x241c54: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x241c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x241c58: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x241c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241c5c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x241c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241c60: 0x3e00008  jr          $ra
    ctx->pc = 0x241C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C60u;
        // 0x241c64: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241C68u;
}
