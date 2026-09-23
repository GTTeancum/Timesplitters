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

// Function: prefs_vars
// Address: 0x20f8d8 - 0x20f984
void prefs_vars_0x20f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("prefs_vars_0x20f8d8");
#endif

    ctx->pc = 0x20f8d8u;

    // 0x20f8d8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f8dc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20f8e0: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x20f8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x20f8e4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x20f8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x20f8e8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x20f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f8ec: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x20f8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x20f8f0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x20f8f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20f8f4: 0x219c3  sra         $v1, $v0, 7
    ctx->pc = 0x20f8f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 7));
    // 0x20f8f8: 0x30490060  andi        $t1, $v0, 0x60
    ctx->pc = 0x20f8f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x20f8fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20f8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20f900: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20f900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20f904: 0xaca3a7e8  sw          $v1, -0x5818($a1)
    ctx->pc = 0x20f904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294944744), GPR_U32(ctx, 3));
    // 0x20f908: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20f908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20f90c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x20f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x20f910: 0xacc2a858  sw          $v0, -0x57A8($a2)
    ctx->pc = 0x20f910u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294944856), GPR_U32(ctx, 2));
    // 0x20f914: 0x1127000d  beq         $t1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x20F914u;
    {
        const bool branch_taken_0x20f914 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x20F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F914u;
        // 0x20f918: 0xad03a830  sw          $v1, -0x57D0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294944816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f914) {
            ctx->pc = 0x20F94Cu;
            goto label_20f94c;
        }
    }
    ctx->pc = 0x20F91Cu;
    // 0x20f91c: 0x29220041  slti        $v0, $t1, 0x41
    ctx->pc = 0x20f91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x20f920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F920u;
    {
        const bool branch_taken_0x20f920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F920u;
        // 0x20f924: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f920) {
            ctx->pc = 0x20F938u;
            goto label_20f938;
        }
    }
    ctx->pc = 0x20F928u;
    // 0x20f928: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20F928u;
    {
        const bool branch_taken_0x20f928 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F928u;
        // 0x20f92c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f928) {
            ctx->pc = 0x20F95Cu;
            goto label_20f95c;
        }
    }
    ctx->pc = 0x20F930u;
    // 0x20f930: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20F930u;
    {
        const bool branch_taken_0x20f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f930) {
            ctx->pc = 0x20F97Cu;
            goto label_20f97c;
        }
    }
    ctx->pc = 0x20F938u;
label_20f938:
    // 0x20f938: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x20f938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x20f93c: 0x1122000b  beq         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20F93Cu;
    {
        const bool branch_taken_0x20f93c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F93Cu;
        // 0x20f940: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f93c) {
            ctx->pc = 0x20F96Cu;
            goto label_20f96c;
        }
    }
    ctx->pc = 0x20F944u;
    // 0x20f944: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20F944u;
    {
        const bool branch_taken_0x20f944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f944) {
            ctx->pc = 0x20F97Cu;
            goto label_20f97c;
        }
    }
    ctx->pc = 0x20F94Cu;
label_20f94c:
    // 0x20f94c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20f950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f954: 0x3e00008  jr          $ra
    ctx->pc = 0x20F954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F954u;
        // 0x20f958: 0xac62a8a8  sw          $v0, -0x5758($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F95Cu;
label_20f95c:
    // 0x20f95c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20f960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f964: 0x3e00008  jr          $ra
    ctx->pc = 0x20F964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F964u;
        // 0x20f968: 0xac62a8a8  sw          $v0, -0x5758($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F96Cu;
label_20f96c:
    // 0x20f96c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20f970: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20f970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f974: 0x3e00008  jr          $ra
    ctx->pc = 0x20F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F974u;
        // 0x20f978: 0xac62a8a8  sw          $v0, -0x5758($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F97Cu;
label_20f97c:
    // 0x20f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F97Cu;
        // 0x20f980: 0xac40a8a8  sw          $zero, -0x5758($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294944936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F984u;
}
