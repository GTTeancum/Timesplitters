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

// Function: moveFindFloor
// Address: 0x27c9f0 - 0x27cb68
void moveFindFloor_0x27c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveFindFloor_0x27c9f0");
#endif

    switch (ctx->pc) {
        case 0x27ca94u: goto label_27ca94;
        case 0x27cac8u: goto label_27cac8;
        case 0x27cae8u: goto label_27cae8;
        default: break;
    }

    ctx->pc = 0x27c9f0u;

    // 0x27c9f0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x27c9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x27c9f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27c9f8: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x27c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x27c9fc: 0xffb70110  sd          $s7, 0x110($sp)
    ctx->pc = 0x27c9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 23));
    // 0x27ca00: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x27ca00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca04: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x27ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x27ca08: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x27ca08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca0c: 0xffb500f0  sd          $s5, 0xF0($sp)
    ctx->pc = 0x27ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x27ca10: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x27ca10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27ca14: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x27ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x27ca18: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x27ca18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ca1c: 0xffb300d0  sd          $s3, 0xD0($sp)
    ctx->pc = 0x27ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x27ca20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27ca20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca24: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x27ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x27ca28: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x27ca28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca2c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x27ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x27ca30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27ca30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca34: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x27ca34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x27ca38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ca38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca3c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x27ca3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x27ca40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27ca44: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x27ca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x27ca48: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27ca48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27ca4c: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x27ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x27ca50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27ca50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca54: 0xc455f9cc  lwc1        $f21, -0x634($v0)
    ctx->pc = 0x27ca54u;
    { uint32_t bits = FAST_READ32(0x3AF9CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ca58: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ca5c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ca60: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x27ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27ca64: 0x460d0080  add.s       $f2, $f0, $f13
    ctx->pc = 0x27ca64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x27ca68: 0x460d0900  add.s       $f4, $f1, $f13
    ctx->pc = 0x27ca68u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x27ca6c: 0x461428c0  add.s       $f3, $f5, $f20
    ctx->pc = 0x27ca6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x27ca70: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x27ca70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27ca74: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x27ca74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x27ca78: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x27ca78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x27ca7c: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x27ca7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x27ca80: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x27ca80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27ca84: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x27ca84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27ca88: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x27ca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27ca8c: 0xc095c72  jal         func_2571C8
    ctx->pc = 0x27CA8Cu;
    SET_GPR_U32(ctx, 31, 0x27CA94u);
    ctx->pc = 0x27CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA8Cu;
    // 0x27ca90: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2571C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571C8u, 0x27CA8Cu, 0x27CA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA94u;
label_27ca94:
    // 0x27ca94: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ca98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27ca98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca9c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x27ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27caa0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x27caa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x27caa4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x27caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27caa8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x27caa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27caac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x27caacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27cab0: 0x1a600017  blez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x27CAB0u;
    {
        const bool branch_taken_0x27cab0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x27CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAB0u;
        // 0x27cab4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cab0) {
            ctx->pc = 0x27CB10u;
            goto label_27cb10;
        }
    }
    ctx->pc = 0x27CAB8u;
    // 0x27cab8: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x27cab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27cabc: 0x27b00094  addiu       $s0, $sp, 0x94
    ctx->pc = 0x27cabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x27cac0: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x27cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x27cac4: 0x0  nop
    ctx->pc = 0x27cac4u;
    // NOP
label_27cac8:
    // 0x27cac8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x27cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x27cacc: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x27caccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x27cad0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x27cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x27cad4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27cad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cad8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27cad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cadc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27cae0: 0xc09f1e6  jal         func_27C798
    ctx->pc = 0x27CAE0u;
    SET_GPR_U32(ctx, 31, 0x27CAE8u);
    ctx->pc = 0x27CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAE0u;
    // 0x27cae4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C798u, 0x27CAE0u, 0x27CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAE8u;
label_27cae8:
    // 0x27cae8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x27cae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27caec: 0x0  nop
    ctx->pc = 0x27caecu;
    // NOP
    // 0x27caf0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27CAF0u;
    {
        const bool branch_taken_0x27caf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAF0u;
        // 0x27caf4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27caf0) {
            ctx->pc = 0x27CB04u;
            goto label_27cb04;
        }
    }
    ctx->pc = 0x27CAF8u;
    // 0x27caf8: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x27caf8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27cafc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27cafcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27cb00: 0x8fb60094  lw          $s6, 0x94($sp)
    ctx->pc = 0x27cb00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_27cb04:
    // 0x27cb04: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x27cb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x27cb08: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x27CB08u;
    {
        const bool branch_taken_0x27cb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb08) {
            ctx->pc = 0x27CB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CB08u;
            // 0x27cb0c: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cac8;
        }
    }
    ctx->pc = 0x27CB10u;
label_27cb10:
    // 0x27cb10: 0x57c00001  bnel        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27CB10u;
    {
        const bool branch_taken_0x27cb10 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb10) {
            ctx->pc = 0x27CB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CB10u;
            // 0x27cb14: 0xafd40000  sw          $s4, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CB18u;
            goto label_27cb18;
        }
    }
    ctx->pc = 0x27CB18u;
label_27cb18:
    // 0x27cb18: 0x56e00001  bnel        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27CB18u;
    {
        const bool branch_taken_0x27cb18 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb18) {
            ctx->pc = 0x27CB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CB18u;
            // 0x27cb1c: 0xaef60000  sw          $s6, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CB20u;
            goto label_27cb20;
        }
    }
    ctx->pc = 0x27CB20u;
label_27cb20:
    // 0x27cb20: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x27cb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x27cb24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27cb24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cb28: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27CB28u;
    {
        const bool branch_taken_0x27cb28 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb28) {
            ctx->pc = 0x27CB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CB28u;
            // 0x27cb2c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CB30u;
            goto label_27cb30;
        }
    }
    ctx->pc = 0x27CB30u;
label_27cb30:
    // 0x27cb30: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x27cb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27cb34: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x27cb34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27cb38: 0xdfb70110  ld          $s7, 0x110($sp)
    ctx->pc = 0x27cb38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27cb3c: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x27cb3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27cb40: 0xdfb500f0  ld          $s5, 0xF0($sp)
    ctx->pc = 0x27cb40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27cb44: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x27cb44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27cb48: 0xdfb300d0  ld          $s3, 0xD0($sp)
    ctx->pc = 0x27cb48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27cb4c: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x27cb4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27cb50: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x27cb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27cb54: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x27cb54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27cb58: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x27cb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27cb5c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x27cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27cb60: 0x3e00008  jr          $ra
    ctx->pc = 0x27CB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB60u;
        // 0x27cb64: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CB68u;
}
