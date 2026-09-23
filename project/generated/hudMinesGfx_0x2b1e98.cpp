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

// Function: hudMinesGfx
// Address: 0x2b1e98 - 0x2b2254
void hudMinesGfx_0x2b1e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudMinesGfx_0x2b1e98");
#endif

    switch (ctx->pc) {
        case 0x2b1ed8u: goto label_2b1ed8;
        case 0x2b1ef4u: goto label_2b1ef4;
        case 0x2b1f10u: goto label_2b1f10;
        case 0x2b1f9cu: goto label_2b1f9c;
        case 0x2b1facu: goto label_2b1fac;
        case 0x2b1fbcu: goto label_2b1fbc;
        case 0x2b1fc4u: goto label_2b1fc4;
        case 0x2b1ff0u: goto label_2b1ff0;
        case 0x2b2030u: goto label_2b2030;
        case 0x2b2098u: goto label_2b2098;
        case 0x2b20a8u: goto label_2b20a8;
        case 0x2b20b8u: goto label_2b20b8;
        case 0x2b20c0u: goto label_2b20c0;
        case 0x2b20ecu: goto label_2b20ec;
        case 0x2b212cu: goto label_2b212c;
        case 0x2b2194u: goto label_2b2194;
        case 0x2b21a4u: goto label_2b21a4;
        case 0x2b21b4u: goto label_2b21b4;
        case 0x2b21bcu: goto label_2b21bc;
        case 0x2b21e8u: goto label_2b21e8;
        case 0x2b2228u: goto label_2b2228;
        default: break;
    }

    ctx->pc = 0x2b1e98u;

    // 0x2b1e98: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b1e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b1e9c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2b1e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2b1ea0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b1ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b1ea4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b1ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1eac: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2b1eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2b1eb0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b1eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2b1eb4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b1eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b1eb8: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2b1eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2b1ebc: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2b1ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2b1ec0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2b1ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2b1ec4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2b1ec8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2b1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2b1ecc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2b1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2b1ed0: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2B1ED0u;
    SET_GPR_U32(ctx, 31, 0x2B1ED8u);
    ctx->pc = 0x2B1ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1ED0u;
    // 0x2b1ed4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2B1ED0u, 0x2B1ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1ED8u;
label_2b1ed8:
    // 0x2b1ed8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2b1ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b1edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ee0: 0x38510001  xori        $s1, $v0, 0x1
    ctx->pc = 0x2b1ee0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b1ee4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2b1ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1ee8: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2b1ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2b1eec: 0xc0a29a2  jal         func_28A688
    ctx->pc = 0x2B1EECu;
    SET_GPR_U32(ctx, 31, 0x2B1EF4u);
    ctx->pc = 0x2B1EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EECu;
    // 0x2b1ef0: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A688u, 0x2B1EECu, 0x2B1EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EF4u;
label_2b1ef4:
    // 0x2b1ef4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b1ef8: 0x245099f0  addiu       $s0, $v0, -0x6610
    ctx->pc = 0x2b1ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x2b1efc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b1efcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3299F4u));
    // 0x2b1f00: 0x2462ffdc  addiu       $v0, $v1, -0x24
    ctx->pc = 0x2b1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967260));
    // 0x2b1f04: 0x2476ffc2  addiu       $s6, $v1, -0x3E
    ctx->pc = 0x2b1f04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967234));
    // 0x2b1f08: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2B1F08u;
    SET_GPR_U32(ctx, 31, 0x2B1F10u);
    ctx->pc = 0x2B1F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F08u;
    // 0x2b1f0c: 0x51b00b  movn        $s6, $v0, $s1 (Delay Slot)
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2B1F08u, 0x2B1F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F10u;
label_2b1f10:
    // 0x2b1f10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b1f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1f14: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1F14u;
    {
        const bool branch_taken_0x2b1f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F14u;
        // 0x2b1f18: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f14) {
            ctx->pc = 0x2B1F20u;
            goto label_2b1f20;
        }
    }
    ctx->pc = 0x2B1F1Cu;
    // 0x2b1f1c: 0x24d6ffce  addiu       $s6, $a2, -0x32
    ctx->pc = 0x2b1f1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967246));
label_2b1f20:
    // 0x2b1f20: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2b1f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2b1f24: 0x24c4fffa  addiu       $a0, $a2, -0x6
    ctx->pc = 0x2b1f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
    // 0x2b1f28: 0x24d7fff2  addiu       $s7, $a2, -0xE
    ctx->pc = 0x2b1f28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967282));
    // 0x2b1f2c: 0x24150016  addiu       $s5, $zero, 0x16
    ctx->pc = 0x2b1f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b1f30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b1f34: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1f38: 0x91b80b  movn        $s7, $a0, $s1
    ctx->pc = 0x2b1f38u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 4));
    // 0x2b1f3c: 0x1860003c  blez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2B1F3Cu;
    {
        const bool branch_taken_0x2b1f3c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F3Cu;
        // 0x2b1f40: 0x45a80b  movn        $s5, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f3c) {
            ctx->pc = 0x2B2030u;
            goto label_2b2030;
        }
    }
    ctx->pc = 0x2B1F44u;
    // 0x2b1f44: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x2b1f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1f48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b1f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b1f4c: 0xc7818f94  lwc1        $f1, -0x706C($gp)
    ctx->pc = 0x2b1f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1f50: 0xc7838f98  lwc1        $f3, -0x7068($gp)
    ctx->pc = 0x2b1f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b1f54: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b1f58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b1f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b1f5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b1f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1f60: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x2b1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x2b1f64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b1f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b1f68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1f6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b1f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b1f70: 0x275a021  addu        $s4, $s3, $s5
    ctx->pc = 0x2b1f70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x2b1f74: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b1f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b1f78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b1f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b1f7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b1f7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b1f80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b1f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b1f84: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2b1f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2b1f88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b1f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f90: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2b1f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1f94: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2B1F94u;
    SET_GPR_U32(ctx, 31, 0x2B1F9Cu);
    ctx->pc = 0x2B1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F94u;
    // 0x2b1f98: 0x46046300  add.s       $f12, $f12, $f4 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2B1F94u, 0x2B1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F9Cu;
label_2b1f9c:
    // 0x2b1f9c: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x2b1f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x2b1fa0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2b1fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2b1fa4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B1FA4u;
    SET_GPR_U32(ctx, 31, 0x2B1FACu);
    ctx->pc = 0x2B1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FA4u;
    // 0x2b1fa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B1FA4u, 0x2B1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FACu;
label_2b1fac:
    // 0x2b1fac: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2b1facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2b1fb0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2b1fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2b1fb4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B1FB4u;
    SET_GPR_U32(ctx, 31, 0x2B1FBCu);
    ctx->pc = 0x2B1FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FB4u;
    // 0x2b1fb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B1FB4u, 0x2B1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FBCu;
label_2b1fbc:
    // 0x2b1fbc: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2B1FBCu;
    SET_GPR_U32(ctx, 31, 0x2B1FC4u);
    ctx->pc = 0x2B1FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FBCu;
    // 0x2b1fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2B1FBCu, 0x2B1FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FC4u;
label_2b1fc4:
    // 0x2b1fc4: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x2b1fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x2b1fc8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2b1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b1fcc: 0x8ca4af74  lw          $a0, -0x508C($a1)
    ctx->pc = 0x2b1fccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FEAF74u));
    // 0x2b1fd0: 0x2450001b  addiu       $s0, $v0, 0x1B
    ctx->pc = 0x2b1fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27));
    // 0x2b1fd4: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x2b1fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b1fd8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2b1fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b1fdc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b1fe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1fe4: 0x94720002  lhu         $s2, 0x2($v1)
    ctx->pc = 0x2b1fe4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b1fe8: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2B1FE8u;
    SET_GPR_U32(ctx, 31, 0x2B1FF0u);
    ctx->pc = 0x2B1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1FE8u;
    // 0x2b1fec: 0x94710000  lhu         $s1, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2B1FE8u, 0x2B1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FF0u;
label_2b1ff0:
    // 0x2b1ff0: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x2b1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2b1ff4: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x2b1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x2b1ff8: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x2b1ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x2b1ffc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b1ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2000: 0x3610007f  ori         $s0, $s0, 0x7F
    ctx->pc = 0x2b2000u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)127);
    // 0x2b2004: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b2004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2008: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b2008u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2b200c: 0x115100  sll         $t2, $s1, 4
    ctx->pc = 0x2b200cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b2010: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2b2010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2b2014: 0x125900  sll         $t3, $s2, 4
    ctx->pc = 0x2b2014u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b2018: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b2018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b201c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2020: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2b2020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b2024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2028: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x2B2028u;
    SET_GPR_U32(ctx, 31, 0x2B2030u);
    ctx->pc = 0x2B202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2028u;
    // 0x2b202c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x2B2028u, 0x2B2030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2030u;
label_2b2030:
    // 0x2b2030: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x2b2030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b2034: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2b2034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2b2038: 0x1860003c  blez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2B2038u;
    {
        const bool branch_taken_0x2b2038 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2038u;
        // 0x2b203c: 0x559821  addu        $s3, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2038) {
            ctx->pc = 0x2B212Cu;
            goto label_2b212c;
        }
    }
    ctx->pc = 0x2B2040u;
    // 0x2b2040: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x2b2040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b2044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b2048: 0xc7818f9c  lwc1        $f1, -0x7064($gp)
    ctx->pc = 0x2b2048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b204c: 0xc7838fa0  lwc1        $f3, -0x7060($gp)
    ctx->pc = 0x2b204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b2050: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b2050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b2054: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b2054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b2058: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b2058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b205c: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x2b205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x2b2060: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b2060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b2064: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b2068: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b2068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b206c: 0x275a021  addu        $s4, $s3, $s5
    ctx->pc = 0x2b206cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x2b2070: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b2070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b2074: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b2074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b2078: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2078u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b207c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b207cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b2080: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2b2080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2b2084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b208c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2b208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b2090: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2B2090u;
    SET_GPR_U32(ctx, 31, 0x2B2098u);
    ctx->pc = 0x2B2094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2090u;
    // 0x2b2094: 0x46046300  add.s       $f12, $f12, $f4 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2B2090u, 0x2B2098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2098u;
label_2b2098:
    // 0x2b2098: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x2b2098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x2b209c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2b209cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2b20a0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B20A0u;
    SET_GPR_U32(ctx, 31, 0x2B20A8u);
    ctx->pc = 0x2B20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B20A0u;
    // 0x2b20a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B20A0u, 0x2B20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B20A8u;
label_2b20a8:
    // 0x2b20a8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2b20a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2b20ac: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2b20acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2b20b0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B20B0u;
    SET_GPR_U32(ctx, 31, 0x2B20B8u);
    ctx->pc = 0x2B20B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B20B0u;
    // 0x2b20b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B20B0u, 0x2B20B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B20B8u;
label_2b20b8:
    // 0x2b20b8: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2B20B8u;
    SET_GPR_U32(ctx, 31, 0x2B20C0u);
    ctx->pc = 0x2B20BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B20B8u;
    // 0x2b20bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2B20B8u, 0x2B20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B20C0u;
label_2b20c0:
    // 0x2b20c0: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x2b20c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x2b20c4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2b20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b20c8: 0x8ca4af6c  lw          $a0, -0x5094($a1)
    ctx->pc = 0x2b20c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FEAF6Cu));
    // 0x2b20cc: 0x2450001b  addiu       $s0, $v0, 0x1B
    ctx->pc = 0x2b20ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27));
    // 0x2b20d0: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x2b20d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b20d4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2b20d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b20d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b20dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b20e0: 0x94720002  lhu         $s2, 0x2($v1)
    ctx->pc = 0x2b20e0u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b20e4: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2B20E4u;
    SET_GPR_U32(ctx, 31, 0x2B20ECu);
    ctx->pc = 0x2B20E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B20E4u;
    // 0x2b20e8: 0x94710000  lhu         $s1, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2B20E4u, 0x2B20ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B20ECu;
label_2b20ec:
    // 0x2b20ec: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x2b20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2b20f0: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x2b20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x2b20f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x2b20f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x2b20f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b20f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b20fc: 0x3610007f  ori         $s0, $s0, 0x7F
    ctx->pc = 0x2b20fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)127);
    // 0x2b2100: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b2100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2104: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b2104u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2b2108: 0x115100  sll         $t2, $s1, 4
    ctx->pc = 0x2b2108u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b210c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2b210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2b2110: 0x125900  sll         $t3, $s2, 4
    ctx->pc = 0x2b2110u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b2114: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b2114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2118: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b2118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b211c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2b211cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b2120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2124: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x2B2124u;
    SET_GPR_U32(ctx, 31, 0x2B212Cu);
    ctx->pc = 0x2B2128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2124u;
    // 0x2b2128: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x2B2124u, 0x2B212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B212Cu;
label_2b212c:
    // 0x2b212c: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x2b212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b2130: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2134: 0x1860003c  blez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2B2134u;
    {
        const bool branch_taken_0x2b2134 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2134u;
        // 0x2b2138: 0x559821  addu        $s3, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2134) {
            ctx->pc = 0x2B2228u;
            goto label_2b2228;
        }
    }
    ctx->pc = 0x2B213Cu;
    // 0x2b213c: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x2b213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2140: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b2140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b2144: 0xc7818fa4  lwc1        $f1, -0x705C($gp)
    ctx->pc = 0x2b2144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2148: 0xc7838fa8  lwc1        $f3, -0x7058($gp)
    ctx->pc = 0x2b2148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b214c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b214cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b2150: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b2150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b2154: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b2154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b2158: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x2b2158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x2b215c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b215cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b2160: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b2164: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b2164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b2168: 0x275a021  addu        $s4, $s3, $s5
    ctx->pc = 0x2b2168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x2b216c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b216cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b2170: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b2170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b2174: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b2178: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b2178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b217c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2b217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2b2180: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2188: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2b2188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b218c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2B218Cu;
    SET_GPR_U32(ctx, 31, 0x2B2194u);
    ctx->pc = 0x2B2190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B218Cu;
    // 0x2b2190: 0x46046300  add.s       $f12, $f12, $f4 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2B218Cu, 0x2B2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2194u;
label_2b2194:
    // 0x2b2194: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x2b2194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x2b2198: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2b2198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2b219c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B219Cu;
    SET_GPR_U32(ctx, 31, 0x2B21A4u);
    ctx->pc = 0x2B21A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B219Cu;
    // 0x2b21a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B219Cu, 0x2B21A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21A4u;
label_2b21a4:
    // 0x2b21a4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2b21a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2b21a8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2b21a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2b21ac: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B21ACu;
    SET_GPR_U32(ctx, 31, 0x2B21B4u);
    ctx->pc = 0x2B21B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B21ACu;
    // 0x2b21b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B21ACu, 0x2B21B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21B4u;
label_2b21b4:
    // 0x2b21b4: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2B21B4u;
    SET_GPR_U32(ctx, 31, 0x2B21BCu);
    ctx->pc = 0x2B21B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B21B4u;
    // 0x2b21b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2B21B4u, 0x2B21BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21BCu;
label_2b21bc:
    // 0x2b21bc: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x2b21bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x2b21c0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2b21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b21c4: 0x8ca4af70  lw          $a0, -0x5090($a1)
    ctx->pc = 0x2b21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FEAF70u));
    // 0x2b21c8: 0x2450001b  addiu       $s0, $v0, 0x1B
    ctx->pc = 0x2b21c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27));
    // 0x2b21cc: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x2b21ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b21d0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2b21d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b21d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b21d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b21d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b21dc: 0x94720002  lhu         $s2, 0x2($v1)
    ctx->pc = 0x2b21dcu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b21e0: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2B21E0u;
    SET_GPR_U32(ctx, 31, 0x2B21E8u);
    ctx->pc = 0x2B21E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B21E0u;
    // 0x2b21e4: 0x94710000  lhu         $s1, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2B21E0u, 0x2B21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21E8u;
label_2b21e8:
    // 0x2b21e8: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x2b21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2b21ec: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x2b21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x2b21f0: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x2b21f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x2b21f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b21f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b21f8: 0x3610007f  ori         $s0, $s0, 0x7F
    ctx->pc = 0x2b21f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)127);
    // 0x2b21fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b21fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2200: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b2200u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2b2204: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b2204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2208: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2b2208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2b220c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2b220cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2210: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b2210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2214: 0x115100  sll         $t2, $s1, 4
    ctx->pc = 0x2b2214u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b2218: 0x125900  sll         $t3, $s2, 4
    ctx->pc = 0x2b2218u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b221c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b221cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2220: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x2B2220u;
    SET_GPR_U32(ctx, 31, 0x2B2228u);
    ctx->pc = 0x2B2224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2220u;
    // 0x2b2224: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x2B2220u, 0x2B2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2228u;
label_2b2228:
    // 0x2b2228: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b2228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b222c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2b222cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b2230: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2b2230u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b2234: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2b2234u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b2238: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2b2238u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b223c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2b223cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b2240: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b2240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2244: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b2244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2248: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b2248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b224c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B224Cu;
        // 0x2b2250: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B224Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2254u;
}
