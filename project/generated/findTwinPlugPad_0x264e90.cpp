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

// Function: findTwinPlugPad
// Address: 0x264e90 - 0x264fd0
void findTwinPlugPad_0x264e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("findTwinPlugPad_0x264e90");
#endif

    switch (ctx->pc) {
        case 0x264ee8u: goto label_264ee8;
        case 0x264f64u: goto label_264f64;
        default: break;
    }

    ctx->pc = 0x264e90u;

    // 0x264e90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x264e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x264e94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x264e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x264e98: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x264e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x264e9c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x264e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x264ea0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x264ea0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ea4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x264ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x264ea8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x264ea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264eac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x264eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x264eb0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x264eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264eb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x264eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ebc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x264ebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x264ec0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x264ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ec4: 0x8f87a348  lw          $a3, -0x5CB8($gp)
    ctx->pc = 0x264ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x264ec8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x264ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x264ecc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x264eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x264ed0: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x264ed0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x264ed4: 0x18e00032  blez        $a3, . + 4 + (0x32 << 2)
    ctx->pc = 0x264ED4u;
    {
        const bool branch_taken_0x264ed4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x264ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264ED4u;
        // 0x264ed8: 0xc454eb24  lwc1        $f20, -0x14DC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ed4) {
            ctx->pc = 0x264FA0u;
            goto label_264fa0;
        }
    }
    ctx->pc = 0x264EDCu;
    // 0x264edc: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x264edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x264ee0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x264ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x264ee4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x264ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264ee8:
    // 0x264ee8: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x264ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x264eec: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x264eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x264ef0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x264ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x264ef4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x264ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x264ef8: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x264EF8u;
    {
        const bool branch_taken_0x264ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264ef8) {
            ctx->pc = 0x264EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264EF8u;
            // 0x264efc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F94u;
            goto label_264f94;
        }
    }
    ctx->pc = 0x264F00u;
    // 0x264f00: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x264f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x264f04: 0x50540023  beql        $v0, $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x264F04u;
    {
        const bool branch_taken_0x264f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x264f04) {
            ctx->pc = 0x264F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264F04u;
            // 0x264f08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F94u;
            goto label_264f94;
        }
    }
    ctx->pc = 0x264F0Cu;
    // 0x264f0c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x264f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x264f10: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x264f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264f14: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x264f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x264f18: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x264f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x264f1c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x264f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x264f20: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x264f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264f24: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x264f24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x264f28: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x264f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x264f2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x264f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x264f30: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x264f30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x264f34: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x264f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x264f38: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x264f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x264f3c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x264f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x264f40: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x264f40u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x264f44: 0x0  nop
    ctx->pc = 0x264f44u;
    // NOP
    // 0x264f48: 0x0  nop
    ctx->pc = 0x264f48u;
    // NOP
    // 0x264f4c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x264f4cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x264f50: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x264f50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264f54: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x264F54u;
    {
        const bool branch_taken_0x264f54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x264f54) {
            ctx->pc = 0x264F68u;
            goto label_264f68;
        }
    }
    ctx->pc = 0x264F5Cu;
    // 0x264f5c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x264F5Cu;
    SET_GPR_U32(ctx, 31, 0x264F64u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x264F5Cu, 0x264F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F64u;
label_264f64:
    // 0x264f64: 0x8f87a348  lw          $a3, -0x5CB8($gp)
    ctx->pc = 0x264f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
label_264f68:
    // 0x264f68: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x264f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264f6c: 0x0  nop
    ctx->pc = 0x264f6cu;
    // NOP
    // 0x264f70: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x264F70u;
    {
        const bool branch_taken_0x264f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x264f70) {
            ctx->pc = 0x264F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264F70u;
            // 0x264f74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F94u;
            goto label_264f94;
        }
    }
    ctx->pc = 0x264F78u;
    // 0x264f78: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x264f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264f7c: 0x0  nop
    ctx->pc = 0x264f7cu;
    // NOP
    // 0x264f80: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x264F80u;
    {
        const bool branch_taken_0x264f80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x264f80) {
            ctx->pc = 0x264F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264F80u;
            // 0x264f84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F94u;
            goto label_264f94;
        }
    }
    ctx->pc = 0x264F88u;
    // 0x264f88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x264f88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x264f8c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x264f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_264f94:
    // 0x264f94: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x264f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x264f98: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x264F98u;
    {
        const bool branch_taken_0x264f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F98u;
        // 0x264f9c: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f98) {
            ctx->pc = 0x264EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264ee8;
        }
    }
    ctx->pc = 0x264FA0u;
label_264fa0:
    // 0x264fa0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x264fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fa4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x264fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264fa8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x264fa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264fac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x264facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264fb0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x264fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264fb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x264fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264fb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x264fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264fc0: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x264fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x264fc4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x264fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x264fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x264FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FC8u;
        // 0x264fcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264FD0u;
}
