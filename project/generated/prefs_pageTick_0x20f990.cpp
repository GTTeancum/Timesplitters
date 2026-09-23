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

// Function: prefs_pageTick
// Address: 0x20f990 - 0x20fa70
void prefs_pageTick_0x20f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("prefs_pageTick_0x20f990");
#endif

    switch (ctx->pc) {
        case 0x20f9a8u: goto label_20f9a8;
        case 0x20fa4cu: goto label_20fa4c;
        case 0x20fa58u: goto label_20fa58;
        default: break;
    }

    ctx->pc = 0x20f990u;

    // 0x20f990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f994: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20f998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f99c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20f99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20f9a0: 0xc083e36  jal         func_20F8D8
    ctx->pc = 0x20F9A0u;
    SET_GPR_U32(ctx, 31, 0x20F9A8u);
    ctx->pc = 0x20F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F9A0u;
    // 0x20f9a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F8D8u, 0x20F9A0u, 0x20F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9A8u;
label_20f9a8:
    // 0x20f9a8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x20f9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x20f9ac: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x20f9acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x20f9b0: 0x24c399f0  addiu       $v1, $a2, -0x6610
    ctx->pc = 0x20f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    // 0x20f9b4: 0x2607a8d0  addiu       $a3, $s0, -0x5730
    ctx->pc = 0x20f9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944976));
    // 0x20f9b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299FCu));
    // 0x20f9bc: 0x284201f4  slti        $v0, $v0, 0x1F4
    ctx->pc = 0x20f9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x20f9c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F9C0u;
    {
        const bool branch_taken_0x20f9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9C0u;
        // 0x20f9c4: 0x8c640058  lw          $a0, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9c0) {
            ctx->pc = 0x20F9D0u;
            goto label_20f9d0;
        }
    }
    ctx->pc = 0x20F9C8u;
    // 0x20f9c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20F9C8u;
    {
        const bool branch_taken_0x20f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9C8u;
        // 0x20f9cc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9c8) {
            ctx->pc = 0x20F9D4u;
            goto label_20f9d4;
        }
    }
    ctx->pc = 0x20F9D0u;
label_20f9d0:
    // 0x20f9d0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x20f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20f9d4:
    // 0x20f9d4: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x20f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x20f9d8: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x20f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f9dc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20f9e0: 0xa4e20004  sh          $v0, 0x4($a3)
    ctx->pc = 0x20f9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x20f9e4: 0x24a5a8e0  addiu       $a1, $a1, -0x5720
    ctx->pc = 0x20f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944992));
    // 0x20f9e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x20f9ec: 0x24c699f0  addiu       $a2, $a2, -0x6610
    ctx->pc = 0x20f9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    // 0x20f9f0: 0x94a3006a  lhu         $v1, 0x6A($a1)
    ctx->pc = 0x20f9f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x32A94Au));
    // 0x20f9f4: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x20f9f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x20f9f8: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x20f9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x20f9fc: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x20f9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x20fa00: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x20fa00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x20fa04: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x20fa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x20fa08: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20fa08u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20fa0c: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x20FA0Cu;
    {
        const bool branch_taken_0x20fa0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA0Cu;
        // 0x20fa10: 0xa4a2006a  sh          $v0, 0x6A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa0c) {
            ctx->pc = 0x20FA3Cu;
            goto label_20fa3c;
        }
    }
    ctx->pc = 0x20FA14u;
    // 0x20fa14: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x20fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20fa18: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x20fa18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x20fa1c: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x20fa1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x20fa20: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x20fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x20fa24: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20fa28: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20fa2c: 0xac43a8cc  sw          $v1, -0x5734($v0)
    ctx->pc = 0x20fa2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32A8CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32A8CCu, _value); } while (0);
    // 0x20fa30: 0xacc3a80c  sw          $v1, -0x57F4($a2)
    ctx->pc = 0x20fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294944780), GPR_U32(ctx, 3));
    // 0x20fa34: 0xac83a854  sw          $v1, -0x57AC($a0)
    ctx->pc = 0x20fa34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32A854u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32A854u, _value); } while (0);
    // 0x20fa38: 0xaca3a87c  sw          $v1, -0x5784($a1)
    ctx->pc = 0x20fa38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32A87Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32A87Cu, _value); } while (0);
label_20fa3c:
    // 0x20fa3c: 0x2610a8d0  addiu       $s0, $s0, -0x5730
    ctx->pc = 0x20fa3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944976));
    // 0x20fa40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fa44: 0xc083890  jal         func_20E240
    ctx->pc = 0x20FA44u;
    SET_GPR_U32(ctx, 31, 0x20FA4Cu);
    ctx->pc = 0x20FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FA44u;
    // 0x20fa48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E240u, 0x20FA44u, 0x20FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA4Cu;
label_20fa4c:
    // 0x20fa4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x20fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20fa50: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x20FA50u;
    SET_GPR_U32(ctx, 31, 0x20FA58u);
    ctx->pc = 0x20FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FA50u;
    // 0x20fa54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x20FA50u, 0x20FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA58u;
label_20fa58:
    // 0x20fa58: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x20fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x20fa5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fa60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20fa60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fa64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fa64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fa68: 0x3e00008  jr          $ra
    ctx->pc = 0x20FA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA68u;
        // 0x20fa6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FA70u;
}
