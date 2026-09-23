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

// Function: lvGetNumFromName
// Address: 0x2257e8 - 0x2258b8
void lvGetNumFromName_0x2257e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetNumFromName_0x2257e8");
#endif

    switch (ctx->pc) {
        case 0x225840u: goto label_225840;
        case 0x225860u: goto label_225860;
        case 0x2258a0u: goto label_2258a0;
        default: break;
    }

    ctx->pc = 0x2257e8u;

    // 0x2257e8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2257e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2257ec: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x2257ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2257f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2257f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2257f4: 0x24462c18  addiu       $a2, $v0, 0x2C18
    ctx->pc = 0x2257f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2257f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2257f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2257fc: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x2257fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x225800: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x225800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x225804: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x225804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x225808: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x225808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22580c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x225810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225818: 0x84e33920  lh          $v1, 0x3920($a3)
    ctx->pc = 0x225818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 14624)));
    // 0x22581c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22581cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225828: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x225828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22582c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22582Cu;
    {
        const bool branch_taken_0x22582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22582Cu;
        // 0x225830: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22582c) {
            ctx->pc = 0x225898u;
            goto label_225898;
        }
    }
    ctx->pc = 0x225834u;
    // 0x225834: 0x24f03920  addiu       $s0, $a3, 0x3920
    ctx->pc = 0x225834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 14624));
    // 0x225838: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x225838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22583c: 0x0  nop
    ctx->pc = 0x22583cu;
    // NOP
label_225840:
    // 0x225840: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x225840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225844: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x225844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x225848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22584c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22584cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225850: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225854: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x225854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x225858: 0xc0b96aa  jal         func_2E5AA8
    ctx->pc = 0x225858u;
    SET_GPR_U32(ctx, 31, 0x225860u);
    ctx->pc = 0x22585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225858u;
    // 0x22585c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5AA8u, 0x225858u, 0x225860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225860u;
label_225860:
    // 0x225860: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225860u;
    {
        const bool branch_taken_0x225860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225860u;
        // 0x225864: 0x8f859354  lw          $a1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225860) {
            ctx->pc = 0x225870u;
            goto label_225870;
        }
    }
    ctx->pc = 0x225868u;
    // 0x225868: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x225868u;
    {
        const bool branch_taken_0x225868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225868u;
        // 0x22586c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225868) {
            ctx->pc = 0x2258A0u;
            goto label_2258a0;
        }
    }
    ctx->pc = 0x225870u;
label_225870:
    // 0x225870: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x225870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x225874: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x225874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225878: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x225878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22587c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x225880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x225880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x225884: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x225884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225888: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x225888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22588c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225890: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x225890u;
    {
        const bool branch_taken_0x225890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225890u;
        // 0x225894: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225890) {
            ctx->pc = 0x225840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225840;
        }
    }
    ctx->pc = 0x225898u;
label_225898:
    // 0x225898: 0xc0b91b8  jal         func_2E46E0
    ctx->pc = 0x225898u;
    SET_GPR_U32(ctx, 31, 0x2258A0u);
    ctx->pc = 0x22589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225898u;
    // 0x22589c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46E0u, 0x225898u, 0x2258A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2258A0u;
label_2258a0:
    // 0x2258a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2258a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2258a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2258a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2258a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2258a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2258ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2258acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2258b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2258B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2258B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258B0u;
        // 0x2258b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2258B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2258B8u;
}
