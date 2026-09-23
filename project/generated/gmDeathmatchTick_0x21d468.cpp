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

// Function: gmDeathmatchTick
// Address: 0x21d468 - 0x21d784
void gmDeathmatchTick_0x21d468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmDeathmatchTick_0x21d468");
#endif

    switch (ctx->pc) {
        case 0x21d4e0u: goto label_21d4e0;
        case 0x21d4ecu: goto label_21d4ec;
        case 0x21d51cu: goto label_21d51c;
        case 0x21d530u: goto label_21d530;
        case 0x21d538u: goto label_21d538;
        case 0x21d59cu: goto label_21d59c;
        case 0x21d5a8u: goto label_21d5a8;
        case 0x21d5b0u: goto label_21d5b0;
        case 0x21d5ecu: goto label_21d5ec;
        case 0x21d610u: goto label_21d610;
        case 0x21d6bcu: goto label_21d6bc;
        case 0x21d70cu: goto label_21d70c;
        case 0x21d720u: goto label_21d720;
        case 0x21d728u: goto label_21d728;
        case 0x21d744u: goto label_21d744;
        case 0x21d754u: goto label_21d754;
        default: break;
    }

    ctx->pc = 0x21d468u;

    // 0x21d468: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x21d468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x21d46c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21d470: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x21d470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x21d474: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x21d474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x21d478: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x21d478u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x21d47c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x21d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x21d480: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58
    ctx->pc = 0x21d480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x21d484: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x21d484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x21d488: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x21d488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x21d48c: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x21d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x21d490: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x21d490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x21d494: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x21d494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x21d498: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x21d498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x21d49c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x21d49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x21d4a0: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x21d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21d4a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21d4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21d4a8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x21D4A8u;
    {
        const bool branch_taken_0x21d4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4A8u;
        // 0x21d4ac: 0x3c128000  lui         $s2, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4a8) {
            ctx->pc = 0x21D578u;
            goto label_21d578;
        }
    }
    ctx->pc = 0x21D4B0u;
    // 0x21d4b0: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x21d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d4b4: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x21d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x21d4b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d4bc: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x21D4BCu;
    {
        const bool branch_taken_0x21d4bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4BCu;
        // 0x21d4c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4bc) {
            ctx->pc = 0x21D578u;
            goto label_21d578;
        }
    }
    ctx->pc = 0x21D4C4u;
    // 0x21d4c4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21d4c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21d4c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4cc: 0x24562c18  addiu       $s6, $v0, 0x2C18
    ctx->pc = 0x21d4ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21d4d0: 0x24141210  addiu       $s4, $zero, 0x1210
    ctx->pc = 0x21d4d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x21d4d4: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x21d4d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x21d4d8: 0x3c1e0800  lui         $fp, 0x800
    ctx->pc = 0x21d4d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)2048 << 16));
    // 0x21d4dc: 0x2148818  mult        $s1, $s0, $s4
    ctx->pc = 0x21d4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_21d4e0:
    // 0x21d4e0: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x21d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21d4e4: 0xc0a23da  jal         func_288F68
    ctx->pc = 0x21D4E4u;
    SET_GPR_U32(ctx, 31, 0x21D4ECu);
    ctx->pc = 0x21D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4E4u;
    // 0x21d4e8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F68u, 0x21D4E4u, 0x21D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4ECu;
label_21d4ec:
    // 0x21d4ec: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21D4ECu;
    {
        const bool branch_taken_0x21d4ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4ECu;
        // 0x21d4f0: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4ec) {
            ctx->pc = 0x21D55Cu;
            goto label_21d55c;
        }
    }
    ctx->pc = 0x21D4F4u;
    // 0x21d4f4: 0x26a4e588  addiu       $a0, $s5, -0x1A78
    ctx->pc = 0x21d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960520));
    // 0x21d4f8: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x21d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21d4fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21d4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21d500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21d504: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x21d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x21d508: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x21d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x21d50c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x21d50cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d510: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x21d510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21d514: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21D514u;
    SET_GPR_U32(ctx, 31, 0x21D51Cu);
    ctx->pc = 0x21D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D514u;
    // 0x21d518: 0x8ce506ec  lw          $a1, 0x6EC($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21D514u, 0x21D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D51Cu;
label_21d51c:
    // 0x21d51c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d51cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d520: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x21d520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d524: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D524u;
    {
        const bool branch_taken_0x21d524 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21d524) {
            ctx->pc = 0x21D528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D524u;
            // 0x21d528: 0x8e620050  lw          $v0, 0x50($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D550u;
            goto label_21d550;
        }
    }
    ctx->pc = 0x21D52Cu;
    // 0x21d52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d530:
    // 0x21d530: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x21D530u;
    SET_GPR_U32(ctx, 31, 0x21D538u);
    ctx->pc = 0x21D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D530u;
    // 0x21d534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x21D530u, 0x21D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D538u;
label_21d538:
    // 0x21d538: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d53c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x21d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d540: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21d540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d544: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21D544u;
    {
        const bool branch_taken_0x21d544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D544u;
        // 0x21d548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d544) {
            ctx->pc = 0x21D530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d530;
        }
    }
    ctx->pc = 0x21D54Cu;
    // 0x21d54c: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x21d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_21d550:
    // 0x21d550: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x21d550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x21d554: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21D554u;
    {
        const bool branch_taken_0x21d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D554u;
        // 0x21d558: 0xae620050  sw          $v0, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d554) {
            ctx->pc = 0x21D578u;
            goto label_21d578;
        }
    }
    ctx->pc = 0x21D55Cu;
label_21d55c:
    // 0x21d55c: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x21d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d560: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d564: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x21d564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x21d568: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21d568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d56c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x21d56cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d570: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x21D570u;
    {
        const bool branch_taken_0x21d570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D570u;
        // 0x21d574: 0x2148818  mult        $s1, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d570) {
            ctx->pc = 0x21D4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d4e0;
        }
    }
    ctx->pc = 0x21D578u;
label_21d578:
    // 0x21d578: 0x26e3c4a8  addiu       $v1, $s7, -0x3B58
    ctx->pc = 0x21d578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x21d57c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21d580: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x21d580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x21d584: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21D584u;
    {
        const bool branch_taken_0x21d584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D584u;
        // 0x21d588: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d584) {
            ctx->pc = 0x21D610u;
            goto label_21d610;
        }
    }
    ctx->pc = 0x21D58Cu;
    // 0x21d58c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d590: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x21d590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x21d594: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x21D594u;
    SET_GPR_U32(ctx, 31, 0x21D59Cu);
    ctx->pc = 0x21D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D594u;
    // 0x21d598: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x21D594u, 0x21D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D59Cu;
label_21d59c:
    // 0x21d59c: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x21d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d5a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21D5A0u;
    {
        const bool branch_taken_0x21d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5A0u;
        // 0x21d5a4: 0x8f85b59c  lw          $a1, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5a0) {
            ctx->pc = 0x21D5B0u;
            goto label_21d5b0;
        }
    }
    ctx->pc = 0x21D5A8u;
label_21d5a8:
    // 0x21d5a8: 0x8f85b59c  lw          $a1, -0x4A64($gp)
    ctx->pc = 0x21d5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x21d5ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21d5b0:
    // 0x21d5b0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x21d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x21d5b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21d5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d5b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21D5B8u;
    {
        const bool branch_taken_0x21d5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5B8u;
        // 0x21d5bc: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5b8) {
            ctx->pc = 0x21D610u;
            goto label_21d610;
        }
    }
    ctx->pc = 0x21D5C0u;
    // 0x21d5c0: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x21d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21d5c4: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x21d5c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21d5c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d5cc: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x21d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21d5d0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x21d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x21d5d4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21d5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d5d8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x21D5D8u;
    {
        const bool branch_taken_0x21d5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d5d8) {
            ctx->pc = 0x21D5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D5D8u;
            // 0x21d5dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d5b0;
        }
    }
    ctx->pc = 0x21D5E0u;
    // 0x21d5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d5e4: 0xc0a241e  jal         func_289078
    ctx->pc = 0x21D5E4u;
    SET_GPR_U32(ctx, 31, 0x21D5ECu);
    ctx->pc = 0x21D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5E4u;
    // 0x21d5e8: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x21D5E4u, 0x21D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5ECu;
label_21d5ec:
    // 0x21d5ec: 0x26e4c4a8  addiu       $a0, $s7, -0x3B58
    ctx->pc = 0x21d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x21d5f0: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x21d5f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d5f4: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x21d5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x21d5f8: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x21d5f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x21d5fc: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x21d5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21d600: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x21D600u;
    {
        const bool branch_taken_0x21d600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D600u;
        // 0x21d604: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d600) {
            ctx->pc = 0x21D5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d5a8;
        }
    }
    ctx->pc = 0x21D608u;
    // 0x21d608: 0xc0874d2  jal         func_21D348
    ctx->pc = 0x21D608u;
    SET_GPR_U32(ctx, 31, 0x21D610u);
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21D608u, 0x21D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D610u;
label_21d610:
    // 0x21d610: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21d610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21d614: 0x12420049  beq         $s2, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x21D614u;
    {
        const bool branch_taken_0x21d614 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D614u;
        // 0x21d618: 0x26e6c4a8  addiu       $a2, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d614) {
            ctx->pc = 0x21D73Cu;
            goto label_21d73c;
        }
    }
    ctx->pc = 0x21D61Cu;
    // 0x21d61c: 0x8cc3005c  lw          $v1, 0x5C($a2)
    ctx->pc = 0x21d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x21d620: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x21d620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d624: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x21D624u;
    {
        const bool branch_taken_0x21d624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D624u;
        // 0x21d628: 0x722823  subu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d624) {
            ctx->pc = 0x21D73Cu;
            goto label_21d73c;
        }
    }
    ctx->pc = 0x21D62Cu;
    // 0x21d62c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x21d62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21d630: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D630u;
    {
        const bool branch_taken_0x21d630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D630u;
        // 0x21d634: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d630) {
            ctx->pc = 0x21D64Cu;
            goto label_21d64c;
        }
    }
    ctx->pc = 0x21D638u;
    // 0x21d638: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x21d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x21d63c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x21d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x21d640: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21d640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21d644: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21d644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21d648: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x21d648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
label_21d64c:
    // 0x21d64c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x21d64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21d650: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D650u;
    {
        const bool branch_taken_0x21d650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D650u;
        // 0x21d654: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d650) {
            ctx->pc = 0x21D670u;
            goto label_21d670;
        }
    }
    ctx->pc = 0x21D658u;
    // 0x21d658: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x21d658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x21d65c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x21d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x21d660: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21d660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21d664: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21d664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21d668: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x21d668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
    // 0x21d66c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21d670:
    // 0x21d670: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21D670u;
    {
        const bool branch_taken_0x21d670 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D670u;
        // 0x21d674: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d670) {
            ctx->pc = 0x21D6C4u;
            goto label_21d6c4;
        }
    }
    ctx->pc = 0x21D678u;
    // 0x21d678: 0x8cc40050  lw          $a0, 0x50($a2)
    ctx->pc = 0x21d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x21d67c: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x21d67cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x21d680: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x21d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x21d684: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21D684u;
    {
        const bool branch_taken_0x21d684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D684u;
        // 0x21d688: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d684) {
            ctx->pc = 0x21D6C4u;
            goto label_21d6c4;
        }
    }
    ctx->pc = 0x21D68Cu;
    // 0x21d68c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x21d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21d690: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21d690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21d694: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x21d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21d698: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x21d698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x21d69c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d6a0: 0xacc40050  sw          $a0, 0x50($a2)
    ctx->pc = 0x21d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 4));
    // 0x21d6a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d6a8: 0x240400c7  addiu       $a0, $zero, 0xC7
    ctx->pc = 0x21d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x21d6ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d6b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6b4: 0xc081546  jal         func_205518
    ctx->pc = 0x21D6B4u;
    SET_GPR_U32(ctx, 31, 0x21D6BCu);
    ctx->pc = 0x21D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6B4u;
    // 0x21d6b8: 0x8c510b10  lw          $s1, 0xB10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x21D6B4u, 0x21D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6BCu;
label_21d6bc:
    // 0x21d6bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21D6BCu;
    {
        const bool branch_taken_0x21d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d6bc) {
            ctx->pc = 0x21D70Cu;
            goto label_21d70c;
        }
    }
    ctx->pc = 0x21D6C4u;
label_21d6c4:
    // 0x21d6c4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21D6C4u;
    {
        const bool branch_taken_0x21d6c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6C4u;
        // 0x21d6c8: 0x26e6c4a8  addiu       $a2, $s7, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6c4) {
            ctx->pc = 0x21D70Cu;
            goto label_21d70c;
        }
    }
    ctx->pc = 0x21D6CCu;
    // 0x21d6cc: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x21d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x21d6d0: 0x8cc40050  lw          $a0, 0x50($a2)
    ctx->pc = 0x21d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x21d6d4: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x21d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x21d6d8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21D6D8u;
    {
        const bool branch_taken_0x21d6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6D8u;
        // 0x21d6dc: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6d8) {
            ctx->pc = 0x21D70Cu;
            goto label_21d70c;
        }
    }
    ctx->pc = 0x21D6E0u;
    // 0x21d6e0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21d6e4: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x21d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21d6e8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x21d6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x21d6ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d6f0: 0xacc40050  sw          $a0, 0x50($a2)
    ctx->pc = 0x21d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 4));
    // 0x21d6f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d6f8: 0x240400c7  addiu       $a0, $zero, 0xC7
    ctx->pc = 0x21d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x21d6fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d704: 0xc081546  jal         func_205518
    ctx->pc = 0x21D704u;
    SET_GPR_U32(ctx, 31, 0x21D70Cu);
    ctx->pc = 0x21D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D704u;
    // 0x21d708: 0x8c510b14  lw          $s1, 0xB14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2836)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x21D704u, 0x21D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D70Cu;
label_21d70c:
    // 0x21d70c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x21D70Cu;
    {
        const bool branch_taken_0x21d70c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D70Cu;
        // 0x21d710: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d70c) {
            ctx->pc = 0x21D73Cu;
            goto label_21d73c;
        }
    }
    ctx->pc = 0x21D714u;
    // 0x21d714: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D714u;
    {
        const bool branch_taken_0x21d714 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D714u;
        // 0x21d718: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d714) {
            ctx->pc = 0x21D73Cu;
            goto label_21d73c;
        }
    }
    ctx->pc = 0x21D71Cu;
    // 0x21d71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d720:
    // 0x21d720: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x21D720u;
    SET_GPR_U32(ctx, 31, 0x21D728u);
    ctx->pc = 0x21D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D720u;
    // 0x21d724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x21D720u, 0x21D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D728u;
label_21d728:
    // 0x21d728: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d72c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x21d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d730: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21d730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21D734u;
    {
        const bool branch_taken_0x21d734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D734u;
        // 0x21d738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d734) {
            ctx->pc = 0x21D720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d720;
        }
    }
    ctx->pc = 0x21D73Cu;
label_21d73c:
    // 0x21d73c: 0xc087332  jal         func_21CCC8
    ctx->pc = 0x21D73Cu;
    SET_GPR_U32(ctx, 31, 0x21D744u);
    ctx->pc = 0x21CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCC8u, 0x21D73Cu, 0x21D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D744u;
label_21d744:
    // 0x21d744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D744u;
    {
        const bool branch_taken_0x21d744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D744u;
        // 0x21d748: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d744) {
            ctx->pc = 0x21D758u;
            goto label_21d758;
        }
    }
    ctx->pc = 0x21D74Cu;
    // 0x21d74c: 0xc0874d2  jal         func_21D348
    ctx->pc = 0x21D74Cu;
    SET_GPR_U32(ctx, 31, 0x21D754u);
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21D74Cu, 0x21D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D754u;
label_21d754:
    // 0x21d754: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x21d754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_21d758:
    // 0x21d758: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x21d758u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21d75c: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x21d75cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x21d760: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x21d760u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21d764: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x21d764u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21d768: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x21d768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21d76c: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x21d76cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21d770: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x21d770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21d774: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x21d774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21d778: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x21d778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21d77c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D77Cu;
        // 0x21d780: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D784u;
}
