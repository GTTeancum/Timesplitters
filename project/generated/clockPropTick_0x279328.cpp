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

// Function: clockPropTick
// Address: 0x279328 - 0x2793e8
void clockPropTick_0x279328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("clockPropTick_0x279328");
#endif

    switch (ctx->pc) {
        case 0x279348u: goto label_279348;
        case 0x279354u: goto label_279354;
        case 0x279368u: goto label_279368;
        case 0x27937cu: goto label_27937c;
        case 0x279390u: goto label_279390;
        default: break;
    }

    ctx->pc = 0x279328u;

    // 0x279328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27932c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x27932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279338u;
    {
        const bool branch_taken_0x279338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279338u;
        // 0x27933c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279338) {
            ctx->pc = 0x279348u;
            goto label_279348;
        }
    }
    ctx->pc = 0x279340u;
    // 0x279340: 0xc09e490  jal         func_279240
    ctx->pc = 0x279340u;
    SET_GPR_U32(ctx, 31, 0x279348u);
    ctx->pc = 0x279240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279240u, 0x279340u, 0x279348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279348u;
label_279348:
    // 0x279348: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x279348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27934c: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x27934Cu;
    SET_GPR_U32(ctx, 31, 0x279354u);
    ctx->pc = 0x279350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27934Cu;
    // 0x279350: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x27934Cu, 0x279354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279354u;
label_279354:
    // 0x279354: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x279354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x279358: 0xc78cb908  lwc1        $f12, -0x46F8($gp)
    ctx->pc = 0x279358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27935c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279360: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x279360u;
    SET_GPR_U32(ctx, 31, 0x279368u);
    ctx->pc = 0x279364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279360u;
    // 0x279364: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x279360u, 0x279368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279368u;
label_279368:
    // 0x279368: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x279368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27936c: 0xc78cb90c  lwc1        $f12, -0x46F4($gp)
    ctx->pc = 0x27936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279370: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x279370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279374: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x279374u;
    SET_GPR_U32(ctx, 31, 0x27937Cu);
    ctx->pc = 0x279378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279374u;
    // 0x279378: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x279374u, 0x27937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27937Cu;
label_27937c:
    // 0x27937c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x27937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x279380: 0xc78cb910  lwc1        $f12, -0x46F0($gp)
    ctx->pc = 0x279380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279384: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x279384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279388: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x279388u;
    SET_GPR_U32(ctx, 31, 0x279390u);
    ctx->pc = 0x27938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279388u;
    // 0x27938c: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x279388u, 0x279390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279390u;
label_279390:
    // 0x279390: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279394: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x279394u;
    {
        const bool branch_taken_0x279394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279394u;
        // 0x279398: 0x8f82b918  lw          $v0, -0x46E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279394) {
            ctx->pc = 0x2793D8u;
            goto label_2793d8;
        }
    }
    ctx->pc = 0x27939Cu;
    // 0x27939c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x27939Cu;
    {
        const bool branch_taken_0x27939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27939c) {
            ctx->pc = 0x2793A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27939Cu;
            // 0x2793a0: 0xaf80b920  sw          $zero, -0x46E0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949152), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2793D8u;
            goto label_2793d8;
        }
    }
    ctx->pc = 0x2793A4u;
    // 0x2793a4: 0x8f82b91c  lw          $v0, -0x46E4($gp)
    ctx->pc = 0x2793a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949148)));
    // 0x2793a8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2793A8u;
    {
        const bool branch_taken_0x2793a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2793a8) {
            ctx->pc = 0x2793ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2793A8u;
            // 0x2793ac: 0xaf80b920  sw          $zero, -0x46E0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949152), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2793D8u;
            goto label_2793d8;
        }
    }
    ctx->pc = 0x2793B0u;
    // 0x2793b0: 0x8f82b920  lw          $v0, -0x46E0($gp)
    ctx->pc = 0x2793b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949152)));
    // 0x2793b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2793B4u;
    {
        const bool branch_taken_0x2793b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2793B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793B4u;
        // 0x2793b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793b4) {
            ctx->pc = 0x2793DCu;
            goto label_2793dc;
        }
    }
    ctx->pc = 0x2793BCu;
    // 0x2793bc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2793bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2793c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2793c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2793c4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2793c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2793c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2793c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2793cc: 0xaf82b920  sw          $v0, -0x46E0($gp)
    ctx->pc = 0x2793ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949152), GPR_U32(ctx, 2));
    // 0x2793d0: 0x8081546  j           func_205518
    ctx->pc = 0x2793D0u;
    ctx->pc = 0x2793D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2793D0u;
    // 0x2793d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x2793D8u;
label_2793d8:
    // 0x2793d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2793d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2793dc:
    // 0x2793dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2793dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2793e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2793E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2793E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793E0u;
        // 0x2793e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2793E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2793E8u;
}
