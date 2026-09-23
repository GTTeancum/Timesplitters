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

// Function: lobsterPropTick
// Address: 0x269fc8 - 0x26a32c
void lobsterPropTick_0x269fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lobsterPropTick_0x269fc8");
#endif

    switch (ctx->pc) {
        case 0x26a0c0u: goto label_26a0c0;
        case 0x26a0e8u: goto label_26a0e8;
        case 0x26a0fcu: goto label_26a0fc;
        case 0x26a158u: goto label_26a158;
        case 0x26a17cu: goto label_26a17c;
        case 0x26a18cu: goto label_26a18c;
        case 0x26a1acu: goto label_26a1ac;
        case 0x26a1bcu: goto label_26a1bc;
        case 0x26a1e4u: goto label_26a1e4;
        case 0x26a208u: goto label_26a208;
        case 0x26a218u: goto label_26a218;
        case 0x26a238u: goto label_26a238;
        case 0x26a248u: goto label_26a248;
        case 0x26a270u: goto label_26a270;
        case 0x26a294u: goto label_26a294;
        case 0x26a2a4u: goto label_26a2a4;
        case 0x26a2c4u: goto label_26a2c4;
        case 0x26a2d4u: goto label_26a2d4;
        case 0x26a2e8u: goto label_26a2e8;
        case 0x26a2fcu: goto label_26a2fc;
        default: break;
    }

    ctx->pc = 0x269fc8u;

    // 0x269fc8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x269fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x269fcc: 0xc7839da8  lwc1        $f3, -0x6258($gp)
    ctx->pc = 0x269fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269fd0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x269fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x269fd4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x269fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x269fd8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x269fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x269fdc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x269fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x269fe0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x269fe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269fe4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x269fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x269fe8: 0x24c65c60  addiu       $a2, $a2, 0x5C60
    ctx->pc = 0x269fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23648));
    // 0x269fec: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x269fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x269ff0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x269ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269ff4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x269ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x269ff8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x269ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x269ffc: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x269ffcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x26a000: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x26a000u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x26a004: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x26a004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x26a008: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x26a008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x26a00c: 0xc7808400  lwc1        $f0, -0x7C00($gp)
    ctx->pc = 0x26a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a010: 0x8e950160  lw          $s5, 0x160($s4)
    ctx->pc = 0x26a010u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
    // 0x26a014: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x26a014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x26a018: 0xc7828404  lwc1        $f2, -0x7BFC($gp)
    ctx->pc = 0x26a018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a01c: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x26a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a020: 0xc7858408  lwc1        $f5, -0x7BF8($gp)
    ctx->pc = 0x26a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26a024: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x26a024u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x26a028: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a02c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26a02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26a030: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26a030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26a034: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x26a034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x26a038: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x26a038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26a03c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x26a03cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x26a040: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x26a040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x26a044: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x26a044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x26a048: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x26a048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x26a04c: 0x3c01c20c  lui         $at, 0xC20C
    ctx->pc = 0x26a04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49676 << 16));
    // 0x26a050: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26a050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a054: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x26a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x26a058: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x26a058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x26a05c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x26a05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x26a060: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26a060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26a064: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x26a064u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x26a068: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x26a06c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x26a06cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a070: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a074: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26a074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26a078: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x26a078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26a07c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26a080: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x26a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26a084: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x26a084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x26a088: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a08c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a090: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26a094: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x26a094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26a098: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x26a098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x26a09c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x26a09cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x26a0a0: 0xe6a1006c  swc1        $f1, 0x6C($s5)
    ctx->pc = 0x26a0a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    // 0x26a0a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a0a8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x26a0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x26a0ac: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x26a0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
    // 0x26a0b0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x26a0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a0b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x26a0b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26a0b8: 0xc09829e  jal         func_260A78
    ctx->pc = 0x26A0B8u;
    SET_GPR_U32(ctx, 31, 0x26A0C0u);
    ctx->pc = 0x26A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A0B8u;
    // 0x26a0bc: 0xe6a10074  swc1        $f1, 0x74($s5) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x26A0B8u, 0x26A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A0C0u;
label_26a0c0:
    // 0x26a0c0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26a0c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x26a0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x26a0c8: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x26A0C8u;
    {
        const bool branch_taken_0x26a0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0C8u;
        // 0x26a0cc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0c8) {
            ctx->pc = 0x26A300u;
            goto label_26a300;
        }
    }
    ctx->pc = 0x26A0D0u;
    // 0x26a0d0: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x26a0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x26a0d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26a0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26a0dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a0e0: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26A0E0u;
    {
        const bool branch_taken_0x26a0e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0E0u;
        // 0x26a0e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0e0) {
            ctx->pc = 0x26A114u;
            goto label_26a114;
        }
    }
    ctx->pc = 0x26A0E8u;
label_26a0e8:
    // 0x26a0e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26a0ec: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x26a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x26a0f0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x26a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26a0f4: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x26A0F4u;
    SET_GPR_U32(ctx, 31, 0x26A0FCu);
    ctx->pc = 0x26A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A0F4u;
    // 0x26a0f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x26A0F4u, 0x26A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A0FCu;
label_26a0fc:
    // 0x26a0fc: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x26a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x26a100: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26a104: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a108: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x26a108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26a10c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26A10Cu;
    {
        const bool branch_taken_0x26a10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A10Cu;
        // 0x26a110: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a10c) {
            ctx->pc = 0x26A0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a0e8;
        }
    }
    ctx->pc = 0x26A114u;
label_26a114:
    // 0x26a114: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x26a114u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26a118: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x26a118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26a11c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x26a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26a120: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x26a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26a124: 0x247300c0  addiu       $s3, $v1, 0xC0
    ctx->pc = 0x26a124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x26a128: 0xc796840c  lwc1        $f22, -0x7BF4($gp)
    ctx->pc = 0x26a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26a12c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x26a12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26a130: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x26a130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26a134: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26a134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26a138: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a13c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26a13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26a140: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x26a140u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26a144: 0x8e320048  lw          $s2, 0x48($s1)
    ctx->pc = 0x26a144u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x26a148: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x26a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a14c: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x26a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a150: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26A150u;
    SET_GPR_U32(ctx, 31, 0x26A158u);
    ctx->pc = 0x26A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A150u;
    // 0x26a154: 0xc64e0008  lwc1        $f14, 0x8($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26A150u, 0x26A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A158u;
label_26a158:
    // 0x26a158: 0xc6ac006c  lwc1        $f12, 0x6C($s5)
    ctx->pc = 0x26a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a15c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a160: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26a160u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x26a164: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x26a164u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x26a168: 0x0  nop
    ctx->pc = 0x26a168u;
    // NOP
    // 0x26a16c: 0x0  nop
    ctx->pc = 0x26a16cu;
    // NOP
    // 0x26a170: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x26a170u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x26a174: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26A174u;
    SET_GPR_U32(ctx, 31, 0x26A17Cu);
    ctx->pc = 0x26A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A174u;
    // 0x26a178: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26A174u, 0x26A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A17Cu;
label_26a17c:
    // 0x26a17c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a180: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26a180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a184: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26A184u;
    SET_GPR_U32(ctx, 31, 0x26A18Cu);
    ctx->pc = 0x26A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A184u;
    // 0x26a188: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26A184u, 0x26A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A18Cu;
label_26a18c:
    // 0x26a18c: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x26a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26a190: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a194: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x26a194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a198: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x26a198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a19c: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26a19cu;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26a1a0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26a1a0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26a1a4: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26A1A4u;
    SET_GPR_U32(ctx, 31, 0x26A1ACu);
    ctx->pc = 0x26A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1A4u;
    // 0x26a1a8: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26A1A4u, 0x26A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1ACu;
label_26a1ac:
    // 0x26a1ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26a1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1b4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26A1B4u;
    SET_GPR_U32(ctx, 31, 0x26A1BCu);
    ctx->pc = 0x26A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1B4u;
    // 0x26a1b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26A1B4u, 0x26A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1BCu;
label_26a1bc:
    // 0x26a1bc: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x26a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x26a1c0: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x26a1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x26a1c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26a1c8: 0x2612003c  addiu       $s2, $s0, 0x3C
    ctx->pc = 0x26a1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x26a1cc: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x26a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a1d0: 0x24730140  addiu       $s3, $v1, 0x140
    ctx->pc = 0x26a1d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x26a1d4: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x26a1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a1d8: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x26a1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26a1dc: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26A1DCu;
    SET_GPR_U32(ctx, 31, 0x26A1E4u);
    ctx->pc = 0x26A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1DCu;
    // 0x26a1e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26A1DCu, 0x26A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1E4u;
label_26a1e4:
    // 0x26a1e4: 0xc6ad0070  lwc1        $f13, 0x70($s5)
    ctx->pc = 0x26a1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a1e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26a1ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26a1f0: 0x46166b42  mul.s       $f13, $f13, $f22
    ctx->pc = 0x26a1f0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x26a1f4: 0x0  nop
    ctx->pc = 0x26a1f4u;
    // NOP
    // 0x26a1f8: 0x0  nop
    ctx->pc = 0x26a1f8u;
    // NOP
    // 0x26a1fc: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x26a1fcu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x26a200: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26A200u;
    SET_GPR_U32(ctx, 31, 0x26A208u);
    ctx->pc = 0x26A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A200u;
    // 0x26a204: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26A200u, 0x26A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A208u;
label_26a208:
    // 0x26a208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a20c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26a20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a210: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26A210u;
    SET_GPR_U32(ctx, 31, 0x26A218u);
    ctx->pc = 0x26A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A210u;
    // 0x26a214: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26A210u, 0x26A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A218u;
label_26a218:
    // 0x26a218: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x26a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26a21c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a220: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x26a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a224: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x26a224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a228: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26a228u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26a22c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26a22cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26a230: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26A230u;
    SET_GPR_U32(ctx, 31, 0x26A238u);
    ctx->pc = 0x26A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A230u;
    // 0x26a234: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26A230u, 0x26A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A238u;
label_26a238:
    // 0x26a238: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a23c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26a23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a240: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26A240u;
    SET_GPR_U32(ctx, 31, 0x26A248u);
    ctx->pc = 0x26A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A240u;
    // 0x26a244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26A240u, 0x26A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A248u;
label_26a248:
    // 0x26a248: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x26a248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x26a24c: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x26a24cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x26a250: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26a254: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x26a254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x26a258: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x26a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a25c: 0x24730200  addiu       $s3, $v1, 0x200
    ctx->pc = 0x26a25cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x26a260: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x26a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a264: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x26a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26a268: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26A268u;
    SET_GPR_U32(ctx, 31, 0x26A270u);
    ctx->pc = 0x26A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A268u;
    // 0x26a26c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26A268u, 0x26A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A270u;
label_26a270:
    // 0x26a270: 0xc6ad0074  lwc1        $f13, 0x74($s5)
    ctx->pc = 0x26a270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a274: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26a274u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26a278: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a27c: 0x46166b42  mul.s       $f13, $f13, $f22
    ctx->pc = 0x26a27cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x26a280: 0x0  nop
    ctx->pc = 0x26a280u;
    // NOP
    // 0x26a284: 0x0  nop
    ctx->pc = 0x26a284u;
    // NOP
    // 0x26a288: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x26a288u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x26a28c: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x26A28Cu;
    SET_GPR_U32(ctx, 31, 0x26A294u);
    ctx->pc = 0x26A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A28Cu;
    // 0x26a290: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x26A28Cu, 0x26A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A294u;
label_26a294:
    // 0x26a294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a298: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26a298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a29c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26A29Cu;
    SET_GPR_U32(ctx, 31, 0x26A2A4u);
    ctx->pc = 0x26A2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A29Cu;
    // 0x26a2a0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26A29Cu, 0x26A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2A4u;
label_26a2a4:
    // 0x26a2a4: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x26a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a2a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2ac: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x26a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26a2b0: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x26a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a2b4: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26a2b4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26a2b8: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x26a2b8u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x26a2bc: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26A2BCu;
    SET_GPR_U32(ctx, 31, 0x26A2C4u);
    ctx->pc = 0x26A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A2BCu;
    // 0x26a2c0: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26A2BCu, 0x26A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2C4u;
label_26a2c4:
    // 0x26a2c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26a2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2cc: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x26A2CCu;
    SET_GPR_U32(ctx, 31, 0x26A2D4u);
    ctx->pc = 0x26A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A2CCu;
    // 0x26a2d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x26A2CCu, 0x26A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2D4u;
label_26a2d4:
    // 0x26a2d4: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x26a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x26a2d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26a2dc: 0x24850140  addiu       $a1, $a0, 0x140
    ctx->pc = 0x26a2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x26a2e0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x26A2E0u;
    SET_GPR_U32(ctx, 31, 0x26A2E8u);
    ctx->pc = 0x26A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A2E0u;
    // 0x26a2e4: 0x24840180  addiu       $a0, $a0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x26A2E0u, 0x26A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2E8u;
label_26a2e8:
    // 0x26a2e8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x26a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x26a2ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26a2f0: 0x24850200  addiu       $a1, $a0, 0x200
    ctx->pc = 0x26a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x26a2f4: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x26A2F4u;
    SET_GPR_U32(ctx, 31, 0x26A2FCu);
    ctx->pc = 0x26A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A2F4u;
    // 0x26a2f8: 0x24840240  addiu       $a0, $a0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x26A2F4u, 0x26A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2FCu;
label_26a2fc:
    // 0x26a2fc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x26a2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26a300:
    // 0x26a300: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x26a300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26a304: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x26a304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26a308: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x26a308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a30c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x26a30cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a310: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x26a310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a314: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x26a314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a318: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x26a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26a31c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x26a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26a320: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x26a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a324: 0x3e00008  jr          $ra
    ctx->pc = 0x26A324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A324u;
        // 0x26a328: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A32Cu;
}
