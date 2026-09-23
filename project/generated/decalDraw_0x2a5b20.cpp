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

// Function: decalDraw
// Address: 0x2a5b20 - 0x2a61c8
void decalDraw_0x2a5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalDraw_0x2a5b20");
#endif

    switch (ctx->pc) {
        case 0x2a5b70u: goto label_2a5b70;
        case 0x2a5b80u: goto label_2a5b80;
        case 0x2a5c04u: goto label_2a5c04;
        case 0x2a5c40u: goto label_2a5c40;
        case 0x2a5c68u: goto label_2a5c68;
        case 0x2a5c84u: goto label_2a5c84;
        case 0x2a5cb0u: goto label_2a5cb0;
        case 0x2a5cc4u: goto label_2a5cc4;
        case 0x2a5e00u: goto label_2a5e00;
        case 0x2a5fb0u: goto label_2a5fb0;
        case 0x2a5fc8u: goto label_2a5fc8;
        case 0x2a6078u: goto label_2a6078;
        default: break;
    }

    ctx->pc = 0x2a5b20u;

    // 0x2a5b20: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2a5b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x2a5b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b28: 0xffb301b0  sd          $s3, 0x1B0($sp)
    ctx->pc = 0x2a5b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 19));
    // 0x2a5b2c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2a5b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a5b30: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x2a5b30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x2a5b34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a5b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b38: 0xffbe0200  sd          $fp, 0x200($sp)
    ctx->pc = 0x2a5b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 30));
    // 0x2a5b3c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2a5b3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2a5b40: 0xffb701f0  sd          $s7, 0x1F0($sp)
    ctx->pc = 0x2a5b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 23));
    // 0x2a5b44: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a5b48: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x2a5b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x2a5b4c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2a5b4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5b50: 0xffb601e0  sd          $s6, 0x1E0($sp)
    ctx->pc = 0x2a5b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 22));
    // 0x2a5b54: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2a5b54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b58: 0xffb501d0  sd          $s5, 0x1D0($sp)
    ctx->pc = 0x2a5b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 21));
    // 0x2a5b5c: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x2a5b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x2a5b60: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x2a5b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x2a5b64: 0xffb10190  sd          $s1, 0x190($sp)
    ctx->pc = 0x2a5b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 17));
    // 0x2a5b68: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A5B68u;
    SET_GPR_U32(ctx, 31, 0x2A5B70u);
    ctx->pc = 0x2A5B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B68u;
    // 0x2a5b6c: 0xffb00180  sd          $s0, 0x180($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A5B68u, 0x2A5B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B70u;
label_2a5b70:
    // 0x2a5b70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a5b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b78: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2A5B78u;
    SET_GPR_U32(ctx, 31, 0x2A5B80u);
    ctx->pc = 0x2A5B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B78u;
    // 0x2a5b7c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2A5B78u, 0x2A5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B80u;
label_2a5b80:
    // 0x2a5b80: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x2a5b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x2a5b84: 0x10a00042  beqz        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2A5B84u;
    {
        const bool branch_taken_0x2a5b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B84u;
        // 0x2a5b88: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b84) {
            ctx->pc = 0x2A5C90u;
            goto label_2a5c90;
        }
    }
    ctx->pc = 0x2A5B8Cu;
    // 0x2a5b8c: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x2a5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x2a5b90: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A5B90u;
    {
        const bool branch_taken_0x2a5b90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B90u;
        // 0x2a5b94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b90) {
            ctx->pc = 0x2A5C8Cu;
            goto label_2a5c8c;
        }
    }
    ctx->pc = 0x2A5B98u;
    // 0x2a5b98: 0x8ca3008c  lw          $v1, 0x8C($a1)
    ctx->pc = 0x2a5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2a5b9c: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A5B9Cu;
    {
        const bool branch_taken_0x2a5b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a5b9c) {
            ctx->pc = 0x2A5BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5B9Cu;
            // 0x2a5ba0: 0xc4af004c  lwc1        $f15, 0x4C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5C0Cu;
            goto label_2a5c0c;
        }
    }
    ctx->pc = 0x2A5BA4u;
    // 0x2a5ba4: 0xc7818e10  lwc1        $f1, -0x71F0($gp)
    ctx->pc = 0x2a5ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5ba8: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5bac: 0xc4af0048  lwc1        $f15, 0x48($a1)
    ctx->pc = 0x2a5bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a5bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bb4: 0xc4b0004c  lwc1        $f16, 0x4C($a1)
    ctx->pc = 0x2a5bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2a5bb8: 0xc4b10058  lwc1        $f17, 0x58($a1)
    ctx->pc = 0x2a5bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2a5bbc: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x2a5bbcu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x2a5bc0: 0x46018402  mul.s       $f16, $f16, $f1
    ctx->pc = 0x2a5bc0u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x2a5bc4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2a5bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2a5bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5bcc: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x2a5bccu;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x2a5bd0: 0xc4ae0038  lwc1        $f14, 0x38($a1)
    ctx->pc = 0x2a5bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a5bd4: 0x0  nop
    ctx->pc = 0x2a5bd4u;
    // NOP
    // 0x2a5bd8: 0x0  nop
    ctx->pc = 0x2a5bd8u;
    // NOP
    // 0x2a5bdc: 0x46007bc3  div.s       $f15, $f15, $f0
    ctx->pc = 0x2a5bdcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[0];
    // 0x2a5be0: 0xc4ac0030  lwc1        $f12, 0x30($a1)
    ctx->pc = 0x2a5be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a5be4: 0x0  nop
    ctx->pc = 0x2a5be4u;
    // NOP
    // 0x2a5be8: 0x0  nop
    ctx->pc = 0x2a5be8u;
    // NOP
    // 0x2a5bec: 0x46008403  div.s       $f16, $f16, $f0
    ctx->pc = 0x2a5becu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[0];
    // 0x2a5bf0: 0x0  nop
    ctx->pc = 0x2a5bf0u;
    // NOP
    // 0x2a5bf4: 0x0  nop
    ctx->pc = 0x2a5bf4u;
    // NOP
    // 0x2a5bf8: 0x46008c43  div.s       $f17, $f17, $f0
    ctx->pc = 0x2a5bf8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[0];
    // 0x2a5bfc: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x2A5BFCu;
    SET_GPR_U32(ctx, 31, 0x2A5C04u);
    ctx->pc = 0x2A5C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5BFCu;
    // 0x2a5c00: 0xc4ad0034  lwc1        $f13, 0x34($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x2A5BFCu, 0x2A5C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C04u;
label_2a5c04:
    // 0x2a5c04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A5C04u;
    {
        const bool branch_taken_0x2a5c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C04u;
        // 0x2a5c08: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c04) {
            ctx->pc = 0x2A5C44u;
            goto label_2a5c44;
        }
    }
    ctx->pc = 0x2A5C0Cu;
label_2a5c0c:
    // 0x2a5c0c: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x2a5c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5c10: 0xc7808e14  lwc1        $f0, -0x71EC($gp)
    ctx->pc = 0x2a5c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c18: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2a5c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2a5c1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a5c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5c20: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2a5c20u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2a5c24: 0xc4ae0038  lwc1        $f14, 0x38($a1)
    ctx->pc = 0x2a5c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a5c28: 0xc4ac0030  lwc1        $f12, 0x30($a1)
    ctx->pc = 0x2a5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a5c2c: 0x0  nop
    ctx->pc = 0x2a5c2cu;
    // NOP
    // 0x2a5c30: 0x0  nop
    ctx->pc = 0x2a5c30u;
    // NOP
    // 0x2a5c34: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x2a5c34u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x2a5c38: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x2A5C38u;
    SET_GPR_U32(ctx, 31, 0x2A5C40u);
    ctx->pc = 0x2A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C38u;
    // 0x2a5c3c: 0xc4ad0034  lwc1        $f13, 0x34($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x2A5C38u, 0x2A5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C40u;
label_2a5c40:
    // 0x2a5c40: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x2a5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_2a5c44:
    // 0x2a5c44: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x2a5c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a5c48: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x2a5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x2a5c4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a5c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c50: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2a5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2a5c54: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2a5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2a5c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c5c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2a5c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a5c60: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2A5C60u;
    SET_GPR_U32(ctx, 31, 0x2A5C68u);
    ctx->pc = 0x2A5C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C60u;
    // 0x2a5c64: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2A5C60u, 0x2A5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C68u;
label_2a5c68:
    // 0x2a5c68: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2a5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a5c6c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2a5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a5c70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a5c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c78: 0x8c6506e8  lw          $a1, 0x6E8($v1)
    ctx->pc = 0x2a5c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1768)));
    // 0x2a5c7c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2A5C7Cu;
    SET_GPR_U32(ctx, 31, 0x2A5C84u);
    ctx->pc = 0x2A5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C7Cu;
    // 0x2a5c80: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2A5C7Cu, 0x2A5C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C84u;
label_2a5c84:
    // 0x2a5c84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5C84u;
    {
        const bool branch_taken_0x2a5c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C84u;
        // 0x2a5c88: 0x8e6200c8  lw          $v0, 0xC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c84) {
            ctx->pc = 0x2A5C98u;
            goto label_2a5c98;
        }
    }
    ctx->pc = 0x2A5C8Cu;
label_2a5c8c:
    // 0x2a5c8c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2a5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2a5c90:
    // 0x2a5c90: 0x8c5606e8  lw          $s6, 0x6E8($v0)
    ctx->pc = 0x2a5c90u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
    // 0x2a5c94: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2a5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_2a5c98:
    // 0x2a5c98: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A5C98u;
    {
        const bool branch_taken_0x2a5c98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C98u;
        // 0x2a5c9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c98) {
            ctx->pc = 0x2A5D94u;
            goto label_2a5d94;
        }
    }
    ctx->pc = 0x2A5CA0u;
    // 0x2a5ca0: 0x27b50008  addiu       $s5, $sp, 0x8
    ctx->pc = 0x2a5ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a5ca4: 0x27b4000c  addiu       $s4, $sp, 0xC
    ctx->pc = 0x2a5ca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2a5ca8: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x2a5ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2a5cac: 0x0  nop
    ctx->pc = 0x2a5cacu;
    // NOP
label_2a5cb0:
    // 0x2a5cb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a5cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cb4: 0x3b08821  addu        $s1, $sp, $s0
    ctx->pc = 0x2a5cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2a5cb8: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x2a5cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2a5cbc: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x2A5CBCu;
    SET_GPR_U32(ctx, 31, 0x2A5CC4u);
    ctx->pc = 0x2A5CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CBCu;
    // 0x2a5cc0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x2A5CBCu, 0x2A5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CC4u;
label_2a5cc4:
    // 0x2a5cc4: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x2a5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2a5cc8: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x2a5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2a5ccc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a5cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5cd0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a5cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5cd4: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2a5cd4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2a5cd8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a5cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5cdc: 0x0  nop
    ctx->pc = 0x2a5cdcu;
    // NOP
    // 0x2a5ce0: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x2A5CE0u;
    {
        const bool branch_taken_0x2a5ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5ce0) {
            ctx->pc = 0x2A5CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5CE0u;
            // 0x2a5ce4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5D94u;
            goto label_2a5d94;
        }
    }
    ctx->pc = 0x2A5CE8u;
    // 0x2a5ce8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a5ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5cec: 0x0  nop
    ctx->pc = 0x2a5cecu;
    // NOP
    // 0x2a5cf0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5CF0u;
    {
        const bool branch_taken_0x2a5cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5cf0) {
            ctx->pc = 0x2A5CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5CF0u;
            // 0x2a5cf4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5D00u;
            goto label_2a5d00;
        }
    }
    ctx->pc = 0x2A5CF8u;
    // 0x2a5cf8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2A5CF8u;
    {
        const bool branch_taken_0x2a5cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CF8u;
        // 0x2a5cfc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5cf8) {
            ctx->pc = 0x2A5D94u;
            goto label_2a5d94;
        }
    }
    ctx->pc = 0x2A5D00u;
label_2a5d00:
    // 0x2a5d00: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a5d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5d04: 0x0  nop
    ctx->pc = 0x2a5d04u;
    // NOP
    // 0x2a5d08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5D08u;
    {
        const bool branch_taken_0x2a5d08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D08u;
        // 0x2a5d0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d08) {
            ctx->pc = 0x2A5D18u;
            goto label_2a5d18;
        }
    }
    ctx->pc = 0x2A5D10u;
    // 0x2a5d10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5D10u;
    {
        const bool branch_taken_0x2a5d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D10u;
        // 0x2a5d14: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d10) {
            ctx->pc = 0x2A5D34u;
            goto label_2a5d34;
        }
    }
    ctx->pc = 0x2A5D18u;
label_2a5d18:
    // 0x2a5d18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a5d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5d1c: 0x0  nop
    ctx->pc = 0x2a5d1cu;
    // NOP
    // 0x2a5d20: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5D20u;
    {
        const bool branch_taken_0x2a5d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5d20) {
            ctx->pc = 0x2A5D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5D20u;
            // 0x2a5d24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5D30u;
            goto label_2a5d30;
        }
    }
    ctx->pc = 0x2A5D28u;
    // 0x2a5d28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5D28u;
    {
        const bool branch_taken_0x2a5d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D28u;
        // 0x2a5d2c: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d28) {
            ctx->pc = 0x2A5D34u;
            goto label_2a5d34;
        }
    }
    ctx->pc = 0x2A5D30u;
label_2a5d30:
    // 0x2a5d30: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x2a5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_2a5d34:
    // 0x2a5d34: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x2a5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2a5d38: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x2a5d38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a5d3c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a5d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a5d40: 0x1301821  addu        $v1, $t1, $s0
    ctx->pc = 0x2a5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x2a5d44: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a5d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5d48: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2a5d48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2a5d4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a5d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5d50: 0x0  nop
    ctx->pc = 0x2a5d50u;
    // NOP
    // 0x2a5d54: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5D54u;
    {
        const bool branch_taken_0x2a5d54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D54u;
        // 0x2a5d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d54) {
            ctx->pc = 0x2A5D64u;
            goto label_2a5d64;
        }
    }
    ctx->pc = 0x2A5D5Cu;
    // 0x2a5d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5D5Cu;
    {
        const bool branch_taken_0x2a5d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D5Cu;
        // 0x2a5d60: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d5c) {
            ctx->pc = 0x2A5D80u;
            goto label_2a5d80;
        }
    }
    ctx->pc = 0x2A5D64u;
label_2a5d64:
    // 0x2a5d64: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a5d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5d68: 0x0  nop
    ctx->pc = 0x2a5d68u;
    // NOP
    // 0x2a5d6c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5D6Cu;
    {
        const bool branch_taken_0x2a5d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5d6c) {
            ctx->pc = 0x2A5D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5D6Cu;
            // 0x2a5d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5D7Cu;
            goto label_2a5d7c;
        }
    }
    ctx->pc = 0x2A5D74u;
    // 0x2a5d74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5D74u;
    {
        const bool branch_taken_0x2a5d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D74u;
        // 0x2a5d78: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d74) {
            ctx->pc = 0x2A5D80u;
            goto label_2a5d80;
        }
    }
    ctx->pc = 0x2A5D7Cu;
label_2a5d7c:
    // 0x2a5d7c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2a5d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2a5d80:
    // 0x2a5d80: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2a5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2a5d84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a5d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a5d88: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a5d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a5d8c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2A5D8Cu;
    {
        const bool branch_taken_0x2a5d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D8Cu;
        // 0x2a5d90: 0x128100  sll         $s0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d8c) {
            ctx->pc = 0x2A5CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5cb0;
        }
    }
    ctx->pc = 0x2A5D94u;
label_2a5d94:
    // 0x2a5d94: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x2a5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2a5d98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5D98u;
    {
        const bool branch_taken_0x2a5d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D98u;
        // 0x2a5d9c: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d98) {
            ctx->pc = 0x2A5DB4u;
            goto label_2a5db4;
        }
    }
    ctx->pc = 0x2A5DA0u;
    // 0x2a5da0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a5da4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A5DA4u;
    {
        const bool branch_taken_0x2a5da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DA4u;
        // 0x2a5da8: 0x8fa20088  lw          $v0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5da4) {
            ctx->pc = 0x2A5DD0u;
            goto label_2a5dd0;
        }
    }
    ctx->pc = 0x2A5DACu;
    // 0x2a5dac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5DACu;
    {
        const bool branch_taken_0x2a5dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DACu;
        // 0x2a5db0: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5dac) {
            ctx->pc = 0x2A5DD0u;
            goto label_2a5dd0;
        }
    }
    ctx->pc = 0x2A5DB4u;
label_2a5db4:
    // 0x2a5db4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5DB4u;
    {
        const bool branch_taken_0x2a5db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5db4) {
            ctx->pc = 0x2A5DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5DB4u;
            // 0x2a5db8: 0x1eb80a  movz        $s7, $zero, $fp (Delay Slot)
            if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5DD0u;
            goto label_2a5dd0;
        }
    }
    ctx->pc = 0x2A5DBCu;
    // 0x2a5dbc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2a5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a5dc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5DC0u;
    {
        const bool branch_taken_0x2a5dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DC0u;
        // 0x2a5dc4: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5dc0) {
            ctx->pc = 0x2A5DD0u;
            goto label_2a5dd0;
        }
    }
    ctx->pc = 0x2A5DC8u;
    // 0x2a5dc8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A5DC8u;
    {
        const bool branch_taken_0x2a5dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5dc8) {
            ctx->pc = 0x2A5DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5DC8u;
            // 0x2a5dcc: 0x1eb80a  movz        $s7, $zero, $fp (Delay Slot)
            if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5DD0u;
            goto label_2a5dd0;
        }
    }
    ctx->pc = 0x2A5DD0u;
label_2a5dd0:
    // 0x2a5dd0: 0x16e000f1  bnez        $s7, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2A5DD0u;
    {
        const bool branch_taken_0x2a5dd0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DD0u;
        // 0x2a5dd4: 0xdfbf0210  ld          $ra, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5dd0) {
            ctx->pc = 0x2A6198u;
            goto label_2a6198;
        }
    }
    ctx->pc = 0x2A5DD8u;
    // 0x2a5dd8: 0x8e6800c8  lw          $t0, 0xC8($s3)
    ctx->pc = 0x2a5dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2a5ddc: 0x19000065  blez        $t0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2A5DDCu;
    {
        const bool branch_taken_0x2a5ddc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2A5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DDCu;
        // 0x2a5de0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ddc) {
            ctx->pc = 0x2A5F74u;
            goto label_2a5f74;
        }
    }
    ctx->pc = 0x2A5DE4u;
    // 0x2a5de4: 0x27b50008  addiu       $s5, $sp, 0x8
    ctx->pc = 0x2a5de4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a5de8: 0x27b4000c  addiu       $s4, $sp, 0xC
    ctx->pc = 0x2a5de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2a5dec: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x2a5decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a5df0: 0x27ab0160  addiu       $t3, $sp, 0x160
    ctx->pc = 0x2a5df0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2a5df4: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x2a5df4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x2a5df8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x2a5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2a5dfc: 0x0  nop
    ctx->pc = 0x2a5dfcu;
    // NOP
label_2a5e00:
    // 0x2a5e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5e04: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2a5e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2a5e08: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2a5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2a5e0c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x2a5e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a5e10: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2a5e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a5e14: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x2a5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x2a5e18: 0x254399f0  addiu       $v1, $t2, -0x6610
    ctx->pc = 0x2a5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941168));
    // 0x2a5e1c: 0x3a43021  addu        $a2, $sp, $a0
    ctx->pc = 0x2a5e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2a5e20: 0x0  nop
    ctx->pc = 0x2a5e20u;
    // NOP
    // 0x2a5e24: 0x0  nop
    ctx->pc = 0x2a5e24u;
    // NOP
    // 0x2a5e28: 0x46044903  div.s       $f4, $f9, $f4
    ctx->pc = 0x2a5e28u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[4] = ctx->f[9] / ctx->f[4];
    // 0x2a5e2c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2a5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2a5e30: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2a5e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5e34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a5e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a5e38: 0x1243821  addu        $a3, $t1, $a0
    ctx->pc = 0x2a5e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2a5e3c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2a5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a5e40: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a5e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a5e44: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2a5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2a5e48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a5e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a5e4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a5e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a5e50: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x2a5e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2a5e54: 0xc465001c  lwc1        $f5, 0x1C($v1)
    ctx->pc = 0x2a5e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a5e58: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2a5e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2a5e5c: 0xc7878e18  lwc1        $f7, -0x71E8($gp)
    ctx->pc = 0x2a5e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a5e60: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x2a5e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x2a5e64: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2a5e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2a5e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5e6c: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x2a5e6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a5e70: 0xc7868e1c  lwc1        $f6, -0x71E4($gp)
    ctx->pc = 0x2a5e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a5e74: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a5e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5e78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a5e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a5e7c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2a5e7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2a5e80: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a5e80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a5e84: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x2a5e84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a5e88: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2a5e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5e8c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a5e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5e90: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a5e90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a5e94: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a5e94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a5e98: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2a5e98u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2a5e9c: 0xe4e50000  swc1        $f5, 0x0($a3)
    ctx->pc = 0x2a5e9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2a5ea0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a5ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5ea4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a5ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5ea8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2a5ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2a5eac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a5eb0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2a5eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2a5eb4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a5eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a5eb8: 0x1642002a  bne         $s2, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A5EB8u;
    {
        const bool branch_taken_0x2a5eb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EB8u;
        // 0x2a5ebc: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5eb8) {
            ctx->pc = 0x2A5F64u;
            goto label_2a5f64;
        }
    }
    ctx->pc = 0x2A5EC0u;
    // 0x2a5ec0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a5ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5ec4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2a5ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5ec8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a5ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a5ecc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a5eccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a5ed0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a5ed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5ed4: 0x0  nop
    ctx->pc = 0x2a5ed4u;
    // NOP
    // 0x2a5ed8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5ED8u;
    {
        const bool branch_taken_0x2a5ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5ed8) {
            ctx->pc = 0x2A5EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5ED8u;
            // 0x2a5edc: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5EF8u;
            goto label_2a5ef8;
        }
    }
    ctx->pc = 0x2A5EE0u;
    // 0x2a5ee0: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x2a5ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5ee4: 0x0  nop
    ctx->pc = 0x2a5ee4u;
    // NOP
    // 0x2a5ee8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5EE8u;
    {
        const bool branch_taken_0x2a5ee8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EE8u;
        // 0x2a5eec: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ee8) {
            ctx->pc = 0x2A5F08u;
            goto label_2a5f08;
        }
    }
    ctx->pc = 0x2A5EF0u;
    // 0x2a5ef0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A5EF0u;
    {
        const bool branch_taken_0x2a5ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EF0u;
        // 0x2a5ef4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ef0) {
            ctx->pc = 0x2A5F68u;
            goto label_2a5f68;
        }
    }
    ctx->pc = 0x2A5EF8u;
label_2a5ef8:
    // 0x2a5ef8: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x2a5ef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5efc: 0x0  nop
    ctx->pc = 0x2a5efcu;
    // NOP
    // 0x2a5f00: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2A5F00u;
    {
        const bool branch_taken_0x2a5f00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F00u;
        // 0x2a5f04: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f00) {
            ctx->pc = 0x2A5F64u;
            goto label_2a5f64;
        }
    }
    ctx->pc = 0x2A5F08u;
label_2a5f08:
    // 0x2a5f08: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2a5f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5f0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a5f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a5f10: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2a5f10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a5f14: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2a5f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5f18: 0x0  nop
    ctx->pc = 0x2a5f18u;
    // NOP
    // 0x2a5f1c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5F1Cu;
    {
        const bool branch_taken_0x2a5f1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5f1c) {
            ctx->pc = 0x2A5F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5F1Cu;
            // 0x2a5f20: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5F44u;
            goto label_2a5f44;
        }
    }
    ctx->pc = 0x2A5F24u;
    // 0x2a5f24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5f28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5f2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a5f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5f30: 0x0  nop
    ctx->pc = 0x2a5f30u;
    // NOP
    // 0x2a5f34: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x2A5F34u;
    {
        const bool branch_taken_0x2a5f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5f34) {
            ctx->pc = 0x2A5F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5F34u;
            // 0x2a5f38: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5F74u;
            goto label_2a5f74;
        }
    }
    ctx->pc = 0x2A5F3Cu;
    // 0x2a5f3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A5F3Cu;
    {
        const bool branch_taken_0x2a5f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F3Cu;
        // 0x2a5f40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f3c) {
            ctx->pc = 0x2A5F68u;
            goto label_2a5f68;
        }
    }
    ctx->pc = 0x2A5F44u;
label_2a5f44:
    // 0x2a5f44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5f48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5f4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a5f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5f50: 0x0  nop
    ctx->pc = 0x2a5f50u;
    // NOP
    // 0x2a5f54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5F54u;
    {
        const bool branch_taken_0x2a5f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F54u;
        // 0x2a5f58: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f54) {
            ctx->pc = 0x2A5F68u;
            goto label_2a5f68;
        }
    }
    ctx->pc = 0x2A5F5Cu;
    // 0x2a5f5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5F5Cu;
    {
        const bool branch_taken_0x2a5f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F5Cu;
        // 0x2a5f60: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f5c) {
            ctx->pc = 0x2A5F74u;
            goto label_2a5f74;
        }
    }
    ctx->pc = 0x2A5F64u;
label_2a5f64:
    // 0x2a5f64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a5f64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a5f68:
    // 0x2a5f68: 0x248102a  slt         $v0, $s2, $t0
    ctx->pc = 0x2a5f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2a5f6c: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2A5F6Cu;
    {
        const bool branch_taken_0x2a5f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F6Cu;
        // 0x2a5f70: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f6c) {
            ctx->pc = 0x2A5E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5e00;
        }
    }
    ctx->pc = 0x2A5F74u;
label_2a5f74:
    // 0x2a5f74: 0x16e00088  bnez        $s7, . + 4 + (0x88 << 2)
    ctx->pc = 0x2A5F74u;
    {
        const bool branch_taken_0x2a5f74 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F74u;
        // 0x2a5f78: 0xdfbf0210  ld          $ra, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f74) {
            ctx->pc = 0x2A6198u;
            goto label_2a6198;
        }
    }
    ctx->pc = 0x2A5F7Cu;
    // 0x2a5f7c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2a5f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2a5f80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5f84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a5f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f88: 0xc66100dc  lwc1        $f1, 0xDC($s3)
    ctx->pc = 0x2a5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5f8c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2a5f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a5f90: 0x8e6300e4  lw          $v1, 0xE4($s3)
    ctx->pc = 0x2a5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x2a5f94: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x2a5f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x2a5f98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a5f9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a5f9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a5fa0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2a5fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a5fa4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a5fa8: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A5FA8u;
    SET_GPR_U32(ctx, 31, 0x2A5FB0u);
    ctx->pc = 0x2A5FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5FA8u;
    // 0x2a5fac: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A5FA8u, 0x2A5FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FB0u;
label_2a5fb0:
    // 0x2a5fb0: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2a5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2a5fb4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x2a5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a5fb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a5fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a5fbc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2a5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2a5fc0: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2A5FC0u;
    SET_GPR_U32(ctx, 31, 0x2A5FC8u);
    ctx->pc = 0x2A5FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5FC0u;
    // 0x2a5fc4: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2A5FC0u, 0x2A5FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FC8u;
label_2a5fc8:
    // 0x2a5fc8: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x2a5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a5fcc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2a5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a5fd0: 0x8e6800c8  lw          $t0, 0xC8($s3)
    ctx->pc = 0x2a5fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2a5fd4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2a5fd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5fd8: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x2a5fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a5fdc: 0x3c066c00  lui         $a2, 0x6C00
    ctx->pc = 0x2a5fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27648 << 16));
    // 0x2a5fe0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x2a5fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x2a5fe4: 0x3c07302e  lui         $a3, 0x302E
    ctx->pc = 0x2a5fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12334 << 16));
    // 0x2a5fe8: 0x8e6500c8  lw          $a1, 0xC8($s3)
    ctx->pc = 0x2a5fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2a5fec: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x2a5fecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x2a5ff0: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x2a5ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a5ff4: 0x24090eee  addiu       $t1, $zero, 0xEEE
    ctx->pc = 0x2a5ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x2a5ff8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2a5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2a5ffc: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2a5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2a6000: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a6000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a6004: 0xac8a0004  sw          $t2, 0x4($a0)
    ctx->pc = 0x2a6004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 10));
    // 0x2a6008: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a6008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a600c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a6010: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a6010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2a6014: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a6014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a6018: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2a6018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a601c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2a601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2a6020: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2a6020u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x2a6024: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a6024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6028: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2a6028u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a602c: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2a602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2a6030: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x2a6030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x2a6034: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a6034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a6038: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2a6038u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x2a603c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a603cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6040: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x2a6040u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x2a6044: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a6044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6048: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x2a6048u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x2a604c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a604cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6050: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2a6050u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x2a6054: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2a6054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2a6058: 0x18400047  blez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2A6058u;
    {
        const bool branch_taken_0x2a6058 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6058u;
        // 0x2a605c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6058) {
            ctx->pc = 0x2A6178u;
            goto label_2a6178;
        }
    }
    ctx->pc = 0x2A6060u;
    // 0x2a6060: 0x27b50008  addiu       $s5, $sp, 0x8
    ctx->pc = 0x2a6060u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a6064: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x2a6064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a6068: 0x27ab0160  addiu       $t3, $sp, 0x160
    ctx->pc = 0x2a6068u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2a606c: 0x266d0080  addiu       $t5, $s3, 0x80
    ctx->pc = 0x2a606cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x2a6070: 0x266c0084  addiu       $t4, $s3, 0x84
    ctx->pc = 0x2a6070u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
    // 0x2a6074: 0x0  nop
    ctx->pc = 0x2a6074u;
    // NOP
label_2a6078:
    // 0x2a6078: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2a6078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a607c: 0xad500000  sw          $s0, 0x0($t2)
    ctx->pc = 0x2a607cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 16));
    // 0x2a6080: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x2a6080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2a6084: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a6084u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6088: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a6088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a608c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2a608cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2a6090: 0x1a31021  addu        $v0, $t5, $v1
    ctx->pc = 0x2a6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2a6094: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6098: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x2a6098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2a609c: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x2a609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2a60a0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a60a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a60a4: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x2a60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2a60a8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a60a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a60ac: 0x3a54021  addu        $t0, $sp, $a1
    ctx->pc = 0x2a60acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2a60b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a60b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a60b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a60b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a60b8: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x2a60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x2a60bc: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x2a60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2a60c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a60c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a60c4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a60c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a60c8: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2a60c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x2a60cc: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x2a60ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2a60d0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a60d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a60d4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2a60d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2a60d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a60d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a60dc: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x2a60dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2a60e0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2a60e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a60e4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a60e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a60e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a60e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a60ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a60ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a60f0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a60f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a60f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a60f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a60f8: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x2a60f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2a60fc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a60fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6100: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2a6100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6104: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a6104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6108: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a6108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a610c: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x2a610cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x2a6110: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a6110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a6114: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a6114u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6118: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2a6118u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x2a611c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a611cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a6120: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2a6120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a6124: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a6124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6128: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a6128u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a612c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a612cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a6130: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a6130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6134: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x2a6134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x2a6138: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a6138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a613c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a613cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a6140: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a6140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a6144: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6148: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2a6148u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x2a614c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a614cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6150: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a6150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a6154: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2a6154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2a6158: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a6158u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a615c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x2a615cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x2a6160: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a6160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a6164: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2a6164u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x2a6168: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2a6168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2a616c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a616cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a6170: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2A6170u;
    {
        const bool branch_taken_0x2a6170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6170u;
        // 0x2a6174: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6170) {
            ctx->pc = 0x2A6078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6078;
        }
    }
    ctx->pc = 0x2A6178u;
label_2a6178:
    // 0x2a6178: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x2a6178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x2a617c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x2a617cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x2a6180: 0x344207fc  ori         $v0, $v0, 0x7FC
    ctx->pc = 0x2a6180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2044);
    // 0x2a6184: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2a6184u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x2a6188: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a6188u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a618c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x2a618cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x2a6190: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x2a6190u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x2a6194: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x2a6194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
label_2a6198:
    // 0x2a6198: 0xdfbe0200  ld          $fp, 0x200($sp)
    ctx->pc = 0x2a6198u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2a619c: 0xdfb701f0  ld          $s7, 0x1F0($sp)
    ctx->pc = 0x2a619cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2a61a0: 0xdfb601e0  ld          $s6, 0x1E0($sp)
    ctx->pc = 0x2a61a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2a61a4: 0xdfb501d0  ld          $s5, 0x1D0($sp)
    ctx->pc = 0x2a61a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2a61a8: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x2a61a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2a61ac: 0xdfb301b0  ld          $s3, 0x1B0($sp)
    ctx->pc = 0x2a61acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2a61b0: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x2a61b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a61b4: 0xdfb10190  ld          $s1, 0x190($sp)
    ctx->pc = 0x2a61b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a61b8: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x2a61b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2a61bc: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x2a61bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a61c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A61C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61C0u;
        // 0x2a61c4: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A61C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A61C8u;
}
