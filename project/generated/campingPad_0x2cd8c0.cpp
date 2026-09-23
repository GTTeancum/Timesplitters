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

// Function: campingPad
// Address: 0x2cd8c0 - 0x2cd96c
void campingPad_0x2cd8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("campingPad_0x2cd8c0");
#endif

    switch (ctx->pc) {
        case 0x2cd8d8u: goto label_2cd8d8;
        case 0x2cd910u: goto label_2cd910;
        default: break;
    }

    ctx->pc = 0x2cd8c0u;

    // 0x2cd8c0: 0x8f8b9f74  lw          $t3, -0x608C($gp)
    ctx->pc = 0x2cd8c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cd8c4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cd8c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8c8: 0x19600026  blez        $t3, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CD8C8u;
    {
        const bool branch_taken_0x2cd8c8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x2CD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8C8u;
        // 0x2cd8cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8c8) {
            ctx->pc = 0x2CD964u;
            goto label_2cd964;
        }
    }
    ctx->pc = 0x2CD8D0u;
    // 0x2cd8d0: 0x8f8cb230  lw          $t4, -0x4DD0($gp)
    ctx->pc = 0x2cd8d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2cd8d4: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x2cd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
label_2cd8d8:
    // 0x2cd8d8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2cd8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2cd8dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cd8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd8e0: 0x1021818  mult        $v1, $t0, $v0
    ctx->pc = 0x2cd8e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cd8e4: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x2cd8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2cd8e8: 0xc4400370  lwc1        $f0, 0x370($v0)
    ctx->pc = 0x2cd8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd8ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cd8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd8f0: 0x0  nop
    ctx->pc = 0x2cd8f0u;
    // NOP
    // 0x2cd8f4: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2CD8F4u;
    {
        const bool branch_taken_0x2cd8f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd8f4) {
            ctx->pc = 0x2CD8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD8F4u;
            // 0x2cd8f8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD958u;
            goto label_2cd958;
        }
    }
    ctx->pc = 0x2CD8FCu;
    // 0x2cd8fc: 0x8c42038c  lw          $v0, 0x38C($v0)
    ctx->pc = 0x2cd8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    // 0x2cd900: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CD900u;
    {
        const bool branch_taken_0x2cd900 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD900u;
        // 0x2cd904: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd900) {
            ctx->pc = 0x2CD954u;
            goto label_2cd954;
        }
    }
    ctx->pc = 0x2CD908u;
    // 0x2cd908: 0x8f89a2ec  lw          $t1, -0x5D14($gp)
    ctx->pc = 0x2cd908u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2cd90c: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x2cd90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
label_2cd910:
    // 0x2cd910: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2cd910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2cd914: 0x1021818  mult        $v1, $t0, $v0
    ctx->pc = 0x2cd914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cd918: 0x1441018  mult        $v0, $t2, $a0
    ctx->pc = 0x2cd918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cd91c: 0x6c3021  addu        $a2, $v1, $t4
    ctx->pc = 0x2cd91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2cd920: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x2cd920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2cd924: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2cd924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2cd928: 0x8485000a  lh          $a1, 0xA($a0)
    ctx->pc = 0x2cd928u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2cd92c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2cd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cd930: 0x8c430390  lw          $v1, 0x390($v0)
    ctx->pc = 0x2cd930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 912)));
    // 0x2cd934: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD934u;
    {
        const bool branch_taken_0x2cd934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cd934) {
            ctx->pc = 0x2CD938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD934u;
            // 0x2cd938: 0x8cc2038c  lw          $v0, 0x38C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD944u;
            goto label_2cd944;
        }
    }
    ctx->pc = 0x2CD93Cu;
    // 0x2cd93c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD93Cu;
        // 0x2cd940: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD944u;
label_2cd944:
    // 0x2cd944: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cd944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2cd948: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2cd948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cd94c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2CD94Cu;
    {
        const bool branch_taken_0x2cd94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD94Cu;
        // 0x2cd950: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd94c) {
            ctx->pc = 0x2CD910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd910;
        }
    }
    ctx->pc = 0x2CD954u;
label_2cd954:
    // 0x2cd954: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2cd954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2cd958:
    // 0x2cd958: 0x10b102a  slt         $v0, $t0, $t3
    ctx->pc = 0x2cd958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2cd95c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2CD95Cu;
    {
        const bool branch_taken_0x2cd95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD95Cu;
        // 0x2cd960: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd95c) {
            ctx->pc = 0x2CD8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd8d8;
        }
    }
    ctx->pc = 0x2CD964u;
label_2cd964:
    // 0x2cd964: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD964u;
        // 0x2cd968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD96Cu;
}
