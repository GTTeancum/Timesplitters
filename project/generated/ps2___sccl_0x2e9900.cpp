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

// Function: __sccl
// Address: 0x2e9900 - 0x2e9a04
void ps2___sccl_0x2e9900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sccl_0x2e9900");
#endif

    switch (ctx->pc) {
        case 0x2e9930u: goto label_2e9930;
        case 0x2e9960u: goto label_2e9960;
        case 0x2e9964u: goto label_2e9964;
        case 0x2e9970u: goto label_2e9970;
        case 0x2e99d8u: goto label_2e99d8;
        default: break;
    }

    ctx->pc = 0x2e9900u;

    // 0x2e9900: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x2e9900u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e9904: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x2e9904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x2e9908: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9908u;
    {
        const bool branch_taken_0x2e9908 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9908u;
        // 0x2e990c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9908) {
            ctx->pc = 0x2E9920u;
            goto label_2e9920;
        }
    }
    ctx->pc = 0x2E9910u;
    // 0x2e9910: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x2e9910u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e9914: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2e9914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9918u;
    {
        const bool branch_taken_0x2e9918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9918u;
        // 0x2e991c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9918) {
            ctx->pc = 0x2E9924u;
            goto label_2e9924;
        }
    }
    ctx->pc = 0x2E9920u;
label_2e9920:
    // 0x2e9920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9924:
    // 0x2e9924: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2e9924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e9928: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x2e9928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x2e992c: 0x0  nop
    ctx->pc = 0x2e992cu;
    // NOP
label_2e9930:
    // 0x2e9930: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x2e9930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e9934: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2e9934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2e9938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e9938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e993c: 0x0  nop
    ctx->pc = 0x2e993cu;
    // NOP
    // 0x2e9940: 0x0  nop
    ctx->pc = 0x2e9940u;
    // NOP
    // 0x2e9944: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E9944u;
    {
        const bool branch_taken_0x2e9944 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x2e9944) {
            ctx->pc = 0x2E9930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9930;
        }
    }
    ctx->pc = 0x2E994Cu;
    // 0x2e994c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E994Cu;
    {
        const bool branch_taken_0x2e994c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E994Cu;
        // 0x2e9950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e994c) {
            ctx->pc = 0x2E995Cu;
            goto label_2e995c;
        }
    }
    ctx->pc = 0x2E9954u;
    // 0x2e9954: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9954u;
        // 0x2e9958: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E995Cu;
label_2e995c:
    // 0x2e995c: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x2e995cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2e9960:
    // 0x2e9960: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2e9960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2e9964:
    // 0x2e9964: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x2e9964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e9968: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x2e9968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e996c: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x2e996cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2e9970:
    // 0x2e9970: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2e9970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2e9974: 0x1102000e  beq         $t0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E9974u;
    {
        const bool branch_taken_0x2e9974 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9974u;
        // 0x2e9978: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9974) {
            ctx->pc = 0x2E99B0u;
            goto label_2e99b0;
        }
    }
    ctx->pc = 0x2E997Cu;
    // 0x2e997c: 0x2902002e  slti        $v0, $t0, 0x2E
    ctx->pc = 0x2e997cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x2e9980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9980u;
    {
        const bool branch_taken_0x2e9980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9980u;
        // 0x2e9984: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9980) {
            ctx->pc = 0x2E9998u;
            goto label_2e9998;
        }
    }
    ctx->pc = 0x2E9988u;
    // 0x2e9988: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9988u;
    {
        const bool branch_taken_0x2e9988 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9988u;
        // 0x2e998c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9988) {
            ctx->pc = 0x2E99A8u;
            goto label_2e99a8;
        }
    }
    ctx->pc = 0x2E9990u;
    // 0x2e9990: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x2E9990u;
    {
        const bool branch_taken_0x2e9990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9990u;
        // 0x2e9994: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9990) {
            ctx->pc = 0x2E9964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9964;
        }
    }
    ctx->pc = 0x2E9998u;
label_2e9998:
    // 0x2e9998: 0x11020018  beq         $t0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E9998u;
    {
        const bool branch_taken_0x2e9998 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9998u;
        // 0x2e999c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9998) {
            ctx->pc = 0x2E99FCu;
            goto label_2e99fc;
        }
    }
    ctx->pc = 0x2E99A0u;
    // 0x2e99a0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E99A0u;
    {
        const bool branch_taken_0x2e99a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99A0u;
        // 0x2e99a4: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99a0) {
            ctx->pc = 0x2E9964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9964;
        }
    }
    ctx->pc = 0x2E99A8u;
label_2e99a8:
    // 0x2e99a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E99A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99A8u;
        // 0x2e99ac: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E99A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E99B0u;
label_2e99b0:
    // 0x2e99b0: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x2e99b0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e99b4: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x2e99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2e99b8: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E99B8u;
    {
        const bool branch_taken_0x2e99b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99B8u;
        // 0x2e99bc: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99b8) {
            ctx->pc = 0x2E99C8u;
            goto label_2e99c8;
        }
    }
    ctx->pc = 0x2E99C0u;
    // 0x2e99c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E99C0u;
    {
        const bool branch_taken_0x2e99c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e99c0) {
            ctx->pc = 0x2E99C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E99C0u;
            // 0x2e99c4: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E99D0u;
            goto label_2e99d0;
        }
    }
    ctx->pc = 0x2E99C8u;
label_2e99c8:
    // 0x2e99c8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x2E99C8u;
    {
        const bool branch_taken_0x2e99c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99C8u;
        // 0x2e99cc: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99c8) {
            ctx->pc = 0x2E9960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9960;
        }
    }
    ctx->pc = 0x2E99D0u;
label_2e99d0:
    // 0x2e99d0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2e99d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2e99d4: 0x0  nop
    ctx->pc = 0x2e99d4u;
    // NOP
label_2e99d8:
    // 0x2e99d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e99d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e99dc: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2e99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2e99e0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x2e99e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2e99e4: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x2e99e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e99e8: 0x0  nop
    ctx->pc = 0x2e99e8u;
    // NOP
    // 0x2e99ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E99ECu;
    {
        const bool branch_taken_0x2e99ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e99ec) {
            ctx->pc = 0x2E99D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e99d8;
        }
    }
    ctx->pc = 0x2E99F4u;
    // 0x2e99f4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E99F4u;
    {
        const bool branch_taken_0x2e99f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99F4u;
        // 0x2e99f8: 0x80a80000  lb          $t0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99f4) {
            ctx->pc = 0x2E9970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9970;
        }
    }
    ctx->pc = 0x2E99FCu;
label_2e99fc:
    // 0x2e99fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E99FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99FCu;
        // 0x2e9a00: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E99FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9A04u;
}
