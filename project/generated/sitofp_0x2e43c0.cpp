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

// Function: sitofp
// Address: 0x2e43c0 - 0x2e4478
void sitofp_0x2e43c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sitofp_0x2e43c0");
#endif

    switch (ctx->pc) {
        case 0x2e4440u: goto label_2e4440;
        case 0x2e446cu: goto label_2e446c;
        default: break;
    }

    ctx->pc = 0x2e43c0u;

    // 0x2e43c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e43c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e43c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e43c8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2e43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2e43cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e43ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e43d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e43d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e43d4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E43D4u;
    {
        const bool branch_taken_0x2e43d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43D4u;
        // 0x2e43d8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43d4) {
            ctx->pc = 0x2E43E8u;
            goto label_2e43e8;
        }
    }
    ctx->pc = 0x2E43DCu;
    // 0x2e43dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e43e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E43E0u;
    {
        const bool branch_taken_0x2e43e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43E0u;
        // 0x2e43e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43e0) {
            ctx->pc = 0x2E4464u;
            goto label_2e4464;
        }
    }
    ctx->pc = 0x2E43E8u;
label_2e43e8:
    // 0x2e43e8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2e43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2e43ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E43ECu;
    {
        const bool branch_taken_0x2e43ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43ECu;
        // 0x2e43f0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43ec) {
            ctx->pc = 0x2E4418u;
            goto label_2e4418;
        }
    }
    ctx->pc = 0x2E43F4u;
    // 0x2e43f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e43f8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E43F8u;
    {
        const bool branch_taken_0x2e43f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43F8u;
        // 0x2e43fc: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43f8) {
            ctx->pc = 0x2E4410u;
            goto label_2e4410;
        }
    }
    ctx->pc = 0x2E4400u;
    // 0x2e4400: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x2e4400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x2e4404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4408: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E4408u;
    {
        const bool branch_taken_0x2e4408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4408u;
        // 0x2e440c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4408) {
            ctx->pc = 0x2E4470u;
            goto label_2e4470;
        }
    }
    ctx->pc = 0x2E4410u;
label_2e4410:
    // 0x2e4410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4410u;
    {
        const bool branch_taken_0x2e4410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4410u;
        // 0x2e4414: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4410) {
            ctx->pc = 0x2E441Cu;
            goto label_2e441c;
        }
    }
    ctx->pc = 0x2E4418u;
label_2e4418:
    // 0x2e4418: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x2e4418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_2e441c:
    // 0x2e441c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2e441cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e4420: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2e4420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2e4424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e4424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e4428: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2e4428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e442c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E442Cu;
    {
        const bool branch_taken_0x2e442c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E442Cu;
        // 0x2e4430: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e442c) {
            ctx->pc = 0x2E4464u;
            goto label_2e4464;
        }
    }
    ctx->pc = 0x2E4434u;
    // 0x2e4434: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2e4434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4438: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2e4438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2e443c: 0x0  nop
    ctx->pc = 0x2e443cu;
    // NOP
label_2e4440:
    // 0x2e4440: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2e4440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2e4444: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e4444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e4448: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2e4448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e444c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x2e444cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e4450: 0x0  nop
    ctx->pc = 0x2e4450u;
    // NOP
    // 0x2e4454: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E4454u;
    {
        const bool branch_taken_0x2e4454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4454) {
            ctx->pc = 0x2E4440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4440;
        }
    }
    ctx->pc = 0x2E445Cu;
    // 0x2e445c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2e445cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2e4460: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2e4460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2e4464:
    // 0x2e4464: 0xc0b8e9a  jal         func_2E3A68
    ctx->pc = 0x2E4464u;
    SET_GPR_U32(ctx, 31, 0x2E446Cu);
    ctx->pc = 0x2E4468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4464u;
    // 0x2e4468: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A68u, 0x2E4464u, 0x2E446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E446Cu;
label_2e446c:
    // 0x2e446c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4470:
    // 0x2e4470: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4470u;
        // 0x2e4474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4478u;
}
