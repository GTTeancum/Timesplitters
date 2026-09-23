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

// Function: mmDoCopy
// Address: 0x245cd0 - 0x246140
void mmDoCopy_0x245cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDoCopy_0x245cd0");
#endif

    switch (ctx->pc) {
        case 0x245cf8u: goto label_245cf8;
        case 0x245d0cu: goto label_245d0c;
        case 0x245d20u: goto label_245d20;
        case 0x245d38u: goto label_245d38;
        case 0x245ddcu: goto label_245ddc;
        case 0x245e10u: goto label_245e10;
        case 0x245eb8u: goto label_245eb8;
        case 0x245ee0u: goto label_245ee0;
        case 0x245f84u: goto label_245f84;
        case 0x245f90u: goto label_245f90;
        case 0x245f98u: goto label_245f98;
        case 0x245fc0u: goto label_245fc0;
        case 0x246060u: goto label_246060;
        case 0x2460a0u: goto label_2460a0;
        case 0x2460c4u: goto label_2460c4;
        case 0x2460e0u: goto label_2460e0;
        case 0x24611cu: goto label_24611c;
        default: break;
    }

    ctx->pc = 0x245cd0u;

    // 0x245cd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x245cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x245cd4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x245cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x245cd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x245cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x245cdc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x245cdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ce0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x245ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x245ce4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x245ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x245ce8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x245ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x245cec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x245cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x245cf0: 0xc091536  jal         func_2454D8
    ctx->pc = 0x245CF0u;
    SET_GPR_U32(ctx, 31, 0x245CF8u);
    ctx->pc = 0x245CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CF0u;
    // 0x245cf4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2454D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2454D8u, 0x245CF0u, 0x245CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CF8u;
label_245cf8:
    // 0x245cf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x245cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cfc: 0x12400108  beqz        $s2, . + 4 + (0x108 << 2)
    ctx->pc = 0x245CFCu;
    {
        const bool branch_taken_0x245cfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CFCu;
        // 0x245d00: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cfc) {
            ctx->pc = 0x246120u;
            goto label_246120;
        }
    }
    ctx->pc = 0x245D04u;
    // 0x245d04: 0xc0920ba  jal         func_2482E8
    ctx->pc = 0x245D04u;
    SET_GPR_U32(ctx, 31, 0x245D0Cu);
    ctx->pc = 0x2482E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E8u, 0x245D04u, 0x245D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D0Cu;
label_245d0c:
    // 0x245d0c: 0x8f84a0f8  lw          $a0, -0x5F08($gp)
    ctx->pc = 0x245d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x245d10: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x245D10u;
    {
        const bool branch_taken_0x245d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d10) {
            ctx->pc = 0x245D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245D10u;
            // 0x245d14: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245D24u;
            goto label_245d24;
        }
    }
    ctx->pc = 0x245D18u;
    // 0x245d18: 0xc0921e6  jal         func_248798
    ctx->pc = 0x245D18u;
    SET_GPR_U32(ctx, 31, 0x245D20u);
    ctx->pc = 0x248798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248798u, 0x245D18u, 0x245D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D20u;
label_245d20:
    // 0x245d20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x245d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_245d24:
    // 0x245d24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x245d28: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x245D28u;
    {
        const bool branch_taken_0x245d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D28u;
        // 0x245d2c: 0xaf80a0f8  sw          $zero, -0x5F08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d28) {
            ctx->pc = 0x245EB4u;
            goto label_245eb4;
        }
    }
    ctx->pc = 0x245D30u;
    // 0x245d30: 0xc092194  jal         func_248650
    ctx->pc = 0x245D30u;
    SET_GPR_U32(ctx, 31, 0x245D38u);
    ctx->pc = 0x248650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248650u, 0x245D30u, 0x245D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D38u;
label_245d38:
    // 0x245d38: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x245D38u;
    {
        const bool branch_taken_0x245d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D38u;
        // 0x245d3c: 0xaf82a0f8  sw          $v0, -0x5F08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d38) {
            ctx->pc = 0x24611Cu;
            goto label_24611c;
        }
    }
    ctx->pc = 0x245D40u;
    // 0x245d40: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x245d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x245d44: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x245d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x245d48: 0x6a44000f  ldl         $a0, 0xF($s2)
    ctx->pc = 0x245d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x245d4c: 0x6e440008  ldr         $a0, 0x8($s2)
    ctx->pc = 0x245d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x245d50: 0x6a450017  ldl         $a1, 0x17($s2)
    ctx->pc = 0x245d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x245d54: 0x6e450010  ldr         $a1, 0x10($s2)
    ctx->pc = 0x245d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x245d58: 0x6a46001f  ldl         $a2, 0x1F($s2)
    ctx->pc = 0x245d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x245d5c: 0x6e460018  ldr         $a2, 0x18($s2)
    ctx->pc = 0x245d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x245d60: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x245d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245d64: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x245d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245d68: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x245d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245d6c: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x245d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245d70: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x245d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245d74: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x245d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245d78: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x245d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245d7c: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x245d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245d80: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x245d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x245d84: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x245d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x245d88: 0x6a44002f  ldl         $a0, 0x2F($s2)
    ctx->pc = 0x245d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x245d8c: 0x6e440028  ldr         $a0, 0x28($s2)
    ctx->pc = 0x245d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x245d90: 0x6a450037  ldl         $a1, 0x37($s2)
    ctx->pc = 0x245d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x245d94: 0x6e450030  ldr         $a1, 0x30($s2)
    ctx->pc = 0x245d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x245d98: 0x8e460038  lw          $a2, 0x38($s2)
    ctx->pc = 0x245d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x245d9c: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x245d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245da0: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x245da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245da4: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x245da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245da8: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x245da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245dac: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x245dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245db0: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x245db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245db4: 0xac460038  sw          $a2, 0x38($v0)
    ctx->pc = 0x245db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 6));
    // 0x245db8: 0x8f82a0f8  lw          $v0, -0x5F08($gp)
    ctx->pc = 0x245db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x245dbc: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x245dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x245dc0: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x245dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x245dc4: 0x8f86a158  lw          $a2, -0x5EA8($gp)
    ctx->pc = 0x245dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x245dc8: 0x84640022  lh          $a0, 0x22($v1)
    ctx->pc = 0x245dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x245dcc: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x245dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x245dd0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x245dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x245dd4: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x245DD4u;
    SET_GPR_U32(ctx, 31, 0x245DDCu);
    ctx->pc = 0x245DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DD4u;
    // 0x245dd8: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x245DD4u, 0x245DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DDCu;
label_245ddc:
    // 0x245ddc: 0x8f83a168  lw          $v1, -0x5E98($gp)
    ctx->pc = 0x245ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x245de0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x245de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x245de4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245de8: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x245de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x245dec: 0x8f82a0f8  lw          $v0, -0x5F08($gp)
    ctx->pc = 0x245decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x245df0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x245df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x245df4: 0x8f83a15c  lw          $v1, -0x5EA4($gp)
    ctx->pc = 0x245df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x245df8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x245df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x245dfc: 0x84a40026  lh          $a0, 0x26($a1)
    ctx->pc = 0x245dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x245e00: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x245e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x245e04: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x245e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x245e08: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x245E08u;
    SET_GPR_U32(ctx, 31, 0x245E10u);
    ctx->pc = 0x245E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E08u;
    // 0x245e0c: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x245E08u, 0x245E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E10u;
label_245e10:
    // 0x245e10: 0x8f84a16c  lw          $a0, -0x5E94($gp)
    ctx->pc = 0x245e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x245e14: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x245e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x245e18: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x245e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x245e1c: 0x34c6fffe  ori         $a2, $a2, 0xFFFE
    ctx->pc = 0x245e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65534);
    // 0x245e20: 0x8f88a0f8  lw          $t0, -0x5F08($gp)
    ctx->pc = 0x245e20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x245e24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x245e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x245e28: 0x8f87a0dc  lw          $a3, -0x5F24($gp)
    ctx->pc = 0x245e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x245e2c: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x245e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x245e30: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x245e30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
    // 0x245e34: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x245e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x245e38: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x245e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x245e3c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x245e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x245e40: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x245e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x245e44: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x245e44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x245e48: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x245E48u;
    {
        const bool branch_taken_0x245e48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E48u;
        // 0x245e4c: 0xad020014  sw          $v0, 0x14($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e48) {
            ctx->pc = 0x245E84u;
            goto label_245e84;
        }
    }
    ctx->pc = 0x245E50u;
    // 0x245e50: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x245e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x245e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x245e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245e5c: 0xad020034  sw          $v0, 0x34($t0)
    ctx->pc = 0x245e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 2));
    // 0x245e60: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x245e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x245e64: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x245e64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245e68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x245e68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245e6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x245e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245e70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x245e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245e74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x245e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245e7c: 0x80921a8  j           func_2486A0
    ctx->pc = 0x245E7Cu;
    ctx->pc = 0x245E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E7Cu;
    // 0x245e80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486A0u;
    mmFreeSingleObject_0x2486a0(rdram, ctx, runtime); return;
    ctx->pc = 0x245E84u;
label_245e84:
    // 0x245e84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x245e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245e8c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x245e8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245e90: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x245e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e94: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x245e94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245e98: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x245e98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245e9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x245e9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245ea0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x245ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245ea8: 0xad000034  sw          $zero, 0x34($t0)
    ctx->pc = 0x245ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 0));
    // 0x245eac: 0x80922ae  j           func_248AB8
    ctx->pc = 0x245EACu;
    ctx->pc = 0x245EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EACu;
    // 0x245eb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248AB8u;
    mmDuplicateItems_0x248ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x245EB4u;
label_245eb4:
    // 0x245eb4: 0x8f92a12c  lw          $s2, -0x5ED4($gp)
    ctx->pc = 0x245eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
label_245eb8:
    // 0x245eb8: 0x12400099  beqz        $s2, . + 4 + (0x99 << 2)
    ctx->pc = 0x245EB8u;
    {
        const bool branch_taken_0x245eb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x245EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EB8u;
        // 0x245ebc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245eb8) {
            ctx->pc = 0x246120u;
            goto label_246120;
        }
    }
    ctx->pc = 0x245EC0u;
    // 0x245ec0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x245ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x245ec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x245ec8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x245EC8u;
    {
        const bool branch_taken_0x245ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ec8) {
            ctx->pc = 0x245ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245EC8u;
            // 0x245ecc: 0x8e520038  lw          $s2, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245eb8;
        }
    }
    ctx->pc = 0x245ED0u;
    // 0x245ed0: 0x52400094  beql        $s2, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x245ED0u;
    {
        const bool branch_taken_0x245ed0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ed0) {
            ctx->pc = 0x245ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245ED0u;
            // 0x245ed4: 0xdfb50050  ld          $s5, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246124u;
            goto label_246124;
        }
    }
    ctx->pc = 0x245ED8u;
    // 0x245ed8: 0xc092194  jal         func_248650
    ctx->pc = 0x245ED8u;
    SET_GPR_U32(ctx, 31, 0x245EE0u);
    ctx->pc = 0x248650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248650u, 0x245ED8u, 0x245EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EE0u;
label_245ee0:
    // 0x245ee0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x245ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ee4: 0xaf82a0f8  sw          $v0, -0x5F08($gp)
    ctx->pc = 0x245ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 2));
    // 0x245ee8: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x245ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x245eec: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x245eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x245ef0: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x245ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x245ef4: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x245ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x245ef8: 0x6a440017  ldl         $a0, 0x17($s2)
    ctx->pc = 0x245ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x245efc: 0x6e440010  ldr         $a0, 0x10($s2)
    ctx->pc = 0x245efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x245f00: 0x6a45001f  ldl         $a1, 0x1F($s2)
    ctx->pc = 0x245f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x245f04: 0x6e450018  ldr         $a1, 0x18($s2)
    ctx->pc = 0x245f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x245f08: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x245f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f0c: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x245f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f10: 0xb263000f  sdl         $v1, 0xF($s3)
    ctx->pc = 0x245f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f14: 0xb6630008  sdr         $v1, 0x8($s3)
    ctx->pc = 0x245f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f18: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x245f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f1c: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x245f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f20: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x245f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f24: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x245f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f28: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x245f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x245f2c: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x245f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x245f30: 0x6a43002f  ldl         $v1, 0x2F($s2)
    ctx->pc = 0x245f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x245f34: 0x6e430028  ldr         $v1, 0x28($s2)
    ctx->pc = 0x245f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x245f38: 0x6a440037  ldl         $a0, 0x37($s2)
    ctx->pc = 0x245f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x245f3c: 0x6e440030  ldr         $a0, 0x30($s2)
    ctx->pc = 0x245f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x245f40: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x245f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x245f44: 0xb2620027  sdl         $v0, 0x27($s3)
    ctx->pc = 0x245f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f48: 0xb6620020  sdr         $v0, 0x20($s3)
    ctx->pc = 0x245f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f4c: 0xb263002f  sdl         $v1, 0x2F($s3)
    ctx->pc = 0x245f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f50: 0xb6630028  sdr         $v1, 0x28($s3)
    ctx->pc = 0x245f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f54: 0xb2640037  sdl         $a0, 0x37($s3)
    ctx->pc = 0x245f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f58: 0xb6640030  sdr         $a0, 0x30($s3)
    ctx->pc = 0x245f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245f5c: 0xae650038  sw          $a1, 0x38($s3)
    ctx->pc = 0x245f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 5));
    // 0x245f60: 0x8f82a0f8  lw          $v0, -0x5F08($gp)
    ctx->pc = 0x245f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x245f64: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x245F64u;
    {
        const bool branch_taken_0x245f64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F64u;
        // 0x245f68: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f64) {
            ctx->pc = 0x245F74u;
            goto label_245f74;
        }
    }
    ctx->pc = 0x245F6Cu;
    // 0x245f6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x245F6Cu;
    {
        const bool branch_taken_0x245f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F6Cu;
        // 0x245f70: 0xae400034  sw          $zero, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f6c) {
            ctx->pc = 0x245F84u;
            goto label_245f84;
        }
    }
    ctx->pc = 0x245F74u;
label_245f74:
    // 0x245f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f78: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x245f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x245f7c: 0xc0922ae  jal         func_248AB8
    ctx->pc = 0x245F7Cu;
    SET_GPR_U32(ctx, 31, 0x245F84u);
    ctx->pc = 0x245F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F7Cu;
    // 0x245f80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248AB8u, 0x245F7Cu, 0x245F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F84u;
label_245f84:
    // 0x245f84: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x245f84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x245f88: 0x3694fffe  ori         $s4, $s4, 0xFFFE
    ctx->pc = 0x245f88u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65534);
    // 0x245f8c: 0x0  nop
    ctx->pc = 0x245f8cu;
    // NOP
label_245f90:
    // 0x245f90: 0x8e500038  lw          $s0, 0x38($s2)
    ctx->pc = 0x245f90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x245f94: 0x0  nop
    ctx->pc = 0x245f94u;
    // NOP
label_245f98:
    // 0x245f98: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x245F98u;
    {
        const bool branch_taken_0x245f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F98u;
        // 0x245f9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f98) {
            ctx->pc = 0x246068u;
            goto label_246068;
        }
    }
    ctx->pc = 0x245FA0u;
    // 0x245fa0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x245fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x245fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x245fa8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x245FA8u;
    {
        const bool branch_taken_0x245fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fa8) {
            ctx->pc = 0x245FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245FA8u;
            // 0x245fac: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245f98;
        }
    }
    ctx->pc = 0x245FB0u;
    // 0x245fb0: 0x5200002e  beql        $s0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x245FB0u;
    {
        const bool branch_taken_0x245fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fb0) {
            ctx->pc = 0x245FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245FB0u;
            // 0x245fb4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24606Cu;
            goto label_24606c;
        }
    }
    ctx->pc = 0x245FB8u;
    // 0x245fb8: 0xc092194  jal         func_248650
    ctx->pc = 0x245FB8u;
    SET_GPR_U32(ctx, 31, 0x245FC0u);
    ctx->pc = 0x248650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248650u, 0x245FB8u, 0x245FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FC0u;
label_245fc0:
    // 0x245fc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x245fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245fc4: 0x52200029  beql        $s1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x245FC4u;
    {
        const bool branch_taken_0x245fc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fc4) {
            ctx->pc = 0x245FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245FC4u;
            // 0x245fc8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24606Cu;
            goto label_24606c;
        }
    }
    ctx->pc = 0x245FCCu;
    // 0x245fcc: 0x6a060007  ldl         $a2, 0x7($s0)
    ctx->pc = 0x245fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x245fd0: 0x6e060000  ldr         $a2, 0x0($s0)
    ctx->pc = 0x245fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x245fd4: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x245fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x245fd8: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x245fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x245fdc: 0x6a030017  ldl         $v1, 0x17($s0)
    ctx->pc = 0x245fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x245fe0: 0x6e030010  ldr         $v1, 0x10($s0)
    ctx->pc = 0x245fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x245fe4: 0x6a04001f  ldl         $a0, 0x1F($s0)
    ctx->pc = 0x245fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x245fe8: 0x6e040018  ldr         $a0, 0x18($s0)
    ctx->pc = 0x245fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x245fec: 0xb2260007  sdl         $a2, 0x7($s1)
    ctx->pc = 0x245fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245ff0: 0xb6260000  sdr         $a2, 0x0($s1)
    ctx->pc = 0x245ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245ff4: 0xb222000f  sdl         $v0, 0xF($s1)
    ctx->pc = 0x245ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245ff8: 0xb6220008  sdr         $v0, 0x8($s1)
    ctx->pc = 0x245ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245ffc: 0xb2230017  sdl         $v1, 0x17($s1)
    ctx->pc = 0x245ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246000: 0xb6230010  sdr         $v1, 0x10($s1)
    ctx->pc = 0x246000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246004: 0xb224001f  sdl         $a0, 0x1F($s1)
    ctx->pc = 0x246004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246008: 0xb6240018  sdr         $a0, 0x18($s1)
    ctx->pc = 0x246008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24600c: 0x6a060027  ldl         $a2, 0x27($s0)
    ctx->pc = 0x24600cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x246010: 0x6e060020  ldr         $a2, 0x20($s0)
    ctx->pc = 0x246010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x246014: 0x6a02002f  ldl         $v0, 0x2F($s0)
    ctx->pc = 0x246014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x246018: 0x6e020028  ldr         $v0, 0x28($s0)
    ctx->pc = 0x246018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x24601c: 0x6a030037  ldl         $v1, 0x37($s0)
    ctx->pc = 0x24601cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x246020: 0x6e030030  ldr         $v1, 0x30($s0)
    ctx->pc = 0x246020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x246024: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x246024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x246028: 0xb2260027  sdl         $a2, 0x27($s1)
    ctx->pc = 0x246028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24602c: 0xb6260020  sdr         $a2, 0x20($s1)
    ctx->pc = 0x24602cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246030: 0xb222002f  sdl         $v0, 0x2F($s1)
    ctx->pc = 0x246030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246034: 0xb6220028  sdr         $v0, 0x28($s1)
    ctx->pc = 0x246034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246038: 0xb2230037  sdl         $v1, 0x37($s1)
    ctx->pc = 0x246038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24603c: 0xb6230030  sdr         $v1, 0x30($s1)
    ctx->pc = 0x24603cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246040: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x246040u;
    {
        const bool branch_taken_0x246040 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x246044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246040u;
        // 0x246044: 0xae240038  sw          $a0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246040) {
            ctx->pc = 0x246050u;
            goto label_246050;
        }
    }
    ctx->pc = 0x246048u;
    // 0x246048: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x246048u;
    {
        const bool branch_taken_0x246048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246048u;
        // 0x24604c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246048) {
            ctx->pc = 0x246068u;
            goto label_246068;
        }
    }
    ctx->pc = 0x246050u;
label_246050:
    // 0x246050: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x246050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x246054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246058: 0xc0922ae  jal         func_248AB8
    ctx->pc = 0x246058u;
    SET_GPR_U32(ctx, 31, 0x246060u);
    ctx->pc = 0x24605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246058u;
    // 0x24605c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248AB8u, 0x246058u, 0x246060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246060u;
label_246060:
    // 0x246060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x246060u;
    {
        const bool branch_taken_0x246060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246060u;
        // 0x246064: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246060) {
            ctx->pc = 0x24606Cu;
            goto label_24606c;
        }
    }
    ctx->pc = 0x246068u;
label_246068:
    // 0x246068: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x246068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_24606c:
    // 0x24606c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x24606cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246070: 0xae710038  sw          $s1, 0x38($s3)
    ctx->pc = 0x246070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 17));
    // 0x246074: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x246074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x246078: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x246078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x24607c: 0x1600ffc4  bnez        $s0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x24607Cu;
    {
        const bool branch_taken_0x24607c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x246080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24607Cu;
        // 0x246080: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24607c) {
            ctx->pc = 0x245F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245f90;
        }
    }
    ctx->pc = 0x246084u;
    // 0x246084: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x246084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x246088: 0x8f83a158  lw          $v1, -0x5EA8($gp)
    ctx->pc = 0x246088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x24608c: 0x84440022  lh          $a0, 0x22($v0)
    ctx->pc = 0x24608cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x246090: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x246090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x246094: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x246094u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x246098: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x246098u;
    SET_GPR_U32(ctx, 31, 0x2460A0u);
    ctx->pc = 0x24609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246098u;
    // 0x24609c: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x246098u, 0x2460A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460A0u;
label_2460a0:
    // 0x2460a0: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x2460a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2460a4: 0x8f85a15c  lw          $a1, -0x5EA4($gp)
    ctx->pc = 0x2460a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x2460a8: 0x84640026  lh          $a0, 0x26($v1)
    ctx->pc = 0x2460a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x2460ac: 0x8f86a168  lw          $a2, -0x5E98($gp)
    ctx->pc = 0x2460acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x2460b0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2460b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2460b4: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x2460b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x2460b8: 0xc28821  addu        $s1, $a2, $v0
    ctx->pc = 0x2460b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2460bc: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2460BCu;
    SET_GPR_U32(ctx, 31, 0x2460C4u);
    ctx->pc = 0x2460C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460BCu;
    // 0x2460c0: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2460BCu, 0x2460C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460C4u;
label_2460c4:
    // 0x2460c4: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x2460c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x2460c8: 0x8f90a0f8  lw          $s0, -0x5F08($gp)
    ctx->pc = 0x2460c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x2460cc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2460CCu;
    {
        const bool branch_taken_0x2460cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460CCu;
        // 0x2460d0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460cc) {
            ctx->pc = 0x24610Cu;
            goto label_24610c;
        }
    }
    ctx->pc = 0x2460D4u;
    // 0x2460d4: 0x8f85a0dc  lw          $a1, -0x5F24($gp)
    ctx->pc = 0x2460d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x2460d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2460d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2460dc: 0x0  nop
    ctx->pc = 0x2460dcu;
    // NOP
label_2460e0:
    // 0x2460e0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2460e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2460e4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2460e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2460e8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2460e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2460ec: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2460ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2460f0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2460f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2460f4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2460f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2460f8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2460f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2460fc: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x2460fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x246100: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x246100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x246104: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x246104u;
    {
        const bool branch_taken_0x246104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x246104) {
            ctx->pc = 0x246108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246104u;
            // 0x246108: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2460E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2460e0;
        }
    }
    ctx->pc = 0x24610Cu;
label_24610c:
    // 0x24610c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x24610Cu;
    {
        const bool branch_taken_0x24610c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x246110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24610Cu;
        // 0x246110: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24610c) {
            ctx->pc = 0x246120u;
            goto label_246120;
        }
    }
    ctx->pc = 0x246114u;
    // 0x246114: 0xc091720  jal         func_245C80
    ctx->pc = 0x246114u;
    SET_GPR_U32(ctx, 31, 0x24611Cu);
    ctx->pc = 0x245C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C80u, 0x246114u, 0x24611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24611Cu;
label_24611c:
    // 0x24611c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_246120:
    // 0x246120: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x246120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_246124:
    // 0x246124: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x246124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246128: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x246128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24612c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24612cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246130: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x246130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246138: 0x3e00008  jr          $ra
    ctx->pc = 0x246138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246138u;
        // 0x24613c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246140u;
}
