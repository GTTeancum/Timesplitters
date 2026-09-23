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

// Function: getOverrideChunk
// Address: 0x274468 - 0x27464c
void getOverrideChunk_0x274468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getOverrideChunk_0x274468");
#endif

    switch (ctx->pc) {
        case 0x2744c8u: goto label_2744c8;
        case 0x2745a0u: goto label_2745a0;
        default: break;
    }

    ctx->pc = 0x274468u;

    // 0x274468: 0x8c890020  lw          $t1, 0x20($a0)
    ctx->pc = 0x274468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x27446c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x27446cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274470: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x274470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x274474: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x274474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x274478: 0x1442818  mult        $a1, $t2, $a0
    ctx->pc = 0x274478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x27447c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274480: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x274480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x274484: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x274484u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274488: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274488u;
    {
        const bool branch_taken_0x274488 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x27448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274488u;
        // 0x27448c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274488) {
            ctx->pc = 0x274498u;
            goto label_274498;
        }
    }
    ctx->pc = 0x274490u;
    // 0x274490: 0x3e00008  jr          $ra
    ctx->pc = 0x274490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274490u;
        // 0x274494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274498u;
label_274498:
    // 0x274498: 0x14c00035  bnez        $a2, . + 4 + (0x35 << 2)
    ctx->pc = 0x274498u;
    {
        const bool branch_taken_0x274498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274498u;
        // 0x27449c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274498) {
            ctx->pc = 0x274570u;
            goto label_274570;
        }
    }
    ctx->pc = 0x2744A0u;
    // 0x2744a0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2744a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2744a4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2744A4u;
    {
        const bool branch_taken_0x2744a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2744A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744A4u;
        // 0x2744a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744a4) {
            ctx->pc = 0x27456Cu;
            goto label_27456c;
        }
    }
    ctx->pc = 0x2744ACu;
    // 0x2744ac: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2744acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2744b0: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2744B0u;
    {
        const bool branch_taken_0x2744b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2744b0) {
            ctx->pc = 0x2744B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2744B0u;
            // 0x2744b4: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2744E8u;
            goto label_2744e8;
        }
    }
    ctx->pc = 0x2744B8u;
    // 0x2744b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2744b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2744bc: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2744BCu;
    {
        const bool branch_taken_0x2744bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2744bc) {
            ctx->pc = 0x2744C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2744BCu;
            // 0x2744c0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2744E8u;
            goto label_2744e8;
        }
    }
    ctx->pc = 0x2744C4u;
    // 0x2744c4: 0x0  nop
    ctx->pc = 0x2744c4u;
    // NOP
label_2744c8:
    // 0x2744c8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2744cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2744ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2744d0: 0x0  nop
    ctx->pc = 0x2744d0u;
    // NOP
    // 0x2744d4: 0x0  nop
    ctx->pc = 0x2744d4u;
    // NOP
    // 0x2744d8: 0x0  nop
    ctx->pc = 0x2744d8u;
    // NOP
    // 0x2744dc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2744DCu;
    {
        const bool branch_taken_0x2744dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2744dc) {
            ctx->pc = 0x2744C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2744c8;
        }
    }
    ctx->pc = 0x2744E4u;
    // 0x2744e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2744e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2744e8:
    // 0x2744e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2744e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2744ec: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2744ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2744f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2744f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2744f4: 0x10e40017  beq         $a3, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2744F4u;
    {
        const bool branch_taken_0x2744f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2744F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744F4u;
        // 0x2744f8: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744f4) {
            ctx->pc = 0x274554u;
            goto label_274554;
        }
    }
    ctx->pc = 0x2744FCu;
    // 0x2744fc: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x2744fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x274500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x274500u;
    {
        const bool branch_taken_0x274500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274500u;
        // 0x274504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274500) {
            ctx->pc = 0x274518u;
            goto label_274518;
        }
    }
    ctx->pc = 0x274508u;
    // 0x274508: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274508u;
    {
        const bool branch_taken_0x274508 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x27450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274508u;
        // 0x27450c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274508) {
            ctx->pc = 0x27452Cu;
            goto label_27452c;
        }
    }
    ctx->pc = 0x274510u;
    // 0x274510: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x274510u;
    {
        const bool branch_taken_0x274510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274510) {
            ctx->pc = 0x274570u;
            goto label_274570;
        }
    }
    ctx->pc = 0x274518u;
label_274518:
    // 0x274518: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x274518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27451c: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27451Cu;
    {
        const bool branch_taken_0x27451c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x274520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27451Cu;
        // 0x274520: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27451c) {
            ctx->pc = 0x274540u;
            goto label_274540;
        }
    }
    ctx->pc = 0x274524u;
    // 0x274524: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x274524u;
    {
        const bool branch_taken_0x274524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274524u;
        // 0x274528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274524) {
            ctx->pc = 0x274570u;
            goto label_274570;
        }
    }
    ctx->pc = 0x27452Cu;
label_27452c:
    // 0x27452c: 0x8d2200f8  lw          $v0, 0xF8($t1)
    ctx->pc = 0x27452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 248)));
    // 0x274530: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x274530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274534: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274538: 0x3e00008  jr          $ra
    ctx->pc = 0x274538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274538u;
        // 0x27453c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274540u;
label_274540:
    // 0x274540: 0x8d2200f8  lw          $v0, 0xF8($t1)
    ctx->pc = 0x274540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 248)));
    // 0x274544: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x274544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27454c: 0x3e00008  jr          $ra
    ctx->pc = 0x27454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27454Cu;
        // 0x274550: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27454Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274554u;
label_274554:
    // 0x274554: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x274554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x274558: 0x8d2200f8  lw          $v0, 0xF8($t1)
    ctx->pc = 0x274558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 248)));
    // 0x27455c: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x27455cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274560: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274564: 0x3e00008  jr          $ra
    ctx->pc = 0x274564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274564u;
        // 0x274568: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27456Cu;
label_27456c:
    // 0x27456c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274570:
    // 0x274570: 0x54c20034  bnel        $a2, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x274570u;
    {
        const bool branch_taken_0x274570 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x274570) {
            ctx->pc = 0x274574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274570u;
            // 0x274574: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274644u;
            goto label_274644;
        }
    }
    ctx->pc = 0x274578u;
    // 0x274578: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x274578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x27457c: 0x50600031  beql        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x27457Cu;
    {
        const bool branch_taken_0x27457c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27457c) {
            ctx->pc = 0x274580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27457Cu;
            // 0x274580: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274644u;
            goto label_274644;
        }
    }
    ctx->pc = 0x274584u;
    // 0x274584: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x274584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x274588: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x274588u;
    {
        const bool branch_taken_0x274588 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x274588) {
            ctx->pc = 0x27458Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274588u;
            // 0x27458c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2745C0u;
            goto label_2745c0;
        }
    }
    ctx->pc = 0x274590u;
    // 0x274590: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x274590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x274594: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274594u;
    {
        const bool branch_taken_0x274594 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x274594) {
            ctx->pc = 0x274598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274594u;
            // 0x274598: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2745C0u;
            goto label_2745c0;
        }
    }
    ctx->pc = 0x27459Cu;
    // 0x27459c: 0x0  nop
    ctx->pc = 0x27459cu;
    // NOP
label_2745a0:
    // 0x2745a0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2745a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2745a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2745a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2745a8: 0x0  nop
    ctx->pc = 0x2745a8u;
    // NOP
    // 0x2745ac: 0x0  nop
    ctx->pc = 0x2745acu;
    // NOP
    // 0x2745b0: 0x0  nop
    ctx->pc = 0x2745b0u;
    // NOP
    // 0x2745b4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2745B4u;
    {
        const bool branch_taken_0x2745b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2745b4) {
            ctx->pc = 0x2745A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2745a0;
        }
    }
    ctx->pc = 0x2745BCu;
    // 0x2745bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2745bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2745c0:
    // 0x2745c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2745c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2745c4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2745c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2745c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2745c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2745cc: 0x10e40017  beq         $a3, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2745CCu;
    {
        const bool branch_taken_0x2745cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2745D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745CCu;
        // 0x2745d0: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745cc) {
            ctx->pc = 0x27462Cu;
            goto label_27462c;
        }
    }
    ctx->pc = 0x2745D4u;
    // 0x2745d4: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x2745d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2745d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2745D8u;
    {
        const bool branch_taken_0x2745d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745D8u;
        // 0x2745dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745d8) {
            ctx->pc = 0x2745F0u;
            goto label_2745f0;
        }
    }
    ctx->pc = 0x2745E0u;
    // 0x2745e0: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2745E0u;
    {
        const bool branch_taken_0x2745e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2745E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745E0u;
        // 0x2745e4: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745e0) {
            ctx->pc = 0x274604u;
            goto label_274604;
        }
    }
    ctx->pc = 0x2745E8u;
    // 0x2745e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2745E8u;
    {
        const bool branch_taken_0x2745e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745E8u;
        // 0x2745ec: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745e8) {
            ctx->pc = 0x274644u;
            goto label_274644;
        }
    }
    ctx->pc = 0x2745F0u;
label_2745f0:
    // 0x2745f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2745f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2745f4: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2745F4u;
    {
        const bool branch_taken_0x2745f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2745F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745F4u;
        // 0x2745f8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745f4) {
            ctx->pc = 0x274618u;
            goto label_274618;
        }
    }
    ctx->pc = 0x2745FCu;
    // 0x2745fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2745FCu;
    {
        const bool branch_taken_0x2745fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745FCu;
        // 0x274600: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745fc) {
            ctx->pc = 0x274644u;
            goto label_274644;
        }
    }
    ctx->pc = 0x274604u;
label_274604:
    // 0x274604: 0x8d2200f8  lw          $v0, 0xF8($t1)
    ctx->pc = 0x274604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 248)));
    // 0x274608: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x274608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27460c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274610: 0x3e00008  jr          $ra
    ctx->pc = 0x274610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274610u;
        // 0x274614: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274618u;
label_274618:
    // 0x274618: 0x8d2200f8  lw          $v0, 0xF8($t1)
    ctx->pc = 0x274618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 248)));
    // 0x27461c: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x27461cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274624: 0x3e00008  jr          $ra
    ctx->pc = 0x274624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274624u;
        // 0x274628: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27462Cu;
label_27462c:
    // 0x27462c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x27462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x274630: 0x8d2200f8  lw          $v0, 0xF8($t1)
    ctx->pc = 0x274630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 248)));
    // 0x274634: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x274634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27463c: 0x3e00008  jr          $ra
    ctx->pc = 0x27463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27463Cu;
        // 0x274640: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274644u;
label_274644:
    // 0x274644: 0x3e00008  jr          $ra
    ctx->pc = 0x274644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274644u;
        // 0x274648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27464Cu;
}
