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

// Function: chrClearGuns
// Address: 0x288928 - 0x288a2c
void chrClearGuns_0x288928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrClearGuns_0x288928");
#endif

    switch (ctx->pc) {
        case 0x288964u: goto label_288964;
        case 0x288974u: goto label_288974;
        case 0x28898cu: goto label_28898c;
        case 0x2889a4u: goto label_2889a4;
        case 0x2889c8u: goto label_2889c8;
        case 0x288a00u: goto label_288a00;
        default: break;
    }

    ctx->pc = 0x288928u;

    // 0x288928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x288928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28892c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28892cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x288930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x288934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288938: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x288938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28893c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x28893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x288940: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x288940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x288944: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x288944u;
    {
        const bool branch_taken_0x288944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288944u;
        // 0x288948: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288944) {
            ctx->pc = 0x288A20u;
            goto label_288a20;
        }
    }
    ctx->pc = 0x28894Cu;
    // 0x28894c: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x28894cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x288950: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x288950u;
    {
        const bool branch_taken_0x288950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x288950) {
            ctx->pc = 0x288954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288950u;
            // 0x288954: 0x8e0401b8  lw          $a0, 0x1B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28897Cu;
            goto label_28897c;
        }
    }
    ctx->pc = 0x288958u;
    // 0x288958: 0x8e040bcc  lw          $a0, 0xBCC($s0)
    ctx->pc = 0x288958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3020)));
    // 0x28895c: 0xc0a2390  jal         func_288E40
    ctx->pc = 0x28895Cu;
    SET_GPR_U32(ctx, 31, 0x288964u);
    ctx->pc = 0x288960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28895Cu;
    // 0x288960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288E40u, 0x28895Cu, 0x288964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288964u;
label_288964:
    // 0x288964: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x288964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x288968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28896c: 0xc09bbba  jal         func_26EEE8
    ctx->pc = 0x28896Cu;
    SET_GPR_U32(ctx, 31, 0x288974u);
    ctx->pc = 0x288970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28896Cu;
    // 0x288970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EEE8u, 0x28896Cu, 0x288974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288974u;
label_288974:
    // 0x288974: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x288974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x288978: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x288978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_28897c:
    // 0x28897c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28897Cu;
    {
        const bool branch_taken_0x28897c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x288980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28897Cu;
        // 0x288980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28897c) {
            ctx->pc = 0x288990u;
            goto label_288990;
        }
    }
    ctx->pc = 0x288984u;
    // 0x288984: 0xc09bbba  jal         func_26EEE8
    ctx->pc = 0x288984u;
    SET_GPR_U32(ctx, 31, 0x28898Cu);
    ctx->pc = 0x288988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288984u;
    // 0x288988: 0x26060178  addiu       $a2, $s0, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EEE8u, 0x288984u, 0x28898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28898Cu;
label_28898c:
    // 0x28898c: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x28898cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
label_288990:
    // 0x288990: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x288990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x288994: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288994u;
    {
        const bool branch_taken_0x288994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x288998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288994u;
        // 0x288998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288994) {
            ctx->pc = 0x2889A8u;
            goto label_2889a8;
        }
    }
    ctx->pc = 0x28899Cu;
    // 0x28899c: 0xc09bbba  jal         func_26EEE8
    ctx->pc = 0x28899Cu;
    SET_GPR_U32(ctx, 31, 0x2889A4u);
    ctx->pc = 0x2889A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28899Cu;
    // 0x2889a0: 0x2606010c  addiu       $a2, $s0, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EEE8u, 0x28899Cu, 0x2889A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889A4u;
label_2889a4:
    // 0x2889a4: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x2889a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_2889a8:
    // 0x2889a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2889a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2889ac: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2889acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2889b0: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x2889b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    // 0x2889b4: 0x260411c0  addiu       $a0, $s0, 0x11C0
    ctx->pc = 0x2889b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4544));
    // 0x2889b8: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x2889b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x2889bc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2889bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2889c0: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x2889c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x2889c4: 0x26020268  addiu       $v0, $s0, 0x268
    ctx->pc = 0x2889c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
label_2889c8:
    // 0x2889c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2889c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2889cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2889ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2889d0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2889d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2889d4: 0x0  nop
    ctx->pc = 0x2889d4u;
    // NOP
    // 0x2889d8: 0x0  nop
    ctx->pc = 0x2889d8u;
    // NOP
    // 0x2889dc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2889DCu;
    {
        const bool branch_taken_0x2889dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2889dc) {
            ctx->pc = 0x2889C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2889c8;
        }
    }
    ctx->pc = 0x2889E4u;
    // 0x2889e4: 0x8e030a90  lw          $v1, 0xA90($s0)
    ctx->pc = 0x2889e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2889e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2889e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2889ec: 0x3442fff9  ori         $v0, $v0, 0xFFF9
    ctx->pc = 0x2889ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
    // 0x2889f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2889f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2889f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2889f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2889f8: 0xae030a90  sw          $v1, 0xA90($s0)
    ctx->pc = 0x2889f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
    // 0x2889fc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2889fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_288a00:
    // 0x288a00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x288a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288a04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x288A04u;
    {
        const bool branch_taken_0x288a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288a04) {
            ctx->pc = 0x288A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288A04u;
            // 0x288a08: 0xac45006c  sw          $a1, 0x6C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288A0Cu;
            goto label_288a0c;
        }
    }
    ctx->pc = 0x288A0Cu;
label_288a0c:
    // 0x288a0c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x288a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x288a10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x288a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x288a14: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x288A14u;
    {
        const bool branch_taken_0x288a14 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x288A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A14u;
        // 0x288a18: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a14) {
            ctx->pc = 0x288A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288a00;
        }
    }
    ctx->pc = 0x288A1Cu;
    // 0x288a1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x288a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_288a20:
    // 0x288a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x288a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288a24: 0x3e00008  jr          $ra
    ctx->pc = 0x288A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A24u;
        // 0x288a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288A2Cu;
}
