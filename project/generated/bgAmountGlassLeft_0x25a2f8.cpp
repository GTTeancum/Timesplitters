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

// Function: bgAmountGlassLeft
// Address: 0x25a2f8 - 0x25a398
void bgAmountGlassLeft_0x25a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgAmountGlassLeft_0x25a2f8");
#endif

    switch (ctx->pc) {
        case 0x25a310u: goto label_25a310;
        case 0x25a340u: goto label_25a340;
        default: break;
    }

    ctx->pc = 0x25a2f8u;

    // 0x25a2f8: 0x8f8aa264  lw          $t2, -0x5D9C($gp)
    ctx->pc = 0x25a2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x25a2fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25a2fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a300: 0x19400023  blez        $t2, . + 4 + (0x23 << 2)
    ctx->pc = 0x25A300u;
    {
        const bool branch_taken_0x25a300 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x25A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A300u;
        // 0x25a304: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a300) {
            ctx->pc = 0x25A390u;
            goto label_25a390;
        }
    }
    ctx->pc = 0x25A308u;
    // 0x25a308: 0x8f89a240  lw          $t1, -0x5DC0($gp)
    ctx->pc = 0x25a308u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x25a30c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x25a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_25a310:
    // 0x25a310: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x25a310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25a314: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x25a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x25a318: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x25a318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x25a31c: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x25A31Cu;
    {
        const bool branch_taken_0x25a31c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A31Cu;
        // 0x25a320: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a31c) {
            ctx->pc = 0x25A380u;
            goto label_25a380;
        }
    }
    ctx->pc = 0x25A324u;
    // 0x25a324: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25a328: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25A328u;
    {
        const bool branch_taken_0x25a328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A328u;
        // 0x25a32c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a328) {
            ctx->pc = 0x25A380u;
            goto label_25a380;
        }
    }
    ctx->pc = 0x25A330u;
    // 0x25a330: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x25a330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25a334: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a338: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x25a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25a33c: 0x0  nop
    ctx->pc = 0x25a33cu;
    // NOP
label_25a340:
    // 0x25a340: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25a340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a348: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a34c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25a34cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a350: 0x0  nop
    ctx->pc = 0x25a350u;
    // NOP
    // 0x25a354: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25A354u;
    {
        const bool branch_taken_0x25a354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a354) {
            ctx->pc = 0x25A358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A354u;
            // 0x25a358: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A35Cu;
            goto label_25a35c;
        }
    }
    ctx->pc = 0x25A35Cu;
label_25a35c:
    // 0x25a35c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25a35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25a360: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x25a360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x25a364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a368: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x25a368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25a36c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a370: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x25A370u;
    {
        const bool branch_taken_0x25a370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a370) {
            ctx->pc = 0x25A340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a340;
        }
    }
    ctx->pc = 0x25A378u;
    // 0x25a378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25A378u;
    {
        const bool branch_taken_0x25a378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A378u;
        // 0x25a37c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a378) {
            ctx->pc = 0x25A384u;
            goto label_25a384;
        }
    }
    ctx->pc = 0x25A380u;
label_25a380:
    // 0x25a380: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x25a380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25a384:
    // 0x25a384: 0x6a102a  slt         $v0, $v1, $t2
    ctx->pc = 0x25a384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x25a388: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x25A388u;
    {
        const bool branch_taken_0x25a388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A388u;
        // 0x25a38c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a388) {
            ctx->pc = 0x25A310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a310;
        }
    }
    ctx->pc = 0x25A390u;
label_25a390:
    // 0x25a390: 0x3e00008  jr          $ra
    ctx->pc = 0x25A390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A390u;
        // 0x25a394: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A398u;
}
