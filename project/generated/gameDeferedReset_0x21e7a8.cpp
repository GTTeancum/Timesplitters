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

// Function: gameDeferedReset
// Address: 0x21e7a8 - 0x21e8c8
void gameDeferedReset_0x21e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameDeferedReset_0x21e7a8");
#endif

    switch (ctx->pc) {
        case 0x21e7ccu: goto label_21e7cc;
        case 0x21e82cu: goto label_21e82c;
        case 0x21e8acu: goto label_21e8ac;
        default: break;
    }

    ctx->pc = 0x21e7a8u;

    // 0x21e7a8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x21e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x21e7ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e7acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e7b0: 0x2445c0e8  addiu       $a1, $v0, -0x3F18
    ctx->pc = 0x21e7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951144));
    // 0x21e7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e7b8: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x21e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x21e7bc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21e7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x21e7c0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21E7C0u;
    {
        const bool branch_taken_0x21e7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7C0u;
        // 0x21e7c4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7c0) {
            ctx->pc = 0x21E828u;
            goto label_21e828;
        }
    }
    ctx->pc = 0x21E7C8u;
    // 0x21e7c8: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x21e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_21e7cc:
    // 0x21e7cc: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x21e7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21e7d0: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x21e7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21e7d4: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x21e7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x21e7d8: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x21e7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x21e7dc: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x21e7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x21e7e0: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x21e7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x21e7e4: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x21e7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x21e7e8: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x21e7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x21e7ec: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x21e7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e7f0: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x21e7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e7f4: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x21e7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e7f8: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x21e7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e7fc: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x21e7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e800: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x21e800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e804: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x21e804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e808: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x21e808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e80c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x21e810: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x21e810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x21e814: 0x0  nop
    ctx->pc = 0x21e814u;
    // NOP
    // 0x21e818: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21E818u;
    {
        const bool branch_taken_0x21e818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e818) {
            ctx->pc = 0x21E7CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e7cc;
        }
    }
    ctx->pc = 0x21E820u;
    // 0x21e820: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21E820u;
    {
        const bool branch_taken_0x21e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e820) {
            ctx->pc = 0x21E860u;
            goto label_21e860;
        }
    }
    ctx->pc = 0x21E828u;
label_21e828:
    // 0x21e828: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x21e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_21e82c:
    // 0x21e82c: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x21e82cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e830: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x21e830u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21e834: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x21e834u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21e838: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x21e838u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x21e83c: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x21e83cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x21e840: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x21e840u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x21e844: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x21e844u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x21e848: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x21e848u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x21e84c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x21e850: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x21e850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x21e854: 0x0  nop
    ctx->pc = 0x21e854u;
    // NOP
    // 0x21e858: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21E858u;
    {
        const bool branch_taken_0x21e858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e858) {
            ctx->pc = 0x21E82Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e82c;
        }
    }
    ctx->pc = 0x21E860u;
label_21e860:
    // 0x21e860: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x21e860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21e864: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x21e864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21e868: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x21e868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21e86c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x21e86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21e870: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x21e870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e874: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x21e874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e878: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x21e878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e87c: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x21e87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21e880: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x21e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x21e884: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x21e884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x21e888: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E888u;
    {
        const bool branch_taken_0x21e888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E888u;
        // 0x21e88c: 0x8f829f70  lw          $v0, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e888) {
            ctx->pc = 0x21E898u;
            goto label_21e898;
        }
    }
    ctx->pc = 0x21E890u;
    // 0x21e890: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E890u;
    {
        const bool branch_taken_0x21e890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e890) {
            ctx->pc = 0x21E8A4u;
            goto label_21e8a4;
        }
    }
    ctx->pc = 0x21E898u;
label_21e898:
    // 0x21e898: 0x2402029a  addiu       $v0, $zero, 0x29A
    ctx->pc = 0x21e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x21e89c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21E89Cu;
    {
        const bool branch_taken_0x21e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E89Cu;
        // 0x21e8a0: 0xaf8293a4  sw          $v0, -0x6C5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e89c) {
            ctx->pc = 0x21E8BCu;
            goto label_21e8bc;
        }
    }
    ctx->pc = 0x21E8A4u;
label_21e8a4:
    // 0x21e8a4: 0xc08173c  jal         func_205CF0
    ctx->pc = 0x21E8A4u;
    SET_GPR_U32(ctx, 31, 0x21E8ACu);
    ctx->pc = 0x205CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CF0u, 0x21E8A4u, 0x21E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8ACu;
label_21e8ac:
    // 0x21e8ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e8b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21e8b4: 0xaf82b70c  sw          $v0, -0x48F4($gp)
    ctx->pc = 0x21e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948620), GPR_U32(ctx, 2));
    // 0x21e8b8: 0xaf839dac  sw          $v1, -0x6254($gp)
    ctx->pc = 0x21e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 3));
label_21e8bc:
    // 0x21e8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21E8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8C0u;
        // 0x21e8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E8C8u;
}
