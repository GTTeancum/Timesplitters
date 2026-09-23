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

// Function: zoomtile_pageTick
// Address: 0x253220 - 0x253360
void zoomtile_pageTick_0x253220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtile_pageTick_0x253220");
#endif

    switch (ctx->pc) {
        case 0x253270u: goto label_253270;
        case 0x25330cu: goto label_25330c;
        case 0x253314u: goto label_253314;
        case 0x25331cu: goto label_25331c;
        case 0x253338u: goto label_253338;
        default: break;
    }

    ctx->pc = 0x253220u;

    // 0x253220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253224: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x253224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x253228: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x253228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25322c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25322cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253238: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x253238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25323c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x25323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x253240: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x253240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x253244: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x253244u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x253248: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x253248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25324c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x25324cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x253250: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x253250u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x253254: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x253254u;
    {
        const bool branch_taken_0x253254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x253254) {
            ctx->pc = 0x253268u;
            goto label_253268;
        }
    }
    ctx->pc = 0x25325Cu;
    // 0x25325c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x25325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x253260: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x253260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x253264: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x253264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_253268:
    // 0x253268: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x253268u;
    SET_GPR_U32(ctx, 31, 0x253270u);
    ctx->pc = 0x25326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253268u;
    // 0x25326c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x253268u, 0x253270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253270u;
label_253270:
    // 0x253270: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x253270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x253274: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253274u;
    {
        const bool branch_taken_0x253274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253274u;
        // 0x253278: 0x8f82b884  lw          $v0, -0x477C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253274) {
            ctx->pc = 0x25329Cu;
            goto label_25329c;
        }
    }
    ctx->pc = 0x25327Cu;
    // 0x25327c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253280: 0x9782a1e0  lhu         $v0, -0x5E20($gp)
    ctx->pc = 0x253280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x253284: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253288: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x253288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25328c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25328cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253290: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x253290u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x253294: 0x8093f30  j           func_24FCC0
    ctx->pc = 0x253294u;
    ctx->pc = 0x253298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253294u;
    // 0x253298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCC0u;
    exitDialogs_0x24fcc0(rdram, ctx, runtime); return;
    ctx->pc = 0x25329Cu;
label_25329c:
    // 0x25329c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25329Cu;
    {
        const bool branch_taken_0x25329c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25329c) {
            ctx->pc = 0x25330Cu;
            goto label_25330c;
        }
    }
    ctx->pc = 0x2532A4u;
    // 0x2532a4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2532A4u;
    {
        const bool branch_taken_0x2532a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532A4u;
        // 0x2532a8: 0x8f83b880  lw          $v1, -0x4780($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532a4) {
            ctx->pc = 0x25330Cu;
            goto label_25330c;
        }
    }
    ctx->pc = 0x2532ACu;
    // 0x2532ac: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x2532acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x2532b0: 0x8f82b87c  lw          $v0, -0x4784($gp)
    ctx->pc = 0x2532b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948988)));
    // 0x2532b4: 0x25287240  addiu       $t0, $t1, 0x7240
    ctx->pc = 0x2532b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 29248));
    // 0x2532b8: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2532b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2532bc: 0x8f86b878  lw          $a2, -0x4788($gp)
    ctx->pc = 0x2532bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
    // 0x2532c0: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2532c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2532c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2532c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2532c8: 0x8f85b874  lw          $a1, -0x478C($gp)
    ctx->pc = 0x2532c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948980)));
    // 0x2532cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2532ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2532d0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2532d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2532d4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2532d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2532d8: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x2532d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2532dc: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2532dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2532e0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2532e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2532e4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2532e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2532e8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2532e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2532ec: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2532ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2532f0: 0xad267240  sw          $a2, 0x7240($t1)
    ctx->pc = 0x2532f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 29248), GPR_U32(ctx, 6));
    // 0x2532f4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2532f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2532f8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2532f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2532fc: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x2532fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x253300: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x253300u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x253304: 0xc09441a  jal         func_251068
    ctx->pc = 0x253304u;
    SET_GPR_U32(ctx, 31, 0x25330Cu);
    ctx->pc = 0x253308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253304u;
    // 0x253308: 0xad050008  sw          $a1, 0x8($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251068u, 0x253304u, 0x25330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25330Cu;
label_25330c:
    // 0x25330c: 0xc094156  jal         func_250558
    ctx->pc = 0x25330Cu;
    SET_GPR_U32(ctx, 31, 0x253314u);
    ctx->pc = 0x250558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250558u, 0x25330Cu, 0x253314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253314u;
label_253314:
    // 0x253314: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x253314u;
    SET_GPR_U32(ctx, 31, 0x25331Cu);
    ctx->pc = 0x2506C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2506C0u, 0x253314u, 0x25331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25331Cu;
label_25331c:
    // 0x25331c: 0x8f82b884  lw          $v0, -0x477C($gp)
    ctx->pc = 0x25331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948996)));
    // 0x253320: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x253320u;
    {
        const bool branch_taken_0x253320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253320u;
        // 0x253324: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253320) {
            ctx->pc = 0x253350u;
            goto label_253350;
        }
    }
    ctx->pc = 0x253328u;
    // 0x253328: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x253328u;
    {
        const bool branch_taken_0x253328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x253328) {
            ctx->pc = 0x25332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253328u;
            // 0x25332c: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253354u;
            goto label_253354;
        }
    }
    ctx->pc = 0x253330u;
    // 0x253330: 0xc0942ce  jal         func_250B38
    ctx->pc = 0x253330u;
    SET_GPR_U32(ctx, 31, 0x253338u);
    ctx->pc = 0x250B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B38u, 0x253330u, 0x253338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253338u;
label_253338:
    // 0x253338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25333c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25333cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253340: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x253340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253348: 0x8093d48  j           func_24F520
    ctx->pc = 0x253348u;
    ctx->pc = 0x25334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253348u;
    // 0x25334c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F520u;
    padact_pageTick_0x24f520(rdram, ctx, runtime); return;
    ctx->pc = 0x253350u;
label_253350:
    // 0x253350: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x253350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_253354:
    // 0x253354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253358: 0x3e00008  jr          $ra
    ctx->pc = 0x253358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253358u;
        // 0x25335c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253360u;
}
