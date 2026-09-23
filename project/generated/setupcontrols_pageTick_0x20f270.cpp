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

// Function: setupcontrols_pageTick
// Address: 0x20f270 - 0x20f498
void setupcontrols_pageTick_0x20f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setupcontrols_pageTick_0x20f270");
#endif

    switch (ctx->pc) {
        case 0x20f284u: goto label_20f284;
        case 0x20f2b8u: goto label_20f2b8;
        case 0x20f2f4u: goto label_20f2f4;
        case 0x20f354u: goto label_20f354;
        case 0x20f3d0u: goto label_20f3d0;
        case 0x20f42cu: goto label_20f42c;
        default: break;
    }

    ctx->pc = 0x20f270u;

    // 0x20f270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20f274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20f278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20f27c: 0xc083b38  jal         func_20ECE0
    ctx->pc = 0x20F27Cu;
    SET_GPR_U32(ctx, 31, 0x20F284u);
    ctx->pc = 0x20F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F27Cu;
    // 0x20f280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ECE0u, 0x20F27Cu, 0x20F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F284u;
label_20f284:
    // 0x20f284: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x20f284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f288: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x20f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x20f28c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x20f28cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f290: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F290u;
    {
        const bool branch_taken_0x20f290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F290u;
        // 0x20f294: 0x2403ffcf  addiu       $v1, $zero, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f290) {
            ctx->pc = 0x20F2B0u;
            goto label_20f2b0;
        }
    }
    ctx->pc = 0x20F298u;
    // 0x20f298: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x20f298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20f29c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x20f29cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x20f2a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20f2a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f2a8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x20F2A8u;
    {
        const bool branch_taken_0x20f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2A8u;
        // 0x20f2ac: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2a8) {
            ctx->pc = 0x20F480u;
            goto label_20f480;
        }
    }
    ctx->pc = 0x20F2B0u;
label_20f2b0:
    // 0x20f2b0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20F2B0u;
    SET_GPR_U32(ctx, 31, 0x20F2B8u);
    ctx->pc = 0x20F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2B0u;
    // 0x20f2b4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20F2B0u, 0x20F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2B8u;
label_20f2b8:
    // 0x20f2b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x20f2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x20f2bc: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x20F2BCu;
    {
        const bool branch_taken_0x20f2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2BCu;
        // 0x20f2c0: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2bc) {
            ctx->pc = 0x20F47Cu;
            goto label_20f47c;
        }
    }
    ctx->pc = 0x20F2C4u;
    // 0x20f2c4: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x20f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x20f2c8: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x20f2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x20f2cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f2d0: 0x24c433b0  addiu       $a0, $a2, 0x33B0
    ctx->pc = 0x20f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 13232));
    // 0x20f2d4: 0x2447001c  addiu       $a3, $v0, 0x1C
    ctx->pc = 0x20f2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20f2d8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x20f2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20f2dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20f2e0: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x20f2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x20f2e4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20f2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20f2e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20F2E8u;
    {
        const bool branch_taken_0x20f2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2E8u;
        // 0x20f2ec: 0x24620040  addiu       $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2e8) {
            ctx->pc = 0x20F350u;
            goto label_20f350;
        }
    }
    ctx->pc = 0x20F2F0u;
    // 0x20f2f0: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x20f2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_20f2f4:
    // 0x20f2f4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x20f2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20f2f8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x20f2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20f2fc: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x20f2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20f300: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x20f300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20f304: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x20f304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x20f308: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x20f308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x20f30c: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x20f30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x20f310: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x20f310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x20f314: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x20f314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f318: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x20f318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f31c: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x20f31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f320: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x20f320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f324: 0xb0e90017  sdl         $t1, 0x17($a3)
    ctx->pc = 0x20f324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f328: 0xb4e90010  sdr         $t1, 0x10($a3)
    ctx->pc = 0x20f328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f32c: 0xb0ea001f  sdl         $t2, 0x1F($a3)
    ctx->pc = 0x20f32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f330: 0xb4ea0018  sdr         $t2, 0x18($a3)
    ctx->pc = 0x20f330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f334: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20f338: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x20f338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x20f33c: 0x0  nop
    ctx->pc = 0x20f33cu;
    // NOP
    // 0x20f340: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20F340u;
    {
        const bool branch_taken_0x20f340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f340) {
            ctx->pc = 0x20F2F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f2f4;
        }
    }
    ctx->pc = 0x20F348u;
    // 0x20f348: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20F348u;
    {
        const bool branch_taken_0x20f348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f348) {
            ctx->pc = 0x20F388u;
            goto label_20f388;
        }
    }
    ctx->pc = 0x20F350u;
label_20f350:
    // 0x20f350: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x20f350u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_20f354:
    // 0x20f354: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x20f354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f358: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x20f358u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20f35c: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x20f35cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20f360: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x20f360u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x20f364: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x20f364u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x20f368: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x20f368u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x20f36c: 0xfce90010  sd          $t1, 0x10($a3)
    ctx->pc = 0x20f36cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 9));
    // 0x20f370: 0xfcea0018  sd          $t2, 0x18($a3)
    ctx->pc = 0x20f370u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 10));
    // 0x20f374: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20f374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20f378: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x20f378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x20f37c: 0x0  nop
    ctx->pc = 0x20f37cu;
    // NOP
    // 0x20f380: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20F380u;
    {
        const bool branch_taken_0x20f380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f380) {
            ctx->pc = 0x20F354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f354;
        }
    }
    ctx->pc = 0x20F388u;
label_20f388:
    // 0x20f388: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x20f388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20f38c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x20f38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20f390: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x20f390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20f394: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x20f394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f398: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x20f398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f39c: 0x24c633b0  addiu       $a2, $a2, 0x33B0
    ctx->pc = 0x20f39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13232));
    // 0x20f3a0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x20f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x20f3a4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f3a8: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x20f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x20f3ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f3b0: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x20f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f3b4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x20f3b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20f3b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20f3bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x20f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20f3c0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x20f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20f3c4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20f3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20f3c8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20F3C8u;
    {
        const bool branch_taken_0x20f3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3C8u;
        // 0x20f3cc: 0x24620040  addiu       $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3c8) {
            ctx->pc = 0x20F42Cu;
            goto label_20f42c;
        }
    }
    ctx->pc = 0x20F3D0u;
label_20f3d0:
    // 0x20f3d0: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x20f3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x20f3d4: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x20f3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x20f3d8: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x20f3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20f3dc: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x20f3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20f3e0: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x20f3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x20f3e4: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x20f3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x20f3e8: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x20f3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x20f3ec: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x20f3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x20f3f0: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x20f3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f3f4: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x20f3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f3f8: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x20f3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f3fc: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x20f3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f400: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x20f400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f404: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x20f404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f408: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x20f408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f40c: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x20f40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f410: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20f414: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20f414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20f418: 0x0  nop
    ctx->pc = 0x20f418u;
    // NOP
    // 0x20f41c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20F41Cu;
    {
        const bool branch_taken_0x20f41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f41c) {
            ctx->pc = 0x20F3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f3d0;
        }
    }
    ctx->pc = 0x20F424u;
    // 0x20f424: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20F424u;
    {
        const bool branch_taken_0x20f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f424) {
            ctx->pc = 0x20F460u;
            goto label_20f460;
        }
    }
    ctx->pc = 0x20F42Cu;
label_20f42c:
    // 0x20f42c: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x20f42cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f430: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x20f430u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20f434: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x20f434u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20f438: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x20f438u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x20f43c: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x20f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x20f440: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x20f440u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x20f444: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x20f444u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x20f448: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x20f448u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x20f44c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20f450: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20f450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20f454: 0x0  nop
    ctx->pc = 0x20f454u;
    // NOP
    // 0x20f458: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20F458u;
    {
        const bool branch_taken_0x20f458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f458) {
            ctx->pc = 0x20F42Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f42c;
        }
    }
    ctx->pc = 0x20F460u;
label_20f460:
    // 0x20f460: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x20f460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x20f464: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x20f464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x20f468: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x20f468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20f46c: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x20f46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f470: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x20f470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f474: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20F474u;
    {
        const bool branch_taken_0x20f474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F474u;
        // 0x20f478: 0xac890008  sw          $t1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f474) {
            ctx->pc = 0x20F480u;
            goto label_20f480;
        }
    }
    ctx->pc = 0x20F47Cu;
label_20f47c:
    // 0x20f47c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x20f47cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_20f480:
    // 0x20f480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f48c: 0x2505a5c0  addiu       $a1, $t0, -0x5A40
    ctx->pc = 0x20f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944192));
    // 0x20f490: 0x8083890  j           func_20E240
    ctx->pc = 0x20F490u;
    ctx->pc = 0x20F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F490u;
    // 0x20f494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E240u;
    ingame_menutick_0x20e240(rdram, ctx, runtime); return;
    ctx->pc = 0x20F498u;
}
