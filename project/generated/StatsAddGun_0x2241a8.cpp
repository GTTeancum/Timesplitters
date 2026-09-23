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

// Function: StatsAddGun
// Address: 0x2241a8 - 0x22424c
void StatsAddGun_0x2241a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsAddGun_0x2241a8");
#endif

    switch (ctx->pc) {
        case 0x2241fcu: goto label_2241fc;
        default: break;
    }

    ctx->pc = 0x2241a8u;

    // 0x2241a8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2241a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241ac: 0x28e2000e  slti        $v0, $a3, 0xE
    ctx->pc = 0x2241acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2241b0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2241B0u;
    {
        const bool branch_taken_0x2241b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241B0u;
        // 0x2241b4: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241b0) {
            ctx->pc = 0x2241FCu;
            goto label_2241fc;
        }
    }
    ctx->pc = 0x2241B8u;
    // 0x2241b8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2241b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2241bc: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x2241bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x2241c0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2241c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2241c4: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2241c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2241c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2241c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2241cc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2241CCu;
    {
        const bool branch_taken_0x2241cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2241D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241CCu;
        // 0x2241d0: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241cc) {
            ctx->pc = 0x224204u;
            goto label_224204;
        }
    }
    ctx->pc = 0x2241D4u;
    // 0x2241d4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2241d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2241d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2241d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2241dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2241DCu;
    {
        const bool branch_taken_0x2241dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2241E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241DCu;
        // 0x2241e0: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241dc) {
            ctx->pc = 0x224204u;
            goto label_224204;
        }
    }
    ctx->pc = 0x2241E4u;
    // 0x2241e4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2241e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2241e8: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2241e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2241ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2241ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2241f0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2241f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2241f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2241F4u;
    {
        const bool branch_taken_0x2241f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2241F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241F4u;
        // 0x2241f8: 0x28c20021  slti        $v0, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241f4) {
            ctx->pc = 0x22420Cu;
            goto label_22420c;
        }
    }
    ctx->pc = 0x2241FCu;
label_2241fc:
    // 0x2241fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2241FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2241FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224204u;
label_224204:
    // 0x224204: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x224204u;
    {
        const bool branch_taken_0x224204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224204u;
        // 0x224208: 0x28c20021  slti        $v0, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224204) {
            ctx->pc = 0x2241FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2241fc;
        }
    }
    ctx->pc = 0x22420Cu;
label_22420c:
    // 0x22420c: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22420Cu;
    {
        const bool branch_taken_0x22420c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22420Cu;
        // 0x224210: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22420c) {
            ctx->pc = 0x2241FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2241fc;
        }
    }
    ctx->pc = 0x224214u;
    // 0x224214: 0x24050558  addiu       $a1, $zero, 0x558
    ctx->pc = 0x224214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x224218: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x224218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22421c: 0x70e52818  mult1       $a1, $a3, $a1
    ctx->pc = 0x22421cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x224220: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x224220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x224224: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x224224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x224228: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x224228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x22422c: 0x24630114  addiu       $v1, $v1, 0x114
    ctx->pc = 0x22422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
    // 0x224230: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224234: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x224234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x224238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22423c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224240: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x224240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x224244: 0x3e00008  jr          $ra
    ctx->pc = 0x224244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224244u;
        // 0x224248: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22424Cu;
}
