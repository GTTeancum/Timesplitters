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

// Function: StatsGet
// Address: 0x223ee8 - 0x223f74
void StatsGet_0x223ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsGet_0x223ee8");
#endif

    ctx->pc = 0x223ee8u;

    // 0x223ee8: 0x28a2000e  slti        $v0, $a1, 0xE
    ctx->pc = 0x223ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x223eec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x223EECu;
    {
        const bool branch_taken_0x223eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EECu;
        // 0x223ef0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223eec) {
            ctx->pc = 0x223F68u;
            goto label_223f68;
        }
    }
    ctx->pc = 0x223EF4u;
    // 0x223ef4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x223ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x223ef8: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x223ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x223efc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x223efcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x223f00: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x223f04: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x223f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223f08: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x223F08u;
    {
        const bool branch_taken_0x223f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F08u;
        // 0x223f0c: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f08) {
            ctx->pc = 0x223F40u;
            goto label_223f40;
        }
    }
    ctx->pc = 0x223F10u;
    // 0x223f10: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x223f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x223f14: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x223f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223f18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223F18u;
    {
        const bool branch_taken_0x223f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F18u;
        // 0x223f1c: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f18) {
            ctx->pc = 0x223F40u;
            goto label_223f40;
        }
    }
    ctx->pc = 0x223F20u;
    // 0x223f20: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x223f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223f24: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223f2c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x223f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x223f30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223F30u;
    {
        const bool branch_taken_0x223f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F30u;
        // 0x223f34: 0x24040558  addiu       $a0, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f30) {
            ctx->pc = 0x223F48u;
            goto label_223f48;
        }
    }
    ctx->pc = 0x223F38u;
    // 0x223f38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x223F38u;
    {
        const bool branch_taken_0x223f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223f38) {
            ctx->pc = 0x223F68u;
            goto label_223f68;
        }
    }
    ctx->pc = 0x223F40u;
label_223f40:
    // 0x223f40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223F40u;
    {
        const bool branch_taken_0x223f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F40u;
        // 0x223f44: 0x24040558  addiu       $a0, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f40) {
            ctx->pc = 0x223F68u;
            goto label_223f68;
        }
    }
    ctx->pc = 0x223F48u;
label_223f48:
    // 0x223f48: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x223f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x223f4c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x223f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x223f50: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223f54: 0x2442e6a8  addiu       $v0, $v0, -0x1958
    ctx->pc = 0x223f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
    // 0x223f58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223f5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223f60: 0x3e00008  jr          $ra
    ctx->pc = 0x223F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F60u;
        // 0x223f64: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223F68u;
label_223f68:
    // 0x223f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x223F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223F74u;
}
