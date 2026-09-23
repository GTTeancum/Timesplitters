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

// Function: OpenRGB
// Address: 0x2b9650 - 0x2b9ad4
void OpenRGB_0x2b9650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OpenRGB_0x2b9650");
#endif

    switch (ctx->pc) {
        case 0x2b9684u: goto label_2b9684;
        case 0x2b9748u: goto label_2b9748;
        case 0x2b9754u: goto label_2b9754;
        case 0x2b976cu: goto label_2b976c;
        case 0x2b97bcu: goto label_2b97bc;
        case 0x2b97ccu: goto label_2b97cc;
        case 0x2b97e8u: goto label_2b97e8;
        case 0x2b9800u: goto label_2b9800;
        case 0x2b9818u: goto label_2b9818;
        case 0x2b9848u: goto label_2b9848;
        case 0x2b98d4u: goto label_2b98d4;
        case 0x2b9904u: goto label_2b9904;
        case 0x2b9918u: goto label_2b9918;
        case 0x2b9930u: goto label_2b9930;
        case 0x2b9948u: goto label_2b9948;
        case 0x2b9980u: goto label_2b9980;
        case 0x2b9990u: goto label_2b9990;
        case 0x2b9a20u: goto label_2b9a20;
        case 0x2b9a74u: goto label_2b9a74;
        case 0x2b9a88u: goto label_2b9a88;
        case 0x2b9a98u: goto label_2b9a98;
        case 0x2b9aa8u: goto label_2b9aa8;
        default: break;
    }

    ctx->pc = 0x2b9650u;

    // 0x2b9650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b9650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b9654: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2b9654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2b9658: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2b9658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2b965c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9660: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2b9660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9664: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b9668: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2b9668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2b966c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9670: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2b9670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2b9674: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2b9674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2b9678: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2b9678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2b967c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B967Cu;
    SET_GPR_U32(ctx, 31, 0x2B9684u);
    ctx->pc = 0x2B9680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B967Cu;
    // 0x2b9680: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B967Cu, 0x2B9684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9684u;
label_2b9684:
    // 0x2b9684: 0x8f83b4b8  lw          $v1, -0x4B48($gp)
    ctx->pc = 0x2b9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b9688: 0x3404da01  ori         $a0, $zero, 0xDA01
    ctx->pc = 0x2b9688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55809);
    // 0x2b968c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2b968cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b9690: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2b9690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b9694: 0x8865000b  lwl         $a1, 0xB($v1)
    ctx->pc = 0x2b9694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2b9698: 0x98650008  lwr         $a1, 0x8($v1)
    ctx->pc = 0x2b9698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x2b969c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2b969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b96a0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2b96a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b96a4: 0xaba5000b  swl         $a1, 0xB($sp)
    ctx->pc = 0x2b96a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2b96a8: 0xbba50008  swr         $a1, 0x8($sp)
    ctx->pc = 0x2b96a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2b96ac: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2b96acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b96b0: 0x14440020  bne         $v0, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B96B0u;
    {
        const bool branch_taken_0x2b96b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96B0u;
        // 0x2b96b4: 0x97a4000a  lhu         $a0, 0xA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96b0) {
            ctx->pc = 0x2B9734u;
            goto label_2b9734;
        }
    }
    ctx->pc = 0x2B96B8u;
    // 0x2b96b8: 0x97a90002  lhu         $t1, 0x2($sp)
    ctx->pc = 0x2b96b8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b96bc: 0x97aa0004  lhu         $t2, 0x4($sp)
    ctx->pc = 0x2b96bcu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b96c0: 0x97ab0006  lhu         $t3, 0x6($sp)
    ctx->pc = 0x2b96c0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x2b96c4: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x2b96c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2b96c8: 0x97a80008  lhu         $t0, 0x8($sp)
    ctx->pc = 0x2b96c8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b96cc: 0x314500ff  andi        $a1, $t2, 0xFF
    ctx->pc = 0x2b96ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2b96d0: 0x97a6000a  lhu         $a2, 0xA($sp)
    ctx->pc = 0x2b96d0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x2b96d4: 0x316300ff  andi        $v1, $t3, 0xFF
    ctx->pc = 0x2b96d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x2b96d8: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x2b96d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2b96dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2b96dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2b96e0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2b96e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2b96e4: 0x94a02  srl         $t1, $t1, 8
    ctx->pc = 0x2b96e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x2b96e8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2b96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2b96ec: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x2b96ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x2b96f0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2b96f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b96f4: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x2b96f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x2b96f8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2b96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2b96fc: 0x84202  srl         $t0, $t0, 8
    ctx->pc = 0x2b96fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x2b9700: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b9700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b9704: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x2b9704u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2b9708: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x2b9708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x2b970c: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x2b970cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x2b9710: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x2b9710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x2b9714: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x2b9714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2b9718: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b9718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2b971c: 0xa7a70002  sh          $a3, 0x2($sp)
    ctx->pc = 0x2b971cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b9720: 0xa7a50004  sh          $a1, 0x4($sp)
    ctx->pc = 0x2b9720u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b9724: 0xa7a30006  sh          $v1, 0x6($sp)
    ctx->pc = 0x2b9724u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b9728: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x2b9728u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b972c: 0xa7a2000a  sh          $v0, 0xA($sp)
    ctx->pc = 0x2b972cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9730: 0x97a4000a  lhu         $a0, 0xA($sp)
    ctx->pc = 0x2b9730u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_2b9734:
    // 0x2b9734: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2b9734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2b9738: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B9738u;
    {
        const bool branch_taken_0x2b9738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9738u;
        // 0x2b973c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9738) {
            ctx->pc = 0x2B9780u;
            goto label_2b9780;
        }
    }
    ctx->pc = 0x2B9740u;
    // 0x2b9740: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x2b9740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2b9744: 0x97a40006  lhu         $a0, 0x6($sp)
    ctx->pc = 0x2b9744u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
label_2b9748:
    // 0x2b9748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b974c: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2B974Cu;
    SET_GPR_U32(ctx, 31, 0x2B9754u);
    ctx->pc = 0x2B9750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B974Cu;
    // 0x2b9750: 0x42200  sll         $a0, $a0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2B974Cu, 0x2B9754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9754u;
label_2b9754:
    // 0x2b9754: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2b9754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b9758: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2b9758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2b975c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B975Cu;
    {
        const bool branch_taken_0x2b975c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B975Cu;
        // 0x2b9760: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b975c) {
            ctx->pc = 0x2B976Cu;
            goto label_2b976c;
        }
    }
    ctx->pc = 0x2B9764u;
    // 0x2b9764: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2B9764u;
    SET_GPR_U32(ctx, 31, 0x2B976Cu);
    ctx->pc = 0x2B9768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9764u;
    // 0x2b9768: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2B9764u, 0x2B976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B976Cu;
label_2b976c:
    // 0x2b976c: 0x97a4000a  lhu         $a0, 0xA($sp)
    ctx->pc = 0x2b976cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x2b9770: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b9770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b9774: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x2b9774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2b9778: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B9778u;
    {
        const bool branch_taken_0x2b9778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9778) {
            ctx->pc = 0x2B977Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9778u;
            // 0x2b977c: 0x97a40006  lhu         $a0, 0x6($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9748;
        }
    }
    ctx->pc = 0x2B9780u;
label_2b9780:
    // 0x2b9780: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x2b9780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b9784: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2b9784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b9788: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b9788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b978c: 0x1443004c  bne         $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2B978Cu;
    {
        const bool branch_taken_0x2b978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B978Cu;
        // 0x2b9790: 0x97ab0006  lhu         $t3, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b978c) {
            ctx->pc = 0x2B98C0u;
            goto label_2b98c0;
        }
    }
    ctx->pc = 0x2B9794u;
    // 0x2b9794: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x2b9794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9798: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b9798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b979c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2b979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2b97a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b97a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97a4: 0x648818  mult        $s1, $v1, $a0
    ctx->pc = 0x2b97a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2b97a8: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x2b97a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b97ac: 0x2650000f  addiu       $s0, $s2, 0xF
    ctx->pc = 0x2b97acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x2b97b0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2b97b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2b97b4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2B97B4u;
    SET_GPR_U32(ctx, 31, 0x2B97BCu);
    ctx->pc = 0x2B97B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B97B4u;
    // 0x2b97b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2B97B4u, 0x2B97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B97BCu;
label_2b97bc:
    // 0x2b97bc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2b97bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2b97c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b97c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97c4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2B97C4u;
    SET_GPR_U32(ctx, 31, 0x2B97CCu);
    ctx->pc = 0x2B97C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B97C4u;
    // 0x2b97c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2B97C4u, 0x2B97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B97CCu;
label_2b97cc:
    // 0x2b97cc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2b97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b97d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B97D0u;
    {
        const bool branch_taken_0x2b97d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97D0u;
        // 0x2b97d4: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97d0) {
            ctx->pc = 0x2B97E0u;
            goto label_2b97e0;
        }
    }
    ctx->pc = 0x2B97D8u;
    // 0x2b97d8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B97D8u;
    {
        const bool branch_taken_0x2b97d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b97d8) {
            ctx->pc = 0x2B97DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B97D8u;
            // 0x2b97dc: 0x8f85b4b8  lw          $a1, -0x4B48($gp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B97E8u;
            goto label_2b97e8;
        }
    }
    ctx->pc = 0x2B97E0u;
label_2b97e0:
    // 0x2b97e0: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2B97E0u;
    SET_GPR_U32(ctx, 31, 0x2B97E8u);
    ctx->pc = 0x2B97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B97E0u;
    // 0x2b97e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2B97E0u, 0x2B97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B97E8u;
label_2b97e8:
    // 0x2b97e8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2b97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2b97ec: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2b97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2b97f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b97f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97f4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2b97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2b97f8: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2B97F8u;
    SET_GPR_U32(ctx, 31, 0x2B9800u);
    ctx->pc = 0x2B97FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B97F8u;
    // 0x2b97fc: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2B97F8u, 0x2B9800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9800u;
label_2b9800:
    // 0x2b9800: 0x8f85b4b8  lw          $a1, -0x4B48($gp)
    ctx->pc = 0x2b9800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b9804: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b9804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9808: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2b9808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b980c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2b980cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2b9810: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2B9810u;
    SET_GPR_U32(ctx, 31, 0x2B9818u);
    ctx->pc = 0x2B9814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9810u;
    // 0x2b9814: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2B9810u, 0x2B9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9818u;
label_2b9818:
    // 0x2b9818: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x2b9818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b981c: 0x3402da01  ori         $v0, $zero, 0xDA01
    ctx->pc = 0x2b981cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55809);
    // 0x2b9820: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B9820u;
    {
        const bool branch_taken_0x2b9820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9820u;
        // 0x2b9824: 0x97ab0006  lhu         $t3, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9820) {
            ctx->pc = 0x2B98C0u;
            goto label_2b98c0;
        }
    }
    ctx->pc = 0x2B9828u;
    // 0x2b9828: 0x129082  srl         $s2, $s2, 2
    ctx->pc = 0x2b9828u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
    // 0x2b982c: 0x8fa90024  lw          $t1, 0x24($sp)
    ctx->pc = 0x2b982cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b9830: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2b9830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2b9834: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b9834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9838: 0x12420021  beq         $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B9838u;
    {
        const bool branch_taken_0x2b9838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9838u;
        // 0x2b983c: 0x8fa80028  lw          $t0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9838) {
            ctx->pc = 0x2B98C0u;
            goto label_2b98c0;
        }
    }
    ctx->pc = 0x2B9840u;
    // 0x2b9840: 0x97ab0006  lhu         $t3, 0x6($sp)
    ctx->pc = 0x2b9840u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x2b9844: 0x97aa0008  lhu         $t2, 0x8($sp)
    ctx->pc = 0x2b9844u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
label_2b9848:
    // 0x2b9848: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2b9848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2b984c: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x2b984cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x2b9850: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2b9850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2b9854: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b9854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9858: 0x452024  and         $a0, $v0, $a1
    ctx->pc = 0x2b9858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b985c: 0x3043ff00  andi        $v1, $v0, 0xFF00
    ctx->pc = 0x2b985cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b9860: 0x23602  srl         $a2, $v0, 24
    ctx->pc = 0x2b9860u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2b9864: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x2b9864u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2b9868: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2b9868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2b986c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2b986cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b9870: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b9870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b9874: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2b9874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2b9878: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b9878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b987c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2b987cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2b9880: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2b9880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2b9884: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2b9884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b9888: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x2b9888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b988c: 0x3043ff00  andi        $v1, $v0, 0xFF00
    ctx->pc = 0x2b988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b9890: 0x22602  srl         $a0, $v0, 24
    ctx->pc = 0x2b9890u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2b9894: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x2b9894u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2b9898: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2b9898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b989c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2b989cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2b98a0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b98a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2b98a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b98a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b98a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b98a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b98ac: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2b98acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2b98b0: 0x1647ffe5  bne         $s2, $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2B98B0u;
    {
        const bool branch_taken_0x2b98b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 7));
        ctx->pc = 0x2B98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98B0u;
        // 0x2b98b4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98b0) {
            ctx->pc = 0x2B9848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9848;
        }
    }
    ctx->pc = 0x2B98B8u;
    // 0x2b98b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B98B8u;
    {
        const bool branch_taken_0x2b98b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98B8u;
        // 0x2b98bc: 0xa6ab0000  sh          $t3, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98b8) {
            ctx->pc = 0x2B98C8u;
            goto label_2b98c8;
        }
    }
    ctx->pc = 0x2B98C0u;
label_2b98c0:
    // 0x2b98c0: 0x97aa0008  lhu         $t2, 0x8($sp)
    ctx->pc = 0x2b98c0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b98c4: 0xa6ab0000  sh          $t3, 0x0($s5)
    ctx->pc = 0x2b98c4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 11));
label_2b98c8:
    // 0x2b98c8: 0xa6aa0002  sh          $t2, 0x2($s5)
    ctx->pc = 0x2b98c8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x2b98cc: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B98CCu;
    SET_GPR_U32(ctx, 31, 0x2B98D4u);
    ctx->pc = 0x2B98D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B98CCu;
    // 0x2b98d0: 0x3164ffff  andi        $a0, $t3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B98CCu, 0x2B98D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B98D4u;
label_2b98d4:
    // 0x2b98d4: 0x97a50008  lhu         $a1, 0x8($sp)
    ctx->pc = 0x2b98d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b98d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b98d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b98dc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2b98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2b98e0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2b98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2b98e4: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x2b98e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b98e8: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x2b98e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x2b98ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b98f0: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x2b98f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b98f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B98F4u;
    {
        const bool branch_taken_0x2b98f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98F4u;
        // 0x2b98f8: 0x8f91b4bc  lw          $s1, -0x4B44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98f4) {
            ctx->pc = 0x2B9904u;
            goto label_2b9904;
        }
    }
    ctx->pc = 0x2B98FCu;
    // 0x2b98fc: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2B98FCu;
    SET_GPR_U32(ctx, 31, 0x2B9904u);
    ctx->pc = 0x2B9900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B98FCu;
    // 0x2b9900: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2B98FCu, 0x2B9904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9904u;
label_2b9904:
    // 0x2b9904: 0xaeb10014  sw          $s1, 0x14($s5)
    ctx->pc = 0x2b9904u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 17));
    // 0x2b9908: 0x10a00055  beqz        $a1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2B9908u;
    {
        const bool branch_taken_0x2b9908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9908u;
        // 0x2b990c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9908) {
            ctx->pc = 0x2B9A60u;
            goto label_2b9a60;
        }
    }
    ctx->pc = 0x2B9910u;
    // 0x2b9910: 0x97a4000a  lhu         $a0, 0xA($sp)
    ctx->pc = 0x2b9910u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x2b9914: 0x0  nop
    ctx->pc = 0x2b9914u;
    // NOP
label_2b9918:
    // 0x2b9918: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B9918u;
    {
        const bool branch_taken_0x2b9918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9918u;
        // 0x2b991c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9918) {
            ctx->pc = 0x2B9964u;
            goto label_2b9964;
        }
    }
    ctx->pc = 0x2B9920u;
    // 0x2b9920: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x2b9920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2b9924: 0x26540001  addiu       $s4, $s2, 0x1
    ctx->pc = 0x2b9924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b9928: 0x24f00001  addiu       $s0, $a3, 0x1
    ctx->pc = 0x2b9928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b992c: 0x0  nop
    ctx->pc = 0x2b992cu;
    // NOP
label_2b9930:
    // 0x2b9930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9934: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2b9934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b9938: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b9938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b993c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b9940: 0xc0ae53e  jal         func_2B94F8
    ctx->pc = 0x2B9940u;
    SET_GPR_U32(ctx, 31, 0x2B9948u);
    ctx->pc = 0x2B9944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9940u;
    // 0x2b9944: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B94F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B94F8u, 0x2B9940u, 0x2B9948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9948u;
label_2b9948:
    // 0x2b9948: 0x97a4000a  lhu         $a0, 0xA($sp)
    ctx->pc = 0x2b9948u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x2b994c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b994cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9950: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2b9950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b9954: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B9954u;
    {
        const bool branch_taken_0x2b9954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9954u;
        // 0x2b9958: 0x24f00001  addiu       $s0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9954) {
            ctx->pc = 0x2B9930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9930;
        }
    }
    ctx->pc = 0x2B995Cu;
    // 0x2b995c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B995Cu;
    {
        const bool branch_taken_0x2b995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B995Cu;
        // 0x2b9960: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b995c) {
            ctx->pc = 0x2B996Cu;
            goto label_2b996c;
        }
    }
    ctx->pc = 0x2B9964u;
label_2b9964:
    // 0x2b9964: 0x26540001  addiu       $s4, $s2, 0x1
    ctx->pc = 0x2b9964u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b9968: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x2b9968u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
label_2b996c:
    // 0x2b996c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B996Cu;
    {
        const bool branch_taken_0x2b996c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B996Cu;
        // 0x2b9970: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b996c) {
            ctx->pc = 0x2B9A04u;
            goto label_2b9a04;
        }
    }
    ctx->pc = 0x2B9974u;
    // 0x2b9974: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2b9974u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b9978: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x2b9978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b997c: 0x0  nop
    ctx->pc = 0x2b997cu;
    // NOP
label_2b9980:
    // 0x2b9980: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B9980u;
    {
        const bool branch_taken_0x2b9980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9980u;
        // 0x2b9984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9980) {
            ctx->pc = 0x2B99D8u;
            goto label_2b99d8;
        }
    }
    ctx->pc = 0x2B9988u;
    // 0x2b9988: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x2b9988u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2b998c: 0x26480001  addiu       $t0, $s2, 0x1
    ctx->pc = 0x2b998cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b9990:
    // 0x2b9990: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x2b9990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b9994: 0x38e60003  xori        $a2, $a3, 0x3
    ctx->pc = 0x2b9994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)3);
    // 0x2b9998: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2b9998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b999c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2b999cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b99a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b99a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b99a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b99a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b99ac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2b99acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b99b0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2b99b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b99b4: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x2b99b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2b99b8: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x2b99b8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2b99bc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b99bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b99c0: 0x97a3000a  lhu         $v1, 0xA($sp)
    ctx->pc = 0x2b99c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x2b99c4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x2b99c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b99c8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2B99C8u;
    {
        const bool branch_taken_0x2b99c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99C8u;
        // 0x2b99cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99c8) {
            ctx->pc = 0x2B9990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9990;
        }
    }
    ctx->pc = 0x2B99D0u;
    // 0x2b99d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B99D0u;
    {
        const bool branch_taken_0x2b99d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99D0u;
        // 0x2b99d4: 0x97a2000a  lhu         $v0, 0xA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99d0) {
            ctx->pc = 0x2B99E0u;
            goto label_2b99e0;
        }
    }
    ctx->pc = 0x2B99D8u;
label_2b99d8:
    // 0x2b99d8: 0x26480001  addiu       $t0, $s2, 0x1
    ctx->pc = 0x2b99d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b99dc: 0x97a2000a  lhu         $v0, 0xA($sp)
    ctx->pc = 0x2b99dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_2b99e0:
    // 0x2b99e0: 0x144a0004  bne         $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B99E0u;
    {
        const bool branch_taken_0x2b99e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x2B99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E0u;
        // 0x2b99e4: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99e0) {
            ctx->pc = 0x2B99F4u;
            goto label_2b99f4;
        }
    }
    ctx->pc = 0x2B99E8u;
    // 0x2b99e8: 0xa2290000  sb          $t1, 0x0($s1)
    ctx->pc = 0x2b99e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x2b99ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b99ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b99f0: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x2b99f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
label_2b99f4:
    // 0x2b99f4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2b99f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b99f8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2b99f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b99fc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2B99FCu;
    {
        const bool branch_taken_0x2b99fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99FCu;
        // 0x2b9a00: 0x97a4000a  lhu         $a0, 0xA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99fc) {
            ctx->pc = 0x2B9980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9980;
        }
    }
    ctx->pc = 0x2B9A04u;
label_2b9a04:
    // 0x2b9a04: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2b9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2b9a08: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2b9a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b9a0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B9A0Cu;
    {
        const bool branch_taken_0x2b9a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A0Cu;
        // 0x2b9a10: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a0c) {
            ctx->pc = 0x2B9A4Cu;
            goto label_2b9a4c;
        }
    }
    ctx->pc = 0x2B9A14u;
    // 0x2b9a14: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2b9a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b9a18: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x2b9a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b9a1c: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x2b9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_2b9a20:
    // 0x2b9a20: 0xa065fffd  sb          $a1, -0x3($v1)
    ctx->pc = 0x2b9a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967293), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b9a24: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b9a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b9a28: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x2b9a28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b9a2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b9a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b9a30: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x2b9a30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b9a34: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x2b9a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b9a38: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2b9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b9a3c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2b9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2b9a40: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2b9a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b9a44: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B9A44u;
    {
        const bool branch_taken_0x2b9a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A44u;
        // 0x2b9a48: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a44) {
            ctx->pc = 0x2B9A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9a20;
        }
    }
    ctx->pc = 0x2B9A4Cu;
label_2b9a4c:
    // 0x2b9a4c: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x2b9a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9a50: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2b9a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9a54: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2b9a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b9a58: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2B9A58u;
    {
        const bool branch_taken_0x2b9a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A58u;
        // 0x2b9a5c: 0x97a4000a  lhu         $a0, 0xA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a58) {
            ctx->pc = 0x2B9918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9918;
        }
    }
    ctx->pc = 0x2B9A60u;
label_2b9a60:
    // 0x2b9a60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2b9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b9a64: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9A64u;
    {
        const bool branch_taken_0x2b9a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a64) {
            ctx->pc = 0x2B9A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9A64u;
            // 0x2b9a68: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9A78u;
            goto label_2b9a78;
        }
    }
    ctx->pc = 0x2B9A6Cu;
    // 0x2b9a6c: 0xc080774  jal         func_201DD0
    ctx->pc = 0x2B9A6Cu;
    SET_GPR_U32(ctx, 31, 0x2B9A74u);
    ctx->pc = 0x201DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201DD0u, 0x2B9A6Cu, 0x2B9A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A74u;
label_2b9a74:
    // 0x2b9a74: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2b9a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2b9a78:
    // 0x2b9a78: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9A78u;
    {
        const bool branch_taken_0x2b9a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A78u;
        // 0x2b9a7c: 0x97b0000a  lhu         $s0, 0xA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a78) {
            ctx->pc = 0x2B9A8Cu;
            goto label_2b9a8c;
        }
    }
    ctx->pc = 0x2B9A80u;
    // 0x2b9a80: 0xc080774  jal         func_201DD0
    ctx->pc = 0x2B9A80u;
    SET_GPR_U32(ctx, 31, 0x2B9A88u);
    ctx->pc = 0x201DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201DD0u, 0x2B9A80u, 0x2B9A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A88u;
label_2b9a88:
    // 0x2b9a88: 0x97b0000a  lhu         $s0, 0xA($sp)
    ctx->pc = 0x2b9a88u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_2b9a8c:
    // 0x2b9a8c: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9A8Cu;
    {
        const bool branch_taken_0x2b9a8c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2B9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A8Cu;
        // 0x2b9a90: 0x27b3000c  addiu       $s3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a8c) {
            ctx->pc = 0x2B9AB0u;
            goto label_2b9ab0;
        }
    }
    ctx->pc = 0x2B9A94u;
    // 0x2b9a94: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2b9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2b9a98:
    // 0x2b9a98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b9a9c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b9a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2b9aa0: 0xc080774  jal         func_201DD0
    ctx->pc = 0x2B9AA0u;
    SET_GPR_U32(ctx, 31, 0x2B9AA8u);
    ctx->pc = 0x2B9AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9AA0u;
    // 0x2b9aa4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201DD0u, 0x2B9AA0u, 0x2B9AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AA8u;
label_2b9aa8:
    // 0x2b9aa8: 0x601fffb  bgez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B9AA8u;
    {
        const bool branch_taken_0x2b9aa8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2B9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AA8u;
        // 0x2b9aac: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9aa8) {
            ctx->pc = 0x2B9A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9a98;
        }
    }
    ctx->pc = 0x2B9AB0u;
label_2b9ab0:
    // 0x2b9ab0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b9ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b9ab4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2b9ab4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b9ab8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2b9ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b9abc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2b9abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b9ac0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2b9ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b9ac4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2b9ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b9ac8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2b9ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b9acc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9ACCu;
        // 0x2b9ad0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9AD4u;
}
