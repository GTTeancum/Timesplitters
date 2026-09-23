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

// Function: StatsAddToLife
// Address: 0x2244d0 - 0x224878
void StatsAddToLife_0x2244d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsAddToLife_0x2244d0");
#endif

    switch (ctx->pc) {
        case 0x224514u: goto label_224514;
        case 0x224534u: goto label_224534;
        case 0x224554u: goto label_224554;
        case 0x224574u: goto label_224574;
        case 0x224588u: goto label_224588;
        case 0x2245a8u: goto label_2245a8;
        case 0x2245bcu: goto label_2245bc;
        case 0x2245dcu: goto label_2245dc;
        case 0x2245f0u: goto label_2245f0;
        case 0x224620u: goto label_224620;
        case 0x224640u: goto label_224640;
        case 0x224658u: goto label_224658;
        case 0x224670u: goto label_224670;
        case 0x224688u: goto label_224688;
        case 0x2246a0u: goto label_2246a0;
        case 0x2246b0u: goto label_2246b0;
        case 0x2246d4u: goto label_2246d4;
        case 0x2246f4u: goto label_2246f4;
        case 0x224708u: goto label_224708;
        case 0x224718u: goto label_224718;
        case 0x224740u: goto label_224740;
        case 0x224768u: goto label_224768;
        case 0x224788u: goto label_224788;
        case 0x2247a0u: goto label_2247a0;
        case 0x2247c0u: goto label_2247c0;
        case 0x2247f0u: goto label_2247f0;
        case 0x224800u: goto label_224800;
        default: break;
    }

    ctx->pc = 0x2244d0u;

    // 0x2244d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2244d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2244d4: 0x8f839da8  lw          $v1, -0x6258($gp)
    ctx->pc = 0x2244d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x2244d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2244d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2244dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2244dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2244e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2244e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2244e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2244e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2244e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244ec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2244ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2244f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2244f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2244f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2244f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2244f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2244fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2244fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x224500: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x224500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x224504: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x224504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22450c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x22450Cu;
    SET_GPR_U32(ctx, 31, 0x224514u);
    ctx->pc = 0x224510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22450Cu;
    // 0x224510: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x22450Cu, 0x224514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224514u;
label_224514:
    // 0x224514: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x224514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224518: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x224518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22451c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224520: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224524: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224524u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x224528: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x224528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x22452c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x22452Cu;
    SET_GPR_U32(ctx, 31, 0x224534u);
    ctx->pc = 0x224530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22452Cu;
    // 0x224530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x22452Cu, 0x224534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224534u;
label_224534:
    // 0x224534: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x224534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224538: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x224538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22453c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x22453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x224540: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224544: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x224548: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x224548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x22454c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x22454Cu;
    SET_GPR_U32(ctx, 31, 0x224554u);
    ctx->pc = 0x224550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22454Cu;
    // 0x224550: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x22454Cu, 0x224554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224554u;
label_224554:
    // 0x224554: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x224554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224558: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x224558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22455c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22455cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224560: 0x0  nop
    ctx->pc = 0x224560u;
    // NOP
    // 0x224564: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x224564u;
    {
        const bool branch_taken_0x224564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224564u;
        // 0x224568: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224564) {
            ctx->pc = 0x22457Cu;
            goto label_22457c;
        }
    }
    ctx->pc = 0x22456Cu;
    // 0x22456c: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x22456Cu;
    SET_GPR_U32(ctx, 31, 0x224574u);
    ctx->pc = 0x224570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22456Cu;
    // 0x224570: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x22456Cu, 0x224574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224574u;
label_224574:
    // 0x224574: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224574u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x224578: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x224578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_22457c:
    // 0x22457c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x22457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x224580: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224580u;
    SET_GPR_U32(ctx, 31, 0x224588u);
    ctx->pc = 0x224584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224580u;
    // 0x224584: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224580u, 0x224588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224588u;
label_224588:
    // 0x224588: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x224588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22458c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22458cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x224590: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224594: 0x0  nop
    ctx->pc = 0x224594u;
    // NOP
    // 0x224598: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x224598u;
    {
        const bool branch_taken_0x224598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224598u;
        // 0x22459c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224598) {
            ctx->pc = 0x2245B0u;
            goto label_2245b0;
        }
    }
    ctx->pc = 0x2245A0u;
    // 0x2245a0: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2245A0u;
    SET_GPR_U32(ctx, 31, 0x2245A8u);
    ctx->pc = 0x2245A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245A0u;
    // 0x2245a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2245A0u, 0x2245A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245A8u;
label_2245a8:
    // 0x2245a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2245a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2245ac: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2245acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2245b0:
    // 0x2245b0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2245b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2245b4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2245B4u;
    SET_GPR_U32(ctx, 31, 0x2245BCu);
    ctx->pc = 0x2245B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245B4u;
    // 0x2245b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2245B4u, 0x2245BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245BCu;
label_2245bc:
    // 0x2245bc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2245bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2245c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2245c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2245c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2245c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2245c8: 0x0  nop
    ctx->pc = 0x2245c8u;
    // NOP
    // 0x2245cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2245CCu;
    {
        const bool branch_taken_0x2245cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2245D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245CCu;
        // 0x2245d0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245cc) {
            ctx->pc = 0x2245E4u;
            goto label_2245e4;
        }
    }
    ctx->pc = 0x2245D4u;
    // 0x2245d4: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2245D4u;
    SET_GPR_U32(ctx, 31, 0x2245DCu);
    ctx->pc = 0x2245D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245D4u;
    // 0x2245d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2245D4u, 0x2245DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245DCu;
label_2245dc:
    // 0x2245dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2245dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2245e0: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2245e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2245e4:
    // 0x2245e4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2245e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2245e8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2245E8u;
    SET_GPR_U32(ctx, 31, 0x2245F0u);
    ctx->pc = 0x2245ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245E8u;
    // 0x2245ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2245E8u, 0x2245F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245F0u;
label_2245f0:
    // 0x2245f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2245f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2245f4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2245f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2245f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2245f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2245fc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2245fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x224600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224604: 0x2615015c  addiu       $s5, $s0, 0x15C
    ctx->pc = 0x224604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x224608: 0x261300c8  addiu       $s3, $s0, 0xC8
    ctx->pc = 0x224608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x22460c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22460cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224610: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x224614: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x224614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x224618: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224618u;
    SET_GPR_U32(ctx, 31, 0x224620u);
    ctx->pc = 0x22461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224618u;
    // 0x22461c: 0x26120040  addiu       $s2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224618u, 0x224620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224620u;
label_224620:
    // 0x224620: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x224620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224624: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x224624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x224628: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x224628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x22462c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22462cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224630: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x224634: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x224634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x224638: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224638u;
    SET_GPR_U32(ctx, 31, 0x224640u);
    ctx->pc = 0x22463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224638u;
    // 0x22463c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224638u, 0x224640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224640u;
label_224640:
    // 0x224640: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x224640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224644: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x224644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x224648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22464c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22464cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224650: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224650u;
    SET_GPR_U32(ctx, 31, 0x224658u);
    ctx->pc = 0x224654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224650u;
    // 0x224654: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224650u, 0x224658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224658u;
label_224658:
    // 0x224658: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x224658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22465c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x224660: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224664: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224668: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224668u;
    SET_GPR_U32(ctx, 31, 0x224670u);
    ctx->pc = 0x22466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224668u;
    // 0x22466c: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224668u, 0x224670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224670u;
label_224670:
    // 0x224670: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x224670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224674: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x224674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x224678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22467c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22467cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224680: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224680u;
    SET_GPR_U32(ctx, 31, 0x224688u);
    ctx->pc = 0x224684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224680u;
    // 0x224684: 0xe601002c  swc1        $f1, 0x2C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224680u, 0x224688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224688u;
label_224688:
    // 0x224688: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x224688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22468c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x22468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x224690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224694: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224698: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224698u;
    SET_GPR_U32(ctx, 31, 0x2246A0u);
    ctx->pc = 0x22469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224698u;
    // 0x22469c: 0xe6010030  swc1        $f1, 0x30($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224698u, 0x2246A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246A0u;
label_2246a0:
    // 0x2246a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2246a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2246a4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2246a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2246a8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2246A8u;
    SET_GPR_U32(ctx, 31, 0x2246B0u);
    ctx->pc = 0x2246ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246A8u;
    // 0x2246ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2246A8u, 0x2246B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246B0u;
label_2246b0:
    // 0x2246b0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2246b0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2246b4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2246b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2246b8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2246b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2246bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2246bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2246c0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2246c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2246c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2246c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2246c8: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2246c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2246cc: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2246CCu;
    SET_GPR_U32(ctx, 31, 0x2246D4u);
    ctx->pc = 0x2246D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246CCu;
    // 0x2246d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2246CCu, 0x2246D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246D4u;
label_2246d4:
    // 0x2246d4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2246d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2246d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2246d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2246dc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2246dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2246e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2246e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2246e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2246e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2246e8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2246e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2246ec: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2246ECu;
    SET_GPR_U32(ctx, 31, 0x2246F4u);
    ctx->pc = 0x2246F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246ECu;
    // 0x2246f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2246ECu, 0x2246F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246F4u;
label_2246f4:
    // 0x2246f4: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2246f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2246f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2246f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2246fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2246fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224700: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x224704: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x224704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_224708:
    // 0x224708: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x224708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22470c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224710: 0xc088fde  jal         func_223F78
    ctx->pc = 0x224710u;
    SET_GPR_U32(ctx, 31, 0x224718u);
    ctx->pc = 0x224714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224710u;
    // 0x224714: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223F78u, 0x224710u, 0x224718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224718u;
label_224718:
    // 0x224718: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x224718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22471c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22471cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x224720: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x224720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224724: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x224724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22472c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22472cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224730: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224730u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x224734: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x224734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x224738: 0xc088fde  jal         func_223F78
    ctx->pc = 0x224738u;
    SET_GPR_U32(ctx, 31, 0x224740u);
    ctx->pc = 0x22473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224738u;
    // 0x22473c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223F78u, 0x224738u, 0x224740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224740u;
label_224740:
    // 0x224740: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x224740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x224744: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x224744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224748: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x224748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x22474c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22474cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224750: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x224750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x224754: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x224754u;
    {
        const bool branch_taken_0x224754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224754u;
        // 0x224758: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224754) {
            ctx->pc = 0x224708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224708;
        }
    }
    ctx->pc = 0x22475Cu;
    // 0x22475c: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x22475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x224760: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224760u;
    SET_GPR_U32(ctx, 31, 0x224768u);
    ctx->pc = 0x224764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224760u;
    // 0x224764: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224760u, 0x224768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224768u;
label_224768:
    // 0x224768: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x224768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22476c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22476cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x224770: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x224770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x224774: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224774u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224778: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22477c: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x22477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x224780: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224780u;
    SET_GPR_U32(ctx, 31, 0x224788u);
    ctx->pc = 0x224784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224780u;
    // 0x224784: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224780u, 0x224788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224788u;
label_224788:
    // 0x224788: 0xc601014c  lwc1        $f1, 0x14C($s0)
    ctx->pc = 0x224788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22478c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x224790: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224794: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224798: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x224798u;
    SET_GPR_U32(ctx, 31, 0x2247A0u);
    ctx->pc = 0x22479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224798u;
    // 0x22479c: 0xe601014c  swc1        $f1, 0x14C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x224798u, 0x2247A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247A0u;
label_2247a0:
    // 0x2247a0: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x2247a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2247a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2247a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2247a8: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x2247a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2247ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2247acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2247b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2247b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2247b4: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x2247b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x2247b8: 0xc088fba  jal         func_223EE8
    ctx->pc = 0x2247B8u;
    SET_GPR_U32(ctx, 31, 0x2247C0u);
    ctx->pc = 0x2247BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247B8u;
    // 0x2247bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EE8u, 0x2247B8u, 0x2247C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247C0u;
label_2247c0:
    // 0x2247c0: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x2247c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2247c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2247c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2247c8: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x2247c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2247cc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2247ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2247d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2247d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2247d4: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x2247d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247d8: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x2247d8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x2247dc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2247dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2247e0: 0x246331a8  addiu       $v1, $v1, 0x31A8
    ctx->pc = 0x2247e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12712));
    // 0x2247e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2247e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247e8: 0xe6010158  swc1        $f1, 0x158($s0)
    ctx->pc = 0x2247e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
    // 0x2247ec: 0x250a0001  addiu       $t2, $t0, 0x1
    ctx->pc = 0x2247ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2247f0:
    // 0x2247f0: 0x1a84821  addu        $t1, $t5, $t0
    ctx->pc = 0x2247f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x2247f4: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x2247f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2247f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2247f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2247fc: 0x0  nop
    ctx->pc = 0x2247fcu;
    // NOP
label_224800:
    // 0x224800: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x224800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x224804: 0x5448000c  bnel        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x224804u;
    {
        const bool branch_taken_0x224804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x224804) {
            ctx->pc = 0x224808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224804u;
            // 0x224808: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224838u;
            goto label_224838;
        }
    }
    ctx->pc = 0x22480Cu;
    // 0x22480c: 0x2584c4a8  addiu       $a0, $t4, -0x3B58
    ctx->pc = 0x22480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952104));
    // 0x224810: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x224810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x224814: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x224814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x224818: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x224818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22481c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22481Cu;
    {
        const bool branch_taken_0x22481c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22481c) {
            ctx->pc = 0x224820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22481Cu;
            // 0x224820: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224838u;
            goto label_224838;
        }
    }
    ctx->pc = 0x224824u;
    // 0x224824: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x224824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x224828: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x224828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22482c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22482Cu;
    {
        const bool branch_taken_0x22482c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22482c) {
            ctx->pc = 0x224830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22482Cu;
            // 0x224830: 0xa12b0000  sb          $t3, 0x0($t1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224834u;
            goto label_224834;
        }
    }
    ctx->pc = 0x224834u;
label_224834:
    // 0x224834: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x224834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_224838:
    // 0x224838: 0x4e1fff1  bgez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x224838u;
    {
        const bool branch_taken_0x224838 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x22483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224838u;
        // 0x22483c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224838) {
            ctx->pc = 0x224800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224800;
        }
    }
    ctx->pc = 0x224840u;
    // 0x224840: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x224840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224844: 0x29020030  slti        $v0, $t0, 0x30
    ctx->pc = 0x224844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x224848: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x224848u;
    {
        const bool branch_taken_0x224848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224848) {
            ctx->pc = 0x22484Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224848u;
            // 0x22484c: 0x250a0001  addiu       $t2, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2247F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2247f0;
        }
    }
    ctx->pc = 0x224850u;
    // 0x224850: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x224850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x224854: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x224854u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x224858: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x224858u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22485c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22485cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224860: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x224860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224864: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x224864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22486c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x22486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x224870: 0x3e00008  jr          $ra
    ctx->pc = 0x224870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224870u;
        // 0x224874: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224878u;
}
