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

// Function: menuitemCalcPos
// Address: 0x20cb50 - 0x20cc24
void menuitemCalcPos_0x20cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuitemCalcPos_0x20cb50");
#endif

    ctx->pc = 0x20cb50u;

    // 0x20cb50: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x20cb50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x20cb54: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20CB54u;
    {
        const bool branch_taken_0x20cb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB54u;
        // 0x20cb58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb54) {
            ctx->pc = 0x20CC1Cu;
            goto label_20cc1c;
        }
    }
    ctx->pc = 0x20CB5Cu;
    // 0x20cb5c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x20cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20cb60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20cb64: 0x2442a0e0  addiu       $v0, $v0, -0x5F20
    ctx->pc = 0x20cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942944));
    // 0x20cb68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20cb6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20cb70: 0x800008  jr          $a0
    ctx->pc = 0x20CB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CB78u: goto label_20cb78;
            case 0x20CB80u: goto label_20cb80;
            case 0x20CB88u: goto label_20cb88;
            case 0x20CBA0u: goto label_20cba0;
            case 0x20CBA8u: goto label_20cba8;
            case 0x20CBB4u: goto label_20cbb4;
            case 0x20CBDCu: goto label_20cbdc;
            case 0x20CBF4u: goto label_20cbf4;
            case 0x20CBFCu: goto label_20cbfc;
            case 0x20CC14u: goto label_20cc14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CB70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20CB78u;
label_20cb78:
    // 0x20cb78: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x20CB78u;
    {
        const bool branch_taken_0x20cb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB78u;
        // 0x20cb7c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb78) {
            ctx->pc = 0x20CC1Cu;
            goto label_20cc1c;
        }
    }
    ctx->pc = 0x20CB80u;
label_20cb80:
    // 0x20cb80: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x20CB80u;
    {
        const bool branch_taken_0x20cb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB80u;
        // 0x20cb84: 0xe51821  addu        $v1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb80) {
            ctx->pc = 0x20CC1Cu;
            goto label_20cc1c;
        }
    }
    ctx->pc = 0x20CB88u;
label_20cb88:
    // 0x20cb88: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x20cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20cb8c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x20cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x20cb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cb94: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20cb94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20cb98: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20CB98u;
    {
        const bool branch_taken_0x20cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB98u;
        // 0x20cb9c: 0x451821  addu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb98) {
            ctx->pc = 0x20CC1Cu;
            goto label_20cc1c;
        }
    }
    ctx->pc = 0x20CBA0u;
label_20cba0:
    // 0x20cba0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20CBA0u;
    {
        const bool branch_taken_0x20cba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBA0u;
        // 0x20cba4: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cba0) {
            ctx->pc = 0x20CC1Cu;
            goto label_20cc1c;
        }
    }
    ctx->pc = 0x20CBA8u;
label_20cba8:
    // 0x20cba8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x20cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20cbac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20CBACu;
    {
        const bool branch_taken_0x20cbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBACu;
        // 0x20cbb0: 0xe51821  addu        $v1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbac) {
            ctx->pc = 0x20CBE4u;
            goto label_20cbe4;
        }
    }
    ctx->pc = 0x20CBB4u;
label_20cbb4:
    // 0x20cbb4: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x20cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20cbb8: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x20cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20cbbc: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x20cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x20cbc0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20cbc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20cbc8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x20cbc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20cbcc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20cbccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20cbd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20cbd4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20CBD4u;
    {
        const bool branch_taken_0x20cbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBD4u;
        // 0x20cbd8: 0x431823  subu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbd4) {
            ctx->pc = 0x20CC1Cu;
            goto label_20cc1c;
        }
    }
    ctx->pc = 0x20CBDCu;
label_20cbdc:
    // 0x20cbdc: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x20cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20cbe0: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_20cbe4:
    // 0x20cbe4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20cbe8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20cbe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20cbec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20CBECu;
    {
        const bool branch_taken_0x20cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBECu;
        // 0x20cbf0: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbec) {
            ctx->pc = 0x20CC1Cu;
            goto label_20cc1c;
        }
    }
    ctx->pc = 0x20CBF4u;
label_20cbf4:
    // 0x20cbf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20CBF4u;
    {
        const bool branch_taken_0x20cbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBF4u;
        // 0x20cbf8: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbf4) {
            ctx->pc = 0x20CC18u;
            goto label_20cc18;
        }
    }
    ctx->pc = 0x20CBFCu;
label_20cbfc:
    // 0x20cbfc: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x20cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20cc00: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x20cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x20cc04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cc08: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20cc08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20cc0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20CC0Cu;
    {
        const bool branch_taken_0x20cc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC0Cu;
        // 0x20cc10: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc0c) {
            ctx->pc = 0x20CC18u;
            goto label_20cc18;
        }
    }
    ctx->pc = 0x20CC14u;
label_20cc14:
    // 0x20cc14: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x20cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_20cc18:
    // 0x20cc18: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x20cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20cc1c:
    // 0x20cc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x20CC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC1Cu;
        // 0x20cc20: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CC24u;
}
