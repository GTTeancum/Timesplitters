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

// Function: playerSetWindow
// Address: 0x27efb0 - 0x27f098
void playerSetWindow_0x27efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerSetWindow_0x27efb0");
#endif

    switch (ctx->pc) {
        case 0x27efc4u: goto label_27efc4;
        default: break;
    }

    ctx->pc = 0x27efb0u;

    // 0x27efb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27efb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27efb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27efbc: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x27EFBCu;
    SET_GPR_U32(ctx, 31, 0x27EFC4u);
    ctx->pc = 0x27EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFBCu;
    // 0x27efc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x27EFBCu, 0x27EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFC4u;
label_27efc4:
    // 0x27efc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27efc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27efcc: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27EFCCu;
    {
        const bool branch_taken_0x27efcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFCCu;
        // 0x27efd0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efcc) {
            ctx->pc = 0x27F058u;
            goto label_27f058;
        }
    }
    ctx->pc = 0x27EFD4u;
    // 0x27efd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27EFD4u;
    {
        const bool branch_taken_0x27efd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFD4u;
        // 0x27efd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efd4) {
            ctx->pc = 0x27EFECu;
            goto label_27efec;
        }
    }
    ctx->pc = 0x27EFDCu;
    // 0x27efdc: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27EFDCu;
    {
        const bool branch_taken_0x27efdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFDCu;
        // 0x27efe0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efdc) {
            ctx->pc = 0x27F03Cu;
            goto label_27f03c;
        }
    }
    ctx->pc = 0x27EFE4u;
    // 0x27efe4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x27EFE4u;
    {
        const bool branch_taken_0x27efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFE4u;
        // 0x27efe8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efe4) {
            ctx->pc = 0x27F090u;
            goto label_27f090;
        }
    }
    ctx->pc = 0x27EFECu;
label_27efec:
    // 0x27efec: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x27efecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x27eff0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x27EFF0u;
    {
        const bool branch_taken_0x27eff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFF0u;
        // 0x27eff4: 0x24060142  addiu       $a2, $zero, 0x142 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eff0) {
            ctx->pc = 0x27F088u;
            goto label_27f088;
        }
    }
    ctx->pc = 0x27EFF8u;
    // 0x27eff8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27effc: 0x24070071  addiu       $a3, $zero, 0x71
    ctx->pc = 0x27effcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x27f000: 0x2408013d  addiu       $t0, $zero, 0x13D
    ctx->pc = 0x27f000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
    // 0x27f004: 0x30690002  andi        $t1, $v1, 0x2
    ctx->pc = 0x27f004u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x27f008: 0x2405027f  addiu       $a1, $zero, 0x27F
    ctx->pc = 0x27f008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x27f00c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27f00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27f010: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x27f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x27f014: 0x240400df  addiu       $a0, $zero, 0xDF
    ctx->pc = 0x27f014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x27f018: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x27f018u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x27f01c: 0x89100b  movn        $v0, $a0, $t1
    ctx->pc = 0x27f01cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x27f020: 0x3300a  movz        $a2, $zero, $v1
    ctx->pc = 0x27f020u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x27f024: 0x9380a  movz        $a3, $zero, $t1
    ctx->pc = 0x27f024u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x27f028: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x27f028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x27f02c: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x27f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x27f030: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x27f030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x27f034: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27F034u;
    {
        const bool branch_taken_0x27f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F034u;
        // 0x27f038: 0xae08000c  sw          $t0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f034) {
            ctx->pc = 0x27F088u;
            goto label_27f088;
        }
    }
    ctx->pc = 0x27F03Cu;
label_27f03c:
    // 0x27f03c: 0x2403027f  addiu       $v1, $zero, 0x27F
    ctx->pc = 0x27f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x27f040: 0x240200df  addiu       $v0, $zero, 0xDF
    ctx->pc = 0x27f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x27f044: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x27f044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x27f048: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x27f048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x27f04c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x27f050: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27F050u;
    {
        const bool branch_taken_0x27f050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F050u;
        // 0x27f054: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f050) {
            ctx->pc = 0x27F088u;
            goto label_27f088;
        }
    }
    ctx->pc = 0x27F058u;
label_27f058:
    // 0x27f058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f05c: 0x24040071  addiu       $a0, $zero, 0x71
    ctx->pc = 0x27f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x27f060: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x27f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x27f064: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x27f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x27f068: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27f06c: 0x2406027f  addiu       $a2, $zero, 0x27F
    ctx->pc = 0x27f06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x27f070: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x27f070u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x27f074: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x27f074u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x27f078: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x27f078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x27f07c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x27f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x27f080: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x27f080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x27f084: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27f084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_27f088:
    // 0x27f088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27f088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27f08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27f090:
    // 0x27f090: 0x3e00008  jr          $ra
    ctx->pc = 0x27F090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F090u;
        // 0x27f094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F098u;
}
