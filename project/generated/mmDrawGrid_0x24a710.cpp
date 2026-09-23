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

// Function: mmDrawGrid
// Address: 0x24a710 - 0x24aa08
void mmDrawGrid_0x24a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawGrid_0x24a710");
#endif

    switch (ctx->pc) {
        case 0x24a7f8u: goto label_24a7f8;
        case 0x24a87cu: goto label_24a87c;
        case 0x24a8a0u: goto label_24a8a0;
        case 0x24a8bcu: goto label_24a8bc;
        case 0x24a904u: goto label_24a904;
        case 0x24a948u: goto label_24a948;
        case 0x24a984u: goto label_24a984;
        default: break;
    }

    ctx->pc = 0x24a710u;

    // 0x24a710: 0x8f89a168  lw          $t1, -0x5E98($gp)
    ctx->pc = 0x24a710u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x24a714: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x24a714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x24a718: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24a71c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24a71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24a720: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24a724: 0x1232024  and         $a0, $t1, $v1
    ctx->pc = 0x24a724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x24a728: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24a728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24a72c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x24a72cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a730: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24a734: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24a738: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24a73c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24a740: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A740u;
    {
        const bool branch_taken_0x24a740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A740u;
        // 0x24a744: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a740) {
            ctx->pc = 0x24A754u;
            goto label_24a754;
        }
    }
    ctx->pc = 0x24A748u;
    // 0x24a748: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x24a748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x24a74c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x24a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x24a750: 0x444023  subu        $t0, $v0, $a0
    ctx->pc = 0x24a750u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24a754:
    // 0x24a754: 0x8f8aa16c  lw          $t2, -0x5E94($gp)
    ctx->pc = 0x24a754u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x24a758: 0x8f82a178  lw          $v0, -0x5E88($gp)
    ctx->pc = 0x24a758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x24a75c: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x24a75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x24a760: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x24a760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a764: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A764u;
    {
        const bool branch_taken_0x24a764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A764u;
        // 0x24a768: 0x1229021  addu        $s2, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a764) {
            ctx->pc = 0x24A778u;
            goto label_24a778;
        }
    }
    ctx->pc = 0x24A76Cu;
    // 0x24a76c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x24a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x24a770: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x24a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x24a774: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x24a774u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a778:
    // 0x24a778: 0x8f8ba17c  lw          $t3, -0x5E84($gp)
    ctx->pc = 0x24a778u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x24a77c: 0x2482023  subu        $a0, $s2, $t0
    ctx->pc = 0x24a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x24a780: 0x8f86a164  lw          $a2, -0x5E9C($gp)
    ctx->pc = 0x24a780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x24a784: 0x42543  sra         $a0, $a0, 21
    ctx->pc = 0x24a784u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 21));
    // 0x24a788: 0x8f85a160  lw          $a1, -0x5EA0($gp)
    ctx->pc = 0x24a788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x24a78c: 0x14b9821  addu        $s3, $t2, $t3
    ctx->pc = 0x24a78cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x24a790: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x24a790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24a794: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x24a794u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x24a798: 0xa63018  mult        $a2, $a1, $a2
    ctx->pc = 0x24a798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24a79c: 0x31d43  sra         $v1, $v1, 21
    ctx->pc = 0x24a79cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 21));
    // 0x24a7a0: 0x70652818  mult1       $a1, $v1, $a1
    ctx->pc = 0x24a7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24a7a4: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x24a7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x24a7a8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x24a7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24a7ac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x24a7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7b0: 0x212402a  slt         $t0, $s0, $s2
    ctx->pc = 0x24a7b0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x24a7b4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24A7B4u;
    {
        const bool branch_taken_0x24a7b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a7b4) {
            ctx->pc = 0x24A7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A7B4u;
            // 0x24a7b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A7BCu;
            goto label_24a7bc;
        }
    }
    ctx->pc = 0x24A7BCu;
label_24a7bc:
    // 0x24a7bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24a7c0: 0x90e466a0  lbu         $a0, 0x66A0($a3)
    ctx->pc = 0x24a7c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 26272)));
    // 0x24a7c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a7c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x24a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x24a7cc: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x24a7ccu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24a7d0: 0x1012  mflo        $v0
    ctx->pc = 0x24a7d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24a7d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24a7d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x24a7d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24a7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24a7dc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x24a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24a7e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24a7e4: 0x11000028  beqz        $t0, . + 4 + (0x28 << 2)
    ctx->pc = 0x24A7E4u;
    {
        const bool branch_taken_0x24a7e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7E4u;
        // 0x24a7e8: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a7e4) {
            ctx->pc = 0x24A888u;
            goto label_24a888;
        }
    }
    ctx->pc = 0x24A7ECu;
    // 0x24a7ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24A7ECu;
    {
        const bool branch_taken_0x24a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7ECu;
        // 0x24a7f0: 0x3c150020  lui         $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a7ec) {
            ctx->pc = 0x24A800u;
            goto label_24a800;
        }
    }
    ctx->pc = 0x24A7F4u;
    // 0x24a7f4: 0x0  nop
    ctx->pc = 0x24a7f4u;
    // NOP
label_24a7f8:
    // 0x24a7f8: 0x8f8aa16c  lw          $t2, -0x5E94($gp)
    ctx->pc = 0x24a7f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x24a7fc: 0x8f8ba17c  lw          $t3, -0x5E84($gp)
    ctx->pc = 0x24a7fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
label_24a800:
    // 0x24a800: 0x8f83a180  lw          $v1, -0x5E80($gp)
    ctx->pc = 0x24a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x24a804: 0x2091023  subu        $v0, $s0, $t1
    ctx->pc = 0x24a804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x24a808: 0x8f87a184  lw          $a3, -0x5E7C($gp)
    ctx->pc = 0x24a808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x24a80c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x24a80cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24a810: 0x8f86a158  lw          $a2, -0x5EA8($gp)
    ctx->pc = 0x24a810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x24a814: 0x8f85a15c  lw          $a1, -0x5EA4($gp)
    ctx->pc = 0x24a814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x24a818: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x24a818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a81c: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x24a81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x24a820: 0x2012  mflo        $a0
    ctx->pc = 0x24a820u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x24a824: 0x1010  mfhi        $v0
    ctx->pc = 0x24a824u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24a828: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x24a828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24a82c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24a82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24a830: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24a830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24a834: 0x1670018  mult        $zero, $t3, $a3
    ctx->pc = 0x24a834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24a838: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24a838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24a83c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24a83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24a840: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24a840u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x24a844: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24a844u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24a848: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x24a848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24a84c: 0x1812  mflo        $v1
    ctx->pc = 0x24a84cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x24a850: 0x3810  mfhi        $a3
    ctx->pc = 0x24a850u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x24a854: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x24a854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24a858: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x24a858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24a85c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24a85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24a860: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x24a860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24a864: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x24a864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x24a868: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x24a868u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x24a86c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x24a86cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x24a870: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x24a870u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x24a874: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24A874u;
    SET_GPR_U32(ctx, 31, 0x24A87Cu);
    ctx->pc = 0x24A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A874u;
    // 0x24a878: 0xa73821  addu        $a3, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24A874u, 0x24A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A87Cu;
label_24a87c:
    // 0x24a87c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x24a87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x24a880: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x24A880u;
    {
        const bool branch_taken_0x24a880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A880u;
        // 0x24a884: 0x8f89a168  lw          $t1, -0x5E98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a880) {
            ctx->pc = 0x24A7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a7f8;
        }
    }
    ctx->pc = 0x24A888u;
label_24a888:
    // 0x24a888: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x24a888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a88c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x24a88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x24a890: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24A890u;
    {
        const bool branch_taken_0x24a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A890u;
        // 0x24a894: 0x3c03fd80  lui         $v1, 0xFD80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a890) {
            ctx->pc = 0x24A8D0u;
            goto label_24a8d0;
        }
    }
    ctx->pc = 0x24A898u;
    // 0x24a898: 0x3c120020  lui         $s2, 0x20
    ctx->pc = 0x24a898u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32 << 16));
    // 0x24a89c: 0x0  nop
    ctx->pc = 0x24a89cu;
    // NOP
label_24a8a0:
    // 0x24a8a0: 0x8f86a178  lw          $a2, -0x5E88($gp)
    ctx->pc = 0x24a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x24a8a4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x24a8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24a8acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8b0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x24a8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x24a8b4: 0xc092514  jal         func_249450
    ctx->pc = 0x24A8B4u;
    SET_GPR_U32(ctx, 31, 0x24A8BCu);
    ctx->pc = 0x24A8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A8B4u;
    // 0x24a8b8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249450u, 0x24A8B4u, 0x24A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8BCu;
label_24a8bc:
    // 0x24a8bc: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x24a8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x24a8c0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x24a8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x24a8c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24A8C4u;
    {
        const bool branch_taken_0x24a8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8C4u;
        // 0x24a8c8: 0x8f89a168  lw          $t1, -0x5E98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8c4) {
            ctx->pc = 0x24A8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a8a0;
        }
    }
    ctx->pc = 0x24A8CCu;
    // 0x24a8cc: 0x3c03fd80  lui         $v1, 0xFD80
    ctx->pc = 0x24a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64896 << 16));
label_24a8d0:
    // 0x24a8d0: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x24a8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24a8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A8D4u;
    {
        const bool branch_taken_0x24a8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8D4u;
        // 0x24a8d8: 0x8f82a178  lw          $v0, -0x5E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8d4) {
            ctx->pc = 0x24A908u;
            goto label_24a908;
        }
    }
    ctx->pc = 0x24A8DCu;
    // 0x24a8dc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x24a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x24a8e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x24a8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a8e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A8E4u;
    {
        const bool branch_taken_0x24a8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8E4u;
        // 0x24a8e8: 0x8f85a16c  lw          $a1, -0x5E94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8e4) {
            ctx->pc = 0x24A908u;
            goto label_24a908;
        }
    }
    ctx->pc = 0x24A8ECu;
    // 0x24a8ec: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x24a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8f0: 0x8f87a17c  lw          $a3, -0x5E84($gp)
    ctx->pc = 0x24a8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x24a8f4: 0x3c06fd80  lui         $a2, 0xFD80
    ctx->pc = 0x24a8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64896 << 16));
    // 0x24a8f8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x24a8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a8fc: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A8FCu;
    SET_GPR_U32(ctx, 31, 0x24A904u);
    ctx->pc = 0x24A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A8FCu;
    // 0x24a900: 0xa73821  addu        $a3, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A8FCu, 0x24A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A904u;
label_24a904:
    // 0x24a904: 0x8f89a168  lw          $t1, -0x5E98($gp)
    ctx->pc = 0x24a904u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
label_24a908:
    // 0x24a908: 0x3c02027f  lui         $v0, 0x27F
    ctx->pc = 0x24a908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)639 << 16));
    // 0x24a90c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24a910: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x24a910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x24a914: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A914u;
    {
        const bool branch_taken_0x24a914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A914u;
        // 0x24a918: 0x8f8aa16c  lw          $t2, -0x5E94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a914) {
            ctx->pc = 0x24A94Cu;
            goto label_24a94c;
        }
    }
    ctx->pc = 0x24A91Cu;
    // 0x24a91c: 0x8f83a178  lw          $v1, -0x5E88($gp)
    ctx->pc = 0x24a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x24a920: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x24a920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
    // 0x24a924: 0x1233021  addu        $a2, $t1, $v1
    ctx->pc = 0x24a924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x24a928: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x24a928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x24a92c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A92Cu;
    {
        const bool branch_taken_0x24a92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A92Cu;
        // 0x24a930: 0x8f85a16c  lw          $a1, -0x5E94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a92c) {
            ctx->pc = 0x24A94Cu;
            goto label_24a94c;
        }
    }
    ctx->pc = 0x24A934u;
    // 0x24a934: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x24a934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x24a938: 0x8f87a17c  lw          $a3, -0x5E84($gp)
    ctx->pc = 0x24a938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x24a93c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x24a93cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a940: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A940u;
    SET_GPR_U32(ctx, 31, 0x24A948u);
    ctx->pc = 0x24A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A940u;
    // 0x24a944: 0xa73821  addu        $a3, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A940u, 0x24A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A948u;
label_24a948:
    // 0x24a948: 0x8f8aa16c  lw          $t2, -0x5E94($gp)
    ctx->pc = 0x24a948u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
label_24a94c:
    // 0x24a94c: 0x3c03fd80  lui         $v1, 0xFD80
    ctx->pc = 0x24a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64896 << 16));
    // 0x24a950: 0x143102a  slt         $v0, $t2, $v1
    ctx->pc = 0x24a950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24a954: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A954u;
    {
        const bool branch_taken_0x24a954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A954u;
        // 0x24a958: 0x8f82a17c  lw          $v0, -0x5E84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a954) {
            ctx->pc = 0x24A988u;
            goto label_24a988;
        }
    }
    ctx->pc = 0x24A95Cu;
    // 0x24a95c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x24a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x24a960: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x24a960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a964: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A964u;
    {
        const bool branch_taken_0x24a964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A964u;
        // 0x24a968: 0x8f84a168  lw          $a0, -0x5E98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a964) {
            ctx->pc = 0x24A988u;
            goto label_24a988;
        }
    }
    ctx->pc = 0x24A96Cu;
    // 0x24a96c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x24a96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a970: 0x8f86a178  lw          $a2, -0x5E88($gp)
    ctx->pc = 0x24a970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x24a974: 0x3c07fd80  lui         $a3, 0xFD80
    ctx->pc = 0x24a974u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64896 << 16));
    // 0x24a978: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x24a978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a97c: 0xc0924d0  jal         func_249340
    ctx->pc = 0x24A97Cu;
    SET_GPR_U32(ctx, 31, 0x24A984u);
    ctx->pc = 0x24A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A97Cu;
    // 0x24a980: 0x863021  addu        $a2, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249340u, 0x24A97Cu, 0x24A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A984u;
label_24a984:
    // 0x24a984: 0x8f8aa16c  lw          $t2, -0x5E94($gp)
    ctx->pc = 0x24a984u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
label_24a988:
    // 0x24a988: 0x3c02027f  lui         $v0, 0x27F
    ctx->pc = 0x24a988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)639 << 16));
    // 0x24a98c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24a990: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x24a990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x24a994: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24A994u;
    {
        const bool branch_taken_0x24a994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A994u;
        // 0x24a998: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a994) {
            ctx->pc = 0x24A9E8u;
            goto label_24a9e8;
        }
    }
    ctx->pc = 0x24A99Cu;
    // 0x24a99c: 0x8f83a17c  lw          $v1, -0x5E84($gp)
    ctx->pc = 0x24a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x24a9a0: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x24a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
    // 0x24a9a4: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x24a9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x24a9a8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x24a9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x24a9ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24A9ACu;
    {
        const bool branch_taken_0x24a9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9ACu;
        // 0x24a9b0: 0xdfb50050  ld          $s5, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9ac) {
            ctx->pc = 0x24A9ECu;
            goto label_24a9ec;
        }
    }
    ctx->pc = 0x24A9B4u;
    // 0x24a9b4: 0x8f84a168  lw          $a0, -0x5E98($gp)
    ctx->pc = 0x24a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x24a9b8: 0x3c050280  lui         $a1, 0x280
    ctx->pc = 0x24a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)640 << 16));
    // 0x24a9bc: 0x8f86a178  lw          $a2, -0x5E88($gp)
    ctx->pc = 0x24a9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x24a9c0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x24a9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a9c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24a9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a9c8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x24a9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x24a9cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24a9ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a9d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24a9d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a9d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24a9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a9d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24a9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a9e0: 0x80924d0  j           func_249340
    ctx->pc = 0x24A9E0u;
    ctx->pc = 0x24A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9E0u;
    // 0x24a9e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249340u;
    mmDrawRect_0x249340(rdram, ctx, runtime); return;
    ctx->pc = 0x24A9E8u;
label_24a9e8:
    // 0x24a9e8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24a9e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24a9ec:
    // 0x24a9ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24a9ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a9f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24a9f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a9f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24a9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a9f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24a9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x24AA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA00u;
        // 0x24aa04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AA08u;
}
