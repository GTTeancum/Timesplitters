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

// Function: mapmakerReset
// Address: 0x248410 - 0x248570
void mapmakerReset_0x248410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakerReset_0x248410");
#endif

    switch (ctx->pc) {
        case 0x248424u: goto label_248424;
        case 0x24842cu: goto label_24842c;
        case 0x248434u: goto label_248434;
        case 0x248460u: goto label_248460;
        case 0x248474u: goto label_248474;
        case 0x24847cu: goto label_24847c;
        case 0x248484u: goto label_248484;
        case 0x24848cu: goto label_24848c;
        case 0x248498u: goto label_248498;
        case 0x2484a8u: goto label_2484a8;
        case 0x2484b0u: goto label_2484b0;
        case 0x2484b8u: goto label_2484b8;
        case 0x2484e8u: goto label_2484e8;
        case 0x2484f0u: goto label_2484f0;
        case 0x2484f8u: goto label_2484f8;
        case 0x248518u: goto label_248518;
        case 0x24854cu: goto label_24854c;
        case 0x248554u: goto label_248554;
        case 0x24855cu: goto label_24855c;
        default: break;
    }

    ctx->pc = 0x248410u;

    // 0x248410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24841c: 0xc094e54  jal         func_253950
    ctx->pc = 0x24841Cu;
    SET_GPR_U32(ctx, 31, 0x248424u);
    ctx->pc = 0x253950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253950u, 0x24841Cu, 0x248424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248424u;
label_248424:
    // 0x248424: 0xc08bb3c  jal         func_22ECF0
    ctx->pc = 0x248424u;
    SET_GPR_U32(ctx, 31, 0x24842Cu);
    ctx->pc = 0x22ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ECF0u, 0x248424u, 0x24842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24842Cu;
label_24842c:
    // 0x24842c: 0xc08b908  jal         func_22E420
    ctx->pc = 0x24842Cu;
    SET_GPR_U32(ctx, 31, 0x248434u);
    ctx->pc = 0x22E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E420u, 0x24842Cu, 0x248434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248434u;
label_248434:
    // 0x248434: 0x3c026464  lui         $v0, 0x6464
    ctx->pc = 0x248434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25700 << 16));
    // 0x248438: 0x3c031414  lui         $v1, 0x1414
    ctx->pc = 0x248438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5140 << 16));
    // 0x24843c: 0x34426480  ori         $v0, $v0, 0x6480
    ctx->pc = 0x24843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25728);
    // 0x248440: 0x34631480  ori         $v1, $v1, 0x1480
    ctx->pc = 0x248440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5248);
    // 0x248444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x248444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248448: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x248448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24844c: 0xaf82a01c  sw          $v0, -0x5FE4($gp)
    ctx->pc = 0x24844cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942748), GPR_U32(ctx, 2));
    // 0x248450: 0xaf83a020  sw          $v1, -0x5FE0($gp)
    ctx->pc = 0x248450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942752), GPR_U32(ctx, 3));
    // 0x248454: 0xaf84a024  sw          $a0, -0x5FDC($gp)
    ctx->pc = 0x248454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942756), GPR_U32(ctx, 4));
    // 0x248458: 0xc094072  jal         func_2501C8
    ctx->pc = 0x248458u;
    SET_GPR_U32(ctx, 31, 0x248460u);
    ctx->pc = 0x24845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248458u;
    // 0x24845c: 0xaf85a028  sw          $a1, -0x5FD8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942760), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2501C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2501C8u, 0x248458u, 0x248460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248460u;
label_248460:
    // 0x248460: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x248460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x248464: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x248464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x248468: 0x24846688  addiu       $a0, $a0, 0x6688
    ctx->pc = 0x248468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26248));
    // 0x24846c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x24846Cu;
    SET_GPR_U32(ctx, 31, 0x248474u);
    ctx->pc = 0x248470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24846Cu;
    // 0x248470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x24846Cu, 0x248474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248474u;
label_248474:
    // 0x248474: 0xc0923ac  jal         func_248EB0
    ctx->pc = 0x248474u;
    SET_GPR_U32(ctx, 31, 0x24847Cu);
    ctx->pc = 0x248EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248EB0u, 0x248474u, 0x24847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24847Cu;
label_24847c:
    // 0x24847c: 0xc0923ba  jal         func_248EE8
    ctx->pc = 0x24847Cu;
    SET_GPR_U32(ctx, 31, 0x248484u);
    ctx->pc = 0x248EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248EE8u, 0x24847Cu, 0x248484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248484u;
label_248484:
    // 0x248484: 0xc09249e  jal         func_249278
    ctx->pc = 0x248484u;
    SET_GPR_U32(ctx, 31, 0x24848Cu);
    ctx->pc = 0x249278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249278u, 0x248484u, 0x24848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24848Cu;
label_24848c:
    // 0x24848c: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x24848cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x248490: 0xc08070e  jal         func_201C38
    ctx->pc = 0x248490u;
    SET_GPR_U32(ctx, 31, 0x248498u);
    ctx->pc = 0x248494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248490u;
    // 0x248494: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x248490u, 0x248498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248498u;
label_248498:
    // 0x248498: 0xaf82a130  sw          $v0, -0x5ED0($gp)
    ctx->pc = 0x248498u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943024), GPR_U32(ctx, 2));
    // 0x24849c: 0x24040810  addiu       $a0, $zero, 0x810
    ctx->pc = 0x24849cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
    // 0x2484a0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2484A0u;
    SET_GPR_U32(ctx, 31, 0x2484A8u);
    ctx->pc = 0x2484A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484A0u;
    // 0x2484a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2484A0u, 0x2484A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484A8u;
label_2484a8:
    // 0x2484a8: 0xc09193e  jal         func_2464F8
    ctx->pc = 0x2484A8u;
    SET_GPR_U32(ctx, 31, 0x2484B0u);
    ctx->pc = 0x2484ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484A8u;
    // 0x2484ac: 0xaf82a134  sw          $v0, -0x5ECC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2464F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2464F8u, 0x2484A8u, 0x2484B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484B0u;
label_2484b0:
    // 0x2484b0: 0xc092632  jal         func_2498C8
    ctx->pc = 0x2484B0u;
    SET_GPR_U32(ctx, 31, 0x2484B8u);
    ctx->pc = 0x2498C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498C8u, 0x2484B0u, 0x2484B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484B8u;
label_2484b8:
    // 0x2484b8: 0x8f90a0d8  lw          $s0, -0x5F28($gp)
    ctx->pc = 0x2484b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x2484bc: 0x3c040132  lui         $a0, 0x132
    ctx->pc = 0x2484bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)306 << 16));
    // 0x2484c0: 0x8f85a0d0  lw          $a1, -0x5F30($gp)
    ctx->pc = 0x2484c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x2484c4: 0x34844626  ori         $a0, $a0, 0x4626
    ctx->pc = 0x2484c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17958);
    // 0x2484c8: 0x32021200  andi        $v0, $s0, 0x1200
    ctx->pc = 0x2484c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4608);
    // 0x2484cc: 0xaf82a0d8  sw          $v0, -0x5F28($gp)
    ctx->pc = 0x2484ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
    // 0x2484d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2484d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2484d4: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2484D4u;
    {
        const bool branch_taken_0x2484d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2484D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484D4u;
        // 0x2484d8: 0x32101000  andi        $s0, $s0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484d4) {
            ctx->pc = 0x248510u;
            goto label_248510;
        }
    }
    ctx->pc = 0x2484DCu;
    // 0x2484dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2484dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2484e0: 0xc092018  jal         func_248060
    ctx->pc = 0x2484E0u;
    SET_GPR_U32(ctx, 31, 0x2484E8u);
    ctx->pc = 0x2484E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484E0u;
    // 0x2484e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248060u, 0x2484E0u, 0x2484E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484E8u;
label_2484e8:
    // 0x2484e8: 0xc092632  jal         func_2498C8
    ctx->pc = 0x2484E8u;
    SET_GPR_U32(ctx, 31, 0x2484F0u);
    ctx->pc = 0x2498C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498C8u, 0x2484E8u, 0x2484F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484F0u;
label_2484f0:
    // 0x2484f0: 0xc09258a  jal         func_249628
    ctx->pc = 0x2484F0u;
    SET_GPR_U32(ctx, 31, 0x2484F8u);
    ctx->pc = 0x249628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249628u, 0x2484F0u, 0x2484F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484F8u;
label_2484f8:
    // 0x2484f8: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x2484f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x2484fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2484fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x248500: 0x3442fdff  ori         $v0, $v0, 0xFDFF
    ctx->pc = 0x248500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65023);
    // 0x248504: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x248504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248508: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x248508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x24850c: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x24850cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
label_248510:
    // 0x248510: 0xc093f3c  jal         func_24FCF0
    ctx->pc = 0x248510u;
    SET_GPR_U32(ctx, 31, 0x248518u);
    ctx->pc = 0x24FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCF0u, 0x248510u, 0x248518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248518u;
label_248518:
    // 0x248518: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x248518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24851c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24851cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x248520: 0x2442fe68  addiu       $v0, $v0, -0x198
    ctx->pc = 0x248520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966888));
    // 0x248524: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x248524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x248528: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x248528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24852c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x24852cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x248530: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x248530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x248534: 0xaf80a0f8  sw          $zero, -0x5F08($gp)
    ctx->pc = 0x248534u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 0));
    // 0x248538: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x248538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x24853c: 0xaf85a0e0  sw          $a1, -0x5F20($gp)
    ctx->pc = 0x24853cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942944), GPR_U32(ctx, 5));
    // 0x248540: 0xaf80a0d4  sw          $zero, -0x5F2C($gp)
    ctx->pc = 0x248540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 0));
    // 0x248544: 0xc094d4c  jal         func_253530
    ctx->pc = 0x248544u;
    SET_GPR_U32(ctx, 31, 0x24854Cu);
    ctx->pc = 0x248548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248544u;
    // 0x248548: 0xaf80a0dc  sw          $zero, -0x5F24($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253530u, 0x248544u, 0x24854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24854Cu;
label_24854c:
    // 0x24854c: 0xc092160  jal         func_248580
    ctx->pc = 0x24854Cu;
    SET_GPR_U32(ctx, 31, 0x248554u);
    ctx->pc = 0x248580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248580u, 0x24854Cu, 0x248554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248554u;
label_248554:
    // 0x248554: 0xc08089c  jal         func_202270
    ctx->pc = 0x248554u;
    SET_GPR_U32(ctx, 31, 0x24855Cu);
    ctx->pc = 0x248558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248554u;
    // 0x248558: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x248554u, 0x24855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24855Cu;
label_24855c:
    // 0x24855c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24855cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248560: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x248560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x248564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248568: 0x809f8c4  j           func_27E310
    ctx->pc = 0x248568u;
    ctx->pc = 0x24856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248568u;
    // 0x24856c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    camSetMode_0x27e310(rdram, ctx, runtime); return;
    ctx->pc = 0x248570u;
}
