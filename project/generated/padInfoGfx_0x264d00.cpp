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

// Function: padInfoGfx
// Address: 0x264d00 - 0x264dec
void padInfoGfx_0x264d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padInfoGfx_0x264d00");
#endif

    switch (ctx->pc) {
        case 0x264d58u: goto label_264d58;
        case 0x264d68u: goto label_264d68;
        case 0x264d74u: goto label_264d74;
        case 0x264d80u: goto label_264d80;
        case 0x264d8cu: goto label_264d8c;
        case 0x264db0u: goto label_264db0;
        case 0x264dc8u: goto label_264dc8;
        default: break;
    }

    ctx->pc = 0x264d00u;

    // 0x264d00: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x264d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
    // 0x264d04: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x264d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x264d08: 0xffb20490  sd          $s2, 0x490($sp)
    ctx->pc = 0x264d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 18));
    // 0x264d0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x264d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d10: 0xffb504c0  sd          $s5, 0x4C0($sp)
    ctx->pc = 0x264d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 21));
    // 0x264d14: 0xffb404b0  sd          $s4, 0x4B0($sp)
    ctx->pc = 0x264d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 20));
    // 0x264d18: 0x24a499f0  addiu       $a0, $a1, -0x6610
    ctx->pc = 0x264d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x264d1c: 0xffb304a0  sd          $s3, 0x4A0($sp)
    ctx->pc = 0x264d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 19));
    // 0x264d20: 0x27b503f0  addiu       $s5, $sp, 0x3F0
    ctx->pc = 0x264d20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x264d24: 0xffb10480  sd          $s1, 0x480($sp)
    ctx->pc = 0x264d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 17));
    // 0x264d28: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x264d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d2c: 0xffb00470  sd          $s0, 0x470($sp)
    ctx->pc = 0x264d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 16));
    // 0x264d30: 0xffbf04d0  sd          $ra, 0x4D0($sp)
    ctx->pc = 0x264d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 31));
    // 0x264d34: 0x8ca299f0  lw          $v0, -0x6610($a1)
    ctx->pc = 0x264d34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299F0u));
    // 0x264d38: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x264d38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A04u));
    // 0x264d3c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x264d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x264d40: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x264d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x264d44: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x264d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x264d48: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x264d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x264d4c: 0xafa20460  sw          $v0, 0x460($sp)
    ctx->pc = 0x264d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
    // 0x264d50: 0xc09930e  jal         func_264C38
    ctx->pc = 0x264D50u;
    SET_GPR_U32(ctx, 31, 0x264D58u);
    ctx->pc = 0x264D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D50u;
    // 0x264d54: 0xafa30464  sw          $v1, 0x464($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C38u, 0x264D50u, 0x264D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D58u;
label_264d58:
    // 0x264d58: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x264d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x264d5c: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x264d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x264d60: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x264D60u;
    SET_GPR_U32(ctx, 31, 0x264D68u);
    ctx->pc = 0x264D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D60u;
    // 0x264d64: 0x26312798  addiu       $s1, $s1, 0x2798 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x264D60u, 0x264D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D68u;
label_264d68:
    // 0x264d68: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x264d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x264d6c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x264D6Cu;
    SET_GPR_U32(ctx, 31, 0x264D74u);
    ctx->pc = 0x264D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D6Cu;
    // 0x264d70: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x264D6Cu, 0x264D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D74u;
label_264d74:
    // 0x264d74: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x264d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x264d78: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x264D78u;
    SET_GPR_U32(ctx, 31, 0x264D80u);
    ctx->pc = 0x264D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D78u;
    // 0x264d7c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x264D78u, 0x264D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D80u;
label_264d80:
    // 0x264d80: 0xc64c0018  lwc1        $f12, 0x18($s2)
    ctx->pc = 0x264d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x264d84: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x264D84u;
    SET_GPR_U32(ctx, 31, 0x264D8Cu);
    ctx->pc = 0x264D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D84u;
    // 0x264d88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x264D84u, 0x264D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D8Cu;
label_264d8c:
    // 0x264d8c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x264d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264d90: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x264d90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d94: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x264d94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d98: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x264d98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x264d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264da0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x264da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264da4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x264da4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264da8: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x264DA8u;
    SET_GPR_U32(ctx, 31, 0x264DB0u);
    ctx->pc = 0x264DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DA8u;
    // 0x264dac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x264DA8u, 0x264DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DB0u;
label_264db0:
    // 0x264db0: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x264db0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x264db4: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x264db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x264db8: 0x27a50464  addiu       $a1, $sp, 0x464
    ctx->pc = 0x264db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1124));
    // 0x264dbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x264dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264dc0: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x264DC0u;
    SET_GPR_U32(ctx, 31, 0x264DC8u);
    ctx->pc = 0x264DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DC0u;
    // 0x264dc4: 0x34e77f7f  ori         $a3, $a3, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x264DC0u, 0x264DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DC8u;
label_264dc8:
    // 0x264dc8: 0xdfbf04d0  ld          $ra, 0x4D0($sp)
    ctx->pc = 0x264dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x264dcc: 0xdfb504c0  ld          $s5, 0x4C0($sp)
    ctx->pc = 0x264dccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x264dd0: 0xdfb404b0  ld          $s4, 0x4B0($sp)
    ctx->pc = 0x264dd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x264dd4: 0xdfb304a0  ld          $s3, 0x4A0($sp)
    ctx->pc = 0x264dd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x264dd8: 0xdfb20490  ld          $s2, 0x490($sp)
    ctx->pc = 0x264dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x264ddc: 0xdfb10480  ld          $s1, 0x480($sp)
    ctx->pc = 0x264ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x264de0: 0xdfb00470  ld          $s0, 0x470($sp)
    ctx->pc = 0x264de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x264de4: 0x3e00008  jr          $ra
    ctx->pc = 0x264DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DE4u;
        // 0x264de8: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264DECu;
}
