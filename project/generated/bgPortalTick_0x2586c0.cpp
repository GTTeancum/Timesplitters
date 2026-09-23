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

// Function: bgPortalTick
// Address: 0x2586c0 - 0x258840
void bgPortalTick_0x2586c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalTick_0x2586c0");
#endif

    switch (ctx->pc) {
        case 0x2586fcu: goto label_2586fc;
        case 0x258704u: goto label_258704;
        case 0x25870cu: goto label_25870c;
        case 0x258720u: goto label_258720;
        case 0x258754u: goto label_258754;
        case 0x258780u: goto label_258780;
        case 0x258798u: goto label_258798;
        case 0x2587c8u: goto label_2587c8;
        case 0x2587d4u: goto label_2587d4;
        default: break;
    }

    ctx->pc = 0x2586c0u;

    // 0x2586c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2586c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2586c4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2586c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2586c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2586c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2586cc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2586ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2586d0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2586d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2586d4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2586d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2586d8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2586d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2586dc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2586dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2586e0: 0x8c500380  lw          $s0, 0x380($v0)
    ctx->pc = 0x2586e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x2586e4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2586E4u;
    {
        const bool branch_taken_0x2586e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2586e4) {
            ctx->pc = 0x2586E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2586E4u;
            // 0x2586e8: 0x8c500384  lw          $s0, 0x384($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 900)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2586ECu;
            goto label_2586ec;
        }
    }
    ctx->pc = 0x2586ECu;
label_2586ec:
    // 0x2586ec: 0x8c4606e4  lw          $a2, 0x6E4($v0)
    ctx->pc = 0x2586ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x2586f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2586f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586f4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2586F4u;
    SET_GPR_U32(ctx, 31, 0x2586FCu);
    ctx->pc = 0x2586F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2586F4u;
    // 0x2586f8: 0x8c4506e0  lw          $a1, 0x6E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2586F4u, 0x2586FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2586FCu;
label_2586fc:
    // 0x2586fc: 0xc095da0  jal         func_257680
    ctx->pc = 0x2586FCu;
    SET_GPR_U32(ctx, 31, 0x258704u);
    ctx->pc = 0x257680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257680u, 0x2586FCu, 0x258704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258704u;
label_258704:
    // 0x258704: 0xc095e3c  jal         func_2578F0
    ctx->pc = 0x258704u;
    SET_GPR_U32(ctx, 31, 0x25870Cu);
    ctx->pc = 0x258708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258704u;
    // 0x258708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2578F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2578F0u, 0x258704u, 0x25870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25870Cu;
label_25870c:
    // 0x25870c: 0x8f86a264  lw          $a2, -0x5D9C($gp)
    ctx->pc = 0x25870cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x258710: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x258710u;
    {
        const bool branch_taken_0x258710 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x258714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258710u;
        // 0x258714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258710) {
            ctx->pc = 0x258744u;
            goto label_258744;
        }
    }
    ctx->pc = 0x258718u;
    // 0x258718: 0x8f85b894  lw          $a1, -0x476C($gp)
    ctx->pc = 0x258718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949012)));
    // 0x25871c: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x25871cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
label_258720:
    // 0x258720: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x258720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x258724: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x258724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x258728: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x258728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25872c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25872cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x258730: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x258730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x258734: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x258734u;
    {
        const bool branch_taken_0x258734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258734) {
            ctx->pc = 0x258720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258720;
        }
    }
    ctx->pc = 0x25873Cu;
    // 0x25873c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25873Cu;
    {
        const bool branch_taken_0x25873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25873Cu;
        // 0x258740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25873c) {
            ctx->pc = 0x25874Cu;
            goto label_25874c;
        }
    }
    ctx->pc = 0x258744u;
label_258744:
    // 0x258744: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x258744u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x258748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25874c:
    // 0x25874c: 0xc095e7e  jal         func_2579F8
    ctx->pc = 0x25874Cu;
    SET_GPR_U32(ctx, 31, 0x258754u);
    ctx->pc = 0x258750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25874Cu;
    // 0x258750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2579F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2579F8u, 0x25874Cu, 0x258754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258754u;
label_258754:
    // 0x258754: 0x8f87b234  lw          $a3, -0x4DCC($gp)
    ctx->pc = 0x258754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x258758: 0x26827340  addiu       $v0, $s4, 0x7340
    ctx->pc = 0x258758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29504));
    // 0x25875c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x25875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x258760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258764: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x258764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258768: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x258768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25876c: 0x480002c  bltz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x25876Cu;
    {
        const bool branch_taken_0x25876c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x258770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25876Cu;
        // 0x258770: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25876c) {
            ctx->pc = 0x258820u;
            goto label_258820;
        }
    }
    ctx->pc = 0x258774u;
    // 0x258774: 0x8f86a264  lw          $a2, -0x5D9C($gp)
    ctx->pc = 0x258774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x258778: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x258778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25877c: 0x0  nop
    ctx->pc = 0x25877cu;
    // NOP
label_258780:
    // 0x258780: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x258780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x258784: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x258784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258788: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x258788u;
    {
        const bool branch_taken_0x258788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258788u;
        // 0x25878c: 0x3c130035  lui         $s3, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258788) {
            ctx->pc = 0x2587F8u;
            goto label_2587f8;
        }
    }
    ctx->pc = 0x258790u;
    // 0x258790: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x258790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258794: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x258794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_258798:
    // 0x258798: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x258798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25879c: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x25879cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2587a0: 0x26657330  addiu       $a1, $s3, 0x7330
    ctx->pc = 0x2587a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 29488));
    // 0x2587a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2587a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2587a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2587a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2587ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2587acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2587b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2587b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2587b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2587b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2587b8: 0x54520009  bnel        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2587B8u;
    {
        const bool branch_taken_0x2587b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2587b8) {
            ctx->pc = 0x2587BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2587B8u;
            // 0x2587bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2587E0u;
            goto label_2587e0;
        }
    }
    ctx->pc = 0x2587C0u;
    // 0x2587c0: 0xc095ee0  jal         func_257B80
    ctx->pc = 0x2587C0u;
    SET_GPR_U32(ctx, 31, 0x2587C8u);
    ctx->pc = 0x2587C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2587C0u;
    // 0x2587c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257B80u, 0x2587C0u, 0x2587C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2587C8u;
label_2587c8:
    // 0x2587c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2587c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587cc: 0xc096042  jal         func_258108
    ctx->pc = 0x2587CCu;
    SET_GPR_U32(ctx, 31, 0x2587D4u);
    ctx->pc = 0x2587D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2587CCu;
    // 0x2587d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258108u, 0x2587CCu, 0x2587D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2587D4u;
label_2587d4:
    // 0x2587d4: 0x8f87b234  lw          $a3, -0x4DCC($gp)
    ctx->pc = 0x2587d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2587d8: 0x8f86a264  lw          $a2, -0x5D9C($gp)
    ctx->pc = 0x2587d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2587dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2587dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2587e0:
    // 0x2587e0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2587e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2587e4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2587e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2587e8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2587E8u;
    {
        const bool branch_taken_0x2587e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2587ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587E8u;
        // 0x2587ec: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587e8) {
            ctx->pc = 0x258798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258798;
        }
    }
    ctx->pc = 0x2587F0u;
    // 0x2587f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2587F0u;
    {
        const bool branch_taken_0x2587f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587F0u;
        // 0x2587f4: 0x26847340  addiu       $a0, $s4, 0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587f0) {
            ctx->pc = 0x258804u;
            goto label_258804;
        }
    }
    ctx->pc = 0x2587F8u;
label_2587f8:
    // 0x2587f8: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x2587f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2587fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2587fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x258800: 0x26847340  addiu       $a0, $s4, 0x7340
    ctx->pc = 0x258800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29504));
label_258804:
    // 0x258804: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x258804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x258808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25880c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258810: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x258810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258814: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x258814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x258818: 0x1060ffd9  beqz        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x258818u;
    {
        const bool branch_taken_0x258818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258818u;
        // 0x25881c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258818) {
            ctx->pc = 0x258780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258780;
        }
    }
    ctx->pc = 0x258820u;
label_258820:
    // 0x258820: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x258820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x258824: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x258824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x258828: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x258828u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25882c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25882cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x258830: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x258830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258834: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x258834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258838: 0x3e00008  jr          $ra
    ctx->pc = 0x258838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258838u;
        // 0x25883c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258840u;
}
