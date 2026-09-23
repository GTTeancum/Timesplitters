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

// Function: _sbrk_r
// Address: 0x2e5770 - 0x2e57cc
void _sbrk_r_0x2e5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sbrk_r_0x2e5770");
#endif

    switch (ctx->pc) {
        case 0x2e5794u: goto label_2e5794;
        default: break;
    }

    ctx->pc = 0x2e5770u;

    // 0x2e5770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5774: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e5774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e5778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e577c: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2e577cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2e5780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e5784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e5788: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e5788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e578c: 0xc0b41d6  jal         func_2D0758
    ctx->pc = 0x2E578Cu;
    SET_GPR_U32(ctx, 31, 0x2E5794u);
    ctx->pc = 0x2E5790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E578Cu;
    // 0x2e5790: 0xae2001f8  sw          $zero, 0x1F8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0758u, 0x2E578Cu, 0x2E5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5794u;
label_2e5794:
    // 0x2e5794: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5798: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e5798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e579c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e57a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E57A0u;
    {
        const bool branch_taken_0x2e57a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57A0u;
        // 0x2e57a4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57a0) {
            ctx->pc = 0x2E57B8u;
            goto label_2e57b8;
        }
    }
    ctx->pc = 0x2E57A8u;
    // 0x2e57a8: 0x8e2201f8  lw          $v0, 0x1F8($s1)
    ctx->pc = 0x2e57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x2e57ac: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E57ACu;
    {
        const bool branch_taken_0x2e57ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e57ac) {
            ctx->pc = 0x2E57B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E57ACu;
            // 0x2e57b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E57B8u;
            goto label_2e57b8;
        }
    }
    ctx->pc = 0x2E57B4u;
    // 0x2e57b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e57b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e57b8:
    // 0x2e57b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e57b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e57bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e57c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e57c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e57c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E57C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E57C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57C4u;
        // 0x2e57c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E57C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E57CCu;
}
