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

// Function: mmCenterMap
// Address: 0x249628 - 0x2498c4
void mmCenterMap_0x249628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmCenterMap_0x249628");
#endif

    switch (ctx->pc) {
        case 0x249638u: goto label_249638;
        case 0x2496a0u: goto label_2496a0;
        case 0x249798u: goto label_249798;
        case 0x2497fcu: goto label_2497fc;
        case 0x249854u: goto label_249854;
        case 0x2498acu: goto label_2498ac;
        default: break;
    }

    ctx->pc = 0x249628u;

    // 0x249628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24962c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249630: 0xc09254c  jal         func_249530
    ctx->pc = 0x249630u;
    SET_GPR_U32(ctx, 31, 0x249638u);
    ctx->pc = 0x249530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249530u, 0x249630u, 0x249638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249638u;
label_249638:
    // 0x249638: 0x8f82a164  lw          $v0, -0x5E9C($gp)
    ctx->pc = 0x249638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x24963c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x24963cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x249640: 0x8f88a160  lw          $t0, -0x5EA0($gp)
    ctx->pc = 0x249640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x249644: 0x22440  sll         $a0, $v0, 17
    ctx->pc = 0x249644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x249648: 0xaf83a178  sw          $v1, -0x5E88($gp)
    ctx->pc = 0x249648u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943096), GPR_U32(ctx, 3));
    // 0x24964c: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x24964cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x249650: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x249650u;
    {
        const bool branch_taken_0x249650 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249650u;
        // 0x249654: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249650) {
            ctx->pc = 0x24965Cu;
            goto label_24965c;
        }
    }
    ctx->pc = 0x249658u;
    // 0x249658: 0x21023  negu        $v0, $v0
    ctx->pc = 0x249658u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_24965c:
    // 0x24965c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x24965cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x249660: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249660u;
    {
        const bool branch_taken_0x249660 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249660u;
        // 0x249664: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249660) {
            ctx->pc = 0x24966Cu;
            goto label_24966c;
        }
    }
    ctx->pc = 0x249668u;
    // 0x249668: 0x31823  negu        $v1, $v1
    ctx->pc = 0x249668u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_24966c:
    // 0x24966c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24966cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249670: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x249670u;
    {
        const bool branch_taken_0x249670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249670) {
            ctx->pc = 0x249674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249670u;
            // 0x249674: 0x80202d  daddu       $a0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249698u;
            goto label_249698;
        }
    }
    ctx->pc = 0x249678u;
    // 0x249678: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x249678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x24967c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x24967cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x249680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249684: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x249684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x249688: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x249688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24968c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x24968cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x249690: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x249690u;
    {
        const bool branch_taken_0x249690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249690u;
        // 0x249694: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249690) {
            ctx->pc = 0x2496ACu;
            goto label_2496ac;
        }
    }
    ctx->pc = 0x249698u;
label_249698:
    // 0x249698: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x249698u;
    SET_GPR_U32(ctx, 31, 0x2496A0u);
    ctx->pc = 0x24969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249698u;
    // 0x24969c: 0x42438  dsll        $a0, $a0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x249698u, 0x2496A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496A0u;
label_2496a0:
    // 0x2496a0: 0x8f88a160  lw          $t0, -0x5EA0($gp)
    ctx->pc = 0x2496a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x2496a4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2496a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2496a8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2496a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_2496ac:
    // 0x2496ac: 0x8f8aa178  lw          $t2, -0x5E88($gp)
    ctx->pc = 0x2496acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x2496b0: 0x85c00  sll         $t3, $t0, 16
    ctx->pc = 0x2496b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2496b4: 0x8f86a1a0  lw          $a2, -0x5E60($gp)
    ctx->pc = 0x2496b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943136)));
    // 0x2496b8: 0x5610002  bgez        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2496B8u;
    {
        const bool branch_taken_0x2496b8 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x2496BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496B8u;
        // 0x2496bc: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496b8) {
            ctx->pc = 0x2496C4u;
            goto label_2496c4;
        }
    }
    ctx->pc = 0x2496C0u;
    // 0x2496c0: 0x84023  negu        $t0, $t0
    ctx->pc = 0x2496c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_2496c4:
    // 0x2496c4: 0x1450018  mult        $zero, $t2, $a1
    ctx->pc = 0x2496c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2496c8: 0x8f84a194  lw          $a0, -0x5E6C($gp)
    ctx->pc = 0x2496c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943124)));
    // 0x2496cc: 0x8f83a198  lw          $v1, -0x5E68($gp)
    ctx->pc = 0x2496ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943128)));
    // 0x2496d0: 0xa2fc2  srl         $a1, $t2, 31
    ctx->pc = 0x2496d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x2496d4: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x2496d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2496d8: 0x84383  sra         $t0, $t0, 14
    ctx->pc = 0x2496d8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 14));
    // 0x2496dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2496dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2496e0: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2496e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2496e4: 0x1012  mflo        $v0
    ctx->pc = 0x2496e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2496e8: 0x3810  mfhi        $a3
    ctx->pc = 0x2496e8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2496ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2496ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2496f0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2496f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2496f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2496f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2496f8: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x2496f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2496fc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2496fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x249700: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x249700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x249704: 0x8f82a19c  lw          $v0, -0x5E64($gp)
    ctx->pc = 0x249704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943132)));
    // 0x249708: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x249708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x24970c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x24970cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x249710: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x249710u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x249714: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x249714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x249718: 0xaf87a17c  sw          $a3, -0x5E84($gp)
    ctx->pc = 0x249718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943100), GPR_U32(ctx, 7));
    // 0x24971c: 0x44fc2  srl         $t1, $a0, 31
    ctx->pc = 0x24971cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x249720: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x249720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x249724: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x249724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x249728: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x249728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24972c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24972cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x249730: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x249730u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x249734: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x249734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249738: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x249738u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24973c: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x24973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x249740: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x249740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x249744: 0x5410002  bgez        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x249744u;
    {
        const bool branch_taken_0x249744 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x249748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249744u;
        // 0x249748: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249744) {
            ctx->pc = 0x249750u;
            goto label_249750;
        }
    }
    ctx->pc = 0x24974Cu;
    // 0x24974c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x24974cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_249750:
    // 0x249750: 0xaf85a170  sw          $a1, -0x5E90($gp)
    ctx->pc = 0x249750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943088), GPR_U32(ctx, 5));
    // 0x249754: 0x102402a  slt         $t0, $t0, $v0
    ctx->pc = 0x249754u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249758: 0xaf86a174  sw          $a2, -0x5E8C($gp)
    ctx->pc = 0x249758u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943092), GPR_U32(ctx, 6));
    // 0x24975c: 0xaf84a168  sw          $a0, -0x5E98($gp)
    ctx->pc = 0x24975cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943080), GPR_U32(ctx, 4));
    // 0x249760: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x249760u;
    {
        const bool branch_taken_0x249760 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x249764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249760u;
        // 0x249764: 0xaf83a16c  sw          $v1, -0x5E94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943084), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249760) {
            ctx->pc = 0x249788u;
            goto label_249788;
        }
    }
    ctx->pc = 0x249768u;
    // 0x249768: 0x16a2026  xor         $a0, $t3, $t2
    ctx->pc = 0x249768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x24976c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x24976cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x249770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249774: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x249774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x249778: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x249778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24977c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x24977cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x249780: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x249780u;
    {
        const bool branch_taken_0x249780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249780u;
        // 0x249784: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249780) {
            ctx->pc = 0x2497A0u;
            goto label_2497a0;
        }
    }
    ctx->pc = 0x249788u;
label_249788:
    // 0x249788: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x249788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24978c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x24978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249790: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x249790u;
    SET_GPR_U32(ctx, 31, 0x249798u);
    ctx->pc = 0x249794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249790u;
    // 0x249794: 0x42438  dsll        $a0, $a0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x249790u, 0x249798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249798u;
label_249798:
    // 0x249798: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x249798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24979c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x24979cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_2497a0:
    // 0x2497a0: 0x8f82a164  lw          $v0, -0x5E9C($gp)
    ctx->pc = 0x2497a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x2497a4: 0x8f85a17c  lw          $a1, -0x5E84($gp)
    ctx->pc = 0x2497a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x2497a8: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x2497a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2497ac: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2497ACu;
    {
        const bool branch_taken_0x2497ac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2497B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497ACu;
        // 0x2497b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497ac) {
            ctx->pc = 0x2497B8u;
            goto label_2497b8;
        }
    }
    ctx->pc = 0x2497B4u;
    // 0x2497b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2497b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2497b8:
    // 0x2497b8: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2497B8u;
    {
        const bool branch_taken_0x2497b8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2497BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497B8u;
        // 0x2497bc: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497b8) {
            ctx->pc = 0x2497C4u;
            goto label_2497c4;
        }
    }
    ctx->pc = 0x2497C0u;
    // 0x2497c0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2497c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2497c4:
    // 0x2497c4: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x2497c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x2497c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2497c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2497cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2497CCu;
    {
        const bool branch_taken_0x2497cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2497D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497CCu;
        // 0x2497d0: 0xaf86a180  sw          $a2, -0x5E80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497cc) {
            ctx->pc = 0x2497F4u;
            goto label_2497f4;
        }
    }
    ctx->pc = 0x2497D4u;
    // 0x2497d4: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x2497d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2497d8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2497d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2497dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2497dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2497e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2497e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2497e4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2497e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2497e8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2497e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2497ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2497ECu;
    {
        const bool branch_taken_0x2497ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2497F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497ECu;
        // 0x2497f0: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497ec) {
            ctx->pc = 0x249804u;
            goto label_249804;
        }
    }
    ctx->pc = 0x2497F4u;
label_2497f4:
    // 0x2497f4: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x2497F4u;
    SET_GPR_U32(ctx, 31, 0x2497FCu);
    ctx->pc = 0x2497F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497F4u;
    // 0x2497f8: 0x42438  dsll        $a0, $a0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x2497F4u, 0x2497FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497FCu;
label_2497fc:
    // 0x2497fc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2497fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249800: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x249800u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_249804:
    // 0x249804: 0x8f85a180  lw          $a1, -0x5E80($gp)
    ctx->pc = 0x249804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x249808: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x249808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24980c: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24980Cu;
    {
        const bool branch_taken_0x24980c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24980Cu;
        // 0x249810: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24980c) {
            ctx->pc = 0x249818u;
            goto label_249818;
        }
    }
    ctx->pc = 0x249814u;
    // 0x249814: 0x31823  negu        $v1, $v1
    ctx->pc = 0x249814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_249818:
    // 0x249818: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x249818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24981c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24981Cu;
    {
        const bool branch_taken_0x24981c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24981Cu;
        // 0x249820: 0xaf86a184  sw          $a2, -0x5E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943108), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24981c) {
            ctx->pc = 0x249848u;
            goto label_249848;
        }
    }
    ctx->pc = 0x249824u;
    // 0x249824: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x249824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x249828: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x249828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x24982c: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x24982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x249830: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x249830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249834: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x249834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x249838: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x249838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24983c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x24983cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x249840: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x249840u;
    {
        const bool branch_taken_0x249840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249840u;
        // 0x249844: 0x83300b  movn        $a2, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249840) {
            ctx->pc = 0x24985Cu;
            goto label_24985c;
        }
    }
    ctx->pc = 0x249848u;
label_249848:
    // 0x249848: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x249848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x24984c: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x24984Cu;
    SET_GPR_U32(ctx, 31, 0x249854u);
    ctx->pc = 0x249850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24984Cu;
    // 0x249850: 0x42478  dsll        $a0, $a0, 17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x24984Cu, 0x249854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249854u;
label_249854:
    // 0x249854: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x249854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249858: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x249858u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_24985c:
    // 0x24985c: 0x8f85a184  lw          $a1, -0x5E7C($gp)
    ctx->pc = 0x24985cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x249860: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x249860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x249864: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249864u;
    {
        const bool branch_taken_0x249864 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249864u;
        // 0x249868: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249864) {
            ctx->pc = 0x249870u;
            goto label_249870;
        }
    }
    ctx->pc = 0x24986Cu;
    // 0x24986c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x24986cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_249870:
    // 0x249870: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x249870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249874: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x249874u;
    {
        const bool branch_taken_0x249874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249874u;
        // 0x249878: 0xaf86a188  sw          $a2, -0x5E78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943112), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249874) {
            ctx->pc = 0x2498A0u;
            goto label_2498a0;
        }
    }
    ctx->pc = 0x24987Cu;
    // 0x24987c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x24987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x249880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x249880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249884: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x249884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x249888: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x249888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x24988c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x24988cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249890: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x249890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x249894: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x249894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x249898: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x249898u;
    {
        const bool branch_taken_0x249898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249898u;
        // 0x24989c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249898) {
            ctx->pc = 0x2498B4u;
            goto label_2498b4;
        }
    }
    ctx->pc = 0x2498A0u;
label_2498a0:
    // 0x2498a0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2498a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2498a4: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x2498A4u;
    SET_GPR_U32(ctx, 31, 0x2498ACu);
    ctx->pc = 0x2498A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498A4u;
    // 0x2498a8: 0x42478  dsll        $a0, $a0, 17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x2498A4u, 0x2498ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498ACu;
label_2498ac:
    // 0x2498ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2498acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2498b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2498b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2498b4:
    // 0x2498b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2498b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2498b8: 0xaf82a18c  sw          $v0, -0x5E74($gp)
    ctx->pc = 0x2498b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943116), GPR_U32(ctx, 2));
    // 0x2498bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2498BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2498C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498BCu;
        // 0x2498c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2498BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2498C4u;
}
