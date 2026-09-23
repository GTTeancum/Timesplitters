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

// Function: dptoul
// Address: 0x2e3908 - 0x2e39a8
void dptoul_0x2e3908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoul_0x2e3908");
#endif

    switch (ctx->pc) {
        case 0x2e3920u: goto label_2e3920;
        case 0x2e3938u: goto label_2e3938;
        default: break;
    }

    ctx->pc = 0x2e3908u;

    // 0x2e3908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e390c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2e390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2e3910: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e3910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e3914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e3918: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3918u;
    SET_GPR_U32(ctx, 31, 0x2E3920u);
    ctx->pc = 0x2E391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3918u;
    // 0x2e391c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3918u, 0x2E3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3920u;
label_2e3920:
    // 0x2e3920: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e3920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3924: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2e3924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2e3928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3928u;
    {
        const bool branch_taken_0x2e3928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3928u;
        // 0x2e392c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3928) {
            ctx->pc = 0x2E3938u;
            goto label_2e3938;
        }
    }
    ctx->pc = 0x2E3930u;
    // 0x2e3930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3930u;
    {
        const bool branch_taken_0x2e3930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3930u;
        // 0x2e3934: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3930) {
            ctx->pc = 0x2E3940u;
            goto label_2e3940;
        }
    }
    ctx->pc = 0x2E3938u;
label_2e3938:
    // 0x2e3938: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E3938u;
    {
        const bool branch_taken_0x2e3938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3938u;
        // 0x2e393c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3938) {
            ctx->pc = 0x2E399Cu;
            goto label_2e399c;
        }
    }
    ctx->pc = 0x2E3940u;
label_2e3940:
    // 0x2e3940: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E3940u;
    {
        const bool branch_taken_0x2e3940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3940u;
        // 0x2e3944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3940) {
            ctx->pc = 0x2E399Cu;
            goto label_2e399c;
        }
    }
    ctx->pc = 0x2E3948u;
    // 0x2e3948: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2e3948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2e394c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E394Cu;
    {
        const bool branch_taken_0x2e394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E394Cu;
        // 0x2e3950: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e394c) {
            ctx->pc = 0x2E3964u;
            goto label_2e3964;
        }
    }
    ctx->pc = 0x2E3954u;
    // 0x2e3954: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E3954u;
    {
        const bool branch_taken_0x2e3954 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3954u;
        // 0x2e3958: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3954) {
            ctx->pc = 0x2E3938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3938;
        }
    }
    ctx->pc = 0x2E395Cu;
    // 0x2e395c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E395Cu;
    {
        const bool branch_taken_0x2e395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e395c) {
            ctx->pc = 0x2E3960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E395Cu;
            // 0x2e3960: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3970u;
            goto label_2e3970;
        }
    }
    ctx->pc = 0x2E3964u;
label_2e3964:
    // 0x2e3964: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e3964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e3968: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E3968u;
    {
        const bool branch_taken_0x2e3968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3968u;
        // 0x2e396c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3968) {
            ctx->pc = 0x2E399Cu;
            goto label_2e399c;
        }
    }
    ctx->pc = 0x2E3970u;
label_2e3970:
    // 0x2e3970: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3970u;
    {
        const bool branch_taken_0x2e3970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3970u;
        // 0x2e3974: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3970) {
            ctx->pc = 0x2E3988u;
            goto label_2e3988;
        }
    }
    ctx->pc = 0x2E3978u;
    // 0x2e3978: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2e3978u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e397c: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x2e397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x2e3980: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3980u;
    {
        const bool branch_taken_0x2e3980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3980u;
        // 0x2e3984: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3980) {
            ctx->pc = 0x2E3994u;
            goto label_2e3994;
        }
    }
    ctx->pc = 0x2E3988u;
label_2e3988:
    // 0x2e3988: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2e3988u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e398c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2e398cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e3990: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x2e3990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_2e3994:
    // 0x2e3994: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e3994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e3998: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e3998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2e399c:
    // 0x2e399c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e399cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e39a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E39A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39A0u;
        // 0x2e39a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E39A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E39A8u;
}
