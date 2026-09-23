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

// Function: __fpcmp_parts_f
// Address: 0x2e4258 - 0x2e436c
void ps2___fpcmp_parts_f_0x2e4258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_f_0x2e4258");
#endif

    switch (ctx->pc) {
        case 0x2e42a0u: goto label_2e42a0;
        case 0x2e4310u: goto label_2e4310;
        case 0x2e433cu: goto label_2e433c;
        default: break;
    }

    ctx->pc = 0x2e4258u;

    // 0x2e4258: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2e4258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e425c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2e425cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e4260: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4260u;
    {
        const bool branch_taken_0x2e4260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4260) {
            ctx->pc = 0x2E4278u;
            goto label_2e4278;
        }
    }
    ctx->pc = 0x2E4268u;
    // 0x2e4268: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e4268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e426c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2e426cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e4270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4270u;
    {
        const bool branch_taken_0x2e4270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4270u;
        // 0x2e4274: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4270) {
            ctx->pc = 0x2E4280u;
            goto label_2e4280;
        }
    }
    ctx->pc = 0x2E4278u;
label_2e4278:
    // 0x2e4278: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4278u;
        // 0x2e427c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4280u;
label_2e4280:
    // 0x2e4280: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E4280u;
    {
        const bool branch_taken_0x2e4280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4280u;
        // 0x2e4284: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4280) {
            ctx->pc = 0x2E42B0u;
            goto label_2e42b0;
        }
    }
    ctx->pc = 0x2E4288u;
    // 0x2e4288: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4288u;
    {
        const bool branch_taken_0x2e4288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4288) {
            ctx->pc = 0x2E428Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4288u;
            // 0x2e428c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E42A0u;
            goto label_2e42a0;
        }
    }
    ctx->pc = 0x2E4290u;
    // 0x2e4290: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2e4290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e4294: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e4298: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4298u;
        // 0x2e429c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E42A0u;
label_2e42a0:
    // 0x2e42a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e42a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e42a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e42a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E42A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42A8u;
        // 0x2e42ac: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E42A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E42B0u;
label_2e42b0:
    // 0x2e42b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E42B0u;
    {
        const bool branch_taken_0x2e42b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e42b0) {
            ctx->pc = 0x2E42B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E42B0u;
            // 0x2e42b4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E42CCu;
            goto label_2e42cc;
        }
    }
    ctx->pc = 0x2E42B8u;
    // 0x2e42b8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2e42b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e42bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e42c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e42c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E42C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42C4u;
        // 0x2e42c8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E42C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E42CCu;
label_2e42cc:
    // 0x2e42cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E42CCu;
    {
        const bool branch_taken_0x2e42cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42CCu;
        // 0x2e42d0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42cc) {
            ctx->pc = 0x2E42F4u;
            goto label_2e42f4;
        }
    }
    ctx->pc = 0x2E42D4u;
    // 0x2e42d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E42D4u;
    {
        const bool branch_taken_0x2e42d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e42d4) {
            ctx->pc = 0x2E42D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E42D4u;
            // 0x2e42d8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E42E4u;
            goto label_2e42e4;
        }
    }
    ctx->pc = 0x2E42DCu;
    // 0x2e42dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E42DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42DCu;
        // 0x2e42e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E42DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E42E4u;
label_2e42e4:
    // 0x2e42e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e42e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e42ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E42ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42ECu;
        // 0x2e42f0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E42ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E42F4u;
label_2e42f4:
    // 0x2e42f4: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2E42F4u;
    {
        const bool branch_taken_0x2e42f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e42f4) {
            ctx->pc = 0x2E42F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E42F4u;
            // 0x2e42f8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E42A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e42a0;
        }
    }
    ctx->pc = 0x2E42FCu;
    // 0x2e42fc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2e42fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e4300: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e4304: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4304u;
    {
        const bool branch_taken_0x2e4304 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e4304) {
            ctx->pc = 0x2E4308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4304u;
            // 0x2e4308: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E431Cu;
            goto label_2e431c;
        }
    }
    ctx->pc = 0x2E430Cu;
    // 0x2e430c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4310:
    // 0x2e4310: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e4310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e4314: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4314u;
        // 0x2e4318: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E431Cu;
label_2e431c:
    // 0x2e431c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2e431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e4320: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2e4320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2e4324: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E4324u;
    {
        const bool branch_taken_0x2e4324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4324) {
            ctx->pc = 0x2E4328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4324u;
            // 0x2e4328: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4310;
        }
    }
    ctx->pc = 0x2E432Cu;
    // 0x2e432c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2e432cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4330: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4330u;
    {
        const bool branch_taken_0x2e4330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4330) {
            ctx->pc = 0x2E4334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4330u;
            // 0x2e4334: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4348u;
            goto label_2e4348;
        }
    }
    ctx->pc = 0x2E4338u;
    // 0x2e4338: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e4338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e433c:
    // 0x2e433c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4340: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4340u;
        // 0x2e4344: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4348u;
label_2e4348:
    // 0x2e4348: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2e4348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e434c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2e434cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e4350: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E4350u;
    {
        const bool branch_taken_0x2e4350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4350) {
            ctx->pc = 0x2E4354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4350u;
            // 0x2e4354: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4310;
        }
    }
    ctx->pc = 0x2E4358u;
    // 0x2e4358: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2e4358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e435c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E435Cu;
    {
        const bool branch_taken_0x2e435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E435Cu;
        // 0x2e4360: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e435c) {
            ctx->pc = 0x2E433Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e433c;
        }
    }
    ctx->pc = 0x2E4364u;
    // 0x2e4364: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4364u;
        // 0x2e4368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E436Cu;
}
