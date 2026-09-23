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

// Function: streamersPropTick
// Address: 0x278d48 - 0x278ef8
void streamersPropTick_0x278d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("streamersPropTick_0x278d48");
#endif

    switch (ctx->pc) {
        case 0x278d8cu: goto label_278d8c;
        case 0x278da4u: goto label_278da4;
        case 0x278de8u: goto label_278de8;
        default: break;
    }

    ctx->pc = 0x278d48u;

    // 0x278d48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x278d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x278d4c: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x278d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x278d50: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x278d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x278d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x278d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x278d5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x278d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278d60: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x278d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x278d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d68: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x278d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x278d6c: 0x8e120160  lw          $s2, 0x160($s0)
    ctx->pc = 0x278d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x278d70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x278d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278d74: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x278d74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x278d78: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x278d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x278d7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278d80: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x278d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x278d84: 0xc09d194  jal         func_274650
    ctx->pc = 0x278D84u;
    SET_GPR_U32(ctx, 31, 0x278D8Cu);
    ctx->pc = 0x278D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D84u;
    // 0x278d88: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x278D84u, 0x278D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D8Cu;
label_278d8c:
    // 0x278d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x278d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278d98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x278d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278d9c: 0xc09d11a  jal         func_274468
    ctx->pc = 0x278D9Cu;
    SET_GPR_U32(ctx, 31, 0x278DA4u);
    ctx->pc = 0x278DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D9Cu;
    // 0x278da0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x278D9Cu, 0x278DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DA4u;
label_278da4:
    // 0x278da4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278da8: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x278DA8u;
    {
        const bool branch_taken_0x278da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DA8u;
        // 0x278dac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278da8) {
            ctx->pc = 0x278EE4u;
            goto label_278ee4;
        }
    }
    ctx->pc = 0x278DB0u;
    // 0x278db0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x278db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x278db4: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x278db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278db8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x278db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x278dbc: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x278dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278dc0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x278dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278dc4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x278dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x278dc8: 0x8e270030  lw          $a3, 0x30($s1)
    ctx->pc = 0x278dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x278dcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x278dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278dd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x278dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x278dd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x278dd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278dd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x278dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x278ddc: 0x19400041  blez        $t2, . + 4 + (0x41 << 2)
    ctx->pc = 0x278DDCu;
    {
        const bool branch_taken_0x278ddc = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x278DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DDCu;
        // 0x278de0: 0x46000280  add.s       $f10, $f0, $f0 (Delay Slot)
        ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ddc) {
            ctx->pc = 0x278EE4u;
            goto label_278ee4;
        }
    }
    ctx->pc = 0x278DE4u;
    // 0x278de4: 0x3c0b0037  lui         $t3, 0x37
    ctx->pc = 0x278de4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)55 << 16));
label_278de8:
    // 0x278de8: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x278de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x278dec: 0x25655c60  addiu       $a1, $t3, 0x5C60
    ctx->pc = 0x278decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 23648));
    // 0x278df0: 0xc7878694  lwc1        $f7, -0x796C($gp)
    ctx->pc = 0x278df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x278df4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x278df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x278df8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x278df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x278dfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x278dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x278e00: 0x12a302a  slt         $a2, $t1, $t2
    ctx->pc = 0x278e00u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x278e04: 0x46075042  mul.s       $f1, $f10, $f7
    ctx->pc = 0x278e04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x278e08: 0xc7888698  lwc1        $f8, -0x7968($gp)
    ctx->pc = 0x278e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x278e0c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x278e0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x278e10: 0xc784869c  lwc1        $f4, -0x7964($gp)
    ctx->pc = 0x278e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x278e14: 0x46085002  mul.s       $f0, $f10, $f8
    ctx->pc = 0x278e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x278e18: 0xc78386a0  lwc1        $f3, -0x7960($gp)
    ctx->pc = 0x278e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x278e1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x278e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x278e20: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x278e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x278e24: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x278e24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x278e28: 0xc78986a4  lwc1        $f9, -0x795C($gp)
    ctx->pc = 0x278e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x278e2c: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x278e2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x278e30: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x278e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x278e34: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x278e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x278e38: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x278e38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x278e3c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x278e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x278e40: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x278e40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x278e44: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x278e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x278e48: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x278e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x278e4c: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x278e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x278e50: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x278e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x278e54: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x278e54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x278e58: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x278e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x278e5c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x278e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x278e60: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x278e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x278e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x278e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x278e68: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x278e68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x278e6c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x278e6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x278e70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x278e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x278e74: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x278e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x278e78: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x278e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278e7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x278e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278e80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x278e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x278e84: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x278e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x278e88: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x278e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x278e8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x278e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x278e90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x278e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x278e94: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x278e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x278e98: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x278e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x278e9c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x278e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x278ea0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x278ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278ea4: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x278ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278ea8: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x278ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x278eac: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x278eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x278eb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x278eb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x278eb4: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x278eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x278eb8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x278eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278ebc: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x278ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278ec0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x278ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x278ec4: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x278ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x278ec8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x278ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x278ecc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x278eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x278ed0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x278ed0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x278ed4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x278ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x278ed8: 0x14c0ffc3  bnez        $a2, . + 4 + (-0x3D << 2)
    ctx->pc = 0x278ED8u;
    {
        const bool branch_taken_0x278ed8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x278EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278ED8u;
        // 0x278edc: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ed8) {
            ctx->pc = 0x278DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278de8;
        }
    }
    ctx->pc = 0x278EE0u;
    // 0x278ee0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x278ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_278ee4:
    // 0x278ee4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x278ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278ee8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x278ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278eec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x278eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x278EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EF0u;
        // 0x278ef4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278EF8u;
}
