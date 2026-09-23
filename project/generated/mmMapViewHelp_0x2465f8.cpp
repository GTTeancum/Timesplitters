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

// Function: mmMapViewHelp
// Address: 0x2465f8 - 0x246920
void mmMapViewHelp_0x2465f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmMapViewHelp_0x2465f8");
#endif

    switch (ctx->pc) {
        case 0x24660cu: goto label_24660c;
        default: break;
    }

    ctx->pc = 0x2465f8u;

    // 0x2465f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2465f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2465fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2465fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x246600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x246604: 0xc091536  jal         func_2454D8
    ctx->pc = 0x246604u;
    SET_GPR_U32(ctx, 31, 0x24660Cu);
    ctx->pc = 0x246608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246604u;
    // 0x246608: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2454D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2454D8u, 0x246604u, 0x24660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24660Cu;
label_24660c:
    // 0x24660c: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x246610: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x246610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246614: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x246614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x246618: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x246618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24661c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24661cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246620: 0x824024  and         $t0, $a0, $v0
    ctx->pc = 0x246620u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x246624: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x246624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x246628: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x246628u;
    {
        const bool branch_taken_0x246628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246628u;
        // 0x24662c: 0xaf88a0d8  sw          $t0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246628) {
            ctx->pc = 0x24664Cu;
            goto label_24664c;
        }
    }
    ctx->pc = 0x246630u;
    // 0x246630: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x246630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x246634: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x246634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x246638: 0x24436688  addiu       $v1, $v0, 0x6688
    ctx->pc = 0x246638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26248));
    // 0x24663c: 0xac406688  sw          $zero, 0x6688($v0)
    ctx->pc = 0x24663cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x356688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x356688u, _value); } while (0);
    // 0x246640: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x246640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x356694u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x356694u, _value); } while (0);
    // 0x246644: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x246644u;
    {
        const bool branch_taken_0x246644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246644u;
        // 0x246648: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246644) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x24664Cu;
label_24664c:
    // 0x24664c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x24664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x246650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246650u;
    {
        const bool branch_taken_0x246650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246650u;
        // 0x246654: 0x9382a190  lbu         $v0, -0x5E70($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246650) {
            ctx->pc = 0x246660u;
            goto label_246660;
        }
    }
    ctx->pc = 0x246658u;
    // 0x246658: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x246658u;
    {
        const bool branch_taken_0x246658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246658u;
        // 0x24665c: 0x24500002  addiu       $s0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246658) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x246660u;
label_246660:
    // 0x246660: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x246660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x246664: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246664u;
    {
        const bool branch_taken_0x246664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246664) {
            ctx->pc = 0x246674u;
            goto label_246674;
        }
    }
    ctx->pc = 0x24666Cu;
    // 0x24666c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x24666Cu;
    {
        const bool branch_taken_0x24666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24666Cu;
        // 0x246670: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24666c) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x246674u;
label_246674:
    // 0x246674: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x246674u;
    {
        const bool branch_taken_0x246674 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x246678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246674u;
        // 0x246678: 0x8f83a0d4  lw          $v1, -0x5F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246674) {
            ctx->pc = 0x2466ACu;
            goto label_2466ac;
        }
    }
    ctx->pc = 0x24667Cu;
    // 0x24667c: 0x8f82a108  lw          $v0, -0x5EF8($gp)
    ctx->pc = 0x24667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942984)));
    // 0x246680: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246680u;
    {
        const bool branch_taken_0x246680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246680u;
        // 0x246684: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246680) {
            ctx->pc = 0x2466ACu;
            goto label_2466ac;
        }
    }
    ctx->pc = 0x246688u;
    // 0x246688: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x246688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x24668c: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x24668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x246690: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x246690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x246694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x246698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24669c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2466a0: 0x8c830e08  lw          $v1, 0xE08($a0)
    ctx->pc = 0x2466a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3592)));
    // 0x2466a4: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2466A4u;
    {
        const bool branch_taken_0x2466a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466A4u;
        // 0x2466a8: 0xaca36690  sw          $v1, 0x6690($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 26256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466a4) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x2466ACu;
label_2466ac:
    // 0x2466ac: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2466acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2466b0: 0x146b0015  bne         $v1, $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2466B0u;
    {
        const bool branch_taken_0x2466b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x2466B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466B0u;
        // 0x2466b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466b0) {
            ctx->pc = 0x246708u;
            goto label_246708;
        }
    }
    ctx->pc = 0x2466B8u;
    // 0x2466b8: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2466B8u;
    {
        const bool branch_taken_0x2466b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466B8u;
        // 0x2466bc: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466b8) {
            ctx->pc = 0x2466E4u;
            goto label_2466e4;
        }
    }
    ctx->pc = 0x2466C0u;
    // 0x2466c0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2466c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2466c4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2466c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2466c8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2466c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2466cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2466ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2466d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2466d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2466d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2466d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2466d8: 0x8c830e0c  lw          $v1, 0xE0C($a0)
    ctx->pc = 0x2466d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3596)));
    // 0x2466dc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2466DCu;
    {
        const bool branch_taken_0x2466dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466DCu;
        // 0x2466e0: 0xaca3668c  sw          $v1, 0x668C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 26252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466dc) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x2466E4u;
label_2466e4:
    // 0x2466e4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2466e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2466e8: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2466e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2466ec: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2466ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2466f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2466f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2466f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2466f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2466f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2466f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2466fc: 0x8c830e10  lw          $v1, 0xE10($a0)
    ctx->pc = 0x2466fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3600)));
    // 0x246700: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x246700u;
    {
        const bool branch_taken_0x246700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246700u;
        // 0x246704: 0xaca3668c  sw          $v1, 0x668C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 26252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246700) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x246708u;
label_246708:
    // 0x246708: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x246708u;
    {
        const bool branch_taken_0x246708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246708u;
        // 0x24670c: 0x8f82a0f8  lw          $v0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246708) {
            ctx->pc = 0x2467C8u;
            goto label_2467c8;
        }
    }
    ctx->pc = 0x246710u;
    // 0x246710: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x246710u;
    {
        const bool branch_taken_0x246710 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x246714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246710u;
        // 0x246714: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246710) {
            ctx->pc = 0x2467A0u;
            goto label_2467a0;
        }
    }
    ctx->pc = 0x246718u;
    // 0x246718: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x246718u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
    // 0x24671c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x24671cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246720: 0x3c0c0035  lui         $t4, 0x35
    ctx->pc = 0x246720u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)53 << 16));
    // 0x246724: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x246724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246728: 0x25432c18  addiu       $v1, $t2, 0x2C18
    ctx->pc = 0x246728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 11288));
    // 0x24672c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x24672cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x246730: 0x25846688  addiu       $a0, $t4, 0x6688
    ctx->pc = 0x246730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 26248));
    // 0x246734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246738: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x246738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24673c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24673cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246740: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x246740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x246744: 0x8ca20e14  lw          $v0, 0xE14($a1)
    ctx->pc = 0x246744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3604)));
    // 0x246748: 0x146b0007  bne         $v1, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x246748u;
    {
        const bool branch_taken_0x246748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x24674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246748u;
        // 0x24674c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246748) {
            ctx->pc = 0x246768u;
            goto label_246768;
        }
    }
    ctx->pc = 0x246750u;
    // 0x246750: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x246750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x246754: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x246754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x246758: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246758u;
    {
        const bool branch_taken_0x246758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246758u;
        // 0x24675c: 0x25432c18  addiu       $v1, $t2, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 11288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246758) {
            ctx->pc = 0x24676Cu;
            goto label_24676c;
        }
    }
    ctx->pc = 0x246760u;
    // 0x246760: 0x8ca20e18  lw          $v0, 0xE18($a1)
    ctx->pc = 0x246760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3608)));
    // 0x246764: 0xad826688  sw          $v0, 0x6688($t4)
    ctx->pc = 0x246764u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 26248), GPR_U32(ctx, 2));
label_246768:
    // 0x246768: 0x25432c18  addiu       $v1, $t2, 0x2C18
    ctx->pc = 0x246768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 11288));
label_24676c:
    // 0x24676c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x24676cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x246770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246774: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x246774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x246778: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x246778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24677c: 0x1041825  or          $v1, $t0, $a0
    ctx->pc = 0x24677cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x246780: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x246780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    // 0x246784: 0x24c66688  addiu       $a2, $a2, 0x6688
    ctx->pc = 0x246784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26248));
    // 0x246788: 0x8ca30e20  lw          $v1, 0xE20($a1)
    ctx->pc = 0x246788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3616)));
    // 0x24678c: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x24678cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x246790: 0x8ca20e1c  lw          $v0, 0xE1C($a1)
    ctx->pc = 0x246790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3612)));
    // 0x246794: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x246794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x246798: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x246798u;
    {
        const bool branch_taken_0x246798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246798u;
        // 0x24679c: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246798) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x2467A0u;
label_2467a0:
    // 0x2467a0: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2467a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2467a4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2467a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2467a8: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2467a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2467ac: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2467acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2467b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2467b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2467b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2467b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2467b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2467b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2467bc: 0x8c830e24  lw          $v1, 0xE24($a0)
    ctx->pc = 0x2467bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3620)));
    // 0x2467c0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2467C0u;
    {
        const bool branch_taken_0x2467c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467C0u;
        // 0x2467c4: 0xaca3668c  sw          $v1, 0x668C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 26252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467c0) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x2467C8u;
label_2467c8:
    // 0x2467c8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2467C8u;
    {
        const bool branch_taken_0x2467c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467C8u;
        // 0x2467cc: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467c8) {
            ctx->pc = 0x246828u;
            goto label_246828;
        }
    }
    ctx->pc = 0x2467D0u;
    // 0x2467d0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2467d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2467d4: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x2467d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2467d8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2467d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x2467dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2467dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2467e0: 0x24c96688  addiu       $t1, $a2, 0x6688
    ctx->pc = 0x2467e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 26248));
    // 0x2467e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2467e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2467e8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2467e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2467ec: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2467ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2467f0: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x2467f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x2467f4: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x2467f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x2467f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2467f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2467fc: 0x8ce20e28  lw          $v0, 0xE28($a3)
    ctx->pc = 0x2467fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3624)));
    // 0x246800: 0x8ce30e2c  lw          $v1, 0xE2C($a3)
    ctx->pc = 0x246800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3628)));
    // 0x246804: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x246804u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x246808: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x246808u;
    {
        const bool branch_taken_0x246808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x24680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246808u;
        // 0x24680c: 0xacc36688  sw          $v1, 0x6688($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 26248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246808) {
            ctx->pc = 0x246818u;
            goto label_246818;
        }
    }
    ctx->pc = 0x246810u;
    // 0x246810: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x246810u;
    {
        const bool branch_taken_0x246810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246810u;
        // 0x246814: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246810) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x246818u;
label_246818:
    // 0x246818: 0x8ce20e30  lw          $v0, 0xE30($a3)
    ctx->pc = 0x246818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3632)));
    // 0x24681c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24681cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246820: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x246820u;
    {
        const bool branch_taken_0x246820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246820u;
        // 0x246824: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246820) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x246828u;
label_246828:
    // 0x246828: 0x8f82a108  lw          $v0, -0x5EF8($gp)
    ctx->pc = 0x246828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942984)));
    // 0x24682c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24682Cu;
    {
        const bool branch_taken_0x24682c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24682Cu;
        // 0x246830: 0x31020020  andi        $v0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24682c) {
            ctx->pc = 0x246878u;
            goto label_246878;
        }
    }
    ctx->pc = 0x246834u;
    // 0x246834: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x246834u;
    {
        const bool branch_taken_0x246834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246834) {
            ctx->pc = 0x246878u;
            goto label_246878;
        }
    }
    ctx->pc = 0x24683Cu;
    // 0x24683c: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x24683Cu;
    {
        const bool branch_taken_0x24683c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x246840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24683Cu;
        // 0x246840: 0x3c0c0035  lui         $t4, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24683c) {
            ctx->pc = 0x2468DCu;
            goto label_2468dc;
        }
    }
    ctx->pc = 0x246844u;
    // 0x246844: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x246844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x246848: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24684c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24684Cu;
    {
        const bool branch_taken_0x24684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24684Cu;
        // 0x246850: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24684c) {
            ctx->pc = 0x246878u;
            goto label_246878;
        }
    }
    ctx->pc = 0x246854u;
    // 0x246854: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x246854u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
    // 0x246858: 0x25242c18  addiu       $a0, $t1, 0x2C18
    ctx->pc = 0x246858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 11288));
    // 0x24685c: 0x3c0c0035  lui         $t4, 0x35
    ctx->pc = 0x24685cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)53 << 16));
    // 0x246860: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x246860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x246864: 0x25856688  addiu       $a1, $t4, 0x6688
    ctx->pc = 0x246864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 26248));
    // 0x246868: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x246868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24686c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246870: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x246870u;
    {
        const bool branch_taken_0x246870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246870u;
        // 0x246874: 0x8c640e34  lw          $a0, 0xE34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246870) {
            ctx->pc = 0x2468A0u;
            goto label_2468a0;
        }
    }
    ctx->pc = 0x246878u;
label_246878:
    // 0x246878: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x246878u;
    {
        const bool branch_taken_0x246878 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246878u;
        // 0x24687c: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246878) {
            ctx->pc = 0x2468E8u;
            goto label_2468e8;
        }
    }
    ctx->pc = 0x246880u;
    // 0x246880: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x246880u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
    // 0x246884: 0x25242c18  addiu       $a0, $t1, 0x2C18
    ctx->pc = 0x246884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 11288));
    // 0x246888: 0x3c0c0035  lui         $t4, 0x35
    ctx->pc = 0x246888u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)53 << 16));
    // 0x24688c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x24688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x246890: 0x25856688  addiu       $a1, $t4, 0x6688
    ctx->pc = 0x246890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 26248));
    // 0x246894: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x246894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x246898: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24689c: 0x8c640e38  lw          $a0, 0xE38($v1)
    ctx->pc = 0x24689cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3640)));
label_2468a0:
    // 0x2468a0: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2468A0u;
    {
        const bool branch_taken_0x2468a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468A0u;
        // 0x2468a4: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468a0) {
            ctx->pc = 0x2468F0u;
            goto label_2468f0;
        }
    }
    ctx->pc = 0x2468A8u;
    // 0x2468a8: 0x25232c18  addiu       $v1, $t1, 0x2C18
    ctx->pc = 0x2468a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 11288));
    // 0x2468ac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2468acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2468b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2468b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2468b4: 0x25866688  addiu       $a2, $t4, 0x6688
    ctx->pc = 0x2468b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 26248));
    // 0x2468b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2468b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2468bc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2468bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2468c0: 0x8c620e3c  lw          $v0, 0xE3C($v1)
    ctx->pc = 0x2468c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3644)));
    // 0x2468c4: 0x8c650e44  lw          $a1, 0xE44($v1)
    ctx->pc = 0x2468c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3652)));
    // 0x2468c8: 0x8c640e40  lw          $a0, 0xE40($v1)
    ctx->pc = 0x2468c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3648)));
    // 0x2468cc: 0xad826688  sw          $v0, 0x6688($t4)
    ctx->pc = 0x2468ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 26248), GPR_U32(ctx, 2));
    // 0x2468d0: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x2468d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x2468d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2468D4u;
    {
        const bool branch_taken_0x2468d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468D4u;
        // 0x2468d8: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468d4) {
            ctx->pc = 0x24690Cu;
            goto label_24690c;
        }
    }
    ctx->pc = 0x2468DCu;
label_2468dc:
    // 0x2468dc: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x2468dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
    // 0x2468e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2468E0u;
    {
        const bool branch_taken_0x2468e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468E0u;
        // 0x2468e4: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468e0) {
            ctx->pc = 0x2468F0u;
            goto label_2468f0;
        }
    }
    ctx->pc = 0x2468E8u;
label_2468e8:
    // 0x2468e8: 0x3c0c0035  lui         $t4, 0x35
    ctx->pc = 0x2468e8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)53 << 16));
    // 0x2468ec: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x2468ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
label_2468f0:
    // 0x2468f0: 0x25232c18  addiu       $v1, $t1, 0x2C18
    ctx->pc = 0x2468f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 11288));
    // 0x2468f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2468f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2468f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2468f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2468fc: 0x25856688  addiu       $a1, $t4, 0x6688
    ctx->pc = 0x2468fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 26248));
    // 0x246900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246904: 0x8c640e48  lw          $a0, 0xE48($v1)
    ctx->pc = 0x246904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3656)));
    // 0x246908: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x246908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_24690c:
    // 0x24690c: 0xaf90a1f4  sw          $s0, -0x5E0C($gp)
    ctx->pc = 0x24690cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943220), GPR_U32(ctx, 16));
    // 0x246910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x246910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246918: 0x3e00008  jr          $ra
    ctx->pc = 0x246918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246918u;
        // 0x24691c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246920u;
}
