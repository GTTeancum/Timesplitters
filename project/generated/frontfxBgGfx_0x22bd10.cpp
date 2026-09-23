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

// Function: frontfxBgGfx
// Address: 0x22bd10 - 0x22be54
void frontfxBgGfx_0x22bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxBgGfx_0x22bd10");
#endif

    switch (ctx->pc) {
        case 0x22bdb8u: goto label_22bdb8;
        case 0x22be18u: goto label_22be18;
        case 0x22be20u: goto label_22be20;
        case 0x22be28u: goto label_22be28;
        default: break;
    }

    ctx->pc = 0x22bd10u;

    // 0x22bd10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22bd14: 0xc7839fc4  lwc1        $f3, -0x603C($gp)
    ctx->pc = 0x22bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22bd18: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x22bd18u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22bd1c: 0x3c051515  lui         $a1, 0x1515
    ctx->pc = 0x22bd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5397 << 16));
    // 0x22bd20: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x22bd20u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22bd24: 0x34a5256f  ori         $a1, $a1, 0x256F
    ctx->pc = 0x22bd24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9583);
    // 0x22bd28: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x22bd28u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22bd2c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x22bd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x22bd30: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x22bd30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22bd34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x22bd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22bd38: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x22bd38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22bd3c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x22bd3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22bd40: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22bd40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22bd44: 0xc795815c  lwc1        $f21, -0x7EA4($gp)
    ctx->pc = 0x22bd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22bd48: 0xc79a8160  lwc1        $f26, -0x7EA0($gp)
    ctx->pc = 0x22bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x22bd4c: 0xc7948164  lwc1        $f20, -0x7E9C($gp)
    ctx->pc = 0x22bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22bd50: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x22bd50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x22bd54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22bd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22bd58: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x22bd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x22bd5c: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x22bd5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x22bd60: 0xc7978168  lwc1        $f23, -0x7E98($gp)
    ctx->pc = 0x22bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22bd64: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x22bd64u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x22bd68: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x22bd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x22bd6c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x22bd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x22bd70: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x22bd70u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x22bd74: 0xc799816c  lwc1        $f25, -0x7E94($gp)
    ctx->pc = 0x22bd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x22bd78: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x22bd78u;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
    // 0x22bd7c: 0xc7829fc8  lwc1        $f2, -0x6038($gp)
    ctx->pc = 0x22bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22bd80: 0x4600c486  mov.s       $f18, $f24
    ctx->pc = 0x22bd80u;
    ctx->f[18] = FPU_MOV_S(ctx->f[24]);
    // 0x22bd84: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x22bd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x22bd88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22bd88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bd8c: 0x4600ccc6  mov.s       $f19, $f25
    ctx->pc = 0x22bd8cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[25]);
    // 0x22bd90: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x22bd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x22bd94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22bd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bd98: 0x8f849f88  lw          $a0, -0x6078($gp)
    ctx->pc = 0x22bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942600)));
    // 0x22bd9c: 0xc78c8170  lwc1        $f12, -0x7E90($gp)
    ctx->pc = 0x22bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22bda0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22bda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22bda4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x22bda4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22bda8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x22bda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22bdac: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x22bdacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22bdb0: 0xc08adae  jal         func_22B6B8
    ctx->pc = 0x22BDB0u;
    SET_GPR_U32(ctx, 31, 0x22BDB8u);
    ctx->pc = 0x22BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BDB0u;
    // 0x22bdb4: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B6B8u, 0x22BDB0u, 0x22BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDB8u;
label_22bdb8:
    // 0x22bdb8: 0xc7829fcc  lwc1        $f2, -0x6034($gp)
    ctx->pc = 0x22bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22bdbc: 0x3c051f1f  lui         $a1, 0x1F1F
    ctx->pc = 0x22bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7967 << 16));
    // 0x22bdc0: 0xc7839fd0  lwc1        $f3, -0x6030($gp)
    ctx->pc = 0x22bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22bdc4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22bdc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22bdc8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x22bdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x22bdcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22bdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bdd0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x22bdd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x22bdd4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22bdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22bdd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22bdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bddc: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x22bddcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x22bde0: 0x8f849f8c  lw          $a0, -0x6074($gp)
    ctx->pc = 0x22bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942604)));
    // 0x22bde4: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x22bde4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x22bde8: 0xc78e8174  lwc1        $f14, -0x7E8C($gp)
    ctx->pc = 0x22bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x22bdec: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x22bdecu;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
    // 0x22bdf0: 0x4600c486  mov.s       $f18, $f24
    ctx->pc = 0x22bdf0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[24]);
    // 0x22bdf4: 0x4600ccc6  mov.s       $f19, $f25
    ctx->pc = 0x22bdf4u;
    ctx->f[19] = FPU_MOV_S(ctx->f[25]);
    // 0x22bdf8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22bdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22bdfc: 0x34a52f5f  ori         $a1, $a1, 0x2F5F
    ctx->pc = 0x22bdfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12127);
    // 0x22be00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x22be00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22be04: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x22be04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22be08: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x22be08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22be0c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x22be0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22be10: 0xc08adae  jal         func_22B6B8
    ctx->pc = 0x22BE10u;
    SET_GPR_U32(ctx, 31, 0x22BE18u);
    ctx->pc = 0x22BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE10u;
    // 0x22be14: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B6B8u, 0x22BE10u, 0x22BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE18u;
label_22be18:
    // 0x22be18: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22BE18u;
    SET_GPR_U32(ctx, 31, 0x22BE20u);
    ctx->pc = 0x22BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE18u;
    // 0x22be1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22BE18u, 0x22BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE20u;
label_22be20:
    // 0x22be20: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x22BE20u;
    SET_GPR_U32(ctx, 31, 0x22BE28u);
    ctx->pc = 0x22BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE20u;
    // 0x22be24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x22BE20u, 0x22BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE28u;
label_22be28:
    // 0x22be28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22be28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22be2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22be30: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x22be30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x22be34: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x22be34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x22be38: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x22be38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x22be3c: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x22be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22be40: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x22be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22be44: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x22be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22be48: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22be48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22be4c: 0x80adfaa  j           func_2B7EA8
    ctx->pc = 0x22BE4Cu;
    ctx->pc = 0x22BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE4Cu;
    // 0x22be50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    dlSetBlend_0x2b7ea8(rdram, ctx, runtime); return;
    ctx->pc = 0x22BE54u;
}
