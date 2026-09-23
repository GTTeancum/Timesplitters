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

// Function: vtxlistWaterxyz
// Address: 0x278888 - 0x278998
void vtxlistWaterxyz_0x278888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vtxlistWaterxyz_0x278888");
#endif

    switch (ctx->pc) {
        case 0x2788b0u: goto label_2788b0;
        default: break;
    }

    ctx->pc = 0x278888u;

    // 0x278888: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x278888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27888c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x27888cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278890: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x278890u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278894: 0x1980003e  blez        $t4, . + 4 + (0x3E << 2)
    ctx->pc = 0x278894u;
    {
        const bool branch_taken_0x278894 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x278898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278894u;
        // 0x278898: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278894) {
            ctx->pc = 0x278990u;
            goto label_278990;
        }
    }
    ctx->pc = 0x27889Cu;
    // 0x27889c: 0x8f8b9da8  lw          $t3, -0x6258($gp)
    ctx->pc = 0x27889cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x2788a0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2788a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2788a4: 0x3c0e0037  lui         $t6, 0x37
    ctx->pc = 0x2788a4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)55 << 16));
    // 0x2788a8: 0x278db198  addiu       $t5, $gp, -0x4E68
    ctx->pc = 0x2788a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947224));
    // 0x2788ac: 0x0  nop
    ctx->pc = 0x2788acu;
    // NOP
label_2788b0:
    // 0x2788b0: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x2788b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2788b4: 0x448b2800  mtc1        $t3, $f5
    ctx->pc = 0x2788b4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2788b8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2788b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2788bc: 0xc5290008  lwc1        $f9, 0x8($t1)
    ctx->pc = 0x2788bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2788c0: 0xed2021  addu        $a0, $a3, $t5
    ctx->pc = 0x2788c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x2788c4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2788c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2788c8: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2788c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2788cc: 0xc787867c  lwc1        $f7, -0x7984($gp)
    ctx->pc = 0x2788ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2788d0: 0x25c55c60  addiu       $a1, $t6, 0x5C60
    ctx->pc = 0x2788d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 23648));
    // 0x2788d4: 0xc784b1a0  lwc1        $f4, -0x4E60($gp)
    ctx->pc = 0x2788d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2788d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2788d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2788dc: 0xc782b1a8  lwc1        $f2, -0x4E58($gp)
    ctx->pc = 0x2788dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2788e0: 0x14c302a  slt         $a2, $t2, $t4
    ctx->pc = 0x2788e0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2788e4: 0xc783b1ac  lwc1        $f3, -0x4E54($gp)
    ctx->pc = 0x2788e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2788e8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2788e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2788ec: 0xc780b1a4  lwc1        $f0, -0x4E5C($gp)
    ctx->pc = 0x2788ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2788f0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2788f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2788f4: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x2788f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2788f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2788f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2788fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2788fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x278900: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x278900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x278904: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x278908: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x278908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27890c: 0xc788b1b0  lwc1        $f8, -0x4E50($gp)
    ctx->pc = 0x27890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x278910: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278914: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x278914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x278918: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x278918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x27891c: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x27891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x278920: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x278920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x278924: 0xc783b1b4  lwc1        $f3, -0x4E4C($gp)
    ctx->pc = 0x278924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x278928: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x278928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x27892c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x27892cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x278930: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x278930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x278934: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x278934u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x278938: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x278938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x27893c: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27893cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x278940: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x278940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x278944: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x278944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x278948: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x278948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27894c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x278950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x278950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x278954: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x278954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x278958: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x278958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27895c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27895cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278960: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x278960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278964: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x278964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x278968: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x278968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27896c: 0xe5090008  swc1        $f9, 0x8($t0)
    ctx->pc = 0x27896cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x278970: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x278970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x278974: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x278974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x278978: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x278978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x27897c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27897cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x278980: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x278980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x278984: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x278984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x278988: 0x14c0ffc9  bnez        $a2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x278988u;
    {
        const bool branch_taken_0x278988 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278988u;
        // 0x27898c: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278988) {
            ctx->pc = 0x2788B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2788b0;
        }
    }
    ctx->pc = 0x278990u;
label_278990:
    // 0x278990: 0x3e00008  jr          $ra
    ctx->pc = 0x278990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278998u;
}
