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

// Function: vfiprintf
// Address: 0x2e6890 - 0x2e6908
void vfiprintf_0x2e6890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vfiprintf_0x2e6890");
#endif

    switch (ctx->pc) {
        case 0x2e68dcu: goto label_2e68dc;
        case 0x2e68f0u: goto label_2e68f0;
        default: break;
    }

    ctx->pc = 0x2e6890u;

    // 0x2e6890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e6890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e6894: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e6894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e6898: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e689c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e689cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e68a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e68a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e68a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e68a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e68a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68ac: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2e68acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e68b0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E68B0u;
    {
        const bool branch_taken_0x2e68b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68B0u;
        // 0x2e68b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68b0) {
            ctx->pc = 0x2E68C8u;
            goto label_2e68c8;
        }
    }
    ctx->pc = 0x2E68B8u;
    // 0x2e68b8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2e68b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2e68bc: 0x8c43330c  lw          $v1, 0x330C($v0)
    ctx->pc = 0x2e68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2e68c0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2e68c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2e68c4: 0x0  nop
    ctx->pc = 0x2e68c4u;
    // NOP
label_2e68c8:
    // 0x2e68c8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2e68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2e68cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E68CCu;
    {
        const bool branch_taken_0x2e68cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e68cc) {
            ctx->pc = 0x2E68D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E68CCu;
            // 0x2e68d0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E68E0u;
            goto label_2e68e0;
        }
    }
    ctx->pc = 0x2E68D4u;
    // 0x2e68d4: 0xc0b923c  jal         func_2E48F0
    ctx->pc = 0x2E68D4u;
    SET_GPR_U32(ctx, 31, 0x2E68DCu);
    ctx->pc = 0x2E68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68D4u;
    // 0x2e68d8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48F0u, 0x2E68D4u, 0x2E68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68DCu;
label_2e68dc:
    // 0x2e68dc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2e68dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2e68e0:
    // 0x2e68e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e68e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e68e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68e8: 0xc0b9a42  jal         func_2E6908
    ctx->pc = 0x2E68E8u;
    SET_GPR_U32(ctx, 31, 0x2E68F0u);
    ctx->pc = 0x2E68ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68E8u;
    // 0x2e68ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6908u, 0x2E68E8u, 0x2E68F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68F0u;
label_2e68f0:
    // 0x2e68f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e68f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e68f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e68f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e68f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e68f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e68fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e68fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6900: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6900u;
        // 0x2e6904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6908u;
}
