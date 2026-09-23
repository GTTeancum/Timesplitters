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

// Function: soundRestart
// Address: 0x2044c0 - 0x204650
void soundRestart_0x2044c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundRestart_0x2044c0");
#endif

    switch (ctx->pc) {
        case 0x2044e0u: goto label_2044e0;
        case 0x204518u: goto label_204518;
        case 0x20452cu: goto label_20452c;
        case 0x204548u: goto label_204548;
        case 0x20455cu: goto label_20455c;
        case 0x204570u: goto label_204570;
        case 0x204584u: goto label_204584;
        case 0x204598u: goto label_204598;
        case 0x2045acu: goto label_2045ac;
        case 0x2045d0u: goto label_2045d0;
        case 0x2045f0u: goto label_2045f0;
        case 0x20461cu: goto label_20461c;
        default: break;
    }

    ctx->pc = 0x2044c0u;

    // 0x2044c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2044c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2044c4: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x2044c8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2044c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2044cc: 0x24421870  addiu       $v0, $v0, 0x1870
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6256));
    // 0x2044d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2044d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2044d4: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x2044d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2044d8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2044d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2044dc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2044dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2044e0:
    // 0x2044e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2044e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2044e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2044e8: 0xa440000a  sh          $zero, 0xA($v0)
    ctx->pc = 0x2044e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x2044ec: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2044ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2044f0: 0x0  nop
    ctx->pc = 0x2044f0u;
    // NOP
    // 0x2044f4: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2044F4u;
    {
        const bool branch_taken_0x2044f4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2044f4) {
            ctx->pc = 0x2044E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2044e0;
        }
    }
    ctx->pc = 0x2044FCu;
    // 0x2044fc: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x2044fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
    // 0x204500: 0xaf809af8  sw          $zero, -0x6508($gp)
    ctx->pc = 0x204500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941432), GPR_U32(ctx, 0));
    // 0x204504: 0xaf80b638  sw          $zero, -0x49C8($gp)
    ctx->pc = 0x204504u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948408), GPR_U32(ctx, 0));
    // 0x204508: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x204508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20450c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x20450cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x204510: 0x24120105  addiu       $s2, $zero, 0x105
    ctx->pc = 0x204510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x204514: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x204514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
label_204518:
    // 0x204518: 0x36061600  ori         $a2, $s0, 0x1600
    ctx->pc = 0x204518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)5632);
    // 0x20451c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204520: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x204520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x204524: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x204524u;
    SET_GPR_U32(ctx, 31, 0x20452Cu);
    ctx->pc = 0x204528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204524u;
    // 0x204528: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x204524u, 0x20452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20452Cu;
label_20452c:
    // 0x20452c: 0x3c07001d  lui         $a3, 0x1D
    ctx->pc = 0x20452cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)29 << 16));
    // 0x204530: 0x36061d00  ori         $a2, $s0, 0x1D00
    ctx->pc = 0x204530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7424);
    // 0x204534: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x204534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x204538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20453c: 0x230380b  movn        $a3, $s1, $s0
    ctx->pc = 0x20453cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 17));
    // 0x204540: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x204540u;
    SET_GPR_U32(ctx, 31, 0x204548u);
    ctx->pc = 0x204544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204540u;
    // 0x204544: 0x34058050  ori         $a1, $zero, 0x8050 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x204540u, 0x204548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204548u;
label_204548:
    // 0x204548: 0x36060002  ori         $a2, $s0, 0x2
    ctx->pc = 0x204548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x20454c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20454cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204550: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x204550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x204554: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x204554u;
    SET_GPR_U32(ctx, 31, 0x20455Cu);
    ctx->pc = 0x204558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204554u;
    // 0x204558: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x204554u, 0x20455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20455Cu;
label_20455c:
    // 0x20455c: 0x36060b80  ori         $a2, $s0, 0xB80
    ctx->pc = 0x20455cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2944);
    // 0x204560: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204564: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x204564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x204568: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x204568u;
    SET_GPR_U32(ctx, 31, 0x204570u);
    ctx->pc = 0x20456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204568u;
    // 0x20456c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x204568u, 0x204570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204570u;
label_204570:
    // 0x204570: 0x36060c80  ori         $a2, $s0, 0xC80
    ctx->pc = 0x204570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    // 0x204574: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204578: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x204578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x20457c: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x20457Cu;
    SET_GPR_U32(ctx, 31, 0x204584u);
    ctx->pc = 0x204580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20457Cu;
    // 0x204580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x20457Cu, 0x204584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204584u;
label_204584:
    // 0x204584: 0x36060980  ori         $a2, $s0, 0x980
    ctx->pc = 0x204584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2432);
    // 0x204588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20458c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x20458cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x204590: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x204590u;
    SET_GPR_U32(ctx, 31, 0x204598u);
    ctx->pc = 0x204594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204590u;
    // 0x204594: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x204590u, 0x204598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204598u;
label_204598:
    // 0x204598: 0x36060a80  ori         $a2, $s0, 0xA80
    ctx->pc = 0x204598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2688);
    // 0x20459c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2045a0: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2045a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2045a4: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x2045A4u;
    SET_GPR_U32(ctx, 31, 0x2045ACu);
    ctx->pc = 0x2045A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2045A4u;
    // 0x2045a8: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x2045A4u, 0x2045ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045ACu;
label_2045ac:
    // 0x2045ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2045acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045b0: 0xa7a00008  sh          $zero, 0x8($sp)
    ctx->pc = 0x2045b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2045b4: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x2045b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x2045b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2045b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2045bc: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x2045bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x2045c0: 0x34058130  ori         $a1, $zero, 0x8130
    ctx->pc = 0x2045c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
    // 0x2045c4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2045c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045c8: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x2045C8u;
    SET_GPR_U32(ctx, 31, 0x2045D0u);
    ctx->pc = 0x2045CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2045C8u;
    // 0x2045cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x2045C8u, 0x2045D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045D0u;
label_2045d0:
    // 0x2045d0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x2045d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2045d4: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2045D4u;
    {
        const bool branch_taken_0x2045d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045D4u;
        // 0x2045d8: 0x3c0700ff  lui         $a3, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045d4) {
            ctx->pc = 0x204518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204518;
        }
    }
    ctx->pc = 0x2045DCu;
    // 0x2045dc: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2045dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2045e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2045e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045e4: 0x2442e180  addiu       $v0, $v0, -0x1E80
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
    // 0x2045e8: 0x24510016  addiu       $s1, $v0, 0x16
    ctx->pc = 0x2045e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x2045ec: 0x0  nop
    ctx->pc = 0x2045ecu;
    // NOP
label_2045f0:
    // 0x2045f0: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x2045f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2045f4: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x2045f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2045f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2045F8u;
    {
        const bool branch_taken_0x2045f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045F8u;
        // 0x2045fc: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045f8) {
            ctx->pc = 0x20461Cu;
            goto label_20461c;
        }
    }
    ctx->pc = 0x204600u;
    // 0x204600: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204600u;
    {
        const bool branch_taken_0x204600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204600u;
        // 0x204604: 0x8f839f70  lw          $v1, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204600) {
            ctx->pc = 0x20461Cu;
            goto label_20461c;
        }
    }
    ctx->pc = 0x204608u;
    // 0x204608: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x204608u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x20460c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20460Cu;
    {
        const bool branch_taken_0x20460c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20460c) {
            ctx->pc = 0x204610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20460Cu;
            // 0x204610: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204620u;
            goto label_204620;
        }
    }
    ctx->pc = 0x204614u;
    // 0x204614: 0xc081682  jal         func_205A08
    ctx->pc = 0x204614u;
    SET_GPR_U32(ctx, 31, 0x20461Cu);
    ctx->pc = 0x204618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204614u;
    // 0x204618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A08u, 0x204614u, 0x20461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20461Cu;
label_20461c:
    // 0x20461c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20461cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_204620:
    // 0x204620: 0x2a0204bf  slti        $v0, $s0, 0x4BF
    ctx->pc = 0x204620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x204624: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x204624u;
    {
        const bool branch_taken_0x204624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204624u;
        // 0x204628: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204624) {
            ctx->pc = 0x2045F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2045f0;
        }
    }
    ctx->pc = 0x20462Cu;
    // 0x20462c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204630: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x204630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x204634: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x204634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204638: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x204638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20463c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20463cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204640: 0xaf829b00  sw          $v0, -0x6500($gp)
    ctx->pc = 0x204640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941440), GPR_U32(ctx, 2));
    // 0x204644: 0xaf829afc  sw          $v0, -0x6504($gp)
    ctx->pc = 0x204644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941436), GPR_U32(ctx, 2));
    // 0x204648: 0x3e00008  jr          $ra
    ctx->pc = 0x204648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204648u;
        // 0x20464c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204650u;
}
