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

// Function: enemyAddToPropList
// Address: 0x2c7e58 - 0x2c7ecc
void enemyAddToPropList_0x2c7e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAddToPropList_0x2c7e58");
#endif

    switch (ctx->pc) {
        case 0x2c7e9cu: goto label_2c7e9c;
        default: break;
    }

    ctx->pc = 0x2c7e58u;

    // 0x2c7e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7e5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c7e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c7e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c7e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7e68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c7e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c7e6c: 0x2442ff37  addiu       $v0, $v0, -0xC9
    ctx->pc = 0x2c7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967095));
    // 0x2c7e70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c7e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c7e74: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C7E74u;
    {
        const bool branch_taken_0x2c7e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E74u;
        // 0x2c7e78: 0x8f84b4f4  lw          $a0, -0x4B0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e74) {
            ctx->pc = 0x2C7EBCu;
            goto label_2c7ebc;
        }
    }
    ctx->pc = 0x2C7E7Cu;
    // 0x2c7e7c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2c7e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2c7e80: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2c7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c7e84: 0x26102488  addiu       $s0, $s0, 0x2488
    ctx->pc = 0x2c7e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9352));
    // 0x2c7e88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c7e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c7e8c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c7e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c7e90: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2c7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2c7e94: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x2C7E94u;
    SET_GPR_U32(ctx, 31, 0x2C7E9Cu);
    ctx->pc = 0x2C7E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E94u;
    // 0x2c7e98: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x2C7E94u, 0x2C7E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E9Cu;
label_2c7e9c:
    // 0x2c7e9c: 0x8f85b4f4  lw          $a1, -0x4B0C($gp)
    ctx->pc = 0x2c7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948084)));
    // 0x2c7ea0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2c7ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c7ea4: 0x28a4000a  slti        $a0, $a1, 0xA
    ctx->pc = 0x2c7ea4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c7ea8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2c7ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2c7eac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7EACu;
    {
        const bool branch_taken_0x2c7eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EACu;
        // 0x2c7eb0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7eac) {
            ctx->pc = 0x2C7EBCu;
            goto label_2c7ebc;
        }
    }
    ctx->pc = 0x2C7EB4u;
    // 0x2c7eb4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2c7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c7eb8: 0xaf82b4f4  sw          $v0, -0x4B0C($gp)
    ctx->pc = 0x2c7eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948084), GPR_U32(ctx, 2));
label_2c7ebc:
    // 0x2c7ebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EC4u;
        // 0x2c7ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7ECCu;
}
