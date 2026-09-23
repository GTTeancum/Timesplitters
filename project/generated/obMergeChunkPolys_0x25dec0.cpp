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

// Function: obMergeChunkPolys
// Address: 0x25dec0 - 0x25e4d4
void obMergeChunkPolys_0x25dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obMergeChunkPolys_0x25dec0");
#endif

    switch (ctx->pc) {
        case 0x25df20u: goto label_25df20;
        case 0x25df58u: goto label_25df58;
        case 0x25df80u: goto label_25df80;
        case 0x25e09cu: goto label_25e09c;
        case 0x25e288u: goto label_25e288;
        case 0x25e304u: goto label_25e304;
        case 0x25e3c8u: goto label_25e3c8;
        case 0x25e438u: goto label_25e438;
        default: break;
    }

    ctx->pc = 0x25dec0u;

    // 0x25dec0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x25dec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x25dec4: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x25dec4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dec8: 0xffb10140  sd          $s1, 0x140($sp)
    ctx->pc = 0x25dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
    // 0x25decc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25deccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ded0: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x25ded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x25ded4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x25ded4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ded8: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x25ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x25dedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25dedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dee0: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x25dee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
    // 0x25dee4: 0x3a0602d  daddu       $t4, $sp, $zero
    ctx->pc = 0x25dee4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dee8: 0xffb701a0  sd          $s7, 0x1A0($sp)
    ctx->pc = 0x25dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 23));
    // 0x25deec: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x25deecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25def0: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x25def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x25def4: 0x2419000c  addiu       $t9, $zero, 0xC
    ctx->pc = 0x25def4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25def8: 0xffb50180  sd          $s5, 0x180($sp)
    ctx->pc = 0x25def8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 21));
    // 0x25defc: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x25defcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25df00: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x25df00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x25df04: 0xffb30160  sd          $s3, 0x160($sp)
    ctx->pc = 0x25df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 19));
    // 0x25df08: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x25df08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x25df0c: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x25df0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x25df10: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x25df10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x25df14: 0xafa60094  sw          $a2, 0x94($sp)
    ctx->pc = 0x25df14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 6));
    // 0x25df18: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x25df18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x25df1c: 0x0  nop
    ctx->pc = 0x25df1cu;
    // NOP
label_25df20:
    // 0x25df20: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x25df20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df24: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x25df24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x25df28: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x25df28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x25df2c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x25df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25df30: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x25df30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25df34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25df34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25df38: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x25df38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25df3c: 0x791818  mult        $v1, $v1, $t9
    ctx->pc = 0x25df3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25df40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25df44: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x25df44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x25df48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25df48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25df4c: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x25df4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25df50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DF50u;
    {
        const bool branch_taken_0x25df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF50u;
        // 0x25df54: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df50) {
            ctx->pc = 0x25DF5Cu;
            goto label_25df5c;
        }
    }
    ctx->pc = 0x25DF58u;
label_25df58:
    // 0x25df58: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x25df58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_25df5c:
    // 0x25df5c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x25df5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x25df60: 0x30837fff  andi        $v1, $a0, 0x7FFF
    ctx->pc = 0x25df60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x25df64: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x25df64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x25df68: 0x247efffd  addiu       $fp, $v1, -0x3
    ctx->pc = 0x25df68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x25df6c: 0x13cf00a0  beq         $fp, $t7, . + 4 + (0xA0 << 2)
    ctx->pc = 0x25DF6Cu;
    {
        const bool branch_taken_0x25df6c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 15));
        ctx->pc = 0x25DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF6Cu;
        // 0x25df70: 0x30520001  andi        $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df6c) {
            ctx->pc = 0x25E1F0u;
            goto label_25e1f0;
        }
    }
    ctx->pc = 0x25DF74u;
    // 0x25df74: 0xc7948364  lwc1        $f20, -0x7C9C($gp)
    ctx->pc = 0x25df74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25df78: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x25df78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25df7c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x25df7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_25df80:
    // 0x25df80: 0x55ab008e  bnel        $t5, $t3, . + 4 + (0x8E << 2)
    ctx->pc = 0x25DF80u;
    {
        const bool branch_taken_0x25df80 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 11));
        if (branch_taken_0x25df80) {
            ctx->pc = 0x25DF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DF80u;
            // 0x25df84: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E1BCu;
            goto label_25e1bc;
        }
    }
    ctx->pc = 0x25DF88u;
    // 0x25df88: 0x24c40018  addiu       $a0, $a2, 0x18
    ctx->pc = 0x25df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x25df8c: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x25df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x25df90: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x25df90u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x25df94: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x25df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25df98: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x25df98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25df9c: 0x24d7000c  addiu       $s7, $a2, 0xC
    ctx->pc = 0x25df9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x25dfa0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x25dfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfa4: 0x26b60001  addiu       $s6, $s5, 0x1
    ctx->pc = 0x25dfa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25dfa8: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x25dfa8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x25dfac: 0x92280a  movz        $a1, $a0, $s2
    ctx->pc = 0x25dfacu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x25dfb0: 0x26a20002  addiu       $v0, $s5, 0x2
    ctx->pc = 0x25dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x25dfb4: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x25dfb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfb8: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x25dfb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfbc: 0x52980b  movn        $s3, $v0, $s2
    ctx->pc = 0x25dfbcu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x25dfc0: 0xe7a70060  swc1        $f7, 0x60($sp)
    ctx->pc = 0x25dfc0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25dfc4: 0x52a00a  movz        $s4, $v0, $s2
    ctx->pc = 0x25dfc4u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x25dfc8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x25dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dfcc: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x25dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25dfd0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x25dfd0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x25dfd4: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x25dfd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25dfd8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x25dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dfdc: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x25dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25dfe0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x25dfe0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x25dfe4: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x25dfe4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25dfe8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x25dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dfec: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x25dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25dff0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x25dff0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x25dff4: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x25dff4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25dff8: 0x46032982  mul.s       $f6, $f5, $f3
    ctx->pc = 0x25dff8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x25dffc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x25dffcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x25e000: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x25e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e004: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x25e004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e008: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25e008u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25e00c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x25e00cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x25e010: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x25e010u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x25e014: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x25e014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x25e018: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x25e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e01c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x25e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25e020: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25e020u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25e024: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25e024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25e028: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x25e028u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25e02c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x25e02cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x25e030: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x25e030u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x25e034: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25e034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25e038: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x25e038u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x25e03c: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x25e03cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x25e040: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x25e040u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x25e044: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x25e044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x25e048: 0xe7a60084  swc1        $f6, 0x84($sp)
    ctx->pc = 0x25e048u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x25e04c: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x25e04cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x25e050: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25e050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25e054: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x25e054u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x25e058: 0x0  nop
    ctx->pc = 0x25e058u;
    // NOP
    // 0x25e05c: 0x0  nop
    ctx->pc = 0x25e05cu;
    // NOP
    // 0x25e060: 0x460c0044  c1          0xC0044
    ctx->pc = 0x25e060u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x25e064: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x25e064u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e068: 0x0  nop
    ctx->pc = 0x25e068u;
    // NOP
    // 0x25e06c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x25E06Cu;
    {
        const bool branch_taken_0x25e06c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E06Cu;
        // 0x25e070: 0xe7a40080  swc1        $f4, 0x80($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e06c) {
            ctx->pc = 0x25E0C4u;
            goto label_25e0c4;
        }
    }
    ctx->pc = 0x25E074u;
    // 0x25e074: 0x7fa800a0  sq          $t0, 0xA0($sp)
    ctx->pc = 0x25e074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 8));
    // 0x25e078: 0x7fa900b0  sq          $t1, 0xB0($sp)
    ctx->pc = 0x25e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 9));
    // 0x25e07c: 0x7faa00c0  sq          $t2, 0xC0($sp)
    ctx->pc = 0x25e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 10));
    // 0x25e080: 0x7fab00d0  sq          $t3, 0xD0($sp)
    ctx->pc = 0x25e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 11));
    // 0x25e084: 0x7fac00e0  sq          $t4, 0xE0($sp)
    ctx->pc = 0x25e084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 12));
    // 0x25e088: 0x7fad00f0  sq          $t5, 0xF0($sp)
    ctx->pc = 0x25e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 13));
    // 0x25e08c: 0x7fae0100  sq          $t6, 0x100($sp)
    ctx->pc = 0x25e08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 14));
    // 0x25e090: 0x7faf0110  sq          $t7, 0x110($sp)
    ctx->pc = 0x25e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 15));
    // 0x25e094: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25E094u;
    SET_GPR_U32(ctx, 31, 0x25E09Cu);
    ctx->pc = 0x25E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E094u;
    // 0x25e098: 0x7fb90120  sq          $t9, 0x120($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25E094u, 0x25E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E09Cu;
label_25e09c:
    // 0x25e09c: 0x7bb90120  lq          $t9, 0x120($sp)
    ctx->pc = 0x25e09cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25e0a0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25e0a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25e0a4: 0x7baf0110  lq          $t7, 0x110($sp)
    ctx->pc = 0x25e0a4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25e0a8: 0x7bae0100  lq          $t6, 0x100($sp)
    ctx->pc = 0x25e0a8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25e0ac: 0x7bad00f0  lq          $t5, 0xF0($sp)
    ctx->pc = 0x25e0acu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25e0b0: 0x7bac00e0  lq          $t4, 0xE0($sp)
    ctx->pc = 0x25e0b0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25e0b4: 0x7bab00d0  lq          $t3, 0xD0($sp)
    ctx->pc = 0x25e0b4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25e0b8: 0x7baa00c0  lq          $t2, 0xC0($sp)
    ctx->pc = 0x25e0b8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25e0bc: 0x7ba900b0  lq          $t1, 0xB0($sp)
    ctx->pc = 0x25e0bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25e0c0: 0x7ba800a0  lq          $t0, 0xA0($sp)
    ctx->pc = 0x25e0c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25e0c4:
    // 0x25e0c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25e0c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25e0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e0cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x25e0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25e0d0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x25e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25e0d4: 0x0  nop
    ctx->pc = 0x25e0d4u;
    // NOP
    // 0x25e0d8: 0x0  nop
    ctx->pc = 0x25e0d8u;
    // NOP
    // 0x25e0dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25e0dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x25e0e0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x25e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25e0e4: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x25e0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25e0e8: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x25e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25e0ec: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x25e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25e0f0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x25e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e0f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e0f8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x25e0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25e0fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25e100: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25e100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25e104: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x25e104u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25e108: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25e108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25e10c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x25e10cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x25e110: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x25e110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x25e114: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x25e114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x25e118: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x25e118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25e11c: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x25e11cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x25e120: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x25e120u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x25e124: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x25e124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25e128: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x25e128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25e12c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x25e12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e130: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25e134: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e138: 0xa0750000  sb          $s5, 0x0($v1)
    ctx->pc = 0x25e138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x25e13c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x25e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25e140: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x25e140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25e144: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x25e144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e148: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25e14c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e150: 0xa0730001  sb          $s3, 0x1($v1)
    ctx->pc = 0x25e150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x25e154: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x25e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25e158: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x25e158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25e15c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x25e15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e160: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25e164: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e168: 0xa0740002  sb          $s4, 0x2($v1)
    ctx->pc = 0x25e168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x25e16c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x25e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e170: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x25e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e174: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x25e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25e178: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25e178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x25e17c: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x25e17cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25e180: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x25e180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x25e184: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x25e184u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x25e188: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x25e188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25e18c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25e18cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x25e190: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x25e190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x25e194: 0xe81018  mult        $v0, $a3, $t0
    ctx->pc = 0x25e194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e198: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25e198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25e19c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x25e19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x25e1a0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25e1a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25e1a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25e1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25e1a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25e1ac: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x25e1acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x25e1b0: 0xa4450002  sh          $a1, 0x2($v0)
    ctx->pc = 0x25e1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x25e1b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E1B4u;
    {
        const bool branch_taken_0x25e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1B4u;
        // 0x25e1b8: 0xa4460004  sh          $a2, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1b4) {
            ctx->pc = 0x25E1C4u;
            goto label_25e1c4;
        }
    }
    ctx->pc = 0x25E1BCu;
label_25e1bc:
    // 0x25e1bc: 0x24d7000c  addiu       $s7, $a2, 0xC
    ctx->pc = 0x25e1bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x25e1c0: 0x26b60001  addiu       $s6, $s5, 0x1
    ctx->pc = 0x25e1c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_25e1c4:
    // 0x25e1c4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x25e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25e1c8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x25e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25e1cc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x25e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x25e1d0: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x25e1d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e1d4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x25e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25e1d8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25e1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e1dc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x25e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x25e1e0: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x25e1e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x25e1e4: 0x17cfff66  bne         $fp, $t7, . + 4 + (-0x9A << 2)
    ctx->pc = 0x25E1E4u;
    {
        const bool branch_taken_0x25e1e4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 15));
        ctx->pc = 0x25E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1E4u;
        // 0x25e1e8: 0x1729023  subu        $s2, $t3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1e4) {
            ctx->pc = 0x25DF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25df80;
        }
    }
    ctx->pc = 0x25E1ECu;
    // 0x25e1ec: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x25e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_25e1f0:
    // 0x25e1f0: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x25e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x25e1f4: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x25e1f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x25e1f8: 0x1040ff57  beqz        $v0, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x25E1F8u;
    {
        const bool branch_taken_0x25e1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1F8u;
        // 0x25e1fc: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1f8) {
            ctx->pc = 0x25DF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25df58;
        }
    }
    ctx->pc = 0x25E200u;
    // 0x25e200: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x25e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25e204: 0x106000a7  beqz        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x25E204u;
    {
        const bool branch_taken_0x25e204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E204u;
        // 0x25e208: 0xdfbf01c0  ld          $ra, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e204) {
            ctx->pc = 0x25E4A4u;
            goto label_25e4a4;
        }
    }
    ctx->pc = 0x25E20Cu;
    // 0x25e20c: 0x55a00018  bnel        $t5, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x25E20Cu;
    {
        const bool branch_taken_0x25e20c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e20c) {
            ctx->pc = 0x25E210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E20Cu;
            // 0x25e210: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E270u;
            goto label_25e270;
        }
    }
    ctx->pc = 0x25E214u;
    // 0x25e214: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25e214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25e218: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x25E218u;
    {
        const bool branch_taken_0x25e218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e218) {
            ctx->pc = 0x25E21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E218u;
            // 0x25e21c: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E254u;
            goto label_25e254;
        }
    }
    ctx->pc = 0x25E220u;
    // 0x25e220: 0x791018  mult        $v0, $v1, $t9
    ctx->pc = 0x25e220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e224: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x25e224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25e228: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x25e228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x25e22c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x25e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25e230: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x25e230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x25e234: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25e238: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x25e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x25e23c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25e23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25e240: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x25e240u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25e244: 0x54800097  bnel        $a0, $zero, . + 4 + (0x97 << 2)
    ctx->pc = 0x25E244u;
    {
        const bool branch_taken_0x25e244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e244) {
            ctx->pc = 0x25E248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E244u;
            // 0x25e248: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E4A4u;
            goto label_25e4a4;
        }
    }
    ctx->pc = 0x25E24Cu;
    // 0x25e24c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x25E24Cu;
    {
        const bool branch_taken_0x25e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E24Cu;
        // 0x25e250: 0xdfbe01b0  ld          $fp, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e24c) {
            ctx->pc = 0x25E4A8u;
            goto label_25e4a8;
        }
    }
    ctx->pc = 0x25E254u;
label_25e254:
    // 0x25e254: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x25e254u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25e258: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x25e258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25e25c: 0xae2a0020  sw          $t2, 0x20($s1)
    ctx->pc = 0x25e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 10));
    // 0x25e260: 0x591818  mult        $v1, $v0, $t9
    ctx->pc = 0x25e260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25e264: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x25e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x25e268: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x25e268u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
    // 0x25e26c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x25e26cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_25e270:
    // 0x25e270: 0x29a20002  slti        $v0, $t5, 0x2
    ctx->pc = 0x25e270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25e274: 0x5440ff2a  bnel        $v0, $zero, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x25E274u;
    {
        const bool branch_taken_0x25e274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e274) {
            ctx->pc = 0x25E278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E274u;
            // 0x25e278: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25df20;
        }
    }
    ctx->pc = 0x25E27Cu;
    // 0x25e27c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x25e27cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25e280: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x25e280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25e284: 0x0  nop
    ctx->pc = 0x25e284u;
    // NOP
label_25e288:
    // 0x25e288: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25e28c: 0x51430001  beql        $t2, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x25E28Cu;
    {
        const bool branch_taken_0x25e28c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        if (branch_taken_0x25e28c) {
            ctx->pc = 0x25E290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E28Cu;
            // 0x25e290: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E294u;
            goto label_25e294;
        }
    }
    ctx->pc = 0x25E294u;
label_25e294:
    // 0x25e294: 0x19d1026  xor         $v0, $t4, $sp
    ctx->pc = 0x25e294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 29));
    // 0x25e298: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x25e298u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e29c: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x25e29cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2a0: 0x23d1826  xor         $v1, $s1, $sp
    ctx->pc = 0x25e2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 29));
    // 0x25e2a4: 0x3a2600b  movn        $t4, $sp, $v0
    ctx->pc = 0x25e2a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 29));
    // 0x25e2a8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x25e2a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2ac: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x25e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x25e2b0: 0x3a3880b  movn        $s1, $sp, $v1
    ctx->pc = 0x25e2b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 29));
    // 0x25e2b4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x25e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x25e2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2bc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x25e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x25e2c0: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x25e2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25e2c4: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x25e2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2c8: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x25e2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x25e2cc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x25e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25e2d0: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x25e2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x25e2d4: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x25e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x25e2d8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25e2dc: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x25e2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2e0: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x25e2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x25e2e4: 0xae2a0020  sw          $t2, 0x20($s1)
    ctx->pc = 0x25e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 10));
    // 0x25e2e8: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x25e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
    // 0x25e2ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25e2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2f0: 0x7faa00c0  sq          $t2, 0xC0($sp)
    ctx->pc = 0x25e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 10));
    // 0x25e2f4: 0x7fac00e0  sq          $t4, 0xE0($sp)
    ctx->pc = 0x25e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 12));
    // 0x25e2f8: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x25e2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x25e2fc: 0xc097484  jal         func_25D210
    ctx->pc = 0x25E2FCu;
    SET_GPR_U32(ctx, 31, 0x25E304u);
    ctx->pc = 0x25E300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2FCu;
    // 0x25e300: 0x7fae0100  sq          $t6, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D210u, 0x25E2FCu, 0x25E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E304u;
label_25e304:
    // 0x25e304: 0x7baa00c0  lq          $t2, 0xC0($sp)
    ctx->pc = 0x25e304u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25e308: 0x7bac00e0  lq          $t4, 0xE0($sp)
    ctx->pc = 0x25e308u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25e30c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x25E30Cu;
    {
        const bool branch_taken_0x25e30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E30Cu;
        // 0x25e310: 0x7bae0100  lq          $t6, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e30c) {
            ctx->pc = 0x25E288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e288;
        }
    }
    ctx->pc = 0x25E314u;
    // 0x25e314: 0x19d1026  xor         $v0, $t4, $sp
    ctx->pc = 0x25e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 29));
    // 0x25e318: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25e318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25e31c: 0x27ac0030  addiu       $t4, $sp, 0x30
    ctx->pc = 0x25e31cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25e320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25e320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e324: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x25E324u;
    {
        const bool branch_taken_0x25e324 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E324u;
        // 0x25e328: 0x3a2600b  movn        $t4, $sp, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e324) {
            ctx->pc = 0x25E360u;
            goto label_25e360;
        }
    }
    ctx->pc = 0x25E32Cu;
    // 0x25e32c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x25e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25e330: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x25e330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25e334: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x25e334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25e338: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x25e338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x25e33c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x25e33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e340: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x25e340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e344: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x25e344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x25e348: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25e348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25e34c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x25e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x25e350: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25e350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25e354: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25e354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25e358: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x25E358u;
    {
        const bool branch_taken_0x25e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E358u;
        // 0x25e35c: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e358) {
            ctx->pc = 0x25E4A0u;
            goto label_25e4a0;
        }
    }
    ctx->pc = 0x25E360u;
label_25e360:
    // 0x25e360: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x25e360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25e364: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x25e364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25e368: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x25e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25e36c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x25e36cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x25e370: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x25e370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25e374: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x25e374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e378: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x25e378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25e37c: 0x34c6fff0  ori         $a2, $a2, 0xFFF0
    ctx->pc = 0x25e37cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65520);
    // 0x25e380: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25e384: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25e388: 0xadc30020  sw          $v1, 0x20($t6)
    ctx->pc = 0x25e388u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 32), GPR_U32(ctx, 3));
    // 0x25e38c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x25e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x25e390: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25e390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25e394: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x25e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x25e398: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x25e398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x25e39c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25e3a0: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x25e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x25e3a4: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x25e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x25e3a8: 0xadc2001c  sw          $v0, 0x1C($t6)
    ctx->pc = 0x25e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 2));
    // 0x25e3ac: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x25e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x25e3b0: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x25e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x25e3b4: 0x1840003a  blez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x25E3B4u;
    {
        const bool branch_taken_0x25e3b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3B4u;
        // 0x25e3b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3b4) {
            ctx->pc = 0x25E4A0u;
            goto label_25e4a0;
        }
    }
    ctx->pc = 0x25E3BCu;
    // 0x25e3bc: 0x8d870020  lw          $a3, 0x20($t4)
    ctx->pc = 0x25e3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x25e3c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x25e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25e3c4: 0x0  nop
    ctx->pc = 0x25e3c4u;
    // NOP
label_25e3c8:
    // 0x25e3c8: 0x8dc30020  lw          $v1, 0x20($t6)
    ctx->pc = 0x25e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x25e3cc: 0x1442018  mult        $a0, $t2, $a0
    ctx->pc = 0x25e3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25e3d0: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x25e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25e3d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25e3d8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x25e3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25e3dc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x25e3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25e3e0: 0x8d870020  lw          $a3, 0x20($t4)
    ctx->pc = 0x25e3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x25e3e4: 0x8dc90020  lw          $t1, 0x20($t6)
    ctx->pc = 0x25e3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x25e3e8: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x25e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25e3ec: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x25e3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25e3f0: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x25e3f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x25e3f4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x25e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x25e3f8: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x25e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x25e3fc: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x25e3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x25e400: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25e404: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x25e404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25e408: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x25e408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x25e40c: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x25e40cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x25e410: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x25e410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x25e414: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x25e414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e418: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x25e418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25e41c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x25e41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x25e420: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x25e420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x25e424: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x25e424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25e428: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25E428u;
    {
        const bool branch_taken_0x25e428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E428u;
        // 0x25e42c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e428) {
            ctx->pc = 0x25E488u;
            goto label_25e488;
        }
    }
    ctx->pc = 0x25E430u;
    // 0x25e430: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x25e430u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x25e434: 0x0  nop
    ctx->pc = 0x25e434u;
    // NOP
label_25e438:
    // 0x25e438: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x25e438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25e43c: 0x1442018  mult        $a0, $t2, $a0
    ctx->pc = 0x25e43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25e440: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x25e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25e444: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x25e444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x25e448: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x25e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25e44c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x25e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x25e450: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x25e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x25e454: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x25e454u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e458: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x25e458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x25e45c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x25e45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x25e460: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x25e460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x25e464: 0x8d820020  lw          $v0, 0x20($t4)
    ctx->pc = 0x25e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x25e468: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25e468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e46c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x25e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25e470: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x25e470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25e474: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x25e474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25e478: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x25E478u;
    {
        const bool branch_taken_0x25e478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e478) {
            ctx->pc = 0x25E47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E478u;
            // 0x25e47c: 0x8dc90020  lw          $t1, 0x20($t6) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e438;
        }
    }
    ctx->pc = 0x25E480u;
    // 0x25e480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E480u;
    {
        const bool branch_taken_0x25e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E480u;
        // 0x25e484: 0x8d82001c  lw          $v0, 0x1C($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e480) {
            ctx->pc = 0x25E490u;
            goto label_25e490;
        }
    }
    ctx->pc = 0x25E488u;
label_25e488:
    // 0x25e488: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x25e488u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x25e48c: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x25e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_25e490:
    // 0x25e490: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x25e490u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e494: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x25e494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25e498: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x25E498u;
    {
        const bool branch_taken_0x25e498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E498u;
        // 0x25e49c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e498) {
            ctx->pc = 0x25E3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e3c8;
        }
    }
    ctx->pc = 0x25E4A0u;
label_25e4a0:
    // 0x25e4a0: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x25e4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_25e4a4:
    // 0x25e4a4: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x25e4a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_25e4a8:
    // 0x25e4a8: 0xdfb701a0  ld          $s7, 0x1A0($sp)
    ctx->pc = 0x25e4a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x25e4ac: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x25e4acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25e4b0: 0xdfb50180  ld          $s5, 0x180($sp)
    ctx->pc = 0x25e4b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25e4b4: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x25e4b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x25e4b8: 0xdfb30160  ld          $s3, 0x160($sp)
    ctx->pc = 0x25e4b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x25e4bc: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x25e4bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x25e4c0: 0xdfb10140  ld          $s1, 0x140($sp)
    ctx->pc = 0x25e4c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25e4c4: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x25e4c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25e4c8: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x25e4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25e4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x25E4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4CCu;
        // 0x25e4d0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E4D4u;
}
