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

// Function: mmDrawUsedObject
// Address: 0x24ac00 - 0x24ade8
void mmDrawUsedObject_0x24ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDrawUsedObject_0x24ac00");
#endif

    switch (ctx->pc) {
        case 0x24ace8u: goto label_24ace8;
        case 0x24adb8u: goto label_24adb8;
        default: break;
    }

    ctx->pc = 0x24ac00u;

    // 0x24ac00: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24ac04: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x24ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x24ac08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24ac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24ac0c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x24ac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x24ac10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24ac14: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x24ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x24ac18: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x24ac18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ac1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ac20: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x24ac20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x24ac24: 0x8f83a0f8  lw          $v1, -0x5F08($gp)
    ctx->pc = 0x24ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x24ac28: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24ac2c: 0x82a00a  movz        $s4, $a0, $v0
    ctx->pc = 0x24ac2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
    // 0x24ac30: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x24ac30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x24ac34: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x24ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x24ac38: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x24ac38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x24ac3c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x24ac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x24ac40: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x24AC40u;
    {
        const bool branch_taken_0x24ac40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC40u;
        // 0x24ac44: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac40) {
            ctx->pc = 0x24ADC4u;
            goto label_24adc4;
        }
    }
    ctx->pc = 0x24AC48u;
    // 0x24ac48: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x24ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24ac4c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x24ac4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac50: 0x8f86a158  lw          $a2, -0x5EA8($gp)
    ctx->pc = 0x24ac50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x24ac54: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x24ac54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x24ac58: 0x84820022  lh          $v0, 0x22($a0)
    ctx->pc = 0x24ac58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x24ac5c: 0x3c12ffe0  lui         $s2, 0xFFE0
    ctx->pc = 0x24ac5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65504 << 16));
    // 0x24ac60: 0x8f88a188  lw          $t0, -0x5E78($gp)
    ctx->pc = 0x24ac60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x24ac64: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24ac64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ac68: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x24ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24ac6c: 0x84830026  lh          $v1, 0x26($a0)
    ctx->pc = 0x24ac6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x24ac70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24ac74: 0x8f84a15c  lw          $a0, -0x5EA4($gp)
    ctx->pc = 0x24ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x24ac78: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x24ac78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24ac7c: 0x8f86a18c  lw          $a2, -0x5E74($gp)
    ctx->pc = 0x24ac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x24ac80: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x24ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24ac84: 0x8f85a168  lw          $a1, -0x5E98($gp)
    ctx->pc = 0x24ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x24ac88: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x24ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24ac8c: 0x70660018  mult1       $zero, $v1, $a2
    ctx->pc = 0x24ac8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24ac90: 0x2012  mflo        $a0
    ctx->pc = 0x24ac90u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x24ac94: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x24ac94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24ac98: 0x1010  mfhi        $v0
    ctx->pc = 0x24ac98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24ac9c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24ac9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24aca0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24aca4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24aca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24aca8: 0x70001810  mfhi1       $v1
    ctx->pc = 0x24aca8u;
    SET_GPR_U64(ctx, 3, ctx->hi1);
    // 0x24acac: 0x70002012  mflo1       $a0
    ctx->pc = 0x24acacu;
    SET_GPR_U64(ctx, 4, ctx->lo1);
    // 0x24acb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x24acb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24acb4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x24acb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24acb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24acbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24acbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x24acc0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24acc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24acc4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24acc8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x24acc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x24accc: 0xa78821  addu        $s1, $a1, $a3
    ctx->pc = 0x24acccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x24acd0: 0x8f84a16c  lw          $a0, -0x5E94($gp)
    ctx->pc = 0x24acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x24acd4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24acd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24acd8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x24acd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x24acdc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24ace0: 0x879821  addu        $s3, $a0, $a3
    ctx->pc = 0x24ace0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x24ace4: 0x0  nop
    ctx->pc = 0x24ace4u;
    // NOP
label_24ace8:
    // 0x24ace8: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x24ace8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24acec: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x24acecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24acf0: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x24acf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x24acf4: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x24acf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x24acf8: 0x6a030017  ldl         $v1, 0x17($s0)
    ctx->pc = 0x24acf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24acfc: 0x6e030010  ldr         $v1, 0x10($s0)
    ctx->pc = 0x24acfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24ad00: 0x6a04001f  ldl         $a0, 0x1F($s0)
    ctx->pc = 0x24ad00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24ad04: 0x6e040018  ldr         $a0, 0x18($s0)
    ctx->pc = 0x24ad04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24ad08: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x24ad08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad0c: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x24ad0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad10: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x24ad10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad14: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x24ad14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad18: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x24ad18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad1c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x24ad1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad20: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x24ad20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad24: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x24ad24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad28: 0x6a050027  ldl         $a1, 0x27($s0)
    ctx->pc = 0x24ad28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24ad2c: 0x6e050020  ldr         $a1, 0x20($s0)
    ctx->pc = 0x24ad2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x24ad30: 0x6a02002f  ldl         $v0, 0x2F($s0)
    ctx->pc = 0x24ad30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x24ad34: 0x6e020028  ldr         $v0, 0x28($s0)
    ctx->pc = 0x24ad34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x24ad38: 0x6a030037  ldl         $v1, 0x37($s0)
    ctx->pc = 0x24ad38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24ad3c: 0x6e030030  ldr         $v1, 0x30($s0)
    ctx->pc = 0x24ad3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24ad40: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x24ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x24ad44: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x24ad44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad48: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x24ad48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad4c: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x24ad4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad50: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x24ad50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad54: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x24ad54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad58: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x24ad58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24ad5c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x24ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x24ad60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24ad64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24ad68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24ad6c: 0x8f83a0dc  lw          $v1, -0x5F24($gp)
    ctx->pc = 0x24ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x24ad70: 0x523024  and         $a2, $v0, $s2
    ctx->pc = 0x24ad70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x24ad74: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x24ad74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x24ad78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ad7c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x24ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x24ad80: 0x522824  and         $a1, $v0, $s2
    ctx->pc = 0x24ad80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x24ad84: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x24ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24ad88: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24ad8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ad90: 0x14950009  bne         $a0, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AD90u;
    {
        const bool branch_taken_0x24ad90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x24AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD90u;
        // 0x24ad94: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad90) {
            ctx->pc = 0x24ADB8u;
            goto label_24adb8;
        }
    }
    ctx->pc = 0x24AD98u;
    // 0x24ad98: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24ad9c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24ad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ada0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x24ada0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ada4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x24ada4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ada8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24adac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24adb0: 0xc092802  jal         func_24A008
    ctx->pc = 0x24ADB0u;
    SET_GPR_U32(ctx, 31, 0x24ADB8u);
    ctx->pc = 0x24ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ADB0u;
    // 0x24adb4: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A008u, 0x24ADB0u, 0x24ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ADB8u;
label_24adb8:
    // 0x24adb8: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x24adb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x24adbc: 0x1600ffca  bnez        $s0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x24ADBCu;
    {
        const bool branch_taken_0x24adbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24adbc) {
            ctx->pc = 0x24ACE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ace8;
        }
    }
    ctx->pc = 0x24ADC4u;
label_24adc4:
    // 0x24adc4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24adc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24adc8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x24adc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24adcc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x24adccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24add0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x24add0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24add4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x24add4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24add8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x24add8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24addc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x24addcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24ade0: 0x3e00008  jr          $ra
    ctx->pc = 0x24ADE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADE0u;
        // 0x24ade4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ADE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ADE8u;
}
