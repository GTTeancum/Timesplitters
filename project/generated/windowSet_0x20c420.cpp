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

// Function: windowSet
// Address: 0x20c420 - 0x20c514
void windowSet_0x20c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("windowSet_0x20c420");
#endif

    switch (ctx->pc) {
        case 0x20c494u: goto label_20c494;
        case 0x20c4f0u: goto label_20c4f0;
        default: break;
    }

    ctx->pc = 0x20c420u;

    // 0x20c420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20c420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20c424: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x20c424u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x20c428: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20c42c: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x20c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x20c430: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20c430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20c434: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c43c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c43cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c440: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20c440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20c444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20c448: 0x253099f0  addiu       $s0, $t1, -0x6610
    ctx->pc = 0x20c448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941168));
    // 0x20c44c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x20c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20c450: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x20c450u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20c454: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x20c454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c458: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20c458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20c45c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20c460: 0xad2499f0  sw          $a0, -0x6610($t1)
    ctx->pc = 0x20c460u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294941168), GPR_U32(ctx, 4));
    // 0x20c464: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20c464u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20c468: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20c468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c46c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x20c46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c470: 0x0  nop
    ctx->pc = 0x20c470u;
    // NOP
    // 0x20c474: 0x0  nop
    ctx->pc = 0x20c474u;
    // NOP
    // 0x20c478: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20c478u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20c47c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x20c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x20c480: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x20c480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x20c484: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x20c484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x20c488: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20c488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x20c48c: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20C48Cu;
    SET_GPR_U32(ctx, 31, 0x20C494u);
    ctx->pc = 0x20C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C48Cu;
    // 0x20c490: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20C48Cu, 0x20C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C494u;
label_20c494:
    // 0x20c494: 0x2512023  subu        $a0, $s2, $s1
    ctx->pc = 0x20c494u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x20c498: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x20c498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c49c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20c49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20c4a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20c4a4: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x20c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x20c4a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20c4a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c4ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20c4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20c4b0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20c4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20c4b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c4b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20c4bc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x20c4bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20c4c0: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x20c4c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
    // 0x20c4c4: 0x0  nop
    ctx->pc = 0x20c4c4u;
    // NOP
    // 0x20c4c8: 0x0  nop
    ctx->pc = 0x20c4c8u;
    // NOP
    // 0x20c4cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20c4ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20c4d0: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x20c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x20c4d4: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x20c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x20c4d8: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x20c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x20c4dc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x20c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x20c4e0: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x20c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x20c4e4: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x20c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x20c4e8: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20C4E8u;
    SET_GPR_U32(ctx, 31, 0x20C4F0u);
    ctx->pc = 0x20C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4E8u;
    // 0x20c4ec: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20C4E8u, 0x20C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4F0u;
label_20c4f0:
    // 0x20c4f0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20c4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20c4f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20c4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c4f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20c4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20c4fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20c4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c500: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x20c500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x20c504: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20c504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c50c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C50Cu;
        // 0x20c510: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C514u;
}
