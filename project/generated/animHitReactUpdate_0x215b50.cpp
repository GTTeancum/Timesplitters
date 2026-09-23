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

// Function: animHitReactUpdate
// Address: 0x215b50 - 0x215cb4
void animHitReactUpdate_0x215b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("animHitReactUpdate_0x215b50");
#endif

    switch (ctx->pc) {
        case 0x215bd8u: goto label_215bd8;
        default: break;
    }

    ctx->pc = 0x215b50u;

    // 0x215b50: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x215b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215b54: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215b58: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x215b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x215b5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x215b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215b60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215b64: 0x0  nop
    ctx->pc = 0x215b64u;
    // NOP
    // 0x215b68: 0x0  nop
    ctx->pc = 0x215b68u;
    // NOP
    // 0x215b6c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x215b6cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x215b70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b78: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x215b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215b7c: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x215b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215b80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x215b80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x215b84: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x215b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215b88: 0x0  nop
    ctx->pc = 0x215b88u;
    // NOP
    // 0x215b8c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x215B8Cu;
    {
        const bool branch_taken_0x215b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B8Cu;
        // 0x215b90: 0xe60100c8  swc1        $f1, 0xC8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b8c) {
            ctx->pc = 0x215BA4u;
            goto label_215ba4;
        }
    }
    ctx->pc = 0x215B94u;
    // 0x215b94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x215b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215b98: 0xe60200c8  swc1        $f2, 0xC8($s0)
    ctx->pc = 0x215b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x215b9c: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x215b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x215ba0: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x215ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
label_215ba4:
    // 0x215ba4: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x215ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215ba8: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x215ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x215bac: 0xc7808058  lwc1        $f0, -0x7FA8($gp)
    ctx->pc = 0x215bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215bb0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x215bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x215bb4: 0x0  nop
    ctx->pc = 0x215bb4u;
    // NOP
    // 0x215bb8: 0x0  nop
    ctx->pc = 0x215bb8u;
    // NOP
    // 0x215bbc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x215bbcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x215bc0: 0xc78c805c  lwc1        $f12, -0x7FA4($gp)
    ctx->pc = 0x215bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x215bc4: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x215bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x215bc8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x215bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215bcc: 0xae030150  sw          $v1, 0x150($s0)
    ctx->pc = 0x215bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 3));
    // 0x215bd0: 0xc0ad2ae  jal         func_2B4AB8
    ctx->pc = 0x215BD0u;
    SET_GPR_U32(ctx, 31, 0x215BD8u);
    ctx->pc = 0x215BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215BD0u;
    // 0x215bd4: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4AB8u, 0x215BD0u, 0x215BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BD8u;
label_215bd8:
    // 0x215bd8: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x215bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215bdc: 0xc78c8060  lwc1        $f12, -0x7FA0($gp)
    ctx->pc = 0x215bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x215be0: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x215be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215be4: 0x0  nop
    ctx->pc = 0x215be4u;
    // NOP
    // 0x215be8: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x215BE8u;
    {
        const bool branch_taken_0x215be8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215be8) {
            ctx->pc = 0x215BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215BE8u;
            // 0x215bec: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215C78u;
            goto label_215c78;
        }
    }
    ctx->pc = 0x215BF0u;
    // 0x215bf0: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x215bf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x215bf4: 0xc7808064  lwc1        $f0, -0x7F9C($gp)
    ctx->pc = 0x215bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215bf8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x215bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x215bfc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x215bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x215c00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215c04: 0x0  nop
    ctx->pc = 0x215c04u;
    // NOP
    // 0x215c08: 0x0  nop
    ctx->pc = 0x215c08u;
    // NOP
    // 0x215c0c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x215c0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x215c10: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x215c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x215c14: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x215c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x215c18: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x215c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215c1c: 0x0  nop
    ctx->pc = 0x215c1cu;
    // NOP
    // 0x215c20: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x215C20u;
    {
        const bool branch_taken_0x215c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C20u;
        // 0x215c24: 0xae030154  sw          $v1, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c20) {
            ctx->pc = 0x215C54u;
            goto label_215c54;
        }
    }
    ctx->pc = 0x215C28u;
    // 0x215c28: 0x46010b00  add.s       $f12, $f1, $f1
    ctx->pc = 0x215c28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x215c2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215c34: 0xc7818068  lwc1        $f1, -0x7F98($gp)
    ctx->pc = 0x215c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215c38: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x215c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x215c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215c40: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x215c40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x215c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215c48: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x215c48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x215c4c: 0x80ad2ae  j           func_2B4AB8
    ctx->pc = 0x215C4Cu;
    ctx->pc = 0x215C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C4Cu;
    // 0x215c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AB8u;
    matrixRotZ_0x2b4ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x215C54u;
label_215c54:
    // 0x215c54: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x215c54u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x215c58: 0xc780806c  lwc1        $f0, -0x7F94($gp)
    ctx->pc = 0x215c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215c5c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x215c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x215c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215c68: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x215c68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x215c6c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x215c6cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x215c70: 0x80ad2ae  j           func_2B4AB8
    ctx->pc = 0x215C70u;
    ctx->pc = 0x215C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C70u;
    // 0x215c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AB8u;
    matrixRotZ_0x2b4ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x215C78u;
label_215c78:
    // 0x215c78: 0x0  nop
    ctx->pc = 0x215c78u;
    // NOP
    // 0x215c7c: 0x0  nop
    ctx->pc = 0x215c7cu;
    // NOP
    // 0x215c80: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x215c80u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[12];
    // 0x215c84: 0xc78c8070  lwc1        $f12, -0x7F90($gp)
    ctx->pc = 0x215c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x215c88: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x215c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x215c8c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x215c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x215c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215c94: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x215c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x215c98: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x215c98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x215c9c: 0xae050154  sw          $a1, 0x154($s0)
    ctx->pc = 0x215c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 5));
    // 0x215ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215ca4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x215ca4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x215ca8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x215ca8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x215cac: 0x80ad2ae  j           func_2B4AB8
    ctx->pc = 0x215CACu;
    ctx->pc = 0x215CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CACu;
    // 0x215cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AB8u;
    matrixRotZ_0x2b4ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x215CB4u;
}
