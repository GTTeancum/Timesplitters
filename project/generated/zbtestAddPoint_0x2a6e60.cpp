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

// Function: zbtestAddPoint
// Address: 0x2a6e60 - 0x2a6ef4
void zbtestAddPoint_0x2a6e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestAddPoint_0x2a6e60");
#endif

    ctx->pc = 0x2a6e60u;

    // 0x2a6e60: 0x8f8bb980  lw          $t3, -0x4680($gp)
    ctx->pc = 0x2a6e60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949248)));
    // 0x2a6e64: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x2a6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2a6e68: 0x1036018  mult        $t4, $t0, $v1
    ctx->pc = 0x2a6e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2a6e6c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2a6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2a6e70: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x2a6e70u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2a6e74: 0x2442a0a0  addiu       $v0, $v0, -0x5F60
    ctx->pc = 0x2a6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x2a6e78: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2a6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2a6e7c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a6e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6e84: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x2a6e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x2a6e88: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x2a6e88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e8c: 0x28820048  slti        $v0, $a0, 0x48
    ctx->pc = 0x2a6e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)72) ? 1 : 0);
    // 0x2a6e90: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A6E90u;
    {
        const bool branch_taken_0x2a6e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E90u;
        // 0x2a6e94: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e90) {
            ctx->pc = 0x2A6EECu;
            goto label_2a6eec;
        }
    }
    ctx->pc = 0x2A6E98u;
    // 0x2a6e98: 0x8f85b320  lw          $a1, -0x4CE0($gp)
    ctx->pc = 0x2a6e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947616)));
    // 0x2a6e9c: 0x28a20009  slti        $v0, $a1, 0x9
    ctx->pc = 0x2a6e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a6ea0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A6EA0u;
    {
        const bool branch_taken_0x2a6ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EA0u;
        // 0x2a6ea4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ea0) {
            ctx->pc = 0x2A6EECu;
            goto label_2a6eec;
        }
    }
    ctx->pc = 0x2A6EA8u;
    // 0x2a6ea8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a6eac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a6eb0: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x2a6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x2a6eb4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2a6eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a6eb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a6ebc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2a6ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a6ec0: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x2a6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2a6ec4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6ec8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a6ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a6ecc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a6ed0: 0xac4a0014  sw          $t2, 0x14($v0)
    ctx->pc = 0x2a6ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 10));
    // 0x2a6ed4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2a6ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2a6ed8: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x2a6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x2a6edc: 0xac4c0004  sw          $t4, 0x4($v0)
    ctx->pc = 0x2a6edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 12));
    // 0x2a6ee0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2a6ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x2a6ee4: 0xa4490010  sh          $t1, 0x10($v0)
    ctx->pc = 0x2a6ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 9));
    // 0x2a6ee8: 0xaf85b320  sw          $a1, -0x4CE0($gp)
    ctx->pc = 0x2a6ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947616), GPR_U32(ctx, 5));
label_2a6eec:
    // 0x2a6eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6EF4u;
}
