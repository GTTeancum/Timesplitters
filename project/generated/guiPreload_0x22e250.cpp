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

// Function: guiPreload
// Address: 0x22e250 - 0x22e34c
void guiPreload_0x22e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiPreload_0x22e250");
#endif

    switch (ctx->pc) {
        case 0x22e290u: goto label_22e290;
        case 0x22e2a4u: goto label_22e2a4;
        case 0x22e2b0u: goto label_22e2b0;
        case 0x22e2d8u: goto label_22e2d8;
        case 0x22e304u: goto label_22e304;
        case 0x22e310u: goto label_22e310;
        default: break;
    }

    ctx->pc = 0x22e250u;

    // 0x22e250: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22e254: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22e254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22e258: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x22e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22e25c: 0x244202d0  addiu       $v0, $v0, 0x2D0
    ctx->pc = 0x22e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x22e260: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22e264: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x22e264u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x22e268: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22e268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22e26c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x22e26cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x22e270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e274: 0x24510098  addiu       $s1, $v0, 0x98
    ctx->pc = 0x22e274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x22e278: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22e27c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x22e27cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e280: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22e280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22e284: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22e288: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22e28c: 0x0  nop
    ctx->pc = 0x22e28cu;
    // NOP
label_22e290:
    // 0x22e290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e294: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x22e294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22e298: 0x264518d0  addiu       $a1, $s2, 0x18D0
    ctx->pc = 0x22e298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6352));
    // 0x22e29c: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x22E29Cu;
    SET_GPR_U32(ctx, 31, 0x22E2A4u);
    ctx->pc = 0x22E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E29Cu;
    // 0x22e2a0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x22E29Cu, 0x22E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E2A4u;
label_22e2a4:
    // 0x22e2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e2a8: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x22E2A8u;
    SET_GPR_U32(ctx, 31, 0x22E2B0u);
    ctx->pc = 0x22E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2A8u;
    // 0x22e2ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x22E2A8u, 0x22E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E2B0u;
label_22e2b0:
    // 0x22e2b0: 0x601fff7  bgez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22E2B0u;
    {
        const bool branch_taken_0x22e2b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x22E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2B0u;
        // 0x22e2b4: 0x2631ffda  addiu       $s1, $s1, -0x26 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2b0) {
            ctx->pc = 0x22E290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e290;
        }
    }
    ctx->pc = 0x22E2B8u;
    // 0x22e2b8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22e2bc: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x22e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x22e2c0: 0x24550390  addiu       $s5, $v0, 0x390
    ctx->pc = 0x22e2c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x22e2c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e2c8: 0x24140067  addiu       $s4, $zero, 0x67
    ctx->pc = 0x22e2c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x22e2cc: 0x24130026  addiu       $s3, $zero, 0x26
    ctx->pc = 0x22e2ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x22e2d0: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x22e2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e2d4: 0x0  nop
    ctx->pc = 0x22e2d4u;
    // NOP
label_22e2d8:
    // 0x22e2d8: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x22e2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22e2dc: 0x26c518f8  addiu       $a1, $s6, 0x18F8
    ctx->pc = 0x22e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6392));
    // 0x22e2e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22e2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e2e4: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x22e2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x22e2e8: 0x2602ffe8  addiu       $v0, $s0, -0x18
    ctx->pc = 0x22e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x22e2ec: 0x10740003  beq         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E2ECu;
    {
        const bool branch_taken_0x22e2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x22E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2ECu;
        // 0x22e2f0: 0x2c42000c  sltiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2ec) {
            ctx->pc = 0x22E2FCu;
            goto label_22e2fc;
        }
    }
    ctx->pc = 0x22E2F4u;
    // 0x22e2f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E2F4u;
    {
        const bool branch_taken_0x22e2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2F4u;
        // 0x22e2f8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2f4) {
            ctx->pc = 0x22E318u;
            goto label_22e318;
        }
    }
    ctx->pc = 0x22E2FCu;
label_22e2fc:
    // 0x22e2fc: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x22E2FCu;
    SET_GPR_U32(ctx, 31, 0x22E304u);
    ctx->pc = 0x22E300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2FCu;
    // 0x22e300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x22E2FCu, 0x22E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E304u;
label_22e304:
    // 0x22e304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22e304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e308: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x22E308u;
    SET_GPR_U32(ctx, 31, 0x22E310u);
    ctx->pc = 0x22E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E308u;
    // 0x22e30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x22E308u, 0x22E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E310u;
label_22e310:
    // 0x22e310: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x22e310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x22e314: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x22e314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e318:
    // 0x22e318: 0x2a020025  slti        $v0, $s0, 0x25
    ctx->pc = 0x22e318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x22e31c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22E31Cu;
    {
        const bool branch_taken_0x22e31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e31c) {
            ctx->pc = 0x22E320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E31Cu;
            // 0x22e320: 0x2131018  mult        $v0, $s0, $s3 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e2d8;
        }
    }
    ctx->pc = 0x22E324u;
    // 0x22e324: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22e324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e328: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22e328u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e32c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22e32cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e330: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22e330u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e334: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22e334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e338: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e33c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e344: 0x3e00008  jr          $ra
    ctx->pc = 0x22E344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E344u;
        // 0x22e348: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E34Cu;
}
