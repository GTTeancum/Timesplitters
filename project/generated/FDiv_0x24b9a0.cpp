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

// Function: FDiv
// Address: 0x24b9a0 - 0x24ba08
void FDiv_0x24b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FDiv_0x24b9a0");
#endif

    switch (ctx->pc) {
        case 0x24b9f4u: goto label_24b9f4;
        default: break;
    }

    ctx->pc = 0x24b9a0u;

    // 0x24b9a0: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B9A0u;
    {
        const bool branch_taken_0x24b9a0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9A0u;
        // 0x24b9a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9a0) {
            ctx->pc = 0x24B9ACu;
            goto label_24b9ac;
        }
    }
    ctx->pc = 0x24B9A8u;
    // 0x24b9a8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x24b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_24b9ac:
    // 0x24b9ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b9acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b9b0: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B9B0u;
    {
        const bool branch_taken_0x24b9b0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x24B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9B0u;
        // 0x24b9b4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9b0) {
            ctx->pc = 0x24B9BCu;
            goto label_24b9bc;
        }
    }
    ctx->pc = 0x24B9B8u;
    // 0x24b9b8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x24b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_24b9bc:
    // 0x24b9bc: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x24b9bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x24b9c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24b9c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24b9c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B9C4u;
    {
        const bool branch_taken_0x24b9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9C4u;
        // 0x24b9c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9c4) {
            ctx->pc = 0x24B9ECu;
            goto label_24b9ec;
        }
    }
    ctx->pc = 0x24B9CCu;
    // 0x24b9cc: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x24b9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x24b9d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24b9d4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x24b9d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24b9d8: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x24b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x24b9dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x24b9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x24b9e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24b9e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24B9E4u;
    {
        const bool branch_taken_0x24b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9E4u;
        // 0x24b9e8: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9e4) {
            ctx->pc = 0x24B9FCu;
            goto label_24b9fc;
        }
    }
    ctx->pc = 0x24B9ECu;
label_24b9ec:
    // 0x24b9ec: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x24B9ECu;
    SET_GPR_U32(ctx, 31, 0x24B9F4u);
    ctx->pc = 0x24B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9ECu;
    // 0x24b9f0: 0x42438  dsll        $a0, $a0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x24B9ECu, 0x24B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9F4u;
label_24b9f4:
    // 0x24b9f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b9f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24b9f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_24b9fc:
    // 0x24b9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ba00: 0x3e00008  jr          $ra
    ctx->pc = 0x24BA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA00u;
        // 0x24ba04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BA08u;
}
