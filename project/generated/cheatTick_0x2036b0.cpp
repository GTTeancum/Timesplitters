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

// Function: cheatTick
// Address: 0x2036b0 - 0x2037f8
void cheatTick_0x2036b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheatTick_0x2036b0");
#endif

    switch (ctx->pc) {
        case 0x2036b0u: goto label_2036b0;
        case 0x2036b4u: goto label_2036b4;
        case 0x2036b8u: goto label_2036b8;
        case 0x2036bcu: goto label_2036bc;
        case 0x2036c0u: goto label_2036c0;
        case 0x2036c4u: goto label_2036c4;
        case 0x2036c8u: goto label_2036c8;
        case 0x2036ccu: goto label_2036cc;
        case 0x2036d0u: goto label_2036d0;
        case 0x2036d4u: goto label_2036d4;
        case 0x2036d8u: goto label_2036d8;
        case 0x2036dcu: goto label_2036dc;
        case 0x2036e0u: goto label_2036e0;
        case 0x2036e4u: goto label_2036e4;
        case 0x2036e8u: goto label_2036e8;
        case 0x2036ecu: goto label_2036ec;
        case 0x2036f0u: goto label_2036f0;
        case 0x2036f4u: goto label_2036f4;
        case 0x2036f8u: goto label_2036f8;
        case 0x2036fcu: goto label_2036fc;
        case 0x203700u: goto label_203700;
        case 0x203704u: goto label_203704;
        case 0x203708u: goto label_203708;
        case 0x20370cu: goto label_20370c;
        case 0x203710u: goto label_203710;
        case 0x203714u: goto label_203714;
        case 0x203718u: goto label_203718;
        case 0x20371cu: goto label_20371c;
        case 0x203720u: goto label_203720;
        case 0x203724u: goto label_203724;
        case 0x203728u: goto label_203728;
        case 0x20372cu: goto label_20372c;
        case 0x203730u: goto label_203730;
        case 0x203734u: goto label_203734;
        case 0x203738u: goto label_203738;
        case 0x20373cu: goto label_20373c;
        case 0x203740u: goto label_203740;
        case 0x203744u: goto label_203744;
        case 0x203748u: goto label_203748;
        case 0x20374cu: goto label_20374c;
        case 0x203750u: goto label_203750;
        case 0x203754u: goto label_203754;
        case 0x203758u: goto label_203758;
        case 0x20375cu: goto label_20375c;
        case 0x203760u: goto label_203760;
        case 0x203764u: goto label_203764;
        case 0x203768u: goto label_203768;
        case 0x20376cu: goto label_20376c;
        case 0x203770u: goto label_203770;
        case 0x203774u: goto label_203774;
        case 0x203778u: goto label_203778;
        case 0x20377cu: goto label_20377c;
        case 0x203780u: goto label_203780;
        case 0x203784u: goto label_203784;
        case 0x203788u: goto label_203788;
        case 0x20378cu: goto label_20378c;
        case 0x203790u: goto label_203790;
        case 0x203794u: goto label_203794;
        case 0x203798u: goto label_203798;
        case 0x20379cu: goto label_20379c;
        case 0x2037a0u: goto label_2037a0;
        case 0x2037a4u: goto label_2037a4;
        case 0x2037a8u: goto label_2037a8;
        case 0x2037acu: goto label_2037ac;
        case 0x2037b0u: goto label_2037b0;
        case 0x2037b4u: goto label_2037b4;
        case 0x2037b8u: goto label_2037b8;
        case 0x2037bcu: goto label_2037bc;
        case 0x2037c0u: goto label_2037c0;
        case 0x2037c4u: goto label_2037c4;
        case 0x2037c8u: goto label_2037c8;
        case 0x2037ccu: goto label_2037cc;
        case 0x2037d0u: goto label_2037d0;
        case 0x2037d4u: goto label_2037d4;
        case 0x2037d8u: goto label_2037d8;
        case 0x2037dcu: goto label_2037dc;
        case 0x2037e0u: goto label_2037e0;
        case 0x2037e4u: goto label_2037e4;
        case 0x2037e8u: goto label_2037e8;
        case 0x2037ecu: goto label_2037ec;
        case 0x2037f0u: goto label_2037f0;
        case 0x2037f4u: goto label_2037f4;
        default: break;
    }

    ctx->pc = 0x2036b0u;

label_2036b0:
    // 0x2036b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2036b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2036b4:
    // 0x2036b4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2036b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_2036b8:
    // 0x2036b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2036b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2036bc:
    // 0x2036bc: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x2036bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_2036c0:
    // 0x2036c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2036c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2036c4:
    // 0x2036c4: 0x2452df40  addiu       $s2, $v0, -0x20C0
    ctx->pc = 0x2036c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958912));
label_2036c8:
    // 0x2036c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2036c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2036cc:
    // 0x2036cc: 0x2475df98  addiu       $s5, $v1, -0x2068
    ctx->pc = 0x2036ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959000));
label_2036d0:
    // 0x2036d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2036d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2036d4:
    // 0x2036d4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2036d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2036d8:
    // 0x2036d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2036d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2036dc:
    // 0x2036dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2036dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2036e0:
    // 0x2036e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2036e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2036e4:
    // 0x2036e4: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x2036e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2036e8:
    // 0x2036e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2036e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2036ec:
    // 0x2036ec: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x2036ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2036f0:
    // 0x2036f0: 0x8f8a9ac8  lw          $t2, -0x6538($gp)
    ctx->pc = 0x2036f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941384)));
label_2036f4:
    // 0x2036f4: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x2036f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2036f8:
    // 0x2036f8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_2036fc:
    if (ctx->pc == 0x2036FCu) {
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x203700u;
        goto label_203700;
    }
    ctx->pc = 0x2036F8u;
    {
        const bool branch_taken_0x2036f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2036f8) {
            ctx->pc = 0x2036FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2036F8u;
            // 0x2036fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x203700u;
            goto label_203700;
        }
    }
    ctx->pc = 0x203700u;
label_203700:
    // 0x203700: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x203700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203704:
    // 0x203704: 0x554021  addu        $t0, $v0, $s5
    ctx->pc = 0x203704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_203708:
    // 0x203708: 0x8d070028  lw          $a3, 0x28($t0)
    ctx->pc = 0x203708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_20370c:
    // 0x20370c: 0x24e2ffec  addiu       $v0, $a3, -0x14
    ctx->pc = 0x20370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_203710:
    // 0x203710: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x203710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_203714:
    // 0x203714: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x203714u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_203718:
    // 0x203718: 0x1810  mfhi        $v1
    ctx->pc = 0x203718u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_20371c:
    // 0x20371c: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
label_203720:
    if (ctx->pc == 0x203720u) {
        ctx->pc = 0x203720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20371Cu;
        // 0x203720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203724u;
        goto label_203724;
    }
    ctx->pc = 0x20371Cu;
    {
        const bool branch_taken_0x20371c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x203720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20371Cu;
        // 0x203720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20371c) {
            ctx->pc = 0x203780u;
            goto label_203780;
        }
    }
    ctx->pc = 0x203724u;
label_203724:
    // 0x203724: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x203724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_203728:
    // 0x203728: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x203728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20372c:
    // 0x20372c: 0x0  nop
    ctx->pc = 0x20372cu;
    // NOP
label_203730:
    // 0x203730: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x203730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_203734:
    // 0x203734: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x203734u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_203738:
    // 0x203738: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x203738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20373c:
    // 0x20373c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_203740:
    // 0x203740: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x203740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_203744:
    // 0x203744: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x203744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_203748:
    // 0x203748: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_20374c:
    // 0x20374c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x20374cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_203750:
    // 0x203750: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_203754:
    if (ctx->pc == 0x203754u) {
        ctx->pc = 0x203754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203750u;
        // 0x203754: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x203758u;
        goto label_203758;
    }
    ctx->pc = 0x203750u;
    {
        const bool branch_taken_0x203750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203750) {
            ctx->pc = 0x203754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203750u;
            // 0x203754: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x203758u;
            goto label_203758;
        }
    }
    ctx->pc = 0x203758u;
label_203758:
    // 0x203758: 0xc7202a  slt         $a0, $a2, $a3
    ctx->pc = 0x203758u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_20375c:
    // 0x20375c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x20375cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_203760:
    // 0x203760: 0x2480b  movn        $t1, $zero, $v0
    ctx->pc = 0x203760u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_203764:
    // 0x203764: 0x2810  mfhi        $a1
    ctx->pc = 0x203764u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_203768:
    // 0x203768: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_20376c:
    if (ctx->pc == 0x20376Cu) {
        ctx->pc = 0x20376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203768u;
        // 0x20376c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203770u;
        goto label_203770;
    }
    ctx->pc = 0x203768u;
    {
        const bool branch_taken_0x203768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203768u;
        // 0x20376c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203768) {
            ctx->pc = 0x203784u;
            goto label_203784;
        }
    }
    ctx->pc = 0x203770u;
label_203770:
    // 0x203770: 0x1520ffef  bnez        $t1, . + 4 + (-0x11 << 2)
label_203774:
    if (ctx->pc == 0x203774u) {
        ctx->pc = 0x203774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203770u;
        // 0x203774: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203778u;
        goto label_203778;
    }
    ctx->pc = 0x203770u;
    {
        const bool branch_taken_0x203770 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x203774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203770u;
        // 0x203774: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203770) {
            ctx->pc = 0x203730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203730;
        }
    }
    ctx->pc = 0x203778u;
label_203778:
    // 0x203778: 0x10000002  b           . + 4 + (0x2 << 2)
label_20377c:
    if (ctx->pc == 0x20377Cu) {
        ctx->pc = 0x203780u;
        goto label_203780;
    }
    ctx->pc = 0x203778u;
    {
        const bool branch_taken_0x203778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203778) {
            ctx->pc = 0x203784u;
            goto label_203784;
        }
    }
    ctx->pc = 0x203780u;
label_203780:
    // 0x203780: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x203780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_203784:
    // 0x203784: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
label_203788:
    if (ctx->pc == 0x203788u) {
        ctx->pc = 0x203788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203784u;
        // 0x203788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20378Cu;
        goto label_20378c;
    }
    ctx->pc = 0x203784u;
    {
        const bool branch_taken_0x203784 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x203788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203784u;
        // 0x203788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203784) {
            ctx->pc = 0x2037C8u;
            goto label_2037c8;
        }
    }
    ctx->pc = 0x20378Cu;
label_20378c:
    // 0x20378c: 0x8d02002c  lw          $v0, 0x2C($t0)
    ctx->pc = 0x20378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_203790:
    // 0x203790: 0x40f809  jalr        $v0
label_203794:
    if (ctx->pc == 0x203794u) {
        ctx->pc = 0x203798u;
        goto label_203798;
    }
    ctx->pc = 0x203790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203798u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203790u, 0x203798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203798u;
label_203798:
    // 0x203798: 0x8f8a9ac8  lw          $t2, -0x6538($gp)
    ctx->pc = 0x203798u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941384)));
label_20379c:
    // 0x20379c: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x20379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2037a0:
    // 0x2037a0: 0x26820026  addiu       $v0, $s4, 0x26
    ctx->pc = 0x2037a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 38));
label_2037a4:
    // 0x2037a4: 0x0  nop
    ctx->pc = 0x2037a4u;
    // NOP
label_2037a8:
    // 0x2037a8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2037a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_2037ac:
    // 0x2037ac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2037acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2037b0:
    // 0x2037b0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2037b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2037b4:
    // 0x2037b4: 0x0  nop
    ctx->pc = 0x2037b4u;
    // NOP
label_2037b8:
    // 0x2037b8: 0x0  nop
    ctx->pc = 0x2037b8u;
    // NOP
label_2037bc:
    // 0x2037bc: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
label_2037c0:
    if (ctx->pc == 0x2037C0u) {
        ctx->pc = 0x2037C4u;
        goto label_2037c4;
    }
    ctx->pc = 0x2037BCu;
    {
        const bool branch_taken_0x2037bc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2037bc) {
            ctx->pc = 0x2037A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2037a8;
        }
    }
    ctx->pc = 0x2037C4u;
label_2037c4:
    // 0x2037c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2037c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2037c8:
    // 0x2037c8: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x2037c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2037cc:
    // 0x2037cc: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
label_2037d0:
    if (ctx->pc == 0x2037D0u) {
        ctx->pc = 0x2037D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037CCu;
        // 0x2037d0: 0x931018  mult        $v0, $a0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037D4u;
        goto label_2037d4;
    }
    ctx->pc = 0x2037CCu;
    {
        const bool branch_taken_0x2037cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2037cc) {
            ctx->pc = 0x2037D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2037CCu;
            // 0x2037d0: 0x931018  mult        $v0, $a0, $s3 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2036F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2036f8;
        }
    }
    ctx->pc = 0x2037D4u;
label_2037d4:
    // 0x2037d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2037d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2037d8:
    // 0x2037d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2037d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2037dc:
    // 0x2037dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2037dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2037e0:
    // 0x2037e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2037e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2037e4:
    // 0x2037e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2037e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2037e8:
    // 0x2037e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2037e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2037ec:
    // 0x2037ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2037ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2037f0:
    // 0x2037f0: 0x3e00008  jr          $ra
label_2037f4:
    if (ctx->pc == 0x2037F4u) {
        ctx->pc = 0x2037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037F0u;
        // 0x2037f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037F8u;
        goto label_fallthrough_0x2037f0;
    }
    ctx->pc = 0x2037F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037F0u;
        // 0x2037f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2037F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2037f0:
    ctx->pc = 0x2037F8u;
}
