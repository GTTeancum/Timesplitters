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

// Function: ingamemenuCheckUnpause
// Address: 0x212b98 - 0x212cec
void ingamemenuCheckUnpause_0x212b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingamemenuCheckUnpause_0x212b98");
#endif

    switch (ctx->pc) {
        case 0x212bd0u: goto label_212bd0;
        case 0x212c58u: goto label_212c58;
        case 0x212c80u: goto label_212c80;
        default: break;
    }

    ctx->pc = 0x212b98u;

    // 0x212b98: 0x8f82b688  lw          $v0, -0x4978($gp)
    ctx->pc = 0x212b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948488)));
    // 0x212b9c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x212b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x212ba0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x212ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x212ba4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x212ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212ba8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x212ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x212bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212bb0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x212BB0u;
    {
        const bool branch_taken_0x212bb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x212BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BB0u;
        // 0x212bb4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bb0) {
            ctx->pc = 0x212BC8u;
            goto label_212bc8;
        }
    }
    ctx->pc = 0x212BB8u;
    // 0x212bb8: 0x8f839dac  lw          $v1, -0x6254($gp)
    ctx->pc = 0x212bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x212bbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212bc0: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x212BC0u;
    {
        const bool branch_taken_0x212bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x212BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BC0u;
        // 0x212bc4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bc0) {
            ctx->pc = 0x212CD8u;
            goto label_212cd8;
        }
    }
    ctx->pc = 0x212BC8u;
label_212bc8:
    // 0x212bc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x212bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bcc: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x212bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_212bd0:
    // 0x212bd0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x212bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x212bd4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x212BD4u;
    {
        const bool branch_taken_0x212bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BD4u;
        // 0x212bd8: 0x8f839dac  lw          $v1, -0x6254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bd4) {
            ctx->pc = 0x212C30u;
            goto label_212c30;
        }
    }
    ctx->pc = 0x212BDCu;
    // 0x212bdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x212bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212be0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x212BE0u;
    {
        const bool branch_taken_0x212be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x212BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BE0u;
        // 0x212be4: 0x3c1201fb  lui         $s2, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)507 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212be0) {
            ctx->pc = 0x212C10u;
            goto label_212c10;
        }
    }
    ctx->pc = 0x212BE8u;
    // 0x212be8: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x212be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x212bec: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x212becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x212bf0: 0x26433240  addiu       $v1, $s2, 0x3240
    ctx->pc = 0x212bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12864));
    // 0x212bf4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x212bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x212bf8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x212bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x212bfc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x212bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x212c00: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x212C00u;
    {
        const bool branch_taken_0x212c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212c00) {
            ctx->pc = 0x212C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212C00u;
            // 0x212c04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212bd0;
        }
    }
    ctx->pc = 0x212C08u;
    // 0x212c08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x212C08u;
    {
        const bool branch_taken_0x212c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C08u;
        // 0x212c0c: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c08) {
            ctx->pc = 0x212C14u;
            goto label_212c14;
        }
    }
    ctx->pc = 0x212C10u;
label_212c10:
    // 0x212c10: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x212c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_212c14:
    // 0x212c14: 0x26443240  addiu       $a0, $s2, 0x3240
    ctx->pc = 0x212c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12864));
    // 0x212c18: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x212c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212c1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212c20: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x212c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x212c24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x212c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x212c28: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x212C28u;
    {
        const bool branch_taken_0x212c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212c28) {
            ctx->pc = 0x212C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212C28u;
            // 0x212c2c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212bd0;
        }
    }
    ctx->pc = 0x212C30u;
label_212c30:
    // 0x212c30: 0x16050029  bne         $s0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x212C30u;
    {
        const bool branch_taken_0x212c30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x212C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C30u;
        // 0x212c34: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c30) {
            ctx->pc = 0x212CD8u;
            goto label_212cd8;
        }
    }
    ctx->pc = 0x212C38u;
    // 0x212c38: 0x4c0001e  bltz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x212C38u;
    {
        const bool branch_taken_0x212c38 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x212C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C38u;
        // 0x212c3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c38) {
            ctx->pc = 0x212CB4u;
            goto label_212cb4;
        }
    }
    ctx->pc = 0x212C40u;
    // 0x212c40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x212c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c44: 0xaf82b688  sw          $v0, -0x4978($gp)
    ctx->pc = 0x212c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948488), GPR_U32(ctx, 2));
    // 0x212c48: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x212C48u;
    {
        const bool branch_taken_0x212c48 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x212C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C48u;
        // 0x212c4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c48) {
            ctx->pc = 0x212C94u;
            goto label_212c94;
        }
    }
    ctx->pc = 0x212C50u;
    // 0x212c50: 0x3c1201fb  lui         $s2, 0x1FB
    ctx->pc = 0x212c50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)507 << 16));
    // 0x212c54: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x212c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_212c58:
    // 0x212c58: 0x26443240  addiu       $a0, $s2, 0x3240
    ctx->pc = 0x212c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12864));
    // 0x212c5c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x212c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212c60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212c64: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x212c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x212c68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x212c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x212c6c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x212C6Cu;
    {
        const bool branch_taken_0x212c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212c6c) {
            ctx->pc = 0x212C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212C6Cu;
            // 0x212c70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212C88u;
            goto label_212c88;
        }
    }
    ctx->pc = 0x212C74u;
    // 0x212c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c78: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x212C78u;
    SET_GPR_U32(ctx, 31, 0x212C80u);
    ctx->pc = 0x212C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C78u;
    // 0x212c7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x212C78u, 0x212C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C80u;
label_212c80:
    // 0x212c80: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x212c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x212c84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x212c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_212c88:
    // 0x212c88: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x212c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x212c8c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x212C8Cu;
    {
        const bool branch_taken_0x212c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C8Cu;
        // 0x212c90: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c8c) {
            ctx->pc = 0x212C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212c58;
        }
    }
    ctx->pc = 0x212C94u;
label_212c94:
    // 0x212c94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x212C94u;
    {
        const bool branch_taken_0x212c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C94u;
        // 0x212c98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c94) {
            ctx->pc = 0x212CD8u;
            goto label_212cd8;
        }
    }
    ctx->pc = 0x212C9Cu;
    // 0x212c9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ca0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x212ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212ca4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212cac: 0x80ada06  j           func_2B6818
    ctx->pc = 0x212CACu;
    ctx->pc = 0x212CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CACu;
    // 0x212cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6818u;
    timePause_0x2b6818(rdram, ctx, runtime); return;
    ctx->pc = 0x212CB4u;
label_212cb4:
    // 0x212cb4: 0x8f839dac  lw          $v1, -0x6254($gp)
    ctx->pc = 0x212cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x212cb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212cbc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x212CBCu;
    {
        const bool branch_taken_0x212cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x212CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CBCu;
        // 0x212cc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212cbc) {
            ctx->pc = 0x212CD8u;
            goto label_212cd8;
        }
    }
    ctx->pc = 0x212CC4u;
    // 0x212cc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x212cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212cc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212cd0: 0x80874ce  j           func_21D338
    ctx->pc = 0x212CD0u;
    ctx->pc = 0x212CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CD0u;
    // 0x212cd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D338u;
    gameLevelQuit_0x21d338(rdram, ctx, runtime); return;
    ctx->pc = 0x212CD8u;
label_212cd8:
    // 0x212cd8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x212cd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212cdc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x212CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CE4u;
        // 0x212ce8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212CECu;
}
