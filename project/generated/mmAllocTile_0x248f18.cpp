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

// Function: mmAllocTile
// Address: 0x248f18 - 0x248fa0
void mmAllocTile_0x248f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmAllocTile_0x248f18");
#endif

    switch (ctx->pc) {
        case 0x248f60u: goto label_248f60;
        default: break;
    }

    ctx->pc = 0x248f18u;

    // 0x248f18: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x248f18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f1c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x248f1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f20: 0x16a1818  mult        $v1, $t3, $t2
    ctx->pc = 0x248f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x248f24: 0x8f85b834  lw          $a1, -0x47CC($gp)
    ctx->pc = 0x248f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948916)));
    // 0x248f28: 0x8f82b830  lw          $v0, -0x47D0($gp)
    ctx->pc = 0x248f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
    // 0x248f2c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x248f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x248f30: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x248f30u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f34: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x248f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x248f38: 0x4d4821  addu        $t1, $v0, $t5
    ctx->pc = 0x248f38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x248f3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x248f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248f40: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x248f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x248f44: 0x25220074  addiu       $v0, $t1, 0x74
    ctx->pc = 0x248f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 116));
    // 0x248f48: 0x106282a  slt         $a1, $t0, $a2
    ctx->pc = 0x248f48u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x248f4c: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x248f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x248f50: 0x24630077  addiu       $v1, $v1, 0x77
    ctx->pc = 0x248f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 119));
    // 0x248f54: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x248F54u;
    {
        const bool branch_taken_0x248f54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F54u;
        // 0x248f58: 0x646024  and         $t4, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f54) {
            ctx->pc = 0x248F90u;
            goto label_248f90;
        }
    }
    ctx->pc = 0x248F5Cu;
    // 0x248f5c: 0x2527000c  addiu       $a3, $t1, 0xC
    ctx->pc = 0x248f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_248f60:
    // 0x248f60: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x248f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x248f64: 0x16a2818  mult        $a1, $t3, $t2
    ctx->pc = 0x248f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x248f68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x248f6c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x248f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x248f70: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x248f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x248f74: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x248f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x248f78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x248f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248f7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x248f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x248f80: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x248f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x248f84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x248f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x248f88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x248F88u;
    {
        const bool branch_taken_0x248f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F88u;
        // 0x248f8c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f88) {
            ctx->pc = 0x248F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248f60;
        }
    }
    ctx->pc = 0x248F90u;
label_248f90:
    // 0x248f90: 0x1ac2821  addu        $a1, $t5, $t4
    ctx->pc = 0x248f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x248f94: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x248f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f98: 0x3e00008  jr          $ra
    ctx->pc = 0x248F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F98u;
        // 0x248f9c: 0xaf85b834  sw          $a1, -0x47CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948916), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248FA0u;
}
