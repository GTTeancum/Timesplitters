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

// Function: __sread
// Address: 0x2e5938 - 0x2e599c
void ps2___sread_0x2e5938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sread_0x2e5938");
#endif

    switch (ctx->pc) {
        case 0x2e5960u: goto label_2e5960;
        default: break;
    }

    ctx->pc = 0x2e5938u;

    // 0x2e5938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e593c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2e593cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5944: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2e5944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e594c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e594cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5950: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e5950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5954: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2e5954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e5958: 0xc0bb3b0  jal         func_2ECEC0
    ctx->pc = 0x2E5958u;
    SET_GPR_U32(ctx, 31, 0x2E5960u);
    ctx->pc = 0x2E595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5958u;
    // 0x2e595c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECEC0u, 0x2E5958u, 0x2E5960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5960u;
label_2e5960:
    // 0x2e5960: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e5960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5964: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e5964u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e5968: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5968u;
    {
        const bool branch_taken_0x2e5968 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2e5968) {
            ctx->pc = 0x2E596Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5968u;
            // 0x2e596c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5980u;
            goto label_2e5980;
        }
    }
    ctx->pc = 0x2E5970u;
    // 0x2e5970: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2e5970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e5974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e5974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e5978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5978u;
    {
        const bool branch_taken_0x2e5978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5978u;
        // 0x2e597c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5978) {
            ctx->pc = 0x2E5988u;
            goto label_2e5988;
        }
    }
    ctx->pc = 0x2E5980u;
label_2e5980:
    // 0x2e5980: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x2e5980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x2e5984: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2e5984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2e5988:
    // 0x2e5988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e598c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e598cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5994: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5994u;
        // 0x2e5998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E599Cu;
}
