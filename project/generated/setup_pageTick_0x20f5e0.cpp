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

// Function: setup_pageTick
// Address: 0x20f5e0 - 0x20f7f0
void setup_pageTick_0x20f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setup_pageTick_0x20f5e0");
#endif

    switch (ctx->pc) {
        case 0x20f5fcu: goto label_20f5fc;
        case 0x20f608u: goto label_20f608;
        case 0x20f644u: goto label_20f644;
        case 0x20f680u: goto label_20f680;
        case 0x20f6e4u: goto label_20f6e4;
        case 0x20f76cu: goto label_20f76c;
        case 0x20f7c0u: goto label_20f7c0;
        case 0x20f7ccu: goto label_20f7cc;
        default: break;
    }

    ctx->pc = 0x20f5e0u;

    // 0x20f5e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20f5e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20f5e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20f5ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20f5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f5f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20f5f4: 0xc083d5c  jal         func_20F570
    ctx->pc = 0x20F5F4u;
    SET_GPR_U32(ctx, 31, 0x20F5FCu);
    ctx->pc = 0x20F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F5F4u;
    // 0x20f5f8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F570u, 0x20F5F4u, 0x20F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5FCu;
label_20f5fc:
    // 0x20f5fc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f600: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20F600u;
    SET_GPR_U32(ctx, 31, 0x20F608u);
    ctx->pc = 0x20F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F600u;
    // 0x20f604: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20F600u, 0x20F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F608u;
label_20f608:
    // 0x20f608: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20f608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20f60c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x20F60Cu;
    {
        const bool branch_taken_0x20f60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F60Cu;
        // 0x20f610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f60c) {
            ctx->pc = 0x20F734u;
            goto label_20f734;
        }
    }
    ctx->pc = 0x20F614u;
    // 0x20f614: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x20f614u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20f618: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x20F618u;
    {
        const bool branch_taken_0x20f618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F618u;
        // 0x20f61c: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f618) {
            ctx->pc = 0x20F738u;
            goto label_20f738;
        }
    }
    ctx->pc = 0x20F620u;
    // 0x20f620: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20f620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20f624: 0x8c43a640  lw          $v1, -0x59C0($v0)
    ctx->pc = 0x20f624u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32A640u));
    // 0x20f628: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x20F628u;
    {
        const bool branch_taken_0x20f628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F628u;
        // 0x20f62c: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f628) {
            ctx->pc = 0x20F73Cu;
            goto label_20f73c;
        }
    }
    ctx->pc = 0x20F630u;
    // 0x20f630: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f634: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20f634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20f638: 0x24a5a5f0  addiu       $a1, $a1, -0x5A10
    ctx->pc = 0x20f638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944240));
    // 0x20f63c: 0xc083864  jal         func_20E190
    ctx->pc = 0x20F63Cu;
    SET_GPR_U32(ctx, 31, 0x20F644u);
    ctx->pc = 0x20F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F63Cu;
    // 0x20f640: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E190u, 0x20F63Cu, 0x20F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F644u;
label_20f644:
    // 0x20f644: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f648: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x20f648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x20f64c: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x20f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x20f650: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f654: 0x248433b0  addiu       $a0, $a0, 0x33B0
    ctx->pc = 0x20f654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
    // 0x20f658: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x20f658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f65c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x20f65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20f660: 0x24e60004  addiu       $a2, $a3, 0x4
    ctx->pc = 0x20f660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x20f664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20f664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20f668: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x20f668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x20f66c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20f670: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20F670u;
    {
        const bool branch_taken_0x20f670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F670u;
        // 0x20f674: 0x24e20044  addiu       $v0, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f670) {
            ctx->pc = 0x20F6DCu;
            goto label_20f6dc;
        }
    }
    ctx->pc = 0x20F678u;
    // 0x20f678: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x20f678u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x20f67c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x20f67cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_20f680:
    // 0x20f680: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x20f680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20f684: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x20f684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20f688: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x20f688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20f68c: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x20f68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20f690: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x20f690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x20f694: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x20f694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x20f698: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x20f698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x20f69c: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x20f69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x20f6a0: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x20f6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f6a4: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x20f6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f6a8: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x20f6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f6ac: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x20f6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f6b0: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x20f6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f6b4: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x20f6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f6b8: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x20f6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f6bc: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x20f6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f6c0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x20f6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x20f6c4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20f6c8: 0x0  nop
    ctx->pc = 0x20f6c8u;
    // NOP
    // 0x20f6cc: 0x14c2ffec  bne         $a2, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20F6CCu;
    {
        const bool branch_taken_0x20f6cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f6cc) {
            ctx->pc = 0x20F680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f680;
        }
    }
    ctx->pc = 0x20F6D4u;
    // 0x20f6d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20F6D4u;
    {
        const bool branch_taken_0x20f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f6d4) {
            ctx->pc = 0x20F718u;
            goto label_20f718;
        }
    }
    ctx->pc = 0x20F6DCu;
label_20f6dc:
    // 0x20f6dc: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x20f6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x20f6e0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x20f6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_20f6e4:
    // 0x20f6e4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x20f6e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f6e8: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x20f6e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20f6ec: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x20f6ecu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x20f6f0: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x20f6f0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x20f6f4: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x20f6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x20f6f8: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x20f6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x20f6fc: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x20f6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x20f700: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x20f700u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x20f704: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x20f704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x20f708: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20f708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20f70c: 0x0  nop
    ctx->pc = 0x20f70cu;
    // NOP
    // 0x20f710: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20F710u;
    {
        const bool branch_taken_0x20f710 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f710) {
            ctx->pc = 0x20F6E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f6e4;
        }
    }
    ctx->pc = 0x20F718u;
label_20f718:
    // 0x20f718: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x20f718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20f71c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x20f71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20f720: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x20f720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20f724: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x20f724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f728: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x20f728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f72c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20F72Cu;
    {
        const bool branch_taken_0x20f72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F72Cu;
        // 0x20f730: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f72c) {
            ctx->pc = 0x20F73Cu;
            goto label_20f73c;
        }
    }
    ctx->pc = 0x20F734u;
label_20f734:
    // 0x20f734: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x20f734u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
label_20f738:
    // 0x20f738: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x20f738u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_20f73c:
    // 0x20f73c: 0x260399f0  addiu       $v1, $s0, -0x6610
    ctx->pc = 0x20f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x20f740: 0x2645a708  addiu       $a1, $s2, -0x58F8
    ctx->pc = 0x20f740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944520));
    // 0x20f744: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20f748: 0x284201f4  slti        $v0, $v0, 0x1F4
    ctx->pc = 0x20f748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x20f74c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F74Cu;
    {
        const bool branch_taken_0x20f74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F74Cu;
        // 0x20f750: 0x8c640058  lw          $a0, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f74c) {
            ctx->pc = 0x20F75Cu;
            goto label_20f75c;
        }
    }
    ctx->pc = 0x20F754u;
    // 0x20f754: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20F754u;
    {
        const bool branch_taken_0x20f754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F754u;
        // 0x20f758: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f754) {
            ctx->pc = 0x20F760u;
            goto label_20f760;
        }
    }
    ctx->pc = 0x20F75Cu;
label_20f75c:
    // 0x20f75c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x20f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20f760:
    // 0x20f760: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x20f760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x20f764: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20F764u;
    SET_GPR_U32(ctx, 31, 0x20F76Cu);
    ctx->pc = 0x20F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F764u;
    // 0x20f768: 0xa4a20004  sh          $v0, 0x4($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20F764u, 0x20F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F76Cu;
label_20f76c:
    // 0x20f76c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20f76cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20f770: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x20F770u;
    {
        const bool branch_taken_0x20f770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f770) {
            ctx->pc = 0x20F774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F770u;
            // 0x20f774: 0x2650a708  addiu       $s0, $s2, -0x58F8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944520));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F7B4u;
            goto label_20f7b4;
        }
    }
    ctx->pc = 0x20F778u;
    // 0x20f778: 0x260399f0  addiu       $v1, $s0, -0x6610
    ctx->pc = 0x20f778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x20f77c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x20f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20f780: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x20f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20f784: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20f784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20f788: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x20f788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x20f78c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x20f78cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x20f790: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x20f790u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x20f794: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x20f794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x20f798: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20f798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20f79c: 0xaca2a664  sw          $v0, -0x599C($a1)
    ctx->pc = 0x20f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294944356), GPR_U32(ctx, 2));
    // 0x20f7a0: 0xac62a704  sw          $v0, -0x58FC($v1)
    ctx->pc = 0x20f7a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x32A704u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32A704u, _value); } while (0);
    // 0x20f7a4: 0xace2a68c  sw          $v0, -0x5974($a3)
    ctx->pc = 0x20f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944396), GPR_U32(ctx, 2));
    // 0x20f7a8: 0xad02a6b4  sw          $v0, -0x594C($t0)
    ctx->pc = 0x20f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294944436), GPR_U32(ctx, 2));
    // 0x20f7ac: 0xacc2a6dc  sw          $v0, -0x5924($a2)
    ctx->pc = 0x20f7acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x32A6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32A6DCu, _value); } while (0);
    // 0x20f7b0: 0x2650a708  addiu       $s0, $s2, -0x58F8
    ctx->pc = 0x20f7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944520));
label_20f7b4:
    // 0x20f7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f7b8: 0xc083890  jal         func_20E240
    ctx->pc = 0x20F7B8u;
    SET_GPR_U32(ctx, 31, 0x20F7C0u);
    ctx->pc = 0x20F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F7B8u;
    // 0x20f7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E240u, 0x20F7B8u, 0x20F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7C0u;
label_20f7c0:
    // 0x20f7c0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x20f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20f7c4: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x20F7C4u;
    SET_GPR_U32(ctx, 31, 0x20F7CCu);
    ctx->pc = 0x20F7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F7C4u;
    // 0x20f7c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x20F7C4u, 0x20F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7CCu;
label_20f7cc:
    // 0x20f7cc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x20f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20f7d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20f7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f7d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f7d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f7dc: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x20f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x20f7e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20f7e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f7e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x20F7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7E8u;
        // 0x20f7ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F7F0u;
}
