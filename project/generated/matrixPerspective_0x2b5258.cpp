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

// Function: matrixPerspective
// Address: 0x2b5258 - 0x2b5364
void matrixPerspective_0x2b5258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixPerspective_0x2b5258");
#endif

    switch (ctx->pc) {
        case 0x2b52a4u: goto label_2b52a4;
        case 0x2b52b0u: goto label_2b52b0;
        default: break;
    }

    ctx->pc = 0x2b5258u;

    // 0x2b5258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b5258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b525c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b525cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b5260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5264: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x2b5264u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b5268: 0x46006dc2  mul.s       $f23, $f13, $f0
    ctx->pc = 0x2b5268u;
    ctx->f[23] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2b526c: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2b526cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b5270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5274: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x2b5274u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x2b5278: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b5278u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b527c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b527cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5280: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b5280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b5284: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x2b5284u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x2b5288: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x2b5288u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x2b528c: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x2b528cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b5290: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2b5290u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b5294: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2b5294u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2b5298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b529c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B529Cu;
    SET_GPR_U32(ctx, 31, 0x2B52A4u);
    ctx->pc = 0x2B52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B529Cu;
    // 0x2b52a0: 0x4614ae41  sub.s       $f25, $f21, $f20 (Delay Slot)
    ctx->f[25] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B529Cu, 0x2B52A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B52A4u;
label_2b52a4:
    // 0x2b52a4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2b52a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2b52a8: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B52A8u;
    SET_GPR_U32(ctx, 31, 0x2B52B0u);
    ctx->pc = 0x2B52ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B52A8u;
    // 0x2b52ac: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B52A8u, 0x2B52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B52B0u;
label_2b52b0:
    // 0x2b52b0: 0x4615a042  mul.s       $f1, $f20, $f21
    ctx->pc = 0x2b52b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2b52b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b52b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b52b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b52b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b52bc: 0x0  nop
    ctx->pc = 0x2b52bcu;
    // NOP
    // 0x2b52c0: 0x0  nop
    ctx->pc = 0x2b52c0u;
    // NOP
    // 0x2b52c4: 0x4600b583  div.s       $f22, $f22, $f0
    ctx->pc = 0x2b52c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[0];
    // 0x2b52c8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2b52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2b52cc: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2b52ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2b52d0: 0xe602002c  swc1        $f2, 0x2C($s0)
    ctx->pc = 0x2b52d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2b52d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b52d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2b52d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b52d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2b52dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b52dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b52e0: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2b52e0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x2b52e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b52e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b52e8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2b52e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2b52ec: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2b52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2b52f0: 0x0  nop
    ctx->pc = 0x2b52f0u;
    // NOP
    // 0x2b52f4: 0x0  nop
    ctx->pc = 0x2b52f4u;
    // NOP
    // 0x2b52f8: 0x4618b603  div.s       $f24, $f22, $f24
    ctx->pc = 0x2b52f8u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[24] = ctx->f[22] / ctx->f[24];
    // 0x2b52fc: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x2b52fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b5300: 0x0  nop
    ctx->pc = 0x2b5300u;
    // NOP
    // 0x2b5304: 0x0  nop
    ctx->pc = 0x2b5304u;
    // NOP
    // 0x2b5308: 0x4619a503  div.s       $f20, $f20, $f25
    ctx->pc = 0x2b5308u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[25];
    // 0x2b530c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b530cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2b5310: 0x0  nop
    ctx->pc = 0x2b5310u;
    // NOP
    // 0x2b5314: 0x0  nop
    ctx->pc = 0x2b5314u;
    // NOP
    // 0x2b5318: 0x46190843  div.s       $f1, $f1, $f25
    ctx->pc = 0x2b5318u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[25];
    // 0x2b531c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2b531cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2b5320: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2b5320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2b5324: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2b5324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2b5328: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2b5328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2b532c: 0xe6180000  swc1        $f24, 0x0($s0)
    ctx->pc = 0x2b532cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b5330: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x2b5330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b5334: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x2b5334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2b5338: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2b5338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2b533c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b533cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5344: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x2b5344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b5348: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x2b5348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b534c: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2b534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b5350: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2b5350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b5354: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b5354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b5358: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b5358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b535c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B535Cu;
        // 0x2b5360: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B535Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5364u;
}
