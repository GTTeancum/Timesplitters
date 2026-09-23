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

// Function: pickupGetExtraHeight
// Address: 0x273038 - 0x2730e0
void pickupGetExtraHeight_0x273038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pickupGetExtraHeight_0x273038");
#endif

    ctx->pc = 0x273038u;

    // 0x273038: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x273038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27303c: 0x24c7feaa  addiu       $a3, $a2, -0x156
    ctx->pc = 0x27303cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966954));
    // 0x273040: 0x2ce2000b  sltiu       $v0, $a3, 0xB
    ctx->pc = 0x273040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x273044: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x273044u;
    {
        const bool branch_taken_0x273044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273044u;
        // 0x273048: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273044) {
            ctx->pc = 0x273068u;
            goto label_273068;
        }
    }
    ctx->pc = 0x27304Cu;
    // 0x27304c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x27304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x273050: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x273050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x273054: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273054u;
    {
        const bool branch_taken_0x273054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x273058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273054u;
        // 0x273058: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273054) {
            ctx->pc = 0x27306Cu;
            goto label_27306c;
        }
    }
    ctx->pc = 0x27305Cu;
    // 0x27305c: 0xc7808580  lwc1        $f0, -0x7A80($gp)
    ctx->pc = 0x27305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273060: 0x3e00008  jr          $ra
    ctx->pc = 0x273060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273068u;
label_273068:
    // 0x273068: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x273068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27306c:
    // 0x27306c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27306Cu;
    {
        const bool branch_taken_0x27306c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x273070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27306Cu;
        // 0x273070: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27306c) {
            ctx->pc = 0x273080u;
            goto label_273080;
        }
    }
    ctx->pc = 0x273074u;
    // 0x273074: 0xc7808584  lwc1        $f0, -0x7A7C($gp)
    ctx->pc = 0x273074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273078: 0x3e00008  jr          $ra
    ctx->pc = 0x273078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273080u;
label_273080:
    // 0x273080: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x273080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x273084: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x273084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x273088: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273088u;
    {
        const bool branch_taken_0x273088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x27308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273088u;
        // 0x27308c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273088) {
            ctx->pc = 0x27309Cu;
            goto label_27309c;
        }
    }
    ctx->pc = 0x273090u;
    // 0x273090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273094: 0x3e00008  jr          $ra
    ctx->pc = 0x273094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27309Cu;
label_27309c:
    // 0x27309c: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27309Cu;
    {
        const bool branch_taken_0x27309c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2730A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27309Cu;
        // 0x2730a0: 0x2ce2000b  sltiu       $v0, $a3, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27309c) {
            ctx->pc = 0x2730D4u;
            goto label_2730d4;
        }
    }
    ctx->pc = 0x2730A4u;
    // 0x2730a4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2730A4u;
    {
        const bool branch_taken_0x2730a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2730A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730A4u;
        // 0x2730a8: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730a4) {
            ctx->pc = 0x2730D4u;
            goto label_2730d4;
        }
    }
    ctx->pc = 0x2730ACu;
    // 0x2730ac: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2730ACu;
    {
        const bool branch_taken_0x2730ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2730B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730ACu;
        // 0x2730b0: 0x2402017d  addiu       $v0, $zero, 0x17D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730ac) {
            ctx->pc = 0x2730C4u;
            goto label_2730c4;
        }
    }
    ctx->pc = 0x2730B4u;
    // 0x2730b4: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2730B4u;
    {
        const bool branch_taken_0x2730b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2730B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730B4u;
        // 0x2730b8: 0x2402016c  addiu       $v0, $zero, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730b4) {
            ctx->pc = 0x2730C4u;
            goto label_2730c4;
        }
    }
    ctx->pc = 0x2730BCu;
    // 0x2730bc: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2730BCu;
    {
        const bool branch_taken_0x2730bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2730bc) {
            ctx->pc = 0x2730CCu;
            goto label_2730cc;
        }
    }
    ctx->pc = 0x2730C4u;
label_2730c4:
    // 0x2730c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2730C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2730C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730C4u;
        // 0x2730c8: 0xc7808588  lwc1        $f0, -0x7A78($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2730C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2730CCu;
label_2730cc:
    // 0x2730cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2730CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2730D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730CCu;
        // 0x2730d0: 0xc780858c  lwc1        $f0, -0x7A74($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2730CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2730D4u;
label_2730d4:
    // 0x2730d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2730d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2730d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2730D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2730D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2730E0u;
}
