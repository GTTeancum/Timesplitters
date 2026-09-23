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

// Function: mmPushCursorPos
// Address: 0x24fd58 - 0x24fde4
void mmPushCursorPos_0x24fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmPushCursorPos_0x24fd58");
#endif

    ctx->pc = 0x24fd58u;

    // 0x24fd58: 0x8f86b870  lw          $a2, -0x4790($gp)
    ctx->pc = 0x24fd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948976)));
    // 0x24fd5c: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x24fd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x24fd60: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24FD60u;
    {
        const bool branch_taken_0x24fd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD60u;
        // 0x24fd64: 0x240c000c  addiu       $t4, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd60) {
            ctx->pc = 0x24FDDCu;
            goto label_24fddc;
        }
    }
    ctx->pc = 0x24FD68u;
    // 0x24fd68: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x24fd68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24fd6c: 0xcc1818  mult        $v1, $a2, $t4
    ctx->pc = 0x24fd6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24fd70: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x24fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x24fd74: 0x24494080  addiu       $t1, $v0, 0x4080
    ctx->pc = 0x24fd74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x24fd78: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x24fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x24fd7c: 0x252a0004  addiu       $t2, $t1, 0x4
    ctx->pc = 0x24fd7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x24fd80: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x24fd80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24fd84: 0x252b0008  addiu       $t3, $t1, 0x8
    ctx->pc = 0x24fd84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x24fd88: 0x8f85a1f4  lw          $a1, -0x5E0C($gp)
    ctx->pc = 0x24fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943220)));
    // 0x24fd8c: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x24fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x24fd90: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x24fd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x24fd94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x24fd98: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x24fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x24fd9c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x24fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x24fda0: 0x28e4000a  slti        $a0, $a3, 0xA
    ctx->pc = 0x24fda0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x24fda4: 0x8d020024  lw          $v0, 0x24($t0)
    ctx->pc = 0x24fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x24fda8: 0xaf87b870  sw          $a3, -0x4790($gp)
    ctx->pc = 0x24fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948976), GPR_U32(ctx, 7));
    // 0x24fdac: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24FDACu;
    {
        const bool branch_taken_0x24fdac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDACu;
        // 0x24fdb0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdac) {
            ctx->pc = 0x24FDDCu;
            goto label_24fddc;
        }
    }
    ctx->pc = 0x24FDB4u;
    // 0x24fdb4: 0xec1818  mult        $v1, $a3, $t4
    ctx->pc = 0x24fdb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24fdb8: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x24fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x24fdbc: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x24fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x24fdc0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x24fdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fdc4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x24fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x24fdc8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x24fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24fdcc: 0xad060020  sw          $a2, 0x20($t0)
    ctx->pc = 0x24fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 6));
    // 0x24fdd0: 0xaf84a1f4  sw          $a0, -0x5E0C($gp)
    ctx->pc = 0x24fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943220), GPR_U32(ctx, 4));
    // 0x24fdd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24fdd8: 0xad020024  sw          $v0, 0x24($t0)
    ctx->pc = 0x24fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 2));
label_24fddc:
    // 0x24fddc: 0x3e00008  jr          $ra
    ctx->pc = 0x24FDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FDE4u;
}
