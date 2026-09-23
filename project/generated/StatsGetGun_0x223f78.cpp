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

// Function: StatsGetGun
// Address: 0x223f78 - 0x22401c
void StatsGetGun_0x223f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsGetGun_0x223f78");
#endif

    ctx->pc = 0x223f78u;

    // 0x223f78: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x223f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f7c: 0x28e2000e  slti        $v0, $a3, 0xE
    ctx->pc = 0x223f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x223f80: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x223F80u;
    {
        const bool branch_taken_0x223f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F80u;
        // 0x223f84: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f80) {
            ctx->pc = 0x224010u;
            goto label_224010;
        }
    }
    ctx->pc = 0x223F88u;
    // 0x223f88: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x223f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x223f8c: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x223f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x223f90: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x223f90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x223f94: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x223f98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x223f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223f9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x223F9Cu;
    {
        const bool branch_taken_0x223f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F9Cu;
        // 0x223fa0: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f9c) {
            ctx->pc = 0x223FD4u;
            goto label_223fd4;
        }
    }
    ctx->pc = 0x223FA4u;
    // 0x223fa4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x223fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x223fa8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x223fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223fac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223FACu;
    {
        const bool branch_taken_0x223fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FACu;
        // 0x223fb0: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fac) {
            ctx->pc = 0x223FD4u;
            goto label_223fd4;
        }
    }
    ctx->pc = 0x223FB4u;
    // 0x223fb4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x223fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223fb8: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223fbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223fc0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x223fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x223fc4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223FC4u;
    {
        const bool branch_taken_0x223fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FC4u;
        // 0x223fc8: 0x28c20021  slti        $v0, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fc4) {
            ctx->pc = 0x223FDCu;
            goto label_223fdc;
        }
    }
    ctx->pc = 0x223FCCu;
    // 0x223fcc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x223FCCu;
    {
        const bool branch_taken_0x223fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223fcc) {
            ctx->pc = 0x224010u;
            goto label_224010;
        }
    }
    ctx->pc = 0x223FD4u;
label_223fd4:
    // 0x223fd4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x223FD4u;
    {
        const bool branch_taken_0x223fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FD4u;
        // 0x223fd8: 0x28c20021  slti        $v0, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fd4) {
            ctx->pc = 0x224010u;
            goto label_224010;
        }
    }
    ctx->pc = 0x223FDCu;
label_223fdc:
    // 0x223fdc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x223FDCu;
    {
        const bool branch_taken_0x223fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FDCu;
        // 0x223fe0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fdc) {
            ctx->pc = 0x224010u;
            goto label_224010;
        }
    }
    ctx->pc = 0x223FE4u;
    // 0x223fe4: 0x24050558  addiu       $a1, $zero, 0x558
    ctx->pc = 0x223fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x223fe8: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x223fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x223fec: 0x70e52818  mult1       $a1, $a3, $a1
    ctx->pc = 0x223fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x223ff0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x223ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x223ff4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x223ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x223ff8: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x223ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x223ffc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x223ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224000: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x224000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x224004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224008: 0x3e00008  jr          $ra
    ctx->pc = 0x224008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224008u;
        // 0x22400c: 0xc4600114  lwc1        $f0, 0x114($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224010u;
label_224010:
    // 0x224010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224014: 0x3e00008  jr          $ra
    ctx->pc = 0x224014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22401Cu;
}
