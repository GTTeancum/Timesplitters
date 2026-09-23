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

// Function: fptosi
// Address: 0x2e4478 - 0x2e4504
void fptosi_0x2e4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptosi_0x2e4478");
#endif

    switch (ctx->pc) {
        case 0x2e4490u: goto label_2e4490;
        case 0x2e44a8u: goto label_2e44a8;
        default: break;
    }

    ctx->pc = 0x2e4478u;

    // 0x2e4478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e447c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e4480: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e4480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e4484: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2e4484u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e4488: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E4488u;
    SET_GPR_U32(ctx, 31, 0x2E4490u);
    ctx->pc = 0x2E448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4488u;
    // 0x2e448c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E4488u, 0x2E4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4490u;
label_2e4490:
    // 0x2e4490: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e4490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4494: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2e4494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2e4498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4498u;
    {
        const bool branch_taken_0x2e4498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4498u;
        // 0x2e449c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4498) {
            ctx->pc = 0x2E44A8u;
            goto label_2e44a8;
        }
    }
    ctx->pc = 0x2E44A0u;
    // 0x2e44a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E44A0u;
    {
        const bool branch_taken_0x2e44a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44A0u;
        // 0x2e44a4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44a0) {
            ctx->pc = 0x2E44B0u;
            goto label_2e44b0;
        }
    }
    ctx->pc = 0x2E44A8u;
label_2e44a8:
    // 0x2e44a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E44A8u;
    {
        const bool branch_taken_0x2e44a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44A8u;
        // 0x2e44ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44a8) {
            ctx->pc = 0x2E44F8u;
            goto label_2e44f8;
        }
    }
    ctx->pc = 0x2E44B0u;
label_2e44b0:
    // 0x2e44b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E44B0u;
    {
        const bool branch_taken_0x2e44b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44B0u;
        // 0x2e44b4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44b0) {
            ctx->pc = 0x2E44C8u;
            goto label_2e44c8;
        }
    }
    ctx->pc = 0x2E44B8u;
    // 0x2e44b8: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E44B8u;
    {
        const bool branch_taken_0x2e44b8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44B8u;
        // 0x2e44bc: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44b8) {
            ctx->pc = 0x2E44A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e44a8;
        }
    }
    ctx->pc = 0x2E44C0u;
    // 0x2e44c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E44C0u;
    {
        const bool branch_taken_0x2e44c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44C0u;
        // 0x2e44c4: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44c0) {
            ctx->pc = 0x2E44E0u;
            goto label_2e44e0;
        }
    }
    ctx->pc = 0x2E44C8u;
label_2e44c8:
    // 0x2e44c8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2e44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e44cc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2e44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2e44d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e44d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e44d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2e44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2e44d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E44D8u;
    {
        const bool branch_taken_0x2e44d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44D8u;
        // 0x2e44dc: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44d8) {
            ctx->pc = 0x2E44F8u;
            goto label_2e44f8;
        }
    }
    ctx->pc = 0x2E44E0u;
label_2e44e0:
    // 0x2e44e0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2e44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e44e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2e44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e44e8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2e44e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e44ec: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x2e44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2e44f0: 0x22023  negu        $a0, $v0
    ctx->pc = 0x2e44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e44f4: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x2e44f4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2e44f8:
    // 0x2e44f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e44f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e44fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E44FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44FCu;
        // 0x2e4500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E44FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4504u;
}
