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

// Function: debugtesthits
// Address: 0x284e90 - 0x284fc4
void debugtesthits_0x284e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugtesthits_0x284e90");
#endif

    switch (ctx->pc) {
        case 0x284f58u: goto label_284f58;
        case 0x284f90u: goto label_284f90;
        case 0x284fb4u: goto label_284fb4;
        default: break;
    }

    ctx->pc = 0x284e90u;

    // 0x284e90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x284e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x284e94: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x284e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x284e98: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x284e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x284e9c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x284e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x284ea0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x284ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x284ea4: 0x3484ffdf  ori         $a0, $a0, 0xFFDF
    ctx->pc = 0x284ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65503);
    // 0x284ea8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x284ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x284eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284eb0: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x284eb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284eb4: 0xc464008c  lwc1        $f4, 0x8C($v1)
    ctx->pc = 0x284eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x284eb8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x284eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x284ebc: 0x8c690180  lw          $t1, 0x180($v1)
    ctx->pc = 0x284ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x284ec0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x284ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x284ec4: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x284ec4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x284ec8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x284ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ed0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x284ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ed4: 0xc4620090  lwc1        $f2, 0x90($v1)
    ctx->pc = 0x284ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284ed8: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x284ed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x284edc: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x284edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x284ee0: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x284ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x284ee4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x284ee4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x284ee8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x284ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x284eec: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x284eecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x284ef0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x284ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x284ef4: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x284ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x284ef8: 0xc4630094  lwc1        $f3, 0x94($v1)
    ctx->pc = 0x284ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x284efc: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x284efcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x284f00: 0xc461008c  lwc1        $f1, 0x8C($v1)
    ctx->pc = 0x284f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284f04: 0xc46007a8  lwc1        $f0, 0x7A8($v1)
    ctx->pc = 0x284f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284f08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x284f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x284f0c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x284f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x284f10: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x284f10u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x284f14: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x284f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284f18: 0xc46107ac  lwc1        $f1, 0x7AC($v1)
    ctx->pc = 0x284f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284f1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x284f1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x284f20: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x284f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x284f24: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x284f24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x284f28: 0xc46007b0  lwc1        $f0, 0x7B0($v1)
    ctx->pc = 0x284f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284f2c: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x284f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284f30: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x284f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x284f34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x284f34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x284f38: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x284f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x284f3c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x284f3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x284f40: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x284f40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x284f44: 0x8c64031c  lw          $a0, 0x31C($v1)
    ctx->pc = 0x284f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x284f48: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x284f48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x284f4c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x284f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x284f50: 0xc09640e  jal         func_259038
    ctx->pc = 0x284F50u;
    SET_GPR_U32(ctx, 31, 0x284F58u);
    ctx->pc = 0x284F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F50u;
    // 0x284f54: 0xe7a30028  swc1        $f3, 0x28($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x284F50u, 0x284F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F58u;
label_284f58:
    // 0x284f58: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x284f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x284f5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x284f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f60: 0x8c640180  lw          $a0, 0x180($v1)
    ctx->pc = 0x284f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x284f64: 0x8c65089c  lw          $a1, 0x89C($v1)
    ctx->pc = 0x284f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2204)));
    // 0x284f68: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x284f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x284f6c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x284f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x284f70: 0x14c50009  bne         $a2, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x284F70u;
    {
        const bool branch_taken_0x284f70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x284F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F70u;
        // 0x284f74: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f70) {
            ctx->pc = 0x284F98u;
            goto label_284f98;
        }
    }
    ctx->pc = 0x284F78u;
    // 0x284f78: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x284f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x284f7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x284f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x284f80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x284f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x284f88: 0xc0b1e6a  jal         func_2C79A8
    ctx->pc = 0x284F88u;
    SET_GPR_U32(ctx, 31, 0x284F90u);
    ctx->pc = 0x284F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F88u;
    // 0x284f8c: 0x34c60060  ori         $a2, $a2, 0x60 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)96);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C79A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C79A8u, 0x284F88u, 0x284F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F90u;
label_284f90:
    // 0x284f90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x284F90u;
    {
        const bool branch_taken_0x284f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F90u;
        // 0x284f94: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f90) {
            ctx->pc = 0x284FB8u;
            goto label_284fb8;
        }
    }
    ctx->pc = 0x284F98u;
label_284f98:
    // 0x284f98: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x284F98u;
    {
        const bool branch_taken_0x284f98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F98u;
        // 0x284f9c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f98) {
            ctx->pc = 0x284FB4u;
            goto label_284fb4;
        }
    }
    ctx->pc = 0x284FA0u;
    // 0x284fa0: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x284fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
    // 0x284fa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x284fa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x284fa8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x284fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x284fac: 0xc0b1e6a  jal         func_2C79A8
    ctx->pc = 0x284FACu;
    SET_GPR_U32(ctx, 31, 0x284FB4u);
    ctx->pc = 0x284FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284FACu;
    // 0x284fb0: 0x34c60060  ori         $a2, $a2, 0x60 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)96);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C79A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C79A8u, 0x284FACu, 0x284FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284FB4u;
label_284fb4:
    // 0x284fb4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x284fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_284fb8:
    // 0x284fb8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x284fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x284FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FBCu;
        // 0x284fc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284FC4u;
}
