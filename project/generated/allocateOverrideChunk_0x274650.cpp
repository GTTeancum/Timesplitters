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

// Function: allocateOverrideChunk
// Address: 0x274650 - 0x2748a8
void allocateOverrideChunk_0x274650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("allocateOverrideChunk_0x274650");
#endif

    switch (ctx->pc) {
        case 0x2746c0u: goto label_2746c0;
        case 0x274710u: goto label_274710;
        case 0x274748u: goto label_274748;
        case 0x274774u: goto label_274774;
        case 0x2747c0u: goto label_2747c0;
        case 0x274810u: goto label_274810;
        case 0x274848u: goto label_274848;
        case 0x274874u: goto label_274874;
        default: break;
    }

    ctx->pc = 0x274650u;

    // 0x274650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x274650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x274654: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x274654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x274658: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x274658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27465c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x27465cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274660: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x274660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x274664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x274664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274668: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x274668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27466c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x27466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x274670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274674: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x274674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274678: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x274678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x27467c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x27467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x274680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x274680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274684: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274688: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x274688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27468c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27468cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274690: 0x14c0003f  bnez        $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x274690u;
    {
        const bool branch_taken_0x274690 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x274694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274690u;
        // 0x274694: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274690) {
            ctx->pc = 0x274790u;
            goto label_274790;
        }
    }
    ctx->pc = 0x274698u;
    // 0x274698: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x274698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27469c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x27469Cu;
    {
        const bool branch_taken_0x27469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27469Cu;
        // 0x2746a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27469c) {
            ctx->pc = 0x274790u;
            goto label_274790;
        }
    }
    ctx->pc = 0x2746A4u;
    // 0x2746a4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2746a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2746a8: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2746A8u;
    {
        const bool branch_taken_0x2746a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2746a8) {
            ctx->pc = 0x2746ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2746A8u;
            // 0x2746ac: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2746E0u;
            goto label_2746e0;
        }
    }
    ctx->pc = 0x2746B0u;
    // 0x2746b0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2746b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2746b4: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2746B4u;
    {
        const bool branch_taken_0x2746b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2746b4) {
            ctx->pc = 0x2746B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2746B4u;
            // 0x2746b8: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2746E0u;
            goto label_2746e0;
        }
    }
    ctx->pc = 0x2746BCu;
    // 0x2746bc: 0x0  nop
    ctx->pc = 0x2746bcu;
    // NOP
label_2746c0:
    // 0x2746c0: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x2746c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2746c4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2746c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2746c8: 0x0  nop
    ctx->pc = 0x2746c8u;
    // NOP
    // 0x2746cc: 0x0  nop
    ctx->pc = 0x2746ccu;
    // NOP
    // 0x2746d0: 0x0  nop
    ctx->pc = 0x2746d0u;
    // NOP
    // 0x2746d4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2746D4u;
    {
        const bool branch_taken_0x2746d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2746d4) {
            ctx->pc = 0x2746C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2746c0;
        }
    }
    ctx->pc = 0x2746DCu;
    // 0x2746dc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2746dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2746e0:
    // 0x2746e0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2746e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2746e4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2746e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2746e8: 0x12000068  beqz        $s0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2746E8u;
    {
        const bool branch_taken_0x2746e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746E8u;
        // 0x2746ec: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746e8) {
            ctx->pc = 0x27488Cu;
            goto label_27488c;
        }
    }
    ctx->pc = 0x2746F0u;
    // 0x2746f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2746F0u;
    {
        const bool branch_taken_0x2746f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746F0u;
        // 0x2746f4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746f0) {
            ctx->pc = 0x274728u;
            goto label_274728;
        }
    }
    ctx->pc = 0x2746F8u;
    // 0x2746f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2746f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2746fc: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2746fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274700: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x274700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x274704: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x274704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x274708: 0xc0807de  jal         func_201F78
    ctx->pc = 0x274708u;
    SET_GPR_U32(ctx, 31, 0x274710u);
    ctx->pc = 0x27470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274708u;
    // 0x27470c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x274708u, 0x274710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274710u;
label_274710:
    // 0x274710: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x274710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x274714: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x274714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x274718: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x274718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27471c: 0x8ca400f8  lw          $a0, 0xF8($a1)
    ctx->pc = 0x27471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x274720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274724: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x274724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_274728:
    // 0x274728: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x274728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x27472c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27472Cu;
    {
        const bool branch_taken_0x27472c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27472Cu;
        // 0x274730: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27472c) {
            ctx->pc = 0x274760u;
            goto label_274760;
        }
    }
    ctx->pc = 0x274734u;
    // 0x274734: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x274734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x274738: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x274738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x27473c: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x27473cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x274740: 0xc0807de  jal         func_201F78
    ctx->pc = 0x274740u;
    SET_GPR_U32(ctx, 31, 0x274748u);
    ctx->pc = 0x274744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274740u;
    // 0x274744: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x274740u, 0x274748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274748u;
label_274748:
    // 0x274748: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x274748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27474c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x27474cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x274750: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x274750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274754: 0x8ca400f8  lw          $a0, 0xF8($a1)
    ctx->pc = 0x274754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x274758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27475c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x27475cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_274760:
    // 0x274760: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x274760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x274764: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x274764u;
    {
        const bool branch_taken_0x274764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274764u;
        // 0x274768: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274764) {
            ctx->pc = 0x274890u;
            goto label_274890;
        }
    }
    ctx->pc = 0x27476Cu;
    // 0x27476c: 0xc0807de  jal         func_201F78
    ctx->pc = 0x27476Cu;
    SET_GPR_U32(ctx, 31, 0x274774u);
    ctx->pc = 0x274770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27476Cu;
    // 0x274770: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x27476Cu, 0x274774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274774u;
label_274774:
    // 0x274774: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x274774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x274778: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x274778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x27477c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27477cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274780: 0x8ca400f8  lw          $a0, 0xF8($a1)
    ctx->pc = 0x274780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x274784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274788: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x274788u;
    {
        const bool branch_taken_0x274788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274788u;
        // 0x27478c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274788) {
            ctx->pc = 0x27488Cu;
            goto label_27488c;
        }
    }
    ctx->pc = 0x274790u;
label_274790:
    // 0x274790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274794: 0x14c2003e  bne         $a2, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x274794u;
    {
        const bool branch_taken_0x274794 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x274798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274794u;
        // 0x274798: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274794) {
            ctx->pc = 0x274890u;
            goto label_274890;
        }
    }
    ctx->pc = 0x27479Cu;
    // 0x27479c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x27479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2747a0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2747A0u;
    {
        const bool branch_taken_0x2747a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747A0u;
        // 0x2747a4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747a0) {
            ctx->pc = 0x274890u;
            goto label_274890;
        }
    }
    ctx->pc = 0x2747A8u;
    // 0x2747a8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2747a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2747ac: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2747ACu;
    {
        const bool branch_taken_0x2747ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2747ac) {
            ctx->pc = 0x2747B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2747ACu;
            // 0x2747b0: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2747E0u;
            goto label_2747e0;
        }
    }
    ctx->pc = 0x2747B4u;
    // 0x2747b4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2747b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2747b8: 0x4420009  bltzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2747B8u;
    {
        const bool branch_taken_0x2747b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2747b8) {
            ctx->pc = 0x2747BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2747B8u;
            // 0x2747bc: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2747E0u;
            goto label_2747e0;
        }
    }
    ctx->pc = 0x2747C0u;
label_2747c0:
    // 0x2747c0: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x2747c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2747c4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2747c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2747c8: 0x0  nop
    ctx->pc = 0x2747c8u;
    // NOP
    // 0x2747cc: 0x0  nop
    ctx->pc = 0x2747ccu;
    // NOP
    // 0x2747d0: 0x0  nop
    ctx->pc = 0x2747d0u;
    // NOP
    // 0x2747d4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2747D4u;
    {
        const bool branch_taken_0x2747d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2747d4) {
            ctx->pc = 0x2747C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2747c0;
        }
    }
    ctx->pc = 0x2747DCu;
    // 0x2747dc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2747dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2747e0:
    // 0x2747e0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2747e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2747e4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2747e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2747e8: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2747E8u;
    {
        const bool branch_taken_0x2747e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747E8u;
        // 0x2747ec: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747e8) {
            ctx->pc = 0x27488Cu;
            goto label_27488c;
        }
    }
    ctx->pc = 0x2747F0u;
    // 0x2747f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2747F0u;
    {
        const bool branch_taken_0x2747f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747F0u;
        // 0x2747f4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747f0) {
            ctx->pc = 0x274828u;
            goto label_274828;
        }
    }
    ctx->pc = 0x2747F8u;
    // 0x2747f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2747f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2747fc: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2747fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274800: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x274800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x274804: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x274804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x274808: 0xc0807de  jal         func_201F78
    ctx->pc = 0x274808u;
    SET_GPR_U32(ctx, 31, 0x274810u);
    ctx->pc = 0x27480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274808u;
    // 0x27480c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x274808u, 0x274810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274810u;
label_274810:
    // 0x274810: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x274810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x274814: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x274814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x274818: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x274818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27481c: 0x8ca400f8  lw          $a0, 0xF8($a1)
    ctx->pc = 0x27481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x274820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274824: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x274824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_274828:
    // 0x274828: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x274828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x27482c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27482Cu;
    {
        const bool branch_taken_0x27482c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27482Cu;
        // 0x274830: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27482c) {
            ctx->pc = 0x274860u;
            goto label_274860;
        }
    }
    ctx->pc = 0x274834u;
    // 0x274834: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x274834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x274838: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x274838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x27483c: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x27483cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x274840: 0xc0807de  jal         func_201F78
    ctx->pc = 0x274840u;
    SET_GPR_U32(ctx, 31, 0x274848u);
    ctx->pc = 0x274844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274840u;
    // 0x274844: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x274840u, 0x274848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274848u;
label_274848:
    // 0x274848: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x274848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27484c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x27484cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x274850: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x274850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274854: 0x8ca400f8  lw          $a0, 0xF8($a1)
    ctx->pc = 0x274854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x274858: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27485c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x27485cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_274860:
    // 0x274860: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x274860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x274864: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274864u;
    {
        const bool branch_taken_0x274864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274864u;
        // 0x274868: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274864) {
            ctx->pc = 0x274890u;
            goto label_274890;
        }
    }
    ctx->pc = 0x27486Cu;
    // 0x27486c: 0xc0807de  jal         func_201F78
    ctx->pc = 0x27486Cu;
    SET_GPR_U32(ctx, 31, 0x274874u);
    ctx->pc = 0x274870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27486Cu;
    // 0x274870: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x27486Cu, 0x274874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274874u;
label_274874:
    // 0x274874: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x274874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x274878: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x274878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x27487c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27487cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274880: 0x8ca400f8  lw          $a0, 0xF8($a1)
    ctx->pc = 0x274880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x274884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274888: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x274888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_27488c:
    // 0x27488c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27488cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_274890:
    // 0x274890: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x274890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274894: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x274894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274898: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x274898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27489c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27489cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2748a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2748A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2748A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748A0u;
        // 0x2748a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2748A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2748A8u;
}
