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

// Function: audiovideo_pageTick
// Address: 0x2364c8 - 0x2365b8
void audiovideo_pageTick_0x2364c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audiovideo_pageTick_0x2364c8");
#endif

    switch (ctx->pc) {
        case 0x236520u: goto label_236520;
        case 0x236528u: goto label_236528;
        case 0x236594u: goto label_236594;
        case 0x2365a0u: goto label_2365a0;
        default: break;
    }

    ctx->pc = 0x2364c8u;

    // 0x2364c8: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x2364c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x2364cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2364ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2364d0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2364d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2364d4: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x2364d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x2364d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2364d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2364dc: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2364dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2364e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2364e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2364e4: 0x24c61308  addiu       $a2, $a2, 0x1308
    ctx->pc = 0x2364e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x2364e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2364e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2364ec: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x2364ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x2364f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2364f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2364f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2364f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2364f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2364f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2364fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2364fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x236500: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x236500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x236504: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x236504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x236508: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x236508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23650c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23650cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236510: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x236510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x236514: 0x8cc401e0  lw          $a0, 0x1E0($a2)
    ctx->pc = 0x236514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 480)));
    // 0x236518: 0xc08c086  jal         func_230218
    ctx->pc = 0x236518u;
    SET_GPR_U32(ctx, 31, 0x236520u);
    ctx->pc = 0x23651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236518u;
    // 0x23651c: 0x24a53cd8  addiu       $a1, $a1, 0x3CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x236518u, 0x236520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236520u;
label_236520:
    // 0x236520: 0xc08a984  jal         func_22A610
    ctx->pc = 0x236520u;
    SET_GPR_U32(ctx, 31, 0x236528u);
    ctx->pc = 0x236524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236520u;
    // 0x236524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x236520u, 0x236528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236528u;
label_236528:
    // 0x236528: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23652c: 0x8c433770  lw          $v1, 0x3770($v0)
    ctx->pc = 0x23652cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x353770u));
    // 0x236530: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x236530u;
    {
        const bool branch_taken_0x236530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236530u;
        // 0x236534: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236530) {
            ctx->pc = 0x236548u;
            goto label_236548;
        }
    }
    ctx->pc = 0x236538u;
    // 0x236538: 0x24833c18  addiu       $v1, $a0, 0x3C18
    ctx->pc = 0x236538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x23653c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x23653cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x236540: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x236540u;
    {
        const bool branch_taken_0x236540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236540u;
        // 0x236544: 0x3042bfbf  andi        $v0, $v0, 0xBFBF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49087);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236540) {
            ctx->pc = 0x236554u;
            goto label_236554;
        }
    }
    ctx->pc = 0x236548u;
label_236548:
    // 0x236548: 0x24833c18  addiu       $v1, $a0, 0x3C18
    ctx->pc = 0x236548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x23654c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x23654cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x236550: 0x34424040  ori         $v0, $v0, 0x4040
    ctx->pc = 0x236550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
label_236554:
    // 0x236554: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x236554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x236558: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23655c: 0x8c433798  lw          $v1, 0x3798($v0)
    ctx->pc = 0x23655cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x353798u));
    // 0x236560: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x236560u;
    {
        const bool branch_taken_0x236560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236560u;
        // 0x236564: 0x24833c18  addiu       $v1, $a0, 0x3C18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236560) {
            ctx->pc = 0x236574u;
            goto label_236574;
        }
    }
    ctx->pc = 0x236568u;
    // 0x236568: 0x9462006a  lhu         $v0, 0x6A($v1)
    ctx->pc = 0x236568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x23656c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23656Cu;
    {
        const bool branch_taken_0x23656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23656Cu;
        // 0x236570: 0x3042bfbf  andi        $v0, $v0, 0xBFBF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49087);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23656c) {
            ctx->pc = 0x23657Cu;
            goto label_23657c;
        }
    }
    ctx->pc = 0x236574u;
label_236574:
    // 0x236574: 0x9462006a  lhu         $v0, 0x6A($v1)
    ctx->pc = 0x236574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x236578: 0x34424040  ori         $v0, $v0, 0x4040
    ctx->pc = 0x236578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
label_23657c:
    // 0x23657c: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x23657cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x236580: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x236580u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x236584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236588: 0x26103c08  addiu       $s0, $s0, 0x3C08
    ctx->pc = 0x236588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15368));
    // 0x23658c: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23658Cu;
    SET_GPR_U32(ctx, 31, 0x236594u);
    ctx->pc = 0x236590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23658Cu;
    // 0x236590: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23658Cu, 0x236594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236594u;
label_236594:
    // 0x236594: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x236594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x236598: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x236598u;
    SET_GPR_U32(ctx, 31, 0x2365A0u);
    ctx->pc = 0x23659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236598u;
    // 0x23659c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x236598u, 0x2365A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365A0u;
label_2365a0:
    // 0x2365a0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2365a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2365a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2365a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2365a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2365a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2365ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2365acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2365b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2365B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2365B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365B0u;
        // 0x2365b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2365B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2365B8u;
}
