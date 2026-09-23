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

// Function: __moddi3
// Address: 0x2e1bf8 - 0x2e2260
void ps2___moddi3_0x2e1bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___moddi3_0x2e1bf8");
#endif

    ctx->pc = 0x2e1bf8u;

    // 0x2e1bf8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e1bf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1bfc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e1bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e1c00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e1c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e1c04: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x2e1c04u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2e1c08: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x2e1c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2e1c0c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2e1c0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e1c10: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E1C10u;
    {
        const bool branch_taken_0x2e1c10 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2E1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C10u;
        // 0x2e1c14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c10) {
            ctx->pc = 0x2E1C6Cu;
            goto label_2e1c6c;
        }
    }
    ctx->pc = 0x2E1C18u;
    // 0x2e1c18: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2e1c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2e1c1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e1c1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e1c20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e1c24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1c28: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e1c2c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2e1c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e1c30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e1c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e1c34: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2e1c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2e1c38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e1c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e1c3c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2e1c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2e1c40: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2e1c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2e1c44: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2e1c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2e1c48: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2e1c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e1c4c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2e1c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2e1c50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e1c50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e1c54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e1c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e1c58: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2e1c58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2e1c5c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1c60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1c64: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x2e1c64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e1c68: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x2e1c68u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_2e1c6c:
    // 0x2e1c6c: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x2e1c6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2e1c70: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E1C70u;
    {
        const bool branch_taken_0x2e1c70 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2E1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C70u;
        // 0x2e1c74: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c70) {
            ctx->pc = 0x2E1CC0u;
            goto label_2e1cc0;
        }
    }
    ctx->pc = 0x2E1C78u;
    // 0x2e1c78: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2e1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e1c7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e1c7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e1c80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e1c84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1c88: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e1c8c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2e1c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2e1c90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e1c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e1c94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e1c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e1c98: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e1c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2e1c9c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2e1c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2e1ca0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2e1ca0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2e1ca4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x2e1ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2e1ca8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e1ca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e1cac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2e1cacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e1cb0: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x2e1cb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x2e1cb4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2e1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e1cb8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e1cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e1cbc: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x2e1cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_2e1cc0:
    // 0x2e1cc0: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x2e1cc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2e1cc4: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2e1cc4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2e1cc8: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x2e1cc8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2e1ccc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2e1cccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2e1cd0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x2e1cd0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x2e1cd4: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x2e1cd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e1cd8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2e1cd8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2e1cdc: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2E1CDCu;
    {
        const bool branch_taken_0x2e1cdc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CDCu;
        // 0x2e1ce0: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1cdc) {
            ctx->pc = 0x2E1FACu;
            goto label_2e1fac;
        }
    }
    ctx->pc = 0x2E1CE4u;
    // 0x2e1ce4: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x2e1ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1ce8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E1CE8u;
    {
        const bool branch_taken_0x2e1ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CE8u;
        // 0x2e1cec: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ce8) {
            ctx->pc = 0x2E1D78u;
            goto label_2e1d78;
        }
    }
    ctx->pc = 0x2E1CF0u;
    // 0x2e1cf0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e1cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1cf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1CF4u;
    {
        const bool branch_taken_0x2e1cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CF4u;
        // 0x2e1cf8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1cf4) {
            ctx->pc = 0x2E1D10u;
            goto label_2e1d10;
        }
    }
    ctx->pc = 0x2E1CFCu;
    // 0x2e1cfc: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2e1cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e1d00: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e1d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1d04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1D04u;
    {
        const bool branch_taken_0x2e1d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D04u;
        // 0x2e1d08: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d04) {
            ctx->pc = 0x2E1D28u;
            goto label_2e1d28;
        }
    }
    ctx->pc = 0x2E1D0Cu;
    // 0x2e1d0c: 0x0  nop
    ctx->pc = 0x2e1d0cu;
    // NOP
label_2e1d10:
    // 0x2e1d10: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e1d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e1d14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e1d18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e1d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e1d1c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e1d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1d20: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e1d20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e1d24: 0x0  nop
    ctx->pc = 0x2e1d24u;
    // NOP
label_2e1d28:
    // 0x2e1d28: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e1d2c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2e1d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e1d30: 0x2442b870  addiu       $v0, $v0, -0x4790
    ctx->pc = 0x2e1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948976));
    // 0x2e1d34: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2e1d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e1d38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e1d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e1d3c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e1d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1d40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e1d44: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x2e1d44u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e1d48: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1D48u;
    {
        const bool branch_taken_0x2e1d48 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D48u;
        // 0x2e1d4c: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d48) {
            ctx->pc = 0x2E1D64u;
            goto label_2e1d64;
        }
    }
    ctx->pc = 0x2E1D50u;
    // 0x2e1d50: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x2e1d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e1d54: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x2e1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e1d58: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x2e1d58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e1d5c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e1d5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1d60: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x2e1d60u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_2e1d64:
    // 0x2e1d64: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2e1d64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e1d68: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x2e1d68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e1d6c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2E1D6Cu;
    {
        const bool branch_taken_0x2e1d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D6Cu;
        // 0x2e1d70: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d6c) {
            ctx->pc = 0x2E1EF0u;
            goto label_2e1ef0;
        }
    }
    ctx->pc = 0x2E1D74u;
    // 0x2e1d74: 0x0  nop
    ctx->pc = 0x2e1d74u;
    // NOP
label_2e1d78:
    // 0x2e1d78: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1D78u;
    {
        const bool branch_taken_0x2e1d78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D78u;
        // 0x2e1d7c: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d78) {
            ctx->pc = 0x2E1DA0u;
            goto label_2e1da0;
        }
    }
    ctx->pc = 0x2E1D80u;
    // 0x2e1d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1d84: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1D84u;
    {
        const bool branch_taken_0x2e1d84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d84) {
            ctx->pc = 0x2E1D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1D84u;
            // 0x2e1d88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1D8Cu;
            goto label_2e1d8c;
        }
    }
    ctx->pc = 0x2E1D8Cu;
label_2e1d8c:
    // 0x2e1d8c: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x2e1d8cu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e1d90: 0x1012  mflo        $v0
    ctx->pc = 0x2e1d90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e1d94: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e1d94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e1d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e1d9c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e1d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2e1da0:
    // 0x2e1da0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1DA0u;
    {
        const bool branch_taken_0x2e1da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DA0u;
        // 0x2e1da4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1da0) {
            ctx->pc = 0x2E1DB8u;
            goto label_2e1db8;
        }
    }
    ctx->pc = 0x2E1DA8u;
    // 0x2e1da8: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2e1da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e1dac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e1dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1db0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1DB0u;
    {
        const bool branch_taken_0x2e1db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DB0u;
        // 0x2e1db4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1db0) {
            ctx->pc = 0x2E1DD0u;
            goto label_2e1dd0;
        }
    }
    ctx->pc = 0x2E1DB8u;
label_2e1db8:
    // 0x2e1db8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e1db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e1dbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e1dc0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e1dc4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e1dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1dc8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e1dc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e1dcc: 0x0  nop
    ctx->pc = 0x2e1dccu;
    // NOP
label_2e1dd0:
    // 0x2e1dd0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e1dd4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2e1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e1dd8: 0x2442b870  addiu       $v0, $v0, -0x4790
    ctx->pc = 0x2e1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948976));
    // 0x2e1ddc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2e1ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e1de0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e1de4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e1de4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1de8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e1dec: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x2e1decu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e1df0: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1DF0u;
    {
        const bool branch_taken_0x2e1df0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DF0u;
        // 0x2e1df4: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1df0) {
            ctx->pc = 0x2E1E08u;
            goto label_2e1e08;
        }
    }
    ctx->pc = 0x2E1DF8u;
    // 0x2e1df8: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x2e1df8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2e1dfc: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2e1dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e1e00: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2E1E00u;
    {
        const bool branch_taken_0x2e1e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E00u;
        // 0x2e1e04: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e00) {
            ctx->pc = 0x2E1EE4u;
            goto label_2e1ee4;
        }
    }
    ctx->pc = 0x2E1E08u;
label_2e1e08:
    // 0x2e1e08: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x2e1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e1e0c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x2e1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e1e10: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x2e1e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e1e14: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e1e14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1e18: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x2e1e18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e1e1c: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x2e1e1cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e1e20: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2e1e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e1e24: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x2e1e24u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2e1e28: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x2e1e28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e1e2c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e1e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1e30: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2e1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2e1e34: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1E34u;
    {
        const bool branch_taken_0x2e1e34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e34) {
            ctx->pc = 0x2E1E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1E34u;
            // 0x2e1e38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1E3Cu;
            goto label_2e1e3c;
        }
    }
    ctx->pc = 0x2E1E3Cu;
label_2e1e3c:
    // 0x2e1e3c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2e1e3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1e40: 0x1012  mflo        $v0
    ctx->pc = 0x2e1e40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e1e44: 0x1810  mfhi        $v1
    ctx->pc = 0x2e1e44u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e1e48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1e4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e1e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e1e50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e1e50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e1e54: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x2e1e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e1e58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e1e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e1e5c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1e60: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E1E60u;
    {
        const bool branch_taken_0x2e1e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e60) {
            ctx->pc = 0x2E1E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1E60u;
            // 0x2e1e64: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1E8Cu;
            goto label_2e1e8c;
        }
    }
    ctx->pc = 0x2E1E68u;
    // 0x2e1e68: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e1e6c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e1e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1e70: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1E70u;
    {
        const bool branch_taken_0x2e1e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e70) {
            ctx->pc = 0x2E1E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1E70u;
            // 0x2e1e74: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1E8Cu;
            goto label_2e1e8c;
        }
    }
    ctx->pc = 0x2E1E78u;
    // 0x2e1e78: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1e7c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1E7Cu;
    {
        const bool branch_taken_0x2e1e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e7c) {
            ctx->pc = 0x2E1E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1E7Cu;
            // 0x2e1e80: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1E88u;
            goto label_2e1e88;
        }
    }
    ctx->pc = 0x2E1E84u;
    // 0x2e1e84: 0x0  nop
    ctx->pc = 0x2e1e84u;
    // NOP
label_2e1e88:
    // 0x2e1e88: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e1e8c:
    // 0x2e1e8c: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2e1e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2e1e90: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x2e1e90u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e1e94: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1E94u;
    {
        const bool branch_taken_0x2e1e94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e94) {
            ctx->pc = 0x2E1E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1E94u;
            // 0x2e1e98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1E9Cu;
            goto label_2e1e9c;
        }
    }
    ctx->pc = 0x2E1E9Cu;
label_2e1e9c:
    // 0x2e1e9c: 0x1012  mflo        $v0
    ctx->pc = 0x2e1e9cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e1ea0: 0x1810  mfhi        $v1
    ctx->pc = 0x2e1ea0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e1ea4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1ea8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e1ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e1eac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e1eacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e1eb0: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x2e1eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e1eb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e1eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e1eb8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1ebc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1EBCu;
    {
        const bool branch_taken_0x2e1ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ebc) {
            ctx->pc = 0x2E1EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1EBCu;
            // 0x2e1ec0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1EE4u;
            goto label_2e1ee4;
        }
    }
    ctx->pc = 0x2E1EC4u;
    // 0x2e1ec4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e1ec8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e1ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1ecc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1ECCu;
    {
        const bool branch_taken_0x2e1ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1ECCu;
        // 0x2e1ed0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ecc) {
            ctx->pc = 0x2E1EE4u;
            goto label_2e1ee4;
        }
    }
    ctx->pc = 0x2E1ED4u;
    // 0x2e1ed4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1ed8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1ED8u;
    {
        const bool branch_taken_0x2e1ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ed8) {
            ctx->pc = 0x2E1EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1ED8u;
            // 0x2e1edc: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1EE0u;
            goto label_2e1ee0;
        }
    }
    ctx->pc = 0x2E1EE0u;
label_2e1ee0:
    // 0x2e1ee0: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x2e1ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e1ee4:
    // 0x2e1ee4: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x2e1ee4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2e1ee8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2e1ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1eec: 0x0  nop
    ctx->pc = 0x2e1eecu;
    // NOP
label_2e1ef0:
    // 0x2e1ef0: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2e1ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2e1ef4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1EF4u;
    {
        const bool branch_taken_0x2e1ef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ef4) {
            ctx->pc = 0x2E1EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1EF4u;
            // 0x2e1ef8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1EFCu;
            goto label_2e1efc;
        }
    }
    ctx->pc = 0x2E1EFCu;
label_2e1efc:
    // 0x2e1efc: 0x1012  mflo        $v0
    ctx->pc = 0x2e1efcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e1f00: 0x1810  mfhi        $v1
    ctx->pc = 0x2e1f00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e1f04: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1f08: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e1f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e1f0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e1f0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e1f10: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x2e1f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e1f14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e1f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e1f18: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1f1c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1F1Cu;
    {
        const bool branch_taken_0x2e1f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f1c) {
            ctx->pc = 0x2E1F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F1Cu;
            // 0x2e1f20: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F44u;
            goto label_2e1f44;
        }
    }
    ctx->pc = 0x2E1F24u;
    // 0x2e1f24: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e1f28: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e1f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1f2c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1F2Cu;
    {
        const bool branch_taken_0x2e1f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f2c) {
            ctx->pc = 0x2E1F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F2Cu;
            // 0x2e1f30: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F44u;
            goto label_2e1f44;
        }
    }
    ctx->pc = 0x2E1F34u;
    // 0x2e1f34: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1f38: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1F38u;
    {
        const bool branch_taken_0x2e1f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f38) {
            ctx->pc = 0x2E1F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F38u;
            // 0x2e1f3c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F40u;
            goto label_2e1f40;
        }
    }
    ctx->pc = 0x2E1F40u;
label_2e1f40:
    // 0x2e1f40: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e1f44:
    // 0x2e1f44: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2e1f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2e1f48: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e1f48u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e1f4c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1F4Cu;
    {
        const bool branch_taken_0x2e1f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f4c) {
            ctx->pc = 0x2E1F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F4Cu;
            // 0x2e1f50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F54u;
            goto label_2e1f54;
        }
    }
    ctx->pc = 0x2E1F54u;
label_2e1f54:
    // 0x2e1f54: 0x1012  mflo        $v0
    ctx->pc = 0x2e1f54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e1f58: 0x1810  mfhi        $v1
    ctx->pc = 0x2e1f58u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e1f5c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e1f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e1f60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e1f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e1f64: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e1f64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e1f68: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x2e1f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e1f6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e1f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e1f70: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e1f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e1f74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1F74u;
    {
        const bool branch_taken_0x2e1f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f74) {
            ctx->pc = 0x2E1F94u;
            goto label_2e1f94;
        }
    }
    ctx->pc = 0x2E1F7Cu;
    // 0x2e1f7c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e1f80: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e1f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e1f84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1F84u;
    {
        const bool branch_taken_0x2e1f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F84u;
        // 0x2e1f88: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f84) {
            ctx->pc = 0x2E1F94u;
            goto label_2e1f94;
        }
    }
    ctx->pc = 0x2E1F8Cu;
    // 0x2e1f8c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1F8Cu;
    {
        const bool branch_taken_0x2e1f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f8c) {
            ctx->pc = 0x2E1F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F8Cu;
            // 0x2e1f90: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F94u;
            goto label_2e1f94;
        }
    }
    ctx->pc = 0x2E1F94u;
label_2e1f94:
    // 0x2e1f94: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x2E1F94u;
    {
        const bool branch_taken_0x2e1f94 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F94u;
        // 0x2e1f98: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f94) {
            ctx->pc = 0x2E21F4u;
            goto label_2e21f4;
        }
    }
    ctx->pc = 0x2E1F9Cu;
    // 0x2e1f9c: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x2e1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e1fa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e1fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e1fa4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2E1FA4u;
    {
        const bool branch_taken_0x2e1fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FA4u;
        // 0x2e1fa8: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fa4) {
            ctx->pc = 0x2E21F0u;
            goto label_2e21f0;
        }
    }
    ctx->pc = 0x2E1FACu;
label_2e1fac:
    // 0x2e1fac: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x2e1facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e1fb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1FB0u;
    {
        const bool branch_taken_0x2e1fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FB0u;
        // 0x2e1fb4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fb0) {
            ctx->pc = 0x2E1FCCu;
            goto label_2e1fcc;
        }
    }
    ctx->pc = 0x2E1FB8u;
    // 0x2e1fb8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x2e1fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2e1fbc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x2e1fbcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e1fc0: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x2e1fc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x2e1fc4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2E1FC4u;
    {
        const bool branch_taken_0x2e1fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FC4u;
        // 0x2e1fc8: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fc4) {
            ctx->pc = 0x2E21F4u;
            goto label_2e21f4;
        }
    }
    ctx->pc = 0x2E1FCCu;
label_2e1fcc:
    // 0x2e1fcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e1fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e1fd0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2e1fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e1fd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1FD4u;
    {
        const bool branch_taken_0x2e1fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FD4u;
        // 0x2e1fd8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fd4) {
            ctx->pc = 0x2E1FF0u;
            goto label_2e1ff0;
        }
    }
    ctx->pc = 0x2E1FDCu;
    // 0x2e1fdc: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2e1fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e1fe0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2e1fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1fe4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1FE4u;
    {
        const bool branch_taken_0x2e1fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FE4u;
        // 0x2e1fe8: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fe4) {
            ctx->pc = 0x2E2008u;
            goto label_2e2008;
        }
    }
    ctx->pc = 0x2E1FECu;
    // 0x2e1fec: 0x0  nop
    ctx->pc = 0x2e1fecu;
    // NOP
label_2e1ff0:
    // 0x2e1ff0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2e1ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e1ff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e1ff8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e1ffc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2e1ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2000: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2e2000u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2e2004: 0x0  nop
    ctx->pc = 0x2e2004u;
    // NOP
label_2e2008:
    // 0x2e2008: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e2008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e200c: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x2e200cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e2010: 0x2442b870  addiu       $v0, $v0, -0x4790
    ctx->pc = 0x2e2010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948976));
    // 0x2e2014: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2e2014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e2018: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e2018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e201c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e201cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2020: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e2020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e2024: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x2e2024u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e2028: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E2028u;
    {
        const bool branch_taken_0x2e2028 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2028u;
        // 0x2e202c: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2028) {
            ctx->pc = 0x2E2070u;
            goto label_2e2070;
        }
    }
    ctx->pc = 0x2E2030u;
    // 0x2e2030: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2e2030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2e2034: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2034u;
    {
        const bool branch_taken_0x2e2034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2034u;
        // 0x2e2038: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2034) {
            ctx->pc = 0x2E2048u;
            goto label_2e2048;
        }
    }
    ctx->pc = 0x2E203Cu;
    // 0x2e203c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x2e203cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2040u;
    {
        const bool branch_taken_0x2e2040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2040) {
            ctx->pc = 0x2E2058u;
            goto label_2e2058;
        }
    }
    ctx->pc = 0x2E2048u;
label_2e2048:
    // 0x2e2048: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x2e2048u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2e204c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2e204cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e2050: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x2e2050u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e2054: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2e2054u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2058:
    // 0x2e2058: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x2E2058u;
    {
        const bool branch_taken_0x2e2058 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2058u;
        // 0x2e205c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2058) {
            ctx->pc = 0x2E21F4u;
            goto label_2e21f4;
        }
    }
    ctx->pc = 0x2E2060u;
    // 0x2e2060: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x2e2060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2e2064: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x2e2064u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e2068: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2E2068u;
    {
        const bool branch_taken_0x2e2068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2068u;
        // 0x2e206c: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2068) {
            ctx->pc = 0x2E21F0u;
            goto label_2e21f0;
        }
    }
    ctx->pc = 0x2E2070u;
label_2e2070:
    // 0x2e2070: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x2e2070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2074: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x2e2074u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e2078: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x2e2078u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e207c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x2e207cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e2080: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x2e2080u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2084: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e2084u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2088: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x2e2088u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2e208c: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x2e208cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2090: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x2e2090u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2094: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x2e2094u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2e2098: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2e2098u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2e209c: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x2e209cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2e20a0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2e20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2e20a4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E20A4u;
    {
        const bool branch_taken_0x2e20a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e20a4) {
            ctx->pc = 0x2E20A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E20A4u;
            // 0x2e20a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E20ACu;
            goto label_2e20ac;
        }
    }
    ctx->pc = 0x2E20ACu;
label_2e20ac:
    // 0x2e20ac: 0x1012  mflo        $v0
    ctx->pc = 0x2e20acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e20b0: 0x1810  mfhi        $v1
    ctx->pc = 0x2e20b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e20b4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2e20b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e20b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e20bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e20bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e20c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e20c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e20c4: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x2e20c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2e20c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e20c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e20cc: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e20ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e20d0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E20D0u;
    {
        const bool branch_taken_0x2e20d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e20d0) {
            ctx->pc = 0x2E20D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E20D0u;
            // 0x2e20d4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2104u;
            goto label_2e2104;
        }
    }
    ctx->pc = 0x2E20D8u;
    // 0x2e20d8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e20dc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2e20dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e20e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E20E0u;
    {
        const bool branch_taken_0x2e20e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20E0u;
        // 0x2e20e4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20e0) {
            ctx->pc = 0x2E2100u;
            goto label_2e2100;
        }
    }
    ctx->pc = 0x2E20E8u;
    // 0x2e20e8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e20e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e20ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E20ECu;
    {
        const bool branch_taken_0x2e20ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e20ec) {
            ctx->pc = 0x2E20F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E20ECu;
            // 0x2e20f0: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2104u;
            goto label_2e2104;
        }
    }
    ctx->pc = 0x2E20F4u;
    // 0x2e20f4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2e20f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2e20f8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e20fc: 0x0  nop
    ctx->pc = 0x2e20fcu;
    // NOP
label_2e2100:
    // 0x2e2100: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2e2100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2e2104:
    // 0x2e2104: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2104u;
    {
        const bool branch_taken_0x2e2104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2104) {
            ctx->pc = 0x2E2108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2104u;
            // 0x2e2108: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E210Cu;
            goto label_2e210c;
        }
    }
    ctx->pc = 0x2E210Cu;
label_2e210c:
    // 0x2e210c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2e210cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e2110: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2e2110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2e2114: 0x1012  mflo        $v0
    ctx->pc = 0x2e2114u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2118: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2118u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e211c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e211cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2120: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2124: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2128: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2128u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e212c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x2e212cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2e2130: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2e2130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e2134: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2e2134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e2138: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2138u;
    {
        const bool branch_taken_0x2e2138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2138u;
        // 0x2e213c: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2138) {
            ctx->pc = 0x2E2168u;
            goto label_2e2168;
        }
    }
    ctx->pc = 0x2E2140u;
    // 0x2e2140: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2e2140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2e2144: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2e2144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2148: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2148u;
    {
        const bool branch_taken_0x2e2148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2148u;
        // 0x2e214c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2148) {
            ctx->pc = 0x2E2164u;
            goto label_2e2164;
        }
    }
    ctx->pc = 0x2E2150u;
    // 0x2e2150: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2e2150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e2154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2154u;
    {
        const bool branch_taken_0x2e2154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2154u;
        // 0x2e2158: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2154) {
            ctx->pc = 0x2E2168u;
            goto label_2e2168;
        }
    }
    ctx->pc = 0x2E215Cu;
    // 0x2e215c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e215cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e2160: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2e2160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2e2164:
    // 0x2e2164: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x2e2164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_2e2168:
    // 0x2e2168: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2e2168u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e216c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e2170: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e2170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e2174: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2e2174u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2178: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2e2178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e217c: 0x480019  multu       $v0, $t0
    ctx->pc = 0x2e217cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e2180: 0x3810  mfhi        $a3
    ctx->pc = 0x2e2180u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2e2184: 0x3012  mflo        $a2
    ctx->pc = 0x2e2184u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2e2188: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x2e2188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e218c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E218Cu;
    {
        const bool branch_taken_0x2e218c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E218Cu;
        // 0x2e2190: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e218c) {
            ctx->pc = 0x2E21A8u;
            goto label_2e21a8;
        }
    }
    ctx->pc = 0x2E2194u;
    // 0x2e2194: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2194u;
    {
        const bool branch_taken_0x2e2194 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x2E2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2194u;
        // 0x2e2198: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2194) {
            ctx->pc = 0x2E21B8u;
            goto label_2e21b8;
        }
    }
    ctx->pc = 0x2E219Cu;
    // 0x2e219c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E219Cu;
    {
        const bool branch_taken_0x2e219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e219c) {
            ctx->pc = 0x2E21B8u;
            goto label_2e21b8;
        }
    }
    ctx->pc = 0x2E21A4u;
    // 0x2e21a4: 0x0  nop
    ctx->pc = 0x2e21a4u;
    // NOP
label_2e21a8:
    // 0x2e21a8: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x2e21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2e21ac: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x2e21acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e21b0: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x2e21b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e21b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e21b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e21b8:
    // 0x2e21b8: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x2E21B8u;
    {
        const bool branch_taken_0x2e21b8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21B8u;
        // 0x2e21bc: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21b8) {
            ctx->pc = 0x2E21F4u;
            goto label_2e21f4;
        }
    }
    ctx->pc = 0x2E21C0u;
    // 0x2e21c0: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x2e21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e21c4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2e21c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e21c8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x2e21c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e21cc: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x2e21ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e21d0: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x2e21d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e21d4: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x2e21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e21d8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2e21d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2e21dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e21dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e21e0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2e21e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e21e4: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x2e21e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2e21e8: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x2e21e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x2e21ec: 0x0  nop
    ctx->pc = 0x2e21ecu;
    // NOP
label_2e21f0:
    // 0x2e21f0: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x2e21f0u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
label_2e21f4:
    // 0x2e21f4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E21F4u;
    {
        const bool branch_taken_0x2e21f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21F4u;
        // 0x2e21f8: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21f4) {
            ctx->pc = 0x2E2250u;
            goto label_2e2250;
        }
    }
    ctx->pc = 0x2E21FCu;
    // 0x2e21fc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e21fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2200: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e2200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e2204: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x2e2204u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x2e2208: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2e2208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e220c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e220cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e2210: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e2210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e2214: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2214u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2218: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e2218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e221c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2e221cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2e2220: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e2220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e2224: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x2e2224u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x2e2228: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x2e2228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x2e222c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2e222cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e2230: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e2230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e2234: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e2234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e2238: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2e2238u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e223c: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x2e223cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x2e2240: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2e2240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2244: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2248: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x2e2248u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x2e224c: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x2e224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_2e2250:
    // 0x2e2250: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x2e2250u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2254: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e2254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2258: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2258u;
        // 0x2e225c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2260u;
}
