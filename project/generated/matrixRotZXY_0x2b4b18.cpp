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

// Function: matrixRotZXY
// Address: 0x2b4b18 - 0x2b4c50
void matrixRotZXY_0x2b4b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixRotZXY_0x2b4b18");
#endif

    switch (ctx->pc) {
        case 0x2b4b50u: goto label_2b4b50;
        case 0x2b4b5cu: goto label_2b4b5c;
        case 0x2b4b68u: goto label_2b4b68;
        case 0x2b4b74u: goto label_2b4b74;
        case 0x2b4b80u: goto label_2b4b80;
        case 0x2b4b8cu: goto label_2b4b8c;
        default: break;
    }

    ctx->pc = 0x2b4b18u;

    // 0x2b4b18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b4b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b4b1c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4b1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4b20: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b4b20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2b4b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4b28: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x2b4b28u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b4b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b30: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4b30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4b34: 0x46007646  mov.s       $f25, $f14
    ctx->pc = 0x2b4b34u;
    ctx->f[25] = FPU_MOV_S(ctx->f[14]);
    // 0x2b4b38: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2b4b38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b4b3c: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x2b4b3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b4b40: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4b40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b4b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4b48: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4B48u;
    SET_GPR_U32(ctx, 31, 0x2B4B50u);
    ctx->pc = 0x2B4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B48u;
    // 0x2b4b4c: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4B48u, 0x2B4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B50u;
label_2b4b50:
    // 0x2b4b50: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2b4b50u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4b54: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4B54u;
    SET_GPR_U32(ctx, 31, 0x2B4B5Cu);
    ctx->pc = 0x2B4B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B54u;
    // 0x2b4b58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4B54u, 0x2B4B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B5Cu;
label_2b4b5c:
    // 0x2b4b5c: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2b4b5cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4b60: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4B60u;
    SET_GPR_U32(ctx, 31, 0x2B4B68u);
    ctx->pc = 0x2B4B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B60u;
    // 0x2b4b64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4B60u, 0x2B4B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B68u;
label_2b4b68:
    // 0x2b4b68: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2b4b68u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4b6c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4B6Cu;
    SET_GPR_U32(ctx, 31, 0x2B4B74u);
    ctx->pc = 0x2B4B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B6Cu;
    // 0x2b4b70: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4B6Cu, 0x2B4B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B74u;
label_2b4b74:
    // 0x2b4b74: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b4b74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4b78: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4B78u;
    SET_GPR_U32(ctx, 31, 0x2B4B80u);
    ctx->pc = 0x2B4B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B78u;
    // 0x2b4b7c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4B78u, 0x2B4B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B80u;
label_2b4b80:
    // 0x2b4b80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b4b80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4b84: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4B84u;
    SET_GPR_U32(ctx, 31, 0x2B4B8Cu);
    ctx->pc = 0x2B4B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B84u;
    // 0x2b4b88: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4B84u, 0x2B4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B8Cu;
label_2b4b8c:
    // 0x2b4b8c: 0x4616b982  mul.s       $f6, $f23, $f22
    ctx->pc = 0x2b4b8cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
    // 0x2b4b90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4b94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b4b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4b98: 0x4615b942  mul.s       $f5, $f23, $f21
    ctx->pc = 0x2b4b98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x2b4b9c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b4ba0: 0x4600b107  neg.s       $f4, $f22
    ctx->pc = 0x2b4ba0u;
    ctx->f[4] = FPU_NEG_S(ctx->f[22]);
    // 0x2b4ba4: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x2b4ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2b4ba8: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x2b4ba8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x2b4bac: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2b4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2b4bb0: 0x46050202  mul.s       $f8, $f0, $f5
    ctx->pc = 0x2b4bb0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b4bb4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2b4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2b4bb8: 0x460601c2  mul.s       $f7, $f0, $f6
    ctx->pc = 0x2b4bb8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2b4bbc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2b4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2b4bc0: 0x4616a0c2  mul.s       $f3, $f20, $f22
    ctx->pc = 0x2b4bc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2b4bc4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2b4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2b4bc8: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x2b4bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2b4bcc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2b4bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2b4bd0: 0x4606a182  mul.s       $f6, $f20, $f6
    ctx->pc = 0x2b4bd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
    // 0x2b4bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4bd8: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x2b4bd8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x2b4bdc: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x2b4bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b4be0: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x2b4be0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b4be4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2b4be4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2b4be8: 0x4615c542  mul.s       $f21, $f24, $f21
    ctx->pc = 0x2b4be8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x2b4bec: 0x4616c582  mul.s       $f22, $f24, $f22
    ctx->pc = 0x2b4becu;
    ctx->f[22] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
    // 0x2b4bf0: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x2b4bf0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x2b4bf4: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2b4bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2b4bf8: 0xe6150028  swc1        $f21, 0x28($s0)
    ctx->pc = 0x2b4bf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b4bfc: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2b4bfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2b4c00: 0xe6160020  swc1        $f22, 0x20($s0)
    ctx->pc = 0x2b4c00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b4c04: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2b4c04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2b4c08: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b4c08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b4c0c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2b4c0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2b4c10: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2b4c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b4c14: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2b4c14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2b4c18: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2b4c18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b4c1c: 0x4600bdc7  neg.s       $f23, $f23
    ctx->pc = 0x2b4c1cu;
    ctx->f[23] = FPU_NEG_S(ctx->f[23]);
    // 0x2b4c20: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2b4c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b4c24: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x2b4c24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b4c28: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x2b4c28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b4c2c: 0xe6170024  swc1        $f23, 0x24($s0)
    ctx->pc = 0x2b4c2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2b4c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4c34: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x2b4c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b4c38: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2b4c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b4c3c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4c40: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4c44: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4c48: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C48u;
        // 0x2b4c4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4C50u;
}
