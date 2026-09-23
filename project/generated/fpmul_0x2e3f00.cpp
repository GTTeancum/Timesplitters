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

// Function: fpmul
// Address: 0x2e3f00 - 0x2e40f4
void fpmul_0x2e3f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpmul_0x2e3f00");
#endif

    switch (ctx->pc) {
        case 0x2e3f20u: goto label_2e3f20;
        case 0x2e3f30u: goto label_2e3f30;
        case 0x2e4038u: goto label_2e4038;
        case 0x2e4080u: goto label_2e4080;
        case 0x2e40e4u: goto label_2e40e4;
        default: break;
    }

    ctx->pc = 0x2e3f00u;

    // 0x2e3f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e3f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e3f04: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e3f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e3f08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3f0c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e3f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e3f10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e3f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f14: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x2e3f14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e3f18: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E3F18u;
    SET_GPR_U32(ctx, 31, 0x2E3F20u);
    ctx->pc = 0x2E3F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F18u;
    // 0x2e3f1c: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E3F18u, 0x2E3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F20u;
label_2e3f20:
    // 0x2e3f20: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e3f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e3f24: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x2e3f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2e3f28: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E3F28u;
    SET_GPR_U32(ctx, 31, 0x2E3F30u);
    ctx->pc = 0x2E3F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F28u;
    // 0x2e3f2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E3F28u, 0x2E3F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F30u;
label_2e3f30:
    // 0x2e3f30: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2e3f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3f34: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2e3f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3f38: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E3F38u;
    {
        const bool branch_taken_0x2e3f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F38u;
        // 0x2e3f3c: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f38) {
            ctx->pc = 0x2E3F94u;
            goto label_2e3f94;
        }
    }
    ctx->pc = 0x2E3F40u;
    // 0x2e3f40: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3f44: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2e3f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3f48: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E3F48u;
    {
        const bool branch_taken_0x2e3f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3f48) {
            ctx->pc = 0x2E3F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3F48u;
            // 0x2e3f4c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3FBCu;
            goto label_2e3fbc;
        }
    }
    ctx->pc = 0x2E3F50u;
    // 0x2e3f50: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x2e3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x2e3f54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E3F54u;
    {
        const bool branch_taken_0x2e3f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F54u;
        // 0x2e3f58: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f54) {
            ctx->pc = 0x2E3F70u;
            goto label_2e3f70;
        }
    }
    ctx->pc = 0x2E3F5Cu;
    // 0x2e3f5c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2e3f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2e3f60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3F60u;
    {
        const bool branch_taken_0x2e3f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F60u;
        // 0x2e3f64: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f60) {
            ctx->pc = 0x2E3F80u;
            goto label_2e3f80;
        }
    }
    ctx->pc = 0x2E3F68u;
    // 0x2e3f68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E3F68u;
    {
        const bool branch_taken_0x2e3f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F68u;
        // 0x2e3f6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f68) {
            ctx->pc = 0x2E3F9Cu;
            goto label_2e3f9c;
        }
    }
    ctx->pc = 0x2E3F70u;
label_2e3f70:
    // 0x2e3f70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E3F70u;
    {
        const bool branch_taken_0x2e3f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F70u;
        // 0x2e3f74: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f70) {
            ctx->pc = 0x2E3F8Cu;
            goto label_2e3f8c;
        }
    }
    ctx->pc = 0x2E3F78u;
    // 0x2e3f78: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E3F78u;
    {
        const bool branch_taken_0x2e3f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F78u;
        // 0x2e3f7c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f78) {
            ctx->pc = 0x2E3FBCu;
            goto label_2e3fbc;
        }
    }
    ctx->pc = 0x2E3F80u;
label_2e3f80:
    // 0x2e3f80: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2e3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2e3f84: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2E3F84u;
    {
        const bool branch_taken_0x2e3f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F84u;
        // 0x2e3f88: 0x24445380  addiu       $a0, $v0, 0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f84) {
            ctx->pc = 0x2E40DCu;
            goto label_2e40dc;
        }
    }
    ctx->pc = 0x2E3F8Cu;
label_2e3f8c:
    // 0x2e3f8c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3F8Cu;
    {
        const bool branch_taken_0x2e3f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F8Cu;
        // 0x2e3f90: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f8c) {
            ctx->pc = 0x2E3FB0u;
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E3F94u;
label_2e3f94:
    // 0x2e3f94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e3f98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e3f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e3f9c:
    // 0x2e3f9c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e3f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e3fa0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e3fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e3fa4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e3fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e3fa8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2E3FA8u;
    {
        const bool branch_taken_0x2e3fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FA8u;
        // 0x2e3fac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fa8) {
            ctx->pc = 0x2E40DCu;
            goto label_2e40dc;
        }
    }
    ctx->pc = 0x2E3FB0u;
label_2e3fb0:
    // 0x2e3fb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3FB0u;
    {
        const bool branch_taken_0x2e3fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FB0u;
        // 0x2e3fb4: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fb0) {
            ctx->pc = 0x2E3FD4u;
            goto label_2e3fd4;
        }
    }
    ctx->pc = 0x2E3FB8u;
    // 0x2e3fb8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2e3fbc:
    // 0x2e3fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3fc0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e3fc4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e3fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e3fc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e3fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e3fcc: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2E3FCCu;
    {
        const bool branch_taken_0x2e3fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FCCu;
        // 0x2e3fd0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fcc) {
            ctx->pc = 0x2E40DCu;
            goto label_2e40dc;
        }
    }
    ctx->pc = 0x2E3FD4u;
label_2e3fd4:
    // 0x2e3fd4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2e3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2e3fd8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3fdc: 0x820019  multu       $a0, $v0
    ctx->pc = 0x2e3fdcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e3fe0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x2e3fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e3fe4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e3fe8: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x2e3fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x2e3fec: 0x2812  mflo        $a1
    ctx->pc = 0x2e3fecu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2e3ff0: 0x2010  mfhi        $a0
    ctx->pc = 0x2e3ff0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2e3ff4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2e3ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e3ff8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e3ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e3ffc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2e3ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2e4000: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e4000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e4004: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e4004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2e4008: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2e4008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2e400c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2e400cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4010: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e4010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e4014: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2e4014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2e4018: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2e4018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e401c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2e401cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2e4020: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2e4020u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e4024: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E4024u;
    {
        const bool branch_taken_0x2e4024 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2E4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4024u;
        // 0x2e4028: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4024) {
            ctx->pc = 0x2E4058u;
            goto label_2e4058;
        }
    }
    ctx->pc = 0x2E402Cu;
    // 0x2e402c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2e402cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2e4030: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e4030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e4034: 0x0  nop
    ctx->pc = 0x2e4034u;
    // NOP
label_2e4038:
    // 0x2e4038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4038u;
    {
        const bool branch_taken_0x2e4038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4038u;
        // 0x2e403c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4038) {
            ctx->pc = 0x2E4048u;
            goto label_2e4048;
        }
    }
    ctx->pc = 0x2E4040u;
    // 0x2e4040: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2e4040u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2e4044: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2e4044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2e4048:
    // 0x2e4048: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x2e4048u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e404c: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E404Cu;
    {
        const bool branch_taken_0x2e404c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E404Cu;
        // 0x2e4050: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e404c) {
            ctx->pc = 0x2E4038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4038;
        }
    }
    ctx->pc = 0x2E4054u;
    // 0x2e4054: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2e4054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_2e4058:
    // 0x2e4058: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2e4058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2e405c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e4060: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2e4060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e4064: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E4064u;
    {
        const bool branch_taken_0x2e4064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4064u;
        // 0x2e4068: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4064) {
            ctx->pc = 0x2E40A8u;
            goto label_2e40a8;
        }
    }
    ctx->pc = 0x2E406Cu;
    // 0x2e406c: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x2e406cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x2e4070: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2e4070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4074: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x2e4074u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x2e4078: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2e4078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2e407c: 0x0  nop
    ctx->pc = 0x2e407cu;
    // NOP
label_2e4080:
    // 0x2e4080: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2e4080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e4084: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x2e4084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x2e4088: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x2e4088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2e408c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e408cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e4090: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2e4090u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2e4094: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x2e4094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e4098: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E4098u;
    {
        const bool branch_taken_0x2e4098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4098u;
        // 0x2e409c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4098) {
            ctx->pc = 0x2E4080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4080;
        }
    }
    ctx->pc = 0x2E40A0u;
    // 0x2e40a0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x2e40a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x2e40a4: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x2e40a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_2e40a8:
    // 0x2e40a8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2e40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e40ac: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E40ACu;
    {
        const bool branch_taken_0x2e40ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e40ac) {
            ctx->pc = 0x2E40B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E40ACu;
            // 0x2e40b0: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E40D0u;
            goto label_2e40d0;
        }
    }
    ctx->pc = 0x2E40B4u;
    // 0x2e40b4: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x2e40b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x2e40b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E40B8u;
    {
        const bool branch_taken_0x2e40b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40B8u;
        // 0x2e40bc: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40b8) {
            ctx->pc = 0x2E40C8u;
            goto label_2e40c8;
        }
    }
    ctx->pc = 0x2E40C0u;
    // 0x2e40c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E40C0u;
    {
        const bool branch_taken_0x2e40c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40C0u;
        // 0x2e40c4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40c0) {
            ctx->pc = 0x2E40CCu;
            goto label_2e40cc;
        }
    }
    ctx->pc = 0x2E40C8u;
label_2e40c8:
    // 0x2e40c8: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x2e40c8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_2e40cc:
    // 0x2e40cc: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x2e40ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_2e40d0:
    // 0x2e40d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e40d4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2e40d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2e40d8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2e40d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2e40dc:
    // 0x2e40dc: 0xc0b8e9a  jal         func_2E3A68
    ctx->pc = 0x2E40DCu;
    SET_GPR_U32(ctx, 31, 0x2E40E4u);
    ctx->pc = 0x2E3A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A68u, 0x2E40DCu, 0x2E40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40E4u;
label_2e40e4:
    // 0x2e40e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e40e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e40e8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e40e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e40ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E40ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40ECu;
        // 0x2e40f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E40ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E40F4u;
}
