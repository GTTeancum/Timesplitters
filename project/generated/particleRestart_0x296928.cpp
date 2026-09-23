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

// Function: particleRestart
// Address: 0x296928 - 0x296a64
void particleRestart_0x296928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleRestart_0x296928");
#endif

    switch (ctx->pc) {
        case 0x29694cu: goto label_29694c;
        case 0x296978u: goto label_296978;
        case 0x2969d0u: goto label_2969d0;
        case 0x2969f8u: goto label_2969f8;
        case 0x296a04u: goto label_296a04;
        default: break;
    }

    ctx->pc = 0x296928u;

    // 0x296928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29692c: 0x8f84b2f0  lw          $a0, -0x4D10($gp)
    ctx->pc = 0x29692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
    // 0x296930: 0x3c060009  lui         $a2, 0x9
    ctx->pc = 0x296930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9 << 16));
    // 0x296934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296938: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29693c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29693cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296944: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x296944u;
    SET_GPR_U32(ctx, 31, 0x29694Cu);
    ctx->pc = 0x296948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296944u;
    // 0x296948: 0x34c63a80  ori         $a2, $a2, 0x3A80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14976);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x296944u, 0x29694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29694Cu;
label_29694c:
    // 0x29694c: 0x8f84b2f0  lw          $a0, -0x4D10($gp)
    ctx->pc = 0x29694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
    // 0x296950: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x296950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x296954: 0x344222e0  ori         $v0, $v0, 0x22E0
    ctx->pc = 0x296954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8928);
    // 0x296958: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x296958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29695c: 0x24090063  addiu       $t1, $zero, 0x63
    ctx->pc = 0x29695cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x296960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296964: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x296964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x296968: 0x248717a0  addiu       $a3, $a0, 0x17A0
    ctx->pc = 0x296968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6048));
    // 0x29696c: 0x2486e860  addiu       $a2, $a0, -0x17A0
    ctx->pc = 0x29696cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961248));
    // 0x296970: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x296970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296974: 0x0  nop
    ctx->pc = 0x296974u;
    // NOP
label_296978:
    // 0x296978: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x296978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x29697c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x29697cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x296980: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296980u;
    {
        const bool branch_taken_0x296980 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x296984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296980u;
        // 0x296984: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296980) {
            ctx->pc = 0x296990u;
            goto label_296990;
        }
    }
    ctx->pc = 0x296988u;
    // 0x296988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296988u;
    {
        const bool branch_taken_0x296988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296988u;
        // 0x29698c: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296988) {
            ctx->pc = 0x296994u;
            goto label_296994;
        }
    }
    ctx->pc = 0x296990u;
label_296990:
    // 0x296990: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x296990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
label_296994:
    // 0x296994: 0x54a90002  bnel        $a1, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x296994u;
    {
        const bool branch_taken_0x296994 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        if (branch_taken_0x296994) {
            ctx->pc = 0x296998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296994u;
            // 0x296998: 0xac670044  sw          $a3, 0x44($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2969A0u;
            goto label_2969a0;
        }
    }
    ctx->pc = 0x29699Cu;
    // 0x29699c: 0xad000044  sw          $zero, 0x44($t0)
    ctx->pc = 0x29699cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 0));
label_2969a0:
    // 0x2969a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2969a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2969a4: 0x24e717a0  addiu       $a3, $a3, 0x17A0
    ctx->pc = 0x2969a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6048));
    // 0x2969a8: 0x24c617a0  addiu       $a2, $a2, 0x17A0
    ctx->pc = 0x2969a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6048));
    // 0x2969ac: 0x28a20064  slti        $v0, $a1, 0x64
    ctx->pc = 0x2969acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2969b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2969B0u;
    {
        const bool branch_taken_0x2969b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2969B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969B0u;
        // 0x2969b4: 0x246317a0  addiu       $v1, $v1, 0x17A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969b0) {
            ctx->pc = 0x296978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296978;
        }
    }
    ctx->pc = 0x2969B8u;
    // 0x2969b8: 0xaf84b960  sw          $a0, -0x46A0($gp)
    ctx->pc = 0x2969b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949216), GPR_U32(ctx, 4));
    // 0x2969bc: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2969bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2969c0: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2969c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2969c4: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x2969c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x2969c8: 0x24639a00  addiu       $v1, $v1, -0x6600
    ctx->pc = 0x2969c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941184));
    // 0x2969cc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2969ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2969d0:
    // 0x2969d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2969d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2969d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2969d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2969d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2969d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2969dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2969dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2969e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2969e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2969e4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2969E4u;
    {
        const bool branch_taken_0x2969e4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2969e4) {
            ctx->pc = 0x2969D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2969d0;
        }
    }
    ctx->pc = 0x2969ECu;
    // 0x2969ec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2969ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2969f0: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x2969f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2969f4: 0x24509810  addiu       $s0, $v0, -0x67F0
    ctx->pc = 0x2969f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
label_2969f8:
    // 0x2969f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2969f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2969fc: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2969FCu;
    SET_GPR_U32(ctx, 31, 0x296A04u);
    ctx->pc = 0x296A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2969FCu;
    // 0x296a00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2969FCu, 0x296A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A04u;
label_296a04:
    // 0x296a04: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x296a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x296a08: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x296a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x296a0c: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296A0Cu;
    {
        const bool branch_taken_0x296a0c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x296A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A0Cu;
        // 0x296a10: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a0c) {
            ctx->pc = 0x2969F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2969f8;
        }
    }
    ctx->pc = 0x296A14u;
    // 0x296a14: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x296a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x296a18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296a1c: 0x24429810  addiu       $v0, $v0, -0x67F0
    ctx->pc = 0x296a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
    // 0x296a20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296a24: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x296a24u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x36981Cu));
    // 0x296a28: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x296a28u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x36982Cu));
    // 0x296a2c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x296a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36983Cu));
    // 0x296a30: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x296a30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36985Cu));
    // 0x296a34: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x296a34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36988Cu));
    // 0x296a38: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x296a38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36987Cu));
    // 0x296a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296a40: 0xaf83b968  sw          $v1, -0x4698($gp)
    ctx->pc = 0x296a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949224), GPR_U32(ctx, 3));
    // 0x296a44: 0xaf84b96c  sw          $a0, -0x4694($gp)
    ctx->pc = 0x296a44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949228), GPR_U32(ctx, 4));
    // 0x296a48: 0xaf85b970  sw          $a1, -0x4690($gp)
    ctx->pc = 0x296a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949232), GPR_U32(ctx, 5));
    // 0x296a4c: 0xaf86b974  sw          $a2, -0x468C($gp)
    ctx->pc = 0x296a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949236), GPR_U32(ctx, 6));
    // 0x296a50: 0xaf88b978  sw          $t0, -0x4688($gp)
    ctx->pc = 0x296a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949240), GPR_U32(ctx, 8));
    // 0x296a54: 0xaf87b97c  sw          $a3, -0x4684($gp)
    ctx->pc = 0x296a54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949244), GPR_U32(ctx, 7));
    // 0x296a58: 0xaf87b964  sw          $a3, -0x469C($gp)
    ctx->pc = 0x296a58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949220), GPR_U32(ctx, 7));
    // 0x296a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x296A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A5Cu;
        // 0x296a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296A64u;
}
