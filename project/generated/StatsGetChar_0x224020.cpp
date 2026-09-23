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

// Function: StatsGetChar
// Address: 0x224020 - 0x224110
void StatsGetChar_0x224020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsGetChar_0x224020");
#endif

    ctx->pc = 0x224020u;

    // 0x224020: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x224020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224024: 0x28e2000e  slti        $v0, $a3, 0xE
    ctx->pc = 0x224024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x224028: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x224028u;
    {
        const bool branch_taken_0x224028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224028u;
        // 0x22402c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224028) {
            ctx->pc = 0x224104u;
            goto label_224104;
        }
    }
    ctx->pc = 0x224030u;
    // 0x224030: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224034: 0x2483c4a8  addiu       $v1, $a0, -0x3B58
    ctx->pc = 0x224034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
    // 0x224038: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x224038u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x22403c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x22403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x224040: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x224040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x224044: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x224044u;
    {
        const bool branch_taken_0x224044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224044u;
        // 0x224048: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224044) {
            ctx->pc = 0x22407Cu;
            goto label_22407c;
        }
    }
    ctx->pc = 0x22404Cu;
    // 0x22404c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x22404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x224050: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x224050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x224054: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224054u;
    {
        const bool branch_taken_0x224054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224054u;
        // 0x224058: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224054) {
            ctx->pc = 0x22407Cu;
            goto label_22407c;
        }
    }
    ctx->pc = 0x22405Cu;
    // 0x22405c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x22405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x224060: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x224064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224068: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x224068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22406c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22406Cu;
    {
        const bool branch_taken_0x22406c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22406Cu;
        // 0x224070: 0x28c2000e  slti        $v0, $a2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22406c) {
            ctx->pc = 0x224084u;
            goto label_224084;
        }
    }
    ctx->pc = 0x224074u;
    // 0x224074: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x224074u;
    {
        const bool branch_taken_0x224074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224074) {
            ctx->pc = 0x224104u;
            goto label_224104;
        }
    }
    ctx->pc = 0x22407Cu;
label_22407c:
    // 0x22407c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x22407Cu;
    {
        const bool branch_taken_0x22407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22407Cu;
        // 0x224080: 0x28c2000e  slti        $v0, $a2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22407c) {
            ctx->pc = 0x224104u;
            goto label_224104;
        }
    }
    ctx->pc = 0x224084u;
label_224084:
    // 0x224084: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x224084u;
    {
        const bool branch_taken_0x224084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224084u;
        // 0x224088: 0x2483c4a8  addiu       $v1, $a0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224084) {
            ctx->pc = 0x224104u;
            goto label_224104;
        }
    }
    ctx->pc = 0x22408Cu;
    // 0x22408c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x224090: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x224090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x224094: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x224094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x224098: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x224098u;
    {
        const bool branch_taken_0x224098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224098u;
        // 0x22409c: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224098) {
            ctx->pc = 0x2240D0u;
            goto label_2240d0;
        }
    }
    ctx->pc = 0x2240A0u;
    // 0x2240a0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2240a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2240a4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2240a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2240a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2240A8u;
    {
        const bool branch_taken_0x2240a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2240ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240A8u;
        // 0x2240ac: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240a8) {
            ctx->pc = 0x2240D0u;
            goto label_2240d0;
        }
    }
    ctx->pc = 0x2240B0u;
    // 0x2240b0: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2240b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2240b4: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2240b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2240b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2240b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2240bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2240bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2240c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2240C0u;
    {
        const bool branch_taken_0x2240c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2240C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240C0u;
        // 0x2240c4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240c0) {
            ctx->pc = 0x2240D8u;
            goto label_2240d8;
        }
    }
    ctx->pc = 0x2240C8u;
    // 0x2240c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2240C8u;
    {
        const bool branch_taken_0x2240c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240c8) {
            ctx->pc = 0x224104u;
            goto label_224104;
        }
    }
    ctx->pc = 0x2240D0u;
label_2240d0:
    // 0x2240d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2240D0u;
    {
        const bool branch_taken_0x2240d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240D0u;
        // 0x2240d4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240d0) {
            ctx->pc = 0x224104u;
            goto label_224104;
        }
    }
    ctx->pc = 0x2240D8u;
label_2240d8:
    // 0x2240d8: 0x24050558  addiu       $a1, $zero, 0x558
    ctx->pc = 0x2240d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x2240dc: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2240dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2240e0: 0x70e52818  mult1       $a1, $a3, $a1
    ctx->pc = 0x2240e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2240e4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2240e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2240e8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2240e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2240ec: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x2240ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x2240f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2240f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2240f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2240f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2240f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2240f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2240fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2240FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240FCu;
        // 0x224100: 0xc46003a8  lwc1        $f0, 0x3A8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2240FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224104u;
label_224104:
    // 0x224104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224108: 0x3e00008  jr          $ra
    ctx->pc = 0x224108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224110u;
}
