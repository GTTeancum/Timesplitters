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

// Function: gameReset
// Address: 0x21ea90 - 0x21ede4
void gameReset_0x21ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameReset_0x21ea90");
#endif

    switch (ctx->pc) {
        case 0x21ead0u: goto label_21ead0;
        case 0x21ead8u: goto label_21ead8;
        case 0x21eaecu: goto label_21eaec;
        case 0x21eafcu: goto label_21eafc;
        case 0x21eb58u: goto label_21eb58;
        case 0x21ebd0u: goto label_21ebd0;
        case 0x21ebf0u: goto label_21ebf0;
        case 0x21ec50u: goto label_21ec50;
        case 0x21ecb8u: goto label_21ecb8;
        case 0x21ecc0u: goto label_21ecc0;
        case 0x21ecd0u: goto label_21ecd0;
        case 0x21ed90u: goto label_21ed90;
        case 0x21edc8u: goto label_21edc8;
        default: break;
    }

    ctx->pc = 0x21ea90u;

    // 0x21ea90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21ea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21ea94: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x21ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x21ea98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21ea9c: 0x2463c0e8  addiu       $v1, $v1, -0x3F18
    ctx->pc = 0x21ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951144));
    // 0x21eaa0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21eaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21eaa4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21eaa8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21eaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21eaac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21eaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21eab0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FBC138u));
    // 0x21eab4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x21eab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x21eab8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x21EAB8u;
    {
        const bool branch_taken_0x21eab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAB8u;
        // 0x21eabc: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eab8) {
            ctx->pc = 0x21EBD8u;
            goto label_21ebd8;
        }
    }
    ctx->pc = 0x21EAC0u;
    // 0x21eac0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x21eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x21eac4: 0x2650c4a8  addiu       $s0, $s2, -0x3B58
    ctx->pc = 0x21eac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
    // 0x21eac8: 0xc0895d0  jal         func_225740
    ctx->pc = 0x21EAC8u;
    SET_GPR_U32(ctx, 31, 0x21EAD0u);
    ctx->pc = 0x21EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EAC8u;
    // 0x21eacc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225740u, 0x21EAC8u, 0x21EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAD0u;
label_21ead0:
    // 0x21ead0: 0xc0895e2  jal         func_225788
    ctx->pc = 0x21EAD0u;
    SET_GPR_U32(ctx, 31, 0x21EAD8u);
    ctx->pc = 0x225788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225788u, 0x21EAD0u, 0x21EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAD8u;
label_21ead8:
    // 0x21ead8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21ead8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21eadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21eae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eae4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x21EAE4u;
    SET_GPR_U32(ctx, 31, 0x21EAECu);
    ctx->pc = 0x21EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EAE4u;
    // 0x21eae8: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x21EAE4u, 0x21EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAECu;
label_21eaec:
    // 0x21eaec: 0x2301025  or          $v0, $s1, $s0
    ctx->pc = 0x21eaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x21eaf0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21eaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x21eaf4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21EAF4u;
    {
        const bool branch_taken_0x21eaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAF4u;
        // 0x21eaf8: 0x26220060  addiu       $v0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eaf4) {
            ctx->pc = 0x21EB58u;
            goto label_21eb58;
        }
    }
    ctx->pc = 0x21EAFCu;
label_21eafc:
    // 0x21eafc: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x21eafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21eb00: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x21eb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21eb04: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x21eb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21eb08: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x21eb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21eb0c: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x21eb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21eb10: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x21eb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21eb14: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x21eb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21eb18: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x21eb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21eb1c: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x21eb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb20: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x21eb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb24: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x21eb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb28: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x21eb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb2c: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x21eb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb30: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x21eb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb34: 0xb206001f  sdl         $a2, 0x1F($s0)
    ctx->pc = 0x21eb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb38: 0xb6060018  sdr         $a2, 0x18($s0)
    ctx->pc = 0x21eb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb3c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x21eb3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x21eb40: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x21eb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21eb44: 0x0  nop
    ctx->pc = 0x21eb44u;
    // NOP
    // 0x21eb48: 0x1622ffec  bne         $s1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21EB48u;
    {
        const bool branch_taken_0x21eb48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x21eb48) {
            ctx->pc = 0x21EAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21eafc;
        }
    }
    ctx->pc = 0x21EB50u;
    // 0x21eb50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21EB50u;
    {
        const bool branch_taken_0x21eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21eb50) {
            ctx->pc = 0x21EB8Cu;
            goto label_21eb8c;
        }
    }
    ctx->pc = 0x21EB58u;
label_21eb58:
    // 0x21eb58: 0xde270000  ld          $a3, 0x0($s1)
    ctx->pc = 0x21eb58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21eb5c: 0xde290008  ld          $t1, 0x8($s1)
    ctx->pc = 0x21eb5cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21eb60: 0xde2a0010  ld          $t2, 0x10($s1)
    ctx->pc = 0x21eb60u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21eb64: 0xde2b0018  ld          $t3, 0x18($s1)
    ctx->pc = 0x21eb64u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x21eb68: 0xfe070000  sd          $a3, 0x0($s0)
    ctx->pc = 0x21eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 7));
    // 0x21eb6c: 0xfe090008  sd          $t1, 0x8($s0)
    ctx->pc = 0x21eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    // 0x21eb70: 0xfe0a0010  sd          $t2, 0x10($s0)
    ctx->pc = 0x21eb70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 10));
    // 0x21eb74: 0xfe0b0018  sd          $t3, 0x18($s0)
    ctx->pc = 0x21eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 11));
    // 0x21eb78: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x21eb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x21eb7c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x21eb7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21eb80: 0x0  nop
    ctx->pc = 0x21eb80u;
    // NOP
    // 0x21eb84: 0x1622fff4  bne         $s1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21EB84u;
    {
        const bool branch_taken_0x21eb84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x21eb84) {
            ctx->pc = 0x21EB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21eb58;
        }
    }
    ctx->pc = 0x21EB8Cu;
label_21eb8c:
    // 0x21eb8c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x21eb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21eb90: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x21eb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21eb94: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x21eb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21eb98: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x21eb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21eb9c: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x21eb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eba0: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x21eba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eba4: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x21eba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eba8: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x21eba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ebac: 0x2665c4a8  addiu       $a1, $s3, -0x3B58
    ctx->pc = 0x21ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952104));
    // 0x21ebb0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x21ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x21ebb4: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x21ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x21ebb8: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x21ebb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x21ebbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ebc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21ebc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21ebc4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x21ebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x21ebc8: 0xc087f22  jal         func_21FC88
    ctx->pc = 0x21EBC8u;
    SET_GPR_U32(ctx, 31, 0x21EBD0u);
    ctx->pc = 0x21EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBC8u;
    // 0x21ebcc: 0xaca20050  sw          $v0, 0x50($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC88u, 0x21EBC8u, 0x21EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBD0u;
label_21ebd0:
    // 0x21ebd0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x21EBD0u;
    {
        const bool branch_taken_0x21ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBD0u;
        // 0x21ebd4: 0x2642c4a8  addiu       $v0, $s2, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebd0) {
            ctx->pc = 0x21ECE8u;
            goto label_21ece8;
        }
    }
    ctx->pc = 0x21EBD8u;
label_21ebd8:
    // 0x21ebd8: 0x2648c4a8  addiu       $t0, $s2, -0x3B58
    ctx->pc = 0x21ebd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
    // 0x21ebdc: 0x681025  or          $v0, $v1, $t0
    ctx->pc = 0x21ebdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x21ebe0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21ebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x21ebe4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21EBE4u;
    {
        const bool branch_taken_0x21ebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBE4u;
        // 0x21ebe8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebe4) {
            ctx->pc = 0x21EC4Cu;
            goto label_21ec4c;
        }
    }
    ctx->pc = 0x21EBECu;
    // 0x21ebec: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x21ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_21ebf0:
    // 0x21ebf0: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x21ebf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21ebf4: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x21ebf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21ebf8: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x21ebf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x21ebfc: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x21ebfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x21ec00: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x21ec00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x21ec04: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x21ec04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x21ec08: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x21ec08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x21ec0c: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x21ec0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x21ec10: 0xb1060007  sdl         $a2, 0x7($t0)
    ctx->pc = 0x21ec10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec14: 0xb5060000  sdr         $a2, 0x0($t0)
    ctx->pc = 0x21ec14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec18: 0xb107000f  sdl         $a3, 0xF($t0)
    ctx->pc = 0x21ec18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec1c: 0xb5070008  sdr         $a3, 0x8($t0)
    ctx->pc = 0x21ec1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec20: 0xb1090017  sdl         $t1, 0x17($t0)
    ctx->pc = 0x21ec20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec24: 0xb5090010  sdr         $t1, 0x10($t0)
    ctx->pc = 0x21ec24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec28: 0xb10a001f  sdl         $t2, 0x1F($t0)
    ctx->pc = 0x21ec28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec2c: 0xb50a0018  sdr         $t2, 0x18($t0)
    ctx->pc = 0x21ec2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec30: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x21ec34: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x21ec34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x21ec38: 0x0  nop
    ctx->pc = 0x21ec38u;
    // NOP
    // 0x21ec3c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21EC3Cu;
    {
        const bool branch_taken_0x21ec3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ec3c) {
            ctx->pc = 0x21EBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebf0;
        }
    }
    ctx->pc = 0x21EC44u;
    // 0x21ec44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21EC44u;
    {
        const bool branch_taken_0x21ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ec44) {
            ctx->pc = 0x21EC84u;
            goto label_21ec84;
        }
    }
    ctx->pc = 0x21EC4Cu;
label_21ec4c:
    // 0x21ec4c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x21ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_21ec50:
    // 0x21ec50: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x21ec50u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ec54: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x21ec54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21ec58: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x21ec58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21ec5c: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x21ec5cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x21ec60: 0xfd0b0000  sd          $t3, 0x0($t0)
    ctx->pc = 0x21ec60u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 11));
    // 0x21ec64: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x21ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x21ec68: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x21ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x21ec6c: 0xfd060018  sd          $a2, 0x18($t0)
    ctx->pc = 0x21ec6cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 6));
    // 0x21ec70: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x21ec74: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x21ec74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x21ec78: 0x0  nop
    ctx->pc = 0x21ec78u;
    // NOP
    // 0x21ec7c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21EC7Cu;
    {
        const bool branch_taken_0x21ec7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ec7c) {
            ctx->pc = 0x21EC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ec50;
        }
    }
    ctx->pc = 0x21EC84u;
label_21ec84:
    // 0x21ec84: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x21ec84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x21ec88: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x21ec88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x21ec8c: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x21ec8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x21ec90: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x21ec90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x21ec94: 0xb1090007  sdl         $t1, 0x7($t0)
    ctx->pc = 0x21ec94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec98: 0xb5090000  sdr         $t1, 0x0($t0)
    ctx->pc = 0x21ec98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ec9c: 0xb10a000f  sdl         $t2, 0xF($t0)
    ctx->pc = 0x21ec9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21eca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21eca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21eca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ecac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ecacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ecb0: 0xc080b56  jal         func_202D58
    ctx->pc = 0x21ECB0u;
    SET_GPR_U32(ctx, 31, 0x21ECB8u);
    ctx->pc = 0x21ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECB0u;
    // 0x21ecb4: 0xb50a0008  sdr         $t2, 0x8($t0) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D58u, 0x21ECB0u, 0x21ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECB8u;
label_21ecb8:
    // 0x21ecb8: 0xc08828c  jal         func_220A30
    ctx->pc = 0x21ECB8u;
    SET_GPR_U32(ctx, 31, 0x21ECC0u);
    ctx->pc = 0x21ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECB8u;
    // 0x21ecbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x21ECB8u, 0x21ECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECC0u;
label_21ecc0:
    // 0x21ecc0: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21ECC0u;
    {
        const bool branch_taken_0x21ecc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECC0u;
        // 0x21ecc4: 0x2642c4a8  addiu       $v0, $s2, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecc0) {
            ctx->pc = 0x21ECE8u;
            goto label_21ece8;
        }
    }
    ctx->pc = 0x21ECC8u;
    // 0x21ecc8: 0xc089374  jal         func_224DD0
    ctx->pc = 0x21ECC8u;
    SET_GPR_U32(ctx, 31, 0x21ECD0u);
    ctx->pc = 0x21ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECC8u;
    // 0x21eccc: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224DD0u, 0x21ECC8u, 0x21ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECD0u;
label_21ecd0:
    // 0x21ecd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21ECD0u;
    {
        const bool branch_taken_0x21ecd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECD0u;
        // 0x21ecd4: 0x2603c4a8  addiu       $v1, $s0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecd0) {
            ctx->pc = 0x21ECE4u;
            goto label_21ece4;
        }
    }
    ctx->pc = 0x21ECD8u;
    // 0x21ecd8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21ecdc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x21ecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x21ece0: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x21ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_21ece4:
    // 0x21ece4: 0x2642c4a8  addiu       $v0, $s2, -0x3B58
    ctx->pc = 0x21ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
label_21ece8:
    // 0x21ece8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x21ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x21ecec: 0x28830068  slti        $v1, $a0, 0x68
    ctx->pc = 0x21ececu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)104) ? 1 : 0);
    // 0x21ecf0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21ECF0u;
    {
        const bool branch_taken_0x21ecf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF0u;
        // 0x21ecf4: 0x28820065  slti        $v0, $a0, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecf0) {
            ctx->pc = 0x21ED10u;
            goto label_21ed10;
        }
    }
    ctx->pc = 0x21ECF8u;
    // 0x21ecf8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21ECF8u;
    {
        const bool branch_taken_0x21ecf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF8u;
        // 0x21ecfc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecf8) {
            ctx->pc = 0x21ED1Cu;
            goto label_21ed1c;
        }
    }
    ctx->pc = 0x21ED00u;
    // 0x21ed00: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21ED00u;
    {
        const bool branch_taken_0x21ed00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED00u;
        // 0x21ed04: 0x2642c4a8  addiu       $v0, $s2, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed00) {
            ctx->pc = 0x21ED1Cu;
            goto label_21ed1c;
        }
    }
    ctx->pc = 0x21ED08u;
    // 0x21ed08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21ED08u;
    {
        const bool branch_taken_0x21ed08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED08u;
        // 0x21ed0c: 0x8c430048  lw          $v1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed08) {
            ctx->pc = 0x21ED3Cu;
            goto label_21ed3c;
        }
    }
    ctx->pc = 0x21ED10u;
label_21ed10:
    // 0x21ed10: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x21ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x21ed14: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21ED14u;
    {
        const bool branch_taken_0x21ed14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED14u;
        // 0x21ed18: 0x2642c4a8  addiu       $v0, $s2, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed14) {
            ctx->pc = 0x21ED38u;
            goto label_21ed38;
        }
    }
    ctx->pc = 0x21ED1Cu;
label_21ed1c:
    // 0x21ed1c: 0x2642c4a8  addiu       $v0, $s2, -0x3B58
    ctx->pc = 0x21ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
    // 0x21ed20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ed24: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x21ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x21ed28: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x21ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x21ed2c: 0xae43c4a8  sw          $v1, -0x3B58($s2)
    ctx->pc = 0x21ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952104), GPR_U32(ctx, 3));
    // 0x21ed30: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x21ed34: 0x2642c4a8  addiu       $v0, $s2, -0x3B58
    ctx->pc = 0x21ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
label_21ed38:
    // 0x21ed38: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x21ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_21ed3c:
    // 0x21ed3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21ed40: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x21ed40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x21ed44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21ED44u;
    {
        const bool branch_taken_0x21ed44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED44u;
        // 0x21ed48: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed44) {
            ctx->pc = 0x21ED74u;
            goto label_21ed74;
        }
    }
    ctx->pc = 0x21ED4Cu;
    // 0x21ed4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ed50: 0x244208b0  addiu       $v0, $v0, 0x8B0
    ctx->pc = 0x21ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2224));
    // 0x21ed54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ed58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ed5c: 0x800008  jr          $a0
    ctx->pc = 0x21ED5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21ED64u: goto label_21ed64;
            case 0x21ED74u: goto label_21ed74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ED5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21ED64u;
label_21ed64:
    // 0x21ed64: 0x2643c4a8  addiu       $v1, $s2, -0x3B58
    ctx->pc = 0x21ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
    // 0x21ed68: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21ed6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21ed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21ed70: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x21ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_21ed74:
    // 0x21ed74: 0x2651c4a8  addiu       $s1, $s2, -0x3B58
    ctx->pc = 0x21ed74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952104));
    // 0x21ed78: 0x8e43c4a8  lw          $v1, -0x3B58($s2)
    ctx->pc = 0x21ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952104)));
    // 0x21ed7c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x21ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x21ed80: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x21ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21ed84: 0xaf829f70  sw          $v0, -0x6090($gp)
    ctx->pc = 0x21ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942576), GPR_U32(ctx, 2));
    // 0x21ed88: 0xc0b377a  jal         func_2CDDE8
    ctx->pc = 0x21ED88u;
    SET_GPR_U32(ctx, 31, 0x21ED90u);
    ctx->pc = 0x21ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED88u;
    // 0x21ed8c: 0xaf839f74  sw          $v1, -0x608C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942580), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE8u, 0x21ED88u, 0x21ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED90u;
label_21ed90:
    // 0x21ed90: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x21ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x21ed94: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ED94u;
    {
        const bool branch_taken_0x21ed94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21ed94) {
            ctx->pc = 0x21ED98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ED94u;
            // 0x21ed98: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EDACu;
            goto label_21edac;
        }
    }
    ctx->pc = 0x21ED9Cu;
    // 0x21ed9c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x21ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x21eda0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x21eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x21eda4: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x21eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x21eda8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x21eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_21edac:
    // 0x21edac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EDACu;
    {
        const bool branch_taken_0x21edac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21edac) {
            ctx->pc = 0x21EDC0u;
            goto label_21edc0;
        }
    }
    ctx->pc = 0x21EDB4u;
    // 0x21edb4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x21edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x21edb8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x21edb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x21edbc: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x21edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_21edc0:
    // 0x21edc0: 0xc0895a0  jal         func_225680
    ctx->pc = 0x21EDC0u;
    SET_GPR_U32(ctx, 31, 0x21EDC8u);
    ctx->pc = 0x225680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225680u, 0x21EDC0u, 0x21EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDC8u;
label_21edc8:
    // 0x21edc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21edc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21edcc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21edccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21edd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21edd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21edd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21edd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21edd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21edd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eddc: 0x8087a32  j           func_21E8C8
    ctx->pc = 0x21EDDCu;
    ctx->pc = 0x21EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDDCu;
    // 0x21ede0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E8C8u;
    gameRestart_0x21e8c8(rdram, ctx, runtime); return;
    ctx->pc = 0x21EDE4u;
}
