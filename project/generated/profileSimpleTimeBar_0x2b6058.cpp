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

// Function: profileSimpleTimeBar
// Address: 0x2b6058 - 0x2b6280
void profileSimpleTimeBar_0x2b6058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("profileSimpleTimeBar_0x2b6058");
#endif

    switch (ctx->pc) {
        case 0x2b60e8u: goto label_2b60e8;
        case 0x2b6110u: goto label_2b6110;
        case 0x2b6138u: goto label_2b6138;
        case 0x2b6150u: goto label_2b6150;
        case 0x2b6170u: goto label_2b6170;
        case 0x2b61c0u: goto label_2b61c0;
        default: break;
    }

    ctx->pc = 0x2b6058u;

    // 0x2b6058: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2b6058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2b605c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b6060: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b6060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6064: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x2b6064u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b6068: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x2b6068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b606c: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x2b606cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2b6070: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2b6070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2b6074: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b6074u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2b6078: 0x26620006  addiu       $v0, $s3, 0x6
    ctx->pc = 0x2b6078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x2b607c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b607cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b6080: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b6080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b6084: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b6084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b6088: 0x267effff  addiu       $fp, $s3, -0x1
    ctx->pc = 0x2b6088u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2b608c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b6090: 0x26770009  addiu       $s7, $s3, 0x9
    ctx->pc = 0x2b6090u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
    // 0x2b6094: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b6098: 0x26760008  addiu       $s6, $s3, 0x8
    ctx->pc = 0x2b6098u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2b609c: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x2b609cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b60a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b60a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60a4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b60a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2b60a8: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x2b60a8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x2b60ac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b60acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b60b0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2b60b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2b60b4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b60b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b60b8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b60b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b60bc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b60bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b60c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b60c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b60c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b60c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b60c8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2b60c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2b60cc: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x2b60ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x2b60d0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2b60d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2b60d4: 0xc7978fd0  lwc1        $f23, -0x7030($gp)
    ctx->pc = 0x2b60d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b60d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b60d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b60dc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2b60dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2b60e0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2b60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2b60e4: 0x4618a002  mul.s       $f0, $f20, $f24
    ctx->pc = 0x2b60e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
label_2b60e8:
    // 0x2b60e8: 0x3c087f7f  lui         $t0, 0x7F7F
    ctx->pc = 0x2b60e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32639 << 16));
    // 0x2b60ec: 0x4617a500  add.s       $f20, $f20, $f23
    ctx->pc = 0x2b60ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x2b60f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b60f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60f4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b60f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60f8: 0x35087fff  ori         $t0, $t0, 0x7FFF
    ctx->pc = 0x2b60f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32767);
    // 0x2b60fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b60fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6100: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6104: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2b6104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b6108: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B6108u;
    SET_GPR_U32(ctx, 31, 0x2B6110u);
    ctx->pc = 0x2B610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6108u;
    // 0x2b610c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B6108u, 0x2B6110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6110u;
label_2b6110:
    // 0x2b6110: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x2b6110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6114: 0x0  nop
    ctx->pc = 0x2b6114u;
    // NOP
    // 0x2b6118: 0x4503fff3  bc1tl       . + 4 + (-0xD << 2)
    ctx->pc = 0x2B6118u;
    {
        const bool branch_taken_0x2b6118 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6118) {
            ctx->pc = 0x2B611Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6118u;
            // 0x2b611c: 0x4618a002  mul.s       $f0, $f20, $f24 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B60E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b60e8;
        }
    }
    ctx->pc = 0x2B6120u;
    // 0x2b6120: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2b6120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b6124: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x2b6124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2b6128: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2b6128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b612c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2b612cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6134: 0x0  nop
    ctx->pc = 0x2b6134u;
    // NOP
label_2b6138:
    // 0x2b6138: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b6138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b613c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2b613cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6140: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2b6140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6144: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x2b6144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b6148: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B6148u;
    SET_GPR_U32(ctx, 31, 0x2B6150u);
    ctx->pc = 0x2B614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6148u;
    // 0x2b614c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B6148u, 0x2B6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6150u;
label_2b6150:
    // 0x2b6150: 0x263100f0  addiu       $s1, $s1, 0xF0
    ctx->pc = 0x2b6150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2b6154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6158: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b6158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b615c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b615cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6160: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b6160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6164: 0x2408ff7f  addiu       $t0, $zero, -0x81
    ctx->pc = 0x2b6164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2b6168: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B6168u;
    SET_GPR_U32(ctx, 31, 0x2B6170u);
    ctx->pc = 0x2B616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6168u;
    // 0x2b616c: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B6168u, 0x2B6170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6170u;
label_2b6170:
    // 0x2b6170: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2b6170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2b6174: 0x6a1fff0  bgez        $s5, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B6174u;
    {
        const bool branch_taken_0x2b6174 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x2B6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6174u;
        // 0x2b6178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6174) {
            ctx->pc = 0x2B6138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6138;
        }
    }
    ctx->pc = 0x2B617Cu;
    // 0x2b617c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b6180: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6184: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2b6184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6188: 0x0  nop
    ctx->pc = 0x2b6188u;
    // NOP
    // 0x2b618c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B618Cu;
    {
        const bool branch_taken_0x2b618c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b618c) {
            ctx->pc = 0x2B6190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B618Cu;
            // 0x2b6190: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6194u;
            goto label_2b6194;
        }
    }
    ctx->pc = 0x2B6194u;
label_2b6194:
    // 0x2b6194: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x2b6194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x2b6198: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b6198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b619c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61a0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2b61a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b61a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2b61a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b61a8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x2b61a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61ac: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2b61acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b61b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b61b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b61b4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2b61b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b61b8: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B61B8u;
    SET_GPR_U32(ctx, 31, 0x2B61C0u);
    ctx->pc = 0x2B61BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61B8u;
    // 0x2b61bc: 0x2863021  addu        $a2, $s4, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B61B8u, 0x2B61C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61C0u;
label_2b61c0:
    // 0x2b61c0: 0x4619a834  c.lt.s      $f21, $f25
    ctx->pc = 0x2b61c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b61c4: 0x0  nop
    ctx->pc = 0x2b61c4u;
    // NOP
    // 0x2b61c8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2B61C8u;
    {
        const bool branch_taken_0x2b61c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C8u;
        // 0x2b61cc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61c8) {
            ctx->pc = 0x2B623Cu;
            goto label_2b623c;
        }
    }
    ctx->pc = 0x2B61D0u;
    // 0x2b61d0: 0x4614c802  mul.s       $f0, $f25, $f20
    ctx->pc = 0x2b61d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x2b61d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b61d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61d8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b61d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61dc: 0x3c087f7f  lui         $t0, 0x7F7F
    ctx->pc = 0x2b61dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32639 << 16));
    // 0x2b61e0: 0x35087fff  ori         $t0, $t0, 0x7FFF
    ctx->pc = 0x2b61e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32767);
    // 0x2b61e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b61e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b61e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b61e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b61ec: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b61ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b61f0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b61f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b61f4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b61f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b61f8: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x2b61f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b61fc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b61fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b6200: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2b6200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b6204: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x2b6204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2b6208: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b6208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b620c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b620cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6210: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b6210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6214: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b6214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6218: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b6218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b621c: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x2b621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b6220: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x2b6220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b6224: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2b6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b6228: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b6228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b622c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6230: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b6230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6234: 0x80ae108  j           func_2B8420
    ctx->pc = 0x2B6234u;
    ctx->pc = 0x2B6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6234u;
    // 0x2b6238: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x2B623Cu;
label_2b623c:
    // 0x2b623c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b623cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b6240: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b6240u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b6244: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b6244u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b6248: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b6248u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b624c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b624cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6250: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b6250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6254: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b6254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6258: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b6258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b625c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b625cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6260: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x2b6260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b6264: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x2b6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b6268: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2b6268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b626c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b6270: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6274: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6278: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6278u;
        // 0x2b627c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6280u;
}
