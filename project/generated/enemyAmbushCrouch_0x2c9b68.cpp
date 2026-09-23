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

// Function: enemyAmbushCrouch
// Address: 0x2c9b68 - 0x2ca474
void enemyAmbushCrouch_0x2c9b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAmbushCrouch_0x2c9b68");
#endif

    switch (ctx->pc) {
        case 0x2c9bc4u: goto label_2c9bc4;
        case 0x2c9c64u: goto label_2c9c64;
        case 0x2c9c70u: goto label_2c9c70;
        case 0x2c9cd8u: goto label_2c9cd8;
        case 0x2c9cf8u: goto label_2c9cf8;
        case 0x2c9d0cu: goto label_2c9d0c;
        case 0x2c9d74u: goto label_2c9d74;
        case 0x2c9dbcu: goto label_2c9dbc;
        case 0x2c9e24u: goto label_2c9e24;
        case 0x2c9e9cu: goto label_2c9e9c;
        case 0x2c9ea8u: goto label_2c9ea8;
        case 0x2c9eccu: goto label_2c9ecc;
        case 0x2c9f2cu: goto label_2c9f2c;
        case 0x2c9f94u: goto label_2c9f94;
        case 0x2c9fa0u: goto label_2c9fa0;
        case 0x2c9fb0u: goto label_2c9fb0;
        case 0x2c9fc8u: goto label_2c9fc8;
        case 0x2c9fd8u: goto label_2c9fd8;
        case 0x2ca04cu: goto label_2ca04c;
        case 0x2ca088u: goto label_2ca088;
        case 0x2ca098u: goto label_2ca098;
        case 0x2ca0bcu: goto label_2ca0bc;
        case 0x2ca0ccu: goto label_2ca0cc;
        case 0x2ca0f4u: goto label_2ca0f4;
        case 0x2ca100u: goto label_2ca100;
        case 0x2ca158u: goto label_2ca158;
        case 0x2ca170u: goto label_2ca170;
        case 0x2ca17cu: goto label_2ca17c;
        case 0x2ca1f0u: goto label_2ca1f0;
        case 0x2ca200u: goto label_2ca200;
        case 0x2ca210u: goto label_2ca210;
        case 0x2ca268u: goto label_2ca268;
        case 0x2ca278u: goto label_2ca278;
        case 0x2ca288u: goto label_2ca288;
        case 0x2ca2d8u: goto label_2ca2d8;
        case 0x2ca32cu: goto label_2ca32c;
        case 0x2ca33cu: goto label_2ca33c;
        case 0x2ca3b0u: goto label_2ca3b0;
        case 0x2ca3d4u: goto label_2ca3d4;
        default: break;
    }

    ctx->pc = 0x2c9b68u;

    // 0x2c9b68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c9b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c9b6c: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x2c9b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c9b70: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2c9b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2c9b74: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c9b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c9b78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c9b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b7c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2c9b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2c9b80: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2c9b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c9b84: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2c9b84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2c9b88: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2c9b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2c9b8c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2c9b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2c9b90: 0x8e510160  lw          $s1, 0x160($s2)
    ctx->pc = 0x2c9b90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2c9b94: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2c9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c9b98: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x2c9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2c9b9c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2c9b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c9ba0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2c9ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9ba4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c9ba8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c9ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9bac: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2c9bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2c9bb0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c9bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9bb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9BB4u;
    {
        const bool branch_taken_0x2c9bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BB4u;
        // 0x2c9bb8: 0xe6410038  swc1        $f1, 0x38($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9bb4) {
            ctx->pc = 0x2C9BC8u;
            goto label_2c9bc8;
        }
    }
    ctx->pc = 0x2C9BBCu;
    // 0x2c9bbc: 0xc0b368a  jal         func_2CDA28
    ctx->pc = 0x2C9BBCu;
    SET_GPR_U32(ctx, 31, 0x2C9BC4u);
    ctx->pc = 0x2C9BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9BBCu;
    // 0x2c9bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA28u, 0x2C9BBCu, 0x2C9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BC4u;
label_2c9bc4:
    // 0x2c9bc4: 0xae220ae4  sw          $v0, 0xAE4($s1)
    ctx->pc = 0x2c9bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2788), GPR_U32(ctx, 2));
label_2c9bc8:
    // 0x2c9bc8: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2c9bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c9bcc: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c9bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9bd0: 0xc4a50030  lwc1        $f5, 0x30($a1)
    ctx->pc = 0x2c9bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c9bd4: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x2c9bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9bd8: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x2c9bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9bdc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2c9bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2c9be0: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2c9be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9be4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2c9be4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c9be8: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x2c9be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c9bec: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c9becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c9bf0: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2c9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c9bf4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c9bf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c9bf8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c9bf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c9bfc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c9bfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c9c00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9c04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9C04u;
    {
        const bool branch_taken_0x2c9c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C04u;
        // 0x2c9c08: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c04) {
            ctx->pc = 0x2C9C30u;
            goto label_2c9c30;
        }
    }
    ctx->pc = 0x2C9C0Cu;
    // 0x2c9c0c: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c9c10: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2c9c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2c9c14: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9C14u;
    {
        const bool branch_taken_0x2c9c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c14) {
            ctx->pc = 0x2C9C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9C14u;
            // 0x2c9c18: 0x8e230aa8  lw          $v1, 0xAA8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C34u;
            goto label_2c9c34;
        }
    }
    ctx->pc = 0x2C9C1Cu;
    // 0x2c9c1c: 0xe6250aec  swc1        $f5, 0xAEC($s1)
    ctx->pc = 0x2c9c1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c9c20: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2c9c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9c24: 0xe6200af0  swc1        $f0, 0xAF0($s1)
    ctx->pc = 0x2c9c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c9c28: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2c9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9c2c: 0xe6210af4  swc1        $f1, 0xAF4($s1)
    ctx->pc = 0x2c9c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
label_2c9c30:
    // 0x2c9c30: 0x8e230aa8  lw          $v1, 0xAA8($s1)
    ctx->pc = 0x2c9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
label_2c9c34:
    // 0x2c9c34: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2c9c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c9c38: 0x104001de  beqz        $v0, . + 4 + (0x1DE << 2)
    ctx->pc = 0x2C9C38u;
    {
        const bool branch_taken_0x2c9c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C38u;
        // 0x2c9c3c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c38) {
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2C9C40u;
    // 0x2c9c40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9c44: 0x24429ef0  addiu       $v0, $v0, -0x6110
    ctx->pc = 0x2c9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
    // 0x2c9c48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9c4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9c50: 0x800008  jr          $a0
    ctx->pc = 0x2C9C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9C58u: goto label_2c9c58;
            case 0x2C9CCCu: goto label_2c9ccc;
            case 0x2C9D58u: goto label_2c9d58;
            case 0x2C9E70u: goto label_2c9e70;
            case 0x2C9FC0u: goto label_2c9fc0;
            case 0x2CA020u: goto label_2ca020;
            case 0x2CA1E4u: goto label_2ca1e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9C50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C9C58u;
label_2c9c58:
    // 0x2c9c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c5c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C9C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C64u);
    ctx->pc = 0x2C9C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C5Cu;
    // 0x2c9c60: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C9C5Cu, 0x2C9C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C64u;
label_2c9c64:
    // 0x2c9c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c68: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C9C68u;
    SET_GPR_U32(ctx, 31, 0x2C9C70u);
    ctx->pc = 0x2C9C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C68u;
    // 0x2c9c6c: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C9C68u, 0x2C9C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C70u;
label_2c9c70:
    // 0x2c9c70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9C70u;
    {
        const bool branch_taken_0x2c9c70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C70u;
        // 0x2c9c74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c70) {
            ctx->pc = 0x2C9C84u;
            goto label_2c9c84;
        }
    }
    ctx->pc = 0x2C9C78u;
    // 0x2c9c78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9c7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9C7Cu;
    {
        const bool branch_taken_0x2c9c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C7Cu;
        // 0x2c9c80: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c7c) {
            ctx->pc = 0x2C9C98u;
            goto label_2c9c98;
        }
    }
    ctx->pc = 0x2C9C84u;
label_2c9c84:
    // 0x2c9c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9c88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c9c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c9c8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9c90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c9c94: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c9c94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c9c98:
    // 0x2c9c98: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c9c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c9c9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9ca0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c9ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c9ca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c9ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9ca8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c9ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c9cac: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c9cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c9cb0: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2c9cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c9cb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c9cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c9cb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9cbc: 0xe6200aac  swc1        $f0, 0xAAC($s1)
    ctx->pc = 0x2c9cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2732), bits); }
    // 0x2c9cc0: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x2c9cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9cc4: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x2C9CC4u;
    {
        const bool branch_taken_0x2c9cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CC4u;
        // 0x2c9cc8: 0xe6210b04  swc1        $f1, 0xB04($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2820), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cc4) {
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2C9CCCu;
label_2c9ccc:
    // 0x2c9ccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cd0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C9CD0u;
    SET_GPR_U32(ctx, 31, 0x2C9CD8u);
    ctx->pc = 0x2C9CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9CD0u;
    // 0x2c9cd4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C9CD0u, 0x2C9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CD8u;
label_2c9cd8:
    // 0x2c9cd8: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2c9cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9cdc: 0xc6200aac  lwc1        $f0, 0xAAC($s1)
    ctx->pc = 0x2c9cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9ce0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c9ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9ce4: 0x0  nop
    ctx->pc = 0x2c9ce4u;
    // NOP
    // 0x2c9ce8: 0x450201b2  bc1fl       . + 4 + (0x1B2 << 2)
    ctx->pc = 0x2C9CE8u;
    {
        const bool branch_taken_0x2c9ce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9ce8) {
            ctx->pc = 0x2C9CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9CE8u;
            // 0x2c9cec: 0x8e250ae4  lw          $a1, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2C9CF0u;
    // 0x2c9cf0: 0xc0b30e8  jal         func_2CC3A0
    ctx->pc = 0x2C9CF0u;
    SET_GPR_U32(ctx, 31, 0x2C9CF8u);
    ctx->pc = 0x2C9CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9CF0u;
    // 0x2c9cf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC3A0u, 0x2C9CF0u, 0x2C9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CF8u;
label_2c9cf8:
    // 0x2c9cf8: 0x544001ae  bnel        $v0, $zero, . + 4 + (0x1AE << 2)
    ctx->pc = 0x2C9CF8u;
    {
        const bool branch_taken_0x2c9cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cf8) {
            ctx->pc = 0x2C9CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9CF8u;
            // 0x2c9cfc: 0x8e250ae4  lw          $a1, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2C9D00u;
    // 0x2c9d00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9d04: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C9D04u;
    SET_GPR_U32(ctx, 31, 0x2C9D0Cu);
    ctx->pc = 0x2C9D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9D04u;
    // 0x2c9d08: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C9D04u, 0x2C9D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D0Cu;
label_2c9d0c:
    // 0x2c9d0c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9D0Cu;
    {
        const bool branch_taken_0x2c9d0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D0Cu;
        // 0x2c9d10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d0c) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C9D14u;
    // 0x2c9d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9d18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9D18u;
    {
        const bool branch_taken_0x2c9d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D18u;
        // 0x2c9d1c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d18) {
            ctx->pc = 0x2C9D34u;
            goto label_2c9d34;
        }
    }
    ctx->pc = 0x2C9D20u;
label_2c9d20:
    // 0x2c9d20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9d24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c9d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c9d28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9d2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c9d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c9d30: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c9d30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c9d34:
    // 0x2c9d34: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c9d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c9d38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9d3c: 0xc7829208  lwc1        $f2, -0x6DF8($gp)
    ctx->pc = 0x2c9d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9d40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c9d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9d44: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c9d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c9d48: 0xc781920c  lwc1        $f1, -0x6DF4($gp)
    ctx->pc = 0x2c9d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9d4c: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2c9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c9d50: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x2C9D50u;
    {
        const bool branch_taken_0x2c9d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D50u;
        // 0x2c9d54: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d50) {
            ctx->pc = 0x2CA1D8u;
            goto label_2ca1d8;
        }
    }
    ctx->pc = 0x2C9D58u;
label_2c9d58:
    // 0x2c9d58: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2c9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c9d5c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2c9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c9d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d64: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c9d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c9d68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c9d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c9d6c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C9D6Cu;
    SET_GPR_U32(ctx, 31, 0x2C9D74u);
    ctx->pc = 0x2C9D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9D6Cu;
    // 0x2c9d70: 0xae220a94  sw          $v0, 0xA94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C9D6Cu, 0x2C9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D74u;
label_2c9d74:
    // 0x2c9d74: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2c9d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9d78: 0xc6200aac  lwc1        $f0, 0xAAC($s1)
    ctx->pc = 0x2c9d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9d7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c9d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9d80: 0x0  nop
    ctx->pc = 0x2c9d80u;
    // NOP
    // 0x2c9d84: 0x4502018b  bc1fl       . + 4 + (0x18B << 2)
    ctx->pc = 0x2C9D84u;
    {
        const bool branch_taken_0x2c9d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9d84) {
            ctx->pc = 0x2C9D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9D84u;
            // 0x2c9d88: 0x8e250ae4  lw          $a1, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2C9D8Cu;
    // 0x2c9d8c: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c9d90: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2c9d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2c9d94: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C9D94u;
    {
        const bool branch_taken_0x2c9d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d94) {
            ctx->pc = 0x2C9D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9D94u;
            // 0x2c9d98: 0x8e220ad4  lw          $v0, 0xAD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9E08u;
            goto label_2c9e08;
        }
    }
    ctx->pc = 0x2C9D9Cu;
    // 0x2c9d9c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2c9d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2c9da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9da4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c9da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9da8: 0x0  nop
    ctx->pc = 0x2c9da8u;
    // NOP
    // 0x2c9dac: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x2C9DACu;
    {
        const bool branch_taken_0x2c9dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9dac) {
            ctx->pc = 0x2C9DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9DACu;
            // 0x2c9db0: 0x8e220ad4  lw          $v0, 0xAD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9E08u;
            goto label_2c9e08;
        }
    }
    ctx->pc = 0x2C9DB4u;
    // 0x2c9db4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C9DB4u;
    SET_GPR_U32(ctx, 31, 0x2C9DBCu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C9DB4u, 0x2C9DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DBCu;
label_2c9dbc:
    // 0x2c9dbc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9DBCu;
    {
        const bool branch_taken_0x2c9dbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DBCu;
        // 0x2c9dc0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9dbc) {
            ctx->pc = 0x2C9DD0u;
            goto label_2c9dd0;
        }
    }
    ctx->pc = 0x2C9DC4u;
    // 0x2c9dc4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9dc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9DC8u;
    {
        const bool branch_taken_0x2c9dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DC8u;
        // 0x2c9dcc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9dc8) {
            ctx->pc = 0x2C9DE4u;
            goto label_2c9de4;
        }
    }
    ctx->pc = 0x2C9DD0u;
label_2c9dd0:
    // 0x2c9dd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9dd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c9dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c9dd8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9ddc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c9de0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c9de0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c9de4:
    // 0x2c9de4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c9de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c9de8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9dec: 0xc7819210  lwc1        $f1, -0x6DF0($gp)
    ctx->pc = 0x2c9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9df0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c9df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c9df4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c9df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9df8: 0x0  nop
    ctx->pc = 0x2c9df8u;
    // NOP
    // 0x2c9dfc: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x2C9DFCu;
    {
        const bool branch_taken_0x2c9dfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DFCu;
        // 0x2c9e00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9dfc) {
            ctx->pc = 0x2C9FB4u;
            goto label_2c9fb4;
        }
    }
    ctx->pc = 0x2C9E04u;
    // 0x2c9e04: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2c9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
label_2c9e08:
    // 0x2c9e08: 0x10400169  beqz        $v0, . + 4 + (0x169 << 2)
    ctx->pc = 0x2C9E08u;
    {
        const bool branch_taken_0x2c9e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E08u;
        // 0x2c9e0c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e08) {
            ctx->pc = 0x2CA3B0u;
            goto label_2ca3b0;
        }
    }
    ctx->pc = 0x2C9E10u;
    // 0x2c9e10: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c9e14: 0xae230aa8  sw          $v1, 0xAA8($s1)
    ctx->pc = 0x2c9e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 3));
    // 0x2c9e18: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c9e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c9e1c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C9E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C9E24u);
    ctx->pc = 0x2C9E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E1Cu;
    // 0x2c9e20: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C9E1Cu, 0x2C9E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E24u;
label_2c9e24:
    // 0x2c9e24: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9E24u;
    {
        const bool branch_taken_0x2c9e24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E24u;
        // 0x2c9e28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e24) {
            ctx->pc = 0x2C9E38u;
            goto label_2c9e38;
        }
    }
    ctx->pc = 0x2C9E2Cu;
    // 0x2c9e2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9e30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9E30u;
    {
        const bool branch_taken_0x2c9e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E30u;
        // 0x2c9e34: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e30) {
            ctx->pc = 0x2C9E4Cu;
            goto label_2c9e4c;
        }
    }
    ctx->pc = 0x2C9E38u;
label_2c9e38:
    // 0x2c9e38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9e3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c9e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c9e40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9e44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c9e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c9e48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c9e48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c9e4c:
    // 0x2c9e4c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c9e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c9e50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9e54: 0xc7829214  lwc1        $f2, -0x6DEC($gp)
    ctx->pc = 0x2c9e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9e58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c9e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9e5c: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c9e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c9e60: 0xc7819218  lwc1        $f1, -0x6DE8($gp)
    ctx->pc = 0x2c9e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9e64: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2c9e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c9e68: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2C9E68u;
    {
        const bool branch_taken_0x2c9e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E68u;
        // 0x2c9e6c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e68) {
            ctx->pc = 0x2CA1D8u;
            goto label_2ca1d8;
        }
    }
    ctx->pc = 0x2C9E70u;
label_2c9e70:
    // 0x2c9e70: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c9e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e78: 0x24489ed8  addiu       $t0, $v0, -0x6128
    ctx->pc = 0x2c9e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942424));
    // 0x2c9e7c: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x2c9e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c9e80: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x2c9e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c9e84: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2c9e84u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A9EE0u));
    // 0x2c9e88: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2c9e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9e8c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2c9e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9e90: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2c9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2c9e94: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C9E94u;
    SET_GPR_U32(ctx, 31, 0x2C9E9Cu);
    ctx->pc = 0x2C9E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E94u;
    // 0x2c9e98: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C9E94u, 0x2C9E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E9Cu;
label_2c9e9c:
    // 0x2c9e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ea0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C9EA0u;
    SET_GPR_U32(ctx, 31, 0x2C9EA8u);
    ctx->pc = 0x2C9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9EA0u;
    // 0x2c9ea4: 0x240501cb  addiu       $a1, $zero, 0x1CB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 459));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C9EA0u, 0x2C9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EA8u;
label_2c9ea8:
    // 0x2c9ea8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9EA8u;
    {
        const bool branch_taken_0x2c9ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9EA8u;
        // 0x2c9eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ea8) {
            ctx->pc = 0x2C9EC4u;
            goto label_2c9ec4;
        }
    }
    ctx->pc = 0x2C9EB0u;
    // 0x2c9eb0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c9eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c9eb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c9eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c9eb8: 0xc78d921c  lwc1        $f13, -0x6DE4($gp)
    ctx->pc = 0x2c9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c9ebc: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x2C9EBCu;
    {
        const bool branch_taken_0x2c9ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9EBCu;
        // 0x2c9ec0: 0x240501cb  addiu       $a1, $zero, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 459));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ebc) {
            ctx->pc = 0x2CA3A8u;
            goto label_2ca3a8;
        }
    }
    ctx->pc = 0x2C9EC4u;
label_2c9ec4:
    // 0x2c9ec4: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C9EC4u;
    SET_GPR_U32(ctx, 31, 0x2C9ECCu);
    ctx->pc = 0x2C9EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9EC4u;
    // 0x2c9ec8: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C9EC4u, 0x2C9ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9ECCu;
label_2c9ecc:
    // 0x2c9ecc: 0x54400139  bnel        $v0, $zero, . + 4 + (0x139 << 2)
    ctx->pc = 0x2C9ECCu;
    {
        const bool branch_taken_0x2c9ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ecc) {
            ctx->pc = 0x2C9ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9ECCu;
            // 0x2c9ed0: 0x8e250ae4  lw          $a1, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2C9ED4u;
    // 0x2c9ed4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2c9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2c9ed8: 0xc7819220  lwc1        $f1, -0x6DE0($gp)
    ctx->pc = 0x2c9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9edc: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x2c9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9ee0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c9ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9ee4: 0x0  nop
    ctx->pc = 0x2c9ee4u;
    // NOP
    // 0x2c9ee8: 0x45000131  bc1f        . + 4 + (0x131 << 2)
    ctx->pc = 0x2C9EE8u;
    {
        const bool branch_taken_0x2c9ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9EE8u;
        // 0x2c9eec: 0xc7a50000  lwc1        $f5, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ee8) {
            ctx->pc = 0x2CA3B0u;
            goto label_2ca3b0;
        }
    }
    ctx->pc = 0x2C9EF0u;
    // 0x2c9ef0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2c9ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c9ef4: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2c9ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c9ef8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2c9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9efc: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2c9efcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c9f00: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2c9f00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c9f04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f08: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2c9f08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9f0c: 0x0  nop
    ctx->pc = 0x2c9f0cu;
    // NOP
    // 0x2c9f10: 0x0  nop
    ctx->pc = 0x2c9f10u;
    // NOP
    // 0x2c9f14: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2c9f14u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c9f18: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2c9f18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9f1c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9F1Cu;
    {
        const bool branch_taken_0x2c9f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9f1c) {
            ctx->pc = 0x2C9F3Cu;
            goto label_2c9f3c;
        }
    }
    ctx->pc = 0x2C9F24u;
    // 0x2c9f24: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C9F24u;
    SET_GPR_U32(ctx, 31, 0x2C9F2Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C9F24u, 0x2C9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F2Cu;
label_2c9f2c:
    // 0x2c9f2c: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x2c9f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c9f30: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c9f30u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c9f34: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2c9f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c9f38: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2c9f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2c9f3c:
    // 0x2c9f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c9f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9f40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9f44: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2c9f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c9f48: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x2c9f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c9f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f50: 0x0  nop
    ctx->pc = 0x2c9f50u;
    // NOP
    // 0x2c9f54: 0x0  nop
    ctx->pc = 0x2c9f54u;
    // NOP
    // 0x2c9f58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2c9f58u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c9f5c: 0xc7829224  lwc1        $f2, -0x6DDC($gp)
    ctx->pc = 0x2c9f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9f60: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c9f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c9f64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c9f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9f68: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x2c9f68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2c9f6c: 0x0  nop
    ctx->pc = 0x2c9f6cu;
    // NOP
    // 0x2c9f70: 0x0  nop
    ctx->pc = 0x2c9f70u;
    // NOP
    // 0x2c9f74: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2c9f74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x2c9f78: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x2c9f78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c9f7c: 0x46002842  mul.s       $f1, $f5, $f0
    ctx->pc = 0x2c9f7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2c9f80: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2c9f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c9f84: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2c9f84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c9f88: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2c9f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c9f8c: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C9F94u);
    ctx->pc = 0x2C9F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9F8Cu;
    // 0x2c9f90: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C9F8Cu, 0x2C9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F94u;
label_2c9f94:
    // 0x2c9f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f98: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2C9F98u;
    SET_GPR_U32(ctx, 31, 0x2C9FA0u);
    ctx->pc = 0x2C9F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9F98u;
    // 0x2c9f9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2C9F98u, 0x2C9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FA0u;
label_2c9fa0:
    // 0x2c9fa0: 0x8e260ae4  lw          $a2, 0xAE4($s1)
    ctx->pc = 0x2c9fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c9fa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fa8: 0xc0a4140  jal         func_290500
    ctx->pc = 0x2C9FA8u;
    SET_GPR_U32(ctx, 31, 0x2C9FB0u);
    ctx->pc = 0x2C9FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FA8u;
    // 0x2c9fac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290500u, 0x2C9FA8u, 0x2C9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FB0u;
label_2c9fb0:
    // 0x2c9fb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c9fb4:
    // 0x2c9fb4: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2c9fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c9fb8: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2C9FB8u;
    {
        const bool branch_taken_0x2c9fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FB8u;
        // 0x2c9fbc: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fb8) {
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2C9FC0u;
label_2c9fc0:
    // 0x2c9fc0: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C9FC0u;
    SET_GPR_U32(ctx, 31, 0x2C9FC8u);
    ctx->pc = 0x2C9FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FC0u;
    // 0x2c9fc4: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C9FC0u, 0x2C9FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FC8u;
label_2c9fc8:
    // 0x2c9fc8: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x2C9FC8u;
    {
        const bool branch_taken_0x2c9fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FC8u;
        // 0x2c9fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fc8) {
            ctx->pc = 0x2CA3B0u;
            goto label_2ca3b0;
        }
    }
    ctx->pc = 0x2C9FD0u;
    // 0x2c9fd0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C9FD0u;
    SET_GPR_U32(ctx, 31, 0x2C9FD8u);
    ctx->pc = 0x2C9FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FD0u;
    // 0x2c9fd4: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C9FD0u, 0x2C9FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FD8u;
label_2c9fd8:
    // 0x2c9fd8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9FD8u;
    {
        const bool branch_taken_0x2c9fd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FD8u;
        // 0x2c9fdc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fd8) {
            ctx->pc = 0x2C9FECu;
            goto label_2c9fec;
        }
    }
    ctx->pc = 0x2C9FE0u;
    // 0x2c9fe0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9fe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9FE4u;
    {
        const bool branch_taken_0x2c9fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FE4u;
        // 0x2c9fe8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fe4) {
            ctx->pc = 0x2CA000u;
            goto label_2ca000;
        }
    }
    ctx->pc = 0x2C9FECu;
label_2c9fec:
    // 0x2c9fec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9ff0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c9ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c9ff4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9ff8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c9ffc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c9ffcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ca000:
    // 0x2ca000: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca008: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2ca008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2ca00c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ca00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca010: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ca010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ca014: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2ca014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2ca018: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2CA018u;
    {
        const bool branch_taken_0x2ca018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA018u;
        // 0x2ca01c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca018) {
            ctx->pc = 0x2CA1D8u;
            goto label_2ca1d8;
        }
    }
    ctx->pc = 0x2CA020u;
label_2ca020:
    // 0x2ca020: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2ca020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2ca024: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ca024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ca028: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2CA028u;
    {
        const bool branch_taken_0x2ca028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA028u;
        // 0x2ca02c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca028) {
            ctx->pc = 0x2CA150u;
            goto label_2ca150;
        }
    }
    ctx->pc = 0x2CA030u;
    // 0x2ca030: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2ca030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca034: 0xc6200aac  lwc1        $f0, 0xAAC($s1)
    ctx->pc = 0x2ca034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca038: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ca038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca03c: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x2CA03Cu;
    {
        const bool branch_taken_0x2ca03c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca03c) {
            ctx->pc = 0x2CA150u;
            goto label_2ca150;
        }
    }
    ctx->pc = 0x2CA044u;
    // 0x2ca044: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA044u;
    SET_GPR_U32(ctx, 31, 0x2CA04Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA044u, 0x2CA04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA04Cu;
label_2ca04c:
    // 0x2ca04c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA04Cu;
    {
        const bool branch_taken_0x2ca04c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA04Cu;
        // 0x2ca050: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca04c) {
            ctx->pc = 0x2CA060u;
            goto label_2ca060;
        }
    }
    ctx->pc = 0x2CA054u;
    // 0x2ca054: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ca054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ca058: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA058u;
    {
        const bool branch_taken_0x2ca058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA058u;
        // 0x2ca05c: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca058) {
            ctx->pc = 0x2CA074u;
            goto label_2ca074;
        }
    }
    ctx->pc = 0x2CA060u;
label_2ca060:
    // 0x2ca060: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca064: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ca068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ca06c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ca06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ca070: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2ca070u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2ca074:
    // 0x2ca074: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca07c: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x2ca07cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2ca080: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2CA080u;
    SET_GPR_U32(ctx, 31, 0x2CA088u);
    ctx->pc = 0x2CA084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA080u;
    // 0x2ca084: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2CA080u, 0x2CA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA088u;
label_2ca088:
    // 0x2ca088: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ca088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ca08c: 0xdc259f10  ld          $a1, -0x60F0($at)
    ctx->pc = 0x2ca08cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9F10u));
    // 0x2ca090: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2CA090u;
    SET_GPR_U32(ctx, 31, 0x2CA098u);
    ctx->pc = 0x2CA094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA090u;
    // 0x2ca094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2CA090u, 0x2CA098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA098u;
label_2ca098:
    // 0x2ca098: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA098u;
    {
        const bool branch_taken_0x2ca098 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA098u;
        // 0x2ca09c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca098) {
            ctx->pc = 0x2CA0B4u;
            goto label_2ca0b4;
        }
    }
    ctx->pc = 0x2CA0A0u;
    // 0x2ca0a0: 0xc7809228  lwc1        $f0, -0x6DD8($gp)
    ctx->pc = 0x2ca0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca0a4: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2ca0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    // 0x2ca0a8: 0xe6200aac  swc1        $f0, 0xAAC($s1)
    ctx->pc = 0x2ca0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2732), bits); }
    // 0x2ca0ac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2CA0ACu;
    {
        const bool branch_taken_0x2ca0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0ACu;
        // 0x2ca0b0: 0xae200b4c  sw          $zero, 0xB4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0ac) {
            ctx->pc = 0x2CA158u;
            goto label_2ca158;
        }
    }
    ctx->pc = 0x2CA0B4u;
label_2ca0b4:
    // 0x2ca0b4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2CA0B4u;
    SET_GPR_U32(ctx, 31, 0x2CA0BCu);
    ctx->pc = 0x2CA0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0B4u;
    // 0x2ca0b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2CA0B4u, 0x2CA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0BCu;
label_2ca0bc:
    // 0x2ca0bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ca0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ca0c0: 0xdc259f18  ld          $a1, -0x60E8($at)
    ctx->pc = 0x2ca0c0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9F18u));
    // 0x2ca0c4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2CA0C4u;
    SET_GPR_U32(ctx, 31, 0x2CA0CCu);
    ctx->pc = 0x2CA0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0C4u;
    // 0x2ca0c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2CA0C4u, 0x2CA0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0CCu;
label_2ca0cc:
    // 0x2ca0cc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA0CCu;
    {
        const bool branch_taken_0x2ca0cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0CCu;
        // 0x2ca0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0cc) {
            ctx->pc = 0x2CA0ECu;
            goto label_2ca0ec;
        }
    }
    ctx->pc = 0x2CA0D4u;
    // 0x2ca0d4: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2ca0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2ca0d8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2ca0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2ca0dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA0DCu;
    {
        const bool branch_taken_0x2ca0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0DCu;
        // 0x2ca0e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0dc) {
            ctx->pc = 0x2CA0ECu;
            goto label_2ca0ec;
        }
    }
    ctx->pc = 0x2CA0E4u;
    // 0x2ca0e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2CA0E4u;
    {
        const bool branch_taken_0x2ca0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0E4u;
        // 0x2ca0e8: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0e4) {
            ctx->pc = 0x2CA158u;
            goto label_2ca158;
        }
    }
    ctx->pc = 0x2CA0ECu;
label_2ca0ec:
    // 0x2ca0ec: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CA0ECu;
    SET_GPR_U32(ctx, 31, 0x2CA0F4u);
    ctx->pc = 0x2CA0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0ECu;
    // 0x2ca0f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CA0ECu, 0x2CA0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0F4u;
label_2ca0f4:
    // 0x2ca0f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca0f8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA0F8u;
    SET_GPR_U32(ctx, 31, 0x2CA100u);
    ctx->pc = 0x2CA0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0F8u;
    // 0x2ca0fc: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA0F8u, 0x2CA100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA100u;
label_2ca100:
    // 0x2ca100: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA100u;
    {
        const bool branch_taken_0x2ca100 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA100u;
        // 0x2ca104: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca100) {
            ctx->pc = 0x2CA114u;
            goto label_2ca114;
        }
    }
    ctx->pc = 0x2CA108u;
    // 0x2ca108: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca10c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA10Cu;
    {
        const bool branch_taken_0x2ca10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA10Cu;
        // 0x2ca110: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca10c) {
            ctx->pc = 0x2CA128u;
            goto label_2ca128;
        }
    }
    ctx->pc = 0x2CA114u;
label_2ca114:
    // 0x2ca114: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca118: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca11c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca120: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ca120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ca124: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ca124u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ca128:
    // 0x2ca128: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca12c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca130: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ca130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ca134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ca134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca138: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ca138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ca13c: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2ca13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2ca140: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ca140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2ca144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca148: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA148u;
    {
        const bool branch_taken_0x2ca148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA148u;
        // 0x2ca14c: 0xe6200aac  swc1        $f0, 0xAAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca148) {
            ctx->pc = 0x2CA158u;
            goto label_2ca158;
        }
    }
    ctx->pc = 0x2CA150u;
label_2ca150:
    // 0x2ca150: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CA150u;
    SET_GPR_U32(ctx, 31, 0x2CA158u);
    ctx->pc = 0x2CA154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA150u;
    // 0x2ca154: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CA150u, 0x2CA158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA158u;
label_2ca158:
    // 0x2ca158: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2ca158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2ca15c: 0x54400095  bnel        $v0, $zero, . + 4 + (0x95 << 2)
    ctx->pc = 0x2CA15Cu;
    {
        const bool branch_taken_0x2ca15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca15c) {
            ctx->pc = 0x2CA160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA15Cu;
            // 0x2ca160: 0x8e250ae4  lw          $a1, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2CA164u;
    // 0x2ca164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca168: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CA168u;
    SET_GPR_U32(ctx, 31, 0x2CA170u);
    ctx->pc = 0x2CA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA168u;
    // 0x2ca16c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CA168u, 0x2CA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA170u;
label_2ca170:
    // 0x2ca170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca174: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA174u;
    SET_GPR_U32(ctx, 31, 0x2CA17Cu);
    ctx->pc = 0x2CA178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA174u;
    // 0x2ca178: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA174u, 0x2CA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA17Cu;
label_2ca17c:
    // 0x2ca17c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA17Cu;
    {
        const bool branch_taken_0x2ca17c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA17Cu;
        // 0x2ca180: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca17c) {
            ctx->pc = 0x2CA190u;
            goto label_2ca190;
        }
    }
    ctx->pc = 0x2CA184u;
    // 0x2ca184: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca188: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA188u;
    {
        const bool branch_taken_0x2ca188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA188u;
        // 0x2ca18c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca188) {
            ctx->pc = 0x2CA1A4u;
            goto label_2ca1a4;
        }
    }
    ctx->pc = 0x2CA190u;
label_2ca190:
    // 0x2ca190: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca194: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca198: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca19c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ca19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ca1a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ca1a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ca1a4:
    // 0x2ca1a4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca1a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca1ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ca1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ca1b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ca1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ca1b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ca1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca1b8: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x2ca1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x2ca1bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ca1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ca1c0: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2ca1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2ca1c4: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2ca1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2ca1c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ca1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ca1cc: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2ca1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2ca1d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ca1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2ca1d4: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2ca1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
label_2ca1d8:
    // 0x2ca1d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca1dc: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2CA1DCu;
    {
        const bool branch_taken_0x2ca1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1DCu;
        // 0x2ca1e0: 0xe6200aac  swc1        $f0, 0xAAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1dc) {
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2CA1E4u;
label_2ca1e4:
    // 0x2ca1e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1e8: 0xc085608  jal         func_215820
    ctx->pc = 0x2CA1E8u;
    SET_GPR_U32(ctx, 31, 0x2CA1F0u);
    ctx->pc = 0x2CA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1E8u;
    // 0x2ca1ec: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CA1E8u, 0x2CA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1F0u;
label_2ca1f0:
    // 0x2ca1f0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CA1F0u;
    {
        const bool branch_taken_0x2ca1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1F0u;
        // 0x2ca1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1f0) {
            ctx->pc = 0x2CA260u;
            goto label_2ca260;
        }
    }
    ctx->pc = 0x2CA1F8u;
    // 0x2ca1f8: 0xc085608  jal         func_215820
    ctx->pc = 0x2CA1F8u;
    SET_GPR_U32(ctx, 31, 0x2CA200u);
    ctx->pc = 0x2CA1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1F8u;
    // 0x2ca1fc: 0x240501de  addiu       $a1, $zero, 0x1DE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CA1F8u, 0x2CA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA200u;
label_2ca200:
    // 0x2ca200: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CA200u;
    {
        const bool branch_taken_0x2ca200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA200u;
        // 0x2ca204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca200) {
            ctx->pc = 0x2CA260u;
            goto label_2ca260;
        }
    }
    ctx->pc = 0x2CA208u;
    // 0x2ca208: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2CA208u;
    SET_GPR_U32(ctx, 31, 0x2CA210u);
    ctx->pc = 0x2CA20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA208u;
    // 0x2ca20c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2CA208u, 0x2CA210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA210u;
label_2ca210:
    // 0x2ca210: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x2ca210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2ca214: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2ca214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2ca218: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2ca218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2ca21c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2ca21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ca220: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2ca220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2ca224: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ca224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ca228: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2ca228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2ca22c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ca22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ca230: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA230u;
    {
        const bool branch_taken_0x2ca230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA230u;
        // 0x2ca234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca230) {
            ctx->pc = 0x2CA24Cu;
            goto label_2ca24c;
        }
    }
    ctx->pc = 0x2CA238u;
    // 0x2ca238: 0xc78c922c  lwc1        $f12, -0x6DD4($gp)
    ctx->pc = 0x2ca238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca23c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca240: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ca240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ca244: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2CA244u;
    {
        const bool branch_taken_0x2ca244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA244u;
        // 0x2ca248: 0x240501de  addiu       $a1, $zero, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca244) {
            ctx->pc = 0x2CA3A8u;
            goto label_2ca3a8;
        }
    }
    ctx->pc = 0x2CA24Cu;
label_2ca24c:
    // 0x2ca24c: 0xc78c9230  lwc1        $f12, -0x6DD0($gp)
    ctx->pc = 0x2ca24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca254: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ca254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ca258: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2CA258u;
    {
        const bool branch_taken_0x2ca258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA258u;
        // 0x2ca25c: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca258) {
            ctx->pc = 0x2CA3A8u;
            goto label_2ca3a8;
        }
    }
    ctx->pc = 0x2CA260u;
label_2ca260:
    // 0x2ca260: 0xc085608  jal         func_215820
    ctx->pc = 0x2CA260u;
    SET_GPR_U32(ctx, 31, 0x2CA268u);
    ctx->pc = 0x2CA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA260u;
    // 0x2ca264: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CA260u, 0x2CA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA268u;
label_2ca268:
    // 0x2ca268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA268u;
    {
        const bool branch_taken_0x2ca268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA268u;
        // 0x2ca26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca268) {
            ctx->pc = 0x2CA280u;
            goto label_2ca280;
        }
    }
    ctx->pc = 0x2CA270u;
    // 0x2ca270: 0xc085608  jal         func_215820
    ctx->pc = 0x2CA270u;
    SET_GPR_U32(ctx, 31, 0x2CA278u);
    ctx->pc = 0x2CA274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA270u;
    // 0x2ca274: 0x240501de  addiu       $a1, $zero, 0x1DE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CA270u, 0x2CA278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA278u;
label_2ca278:
    // 0x2ca278: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2CA278u;
    {
        const bool branch_taken_0x2ca278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA278u;
        // 0x2ca27c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca278) {
            ctx->pc = 0x2CA3B0u;
            goto label_2ca3b0;
        }
    }
    ctx->pc = 0x2CA280u;
label_2ca280:
    // 0x2ca280: 0xc085608  jal         func_215820
    ctx->pc = 0x2CA280u;
    SET_GPR_U32(ctx, 31, 0x2CA288u);
    ctx->pc = 0x2CA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA280u;
    // 0x2ca284: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CA280u, 0x2CA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA288u;
label_2ca288:
    // 0x2ca288: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CA288u;
    {
        const bool branch_taken_0x2ca288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA288u;
        // 0x2ca28c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca288) {
            ctx->pc = 0x2CA2D0u;
            goto label_2ca2d0;
        }
    }
    ctx->pc = 0x2CA290u;
    // 0x2ca290: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2ca290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2ca294: 0xc7809234  lwc1        $f0, -0x6DCC($gp)
    ctx->pc = 0x2ca294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca298: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x2ca298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca29c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ca29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca2a0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2CA2A0u;
    {
        const bool branch_taken_0x2ca2a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca2a0) {
            ctx->pc = 0x2CA2D0u;
            goto label_2ca2d0;
        }
    }
    ctx->pc = 0x2CA2A8u;
    // 0x2ca2a8: 0xc7809238  lwc1        $f0, -0x6DC8($gp)
    ctx->pc = 0x2ca2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca2ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ca2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca2b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA2B0u;
    {
        const bool branch_taken_0x2ca2b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca2b0) {
            ctx->pc = 0x2CA2D0u;
            goto label_2ca2d0;
        }
    }
    ctx->pc = 0x2CA2B8u;
    // 0x2ca2b8: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2ca2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2ca2bc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2ca2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ca2c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA2C0u;
    {
        const bool branch_taken_0x2ca2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2C0u;
        // 0x2ca2c4: 0x34620006  ori         $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2c0) {
            ctx->pc = 0x2CA2D0u;
            goto label_2ca2d0;
        }
    }
    ctx->pc = 0x2CA2C8u;
    // 0x2ca2c8: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2ca2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
    // 0x2ca2cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ca2d0:
    // 0x2ca2d0: 0xc085608  jal         func_215820
    ctx->pc = 0x2CA2D0u;
    SET_GPR_U32(ctx, 31, 0x2CA2D8u);
    ctx->pc = 0x2CA2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA2D0u;
    // 0x2ca2d4: 0x240501de  addiu       $a1, $zero, 0x1DE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2CA2D0u, 0x2CA2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2D8u;
label_2ca2d8:
    // 0x2ca2d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CA2D8u;
    {
        const bool branch_taken_0x2ca2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca2d8) {
            ctx->pc = 0x2CA324u;
            goto label_2ca324;
        }
    }
    ctx->pc = 0x2CA2E0u;
    // 0x2ca2e0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2ca2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2ca2e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ca2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ca2e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca2ec: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x2ca2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca2f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ca2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca2f4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2CA2F4u;
    {
        const bool branch_taken_0x2ca2f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca2f4) {
            ctx->pc = 0x2CA324u;
            goto label_2ca324;
        }
    }
    ctx->pc = 0x2CA2FCu;
    // 0x2ca2fc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ca2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2ca300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ca304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca308: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA308u;
    {
        const bool branch_taken_0x2ca308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca308) {
            ctx->pc = 0x2CA324u;
            goto label_2ca324;
        }
    }
    ctx->pc = 0x2CA310u;
    // 0x2ca310: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2ca310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2ca314: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2ca314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ca318: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA318u;
    {
        const bool branch_taken_0x2ca318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA318u;
        // 0x2ca31c: 0x34620006  ori         $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca318) {
            ctx->pc = 0x2CA324u;
            goto label_2ca324;
        }
    }
    ctx->pc = 0x2CA320u;
    // 0x2ca320: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2ca320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
label_2ca324:
    // 0x2ca324: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2CA324u;
    SET_GPR_U32(ctx, 31, 0x2CA32Cu);
    ctx->pc = 0x2CA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA324u;
    // 0x2ca328: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2CA324u, 0x2CA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA32Cu;
label_2ca32c:
    // 0x2ca32c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CA32Cu;
    {
        const bool branch_taken_0x2ca32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca32c) {
            ctx->pc = 0x2CA330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA32Cu;
            // 0x2ca330: 0x8e250ae4  lw          $a1, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA3B4u;
            goto label_2ca3b4;
        }
    }
    ctx->pc = 0x2CA334u;
    // 0x2ca334: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CA334u;
    SET_GPR_U32(ctx, 31, 0x2CA33Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CA334u, 0x2CA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA33Cu;
label_2ca33c:
    // 0x2ca33c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA33Cu;
    {
        const bool branch_taken_0x2ca33c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA33Cu;
        // 0x2ca340: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca33c) {
            ctx->pc = 0x2CA350u;
            goto label_2ca350;
        }
    }
    ctx->pc = 0x2CA344u;
    // 0x2ca344: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca348: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA348u;
    {
        const bool branch_taken_0x2ca348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA348u;
        // 0x2ca34c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca348) {
            ctx->pc = 0x2CA364u;
            goto label_2ca364;
        }
    }
    ctx->pc = 0x2CA350u;
label_2ca350:
    // 0x2ca350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca354: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca358: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ca358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ca35c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ca35cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ca360: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ca360u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ca364:
    // 0x2ca364: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ca364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ca368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca36c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ca36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca370: 0xc781923c  lwc1        $f1, -0x6DC4($gp)
    ctx->pc = 0x2ca370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca378: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ca378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ca37c: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2ca37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2ca380: 0xc7829240  lwc1        $f2, -0x6DC0($gp)
    ctx->pc = 0x2ca380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca384: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x2ca384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x2ca388: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ca388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2ca38c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ca38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ca390: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca398: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ca398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ca39c: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2ca39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    // 0x2ca3a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ca3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ca3a4: 0xe6200aac  swc1        $f0, 0xAAC($s1)
    ctx->pc = 0x2ca3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2732), bits); }
label_2ca3a8:
    // 0x2ca3a8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2CA3A8u;
    SET_GPR_U32(ctx, 31, 0x2CA3B0u);
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2CA3A8u, 0x2CA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3B0u;
label_2ca3b0:
    // 0x2ca3b0: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2ca3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
label_2ca3b4:
    // 0x2ca3b4: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x2ca3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca3b8: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2ca3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2ca3bc: 0xc6200b04  lwc1        $f0, 0xB04($s1)
    ctx->pc = 0x2ca3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca3c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3c4: 0xe6210b08  swc1        $f1, 0xB08($s1)
    ctx->pc = 0x2ca3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2824), bits); }
    // 0x2ca3c8: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2ca3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x2ca3cc: 0xc0b1a02  jal         func_2C6808
    ctx->pc = 0x2CA3CCu;
    SET_GPR_U32(ctx, 31, 0x2CA3D4u);
    ctx->pc = 0x2CA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA3CCu;
    // 0x2ca3d0: 0xc62c0a8c  lwc1        $f12, 0xA8C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6808u, 0x2CA3CCu, 0x2CA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3D4u;
label_2ca3d4:
    // 0x2ca3d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA3D4u;
    {
        const bool branch_taken_0x2ca3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca3d4) {
            ctx->pc = 0x2CA3E8u;
            goto label_2ca3e8;
        }
    }
    ctx->pc = 0x2CA3DCu;
    // 0x2ca3dc: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2ca3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2ca3e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA3E0u;
    {
        const bool branch_taken_0x2ca3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca3e0) {
            ctx->pc = 0x2CA3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA3E0u;
            // 0x2ca3e4: 0x8e230a9c  lw          $v1, 0xA9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA404u;
            goto label_2ca404;
        }
    }
    ctx->pc = 0x2CA3E8u;
label_2ca3e8:
    // 0x2ca3e8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2ca3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2ca3ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca3f0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2ca3f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca3f4: 0x0  nop
    ctx->pc = 0x2ca3f4u;
    // NOP
    // 0x2ca3f8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA3F8u;
    {
        const bool branch_taken_0x2ca3f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca3f8) {
            ctx->pc = 0x2CA3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA3F8u;
            // 0x2ca3fc: 0x8e220aa8  lw          $v0, 0xAA8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA418u;
            goto label_2ca418;
        }
    }
    ctx->pc = 0x2CA400u;
    // 0x2ca400: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2ca400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
label_2ca404:
    // 0x2ca404: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ca404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ca408: 0xae220a9c  sw          $v0, 0xA9C($s1)
    ctx->pc = 0x2ca408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 2));
    // 0x2ca40c: 0xae230aa0  sw          $v1, 0xAA0($s1)
    ctx->pc = 0x2ca40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 3));
    // 0x2ca410: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CA410u;
    {
        const bool branch_taken_0x2ca410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA410u;
        // 0x2ca414: 0xae200b4c  sw          $zero, 0xB4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca410) {
            ctx->pc = 0x2CA44Cu;
            goto label_2ca44c;
        }
    }
    ctx->pc = 0x2CA418u;
label_2ca418:
    // 0x2ca418: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ca418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ca41c: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CA41Cu;
    {
        const bool branch_taken_0x2ca41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ca41c) {
            ctx->pc = 0x2CA420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA41Cu;
            // 0x2ca420: 0xc6200b08  lwc1        $f0, 0xB08($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA450u;
            goto label_2ca450;
        }
    }
    ctx->pc = 0x2CA424u;
    // 0x2ca424: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x2ca424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x2ca428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca42c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2ca42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ca430: 0x0  nop
    ctx->pc = 0x2ca430u;
    // NOP
    // 0x2ca434: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA434u;
    {
        const bool branch_taken_0x2ca434 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca434) {
            ctx->pc = 0x2CA438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA434u;
            // 0x2ca438: 0xc6200b08  lwc1        $f0, 0xB08($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA450u;
            goto label_2ca450;
        }
    }
    ctx->pc = 0x2CA43Cu;
    // 0x2ca43c: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2ca43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2ca440: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2ca440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2ca444: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CA444u;
    {
        const bool branch_taken_0x2ca444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca444) {
            ctx->pc = 0x2CA448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA444u;
            // 0x2ca448: 0xae230aa8  sw          $v1, 0xAA8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA44Cu;
            goto label_2ca44c;
        }
    }
    ctx->pc = 0x2CA44Cu;
label_2ca44c:
    // 0x2ca44c: 0xc6200b08  lwc1        $f0, 0xB08($s1)
    ctx->pc = 0x2ca44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ca450:
    // 0x2ca450: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ca450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ca454: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2ca454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x2ca458: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2ca458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca45c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2ca45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca460: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2ca460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca464: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2ca464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ca468: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2ca468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ca46c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA46Cu;
        // 0x2ca470: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA474u;
}
