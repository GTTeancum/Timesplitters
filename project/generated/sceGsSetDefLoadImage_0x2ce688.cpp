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

// Function: sceGsSetDefLoadImage
// Address: 0x2ce688 - 0x2ce86c
void sceGsSetDefLoadImage_0x2ce688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetDefLoadImage_0x2ce688");
#endif

    switch (ctx->pc) {
        case 0x2ce74cu: goto label_2ce74c;
        default: break;
    }

    ctx->pc = 0x2ce688u;

    // 0x2ce688: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2ce688u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2ce68c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2ce68cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2ce690: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2ce690u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2ce694: 0x76c03  sra         $t5, $a3, 16
    ctx->pc = 0x2ce694u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2ce698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce69c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ce69cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ce6a0: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x2ce6a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2ce6a4: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x2ce6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x2ce6a8: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x2ce6a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x2ce6ac: 0x66403  sra         $t4, $a2, 16
    ctx->pc = 0x2ce6acu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2ce6b0: 0x87c03  sra         $t7, $t0, 16
    ctx->pc = 0x2ce6b0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2ce6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce6b8: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x2ce6b8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2ce6bc: 0x9c403  sra         $t8, $t1, 16
    ctx->pc = 0x2ce6bcu;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 16));
    // 0x2ce6c0: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x2ce6c0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x2ce6c4: 0xb4403  sra         $t0, $t3, 16
    ctx->pc = 0x2ce6c4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 16));
    // 0x2ce6c8: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x2ce6c8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce6cc: 0x2da2003b  sltiu       $v0, $t5, 0x3B
    ctx->pc = 0x2ce6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x2ce6d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CE6D0u;
    {
        const bool branch_taken_0x2ce6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6D0u;
        // 0x2ce6d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6d0) {
            ctx->pc = 0x2CE734u;
            goto label_2ce734;
        }
    }
    ctx->pc = 0x2CE6D8u;
    // 0x2ce6d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ce6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ce6dc: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x2ce6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2ce6e0: 0x2442a190  addiu       $v0, $v0, -0x5E70
    ctx->pc = 0x2ce6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943120));
    // 0x2ce6e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ce6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce6e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ce6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce6ec: 0x800008  jr          $a0
    ctx->pc = 0x2CE6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CE6F4u: goto label_2ce6f4;
            case 0x2CE700u: goto label_2ce700;
            case 0x2CE714u: goto label_2ce714;
            case 0x2CE720u: goto label_2ce720;
            case 0x2CE72Cu: goto label_2ce72c;
            case 0x2CE734u: goto label_2ce734;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE6ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE6F4u;
label_2ce6f4:
    // 0x2ce6f4: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x2ce6f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ce6f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CE6F8u;
    {
        const bool branch_taken_0x2ce6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6F8u;
        // 0x2ce6fc: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6f8) {
            ctx->pc = 0x2CE734u;
            goto label_2ce734;
        }
    }
    ctx->pc = 0x2CE700u;
label_2ce700:
    // 0x2ce700: 0x1481818  mult        $v1, $t2, $t0
    ctx->pc = 0x2ce700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ce704: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2ce704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ce708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce70c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE70Cu;
    {
        const bool branch_taken_0x2ce70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE70Cu;
        // 0x2ce710: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce70c) {
            ctx->pc = 0x2CE734u;
            goto label_2ce734;
        }
    }
    ctx->pc = 0x2CE714u;
label_2ce714:
    // 0x2ce714: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x2ce714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ce718: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE718u;
    {
        const bool branch_taken_0x2ce718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE718u;
        // 0x2ce71c: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce718) {
            ctx->pc = 0x2CE734u;
            goto label_2ce734;
        }
    }
    ctx->pc = 0x2CE720u;
label_2ce720:
    // 0x2ce720: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x2ce720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ce724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE724u;
    {
        const bool branch_taken_0x2ce724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE724u;
        // 0x2ce728: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce724) {
            ctx->pc = 0x2CE734u;
            goto label_2ce734;
        }
    }
    ctx->pc = 0x2CE72Cu;
label_2ce72c:
    // 0x2ce72c: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x2ce72cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ce730: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
label_2ce734:
    // 0x2ce734: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2ce734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2ce738: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2ce738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ce73c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE73Cu;
    {
        const bool branch_taken_0x2ce73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE73Cu;
        // 0x2ce740: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce73c) {
            ctx->pc = 0x2CE754u;
            goto label_2ce754;
        }
    }
    ctx->pc = 0x2CE744u;
    // 0x2ce744: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2CE744u;
    SET_GPR_U32(ctx, 31, 0x2CE74Cu);
    ctx->pc = 0x2CE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE744u;
    // 0x2ce748: 0x2484a160  addiu       $a0, $a0, -0x5EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2CE744u, 0x2CE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE74Cu;
label_2ce74c:
    // 0x2ce74c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2CE74Cu;
    {
        const bool branch_taken_0x2ce74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE74Cu;
        // 0x2ce750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce74c) {
            ctx->pc = 0x2CE860u;
            goto label_2ce860;
        }
    }
    ctx->pc = 0x2CE754u;
label_2ce754:
    // 0x2ce754: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x2ce754u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ce758: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x2ce758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x2ce75c: 0x7dc20050  sq          $v0, 0x50($t6)
    ctx->pc = 0x2ce75cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 80), GPR_VEC(ctx, 2));
    // 0x2ce760: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x2ce760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2ce764: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x2ce764u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x2ce768: 0x3c07f3ff  lui         $a3, 0xF3FF
    ctx->pc = 0x2ce768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62463 << 16));
    // 0x2ce76c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2ce76cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2ce770: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2ce770u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2ce774: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2ce774u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2ce778: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2ce778u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2ce77c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2ce77cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2ce780: 0xddc40050  ld          $a0, 0x50($t6)
    ctx->pc = 0x2ce780u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 80)));
    // 0x2ce784: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x2ce784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2ce788: 0xddc50000  ld          $a1, 0x0($t6)
    ctx->pc = 0x2ce788u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2ce78c: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x2ce78cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
    // 0x2ce790: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2ce790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ce794: 0xddcb0008  ld          $t3, 0x8($t6)
    ctx->pc = 0x2ce794u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2ce798: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2ce798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2ce79c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ce79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ce7a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ce7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ce7a4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2ce7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ce7a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ce7a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2ce7ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ce7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ce7b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ce7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ce7b4: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2ce7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2ce7b8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2ce7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2ce7bc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2ce7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2ce7c0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2ce7c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2ce7c4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x2ce7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x2ce7c8: 0x6343b  dsra        $a2, $a2, 16
    ctx->pc = 0x2ce7c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 16);
    // 0x2ce7cc: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x2ce7ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x2ce7d0: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x2ce7d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2ce7d4: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x2ce7d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x2ce7d8: 0x8443b  dsra        $t0, $t0, 16
    ctx->pc = 0x2ce7d8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> 16);
    // 0x2ce7dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ce7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ce7e0: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2ce7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2ce7e4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2ce7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ce7e8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x2ce7e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ce7ec: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x2ce7ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x2ce7f0: 0xf4c3c  dsll32      $t1, $t7, 16
    ctx->pc = 0x2ce7f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << (32 + 16));
    // 0x2ce7f4: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x2ce7f4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x2ce7f8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ce7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2ce7fc: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x2ce7fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x2ce800: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x2ce800u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x2ce804: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x2ce804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2ce808: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x2ce808u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
    // 0x2ce80c: 0x94c3b  dsra        $t1, $t1, 16
    ctx->pc = 0x2ce80cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> 16);
    // 0x2ce810: 0x18643c  dsll32      $t4, $t8, 16
    ctx->pc = 0x2ce810u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 16));
    // 0x2ce814: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x2ce814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x2ce818: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x2ce818u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x2ce81c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2ce81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ce820: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x2ce820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2ce824: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x2ce824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2ce828: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x2ce828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2ce82c: 0xfdc40050  sd          $a0, 0x50($t6)
    ctx->pc = 0x2ce82cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 4));
    // 0x2ce830: 0xfdc50000  sd          $a1, 0x0($t6)
    ctx->pc = 0x2ce830u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 5));
    // 0x2ce834: 0xfdcb0008  sd          $t3, 0x8($t6)
    ctx->pc = 0x2ce834u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 11));
    // 0x2ce838: 0xfdc60010  sd          $a2, 0x10($t6)
    ctx->pc = 0x2ce838u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 6));
    // 0x2ce83c: 0xfdc20018  sd          $v0, 0x18($t6)
    ctx->pc = 0x2ce83cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 2));
    // 0x2ce840: 0xfdc90020  sd          $t1, 0x20($t6)
    ctx->pc = 0x2ce840u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 9));
    // 0x2ce844: 0xfdc30028  sd          $v1, 0x28($t6)
    ctx->pc = 0x2ce844u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
    // 0x2ce848: 0xfdca0030  sd          $t2, 0x30($t6)
    ctx->pc = 0x2ce848u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 10));
    // 0x2ce84c: 0xfdc70038  sd          $a3, 0x38($t6)
    ctx->pc = 0x2ce84cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 7));
    // 0x2ce850: 0xfdc80048  sd          $t0, 0x48($t6)
    ctx->pc = 0x2ce850u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 8));
    // 0x2ce854: 0xfdc00040  sd          $zero, 0x40($t6)
    ctx->pc = 0x2ce854u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 0));
    // 0x2ce858: 0xf  sync
    ctx->pc = 0x2ce858u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2ce85c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ce85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ce860:
    // 0x2ce860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce864: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE864u;
        // 0x2ce868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE86Cu;
}
