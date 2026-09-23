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

// Function: reflectionsPropTick
// Address: 0x278ef8 - 0x279058
void reflectionsPropTick_0x278ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("reflectionsPropTick_0x278ef8");
#endif

    switch (ctx->pc) {
        case 0x278f34u: goto label_278f34;
        case 0x278f4cu: goto label_278f4c;
        case 0x278f70u: goto label_278f70;
        default: break;
    }

    ctx->pc = 0x278ef8u;

    // 0x278ef8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x278ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x278efc: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x278efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x278f00: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x278f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x278f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x278f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x278f0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x278f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278f10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x278f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x278f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x278f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278f1c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x278f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x278f20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278f24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278f28: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x278f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x278f2c: 0xc09d194  jal         func_274650
    ctx->pc = 0x278F2Cu;
    SET_GPR_U32(ctx, 31, 0x278F34u);
    ctx->pc = 0x278F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F2Cu;
    // 0x278f30: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x278F2Cu, 0x278F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F34u;
label_278f34:
    // 0x278f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x278f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278f40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x278f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278f44: 0xc09d11a  jal         func_274468
    ctx->pc = 0x278F44u;
    SET_GPR_U32(ctx, 31, 0x278F4Cu);
    ctx->pc = 0x278F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F44u;
    // 0x278f48: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x278F44u, 0x278F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F4Cu;
label_278f4c:
    // 0x278f4c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x278F4Cu;
    {
        const bool branch_taken_0x278f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F4Cu;
        // 0x278f50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f4c) {
            ctx->pc = 0x279048u;
            goto label_279048;
        }
    }
    ctx->pc = 0x278F54u;
    // 0x278f54: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x278f54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278f58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x278f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f5c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x278f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x278f60: 0x19200039  blez        $t1, . + 4 + (0x39 << 2)
    ctx->pc = 0x278F60u;
    {
        const bool branch_taken_0x278f60 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x278F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F60u;
        // 0x278f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f60) {
            ctx->pc = 0x279048u;
            goto label_279048;
        }
    }
    ctx->pc = 0x278F68u;
    // 0x278f68: 0x8f889da8  lw          $t0, -0x6258($gp)
    ctx->pc = 0x278f68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x278f6c: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x278f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
label_278f70:
    // 0x278f70: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x278f70u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x278f74: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x278f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x278f78: 0xc78286a8  lwc1        $f2, -0x7958($gp)
    ctx->pc = 0x278f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x278f7c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x278f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278f80: 0x25435c60  addiu       $v1, $t2, 0x5C60
    ctx->pc = 0x278f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 23648));
    // 0x278f84: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x278f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x278f88: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x278f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x278f8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x278f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x278f90: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x278f90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x278f94: 0xc78186ac  lwc1        $f1, -0x7954($gp)
    ctx->pc = 0x278f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278f98: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x278f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x278f9c: 0xc78686b0  lwc1        $f6, -0x7950($gp)
    ctx->pc = 0x278f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x278fa0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x278fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x278fa4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x278fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x278fa8: 0xe9202a  slt         $a0, $a3, $t1
    ctx->pc = 0x278fa8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x278fac: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x278facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x278fb0: 0xc78586b4  lwc1        $f5, -0x794C($gp)
    ctx->pc = 0x278fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x278fb4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x278fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x278fb8: 0xc78286b8  lwc1        $f2, -0x7948($gp)
    ctx->pc = 0x278fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x278fbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x278fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x278fc0: 0xc78986bc  lwc1        $f9, -0x7944($gp)
    ctx->pc = 0x278fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x278fc4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x278fc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x278fc8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x278fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x278fcc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x278fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x278fd0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x278fd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x278fd4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x278fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x278fd8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x278fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x278fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x278fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x278fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278fe4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x278fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278fe8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x278fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x278fec: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x278fecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x278ff0: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x278ff0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x278ff4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x278ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278ff8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x278ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x278ffc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x278ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279000: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x279000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279004: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x279004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x279008: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x279008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x27900c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x27900cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x279010: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x279010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x279014: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x279014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x279018: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x279018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x27901c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x27901cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x279020: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x279020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x279024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x279024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27902c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279030: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x279030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x279034: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x279034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279038: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x279038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x27903c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x27903Cu;
    {
        const bool branch_taken_0x27903c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x279040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27903Cu;
        // 0x279040: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27903c) {
            ctx->pc = 0x278F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278f70;
        }
    }
    ctx->pc = 0x279044u;
    // 0x279044: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x279044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_279048:
    // 0x279048: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x279048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27904c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27904cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279050: 0x3e00008  jr          $ra
    ctx->pc = 0x279050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279050u;
        // 0x279054: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279058u;
}
