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

// Function: bulletGetBulletColour
// Address: 0x28d038 - 0x28d0fc
void bulletGetBulletColour_0x28d038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletGetBulletColour_0x28d038");
#endif

    switch (ctx->pc) {
        case 0x28d070u: goto label_28d070;
        default: break;
    }

    ctx->pc = 0x28d038u;

    // 0x28d038: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x28d03c: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x28d03cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x28d040: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x28D040u;
    {
        const bool branch_taken_0x28d040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D040u;
        // 0x28d044: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d040) {
            ctx->pc = 0x28D0ECu;
            goto label_28d0ec;
        }
    }
    ctx->pc = 0x28D048u;
    // 0x28d048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d04c: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x28d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x28d050: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d054: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28d054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d058: 0x800008  jr          $a0
    ctx->pc = 0x28D058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D060u: goto label_28d060;
            case 0x28D07Cu: goto label_28d07c;
            case 0x28D094u: goto label_28d094;
            case 0x28D0ACu: goto label_28d0ac;
            case 0x28D0C4u: goto label_28d0c4;
            case 0x28D0DCu: goto label_28d0dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D058u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D060u;
label_28d060:
    // 0x28d060: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28d060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28d064: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d068: 0xc7808aac  lwc1        $f0, -0x7554($gp)
    ctx->pc = 0x28d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d06c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x28d06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_28d070:
    // 0x28d070: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x28d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x28d074: 0x3e00008  jr          $ra
    ctx->pc = 0x28D074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D074u;
        // 0x28d078: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D07Cu;
label_28d07c:
    // 0x28d07c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28d07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28d080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d084: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x28d084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x28d088: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x28d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x28d08c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D08Cu;
        // 0x28d090: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D094u;
label_28d094:
    // 0x28d094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28d094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28d098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d09c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x28d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x28d0a0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x28d0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x28d0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0A4u;
        // 0x28d0a8: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D0ACu;
label_28d0ac:
    // 0x28d0ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28d0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28d0b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d0b4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28d0b8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x28d0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x28d0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x28D0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0BCu;
        // 0x28d0c0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D0C4u;
label_28d0c4:
    // 0x28d0c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28d0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28d0c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d0cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28d0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28d0d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d0d4: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x28D0D4u;
    {
        const bool branch_taken_0x28d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0D4u;
        // 0x28d0d8: 0xe4a10004  swc1        $f1, 0x4($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0d4) {
            ctx->pc = 0x28D070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d070;
        }
    }
    ctx->pc = 0x28D0DCu;
label_28d0dc:
    // 0x28d0dc: 0xc7818ab0  lwc1        $f1, -0x7550($gp)
    ctx->pc = 0x28d0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d0e0: 0xc7808ab4  lwc1        $f0, -0x754C($gp)
    ctx->pc = 0x28d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d0e4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x28D0E4u;
    {
        const bool branch_taken_0x28d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0E4u;
        // 0x28d0e8: 0xe4a10004  swc1        $f1, 0x4($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0e4) {
            ctx->pc = 0x28D070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d070;
        }
    }
    ctx->pc = 0x28D0ECu;
label_28d0ec:
    // 0x28d0ec: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x28d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x28d0f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28d0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0F4u;
        // 0x28d0f8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D0FCu;
}
