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

// Function: updateDir
// Address: 0x24d2d8 - 0x24d3cc
void updateDir_0x24d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updateDir_0x24d2d8");
#endif

    switch (ctx->pc) {
        case 0x24d308u: goto label_24d308;
        case 0x24d314u: goto label_24d314;
        case 0x24d368u: goto label_24d368;
        case 0x24d388u: goto label_24d388;
        default: break;
    }

    ctx->pc = 0x24d2d8u;

    // 0x24d2d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24d2dc: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x24d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d2e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24d2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d2e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24d2e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24d2f0: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x24d2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x24d2f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24d2f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24d2fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24d300: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x24D300u;
    SET_GPR_U32(ctx, 31, 0x24D308u);
    ctx->pc = 0x24D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D300u;
    // 0x24d304: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x24D300u, 0x24D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D308u;
label_24d308:
    // 0x24d308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d30c: 0xc0acf40  jal         func_2B3D00
    ctx->pc = 0x24D30Cu;
    SET_GPR_U32(ctx, 31, 0x24D314u);
    ctx->pc = 0x24D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D30Cu;
    // 0x24d310: 0x2445fffc  addiu       $a1, $v0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D00u, 0x24D30Cu, 0x24D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D314u;
label_24d314:
    // 0x24d314: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x24d314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d318: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x24D318u;
    {
        const bool branch_taken_0x24d318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D318u;
        // 0x24d31c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d318) {
            ctx->pc = 0x24D340u;
            goto label_24d340;
        }
    }
    ctx->pc = 0x24D320u;
    // 0x24d320: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24d324: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x24d324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x24d328: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x24d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x24d32c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24d334: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24d334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d338: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D338u;
    {
        const bool branch_taken_0x24d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D338u;
        // 0x24d33c: 0x8c910768  lw          $s1, 0x768($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d338) {
            ctx->pc = 0x24D35Cu;
            goto label_24d35c;
        }
    }
    ctx->pc = 0x24D340u;
label_24d340:
    // 0x24d340: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24d344: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x24d344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x24d348: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x24d348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x24d34c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24d354: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24d354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d358: 0x8c910764  lw          $s1, 0x764($a0)
    ctx->pc = 0x24d358u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1892)));
label_24d35c:
    // 0x24d35c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24d35cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x24d360: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x24D360u;
    SET_GPR_U32(ctx, 31, 0x24D368u);
    ctx->pc = 0x24D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D360u;
    // 0x24d364: 0x26102100  addiu       $s0, $s0, 0x2100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x24D360u, 0x24D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D368u;
label_24d368:
    // 0x24d368: 0x8f88a22c  lw          $t0, -0x5DD4($gp)
    ctx->pc = 0x24d368u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d36c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24d36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d370: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24d370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d374: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x24d374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d378: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24d378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24d37c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d380: 0xc091302  jal         func_244C08
    ctx->pc = 0x24D380u;
    SET_GPR_U32(ctx, 31, 0x24D388u);
    ctx->pc = 0x24D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D380u;
    // 0x24d384: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244C08u, 0x24D380u, 0x24D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D388u;
label_24d388:
    // 0x24d388: 0x8f84a0d8  lw          $a0, -0x5F28($gp)
    ctx->pc = 0x24d388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24d38c: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x24d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x24d390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d394: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x24d394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x24d398: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x24d398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24d39c: 0xa383b848  sb          $v1, -0x47B8($gp)
    ctx->pc = 0x24d39cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948936), (uint8_t)GPR_U32(ctx, 3));
    // 0x24d3a0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D3A0u;
    {
        const bool branch_taken_0x24d3a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3A0u;
        // 0x24d3a4: 0xaf84a0d8  sw          $a0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3a0) {
            ctx->pc = 0x24D3B4u;
            goto label_24d3b4;
        }
    }
    ctx->pc = 0x24D3A8u;
    // 0x24d3a8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x24d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x24d3ac: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x24d3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24d3b0: 0xaf82a0d8  sw          $v0, -0x5F28($gp)
    ctx->pc = 0x24d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
label_24d3b4:
    // 0x24d3b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24d3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d3b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24d3b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d3bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24d3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x24D3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3C4u;
        // 0x24d3c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D3CCu;
}
