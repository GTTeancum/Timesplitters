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

// Function: __swrite
// Address: 0x2e59a0 - 0x2e5a20
void ps2___swrite_0x2e59a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___swrite_0x2e59a0");
#endif

    switch (ctx->pc) {
        case 0x2e59e0u: goto label_2e59e0;
        case 0x2e5a00u: goto label_2e5a00;
        default: break;
    }

    ctx->pc = 0x2e59a0u;

    // 0x2e59a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e59a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e59a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e59a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e59a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e59a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e59ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e59acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e59b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e59b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e59b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e59b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e59b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59bc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2e59bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e59c0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2e59c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2e59c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E59C4u;
    {
        const bool branch_taken_0x2e59c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59C4u;
        // 0x2e59c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59c4) {
            ctx->pc = 0x2E59E0u;
            goto label_2e59e0;
        }
    }
    ctx->pc = 0x2E59CCu;
    // 0x2e59cc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2e59ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e59d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e59d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59d4: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2e59d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2e59d8: 0xc0baef4  jal         func_2EBBD0
    ctx->pc = 0x2E59D8u;
    SET_GPR_U32(ctx, 31, 0x2E59E0u);
    ctx->pc = 0x2E59DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59D8u;
    // 0x2e59dc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBBD0u, 0x2E59D8u, 0x2E59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59E0u;
label_2e59e0:
    // 0x2e59e0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2e59e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e59e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e59e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59e8: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2e59e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2e59ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e59ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59f0: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x2e59f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x2e59f4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2e59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e59f8: 0xc0ba698  jal         func_2E9A60
    ctx->pc = 0x2E59F8u;
    SET_GPR_U32(ctx, 31, 0x2E5A00u);
    ctx->pc = 0x2E59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59F8u;
    // 0x2e59fc: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9A60u, 0x2E59F8u, 0x2E5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A00u;
label_2e5a00:
    // 0x2e5a00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e5a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5a04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e5a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5a08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e5a08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e5a0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e5a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5a10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e5a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5a18: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A18u;
        // 0x2e5a1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5A20u;
}
