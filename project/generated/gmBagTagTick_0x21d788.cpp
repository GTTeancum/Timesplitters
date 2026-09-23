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

// Function: gmBagTagTick
// Address: 0x21d788 - 0x21d938
void gmBagTagTick_0x21d788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmBagTagTick_0x21d788");
#endif

    switch (ctx->pc) {
        case 0x21d7d4u: goto label_21d7d4;
        case 0x21d854u: goto label_21d854;
        case 0x21d884u: goto label_21d884;
        case 0x21d898u: goto label_21d898;
        case 0x21d8acu: goto label_21d8ac;
        case 0x21d900u: goto label_21d900;
        case 0x21d908u: goto label_21d908;
        default: break;
    }

    ctx->pc = 0x21d788u;

    // 0x21d788: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x21d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d78c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21d78cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21d790: 0x8f85b59c  lw          $a1, -0x4A64($gp)
    ctx->pc = 0x21d790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x21d794: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x21d794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d79c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x21d79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21d7a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21d7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21d7ac: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x21d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21d7b0: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21D7B0u;
    {
        const bool branch_taken_0x21d7b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7B0u;
        // 0x21d7b4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7b0) {
            ctx->pc = 0x21D800u;
            goto label_21d800;
        }
    }
    ctx->pc = 0x21D7B8u;
    // 0x21d7b8: 0x8f88b238  lw          $t0, -0x4DC8($gp)
    ctx->pc = 0x21d7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21d7bc: 0x8d0201e4  lw          $v0, 0x1E4($t0)
    ctx->pc = 0x21d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 484)));
    // 0x21d7c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D7C0u;
    {
        const bool branch_taken_0x21d7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7C0u;
        // 0x21d7c4: 0x8f87b6f8  lw          $a3, -0x4908($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7c0) {
            ctx->pc = 0x21D7D0u;
            goto label_21d7d0;
        }
    }
    ctx->pc = 0x21D7C8u;
    // 0x21d7c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21D7C8u;
    {
        const bool branch_taken_0x21d7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7C8u;
        // 0x21d7cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7c8) {
            ctx->pc = 0x21D804u;
            goto label_21d804;
        }
    }
    ctx->pc = 0x21D7D0u;
label_21d7d0:
    // 0x21d7d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21d7d4:
    // 0x21d7d4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x21d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21d7d8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21d7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d7dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D7DCu;
    {
        const bool branch_taken_0x21d7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7DCu;
        // 0x21d7e0: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7dc) {
            ctx->pc = 0x21D804u;
            goto label_21d804;
        }
    }
    ctx->pc = 0x21D7E4u;
    // 0x21d7e4: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x21d7e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21d7e8: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x21d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x21d7ec: 0x8c4301e4  lw          $v1, 0x1E4($v0)
    ctx->pc = 0x21d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    // 0x21d7f0: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21D7F0u;
    {
        const bool branch_taken_0x21d7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d7f0) {
            ctx->pc = 0x21D7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D7F0u;
            // 0x21d7f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d7d4;
        }
    }
    ctx->pc = 0x21D7F8u;
    // 0x21d7f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21D7F8u;
    {
        const bool branch_taken_0x21d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7F8u;
        // 0x21d7fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7f8) {
            ctx->pc = 0x21D804u;
            goto label_21d804;
        }
    }
    ctx->pc = 0x21D800u;
label_21d800:
    // 0x21d800: 0x8f87b6f8  lw          $a3, -0x4908($gp)
    ctx->pc = 0x21d800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948600)));
label_21d804:
    // 0x21d804: 0x10c7002f  beq         $a2, $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x21D804u;
    {
        const bool branch_taken_0x21d804 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x21d804) {
            ctx->pc = 0x21D8C4u;
            goto label_21d8c4;
        }
    }
    ctx->pc = 0x21D80Cu;
    // 0x21d80c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21d80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d810: 0x4e0002c  bltz        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x21D810u;
    {
        const bool branch_taken_0x21d810 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x21D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D810u;
        // 0x21d814: 0xaf87b6f8  sw          $a3, -0x4908($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948600), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d810) {
            ctx->pc = 0x21D8C4u;
            goto label_21d8c4;
        }
    }
    ctx->pc = 0x21D818u;
    // 0x21d818: 0x24061210  addiu       $a2, $zero, 0x1210
    ctx->pc = 0x21d818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x21d81c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x21d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21d820: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x21d820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x21d824: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21d828: 0x24502c18  addiu       $s0, $v0, 0x2C18
    ctx->pc = 0x21d828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21d82c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d830: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x21d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21d834: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x21d834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21d838: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x21d838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d83c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21d840: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x21d840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21d844: 0x2484e568  addiu       $a0, $a0, -0x1A98
    ctx->pc = 0x21d844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960488));
    // 0x21d848: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x21d848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21d84c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21D84Cu;
    SET_GPR_U32(ctx, 31, 0x21D854u);
    ctx->pc = 0x21D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D84Cu;
    // 0x21d850: 0x8ce60b1c  lw          $a2, 0xB1C($a3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21D84Cu, 0x21D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D854u;
label_21d854:
    // 0x21d854: 0x8f87b6f8  lw          $a3, -0x4908($gp)
    ctx->pc = 0x21d854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948600)));
    // 0x21d858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21d858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d85c: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x21d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d860: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x21d860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d864: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D864u;
    {
        const bool branch_taken_0x21d864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D864u;
        // 0x21d868: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d864) {
            ctx->pc = 0x21D88Cu;
            goto label_21d88c;
        }
    }
    ctx->pc = 0x21D86Cu;
    // 0x21d86c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x21d86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21d870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21d874: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21d874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21d878: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21d878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d87c: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x21D87Cu;
    SET_GPR_U32(ctx, 31, 0x21D884u);
    ctx->pc = 0x21D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D87Cu;
    // 0x21d880: 0x8c650b20  lw          $a1, 0xB20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x21D87Cu, 0x21D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D884u;
label_21d884:
    // 0x21d884: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x21d884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d888: 0x8f87b6f8  lw          $a3, -0x4908($gp)
    ctx->pc = 0x21d888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948600)));
label_21d88c:
    // 0x21d88c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21D88Cu;
    {
        const bool branch_taken_0x21d88c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x21D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D88Cu;
        // 0x21d890: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d88c) {
            ctx->pc = 0x21D8C4u;
            goto label_21d8c4;
        }
    }
    ctx->pc = 0x21D894u;
    // 0x21d894: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21d894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d898:
    // 0x21d898: 0x12070006  beq         $s0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D898u;
    {
        const bool branch_taken_0x21d898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x21D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D898u;
        // 0x21d89c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d898) {
            ctx->pc = 0x21D8B4u;
            goto label_21d8b4;
        }
    }
    ctx->pc = 0x21D8A0u;
    // 0x21d8a0: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x21d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x21d8a4: 0xc0a01a4  jal         func_280690
    ctx->pc = 0x21D8A4u;
    SET_GPR_U32(ctx, 31, 0x21D8ACu);
    ctx->pc = 0x21D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8A4u;
    // 0x21d8a8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280690u, 0x21D8A4u, 0x21D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8ACu;
label_21d8ac:
    // 0x21d8ac: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x21d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d8b0: 0x8f87b6f8  lw          $a3, -0x4908($gp)
    ctx->pc = 0x21d8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948600)));
label_21d8b4:
    // 0x21d8b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d8b8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x21d8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d8bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21D8BCu;
    {
        const bool branch_taken_0x21d8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8BCu;
        // 0x21d8c0: 0x2631071c  addiu       $s1, $s1, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8bc) {
            ctx->pc = 0x21D898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d898;
        }
    }
    ctx->pc = 0x21D8C4u;
label_21d8c4:
    // 0x21d8c4: 0x4e0000e  bltz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x21D8C4u;
    {
        const bool branch_taken_0x21d8c4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x21D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8C4u;
        // 0x21d8c8: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8c4) {
            ctx->pc = 0x21D900u;
            goto label_21d900;
        }
    }
    ctx->pc = 0x21D8CCu;
    // 0x21d8cc: 0x8f85b238  lw          $a1, -0x4DC8($gp)
    ctx->pc = 0x21d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21d8d0: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x21d8d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21d8d4: 0x8f86b460  lw          $a2, -0x4BA0($gp)
    ctx->pc = 0x21d8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x21d8d8: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x21d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d8dc: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x21d8dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21d8e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21d8e4: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x21d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x21d8e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21d8ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D8ECu;
    {
        const bool branch_taken_0x21d8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8ECu;
        // 0x21d8f0: 0xac6200f8  sw          $v0, 0xF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8ec) {
            ctx->pc = 0x21D900u;
            goto label_21d900;
        }
    }
    ctx->pc = 0x21D8F4u;
    // 0x21d8f4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x21d8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8f8: 0xc0ac3dc  jal         func_2B0F70
    ctx->pc = 0x21D8F8u;
    SET_GPR_U32(ctx, 31, 0x21D900u);
    ctx->pc = 0x21D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8F8u;
    // 0x21d8fc: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0F70u, 0x21D8F8u, 0x21D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D900u;
label_21d900:
    // 0x21d900: 0xc087332  jal         func_21CCC8
    ctx->pc = 0x21D900u;
    SET_GPR_U32(ctx, 31, 0x21D908u);
    ctx->pc = 0x21CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCC8u, 0x21D900u, 0x21D908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D908u;
label_21d908:
    // 0x21d908: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D908u;
    {
        const bool branch_taken_0x21d908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D908u;
        // 0x21d90c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d908) {
            ctx->pc = 0x21D924u;
            goto label_21d924;
        }
    }
    ctx->pc = 0x21D910u;
    // 0x21d910: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21d910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d914: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21d914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d91c: 0x80874d2  j           func_21D348
    ctx->pc = 0x21D91Cu;
    ctx->pc = 0x21D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D91Cu;
    // 0x21d920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    gameLevelCompleted_0x21d348(rdram, ctx, runtime); return;
    ctx->pc = 0x21D924u;
label_21d924:
    // 0x21d924: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21d924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d928: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21d928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d92c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d930: 0x3e00008  jr          $ra
    ctx->pc = 0x21D930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D930u;
        // 0x21d934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D938u;
}
