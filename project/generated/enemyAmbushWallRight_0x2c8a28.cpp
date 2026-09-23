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

// Function: enemyAmbushWallRight
// Address: 0x2c8a28 - 0x2c9248
void enemyAmbushWallRight_0x2c8a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAmbushWallRight_0x2c8a28");
#endif

    switch (ctx->pc) {
        case 0x2c8a58u: goto label_2c8a58;
        case 0x2c8aa8u: goto label_2c8aa8;
        case 0x2c8aecu: goto label_2c8aec;
        case 0x2c8b10u: goto label_2c8b10;
        case 0x2c8b48u: goto label_2c8b48;
        case 0x2c8b58u: goto label_2c8b58;
        case 0x2c8b68u: goto label_2c8b68;
        case 0x2c8b7cu: goto label_2c8b7c;
        case 0x2c8ba0u: goto label_2c8ba0;
        case 0x2c8bdcu: goto label_2c8bdc;
        case 0x2c8c10u: goto label_2c8c10;
        case 0x2c8c48u: goto label_2c8c48;
        case 0x2c8c88u: goto label_2c8c88;
        case 0x2c8ca4u: goto label_2c8ca4;
        case 0x2c8d04u: goto label_2c8d04;
        case 0x2c8d6cu: goto label_2c8d6c;
        case 0x2c8d84u: goto label_2c8d84;
        case 0x2c8d94u: goto label_2c8d94;
        case 0x2c8e68u: goto label_2c8e68;
        case 0x2c8e94u: goto label_2c8e94;
        case 0x2c8f00u: goto label_2c8f00;
        case 0x2c8f08u: goto label_2c8f08;
        case 0x2c8f58u: goto label_2c8f58;
        case 0x2c8fa0u: goto label_2c8fa0;
        case 0x2c8ffcu: goto label_2c8ffc;
        case 0x2c901cu: goto label_2c901c;
        case 0x2c9090u: goto label_2c9090;
        case 0x2c90bcu: goto label_2c90bc;
        case 0x2c911cu: goto label_2c911c;
        case 0x2c9138u: goto label_2c9138;
        case 0x2c9174u: goto label_2c9174;
        case 0x2c91b8u: goto label_2c91b8;
        case 0x2c91d4u: goto label_2c91d4;
        case 0x2c9200u: goto label_2c9200;
        case 0x2c9224u: goto label_2c9224;
        default: break;
    }

    ctx->pc = 0x2c8a28u;

    // 0x2c8a28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c8a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c8a2c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c8a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c8a30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c8a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c8a34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c8a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c8a38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a3c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c8a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c8a40: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c8a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c8a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8a48: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2c8a48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c8a4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c8a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c8a50: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C8A50u;
    SET_GPR_U32(ctx, 31, 0x2C8A58u);
    ctx->pc = 0x2C8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A50u;
    // 0x2c8a54: 0x8e320160  lw          $s2, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C8A50u, 0x2C8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A58u;
label_2c8a58:
    // 0x2c8a58: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c8a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8a5c: 0x8e430aa8  lw          $v1, 0xAA8($s2)
    ctx->pc = 0x2c8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2728)));
    // 0x2c8a60: 0xe6410aec  swc1        $f1, 0xAEC($s2)
    ctx->pc = 0x2c8a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2796), bits); }
    // 0x2c8a64: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2c8a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c8a68: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c8a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8a6c: 0xe6400af0  swc1        $f0, 0xAF0($s2)
    ctx->pc = 0x2c8a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2800), bits); }
    // 0x2c8a70: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c8a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8a74: 0xae400adc  sw          $zero, 0xADC($s2)
    ctx->pc = 0x2c8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2780), GPR_U32(ctx, 0));
    // 0x2c8a78: 0x104001ea  beqz        $v0, . + 4 + (0x1EA << 2)
    ctx->pc = 0x2C8A78u;
    {
        const bool branch_taken_0x2c8a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A78u;
        // 0x2c8a7c: 0xe6410af4  swc1        $f1, 0xAF4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a78) {
            ctx->pc = 0x2C9224u;
            goto label_2c9224;
        }
    }
    ctx->pc = 0x2C8A80u;
    // 0x2c8a80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c8a84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8a88: 0x24429ea0  addiu       $v0, $v0, -0x6160
    ctx->pc = 0x2c8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x2c8a8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8a90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8a94: 0x800008  jr          $a0
    ctx->pc = 0x2C8A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8A9Cu: goto label_2c8a9c;
            case 0x2C8B30u: goto label_2c8b30;
            case 0x2C8CBCu: goto label_2c8cbc;
            case 0x2C8ED8u: goto label_2c8ed8;
            case 0x2C9100u: goto label_2c9100;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8A94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C8A9Cu;
label_2c8a9c:
    // 0x2c8a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8aa0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8AA0u;
    SET_GPR_U32(ctx, 31, 0x2C8AA8u);
    ctx->pc = 0x2C8AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8AA0u;
    // 0x2c8aa4: 0x240501c9  addiu       $a1, $zero, 0x1C9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 457));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8AA0u, 0x2C8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8AA8u;
label_2c8aa8:
    // 0x2c8aa8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C8AA8u;
    {
        const bool branch_taken_0x2c8aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AA8u;
        // 0x2c8aac: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8aa8) {
            ctx->pc = 0x2C8B08u;
            goto label_2c8b08;
        }
    }
    ctx->pc = 0x2C8AB0u;
    // 0x2c8ab0: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x2c8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c8ab4: 0x8f86a2ec  lw          $a2, -0x5D14($gp)
    ctx->pc = 0x2c8ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c8ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8abc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c8abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c8ac0: 0xc6340034  lwc1        $f20, 0x34($s1)
    ctx->pc = 0x2c8ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8ac4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8ac8: 0x240501c9  addiu       $a1, $zero, 0x1C9
    ctx->pc = 0x2c8ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 457));
    // 0x2c8acc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c8accu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8ad0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c8ad4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2c8ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8ad8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x2c8ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x2c8adc: 0xe6400b9c  swc1        $f0, 0xB9C($s2)
    ctx->pc = 0x2c8adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2972), bits); }
    // 0x2c8ae0: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2c8ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2c8ae4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8AE4u;
    SET_GPR_U32(ctx, 31, 0x2C8AECu);
    ctx->pc = 0x2C8AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8AE4u;
    // 0x2c8ae8: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8AE4u, 0x2C8AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8AECu;
label_2c8aec:
    // 0x2c8aec: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c8aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8af0: 0xe6340034  swc1        $f20, 0x34($s1)
    ctx->pc = 0x2c8af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c8af4: 0xe6410b04  swc1        $f1, 0xB04($s2)
    ctx->pc = 0x2c8af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2820), bits); }
    // 0x2c8af8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c8af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8afc: 0xe6400b08  swc1        $f0, 0xB08($s2)
    ctx->pc = 0x2c8afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2824), bits); }
    // 0x2c8b00: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c8b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8b04: 0xe6410b0c  swc1        $f1, 0xB0C($s2)
    ctx->pc = 0x2c8b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2828), bits); }
label_2c8b08:
    // 0x2c8b08: 0xc0b269a  jal         func_2C9A68
    ctx->pc = 0x2C8B08u;
    SET_GPR_U32(ctx, 31, 0x2C8B10u);
    ctx->pc = 0x2C8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B08u;
    // 0x2c8b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9A68u, 0x2C8B08u, 0x2C8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B10u;
label_2c8b10:
    // 0x2c8b10: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8B10u;
    {
        const bool branch_taken_0x2c8b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B10u;
        // 0x2c8b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b10) {
            ctx->pc = 0x2C8B1Cu;
            goto label_2c8b1c;
        }
    }
    ctx->pc = 0x2C8B18u;
    // 0x2c8b18: 0xae420aa8  sw          $v0, 0xAA8($s2)
    ctx->pc = 0x2c8b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 2));
label_2c8b1c:
    // 0x2c8b1c: 0x8e450ae4  lw          $a1, 0xAE4($s2)
    ctx->pc = 0x2c8b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c8b20: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c8b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c8b24: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c8b28: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2C8B28u;
    {
        const bool branch_taken_0x2c8b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B28u;
        // 0x2c8b2c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b28) {
            ctx->pc = 0x2C8C80u;
            goto label_2c8c80;
        }
    }
    ctx->pc = 0x2C8B30u;
label_2c8b30:
    // 0x2c8b30: 0x8e530ae4  lw          $s3, 0xAE4($s2)
    ctx->pc = 0x2c8b30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c8b34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c8b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b38: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c8b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8b3c: 0xc66c0034  lwc1        $f12, 0x34($s3)
    ctx->pc = 0x2c8b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8b40: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C8B40u;
    SET_GPR_U32(ctx, 31, 0x2C8B48u);
    ctx->pc = 0x2C8B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B40u;
    // 0x2c8b44: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C8B40u, 0x2C8B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B48u;
label_2c8b48:
    // 0x2c8b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c8b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b50: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C8B50u;
    SET_GPR_U32(ctx, 31, 0x2C8B58u);
    ctx->pc = 0x2C8B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B50u;
    // 0x2c8b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C8B50u, 0x2C8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B58u;
label_2c8b58:
    // 0x2c8b58: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8B58u;
    {
        const bool branch_taken_0x2c8b58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B58u;
        // 0x2c8b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b58) {
            ctx->pc = 0x2C8B6Cu;
            goto label_2c8b6c;
        }
    }
    ctx->pc = 0x2C8B60u;
    // 0x2c8b60: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C8B60u;
    SET_GPR_U32(ctx, 31, 0x2C8B68u);
    ctx->pc = 0x2C8B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B60u;
    // 0x2c8b64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C8B60u, 0x2C8B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B68u;
label_2c8b68:
    // 0x2c8b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b6c:
    // 0x2c8b6c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2c8b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2c8b70: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2c8b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2c8b74: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C8B74u;
    SET_GPR_U32(ctx, 31, 0x2C8B7Cu);
    ctx->pc = 0x2C8B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B74u;
    // 0x2c8b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C8B74u, 0x2C8B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B7Cu;
label_2c8b7c:
    // 0x2c8b7c: 0x441003e  bgez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C8B7Cu;
    {
        const bool branch_taken_0x2c8b7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B7Cu;
        // 0x2c8b80: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b7c) {
            ctx->pc = 0x2C8C78u;
            goto label_2c8c78;
        }
    }
    ctx->pc = 0x2C8B84u;
    // 0x2c8b84: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c8b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c8b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8b90: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8b94: 0x240501c9  addiu       $a1, $zero, 0x1C9
    ctx->pc = 0x2c8b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 457));
    // 0x2c8b98: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8B98u;
    SET_GPR_U32(ctx, 31, 0x2C8BA0u);
    ctx->pc = 0x2C8B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B98u;
    // 0x2c8b9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8B98u, 0x2C8BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BA0u;
label_2c8ba0:
    // 0x2c8ba0: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x2c8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c8ba4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2c8ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c8ba8: 0x8f86a2ec  lw          $a2, -0x5D14($gp)
    ctx->pc = 0x2c8ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c8bac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c8bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8bb0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2c8bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c8bb4: 0x8e430ae4  lw          $v1, 0xAE4($s2)
    ctx->pc = 0x2c8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c8bb8: 0xae450aa8  sw          $a1, 0xAA8($s2)
    ctx->pc = 0x2c8bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 5));
    // 0x2c8bbc: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2c8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8bc0: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2c8bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8bc4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c8bc8: 0xc44d0014  lwc1        $f13, 0x14($v0)
    ctx->pc = 0x2c8bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c8bcc: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2c8bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8bd0: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x2c8bd0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2c8bd4: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x2C8BD4u;
    SET_GPR_U32(ctx, 31, 0x2C8BDCu);
    ctx->pc = 0x2C8BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8BD4u;
    // 0x2c8bd8: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x2C8BD4u, 0x2C8BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BDCu;
label_2c8bdc:
    // 0x2c8bdc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c8bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c8be0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c8be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8be4: 0xc78291f0  lwc1        $f2, -0x6E10($gp)
    ctx->pc = 0x2c8be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8be8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c8be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c8bec: 0x0  nop
    ctx->pc = 0x2c8becu;
    // NOP
    // 0x2c8bf0: 0x0  nop
    ctx->pc = 0x2c8bf0u;
    // NOP
    // 0x2c8bf4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2c8bf4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2c8bf8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c8bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8bfc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2C8BFCu;
    {
        const bool branch_taken_0x2c8bfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8bfc) {
            ctx->pc = 0x2C8C2Cu;
            goto label_2c8c2c;
        }
    }
    ctx->pc = 0x2C8C04u;
    // 0x2c8c04: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c8c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c8c08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c8c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8c0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c8c0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c8c10:
    // 0x2c8c10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c8c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c8c14: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2c8c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8c18: 0x0  nop
    ctx->pc = 0x2c8c18u;
    // NOP
    // 0x2c8c1c: 0x0  nop
    ctx->pc = 0x2c8c1cu;
    // NOP
    // 0x2c8c20: 0x0  nop
    ctx->pc = 0x2c8c20u;
    // NOP
    // 0x2c8c24: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C8C24u;
    {
        const bool branch_taken_0x2c8c24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8c24) {
            ctx->pc = 0x2C8C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8c10;
        }
    }
    ctx->pc = 0x2C8C2Cu;
label_2c8c2c:
    // 0x2c8c2c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c8c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c8c30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c8c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8c34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c8c34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8c38: 0x0  nop
    ctx->pc = 0x2c8c38u;
    // NOP
    // 0x2c8c3c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2C8C3Cu;
    {
        const bool branch_taken_0x2c8c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8c3c) {
            ctx->pc = 0x2C8C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C3Cu;
            // 0x2c8c40: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C68u;
            goto label_2c8c68;
        }
    }
    ctx->pc = 0x2C8C44u;
    // 0x2c8c44: 0x0  nop
    ctx->pc = 0x2c8c44u;
    // NOP
label_2c8c48:
    // 0x2c8c48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c8c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8c4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c8c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8c50: 0x0  nop
    ctx->pc = 0x2c8c50u;
    // NOP
    // 0x2c8c54: 0x0  nop
    ctx->pc = 0x2c8c54u;
    // NOP
    // 0x2c8c58: 0x0  nop
    ctx->pc = 0x2c8c58u;
    // NOP
    // 0x2c8c5c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C8C5Cu;
    {
        const bool branch_taken_0x2c8c5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8c5c) {
            ctx->pc = 0x2C8C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8c48;
        }
    }
    ctx->pc = 0x2C8C64u;
    // 0x2c8c64: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x2c8c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_2c8c68:
    // 0x2c8c68: 0xe6400b9c  swc1        $f0, 0xB9C($s2)
    ctx->pc = 0x2c8c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2972), bits); }
    // 0x2c8c6c: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2c8c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2c8c70: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x2C8C70u;
    {
        const bool branch_taken_0x2c8c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C70u;
        // 0x2c8c74: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c70) {
            ctx->pc = 0x2C9224u;
            goto label_2c9224;
        }
    }
    ctx->pc = 0x2C8C78u;
label_2c8c78:
    // 0x2c8c78: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c8c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c8c7c: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c8c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
label_2c8c80:
    // 0x2c8c80: 0xc0b1a60  jal         func_2C6980
    ctx->pc = 0x2C8C80u;
    SET_GPR_U32(ctx, 31, 0x2C8C88u);
    ctx->pc = 0x2C8C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8C80u;
    // 0x2c8c84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6980u, 0x2C8C80u, 0x2C8C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C88u;
label_2c8c88:
    // 0x2c8c88: 0x10400166  beqz        $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x2C8C88u;
    {
        const bool branch_taken_0x2c8c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C88u;
        // 0x2c8c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c88) {
            ctx->pc = 0x2C9224u;
            goto label_2c9224;
        }
    }
    ctx->pc = 0x2C8C90u;
    // 0x2c8c90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8c94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8c98: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c8c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c8c9c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8C9Cu;
    SET_GPR_U32(ctx, 31, 0x2C8CA4u);
    ctx->pc = 0x2C8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8C9Cu;
    // 0x2c8ca0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8C9Cu, 0x2C8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CA4u;
label_2c8ca4:
    // 0x2c8ca4: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c8ca8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8cac: 0xae420a9c  sw          $v0, 0xA9C($s2)
    ctx->pc = 0x2c8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 2));
    // 0x2c8cb0: 0xe6540b4c  swc1        $f20, 0xB4C($s2)
    ctx->pc = 0x2c8cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    // 0x2c8cb4: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x2C8CB4u;
    {
        const bool branch_taken_0x2c8cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CB4u;
        // 0x2c8cb8: 0xae430aa0  sw          $v1, 0xAA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cb4) {
            ctx->pc = 0x2C9224u;
            goto label_2c9224;
        }
    }
    ctx->pc = 0x2C8CBCu;
label_2c8cbc:
    // 0x2c8cbc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2c8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c8cc0: 0xc78091f4  lwc1        $f0, -0x6E0C($gp)
    ctx->pc = 0x2c8cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8cc4: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x2c8cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8cc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c8cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8ccc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2C8CCCu;
    {
        const bool branch_taken_0x2c8ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8ccc) {
            ctx->pc = 0x2C8CFCu;
            goto label_2c8cfc;
        }
    }
    ctx->pc = 0x2C8CD4u;
    // 0x2c8cd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8cd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8cdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8ce0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8CE0u;
    {
        const bool branch_taken_0x2c8ce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8ce0) {
            ctx->pc = 0x2C8CFCu;
            goto label_2c8cfc;
        }
    }
    ctx->pc = 0x2C8CE8u;
    // 0x2c8ce8: 0x8e430a90  lw          $v1, 0xA90($s2)
    ctx->pc = 0x2c8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c8cec: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2c8cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c8cf0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8CF0u;
    {
        const bool branch_taken_0x2c8cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CF0u;
        // 0x2c8cf4: 0x34620006  ori         $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cf0) {
            ctx->pc = 0x2C8CFCu;
            goto label_2c8cfc;
        }
    }
    ctx->pc = 0x2C8CF8u;
    // 0x2c8cf8: 0xae420a90  sw          $v0, 0xA90($s2)
    ctx->pc = 0x2c8cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
label_2c8cfc:
    // 0x2c8cfc: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C8CFCu;
    SET_GPR_U32(ctx, 31, 0x2C8D04u);
    ctx->pc = 0x2C8D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8CFCu;
    // 0x2c8d00: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C8CFCu, 0x2C8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D04u;
label_2c8d04:
    // 0x2c8d04: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x2C8D04u;
    {
        const bool branch_taken_0x2c8d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D04u;
        // 0x2c8d08: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d04) {
            ctx->pc = 0x2C9228u;
            goto label_2c9228;
        }
    }
    ctx->pc = 0x2C8D0Cu;
    // 0x2c8d0c: 0x8e530ae4  lw          $s3, 0xAE4($s2)
    ctx->pc = 0x2c8d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c8d10: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2c8d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8d14: 0xc6630030  lwc1        $f3, 0x30($s3)
    ctx->pc = 0x2c8d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8d18: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c8d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8d1c: 0xc6640034  lwc1        $f4, 0x34($s3)
    ctx->pc = 0x2c8d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c8d20: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c8d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c8d24: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c8d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8d28: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2c8d28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c8d2c: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x2c8d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8d30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c8d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c8d34: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c8d34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c8d38: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c8d38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c8d3c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c8d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c8d40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c8d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c8d44: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2c8d44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c8d48: 0x0  nop
    ctx->pc = 0x2c8d48u;
    // NOP
    // 0x2c8d4c: 0x0  nop
    ctx->pc = 0x2c8d4cu;
    // NOP
    // 0x2c8d50: 0x460c0504  c1          0xC0504
    ctx->pc = 0x2c8d50u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c8d54: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2c8d54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8d58: 0x0  nop
    ctx->pc = 0x2c8d58u;
    // NOP
    // 0x2c8d5c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8D5Cu;
    {
        const bool branch_taken_0x2c8d5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8d5c) {
            ctx->pc = 0x2C8D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D5Cu;
            // 0x2c8d60: 0x8e4402a8  lw          $a0, 0x2A8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8D78u;
            goto label_2c8d78;
        }
    }
    ctx->pc = 0x2C8D64u;
    // 0x2c8d64: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C8D64u;
    SET_GPR_U32(ctx, 31, 0x2C8D6Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C8D64u, 0x2C8D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D6Cu;
label_2c8d6c:
    // 0x2c8d6c: 0x8e530ae4  lw          $s3, 0xAE4($s2)
    ctx->pc = 0x2c8d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c8d70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c8d70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c8d74: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c8d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
label_2c8d78:
    // 0x2c8d78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8d7c: 0xc0b1a60  jal         func_2C6980
    ctx->pc = 0x2C8D7Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D84u);
    ctx->pc = 0x2C8D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D7Cu;
    // 0x2c8d80: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6980u, 0x2C8D7Cu, 0x2C8D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D84u;
label_2c8d84:
    // 0x2c8d84: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C8D84u;
    {
        const bool branch_taken_0x2c8d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d84) {
            ctx->pc = 0x2C8D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D84u;
            // 0x2c8d88: 0xc622004c  lwc1        $f2, 0x4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8DFCu;
            goto label_2c8dfc;
        }
    }
    ctx->pc = 0x2C8D8Cu;
    // 0x2c8d8c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C8D8Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D94u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C8D8Cu, 0x2C8D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D94u;
label_2c8d94:
    // 0x2c8d94: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8D94u;
    {
        const bool branch_taken_0x2c8d94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D94u;
        // 0x2c8d98: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d94) {
            ctx->pc = 0x2C8DA8u;
            goto label_2c8da8;
        }
    }
    ctx->pc = 0x2C8D9Cu;
    // 0x2c8d9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c8d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c8da0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8DA0u;
    {
        const bool branch_taken_0x2c8da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DA0u;
        // 0x2c8da4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8da0) {
            ctx->pc = 0x2C8DBCu;
            goto label_2c8dbc;
        }
    }
    ctx->pc = 0x2C8DA8u;
label_2c8da8:
    // 0x2c8da8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c8da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8dac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c8dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c8db0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c8db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c8db4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c8db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c8db8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c8db8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c8dbc:
    // 0x2c8dbc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c8dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c8dc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8dc4: 0xc78191f8  lwc1        $f1, -0x6E08($gp)
    ctx->pc = 0x2c8dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8dc8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c8dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c8dcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c8dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8dd0: 0x0  nop
    ctx->pc = 0x2c8dd0u;
    // NOP
    // 0x2c8dd4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8DD4u;
    {
        const bool branch_taken_0x2c8dd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DD4u;
        // 0x2c8dd8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8dd4) {
            ctx->pc = 0x2C8DF4u;
            goto label_2c8df4;
        }
    }
    ctx->pc = 0x2C8DDCu;
    // 0x2c8ddc: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2c8ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2c8de0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8de4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c8de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8de8: 0x0  nop
    ctx->pc = 0x2c8de8u;
    // NOP
    // 0x2c8dec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8DECu;
    {
        const bool branch_taken_0x2c8dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8dec) {
            ctx->pc = 0x2C8DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8DECu;
            // 0x2c8df0: 0xc622004c  lwc1        $f2, 0x4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8DFCu;
            goto label_2c8dfc;
        }
    }
    ctx->pc = 0x2C8DF4u;
label_2c8df4:
    // 0x2c8df4: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x2C8DF4u;
    {
        const bool branch_taken_0x2c8df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DF4u;
        // 0x2c8df8: 0xae420aa8  sw          $v0, 0xAA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8df4) {
            ctx->pc = 0x2C9224u;
            goto label_2c9224;
        }
    }
    ctx->pc = 0x2C8DFCu;
label_2c8dfc:
    // 0x2c8dfc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c8dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c8e00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c8e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8e04: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2c8e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8e08: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c8e08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c8e0c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c8e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c8e10: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c8e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c8e14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c8e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c8e18: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2c8e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8e1c: 0xe622004c  swc1        $f2, 0x4C($s1)
    ctx->pc = 0x2c8e1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2c8e20: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2c8e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2c8e24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8E24u;
    {
        const bool branch_taken_0x2c8e24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E24u;
        // 0x2c8e28: 0xe6220054  swc1        $f2, 0x54($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e24) {
            ctx->pc = 0x2C8E34u;
            goto label_2c8e34;
        }
    }
    ctx->pc = 0x2C8E2Cu;
    // 0x2c8e2c: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2c8e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c8e30: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2c8e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_2c8e34:
    // 0x2c8e34: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2c8e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8e38: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2c8e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8e3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8E3Cu;
    {
        const bool branch_taken_0x2c8e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8e3c) {
            ctx->pc = 0x2C8E4Cu;
            goto label_2c8e4c;
        }
    }
    ctx->pc = 0x2C8E44u;
    // 0x2c8e44: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c8e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c8e48: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2c8e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_2c8e4c:
    // 0x2c8e4c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c8e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c8e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8e58: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8e5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c8e60: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8E60u;
    SET_GPR_U32(ctx, 31, 0x2C8E68u);
    ctx->pc = 0x2C8E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8E60u;
    // 0x2c8e64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8E60u, 0x2C8E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E68u;
label_2c8e68:
    // 0x2c8e68: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c8e6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c8e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8e70: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c8e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e78: 0xe6540b4c  swc1        $f20, 0xB4C($s2)
    ctx->pc = 0x2c8e78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    // 0x2c8e7c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c8e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c8e80: 0xae430aa0  sw          $v1, 0xAA0($s2)
    ctx->pc = 0x2c8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
    // 0x2c8e84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8e88: 0xae460a9c  sw          $a2, 0xA9C($s2)
    ctx->pc = 0x2c8e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 6));
    // 0x2c8e8c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C8E8Cu;
    SET_GPR_U32(ctx, 31, 0x2C8E94u);
    ctx->pc = 0x2C8E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8E8Cu;
    // 0x2c8e90: 0xae420a90  sw          $v0, 0xA90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C8E8Cu, 0x2C8E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E94u;
label_2c8e94:
    // 0x2c8e94: 0x8e420ae4  lw          $v0, 0xAE4($s2)
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c8e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c8e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c8ea0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c8ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8ea4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c8ea4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8ea8: 0xe6400aec  swc1        $f0, 0xAEC($s2)
    ctx->pc = 0x2c8ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2796), bits); }
    // 0x2c8eac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c8eacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8eb0: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2c8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8eb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c8eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8eb8: 0xe6410af0  swc1        $f1, 0xAF0($s2)
    ctx->pc = 0x2c8eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2800), bits); }
    // 0x2c8ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8ec0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c8ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8ec4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c8ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8ec8: 0xe6400af4  swc1        $f0, 0xAF4($s2)
    ctx->pc = 0x2c8ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2804), bits); }
    // 0x2c8ecc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c8eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8ed0: 0x80af174  j           func_2BC5D0
    ctx->pc = 0x2C8ED0u;
    ctx->pc = 0x2C8ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8ED0u;
    // 0x2c8ed4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D0u;
    rotateChr_0x2bc5d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C8ED8u;
label_2c8ed8:
    // 0x2c8ed8: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c8edc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c8edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c8ee0: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C8EE0u;
    {
        const bool branch_taken_0x2c8ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EE0u;
        // 0x2c8ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ee0) {
            ctx->pc = 0x2C8FF4u;
            goto label_2c8ff4;
        }
    }
    ctx->pc = 0x2C8EE8u;
    // 0x2c8ee8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c8ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c8eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8ef0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8ef4: 0x240501ca  addiu       $a1, $zero, 0x1CA
    ctx->pc = 0x2c8ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
    // 0x2c8ef8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C8EF8u;
    SET_GPR_U32(ctx, 31, 0x2C8F00u);
    ctx->pc = 0x2C8EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8EF8u;
    // 0x2c8efc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C8EF8u, 0x2C8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F00u;
label_2c8f00:
    // 0x2c8f00: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C8F00u;
    SET_GPR_U32(ctx, 31, 0x2C8F08u);
    ctx->pc = 0x2C8F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8F00u;
    // 0x2c8f04: 0xe6540b4c  swc1        $f20, 0xB4C($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C8F00u, 0x2C8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F08u;
label_2c8f08:
    // 0x2c8f08: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8F08u;
    {
        const bool branch_taken_0x2c8f08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F08u;
        // 0x2c8f0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f08) {
            ctx->pc = 0x2C8F1Cu;
            goto label_2c8f1c;
        }
    }
    ctx->pc = 0x2C8F10u;
    // 0x2c8f10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c8f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c8f14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8F14u;
    {
        const bool branch_taken_0x2c8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F14u;
        // 0x2c8f18: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f14) {
            ctx->pc = 0x2C8F30u;
            goto label_2c8f30;
        }
    }
    ctx->pc = 0x2C8F1Cu;
label_2c8f1c:
    // 0x2c8f1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c8f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8f20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c8f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c8f24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c8f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c8f28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c8f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c8f2c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c8f2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c8f30:
    // 0x2c8f30: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c8f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c8f34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8f38: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c8f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c8f3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c8f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8f40: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c8f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c8f44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8f48: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2C8F48u;
    {
        const bool branch_taken_0x2c8f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8f48) {
            ctx->pc = 0x2C8F98u;
            goto label_2c8f98;
        }
    }
    ctx->pc = 0x2C8F50u;
    // 0x2c8f50: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C8F50u;
    SET_GPR_U32(ctx, 31, 0x2C8F58u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C8F50u, 0x2C8F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F58u;
label_2c8f58:
    // 0x2c8f58: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8F58u;
    {
        const bool branch_taken_0x2c8f58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F58u;
        // 0x2c8f5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f58) {
            ctx->pc = 0x2C8F6Cu;
            goto label_2c8f6c;
        }
    }
    ctx->pc = 0x2C8F60u;
    // 0x2c8f60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c8f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c8f64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8F64u;
    {
        const bool branch_taken_0x2c8f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F64u;
        // 0x2c8f68: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f64) {
            ctx->pc = 0x2C8F80u;
            goto label_2c8f80;
        }
    }
    ctx->pc = 0x2C8F6Cu;
label_2c8f6c:
    // 0x2c8f6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c8f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8f70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c8f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c8f74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c8f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c8f78: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c8f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c8f7c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c8f7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c8f80:
    // 0x2c8f80: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c8f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c8f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8f88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8f8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c8f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8f90: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C8F90u;
    {
        const bool branch_taken_0x2c8f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F90u;
        // 0x2c8f94: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f90) {
            ctx->pc = 0x2C8FE0u;
            goto label_2c8fe0;
        }
    }
    ctx->pc = 0x2C8F98u;
label_2c8f98:
    // 0x2c8f98: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C8F98u;
    SET_GPR_U32(ctx, 31, 0x2C8FA0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C8F98u, 0x2C8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8FA0u;
label_2c8fa0:
    // 0x2c8fa0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8FA0u;
    {
        const bool branch_taken_0x2c8fa0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FA0u;
        // 0x2c8fa4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fa0) {
            ctx->pc = 0x2C8FB4u;
            goto label_2c8fb4;
        }
    }
    ctx->pc = 0x2C8FA8u;
    // 0x2c8fa8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c8fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c8fac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8FACu;
    {
        const bool branch_taken_0x2c8fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FACu;
        // 0x2c8fb0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fac) {
            ctx->pc = 0x2C8FC8u;
            goto label_2c8fc8;
        }
    }
    ctx->pc = 0x2C8FB4u;
label_2c8fb4:
    // 0x2c8fb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c8fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8fb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c8fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c8fbc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c8fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c8fc0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c8fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c8fc4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c8fc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c8fc8:
    // 0x2c8fc8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c8fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c8fcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c8fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8fd0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c8fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c8fd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c8fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8fd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c8fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c8fdc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c8fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c8fe0:
    // 0x2c8fe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c8fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c8fe4: 0xe6400aac  swc1        $f0, 0xAAC($s2)
    ctx->pc = 0x2c8fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2732), bits); }
    // 0x2c8fe8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c8fec: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2C8FECu;
    {
        const bool branch_taken_0x2c8fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FECu;
        // 0x2c8ff0: 0xae420aa8  sw          $v0, 0xAA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fec) {
            ctx->pc = 0x2C9224u;
            goto label_2c9224;
        }
    }
    ctx->pc = 0x2C8FF4u;
label_2c8ff4:
    // 0x2c8ff4: 0xc085608  jal         func_215820
    ctx->pc = 0x2C8FF4u;
    SET_GPR_U32(ctx, 31, 0x2C8FFCu);
    ctx->pc = 0x2C8FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8FF4u;
    // 0x2c8ff8: 0x240501c8  addiu       $a1, $zero, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C8FF4u, 0x2C8FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8FFCu;
label_2c8ffc:
    // 0x2c8ffc: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2C8FFCu;
    {
        const bool branch_taken_0x2c8ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FFCu;
        // 0x2c9000: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ffc) {
            ctx->pc = 0x2C9228u;
            goto label_2c9228;
        }
    }
    ctx->pc = 0x2C9004u;
    // 0x2c9004: 0x8e450ae4  lw          $a1, 0xAE4($s2)
    ctx->pc = 0x2c9004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c9008: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c9008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c900c: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c9010: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2c9010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2c9014: 0xc0b1a60  jal         func_2C6980
    ctx->pc = 0x2C9014u;
    SET_GPR_U32(ctx, 31, 0x2C901Cu);
    ctx->pc = 0x2C9018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9014u;
    // 0x2c9018: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6980u, 0x2C9014u, 0x2C901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C901Cu;
label_2c901c:
    // 0x2c901c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2C901Cu;
    {
        const bool branch_taken_0x2c901c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C901Cu;
        // 0x2c9020: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c901c) {
            ctx->pc = 0x2C9228u;
            goto label_2c9228;
        }
    }
    ctx->pc = 0x2C9024u;
    // 0x2c9024: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x2c9024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9028: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c9028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c902c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c902cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9030: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9034: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c9034u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c9038: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c9038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c903c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c903cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c9040: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9044: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2c9044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9048: 0xe622004c  swc1        $f2, 0x4C($s1)
    ctx->pc = 0x2c9048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2c904c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2c904cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2c9050: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9050u;
    {
        const bool branch_taken_0x2c9050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9050u;
        // 0x2c9054: 0xe6220054  swc1        $f2, 0x54($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9050) {
            ctx->pc = 0x2C9060u;
            goto label_2c9060;
        }
    }
    ctx->pc = 0x2C9058u;
    // 0x2c9058: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2c9058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c905c: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2c905cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_2c9060:
    // 0x2c9060: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9064: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2c9064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9068: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9068u;
    {
        const bool branch_taken_0x2c9068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9068) {
            ctx->pc = 0x2C9078u;
            goto label_2c9078;
        }
    }
    ctx->pc = 0x2C9070u;
    // 0x2c9070: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c9070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c9074: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_2c9078:
    // 0x2c9078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c9078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c907c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c907cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c9080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9084: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c9084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c9088: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C9088u;
    SET_GPR_U32(ctx, 31, 0x2C9090u);
    ctx->pc = 0x2C908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9088u;
    // 0x2c908c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C9088u, 0x2C9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9090u;
label_2c9090:
    // 0x2c9090: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c9090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c9094: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c9094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9098: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c9098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c909c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c909cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90a0: 0xe6540b4c  swc1        $f20, 0xB4C($s2)
    ctx->pc = 0x2c90a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    // 0x2c90a4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c90a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c90a8: 0xae430aa0  sw          $v1, 0xAA0($s2)
    ctx->pc = 0x2c90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
    // 0x2c90ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c90acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c90b0: 0xae460a9c  sw          $a2, 0xA9C($s2)
    ctx->pc = 0x2c90b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 6));
    // 0x2c90b4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C90B4u;
    SET_GPR_U32(ctx, 31, 0x2C90BCu);
    ctx->pc = 0x2C90B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90B4u;
    // 0x2c90b8: 0xae420a90  sw          $v0, 0xA90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C90B4u, 0x2C90BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90BCu;
label_2c90bc:
    // 0x2c90bc: 0x8e420ae4  lw          $v0, 0xAE4($s2)
    ctx->pc = 0x2c90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c90c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c90c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c90c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c90c8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c90c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c90cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c90ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c90d0: 0xe6400aec  swc1        $f0, 0xAEC($s2)
    ctx->pc = 0x2c90d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2796), bits); }
    // 0x2c90d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c90d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c90d8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2c90d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c90dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c90dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c90e0: 0xe6410af0  swc1        $f1, 0xAF0($s2)
    ctx->pc = 0x2c90e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2800), bits); }
    // 0x2c90e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c90e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c90e8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c90e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c90ec: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c90ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c90f0: 0xe6400af4  swc1        $f0, 0xAF4($s2)
    ctx->pc = 0x2c90f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2804), bits); }
    // 0x2c90f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c90f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c90f8: 0x80af174  j           func_2BC5D0
    ctx->pc = 0x2C90F8u;
    ctx->pc = 0x2C90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90F8u;
    // 0x2c90fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D0u;
    rotateChr_0x2bc5d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9100u;
label_2c9100:
    // 0x2c9100: 0xc6410b4c  lwc1        $f1, 0xB4C($s2)
    ctx->pc = 0x2c9100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9104: 0xc6400aac  lwc1        $f0, 0xAAC($s2)
    ctx->pc = 0x2c9104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9108: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c9108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c910c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2C910Cu;
    {
        const bool branch_taken_0x2c910c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c910c) {
            ctx->pc = 0x2C916Cu;
            goto label_2c916c;
        }
    }
    ctx->pc = 0x2C9114u;
    // 0x2c9114: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C9114u;
    SET_GPR_U32(ctx, 31, 0x2C911Cu);
    ctx->pc = 0x2C9118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9114u;
    // 0x2c9118: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C9114u, 0x2C911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C911Cu;
label_2c911c:
    // 0x2c911c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C911Cu;
    {
        const bool branch_taken_0x2c911c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C911Cu;
        // 0x2c9120: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c911c) {
            ctx->pc = 0x2C916Cu;
            goto label_2c916c;
        }
    }
    ctx->pc = 0x2C9124u;
    // 0x2c9124: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9124u;
    {
        const bool branch_taken_0x2c9124 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9124) {
            ctx->pc = 0x2C9128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9124u;
            // 0x2c9128: 0x8e4202a8  lw          $v0, 0x2A8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C913Cu;
            goto label_2c913c;
        }
    }
    ctx->pc = 0x2C912Cu;
    // 0x2c912c: 0x2404008a  addiu       $a0, $zero, 0x8A
    ctx->pc = 0x2c912cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x2c9130: 0xc081546  jal         func_205518
    ctx->pc = 0x2C9130u;
    SET_GPR_U32(ctx, 31, 0x2C9138u);
    ctx->pc = 0x2C9134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9130u;
    // 0x2c9134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2C9130u, 0x2C9138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9138u;
label_2c9138:
    // 0x2c9138: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x2c9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
label_2c913c:
    // 0x2c913c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2c913cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c9140: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x2c9140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c9144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9148: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2c9148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c914c: 0xae430aa8  sw          $v1, 0xAA8($s2)
    ctx->pc = 0x2c914cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 3));
    // 0x2c9150: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c9150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c9154: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c9154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9158: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2c9158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c915c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9160: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2c9160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c9164: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2c9164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9168: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2c9168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2c916c:
    // 0x2c916c: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C916Cu;
    SET_GPR_U32(ctx, 31, 0x2C9174u);
    ctx->pc = 0x2C9170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C916Cu;
    // 0x2c9170: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C916Cu, 0x2C9174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9174u;
label_2c9174:
    // 0x2c9174: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C9174u;
    {
        const bool branch_taken_0x2c9174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9174u;
        // 0x2c9178: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9174) {
            ctx->pc = 0x2C9224u;
            goto label_2c9224;
        }
    }
    ctx->pc = 0x2C917Cu;
    // 0x2c917c: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c917cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c9180: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c9180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c9184: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2c9184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9188: 0x8e450ae4  lw          $a1, 0xAE4($s2)
    ctx->pc = 0x2c9188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c918c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c918cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c9190: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2c9190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2c9194: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c9194u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c9198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c919c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c919cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c91a0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2c91a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c91a4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c91a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c91a8: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2c91a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c91ac: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2c91acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c91b0: 0xc0b1a60  jal         func_2C6980
    ctx->pc = 0x2C91B0u;
    SET_GPR_U32(ctx, 31, 0x2C91B8u);
    ctx->pc = 0x2C91B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C91B0u;
    // 0x2c91b4: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6980u, 0x2C91B0u, 0x2C91B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91B8u;
label_2c91b8:
    // 0x2c91b8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C91B8u;
    {
        const bool branch_taken_0x2c91b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91B8u;
        // 0x2c91bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c91b8) {
            ctx->pc = 0x2C9224u;
            goto label_2c9224;
        }
    }
    ctx->pc = 0x2C91C0u;
    // 0x2c91c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c91c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c91c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c91c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c91c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c91c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c91cc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C91CCu;
    SET_GPR_U32(ctx, 31, 0x2C91D4u);
    ctx->pc = 0x2C91D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C91CCu;
    // 0x2c91d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C91CCu, 0x2C91D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91D4u;
label_2c91d4:
    // 0x2c91d4: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c91d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c91d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c91dc: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c91e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c91e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c91e4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c91e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c91e8: 0xe6540b4c  swc1        $f20, 0xB4C($s2)
    ctx->pc = 0x2c91e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    // 0x2c91ec: 0xae430aa0  sw          $v1, 0xAA0($s2)
    ctx->pc = 0x2c91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
    // 0x2c91f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c91f4: 0xae460a9c  sw          $a2, 0xA9C($s2)
    ctx->pc = 0x2c91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 6));
    // 0x2c91f8: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C91F8u;
    SET_GPR_U32(ctx, 31, 0x2C9200u);
    ctx->pc = 0x2C91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C91F8u;
    // 0x2c91fc: 0xae420a90  sw          $v0, 0xA90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C91F8u, 0x2C9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9200u;
label_2c9200:
    // 0x2c9200: 0x8e420ae4  lw          $v0, 0xAE4($s2)
    ctx->pc = 0x2c9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c9204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9208: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c9208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c920c: 0xe6400aec  swc1        $f0, 0xAEC($s2)
    ctx->pc = 0x2c920cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2796), bits); }
    // 0x2c9210: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2c9210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9214: 0xe6410af0  swc1        $f1, 0xAF0($s2)
    ctx->pc = 0x2c9214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2800), bits); }
    // 0x2c9218: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c9218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c921c: 0xc0af174  jal         func_2BC5D0
    ctx->pc = 0x2C921Cu;
    SET_GPR_U32(ctx, 31, 0x2C9224u);
    ctx->pc = 0x2C9220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C921Cu;
    // 0x2c9220: 0xe6400af4  swc1        $f0, 0xAF4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2804), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D0u, 0x2C921Cu, 0x2C9224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9224u;
label_2c9224:
    // 0x2c9224: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c9224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c9228:
    // 0x2c9228: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c9228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c922c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c922cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9230: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c9230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9234: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c9234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c923c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c9240: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9240u;
        // 0x2c9244: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9248u;
}
