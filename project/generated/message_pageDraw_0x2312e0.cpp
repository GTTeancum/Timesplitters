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

// Function: message_pageDraw
// Address: 0x2312e0 - 0x231384
void message_pageDraw_0x2312e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("message_pageDraw_0x2312e0");
#endif

    switch (ctx->pc) {
        case 0x23130cu: goto label_23130c;
        default: break;
    }

    ctx->pc = 0x2312e0u;

    // 0x2312e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2312e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2312e4: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x2312e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2312e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2312e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2312ec: 0x24030410  addiu       $v1, $zero, 0x410
    ctx->pc = 0x2312ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2312f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2312f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2312f4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2312f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2312f8: 0x244219c0  addiu       $v0, $v0, 0x19C0
    ctx->pc = 0x2312f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6592));
    // 0x2312fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2312fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231300: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x231300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x231304: 0xc08bc28  jal         func_22F0A0
    ctx->pc = 0x231304u;
    SET_GPR_U32(ctx, 31, 0x23130Cu);
    ctx->pc = 0x231308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231304u;
    // 0x231308: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F0A0u, 0x231304u, 0x23130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23130Cu;
label_23130c:
    // 0x23130c: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x23130cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x231310: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x231310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x231314: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x231314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x231318: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x231318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23131c: 0x24462e80  addiu       $a2, $v0, 0x2E80
    ctx->pc = 0x23131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
    // 0x231320: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x231320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x231324: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x231324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x231328: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x231328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x23132c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x23132Cu;
    {
        const bool branch_taken_0x23132c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23132Cu;
        // 0x231330: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23132c) {
            ctx->pc = 0x231378u;
            goto label_231378;
        }
    }
    ctx->pc = 0x231334u;
    // 0x231334: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x231334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231338: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x231338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23133c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x23133cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x231340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231344: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x231344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x231348: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x231348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x23134c: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x23134cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x231350: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x231350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x231354: 0x8c880404  lw          $t0, 0x404($a0)
    ctx->pc = 0x231354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
    // 0x231358: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x231358u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x23135c: 0x8f89a020  lw          $t1, -0x5FE0($gp)
    ctx->pc = 0x23135cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x231360: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x231360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x231364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231368: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x231368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x23136c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23136cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231370: 0x808ba4c  j           func_22E930
    ctx->pc = 0x231370u;
    ctx->pc = 0x231374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231370u;
    // 0x231374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E930u;
    guiDrawFormattedText_0x22e930(rdram, ctx, runtime); return;
    ctx->pc = 0x231378u;
label_231378:
    // 0x231378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23137c: 0x3e00008  jr          $ra
    ctx->pc = 0x23137Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23137Cu;
        // 0x231380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23137Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231384u;
}
