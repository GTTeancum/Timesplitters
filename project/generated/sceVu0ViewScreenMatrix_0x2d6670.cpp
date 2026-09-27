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

// Function: sceVu0ViewScreenMatrix
// Address: 0x2d6670 - 0x2d6774
void sceVu0ViewScreenMatrix_0x2d6670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0ViewScreenMatrix_0x2d6670");
#endif

    switch (ctx->pc) {
        case 0x2d66f8u: goto label_2d66f8;
        case 0x2d6720u: goto label_2d6720;
        case 0x2d6748u: goto label_2d6748;
        default: break;
    }

    ctx->pc = 0x2d6670u;

    // 0x2d6670: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d6670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d6674: 0x46008807  neg.s       $f0, $f17
    ctx->pc = 0x2d6674u;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
    // 0x2d6678: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2d6678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d667c: 0x46009507  neg.s       $f20, $f18
    ctx->pc = 0x2d667cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[18]);
    // 0x2d6680: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2d6680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6684: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2d6684u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d6688: 0x46120000  add.s       $f0, $f0, $f18
    ctx->pc = 0x2d6688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[18]);
    // 0x2d668c: 0x46130d42  mul.s       $f21, $f1, $f19
    ctx->pc = 0x2d668cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x2d6690: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2d6690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2d6694: 0x4613a502  mul.s       $f20, $f20, $f19
    ctx->pc = 0x2d6694u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
    // 0x2d6698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d669c: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x2d669cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x2d66a0: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x2d66a0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d66a4: 0x46009cc7  neg.s       $f19, $f19
    ctx->pc = 0x2d66a4u;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
    // 0x2d66a8: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x2d66a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2d66ac: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2d66acu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d66b0: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x2d66b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d66b4: 0x4611a500  add.s       $f20, $f20, $f17
    ctx->pc = 0x2d66b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
    // 0x2d66b8: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x2d66b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d66bc: 0x46019cc0  add.s       $f19, $f19, $f1
    ctx->pc = 0x2d66bcu;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x2d66c0: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2d66c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d66c4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2d66c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2d66c8: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x2d66c8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x2d66cc: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x2d66ccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x2d66d0: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x2d66d0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x2d66d4: 0x0  nop
    ctx->pc = 0x2d66d4u;
    // NOP
    // 0x2d66d8: 0x0  nop
    ctx->pc = 0x2d66d8u;
    // NOP
    // 0x2d66dc: 0x4613ad43  div.s       $f21, $f21, $f19
    ctx->pc = 0x2d66dcu;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[19];
    // 0x2d66e0: 0x0  nop
    ctx->pc = 0x2d66e0u;
    // NOP
    // 0x2d66e4: 0x0  nop
    ctx->pc = 0x2d66e4u;
    // NOP
    // 0x2d66e8: 0x4613a503  div.s       $f20, $f20, $f19
    ctx->pc = 0x2d66e8u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[19];
    // 0x2d66ec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d66ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d66f0: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2D66F0u;
    SET_GPR_U32(ctx, 31, 0x2D66F8u);
    ctx->pc = 0x2D66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D66F0u;
    // 0x2d66f4: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2D66F0u, 0x2D66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D66F8u;
label_2d66f8:
    // 0x2d66f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d66f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d66fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d66fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6700: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d6700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6704: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x2d6704u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2d6708: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x2d6708u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d670c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2d670cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2d6710: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2d6710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2d6714: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2d6714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2d6718: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2D6718u;
    SET_GPR_U32(ctx, 31, 0x2D6720u);
    ctx->pc = 0x2D671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6718u;
    // 0x2d671c: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2D6718u, 0x2D6720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6720u;
label_2d6720:
    // 0x2d6720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6724: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x2d6724u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d6728: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x2d6728u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d672c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6730: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2d6730u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d6734: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d6734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6738: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x2d6738u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d673c: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x2d673cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d6740: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2D6740u;
    SET_GPR_U32(ctx, 31, 0x2D6748u);
    ctx->pc = 0x2D6744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6740u;
    // 0x2d6744: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2D6740u, 0x2D6748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6748u;
label_2d6748:
    // 0x2d6748: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d6748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d674c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2d674cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6750: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x2d6750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2d6754: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x2d6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2d6758: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x2d6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d675c: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x2d675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d6760: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2d6760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d6764: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2d6764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d6768: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2d6768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d676c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D676Cu;
        // 0x2d6770: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6774u;
}
