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

// Function: StatsAddChar
// Address: 0x224338 - 0x224428
void StatsAddChar_0x224338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsAddChar_0x224338");
#endif

    switch (ctx->pc) {
        case 0x22438cu: goto label_22438c;
        default: break;
    }

    ctx->pc = 0x224338u;

    // 0x224338: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x224338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22433c: 0x28e2000e  slti        $v0, $a3, 0xE
    ctx->pc = 0x22433cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x224340: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x224340u;
    {
        const bool branch_taken_0x224340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224340u;
        // 0x224344: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224340) {
            ctx->pc = 0x22438Cu;
            goto label_22438c;
        }
    }
    ctx->pc = 0x224348u;
    // 0x224348: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x22434c: 0x2483c4a8  addiu       $v1, $a0, -0x3B58
    ctx->pc = 0x22434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
    // 0x224350: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x224350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x224354: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x224354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x224358: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x224358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22435c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22435Cu;
    {
        const bool branch_taken_0x22435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22435Cu;
        // 0x224360: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22435c) {
            ctx->pc = 0x224394u;
            goto label_224394;
        }
    }
    ctx->pc = 0x224364u;
    // 0x224364: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x224364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x224368: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x224368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22436c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22436Cu;
    {
        const bool branch_taken_0x22436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22436Cu;
        // 0x224370: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22436c) {
            ctx->pc = 0x224394u;
            goto label_224394;
        }
    }
    ctx->pc = 0x224374u;
    // 0x224374: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x224374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x224378: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x224378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x22437c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224380: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x224380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x224384: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224384u;
    {
        const bool branch_taken_0x224384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224384u;
        // 0x224388: 0x28c2000e  slti        $v0, $a2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224384) {
            ctx->pc = 0x22439Cu;
            goto label_22439c;
        }
    }
    ctx->pc = 0x22438Cu;
label_22438c:
    // 0x22438c: 0x3e00008  jr          $ra
    ctx->pc = 0x22438Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22438Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224394u;
label_224394:
    // 0x224394: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x224394u;
    {
        const bool branch_taken_0x224394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224394u;
        // 0x224398: 0x28c2000e  slti        $v0, $a2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224394) {
            ctx->pc = 0x22438Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22438c;
        }
    }
    ctx->pc = 0x22439Cu;
label_22439c:
    // 0x22439c: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22439Cu;
    {
        const bool branch_taken_0x22439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22439Cu;
        // 0x2243a0: 0x2483c4a8  addiu       $v1, $a0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22439c) {
            ctx->pc = 0x22438Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22438c;
        }
    }
    ctx->pc = 0x2243A4u;
    // 0x2243a4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2243a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2243a8: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2243a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2243ac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2243acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2243b0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2243B0u;
    {
        const bool branch_taken_0x2243b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243B0u;
        // 0x2243b4: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243b0) {
            ctx->pc = 0x2243E8u;
            goto label_2243e8;
        }
    }
    ctx->pc = 0x2243B8u;
    // 0x2243b8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2243b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2243bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2243bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2243c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2243C0u;
    {
        const bool branch_taken_0x2243c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243C0u;
        // 0x2243c4: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243c0) {
            ctx->pc = 0x2243E8u;
            goto label_2243e8;
        }
    }
    ctx->pc = 0x2243C8u;
    // 0x2243c8: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2243c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2243cc: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2243ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2243d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2243d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2243d4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2243d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2243d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2243D8u;
    {
        const bool branch_taken_0x2243d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243D8u;
        // 0x2243dc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243d8) {
            ctx->pc = 0x2243F0u;
            goto label_2243f0;
        }
    }
    ctx->pc = 0x2243E0u;
    // 0x2243e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2243E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2243E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2243E8u;
label_2243e8:
    // 0x2243e8: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2243E8u;
    {
        const bool branch_taken_0x2243e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243E8u;
        // 0x2243ec: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243e8) {
            ctx->pc = 0x22438Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22438c;
        }
    }
    ctx->pc = 0x2243F0u;
label_2243f0:
    // 0x2243f0: 0x24050558  addiu       $a1, $zero, 0x558
    ctx->pc = 0x2243f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x2243f4: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2243f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2243f8: 0x70e52818  mult1       $a1, $a3, $a1
    ctx->pc = 0x2243f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2243fc: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2243fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x224400: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x224400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x224404: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x224404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x224408: 0x246303a8  addiu       $v1, $v1, 0x3A8
    ctx->pc = 0x224408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 936));
    // 0x22440c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224410: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x224410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x224414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224418: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x224418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22441c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x22441cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x224420: 0x3e00008  jr          $ra
    ctx->pc = 0x224420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224420u;
        // 0x224424: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224428u;
}
