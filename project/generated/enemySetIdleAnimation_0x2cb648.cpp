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

// Function: enemySetIdleAnimation
// Address: 0x2cb648 - 0x2cb904
void enemySetIdleAnimation_0x2cb648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemySetIdleAnimation_0x2cb648");
#endif

    switch (ctx->pc) {
        case 0x2cb688u: goto label_2cb688;
        case 0x2cb698u: goto label_2cb698;
        case 0x2cb6a8u: goto label_2cb6a8;
        case 0x2cb6b8u: goto label_2cb6b8;
        case 0x2cb6c8u: goto label_2cb6c8;
        case 0x2cb714u: goto label_2cb714;
        case 0x2cb774u: goto label_2cb774;
        case 0x2cb7c4u: goto label_2cb7c4;
        case 0x2cb814u: goto label_2cb814;
        case 0x2cb824u: goto label_2cb824;
        case 0x2cb87cu: goto label_2cb87c;
        case 0x2cb88cu: goto label_2cb88c;
        case 0x2cb89cu: goto label_2cb89c;
        case 0x2cb8f4u: goto label_2cb8f4;
        default: break;
    }

    ctx->pc = 0x2cb648u;

    // 0x2cb648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb658: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x2cb658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2cb65c: 0x8c620a94  lw          $v0, 0xA94($v1)
    ctx->pc = 0x2cb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2708)));
    // 0x2cb660: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2cb660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2cb664: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2CB664u;
    {
        const bool branch_taken_0x2cb664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB664u;
        // 0x2cb668: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb664) {
            ctx->pc = 0x2CB8F8u;
            goto label_2cb8f8;
        }
    }
    ctx->pc = 0x2CB66Cu;
    // 0x2cb66c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2cb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2cb670: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2cb670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb674: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x2cb674u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2cb678: 0x10640082  beq         $v1, $a0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2CB678u;
    {
        const bool branch_taken_0x2cb678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB678u;
        // 0x2cb67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb678) {
            ctx->pc = 0x2CB884u;
            goto label_2cb884;
        }
    }
    ctx->pc = 0x2CB680u;
    // 0x2cb680: 0xc085608  jal         func_215820
    ctx->pc = 0x2CB680u;
    SET_GPR_U32(ctx, 31, 0x2CB688u);
    ctx->pc = 0x2CB684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB680u;
    // 0x2cb684: 0x240501c2  addiu       $a1, $zero, 0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CB680u, 0x2CB688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB688u;
label_2cb688:
    // 0x2cb688: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB688u;
    {
        const bool branch_taken_0x2cb688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB688u;
        // 0x2cb68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb688) {
            ctx->pc = 0x2CB6A0u;
            goto label_2cb6a0;
        }
    }
    ctx->pc = 0x2CB690u;
    // 0x2cb690: 0xc085608  jal         func_215820
    ctx->pc = 0x2CB690u;
    SET_GPR_U32(ctx, 31, 0x2CB698u);
    ctx->pc = 0x2CB694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB690u;
    // 0x2cb694: 0x240501c3  addiu       $a1, $zero, 0x1C3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CB690u, 0x2CB698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB698u;
label_2cb698:
    // 0x2cb698: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CB698u;
    {
        const bool branch_taken_0x2cb698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB698u;
        // 0x2cb69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb698) {
            ctx->pc = 0x2CB6C0u;
            goto label_2cb6c0;
        }
    }
    ctx->pc = 0x2CB6A0u;
label_2cb6a0:
    // 0x2cb6a0: 0xc085608  jal         func_215820
    ctx->pc = 0x2CB6A0u;
    SET_GPR_U32(ctx, 31, 0x2CB6A8u);
    ctx->pc = 0x2CB6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6A0u;
    // 0x2cb6a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CB6A0u, 0x2CB6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6A8u;
label_2cb6a8:
    // 0x2cb6a8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2CB6A8u;
    {
        const bool branch_taken_0x2cb6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb6a8) {
            ctx->pc = 0x2CB80Cu;
            goto label_2cb80c;
        }
    }
    ctx->pc = 0x2CB6B0u;
    // 0x2cb6b0: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2CB6B0u;
    SET_GPR_U32(ctx, 31, 0x2CB6B8u);
    ctx->pc = 0x2CB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6B0u;
    // 0x2cb6b4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2CB6B0u, 0x2CB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6B8u;
label_2cb6b8:
    // 0x2cb6b8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2CB6B8u;
    {
        const bool branch_taken_0x2cb6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb6b8) {
            ctx->pc = 0x2CB80Cu;
            goto label_2cb80c;
        }
    }
    ctx->pc = 0x2CB6C0u;
label_2cb6c0:
    // 0x2cb6c0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CB6C0u;
    SET_GPR_U32(ctx, 31, 0x2CB6C8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CB6C0u, 0x2CB6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6C8u;
label_2cb6c8:
    // 0x2cb6c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB6C8u;
    {
        const bool branch_taken_0x2cb6c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6C8u;
        // 0x2cb6cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6c8) {
            ctx->pc = 0x2CB6DCu;
            goto label_2cb6dc;
        }
    }
    ctx->pc = 0x2CB6D0u;
    // 0x2cb6d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cb6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cb6d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB6D4u;
    {
        const bool branch_taken_0x2cb6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6D4u;
        // 0x2cb6d8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6d4) {
            ctx->pc = 0x2CB6F0u;
            goto label_2cb6f0;
        }
    }
    ctx->pc = 0x2CB6DCu;
label_2cb6dc:
    // 0x2cb6dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb6e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cb6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cb6e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cb6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cb6e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2cb6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cb6ec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2cb6ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2cb6f0:
    // 0x2cb6f0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cb6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cb6f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb6f8: 0xc781925c  lwc1        $f1, -0x6DA4($gp)
    ctx->pc = 0x2cb6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb6fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2cb6fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cb700: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2cb700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb704: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB704u;
    {
        const bool branch_taken_0x2cb704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb704) {
            ctx->pc = 0x2CB75Cu;
            goto label_2cb75c;
        }
    }
    ctx->pc = 0x2CB70Cu;
    // 0x2cb70c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CB70Cu;
    SET_GPR_U32(ctx, 31, 0x2CB714u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CB70Cu, 0x2CB714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB714u;
label_2cb714:
    // 0x2cb714: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB714u;
    {
        const bool branch_taken_0x2cb714 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB714u;
        // 0x2cb718: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb714) {
            ctx->pc = 0x2CB728u;
            goto label_2cb728;
        }
    }
    ctx->pc = 0x2CB71Cu;
    // 0x2cb71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb720: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB720u;
    {
        const bool branch_taken_0x2cb720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB720u;
        // 0x2cb724: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb720) {
            ctx->pc = 0x2CB73Cu;
            goto label_2cb73c;
        }
    }
    ctx->pc = 0x2CB728u;
label_2cb728:
    // 0x2cb728: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb72c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cb72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cb730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cb734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cb738: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2cb738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cb73c:
    // 0x2cb73c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cb73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cb740: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2cb740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cb744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb748: 0xc7819260  lwc1        $f1, -0x6DA0($gp)
    ctx->pc = 0x2cb748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb74c: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2cb74cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2cb750: 0xc7809264  lwc1        $f0, -0x6D9C($gp)
    ctx->pc = 0x2cb750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb754: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2CB754u;
    {
        const bool branch_taken_0x2cb754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB754u;
        // 0x2cb758: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb754) {
            ctx->pc = 0x2CB86Cu;
            goto label_2cb86c;
        }
    }
    ctx->pc = 0x2CB75Cu;
label_2cb75c:
    // 0x2cb75c: 0xc7809268  lwc1        $f0, -0x6D98($gp)
    ctx->pc = 0x2cb75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb760: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2cb760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb764: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB764u;
    {
        const bool branch_taken_0x2cb764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb764) {
            ctx->pc = 0x2CB7BCu;
            goto label_2cb7bc;
        }
    }
    ctx->pc = 0x2CB76Cu;
    // 0x2cb76c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CB76Cu;
    SET_GPR_U32(ctx, 31, 0x2CB774u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CB76Cu, 0x2CB774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB774u;
label_2cb774:
    // 0x2cb774: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB774u;
    {
        const bool branch_taken_0x2cb774 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB774u;
        // 0x2cb778: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb774) {
            ctx->pc = 0x2CB788u;
            goto label_2cb788;
        }
    }
    ctx->pc = 0x2CB77Cu;
    // 0x2cb77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb780: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB780u;
    {
        const bool branch_taken_0x2cb780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB780u;
        // 0x2cb784: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb780) {
            ctx->pc = 0x2CB79Cu;
            goto label_2cb79c;
        }
    }
    ctx->pc = 0x2CB788u;
label_2cb788:
    // 0x2cb788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb78c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cb78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cb790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb794: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cb794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cb798: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2cb798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cb79c:
    // 0x2cb79c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cb79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cb7a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2cb7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cb7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7a8: 0xc781926c  lwc1        $f1, -0x6D94($gp)
    ctx->pc = 0x2cb7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb7ac: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2cb7acu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2cb7b0: 0xc7809270  lwc1        $f0, -0x6D90($gp)
    ctx->pc = 0x2cb7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb7b4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2CB7B4u;
    {
        const bool branch_taken_0x2cb7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7B4u;
        // 0x2cb7b8: 0x240501c2  addiu       $a1, $zero, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7b4) {
            ctx->pc = 0x2CB86Cu;
            goto label_2cb86c;
        }
    }
    ctx->pc = 0x2CB7BCu;
label_2cb7bc:
    // 0x2cb7bc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CB7BCu;
    SET_GPR_U32(ctx, 31, 0x2CB7C4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CB7BCu, 0x2CB7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7C4u;
label_2cb7c4:
    // 0x2cb7c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB7C4u;
    {
        const bool branch_taken_0x2cb7c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7C4u;
        // 0x2cb7c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7c4) {
            ctx->pc = 0x2CB7D8u;
            goto label_2cb7d8;
        }
    }
    ctx->pc = 0x2CB7CCu;
    // 0x2cb7cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb7d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB7D0u;
    {
        const bool branch_taken_0x2cb7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7D0u;
        // 0x2cb7d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7d0) {
            ctx->pc = 0x2CB7ECu;
            goto label_2cb7ec;
        }
    }
    ctx->pc = 0x2CB7D8u;
label_2cb7d8:
    // 0x2cb7d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb7dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cb7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cb7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb7e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cb7e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cb7e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2cb7e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cb7ec:
    // 0x2cb7ec: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cb7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cb7f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2cb7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cb7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7f8: 0xc7819274  lwc1        $f1, -0x6D8C($gp)
    ctx->pc = 0x2cb7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb7fc: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2cb7fcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2cb800: 0xc7809278  lwc1        $f0, -0x6D88($gp)
    ctx->pc = 0x2cb800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb804: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2CB804u;
    {
        const bool branch_taken_0x2cb804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB804u;
        // 0x2cb808: 0x240501c3  addiu       $a1, $zero, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb804) {
            ctx->pc = 0x2CB86Cu;
            goto label_2cb86c;
        }
    }
    ctx->pc = 0x2CB80Cu;
label_2cb80c:
    // 0x2cb80c: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2CB80Cu;
    SET_GPR_U32(ctx, 31, 0x2CB814u);
    ctx->pc = 0x2CB810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB80Cu;
    // 0x2cb810: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2CB80Cu, 0x2CB814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB814u;
label_2cb814:
    // 0x2cb814: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2CB814u;
    {
        const bool branch_taken_0x2cb814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB814u;
        // 0x2cb818: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb814) {
            ctx->pc = 0x2CB8F8u;
            goto label_2cb8f8;
        }
    }
    ctx->pc = 0x2CB81Cu;
    // 0x2cb81c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CB81Cu;
    SET_GPR_U32(ctx, 31, 0x2CB824u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CB81Cu, 0x2CB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB824u;
label_2cb824:
    // 0x2cb824: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB824u;
    {
        const bool branch_taken_0x2cb824 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB824u;
        // 0x2cb828: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb824) {
            ctx->pc = 0x2CB838u;
            goto label_2cb838;
        }
    }
    ctx->pc = 0x2CB82Cu;
    // 0x2cb82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb830: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB830u;
    {
        const bool branch_taken_0x2cb830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB830u;
        // 0x2cb834: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb830) {
            ctx->pc = 0x2CB84Cu;
            goto label_2cb84c;
        }
    }
    ctx->pc = 0x2CB838u;
label_2cb838:
    // 0x2cb838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb83c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cb83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cb840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cb844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cb848: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2cb848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cb84c:
    // 0x2cb84c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cb84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cb850: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2cb850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cb854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb858: 0xc781927c  lwc1        $f1, -0x6D84($gp)
    ctx->pc = 0x2cb858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb85c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2cb85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb860: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2cb860u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2cb864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cb864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cb868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb86c:
    // 0x2cb86c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cb86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cb870: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x2cb870u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2cb874: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2CB874u;
    SET_GPR_U32(ctx, 31, 0x2CB87Cu);
    ctx->pc = 0x2CB878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB874u;
    // 0x2cb878: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2CB874u, 0x2CB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB87Cu;
label_2cb87c:
    // 0x2cb87c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2CB87Cu;
    {
        const bool branch_taken_0x2cb87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB87Cu;
        // 0x2cb880: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb87c) {
            ctx->pc = 0x2CB8F8u;
            goto label_2cb8f8;
        }
    }
    ctx->pc = 0x2CB884u;
label_2cb884:
    // 0x2cb884: 0xc085608  jal         func_215820
    ctx->pc = 0x2CB884u;
    SET_GPR_U32(ctx, 31, 0x2CB88Cu);
    ctx->pc = 0x2CB888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB884u;
    // 0x2cb888: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CB884u, 0x2CB88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB88Cu;
label_2cb88c:
    // 0x2cb88c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CB88Cu;
    {
        const bool branch_taken_0x2cb88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB88Cu;
        // 0x2cb890: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb88c) {
            ctx->pc = 0x2CB8F8u;
            goto label_2cb8f8;
        }
    }
    ctx->pc = 0x2CB894u;
    // 0x2cb894: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CB894u;
    SET_GPR_U32(ctx, 31, 0x2CB89Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CB894u, 0x2CB89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB89Cu;
label_2cb89c:
    // 0x2cb89c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB89Cu;
    {
        const bool branch_taken_0x2cb89c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB89Cu;
        // 0x2cb8a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb89c) {
            ctx->pc = 0x2CB8B0u;
            goto label_2cb8b0;
        }
    }
    ctx->pc = 0x2CB8A4u;
    // 0x2cb8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb8a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB8A8u;
    {
        const bool branch_taken_0x2cb8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8A8u;
        // 0x2cb8ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8a8) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB8B0u;
label_2cb8b0:
    // 0x2cb8b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb8b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cb8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cb8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb8bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cb8bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cb8c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2cb8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cb8c4:
    // 0x2cb8c4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cb8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cb8c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2cb8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cb8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8d0: 0xc7819280  lwc1        $f1, -0x6D80($gp)
    ctx->pc = 0x2cb8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb8d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2cb8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb8d8: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2cb8d8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2cb8dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cb8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cb8e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb8e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cb8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cb8e8: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x2cb8e8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2cb8ec: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2CB8ECu;
    SET_GPR_U32(ctx, 31, 0x2CB8F4u);
    ctx->pc = 0x2CB8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8ECu;
    // 0x2cb8f0: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2CB8ECu, 0x2CB8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8F4u;
label_2cb8f4:
    // 0x2cb8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb8f8:
    // 0x2cb8f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8FCu;
        // 0x2cb900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB904u;
}
