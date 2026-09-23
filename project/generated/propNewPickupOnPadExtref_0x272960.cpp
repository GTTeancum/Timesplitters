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

// Function: propNewPickupOnPadExtref
// Address: 0x272960 - 0x272a74
void propNewPickupOnPadExtref_0x272960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propNewPickupOnPadExtref_0x272960");
#endif

    switch (ctx->pc) {
        case 0x2729d4u: goto label_2729d4;
        case 0x272a28u: goto label_272a28;
        default: break;
    }

    ctx->pc = 0x272960u;

    // 0x272960: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x272960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x272964: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x272964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x272968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x272968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27296c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x27296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x272970: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x272970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x272974: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x272974u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272978: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x272978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27297c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x27297cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272980: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x272980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x272984: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x272984u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272988: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x272988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27298c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x27298cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272990: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x272990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x272994: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x272994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272998: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x272998u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27299c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27299cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729a0: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x2729a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2729a4: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x2729a4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x2729a8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2729a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2729ac: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2729acu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2729b0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2729b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2729b4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2729b4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2729b8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2729b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2729bc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2729bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2729c0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2729c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2729c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2729c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2729c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2729c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2729cc: 0xc099380  jal         func_264E00
    ctx->pc = 0x2729CCu;
    SET_GPR_U32(ctx, 31, 0x2729D4u);
    ctx->pc = 0x2729D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729CCu;
    // 0x2729d0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x2729CCu, 0x2729D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729D4u;
label_2729d4:
    // 0x2729d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2729d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729d8: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2729d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2729dc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2729dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2729e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2729e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729e4: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2729e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2729e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2729e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2729ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2729f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2729f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729f4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2729f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729f8: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x2729f8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x2729fc: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x2729fcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x272a00: 0x4600bc86  mov.s       $f18, $f23
    ctx->pc = 0x272a00u;
    ctx->f[18] = FPU_MOV_S(ctx->f[23]);
    // 0x272a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272a08: 0x4600c4c6  mov.s       $f19, $f24
    ctx->pc = 0x272a08u;
    ctx->f[19] = FPU_MOV_S(ctx->f[24]);
    // 0x272a0c: 0xc44f0014  lwc1        $f15, 0x14($v0)
    ctx->pc = 0x272a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x272a10: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x272a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a14: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x272a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x272a18: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x272a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a1c: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x272a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x272a20: 0xc09cc38  jal         func_2730E0
    ctx->pc = 0x272A20u;
    SET_GPR_U32(ctx, 31, 0x272A28u);
    ctx->pc = 0x272A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A20u;
    // 0x272a24: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2730E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2730E0u, 0x272A20u, 0x272A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A28u;
label_272a28:
    // 0x272a28: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x272a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x272a2c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x272a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x272a30: 0xac700028  sw          $s0, 0x28($v1)
    ctx->pc = 0x272a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 16));
    // 0x272a34: 0xac700024  sw          $s0, 0x24($v1)
    ctx->pc = 0x272a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
    // 0x272a38: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x272a38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x272a3c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x272a3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x272a40: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x272a40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x272a44: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x272a44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x272a48: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x272a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272a4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x272a4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272a50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x272a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x272a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272a58: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x272a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x272a5c: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x272a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x272a60: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x272a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x272a64: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x272a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x272a68: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x272a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x272a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x272A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A6Cu;
        // 0x272a70: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272A74u;
}
