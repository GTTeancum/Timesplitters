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

// Function: resetPlayerGunReload
// Address: 0x291070 - 0x291138
void resetPlayerGunReload_0x291070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("resetPlayerGunReload_0x291070");
#endif

    switch (ctx->pc) {
        case 0x291100u: goto label_291100;
        default: break;
    }

    ctx->pc = 0x291070u;

    // 0x291070: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x291070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291074: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x291074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x291078: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x291078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29107c: 0xad000080  sw          $zero, 0x80($t0)
    ctx->pc = 0x29107cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 0));
    // 0x291080: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291080u;
    {
        const bool branch_taken_0x291080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291080u;
        // 0x291084: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291080) {
            ctx->pc = 0x291094u;
            goto label_291094;
        }
    }
    ctx->pc = 0x291088u;
    // 0x291088: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x291088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29108c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29108Cu;
    {
        const bool branch_taken_0x29108c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29108c) {
            ctx->pc = 0x291090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29108Cu;
            // 0x291090: 0xad0000b8  sw          $zero, 0xB8($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2910A0u;
            goto label_2910a0;
        }
    }
    ctx->pc = 0x291094u;
label_291094:
    // 0x291094: 0xad000054  sw          $zero, 0x54($t0)
    ctx->pc = 0x291094u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 0));
    // 0x291098: 0xad000058  sw          $zero, 0x58($t0)
    ctx->pc = 0x291098u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 0));
    // 0x29109c: 0xad0000b8  sw          $zero, 0xB8($t0)
    ctx->pc = 0x29109cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 184), GPR_U32(ctx, 0));
label_2910a0:
    // 0x2910a0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2910a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2910a4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2910a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2910a8: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2910A8u;
    {
        const bool branch_taken_0x2910a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2910ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910A8u;
        // 0x2910ac: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910a8) {
            ctx->pc = 0x2910B8u;
            goto label_2910b8;
        }
    }
    ctx->pc = 0x2910B0u;
    // 0x2910b0: 0x14c2001d  bne         $a2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2910B0u;
    {
        const bool branch_taken_0x2910b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2910B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910B0u;
        // 0x2910b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910b0) {
            ctx->pc = 0x291128u;
            goto label_291128;
        }
    }
    ctx->pc = 0x2910B8u;
label_2910b8:
    // 0x2910b8: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x2910b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2910bc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2910bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2910c0: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2910c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2910c4: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2910c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2910c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2910c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2910cc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2910ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2910d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2910d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2910d4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2910d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2910d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2910d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2910dc: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2910DCu;
    {
        const bool branch_taken_0x2910dc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2910E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910DCu;
        // 0x2910e0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910dc) {
            ctx->pc = 0x2910F0u;
            goto label_2910f0;
        }
    }
    ctx->pc = 0x2910E4u;
    // 0x2910e4: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x2910e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2910e8: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x2910e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2910ec: 0xa4430124  sh          $v1, 0x124($v0)
    ctx->pc = 0x2910ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 292), (uint16_t)GPR_U32(ctx, 3));
label_2910f0:
    // 0x2910f0: 0x2489ffff  addiu       $t1, $a0, -0x1
    ctx->pc = 0x2910f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2910f4: 0x1920000b  blez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x2910F4u;
    {
        const bool branch_taken_0x2910f4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2910F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910F4u;
        // 0x2910f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910f4) {
            ctx->pc = 0x291124u;
            goto label_291124;
        }
    }
    ctx->pc = 0x2910FCu;
    // 0x2910fc: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x2910fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_291100:
    // 0x291100: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x291100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x291104: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x291104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x291108: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x291108u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x29110c: 0x94a20124  lhu         $v0, 0x124($a1)
    ctx->pc = 0x29110cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x291110: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x291110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x291114: 0xc9202a  slt         $a0, $a2, $t1
    ctx->pc = 0x291114u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x291118: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x291118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29111c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29111Cu;
    {
        const bool branch_taken_0x29111c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x291120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29111Cu;
        // 0x291120: 0xa4a20124  sh          $v0, 0x124($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29111c) {
            ctx->pc = 0x291100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291100;
        }
    }
    ctx->pc = 0x291124u;
label_291124:
    // 0x291124: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x291124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_291128:
    // 0x291128: 0xad0000a0  sw          $zero, 0xA0($t0)
    ctx->pc = 0x291128u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 160), GPR_U32(ctx, 0));
    // 0x29112c: 0xad020098  sw          $v0, 0x98($t0)
    ctx->pc = 0x29112cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 152), GPR_U32(ctx, 2));
    // 0x291130: 0x3e00008  jr          $ra
    ctx->pc = 0x291130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291130u;
        // 0x291134: 0xad0000a4  sw          $zero, 0xA4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291138u;
}
