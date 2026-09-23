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

// Function: specialfxFree
// Address: 0x2aaed8 - 0x2aaff4
void specialfxFree_0x2aaed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxFree_0x2aaed8");
#endif

    switch (ctx->pc) {
        case 0x2aaf20u: goto label_2aaf20;
        case 0x2aaf48u: goto label_2aaf48;
        case 0x2aaf58u: goto label_2aaf58;
        case 0x2aaf68u: goto label_2aaf68;
        case 0x2aaf98u: goto label_2aaf98;
        case 0x2aafacu: goto label_2aafac;
        default: break;
    }

    ctx->pc = 0x2aaed8u;

    // 0x2aaed8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aaed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aaedc: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2aaedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aaee0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aaee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2aaee4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aaee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaee8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2aaee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2aaeec: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2aaeecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aaef0: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x2aaef0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x2aaef4: 0x26a2c268  addiu       $v0, $s5, -0x3D98
    ctx->pc = 0x2aaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2aaef8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2aaef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2aaefc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2aaefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2aaf00: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2aaf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2aaf04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aaf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aaf08: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x2aaf08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2aaf0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aaf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aaf10: 0x24131000  addiu       $s3, $zero, 0x1000
    ctx->pc = 0x2aaf10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2aaf14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2aaf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2aaf18: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2aaf18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aaf1c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2aaf1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2aaf20:
    // 0x2aaf20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2aaf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aaf24: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AAF24u;
    {
        const bool branch_taken_0x2aaf24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf24) {
            ctx->pc = 0x2AAF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAF24u;
            // 0x2aaf28: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAF70u;
            goto label_2aaf70;
        }
    }
    ctx->pc = 0x2AAF2Cu;
    // 0x2aaf2c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2aaf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aaf30: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AAF30u;
    {
        const bool branch_taken_0x2aaf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2aaf30) {
            ctx->pc = 0x2AAF50u;
            goto label_2aaf50;
        }
    }
    ctx->pc = 0x2AAF38u;
    // 0x2aaf38: 0x10530009  beq         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AAF38u;
    {
        const bool branch_taken_0x2aaf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2aaf38) {
            ctx->pc = 0x2AAF60u;
            goto label_2aaf60;
        }
    }
    ctx->pc = 0x2AAF40u;
    // 0x2aaf40: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2AAF40u;
    SET_GPR_U32(ctx, 31, 0x2AAF48u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2AAF40u, 0x2AAF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF48u;
label_2aaf48:
    // 0x2aaf48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAF48u;
    {
        const bool branch_taken_0x2aaf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF48u;
        // 0x2aaf4c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf48) {
            ctx->pc = 0x2AAF6Cu;
            goto label_2aaf6c;
        }
    }
    ctx->pc = 0x2AAF50u;
label_2aaf50:
    // 0x2aaf50: 0xc09e0f0  jal         func_2783C0
    ctx->pc = 0x2AAF50u;
    SET_GPR_U32(ctx, 31, 0x2AAF58u);
    ctx->pc = 0x2783C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783C0u, 0x2AAF50u, 0x2AAF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF58u;
label_2aaf58:
    // 0x2aaf58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAF58u;
    {
        const bool branch_taken_0x2aaf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF58u;
        // 0x2aaf5c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf58) {
            ctx->pc = 0x2AAF6Cu;
            goto label_2aaf6c;
        }
    }
    ctx->pc = 0x2AAF60u;
label_2aaf60:
    // 0x2aaf60: 0xc09cea0  jal         func_273A80
    ctx->pc = 0x2AAF60u;
    SET_GPR_U32(ctx, 31, 0x2AAF68u);
    ctx->pc = 0x273A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273A80u, 0x2AAF60u, 0x2AAF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF68u;
label_2aaf68:
    // 0x2aaf68: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2aaf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2aaf6c:
    // 0x2aaf6c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2aaf6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2aaf70:
    // 0x2aaf70: 0x621ffeb  bgez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2AAF70u;
    {
        const bool branch_taken_0x2aaf70 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2AAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF70u;
        // 0x2aaf74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf70) {
            ctx->pc = 0x2AAF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aaf20;
        }
    }
    ctx->pc = 0x2AAF78u;
    // 0x2aaf78: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2aaf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aaf7c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2aaf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2aaf80: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2aaf80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aaf84: 0x2442c268  addiu       $v0, $v0, -0x3D98
    ctx->pc = 0x2aaf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951528));
    // 0x2aaf88: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2aaf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2aaf8c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2aaf8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aaf90: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2aaf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aaf94: 0x0  nop
    ctx->pc = 0x2aaf94u;
    // NOP
label_2aaf98:
    // 0x2aaf98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2aaf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aaf9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAF9Cu;
    {
        const bool branch_taken_0x2aaf9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF9Cu;
        // 0x2aafa0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf9c) {
            ctx->pc = 0x2AAFB0u;
            goto label_2aafb0;
        }
    }
    ctx->pc = 0x2AAFA4u;
    // 0x2aafa4: 0xc0a5ac2  jal         func_296B08
    ctx->pc = 0x2AAFA4u;
    SET_GPR_U32(ctx, 31, 0x2AAFACu);
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x2AAFA4u, 0x2AAFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAFACu;
label_2aafac:
    // 0x2aafac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2aafacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2aafb0:
    // 0x2aafb0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AAFB0u;
    {
        const bool branch_taken_0x2aafb0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2AAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAFB0u;
        // 0x2aafb4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafb0) {
            ctx->pc = 0x2AAF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aaf98;
        }
    }
    ctx->pc = 0x2AAFB8u;
    // 0x2aafb8: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2aafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aafbc: 0x26a4c268  addiu       $a0, $s5, -0x3D98
    ctx->pc = 0x2aafbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2aafc0: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2aafc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aafc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2aafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aafc8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2aafc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aafcc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2aafccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aafd0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2aafd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aafd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2aafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2aafd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2aafd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aafdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aafdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aafe0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aafe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aafe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aafe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aafe8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2aafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2aafec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAFECu;
        // 0x2aaff0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAFF4u;
}
