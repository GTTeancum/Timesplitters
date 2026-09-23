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

// Function: inflate_stored
// Address: 0x21b2e0 - 0x21b4dc
void inflate_stored_0x21b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("inflate_stored_0x21b2e0");
#endif

    switch (ctx->pc) {
        case 0x21b328u: goto label_21b328;
        case 0x21b390u: goto label_21b390;
        case 0x21b3f0u: goto label_21b3f0;
        case 0x21b410u: goto label_21b410;
        case 0x21b430u: goto label_21b430;
        case 0x21b498u: goto label_21b498;
        default: break;
    }

    ctx->pc = 0x21b2e0u;

    // 0x21b2e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21b2e4: 0x8f87b6d8  lw          $a3, -0x4928($gp)
    ctx->pc = 0x21b2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x21b2e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b2ec: 0x8f90b6e8  lw          $s0, -0x4918($gp)
    ctx->pc = 0x21b2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948584)));
    // 0x21b2f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21b2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21b2f4: 0x32050007  andi        $a1, $s0, 0x7
    ctx->pc = 0x21b2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x21b2f8: 0x8f91b6e4  lw          $s1, -0x491C($gp)
    ctx->pc = 0x21b2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948580)));
    // 0x21b2fc: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x21b2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x21b300: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21b304: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21b308: 0xb18806  srlv        $s1, $s1, $a1
    ctx->pc = 0x21b308u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
    // 0x21b30c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21b30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21b310: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x21b310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x21b314: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21B314u;
    {
        const bool branch_taken_0x21b314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B314u;
        // 0x21b318: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b314) {
            ctx->pc = 0x21B370u;
            goto label_21b370;
        }
    }
    ctx->pc = 0x21B31Cu;
    // 0x21b31c: 0x8f86b6d0  lw          $a2, -0x4930($gp)
    ctx->pc = 0x21b31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21b320: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21b320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21b324: 0x0  nop
    ctx->pc = 0x21b324u;
    // NOP
label_21b328:
    // 0x21b328: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x21b328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x21b32c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B32Cu;
    {
        const bool branch_taken_0x21b32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B32Cu;
        // 0x21b330: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b32c) {
            ctx->pc = 0x21B350u;
            goto label_21b350;
        }
    }
    ctx->pc = 0x21B334u;
    // 0x21b334: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b33c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b33cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b340: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b344: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21b344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b348: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B348u;
    {
        const bool branch_taken_0x21b348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B348u;
        // 0x21b34c: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b348) {
            ctx->pc = 0x21B360u;
            goto label_21b360;
        }
    }
    ctx->pc = 0x21B350u;
label_21b350:
    // 0x21b350: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b358: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b35c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21b35cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21b360:
    // 0x21b360: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21b360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21b364: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x21b364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x21b368: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B368u;
    {
        const bool branch_taken_0x21b368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B368u;
        // 0x21b36c: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b368) {
            ctx->pc = 0x21B328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b328;
        }
    }
    ctx->pc = 0x21B370u;
label_21b370:
    // 0x21b370: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x21b370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x21b374: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x21b374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x21b378: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x21b378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x21b37c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21B37Cu;
    {
        const bool branch_taken_0x21b37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B37Cu;
        // 0x21b380: 0x118c02  srl         $s1, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b37c) {
            ctx->pc = 0x21B3D8u;
            goto label_21b3d8;
        }
    }
    ctx->pc = 0x21B384u;
    // 0x21b384: 0x8f86b6d0  lw          $a2, -0x4930($gp)
    ctx->pc = 0x21b384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21b388: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21b388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21b38c: 0x0  nop
    ctx->pc = 0x21b38cu;
    // NOP
label_21b390:
    // 0x21b390: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x21b390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x21b394: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B394u;
    {
        const bool branch_taken_0x21b394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B394u;
        // 0x21b398: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b394) {
            ctx->pc = 0x21B3B8u;
            goto label_21b3b8;
        }
    }
    ctx->pc = 0x21B39Cu;
    // 0x21b39c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b3a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b3a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b3a8: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b3ac: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b3b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B3B0u;
    {
        const bool branch_taken_0x21b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3B0u;
        // 0x21b3b4: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3b0) {
            ctx->pc = 0x21B3C8u;
            goto label_21b3c8;
        }
    }
    ctx->pc = 0x21B3B8u;
label_21b3b8:
    // 0x21b3b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b3bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b3c0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x21b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b3c4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21b3c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21b3c8:
    // 0x21b3c8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21b3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21b3cc: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x21b3ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x21b3d0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B3D0u;
    {
        const bool branch_taken_0x21b3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3D0u;
        // 0x21b3d4: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3d0) {
            ctx->pc = 0x21B390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b390;
        }
    }
    ctx->pc = 0x21B3D8u;
label_21b3d8:
    // 0x21b3d8: 0x111027  nor         $v0, $zero, $s1
    ctx->pc = 0x21b3d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x21b3dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x21b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21b3e0: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B3E0u;
    {
        const bool branch_taken_0x21b3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x21b3e0) {
            ctx->pc = 0x21B3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B3E0u;
            // 0x21b3e4: 0x118c02  srl         $s1, $s1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B3F0u;
            goto label_21b3f0;
        }
    }
    ctx->pc = 0x21B3E8u;
    // 0x21b3e8: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21B3E8u;
    SET_GPR_U32(ctx, 31, 0x21B3F0u);
    ctx->pc = 0x21B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3E8u;
    // 0x21b3ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21B3E8u, 0x21B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3F0u;
label_21b3f0:
    // 0x21b3f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21b3f4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x21b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21b3f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b3fc: 0x10a2002b  beq         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21B3FCu;
    {
        const bool branch_taken_0x21b3fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3FCu;
        // 0x21b400: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3fc) {
            ctx->pc = 0x21B4ACu;
            goto label_21b4ac;
        }
    }
    ctx->pc = 0x21B404u;
    // 0x21b404: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x21b404u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x21b408: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x21b408u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x21b40c: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x21b40cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_21b410:
    // 0x21b410: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x21b410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x21b414: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21B414u;
    {
        const bool branch_taken_0x21b414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B414u;
        // 0x21b418: 0x24b3ffff  addiu       $s3, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b414) {
            ctx->pc = 0x21B478u;
            goto label_21b478;
        }
    }
    ctx->pc = 0x21B41Cu;
    // 0x21b41c: 0x8f86b6d0  lw          $a2, -0x4930($gp)
    ctx->pc = 0x21b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948560)));
    // 0x21b420: 0x8f88b6d4  lw          $t0, -0x492C($gp)
    ctx->pc = 0x21b420u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948564)));
    // 0x21b424: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x21b424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x21b428: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x21b428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x21b42c: 0x0  nop
    ctx->pc = 0x21b42cu;
    // NOP
label_21b430:
    // 0x21b430: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x21b430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x21b434: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B434u;
    {
        const bool branch_taken_0x21b434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B434u;
        // 0x21b438: 0x8f82b6c8  lw          $v0, -0x4938($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b434) {
            ctx->pc = 0x21B458u;
            goto label_21b458;
        }
    }
    ctx->pc = 0x21B43Cu;
    // 0x21b43c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x21b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b444: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21b444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b448: 0xaf84b6cc  sw          $a0, -0x4934($gp)
    ctx->pc = 0x21b448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 4));
    // 0x21b44c: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x21b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b450: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B450u;
    {
        const bool branch_taken_0x21b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B450u;
        // 0x21b454: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b450) {
            ctx->pc = 0x21B460u;
            goto label_21b460;
        }
    }
    ctx->pc = 0x21B458u;
label_21b458:
    // 0x21b458: 0x2121004  sllv        $v0, $s2, $s0
    ctx->pc = 0x21b458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x21b45c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21b45cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21b460:
    // 0x21b460: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21b460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21b464: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x21b464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x21b468: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x21B468u;
    {
        const bool branch_taken_0x21b468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B468u;
        // 0x21b46c: 0x8f83b6cc  lw          $v1, -0x4934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b468) {
            ctx->pc = 0x21B430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b430;
        }
    }
    ctx->pc = 0x21B470u;
    // 0x21b470: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B470u;
    {
        const bool branch_taken_0x21b470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B470u;
        // 0x21b474: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b470) {
            ctx->pc = 0x21B484u;
            goto label_21b484;
        }
    }
    ctx->pc = 0x21B478u;
label_21b478:
    // 0x21b478: 0x8f88b6d4  lw          $t0, -0x492C($gp)
    ctx->pc = 0x21b478u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948564)));
    // 0x21b47c: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x21b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x21b480: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x21b480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_21b484:
    // 0x21b484: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21b484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b488: 0x14f40004  bne         $a3, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B488u;
    {
        const bool branch_taken_0x21b488 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 20));
        ctx->pc = 0x21B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B488u;
        // 0x21b48c: 0xa0510000  sb          $s1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b488) {
            ctx->pc = 0x21B49Cu;
            goto label_21b49c;
        }
    }
    ctx->pc = 0x21B490u;
    // 0x21b490: 0xc086fa2  jal         func_21BE88
    ctx->pc = 0x21B490u;
    SET_GPR_U32(ctx, 31, 0x21B498u);
    ctx->pc = 0x21B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B490u;
    // 0x21b494: 0xaf87b6d8  sw          $a3, -0x4928($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948568), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE88u, 0x21B490u, 0x21B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B498u;
label_21b498:
    // 0x21b498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b49c:
    // 0x21b49c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21b49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4a0: 0x118a02  srl         $s1, $s1, 8
    ctx->pc = 0x21b4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x21b4a4: 0x14b2ffda  bne         $a1, $s2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x21B4A4u;
    {
        const bool branch_taken_0x21b4a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        ctx->pc = 0x21B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4A4u;
        // 0x21b4a8: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4a4) {
            ctx->pc = 0x21B410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b410;
        }
    }
    ctx->pc = 0x21B4ACu;
label_21b4ac:
    // 0x21b4ac: 0xaf91b6e4  sw          $s1, -0x491C($gp)
    ctx->pc = 0x21b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948580), GPR_U32(ctx, 17));
    // 0x21b4b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4b4: 0xaf90b6e8  sw          $s0, -0x4918($gp)
    ctx->pc = 0x21b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948584), GPR_U32(ctx, 16));
    // 0x21b4b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21b4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b4bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21b4bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b4c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21b4c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b4c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21b4c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b4c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21b4c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b4d0: 0xaf87b6d8  sw          $a3, -0x4928($gp)
    ctx->pc = 0x21b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948568), GPR_U32(ctx, 7));
    // 0x21b4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21B4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4D4u;
        // 0x21b4d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B4DCu;
}
