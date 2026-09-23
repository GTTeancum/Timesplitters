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

// Function: hudMeterGfx
// Address: 0x2b2c10 - 0x2b2d64
void hudMeterGfx_0x2b2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudMeterGfx_0x2b2c10");
#endif

    switch (ctx->pc) {
        case 0x2b2cbcu: goto label_2b2cbc;
        case 0x2b2cd8u: goto label_2b2cd8;
        case 0x2b2d1cu: goto label_2b2d1c;
        default: break;
    }

    ctx->pc = 0x2b2c10u;

    // 0x2b2c10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b2c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b2c14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2b2c14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2c18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b2c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b2c1c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b2c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b2c20: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2b2c20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2b2c24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b2c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b2c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b2c2c: 0x287a821  addu        $s5, $s4, $a3
    ctx->pc = 0x2b2c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2b2c30: 0x460d0082  mul.s       $f2, $f0, $f13
    ctx->pc = 0x2b2c30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2b2c34: 0x44957800  mtc1        $s5, $f15
    ctx->pc = 0x2b2c34u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2b2c38: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x2b2c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x2b2c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2c40: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x2b2c40u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2c44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b2c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b2c48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b2c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b2c4c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b2c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b2c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c54: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2b2c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2b2c58: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2b2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2b2c5c: 0x460d7bc1  sub.s       $f15, $f15, $f13
    ctx->pc = 0x2b2c5cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
    // 0x2b2c60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b2c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b2c64: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b2c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b2c68: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2b2c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2b2c6c: 0x460d0b41  sub.s       $f13, $f1, $f13
    ctx->pc = 0x2b2c6cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x2b2c70: 0x206f021  addu        $fp, $s0, $a2
    ctx->pc = 0x2b2c70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2b2c74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2c74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b2c78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b2c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b2c7c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b2c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b2c80: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2c80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b2c84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b2c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b2c88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b2c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b2c8c: 0x449e7000  mtc1        $fp, $f14
    ctx->pc = 0x2b2c8cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b2c90: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x2b2c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x2b2c94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b2c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b2c98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b2c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b2c9c: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x2b2c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b2ca0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2b2ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2b2ca4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2b2ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ca8: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x2b2ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b2cac: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b2cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b2cb0: 0x9b603  sra         $s6, $t1, 24
    ctx->pc = 0x2b2cb0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 9), 24));
    // 0x2b2cb4: 0xc0ae172  jal         func_2B85C8
    ctx->pc = 0x2B2CB4u;
    SET_GPR_U32(ctx, 31, 0x2B2CBCu);
    ctx->pc = 0x2B2CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2CB4u;
    // 0x2b2cb8: 0x2404004f  addiu       $a0, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B85C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85C8u, 0x2B2CB4u, 0x2B2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CBCu;
label_2b2cbc:
    // 0x2b2cbc: 0x26b7ffff  addiu       $s7, $s5, -0x1
    ctx->pc = 0x2b2cbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2b2cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2cc4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2b2cc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2cc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b2cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ccc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b2cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2cd0: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B2CD0u;
    SET_GPR_U32(ctx, 31, 0x2B2CD8u);
    ctx->pc = 0x2B2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2CD0u;
    // 0x2b2cd4: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B2CD0u, 0x2B2CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CD8u;
label_2b2cd8:
    // 0x2b2cd8: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x2b2cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2b2cdc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B2CDCu;
    {
        const bool branch_taken_0x2b2cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CDCu;
        // 0x2b2ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2cdc) {
            ctx->pc = 0x2B2D20u;
            goto label_2b2d20;
        }
    }
    ctx->pc = 0x2B2CE4u;
    // 0x2b2ce4: 0x1ac0000e  blez        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x2B2CE4u;
    {
        const bool branch_taken_0x2b2ce4 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2B2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CE4u;
        // 0x2b2ce8: 0x32c800ff  andi        $t0, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ce4) {
            ctx->pc = 0x2B2D20u;
            goto label_2b2d20;
        }
    }
    ctx->pc = 0x2B2CECu;
    // 0x2b2cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2cf0: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x2b2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2b2cf4: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x2b2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2b2cf8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2b2cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2b2cfc: 0x3442007f  ori         $v0, $v0, 0x7F
    ctx->pc = 0x2b2cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)127);
    // 0x2b2d00: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x2b2d00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2b2d04: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2b2d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d08: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x2b2d08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2b2d0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b2d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b2d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d14: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B2D14u;
    SET_GPR_U32(ctx, 31, 0x2B2D1Cu);
    ctx->pc = 0x2B2D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D14u;
    // 0x2b2d18: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B2D14u, 0x2B2D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D1Cu;
label_2b2d1c:
    // 0x2b2d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b2d20:
    // 0x2b2d20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b2d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d24: 0x27c6ffff  addiu       $a2, $fp, -0x1
    ctx->pc = 0x2b2d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2b2d28: 0x26a7ffff  addiu       $a3, $s5, -0x1
    ctx->pc = 0x2b2d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2b2d2c: 0x3c082828  lui         $t0, 0x2828
    ctx->pc = 0x2b2d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)10280 << 16));
    // 0x2b2d30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b2d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b2d34: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2b2d34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b2d38: 0x35082864  ori         $t0, $t0, 0x2864
    ctx->pc = 0x2b2d38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10340);
    // 0x2b2d3c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2b2d3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b2d40: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b2d40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b2d44: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b2d44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b2d48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b2d48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2d4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b2d4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2d50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b2d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2d54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b2d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2d5c: 0x80ae108  j           func_2B8420
    ctx->pc = 0x2B2D5Cu;
    ctx->pc = 0x2B2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D5Cu;
    // 0x2b2d60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x2B2D64u;
}
