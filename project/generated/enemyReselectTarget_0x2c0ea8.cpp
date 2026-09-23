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

// Function: enemyReselectTarget
// Address: 0x2c0ea8 - 0x2c1328
void enemyReselectTarget_0x2c0ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyReselectTarget_0x2c0ea8");
#endif

    switch (ctx->pc) {
        case 0x2c0f28u: goto label_2c0f28;
        case 0x2c0fdcu: goto label_2c0fdc;
        case 0x2c1044u: goto label_2c1044;
        case 0x2c10f0u: goto label_2c10f0;
        case 0x2c113cu: goto label_2c113c;
        case 0x2c11c8u: goto label_2c11c8;
        case 0x2c1250u: goto label_2c1250;
        default: break;
    }

    ctx->pc = 0x2c0ea8u;

    // 0x2c0ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c0eac: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2c0eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x2c0eb0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0eb4: 0x24a2c4a8  addiu       $v0, $a1, -0x3B58
    ctx->pc = 0x2c0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x2c0eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c0ebc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c0ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0ec4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2c0ec8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c0ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c0ecc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2c0eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c0ed0: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x2C0ED0u;
    {
        const bool branch_taken_0x2c0ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0ED0u;
        // 0x2c0ed4: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ed0) {
            ctx->pc = 0x2C1310u;
            goto label_2c1310;
        }
    }
    ctx->pc = 0x2C0ED8u;
    // 0x2c0ed8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c0edc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c0edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0ee0: 0x24429d40  addiu       $v0, $v0, -0x62C0
    ctx->pc = 0x2c0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
    // 0x2c0ee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0ee8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0eec: 0x800008  jr          $a0
    ctx->pc = 0x2C0EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C0EF4u: goto label_2c0ef4;
            case 0x2C0F88u: goto label_2c0f88;
            case 0x2C1000u: goto label_2c1000;
            case 0x2C1050u: goto label_2c1050;
            case 0x2C114Cu: goto label_2c114c;
            case 0x2C1310u: goto label_2c1310;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0EECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C0EF4u;
label_2c0ef4:
    // 0x2c0ef4: 0x8f85b4f4  lw          $a1, -0x4B0C($gp)
    ctx->pc = 0x2c0ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948084)));
    // 0x2c0ef8: 0x18a0001a  blez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C0EF8u;
    {
        const bool branch_taken_0x2c0ef8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2C0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EF8u;
        // 0x2c0efc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ef8) {
            ctx->pc = 0x2C0F64u;
            goto label_2c0f64;
        }
    }
    ctx->pc = 0x2C0F00u;
    // 0x2c0f00: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c0f04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c0f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c0f08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0f0c: 0xc4400214  lwc1        $f0, 0x214($v0)
    ctx->pc = 0x2c0f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0f10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0f10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0f14: 0x0  nop
    ctx->pc = 0x2c0f14u;
    // NOP
    // 0x2c0f18: 0x450000fd  bc1f        . + 4 + (0xFD << 2)
    ctx->pc = 0x2C0F18u;
    {
        const bool branch_taken_0x2c0f18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F18u;
        // 0x2c0f1c: 0x3c060038  lui         $a2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f18) {
            ctx->pc = 0x2C1310u;
            goto label_2c1310;
        }
    }
    ctx->pc = 0x2C0F20u;
    // 0x2c0f20: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2c0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c0f24: 0x0  nop
    ctx->pc = 0x2c0f24u;
    // NOP
label_2c0f28:
    // 0x2c0f28: 0x24c22488  addiu       $v0, $a2, 0x2488
    ctx->pc = 0x2c0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9352));
    // 0x2c0f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0f30: 0xaf84b500  sw          $a0, -0x4B00($gp)
    ctx->pc = 0x2c0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948096), GPR_U32(ctx, 4));
    // 0x2c0f34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c0f38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c0f3c: 0xc4600214  lwc1        $f0, 0x214($v1)
    ctx->pc = 0x2c0f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0f40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c0f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0f44: 0x0  nop
    ctx->pc = 0x2c0f44u;
    // NOP
    // 0x2c0f48: 0x450000f1  bc1f        . + 4 + (0xF1 << 2)
    ctx->pc = 0x2C0F48u;
    {
        const bool branch_taken_0x2c0f48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F48u;
        // 0x2c0f4c: 0xae030ae4  sw          $v1, 0xAE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f48) {
            ctx->pc = 0x2C1310u;
            goto label_2c1310;
        }
    }
    ctx->pc = 0x2C0F50u;
    // 0x2c0f50: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2c0f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0f54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C0F54u;
    {
        const bool branch_taken_0x2c0f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F54u;
        // 0x2c0f58: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f54) {
            ctx->pc = 0x2C0F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0f28;
        }
    }
    ctx->pc = 0x2C0F5Cu;
    // 0x2c0f5c: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x2C0F5Cu;
    {
        const bool branch_taken_0x2c0f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F5Cu;
        // 0x2c0f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f5c) {
            ctx->pc = 0x2C1314u;
            goto label_2c1314;
        }
    }
    ctx->pc = 0x2C0F64u;
label_2c0f64:
    // 0x2c0f64: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c0f68: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2C0F68u;
    {
        const bool branch_taken_0x2c0f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F68u;
        // 0x2c0f6c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f68) {
            ctx->pc = 0x2C1310u;
            goto label_2c1310;
        }
    }
    ctx->pc = 0x2C0F70u;
    // 0x2c0f70: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x2c0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2c0f74: 0x8c430a94  lw          $v1, 0xA94($v0)
    ctx->pc = 0x2c0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2708)));
    // 0x2c0f78: 0x146400e6  bne         $v1, $a0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2C0F78u;
    {
        const bool branch_taken_0x2c0f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F78u;
        // 0x2c0f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f78) {
            ctx->pc = 0x2C1314u;
            goto label_2c1314;
        }
    }
    ctx->pc = 0x2C0F80u;
    // 0x2c0f80: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x2C0F80u;
    {
        const bool branch_taken_0x2c0f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F80u;
        // 0x2c0f84: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f80) {
            ctx->pc = 0x2C12F8u;
            goto label_2c12f8;
        }
    }
    ctx->pc = 0x2C0F88u;
label_2c0f88:
    // 0x2c0f88: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x2c0f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x2c0f8c: 0x5480000e  bnel        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C0F8Cu;
    {
        const bool branch_taken_0x2c0f8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0f8c) {
            ctx->pc = 0x2C0F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0F8Cu;
            // 0x2c0f90: 0x8e020a90  lw          $v0, 0xA90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0FC8u;
            goto label_2c0fc8;
        }
    }
    ctx->pc = 0x2C0F94u;
    // 0x2c0f94: 0x8e080ae4  lw          $t0, 0xAE4($s0)
    ctx->pc = 0x2c0f94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c0f98: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2c0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c0f9c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2c0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c0fa0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0FA0u;
    {
        const bool branch_taken_0x2c0fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c0fa0) {
            ctx->pc = 0x2C0FBCu;
            goto label_2c0fbc;
        }
    }
    ctx->pc = 0x2C0FA8u;
    // 0x2c0fa8: 0x8d030160  lw          $v1, 0x160($t0)
    ctx->pc = 0x2c0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
    // 0x2c0fac: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2c0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2c0fb0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2c0fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c0fb4: 0x544000d0  bnel        $v0, $zero, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2C0FB4u;
    {
        const bool branch_taken_0x2c0fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fb4) {
            ctx->pc = 0x2C0FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0FB4u;
            // 0x2c0fb8: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C12F8u;
            goto label_2c12f8;
        }
    }
    ctx->pc = 0x2C0FBCu;
label_2c0fbc:
    // 0x2c0fbc: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2C0FBCu;
    {
        const bool branch_taken_0x2c0fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fbc) {
            ctx->pc = 0x2C0FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0FBCu;
            // 0x2c0fc0: 0x8d030008  lw          $v1, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0FF4u;
            goto label_2c0ff4;
        }
    }
    ctx->pc = 0x2C0FC4u;
    // 0x2c0fc4: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
label_2c0fc8:
    // 0x2c0fc8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2c0fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2c0fcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0FCCu;
    {
        const bool branch_taken_0x2c0fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fcc) {
            ctx->pc = 0x2C0FE4u;
            goto label_2c0fe4;
        }
    }
    ctx->pc = 0x2C0FD4u;
    // 0x2c0fd4: 0xc0b0502  jal         func_2C1408
    ctx->pc = 0x2C0FD4u;
    SET_GPR_U32(ctx, 31, 0x2C0FDCu);
    ctx->pc = 0x2C0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0FD4u;
    // 0x2c0fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1408u, 0x2C0FD4u, 0x2C0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0FDCu;
label_2c0fdc:
    // 0x2c0fdc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2C0FDCu;
    {
        const bool branch_taken_0x2c0fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FDCu;
        // 0x2c0fe0: 0xae0202ac  sw          $v0, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fdc) {
            ctx->pc = 0x2C10F4u;
            goto label_2c10f4;
        }
    }
    ctx->pc = 0x2C0FE4u;
label_2c0fe4:
    // 0x2c0fe4: 0x148000cb  bnez        $a0, . + 4 + (0xCB << 2)
    ctx->pc = 0x2C0FE4u;
    {
        const bool branch_taken_0x2c0fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FE4u;
        // 0x2c0fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fe4) {
            ctx->pc = 0x2C1314u;
            goto label_2c1314;
        }
    }
    ctx->pc = 0x2C0FECu;
    // 0x2c0fec: 0x8e080ae4  lw          $t0, 0xAE4($s0)
    ctx->pc = 0x2c0fecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c0ff0: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2c0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2c0ff4:
    // 0x2c0ff4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2c0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c0ff8: 0x106200c6  beq         $v1, $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2C0FF8u;
    {
        const bool branch_taken_0x2c0ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FF8u;
        // 0x2c0ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ff8) {
            ctx->pc = 0x2C1314u;
            goto label_2c1314;
        }
    }
    ctx->pc = 0x2C1000u;
label_2c1000:
    // 0x2c1000: 0x24a2c4a8  addiu       $v0, $a1, -0x3B58
    ctx->pc = 0x2c1000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x2c1004: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2c1004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1008: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c1008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c100c: 0x54640011  bnel        $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C100Cu;
    {
        const bool branch_taken_0x2c100c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c100c) {
            ctx->pc = 0x2C1010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C100Cu;
            // 0x2c1010: 0x8e060ad8  lw          $a2, 0xAD8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1054u;
            goto label_2c1054;
        }
    }
    ctx->pc = 0x2C1014u;
    // 0x2c1014: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c1018: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C1018u;
    {
        const bool branch_taken_0x2c1018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1018u;
        // 0x2c101c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1018) {
            ctx->pc = 0x2C1050u;
            goto label_2c1050;
        }
    }
    ctx->pc = 0x2C1020u;
    // 0x2c1020: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x2c1020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2c1024: 0x8c430a94  lw          $v1, 0xA94($v0)
    ctx->pc = 0x2c1024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2708)));
    // 0x2c1028: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C1028u;
    {
        const bool branch_taken_0x2c1028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c1028) {
            ctx->pc = 0x2C102Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1028u;
            // 0x2c102c: 0x8e060ad8  lw          $a2, 0xAD8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1054u;
            goto label_2c1054;
        }
    }
    ctx->pc = 0x2C1030u;
    // 0x2c1030: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2c1030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c1034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c103c: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2C103Cu;
    SET_GPR_U32(ctx, 31, 0x2C1044u);
    ctx->pc = 0x2C1040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C103Cu;
    // 0x2c1040: 0x8c450180  lw          $a1, 0x180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2C103Cu, 0x2C1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1044u;
label_2c1044:
    // 0x2c1044: 0xae020ae4  sw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c1044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
    // 0x2c1048: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2c1048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2c104c: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c104cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
label_2c1050:
    // 0x2c1050: 0x8e060ad8  lw          $a2, 0xAD8($s0)
    ctx->pc = 0x2c1050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2776)));
label_2c1054:
    // 0x2c1054: 0x4c0002b  bltz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C1054u;
    {
        const bool branch_taken_0x2c1054 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2C1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1054u;
        // 0x2c1058: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1054) {
            ctx->pc = 0x2C1104u;
            goto label_2c1104;
        }
    }
    ctx->pc = 0x2C105Cu;
    // 0x2c105c: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2c105cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c1060: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2c1060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c1064: 0x8e070ae4  lw          $a3, 0xAE4($s0)
    ctx->pc = 0x2c1064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c1068: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2c1068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c106c: 0x8c850bcc  lw          $a1, 0xBCC($a0)
    ctx->pc = 0x2c106cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3020)));
    // 0x2c1070: 0x50e50025  beql        $a3, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C1070u;
    {
        const bool branch_taken_0x2c1070 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c1070) {
            ctx->pc = 0x2C1074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1070u;
            // 0x2c1074: 0x8e0211b8  lw          $v0, 0x11B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1108u;
            goto label_2c1108;
        }
    }
    ctx->pc = 0x2C1078u;
    // 0x2c1078: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2c1078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c107c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2c107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c1080: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C1080u;
    {
        const bool branch_taken_0x2c1080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1080u;
        // 0x2c1084: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1080) {
            ctx->pc = 0x2C1104u;
            goto label_2c1104;
        }
    }
    ctx->pc = 0x2C1088u;
    // 0x2c1088: 0x8c830a94  lw          $v1, 0xA94($a0)
    ctx->pc = 0x2c1088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x2c108c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C108Cu;
    {
        const bool branch_taken_0x2c108c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C108Cu;
        // 0x2c1090: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c108c) {
            ctx->pc = 0x2C1104u;
            goto label_2c1104;
        }
    }
    ctx->pc = 0x2C1094u;
    // 0x2c1094: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x2c1094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c1098: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2c1098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c109c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x2c109cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c10a0: 0x8cc30264  lw          $v1, 0x264($a2)
    ctx->pc = 0x2c10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 612)));
    // 0x2c10a4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C10A4u;
    {
        const bool branch_taken_0x2c10a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10A4u;
        // 0x2c10a8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10a4) {
            ctx->pc = 0x2C1104u;
            goto label_2c1104;
        }
    }
    ctx->pc = 0x2C10ACu;
    // 0x2c10ac: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2c10acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c10b0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C10B0u;
    {
        const bool branch_taken_0x2c10b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10B0u;
        // 0x2c10b4: 0x8f849f74  lw          $a0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10b0) {
            ctx->pc = 0x2C10CCu;
            goto label_2c10cc;
        }
    }
    ctx->pc = 0x2C10B8u;
    // 0x2c10b8: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x2c10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x2c10bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c10c0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2c10c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c10c4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C10C4u;
    {
        const bool branch_taken_0x2c10c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c10c4) {
            ctx->pc = 0x2C10C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C10C4u;
            // 0x2c10c8: 0x8e0211b8  lw          $v0, 0x11B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1108u;
            goto label_2c1108;
        }
    }
    ctx->pc = 0x2C10CCu;
label_2c10cc:
    // 0x2c10cc: 0xc4c10370  lwc1        $f1, 0x370($a2)
    ctx->pc = 0x2c10ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c10d0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c10d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2c10d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c10d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c10d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c10d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c10dc: 0x0  nop
    ctx->pc = 0x2c10dcu;
    // NOP
    // 0x2c10e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2C10E0u;
    {
        const bool branch_taken_0x2c10e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10E0u;
        // 0x2c10e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10e0) {
            ctx->pc = 0x2C1104u;
            goto label_2c1104;
        }
    }
    ctx->pc = 0x2C10E8u;
    // 0x2c10e8: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2C10E8u;
    SET_GPR_U32(ctx, 31, 0x2C10F0u);
    ctx->pc = 0x2C10ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C10E8u;
    // 0x2c10ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2C10E8u, 0x2C10F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C10F0u;
label_2c10f0:
    // 0x2c10f0: 0xae020ae4  sw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
label_2c10f4:
    // 0x2c10f4: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
    // 0x2c10f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c10fc: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2C10FCu;
    {
        const bool branch_taken_0x2c10fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10FCu;
        // 0x2c1100: 0xae000698  sw          $zero, 0x698($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10fc) {
            ctx->pc = 0x2C1314u;
            goto label_2c1314;
        }
    }
    ctx->pc = 0x2C1104u;
label_2c1104:
    // 0x2c1104: 0x8e0211b8  lw          $v0, 0x11B8($s0)
    ctx->pc = 0x2c1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4536)));
label_2c1108:
    // 0x2c1108: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2C1108u;
    {
        const bool branch_taken_0x2c1108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1108u;
        // 0x2c110c: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1108) {
            ctx->pc = 0x2C1310u;
            goto label_2c1310;
        }
    }
    ctx->pc = 0x2C1110u;
    // 0x2c1110: 0x8e0311bc  lw          $v1, 0x11BC($s0)
    ctx->pc = 0x2c1110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4540)));
    // 0x2c1114: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2c1114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c1118: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2c1118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c111c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2c111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c1120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c1120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c1124: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2c1124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c1128: 0x10a20079  beq         $a1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2C1128u;
    {
        const bool branch_taken_0x2c1128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1128u;
        // 0x2c112c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1128) {
            ctx->pc = 0x2C1310u;
            goto label_2c1310;
        }
    }
    ctx->pc = 0x2C1130u;
    // 0x2c1130: 0x8c650bcc  lw          $a1, 0xBCC($v1)
    ctx->pc = 0x2c1130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3020)));
    // 0x2c1134: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2C1134u;
    SET_GPR_U32(ctx, 31, 0x2C113Cu);
    ctx->pc = 0x2C1138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1134u;
    // 0x2c1138: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2C1134u, 0x2C113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C113Cu;
label_2c113c:
    // 0x2c113c: 0xae020ae4  sw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c113cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
    // 0x2c1140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1144: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2C1144u;
    {
        const bool branch_taken_0x2c1144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1144u;
        // 0x2c1148: 0xae020ad4  sw          $v0, 0xAD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1144) {
            ctx->pc = 0x2C1314u;
            goto label_2c1314;
        }
    }
    ctx->pc = 0x2C114Cu;
label_2c114c:
    // 0x2c114c: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x2c114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x2c1150: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C1150u;
    {
        const bool branch_taken_0x2c1150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1150u;
        // 0x2c1154: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1150) {
            ctx->pc = 0x2C1310u;
            goto label_2c1310;
        }
    }
    ctx->pc = 0x2C1158u;
    // 0x2c1158: 0x8e080ae4  lw          $t0, 0xAE4($s0)
    ctx->pc = 0x2c1158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c115c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2c115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c1160: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2c1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c1164: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1164u;
    {
        const bool branch_taken_0x2c1164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1164u;
        // 0x2c1168: 0x100682d  daddu       $t5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1164) {
            ctx->pc = 0x2C1180u;
            goto label_2c1180;
        }
    }
    ctx->pc = 0x2C116Cu;
    // 0x2c116c: 0x8d020160  lw          $v0, 0x160($t0)
    ctx->pc = 0x2c116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
    // 0x2c1170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1174: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x2c1174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2c1178: 0x5464005c  bnel        $v1, $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2C1178u;
    {
        const bool branch_taken_0x2c1178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c1178) {
            ctx->pc = 0x2C117Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1178u;
            // 0x2c117c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C12ECu;
            goto label_2c12ec;
        }
    }
    ctx->pc = 0x2C1180u;
label_2c1180:
    // 0x2c1180: 0x8da30008  lw          $v1, 0x8($t5)
    ctx->pc = 0x2c1180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2c1184: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c1184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1188: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2C1188u;
    {
        const bool branch_taken_0x2c1188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1188u;
        // 0x2c118c: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1188) {
            ctx->pc = 0x2C12ECu;
            goto label_2c12ec;
        }
    }
    ctx->pc = 0x2C1190u;
    // 0x2c1190: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2c1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2c1194: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c1194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c1198: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2C1198u;
    {
        const bool branch_taken_0x2c1198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1198u;
        // 0x2c119c: 0x8f8bb59c  lw          $t3, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1198) {
            ctx->pc = 0x2C12E0u;
            goto label_2c12e0;
        }
    }
    ctx->pc = 0x2C11A0u;
    // 0x2c11a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c11a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c11a4: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x2c11a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c11a8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2c11a8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c11ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c11acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c11b0: 0x1691021  addu        $v0, $t3, $t1
    ctx->pc = 0x2c11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2c11b4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C11B4u;
    {
        const bool branch_taken_0x2c11b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11B4u;
        // 0x2c11b8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11b4) {
            ctx->pc = 0x2C1204u;
            goto label_2c1204;
        }
    }
    ctx->pc = 0x2C11BCu;
    // 0x2c11bc: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2c11bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c11c0: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2c11c4: 0x0  nop
    ctx->pc = 0x2c11c4u;
    // NOP
label_2c11c8:
    // 0x2c11c8: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2c11c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c11cc: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x2c11ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c11d0: 0x8ca301e4  lw          $v1, 0x1E4($a1)
    ctx->pc = 0x2c11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2c11d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C11D4u;
    {
        const bool branch_taken_0x2c11d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11D4u;
        // 0x2c11d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11d4) {
            ctx->pc = 0x2C11F0u;
            goto label_2c11f0;
        }
    }
    ctx->pc = 0x2C11DCu;
    // 0x2c11dc: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2c11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c11e0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2c11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c11e4: 0x8caa0bcc  lw          $t2, 0xBCC($a1)
    ctx->pc = 0x2c11e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3020)));
    // 0x2c11e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2c11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2c11ec: 0x82600a  movz        $t4, $a0, $v0
    ctx->pc = 0x2c11ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
label_2c11f0:
    // 0x2c11f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c11f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c11f4: 0x1691021  addu        $v0, $t3, $t1
    ctx->pc = 0x2c11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2c11f8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c11f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c11fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C11FCu;
    {
        const bool branch_taken_0x2c11fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11FCu;
        // 0x2c1200: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11fc) {
            ctx->pc = 0x2C11C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c11c8;
        }
    }
    ctx->pc = 0x2C1204u;
label_2c1204:
    // 0x2c1204: 0x11400023  beqz        $t2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C1204u;
    {
        const bool branch_taken_0x2c1204 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1204) {
            ctx->pc = 0x2C1294u;
            goto label_2c1294;
        }
    }
    ctx->pc = 0x2C120Cu;
    // 0x2c120c: 0x8d430160  lw          $v1, 0x160($t2)
    ctx->pc = 0x2c120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 352)));
    // 0x2c1210: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2c1210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c1214: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2c1214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c1218: 0x1447001e  bne         $v0, $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C1218u;
    {
        const bool branch_taken_0x2c1218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2C121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1218u;
        // 0x2c121c: 0x1691021  addu        $v0, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1218) {
            ctx->pc = 0x2C1294u;
            goto label_2c1294;
        }
    }
    ctx->pc = 0x2C1220u;
    // 0x2c1220: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C1220u;
    {
        const bool branch_taken_0x2c1220 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1220u;
        // 0x2c1224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1220) {
            ctx->pc = 0x2C1294u;
            goto label_2c1294;
        }
    }
    ctx->pc = 0x2C1228u;
    // 0x2c1228: 0x8f85b238  lw          $a1, -0x4DC8($gp)
    ctx->pc = 0x2c1228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c122c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2c122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c1230: 0x50470007  beql        $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1230u;
    {
        const bool branch_taken_0x2c1230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2c1230) {
            ctx->pc = 0x2C1234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1230u;
            // 0x2c1234: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1238u;
    // 0x2c1238: 0x8ca20ae4  lw          $v0, 0xAE4($a1)
    ctx->pc = 0x2c1238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2788)));
    // 0x2c123c: 0x544a0004  bnel        $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C123Cu;
    {
        const bool branch_taken_0x2c123c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2c123c) {
            ctx->pc = 0x2C1240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C123Cu;
            // 0x2c1240: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1244u;
    // 0x2c1244: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C1244u;
    {
        const bool branch_taken_0x2c1244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1244u;
        // 0x2c1248: 0x8ca30a9c  lw          $v1, 0xA9C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1244) {
            ctx->pc = 0x2C1284u;
            goto label_2c1284;
        }
    }
    ctx->pc = 0x2C124Cu;
    // 0x2c124c: 0x0  nop
    ctx->pc = 0x2c124cu;
    // NOP
label_2c1250:
    // 0x2c1250: 0x1691021  addu        $v0, $t3, $t1
    ctx->pc = 0x2c1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2c1254: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c1254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c1258: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C1258u;
    {
        const bool branch_taken_0x2c1258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1258u;
        // 0x2c125c: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1258) {
            ctx->pc = 0x2C1294u;
            goto label_2c1294;
        }
    }
    ctx->pc = 0x2C1260u;
    // 0x2c1260: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2c1260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c1264: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2c1264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c1268: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2c1268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c126c: 0x5067fff8  beql        $v1, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C126Cu;
    {
        const bool branch_taken_0x2c126c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2c126c) {
            ctx->pc = 0x2C1270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C126Cu;
            // 0x2c1270: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1274u;
    // 0x2c1274: 0x8c820ae4  lw          $v0, 0xAE4($a0)
    ctx->pc = 0x2c1274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2788)));
    // 0x2c1278: 0x544afff5  bnel        $v0, $t2, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C1278u;
    {
        const bool branch_taken_0x2c1278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2c1278) {
            ctx->pc = 0x2C127Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1278u;
            // 0x2c127c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1280u;
    // 0x2c1280: 0x8c830a9c  lw          $v1, 0xA9C($a0)
    ctx->pc = 0x2c1280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2716)));
label_2c1284:
    // 0x2c1284: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c1284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1288: 0x5462fff1  bnel        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C1288u;
    {
        const bool branch_taken_0x2c1288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1288) {
            ctx->pc = 0x2C128Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1288u;
            // 0x2c128c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1290u;
    // 0x2c1290: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2c1290u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1294:
    // 0x2c1294: 0x55aa0006  bnel        $t5, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1294u;
    {
        const bool branch_taken_0x2c1294 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 10));
        if (branch_taken_0x2c1294) {
            ctx->pc = 0x2C1298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1294u;
            // 0x2c1298: 0x8da30160  lw          $v1, 0x160($t5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C12B0u;
            goto label_2c12b0;
        }
    }
    ctx->pc = 0x2C129Cu;
    // 0x2c129c: 0x51800004  beql        $t4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C129Cu;
    {
        const bool branch_taken_0x2c129c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c129c) {
            ctx->pc = 0x2C12A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C129Cu;
            // 0x2c12a0: 0x8da30160  lw          $v1, 0x160($t5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C12B0u;
            goto label_2c12b0;
        }
    }
    ctx->pc = 0x2C12A4u;
    // 0x2c12a4: 0x55c00011  bnel        $t6, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C12A4u;
    {
        const bool branch_taken_0x2c12a4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c12a4) {
            ctx->pc = 0x2C12A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C12A4u;
            // 0x2c12a8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C12ECu;
            goto label_2c12ec;
        }
    }
    ctx->pc = 0x2C12ACu;
    // 0x2c12ac: 0x8da30160  lw          $v1, 0x160($t5)
    ctx->pc = 0x2c12acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 352)));
label_2c12b0:
    // 0x2c12b0: 0x8c620a94  lw          $v0, 0xA94($v1)
    ctx->pc = 0x2c12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2708)));
    // 0x2c12b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2c12b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2c12b8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C12B8u;
    {
        const bool branch_taken_0x2c12b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c12b8) {
            ctx->pc = 0x2C12BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C12B8u;
            // 0x2c12bc: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C12ECu;
            goto label_2c12ec;
        }
    }
    ctx->pc = 0x2C12C0u;
    // 0x2c12c0: 0x5140000a  beql        $t2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C12C0u;
    {
        const bool branch_taken_0x2c12c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c12c0) {
            ctx->pc = 0x2C12C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C12C0u;
            // 0x2c12c4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C12ECu;
            goto label_2c12ec;
        }
    }
    ctx->pc = 0x2C12C8u;
    // 0x2c12c8: 0x110a0008  beq         $t0, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C12C8u;
    {
        const bool branch_taken_0x2c12c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c12c8) {
            ctx->pc = 0x2C12ECu;
            goto label_2c12ec;
        }
    }
    ctx->pc = 0x2C12D0u;
    // 0x2c12d0: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C12D0u;
    {
        const bool branch_taken_0x2c12d0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c12d0) {
            ctx->pc = 0x2C12ECu;
            goto label_2c12ec;
        }
    }
    ctx->pc = 0x2C12D8u;
    // 0x2c12d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C12D8u;
    {
        const bool branch_taken_0x2c12d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12D8u;
        // 0x2c12dc: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12d8) {
            ctx->pc = 0x2C12ECu;
            goto label_2c12ec;
        }
    }
    ctx->pc = 0x2C12E0u;
label_2c12e0:
    // 0x2c12e0: 0x8d020160  lw          $v0, 0x160($t0)
    ctx->pc = 0x2c12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
    // 0x2c12e4: 0x8c4301e4  lw          $v1, 0x1E4($v0)
    ctx->pc = 0x2c12e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    // 0x2c12e8: 0x2c6f0001  sltiu       $t7, $v1, 0x1
    ctx->pc = 0x2c12e8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c12ec:
    // 0x2c12ec: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C12ECu;
    {
        const bool branch_taken_0x2c12ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12ECu;
        // 0x2c12f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12ec) {
            ctx->pc = 0x2C1314u;
            goto label_2c1314;
        }
    }
    ctx->pc = 0x2C12F4u;
    // 0x2c12f4: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c12f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2c12f8:
    // 0x2c12f8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2c12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c12fc: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c1300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1304: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2c1304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2c1308: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1308u;
    {
        const bool branch_taken_0x2c1308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1308u;
        // 0x2c130c: 0xae000b4c  sw          $zero, 0xB4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1308) {
            ctx->pc = 0x2C1314u;
            goto label_2c1314;
        }
    }
    ctx->pc = 0x2C1310u;
label_2c1310:
    // 0x2c1310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1314:
    // 0x2c1314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c1314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1318: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c131c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c131cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1320: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1320u;
        // 0x2c1324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1328u;
}
