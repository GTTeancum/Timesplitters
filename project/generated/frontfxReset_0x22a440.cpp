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

// Function: frontfxReset
// Address: 0x22a440 - 0x22a5ac
void frontfxReset_0x22a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxReset_0x22a440");
#endif

    switch (ctx->pc) {
        case 0x22a468u: goto label_22a468;
        case 0x22a478u: goto label_22a478;
        case 0x22a498u: goto label_22a498;
        case 0x22a4acu: goto label_22a4ac;
        case 0x22a4c8u: goto label_22a4c8;
        case 0x22a4d8u: goto label_22a4d8;
        case 0x22a528u: goto label_22a528;
        case 0x22a550u: goto label_22a550;
        case 0x22a564u: goto label_22a564;
        default: break;
    }

    ctx->pc = 0x22a440u;

    // 0x22a440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a444: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22a444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22a448: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a44c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22a450: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a454: 0x2452d1a8  addiu       $s2, $v0, -0x2E58
    ctx->pc = 0x22a454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955432));
    // 0x22a458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a45c: 0x247125b8  addiu       $s1, $v1, 0x25B8
    ctx->pc = 0x22a45cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 9656));
    // 0x22a460: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22a460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22a464: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x22a464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a468:
    // 0x22a468: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22a468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22a46c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22a46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22a470: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22A470u;
    SET_GPR_U32(ctx, 31, 0x22A478u);
    ctx->pc = 0x22A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A470u;
    // 0x22a474: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22A470u, 0x22A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A478u;
label_22a478:
    // 0x22a478: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22a478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22a47c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x22a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x22a480: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22A480u;
    {
        const bool branch_taken_0x22a480 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x22A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A480u;
        // 0x22a484: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a480) {
            ctx->pc = 0x22A468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a468;
        }
    }
    ctx->pc = 0x22A488u;
    // 0x22a488: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22a488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22a48c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x22a48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22a490: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22A490u;
    SET_GPR_U32(ctx, 31, 0x22A498u);
    ctx->pc = 0x22A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A490u;
    // 0x22a494: 0x248417d0  addiu       $a0, $a0, 0x17D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22A490u, 0x22A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A498u;
label_22a498:
    // 0x22a498: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22a49c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22a4a0: 0x248417f8  addiu       $a0, $a0, 0x17F8
    ctx->pc = 0x22a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6136));
    // 0x22a4a4: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22A4A4u;
    SET_GPR_U32(ctx, 31, 0x22A4ACu);
    ctx->pc = 0x22A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4A4u;
    // 0x22a4a8: 0xaf839f98  sw          $v1, -0x6068($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942616), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22A4A4u, 0x22A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4ACu;
label_22a4ac:
    // 0x22a4ac: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x22a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22a4b0: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x22a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x22a4b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22a4b8: 0x2470d1b8  addiu       $s0, $v1, -0x2E48
    ctx->pc = 0x22a4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955448));
    // 0x22a4bc: 0xaf849f9c  sw          $a0, -0x6064($gp)
    ctx->pc = 0x22a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942620), GPR_U32(ctx, 4));
    // 0x22a4c0: 0x24522a78  addiu       $s2, $v0, 0x2A78
    ctx->pc = 0x22a4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10872));
    // 0x22a4c4: 0x0  nop
    ctx->pc = 0x22a4c4u;
    // NOP
label_22a4c8:
    // 0x22a4c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22a4cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22a4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22a4d0: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22A4D0u;
    SET_GPR_U32(ctx, 31, 0x22A4D8u);
    ctx->pc = 0x22A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4D0u;
    // 0x22a4d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22A4D0u, 0x22A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4D8u;
label_22a4d8:
    // 0x22a4d8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22a4dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x22a4e0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22A4E0u;
    {
        const bool branch_taken_0x22a4e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x22A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4E0u;
        // 0x22a4e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4e0) {
            ctx->pc = 0x22A4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a4c8;
        }
    }
    ctx->pc = 0x22A4E8u;
    // 0x22a4e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a4ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a4f0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22a4f4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x22a4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x22a4f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22a4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22a4fc: 0x24422b28  addiu       $v0, $v0, 0x2B28
    ctx->pc = 0x22a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11048));
    // 0x22a500: 0xe7809fac  swc1        $f0, -0x6054($gp)
    ctx->pc = 0x22a500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942636), bits); }
    // 0x22a504: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x22a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x22a508: 0xe7819fb0  swc1        $f1, -0x6050($gp)
    ctx->pc = 0x22a508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942640), bits); }
    // 0x22a50c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x22a50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22a510: 0xaf809fa0  sw          $zero, -0x6060($gp)
    ctx->pc = 0x22a510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942624), GPR_U32(ctx, 0));
    // 0x22a514: 0xaf809fa4  sw          $zero, -0x605C($gp)
    ctx->pc = 0x22a514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942628), GPR_U32(ctx, 0));
    // 0x22a518: 0xaf809fc0  sw          $zero, -0x6040($gp)
    ctx->pc = 0x22a518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942656), GPR_U32(ctx, 0));
    // 0x22a51c: 0xaf809fa8  sw          $zero, -0x6058($gp)
    ctx->pc = 0x22a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
    // 0x22a520: 0xaf809fb4  sw          $zero, -0x604C($gp)
    ctx->pc = 0x22a520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942644), GPR_U32(ctx, 0));
    // 0x22a524: 0x0  nop
    ctx->pc = 0x22a524u;
    // NOP
label_22a528:
    // 0x22a528: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22a528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22a52c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22a52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22a530: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x22a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x22a534: 0x0  nop
    ctx->pc = 0x22a534u;
    // NOP
    // 0x22a538: 0x0  nop
    ctx->pc = 0x22a538u;
    // NOP
    // 0x22a53c: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22A53Cu;
    {
        const bool branch_taken_0x22a53c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x22a53c) {
            ctx->pc = 0x22A528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a528;
        }
    }
    ctx->pc = 0x22A544u;
    // 0x22a544: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22a544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22a548: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22A548u;
    SET_GPR_U32(ctx, 31, 0x22A550u);
    ctx->pc = 0x22A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A548u;
    // 0x22a54c: 0x24841820  addiu       $a0, $a0, 0x1820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22A548u, 0x22A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A550u;
label_22a550:
    // 0x22a550: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22a550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22a554: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22a554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22a558: 0x24841840  addiu       $a0, $a0, 0x1840
    ctx->pc = 0x22a558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6208));
    // 0x22a55c: 0xc08718c  jal         func_21C630
    ctx->pc = 0x22A55Cu;
    SET_GPR_U32(ctx, 31, 0x22A564u);
    ctx->pc = 0x22A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A55Cu;
    // 0x22a560: 0xaf839f88  sw          $v1, -0x6078($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942600), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x22A55Cu, 0x22A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A564u;
label_22a564:
    // 0x22a564: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22a568: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22a568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22a56c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a570: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a574: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a578: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a57c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a584: 0xaf839f8c  sw          $v1, -0x6074($gp)
    ctx->pc = 0x22a584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942604), GPR_U32(ctx, 3));
    // 0x22a588: 0xe7809fd4  swc1        $f0, -0x602C($gp)
    ctx->pc = 0x22a588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942676), bits); }
    // 0x22a58c: 0xaf829f94  sw          $v0, -0x606C($gp)
    ctx->pc = 0x22a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942612), GPR_U32(ctx, 2));
    // 0x22a590: 0xaf809fc4  sw          $zero, -0x603C($gp)
    ctx->pc = 0x22a590u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942660), GPR_U32(ctx, 0));
    // 0x22a594: 0xaf809fcc  sw          $zero, -0x6034($gp)
    ctx->pc = 0x22a594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942668), GPR_U32(ctx, 0));
    // 0x22a598: 0xaf809fc8  sw          $zero, -0x6038($gp)
    ctx->pc = 0x22a598u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942664), GPR_U32(ctx, 0));
    // 0x22a59c: 0xaf809fd0  sw          $zero, -0x6030($gp)
    ctx->pc = 0x22a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942672), GPR_U32(ctx, 0));
    // 0x22a5a0: 0xaf809fd8  sw          $zero, -0x6028($gp)
    ctx->pc = 0x22a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942680), GPR_U32(ctx, 0));
    // 0x22a5a4: 0x808af96  j           func_22BE58
    ctx->pc = 0x22A5A4u;
    ctx->pc = 0x22A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5A4u;
    // 0x22a5a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BE58u;
    frontfxGoodiesReset_0x22be58(rdram, ctx, runtime); return;
    ctx->pc = 0x22A5ACu;
}
