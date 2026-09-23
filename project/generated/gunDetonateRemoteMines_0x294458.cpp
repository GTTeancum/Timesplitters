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

// Function: gunDetonateRemoteMines
// Address: 0x294458 - 0x2944ec
void gunDetonateRemoteMines_0x294458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunDetonateRemoteMines_0x294458");
#endif

    switch (ctx->pc) {
        case 0x294480u: goto label_294480;
        case 0x294494u: goto label_294494;
        case 0x2944b4u: goto label_2944b4;
        default: break;
    }

    ctx->pc = 0x294458u;

    // 0x294458: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29445c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29445cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294460: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294464: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294468: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x294468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29446c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294470: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x294470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x294474: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294478: 0x265011c0  addiu       $s0, $s2, 0x11C0
    ctx->pc = 0x294478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4544));
    // 0x29447c: 0x0  nop
    ctx->pc = 0x29447cu;
    // NOP
label_294480:
    // 0x294480: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x294480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x294484: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294484u;
    {
        const bool branch_taken_0x294484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x294488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294484u;
        // 0x294488: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294484) {
            ctx->pc = 0x29449Cu;
            goto label_29449c;
        }
    }
    ctx->pc = 0x29448Cu;
    // 0x29448c: 0xc0a29cc  jal         func_28A730
    ctx->pc = 0x29448Cu;
    SET_GPR_U32(ctx, 31, 0x294494u);
    ctx->pc = 0x28A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A730u, 0x29448Cu, 0x294494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294494u;
label_294494:
    // 0x294494: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x294494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x294498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29449c:
    // 0x29449c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29449Cu;
    {
        const bool branch_taken_0x29449c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2944A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29449Cu;
        // 0x2944a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29449c) {
            ctx->pc = 0x294480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294480;
        }
    }
    ctx->pc = 0x2944A4u;
    // 0x2944a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2944A4u;
    {
        const bool branch_taken_0x2944a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2944A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944A4u;
        // 0x2944a8: 0x240400c3  addiu       $a0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944a4) {
            ctx->pc = 0x2944B4u;
            goto label_2944b4;
        }
    }
    ctx->pc = 0x2944ACu;
    // 0x2944ac: 0xc081546  jal         func_205518
    ctx->pc = 0x2944ACu;
    SET_GPR_U32(ctx, 31, 0x2944B4u);
    ctx->pc = 0x2944B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2944ACu;
    // 0x2944b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2944ACu, 0x2944B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2944B4u;
label_2944b4:
    // 0x2944b4: 0x8e420298  lw          $v0, 0x298($s2)
    ctx->pc = 0x2944b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 664)));
    // 0x2944b8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2944B8u;
    {
        const bool branch_taken_0x2944b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2944BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944B8u;
        // 0x2944bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944b8) {
            ctx->pc = 0x2944D8u;
            goto label_2944d8;
        }
    }
    ctx->pc = 0x2944C0u;
    // 0x2944c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2944c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2944c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2944c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2944c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2944cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2944ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2944d0: 0x80a36b2  j           func_28DAC8
    ctx->pc = 0x2944D0u;
    ctx->pc = 0x2944D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2944D0u;
    // 0x2944d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DAC8u;
    changeToComboWithAmmo_0x28dac8(rdram, ctx, runtime); return;
    ctx->pc = 0x2944D8u;
label_2944d8:
    // 0x2944d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2944d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2944dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2944dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2944e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2944e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2944e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2944E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2944E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944E4u;
        // 0x2944e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2944E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2944ECu;
}
