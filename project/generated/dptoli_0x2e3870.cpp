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

// Function: dptoli
// Address: 0x2e3870 - 0x2e3904
void dptoli_0x2e3870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoli_0x2e3870");
#endif

    switch (ctx->pc) {
        case 0x2e3888u: goto label_2e3888;
        case 0x2e38a0u: goto label_2e38a0;
        default: break;
    }

    ctx->pc = 0x2e3870u;

    // 0x2e3870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3874: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2e3874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2e3878: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e3878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e387c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e3880: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3880u;
    SET_GPR_U32(ctx, 31, 0x2E3888u);
    ctx->pc = 0x2E3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3880u;
    // 0x2e3884: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3880u, 0x2E3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3888u;
label_2e3888:
    // 0x2e3888: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e3888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e388c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2e388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2e3890: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3890u;
    {
        const bool branch_taken_0x2e3890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3890u;
        // 0x2e3894: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3890) {
            ctx->pc = 0x2E38A0u;
            goto label_2e38a0;
        }
    }
    ctx->pc = 0x2E3898u;
    // 0x2e3898: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3898u;
    {
        const bool branch_taken_0x2e3898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3898u;
        // 0x2e389c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3898) {
            ctx->pc = 0x2E38A8u;
            goto label_2e38a8;
        }
    }
    ctx->pc = 0x2E38A0u;
label_2e38a0:
    // 0x2e38a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E38A0u;
    {
        const bool branch_taken_0x2e38a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38A0u;
        // 0x2e38a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38a0) {
            ctx->pc = 0x2E38F8u;
            goto label_2e38f8;
        }
    }
    ctx->pc = 0x2E38A8u;
label_2e38a8:
    // 0x2e38a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E38A8u;
    {
        const bool branch_taken_0x2e38a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38A8u;
        // 0x2e38ac: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38a8) {
            ctx->pc = 0x2E38C0u;
            goto label_2e38c0;
        }
    }
    ctx->pc = 0x2E38B0u;
    // 0x2e38b0: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E38B0u;
    {
        const bool branch_taken_0x2e38b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38B0u;
        // 0x2e38b4: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38b0) {
            ctx->pc = 0x2E38A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e38a0;
        }
    }
    ctx->pc = 0x2E38B8u;
    // 0x2e38b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E38B8u;
    {
        const bool branch_taken_0x2e38b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38B8u;
        // 0x2e38bc: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38b8) {
            ctx->pc = 0x2E38D8u;
            goto label_2e38d8;
        }
    }
    ctx->pc = 0x2E38C0u;
label_2e38c0:
    // 0x2e38c0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2e38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e38c4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2e38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2e38c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e38c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e38cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2e38ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2e38d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E38D0u;
    {
        const bool branch_taken_0x2e38d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38D0u;
        // 0x2e38d4: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38d0) {
            ctx->pc = 0x2E38F8u;
            goto label_2e38f8;
        }
    }
    ctx->pc = 0x2E38D8u;
label_2e38d8:
    // 0x2e38d8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2e38d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e38dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2e38dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e38e0: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x2e38e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x2e38e4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2e38e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e38e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e38e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e38ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e38ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e38f0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x2e38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e38f4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2e38f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_2e38f8:
    // 0x2e38f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e38f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e38fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E38FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38FCu;
        // 0x2e3900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E38FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3904u;
}
