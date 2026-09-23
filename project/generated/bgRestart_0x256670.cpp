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

// Function: bgRestart
// Address: 0x256670 - 0x256750
void bgRestart_0x256670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgRestart_0x256670");
#endif

    switch (ctx->pc) {
        case 0x25668cu: goto label_25668c;
        case 0x25669cu: goto label_25669c;
        case 0x2566b0u: goto label_2566b0;
        case 0x2566e8u: goto label_2566e8;
        case 0x2566f8u: goto label_2566f8;
        default: break;
    }

    ctx->pc = 0x256670u;

    // 0x256670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x256670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x256674: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x256674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x256678: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x256678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x25667c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25667Cu;
    {
        const bool branch_taken_0x25667c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x256680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25667Cu;
        // 0x256680: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25667c) {
            ctx->pc = 0x256694u;
            goto label_256694;
        }
    }
    ctx->pc = 0x256684u;
    // 0x256684: 0xc095974  jal         func_2565D0
    ctx->pc = 0x256684u;
    SET_GPR_U32(ctx, 31, 0x25668Cu);
    ctx->pc = 0x2565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2565D0u, 0x256684u, 0x25668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25668Cu;
label_25668c:
    // 0x25668c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25668Cu;
    {
        const bool branch_taken_0x25668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25668Cu;
        // 0x256690: 0x8f84a264  lw          $a0, -0x5D9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25668c) {
            ctx->pc = 0x2566A0u;
            goto label_2566a0;
        }
    }
    ctx->pc = 0x256694u;
label_256694:
    // 0x256694: 0xc095952  jal         func_256548
    ctx->pc = 0x256694u;
    SET_GPR_U32(ctx, 31, 0x25669Cu);
    ctx->pc = 0x256548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256548u, 0x256694u, 0x25669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25669Cu;
label_25669c:
    // 0x25669c: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x25669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_2566a0:
    // 0x2566a0: 0x18800028  blez        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2566A0u;
    {
        const bool branch_taken_0x2566a0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2566A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566A0u;
        // 0x2566a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566a0) {
            ctx->pc = 0x256744u;
            goto label_256744;
        }
    }
    ctx->pc = 0x2566A8u;
    // 0x2566a8: 0x8f88a240  lw          $t0, -0x5DC0($gp)
    ctx->pc = 0x2566a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x2566ac: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2566acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2566b0:
    // 0x2566b0: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x2566b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2566b4: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x2566b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2566b8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2566b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2566bc: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2566BCu;
    {
        const bool branch_taken_0x2566bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566BCu;
        // 0x2566c0: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566bc) {
            ctx->pc = 0x256734u;
            goto label_256734;
        }
    }
    ctx->pc = 0x2566C4u;
    // 0x2566c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2566c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2566c8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2566C8u;
    {
        const bool branch_taken_0x2566c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566C8u;
        // 0x2566cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566c8) {
            ctx->pc = 0x256734u;
            goto label_256734;
        }
    }
    ctx->pc = 0x2566D0u;
    // 0x2566d0: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x2566d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2566d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2566d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2566d8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2566d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2566dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2566dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2566e0: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x2566e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2566e4: 0x0  nop
    ctx->pc = 0x2566e4u;
    // NOP
label_2566e8:
    // 0x2566e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2566e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2566ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2566ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2566f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2566f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2566f4: 0x244200bc  addiu       $v0, $v0, 0xBC
    ctx->pc = 0x2566f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
label_2566f8:
    // 0x2566f8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2566f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2566fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2566fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x256700: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x256700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x256704: 0x0  nop
    ctx->pc = 0x256704u;
    // NOP
    // 0x256708: 0x0  nop
    ctx->pc = 0x256708u;
    // NOP
    // 0x25670c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25670Cu;
    {
        const bool branch_taken_0x25670c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25670c) {
            ctx->pc = 0x2566F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2566f8;
        }
    }
    ctx->pc = 0x256714u;
    // 0x256714: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x256714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256718: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x256718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25671c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256720: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x256720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x256724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x256724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256728: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x256728u;
    {
        const bool branch_taken_0x256728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256728u;
        // 0x25672c: 0x24c40001  addiu       $a0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256728) {
            ctx->pc = 0x2566E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2566e8;
        }
    }
    ctx->pc = 0x256730u;
    // 0x256730: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x256730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_256734:
    // 0x256734: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x256734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256738: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x256738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25673c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x25673Cu;
    {
        const bool branch_taken_0x25673c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25673Cu;
        // 0x256740: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25673c) {
            ctx->pc = 0x2566B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2566b0;
        }
    }
    ctx->pc = 0x256744u;
label_256744:
    // 0x256744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256748: 0x3e00008  jr          $ra
    ctx->pc = 0x256748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256748u;
        // 0x25674c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256750u;
}
