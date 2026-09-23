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

// Function: propGfxRoom
// Address: 0x26fe08 - 0x26ff0c
void propGfxRoom_0x26fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propGfxRoom_0x26fe08");
#endif

    switch (ctx->pc) {
        case 0x26fe58u: goto label_26fe58;
        case 0x26febcu: goto label_26febc;
        case 0x26fec8u: goto label_26fec8;
        default: break;
    }

    ctx->pc = 0x26fe08u;

    // 0x26fe08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26fe0c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26fe10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26fe14: 0x3c1501ff  lui         $s5, 0x1FF
    ctx->pc = 0x26fe14u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)511 << 16));
    // 0x26fe18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26fe1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26fe1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe20: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x26fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x26fe24: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x26fe24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x26fe28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26fe2c: 0x26a29598  addiu       $v0, $s5, -0x6A68
    ctx->pc = 0x26fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940056));
    // 0x26fe30: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x26fe34: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x26fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x26fe38: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x26fe3c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x26fe3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26fe44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26fe48: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x26FE48u;
    {
        const bool branch_taken_0x26fe48 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE48u;
        // 0x26fe4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe48) {
            ctx->pc = 0x26FEE4u;
            goto label_26fee4;
        }
    }
    ctx->pc = 0x26FE50u;
    // 0x26fe50: 0x3c1401fd  lui         $s4, 0x1FD
    ctx->pc = 0x26fe50u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)509 << 16));
    // 0x26fe54: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x26fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_26fe58:
    // 0x26fe58: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x26fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26fe5c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x26fe5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26fe60: 0x268448c8  addiu       $a0, $s4, 0x48C8
    ctx->pc = 0x26fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18632));
    // 0x26fe64: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26fe64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26fe68: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26fe68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26fe6c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x26fe6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x26fe70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26fe70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fe74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26fe78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26fe7c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x26fe7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26fe80: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x26fe80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26fe84: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x26fe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x26fe88: 0x14460010  bne         $v0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x26FE88u;
    {
        const bool branch_taken_0x26fe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x26FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE88u;
        // 0x26fe8c: 0x26a39598  addiu       $v1, $s5, -0x6A68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe88) {
            ctx->pc = 0x26FECCu;
            goto label_26fecc;
        }
    }
    ctx->pc = 0x26FE90u;
    // 0x26fe90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x26fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26fe94: 0x24020136  addiu       $v0, $zero, 0x136
    ctx->pc = 0x26fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x26fe98: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26FE98u;
    {
        const bool branch_taken_0x26fe98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26fe98) {
            ctx->pc = 0x26FE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FE98u;
            // 0x26fe9c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FEC0u;
            goto label_26fec0;
        }
    }
    ctx->pc = 0x26FEA0u;
    // 0x26fea0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x26fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x26fea4: 0x244399f0  addiu       $v1, $v0, -0x6610
    ctx->pc = 0x26fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x26fea8: 0x8c4499f0  lw          $a0, -0x6610($v0)
    ctx->pc = 0x26fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x26feac: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x26feacu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A08u));
    // 0x26feb0: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x26feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A04u));
    // 0x26feb4: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x26FEB4u;
    SET_GPR_U32(ctx, 31, 0x26FEBCu);
    ctx->pc = 0x26FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FEB4u;
    // 0x26feb8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x26FEB4u, 0x26FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FEBCu;
label_26febc:
    // 0x26febc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x26febcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_26fec0:
    // 0x26fec0: 0xc098a98  jal         func_262A60
    ctx->pc = 0x26FEC0u;
    SET_GPR_U32(ctx, 31, 0x26FEC8u);
    ctx->pc = 0x26FEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FEC0u;
    // 0x26fec4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x26FEC0u, 0x26FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FEC8u;
label_26fec8:
    // 0x26fec8: 0x26a39598  addiu       $v1, $s5, -0x6A68
    ctx->pc = 0x26fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940056));
label_26fecc:
    // 0x26fecc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26feccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26fed0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x26fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x26fed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26fed8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x26fed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26fedc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x26FEDCu;
    {
        const bool branch_taken_0x26fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEDCu;
        // 0x26fee0: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fedc) {
            ctx->pc = 0x26FE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26fe58;
        }
    }
    ctx->pc = 0x26FEE4u;
label_26fee4:
    // 0x26fee4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26fee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26fee8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x26fee8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26feec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26feecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26fef0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26fef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26fef4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26fef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26fef8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26fef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fefc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26fefcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ff00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26ff00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ff04: 0x3e00008  jr          $ra
    ctx->pc = 0x26FF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF04u;
        // 0x26ff08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FF0Cu;
}
