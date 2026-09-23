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

// Function: mallclockPropTick
// Address: 0x2793e8 - 0x27949c
void mallclockPropTick_0x2793e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mallclockPropTick_0x2793e8");
#endif

    switch (ctx->pc) {
        case 0x279408u: goto label_279408;
        case 0x279414u: goto label_279414;
        case 0x279428u: goto label_279428;
        case 0x27943cu: goto label_27943c;
        case 0x279450u: goto label_279450;
        default: break;
    }

    ctx->pc = 0x2793e8u;

    // 0x2793e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2793e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2793ec: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2793ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2793f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2793f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2793f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2793f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2793f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2793F8u;
    {
        const bool branch_taken_0x2793f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2793FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793F8u;
        // 0x2793fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793f8) {
            ctx->pc = 0x279408u;
            goto label_279408;
        }
    }
    ctx->pc = 0x279400u;
    // 0x279400: 0xc09e490  jal         func_279240
    ctx->pc = 0x279400u;
    SET_GPR_U32(ctx, 31, 0x279408u);
    ctx->pc = 0x279240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279240u, 0x279400u, 0x279408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279408u;
label_279408:
    // 0x279408: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x279408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27940c: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x27940Cu;
    SET_GPR_U32(ctx, 31, 0x279414u);
    ctx->pc = 0x279410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27940Cu;
    // 0x279410: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x27940Cu, 0x279414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279414u;
label_279414:
    // 0x279414: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x279414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x279418: 0xc78cb908  lwc1        $f12, -0x46F8($gp)
    ctx->pc = 0x279418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27941c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279420: 0xc0ad2ae  jal         func_2B4AB8
    ctx->pc = 0x279420u;
    SET_GPR_U32(ctx, 31, 0x279428u);
    ctx->pc = 0x279424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279420u;
    // 0x279424: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4AB8u, 0x279420u, 0x279428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279428u;
label_279428:
    // 0x279428: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x279428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27942c: 0xc78cb90c  lwc1        $f12, -0x46F4($gp)
    ctx->pc = 0x27942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279430: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x279430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279434: 0xc0ad2ae  jal         func_2B4AB8
    ctx->pc = 0x279434u;
    SET_GPR_U32(ctx, 31, 0x27943Cu);
    ctx->pc = 0x279438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279434u;
    // 0x279438: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4AB8u, 0x279434u, 0x27943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27943Cu;
label_27943c:
    // 0x27943c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x27943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x279440: 0xc78cb910  lwc1        $f12, -0x46F0($gp)
    ctx->pc = 0x279440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279444: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x279444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279448: 0xc0ad2ae  jal         func_2B4AB8
    ctx->pc = 0x279448u;
    SET_GPR_U32(ctx, 31, 0x279450u);
    ctx->pc = 0x27944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279448u;
    // 0x27944c: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4AB8u, 0x279448u, 0x279450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279450u;
label_279450:
    // 0x279450: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279454: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x279454u;
    {
        const bool branch_taken_0x279454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279454u;
        // 0x279458: 0x8f82b920  lw          $v0, -0x46E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279454) {
            ctx->pc = 0x27948Cu;
            goto label_27948c;
        }
    }
    ctx->pc = 0x27945Cu;
    // 0x27945c: 0x8f83b91c  lw          $v1, -0x46E4($gp)
    ctx->pc = 0x27945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949148)));
    // 0x279460: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x279460u;
    {
        const bool branch_taken_0x279460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x279464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279460u;
        // 0x279464: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279460) {
            ctx->pc = 0x279490u;
            goto label_279490;
        }
    }
    ctx->pc = 0x279468u;
    // 0x279468: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x279468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27946c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x27946cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x279470: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x279470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x279474: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x279474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x279478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27947c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27947cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279480: 0xaf83b920  sw          $v1, -0x46E0($gp)
    ctx->pc = 0x279480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949152), GPR_U32(ctx, 3));
    // 0x279484: 0x8081566  j           func_205598
    ctx->pc = 0x279484u;
    ctx->pc = 0x279488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279484u;
    // 0x279488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205598u;
    soundStartRange_0x205598(rdram, ctx, runtime); return;
    ctx->pc = 0x27948Cu;
label_27948c:
    // 0x27948c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27948cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_279490:
    // 0x279490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279494: 0x3e00008  jr          $ra
    ctx->pc = 0x279494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279494u;
        // 0x279498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27949Cu;
}
