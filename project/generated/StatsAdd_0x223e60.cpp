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

// Function: StatsAdd
// Address: 0x223e60 - 0x223ee8
void StatsAdd_0x223e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsAdd_0x223e60");
#endif

    switch (ctx->pc) {
        case 0x223eb0u: goto label_223eb0;
        default: break;
    }

    ctx->pc = 0x223e60u;

    // 0x223e60: 0x28a2000e  slti        $v0, $a1, 0xE
    ctx->pc = 0x223e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x223e64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x223E64u;
    {
        const bool branch_taken_0x223e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E64u;
        // 0x223e68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e64) {
            ctx->pc = 0x223EB0u;
            goto label_223eb0;
        }
    }
    ctx->pc = 0x223E6Cu;
    // 0x223e6c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x223e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x223e70: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x223e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x223e74: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x223e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x223e78: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x223e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x223e7c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x223e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223e80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x223E80u;
    {
        const bool branch_taken_0x223e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E80u;
        // 0x223e84: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e80) {
            ctx->pc = 0x223EB8u;
            goto label_223eb8;
        }
    }
    ctx->pc = 0x223E88u;
    // 0x223e88: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x223e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x223e8c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x223e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x223e90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223E90u;
    {
        const bool branch_taken_0x223e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E90u;
        // 0x223e94: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e90) {
            ctx->pc = 0x223EB8u;
            goto label_223eb8;
        }
    }
    ctx->pc = 0x223E98u;
    // 0x223e98: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x223e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x223e9c: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x223e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x223ea0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223ea4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x223ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x223ea8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223EA8u;
    {
        const bool branch_taken_0x223ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EA8u;
        // 0x223eac: 0x24040558  addiu       $a0, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ea8) {
            ctx->pc = 0x223EC0u;
            goto label_223ec0;
        }
    }
    ctx->pc = 0x223EB0u;
label_223eb0:
    // 0x223eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x223EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223EB8u;
label_223eb8:
    // 0x223eb8: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x223EB8u;
    {
        const bool branch_taken_0x223eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EB8u;
        // 0x223ebc: 0x24040558  addiu       $a0, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223eb8) {
            ctx->pc = 0x223EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223eb0;
        }
    }
    ctx->pc = 0x223EC0u;
label_223ec0:
    // 0x223ec0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x223ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x223ec4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x223ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x223ec8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223ecc: 0x2442e6a8  addiu       $v0, $v0, -0x1958
    ctx->pc = 0x223eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
    // 0x223ed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223ed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223ed8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x223ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223edc: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x223edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x223ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x223EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EE0u;
        // 0x223ee4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223EE8u;
}
