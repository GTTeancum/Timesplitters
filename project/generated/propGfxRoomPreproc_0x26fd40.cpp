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

// Function: propGfxRoomPreproc
// Address: 0x26fd40 - 0x26fe08
void propGfxRoomPreproc_0x26fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propGfxRoomPreproc_0x26fd40");
#endif

    switch (ctx->pc) {
        case 0x26fd58u: goto label_26fd58;
        case 0x26fd88u: goto label_26fd88;
        default: break;
    }

    ctx->pc = 0x26fd40u;

    // 0x26fd40: 0x3c0e01ff  lui         $t6, 0x1FF
    ctx->pc = 0x26fd40u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)511 << 16));
    // 0x26fd44: 0x8f8db15c  lw          $t5, -0x4EA4($gp)
    ctx->pc = 0x26fd44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x26fd48: 0x25c29598  addiu       $v0, $t6, -0x6A68
    ctx->pc = 0x26fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294940056));
    // 0x26fd4c: 0x240a00d4  addiu       $t2, $zero, 0xD4
    ctx->pc = 0x26fd4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x26fd50: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x26fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x26fd54: 0x0  nop
    ctx->pc = 0x26fd54u;
    // NOP
label_26fd58:
    // 0x26fd58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x26fd5c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x26fd5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x26fd60: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x26fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26fd64: 0x0  nop
    ctx->pc = 0x26fd64u;
    // NOP
    // 0x26fd68: 0x0  nop
    ctx->pc = 0x26fd68u;
    // NOP
    // 0x26fd6c: 0x541fffa  bgez        $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26FD6Cu;
    {
        const bool branch_taken_0x26fd6c = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x26fd6c) {
            ctx->pc = 0x26FD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26fd58;
        }
    }
    ctx->pc = 0x26FD74u;
    // 0x26fd74: 0x19a00022  blez        $t5, . + 4 + (0x22 << 2)
    ctx->pc = 0x26FD74u;
    {
        const bool branch_taken_0x26fd74 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x26FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD74u;
        // 0x26fd78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd74) {
            ctx->pc = 0x26FE00u;
            goto label_26fe00;
        }
    }
    ctx->pc = 0x26FD7Cu;
    // 0x26fd7c: 0x8f8cb07c  lw          $t4, -0x4F84($gp)
    ctx->pc = 0x26fd7cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x26fd80: 0x8f8b9cb4  lw          $t3, -0x634C($gp)
    ctx->pc = 0x26fd80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941876)));
    // 0x26fd84: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x26fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_26fd88:
    // 0x26fd88: 0x1421818  mult        $v1, $t2, $v0
    ctx->pc = 0x26fd88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26fd8c: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FD8Cu;
    {
        const bool branch_taken_0x26fd8c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD8Cu;
        // 0x26fd90: 0x6c4021  addu        $t0, $v1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd8c) {
            ctx->pc = 0x26FDA4u;
            goto label_26fda4;
        }
    }
    ctx->pc = 0x26FD94u;
    // 0x26fd94: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x26fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x26fd98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26fd9c: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26FD9Cu;
    {
        const bool branch_taken_0x26fd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26fd9c) {
            ctx->pc = 0x26FDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FD9Cu;
            // 0x26fda0: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FDF4u;
            goto label_26fdf4;
        }
    }
    ctx->pc = 0x26FDA4u;
label_26fda4:
    // 0x26fda4: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x26fda4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x26fda8: 0x25c29598  addiu       $v0, $t6, -0x6A68
    ctx->pc = 0x26fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294940056));
    // 0x26fdac: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x26fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x26fdb0: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x26fdb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26fdb4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x26fdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x26fdb8: 0x28c20064  slti        $v0, $a2, 0x64
    ctx->pc = 0x26fdb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x26fdbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26FDBCu;
    {
        const bool branch_taken_0x26fdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDBCu;
        // 0x26fdc0: 0x2ce200d6  sltiu       $v0, $a3, 0xD6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)214) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdbc) {
            ctx->pc = 0x26FDF0u;
            goto label_26fdf0;
        }
    }
    ctx->pc = 0x26FDC4u;
    // 0x26fdc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26FDC4u;
    {
        const bool branch_taken_0x26fdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDC4u;
        // 0x26fdc8: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdc4) {
            ctx->pc = 0x26FDF0u;
            goto label_26fdf0;
        }
    }
    ctx->pc = 0x26FDCCu;
    // 0x26fdcc: 0x3c0501fd  lui         $a1, 0x1FD
    ctx->pc = 0x26fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)509 << 16));
    // 0x26fdd0: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x26fdd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26fdd4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x26fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26fdd8: 0x24a548c8  addiu       $a1, $a1, 0x48C8
    ctx->pc = 0x26fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18632));
    // 0x26fddc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x26fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26fde0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x26fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x26fde4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26fde8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26fdec: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x26fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_26fdf0:
    // 0x26fdf0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x26fdf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_26fdf4:
    // 0x26fdf4: 0x14d102a  slt         $v0, $t2, $t5
    ctx->pc = 0x26fdf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x26fdf8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x26FDF8u;
    {
        const bool branch_taken_0x26fdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDF8u;
        // 0x26fdfc: 0x24020250  addiu       $v0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdf8) {
            ctx->pc = 0x26FD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26fd88;
        }
    }
    ctx->pc = 0x26FE00u;
label_26fe00:
    // 0x26fe00: 0x3e00008  jr          $ra
    ctx->pc = 0x26FE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FE08u;
}
