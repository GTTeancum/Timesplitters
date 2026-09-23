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

// Function: bglightAdd
// Address: 0x25a720 - 0x25a7cc
void bglightAdd_0x25a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bglightAdd_0x25a720");
#endif

    switch (ctx->pc) {
        case 0x25a750u: goto label_25a750;
        case 0x25a768u: goto label_25a768;
        default: break;
    }

    ctx->pc = 0x25a720u;

    // 0x25a720: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x25a720u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25a724: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x25a724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25a728: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x25a728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x25a72c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x25a72cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25a730: 0x1423023  subu        $a2, $t2, $v0
    ctx->pc = 0x25a730u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x25a734: 0xca182b  sltu        $v1, $a2, $t2
    ctx->pc = 0x25a734u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x25a738: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x25A738u;
    {
        const bool branch_taken_0x25a738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A738u;
        // 0x25a73c: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a738) {
            ctx->pc = 0x25A7C4u;
            goto label_25a7c4;
        }
    }
    ctx->pc = 0x25A740u;
    // 0x25a740: 0x240c0098  addiu       $t4, $zero, 0x98
    ctx->pc = 0x25a740u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x25a744: 0x244b5f18  addiu       $t3, $v0, 0x5F18
    ctx->pc = 0x25a744u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 24344));
    // 0x25a748: 0x80c20006  lb          $v0, 0x6($a2)
    ctx->pc = 0x25a748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x25a74c: 0x0  nop
    ctx->pc = 0x25a74cu;
    // NOP
label_25a750:
    // 0x25a750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25a750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a754: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25A754u;
    {
        const bool branch_taken_0x25a754 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A754u;
        // 0x25a758: 0x90c80006  lbu         $t0, 0x6($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a754) {
            ctx->pc = 0x25A7B0u;
            goto label_25a7b0;
        }
    }
    ctx->pc = 0x25A75Cu;
    // 0x25a75c: 0x8f85a298  lw          $a1, -0x5D68($gp)
    ctx->pc = 0x25a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943384)));
    // 0x25a760: 0x24c90050  addiu       $t1, $a2, 0x50
    ctx->pc = 0x25a760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x25a764: 0xec2018  mult        $a0, $a3, $t4
    ctx->pc = 0x25a764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_25a768:
    // 0x25a768: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x25a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x25a76c: 0x28a3012c  slti        $v1, $a1, 0x12C
    ctx->pc = 0x25a76cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x25a770: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25A770u;
    {
        const bool branch_taken_0x25a770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A770u;
        // 0x25a774: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a770) {
            ctx->pc = 0x25A790u;
            goto label_25a790;
        }
    }
    ctx->pc = 0x25A778u;
    // 0x25a778: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x25a778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25a77c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x25a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x25a780: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25a780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25a784: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x25a784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x25a788: 0xaf85a298  sw          $a1, -0x5D68($gp)
    ctx->pc = 0x25a788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943384), GPR_U32(ctx, 5));
    // 0x25a78c: 0x90c80006  lbu         $t0, 0x6($a2)
    ctx->pc = 0x25a78cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
label_25a790:
    // 0x25a790: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x25a790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x25a794: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25a794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25a798: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x25a798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x25a79c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x25a79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25a7a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x25A7A0u;
    {
        const bool branch_taken_0x25a7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7A0u;
        // 0x25a7a4: 0xec2018  mult        $a0, $a3, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7a0) {
            ctx->pc = 0x25A768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a768;
        }
    }
    ctx->pc = 0x25A7A8u;
    // 0x25a7a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25A7A8u;
    {
        const bool branch_taken_0x25a7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7A8u;
        // 0x25a7ac: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7a8) {
            ctx->pc = 0x25A7B8u;
            goto label_25a7b8;
        }
    }
    ctx->pc = 0x25A7B0u;
label_25a7b0:
    // 0x25a7b0: 0x24c90050  addiu       $t1, $a2, 0x50
    ctx->pc = 0x25a7b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x25a7b4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x25a7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25a7b8:
    // 0x25a7b8: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x25a7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x25a7bc: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x25A7BCu;
    {
        const bool branch_taken_0x25a7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a7bc) {
            ctx->pc = 0x25A7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A7BCu;
            // 0x25a7c0: 0x80c20006  lb          $v0, 0x6($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a750;
        }
    }
    ctx->pc = 0x25A7C4u;
label_25a7c4:
    // 0x25a7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A7CCu;
}
