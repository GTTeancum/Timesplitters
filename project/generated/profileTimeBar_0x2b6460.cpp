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

// Function: profileTimeBar
// Address: 0x2b6460 - 0x2b662c
void profileTimeBar_0x2b6460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("profileTimeBar_0x2b6460");
#endif

    switch (ctx->pc) {
        case 0x2b64f0u: goto label_2b64f0;
        case 0x2b6518u: goto label_2b6518;
        case 0x2b6540u: goto label_2b6540;
        case 0x2b6558u: goto label_2b6558;
        case 0x2b6578u: goto label_2b6578;
        default: break;
    }

    ctx->pc = 0x2b6460u;

    // 0x2b6460: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2b6460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2b6464: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b6464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b6468: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b6468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b646c: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x2b646cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2b6470: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x2b6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b6474: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b6474u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2b6478: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2b6478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2b647c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b647cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2b6480: 0x26620006  addiu       $v0, $s3, 0x6
    ctx->pc = 0x2b6480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x2b6484: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b6484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b6488: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b6488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b648c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b6490: 0x267effff  addiu       $fp, $s3, -0x1
    ctx->pc = 0x2b6490u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2b6494: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b6494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b6498: 0x26770009  addiu       $s7, $s3, 0x9
    ctx->pc = 0x2b6498u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
    // 0x2b649c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b649cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b64a0: 0x26760008  addiu       $s6, $s3, 0x8
    ctx->pc = 0x2b64a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2b64a4: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x2b64a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b64a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b64a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b64ac: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x2b64acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b64b0: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x2b64b0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x2b64b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b64b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b64b8: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x2b64b8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x2b64bc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b64bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b64c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b64c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b64c4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b64c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b64c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b64c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b64cc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b64ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b64d0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2b64d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2b64d4: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x2b64d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x2b64d8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2b64d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2b64dc: 0xc7968fd4  lwc1        $f22, -0x702C($gp)
    ctx->pc = 0x2b64dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b64e0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b64e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b64e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b64e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b64e8: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2b64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2b64ec: 0x4617a002  mul.s       $f0, $f20, $f23
    ctx->pc = 0x2b64ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
label_2b64f0:
    // 0x2b64f0: 0x3c087f7f  lui         $t0, 0x7F7F
    ctx->pc = 0x2b64f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32639 << 16));
    // 0x2b64f4: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x2b64f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x2b64f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b64f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b64fc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b64fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6500: 0x35087fff  ori         $t0, $t0, 0x7FFF
    ctx->pc = 0x2b6500u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32767);
    // 0x2b6504: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6508: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b650c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2b650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b6510: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B6510u;
    SET_GPR_U32(ctx, 31, 0x2B6518u);
    ctx->pc = 0x2B6514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6510u;
    // 0x2b6514: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B6510u, 0x2B6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6518u;
label_2b6518:
    // 0x2b6518: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x2b6518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b651c: 0x0  nop
    ctx->pc = 0x2b651cu;
    // NOP
    // 0x2b6520: 0x4503fff3  bc1tl       . + 4 + (-0xD << 2)
    ctx->pc = 0x2B6520u;
    {
        const bool branch_taken_0x2b6520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6520) {
            ctx->pc = 0x2B6524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6520u;
            // 0x2b6524: 0x4617a002  mul.s       $f0, $f20, $f23 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B64F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b64f0;
        }
    }
    ctx->pc = 0x2B6528u;
    // 0x2b6528: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2b6528u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b652c: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x2b652cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2b6530: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2b6530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6534: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2b6534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b653c: 0x0  nop
    ctx->pc = 0x2b653cu;
    // NOP
label_2b6540:
    // 0x2b6540: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b6540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6544: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2b6544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6548: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2b6548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b654c: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x2b654cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b6550: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B6550u;
    SET_GPR_U32(ctx, 31, 0x2B6558u);
    ctx->pc = 0x2B6554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6550u;
    // 0x2b6554: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B6550u, 0x2B6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6558u;
label_2b6558:
    // 0x2b6558: 0x263100f0  addiu       $s1, $s1, 0xF0
    ctx->pc = 0x2b6558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2b655c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6560: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b6560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6564: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b6564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6568: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b6568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b656c: 0x2408ff7f  addiu       $t0, $zero, -0x81
    ctx->pc = 0x2b656cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2b6570: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B6570u;
    SET_GPR_U32(ctx, 31, 0x2B6578u);
    ctx->pc = 0x2B6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6570u;
    // 0x2b6574: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B6570u, 0x2B6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6578u;
label_2b6578:
    // 0x2b6578: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2b6578u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2b657c: 0x6a1fff0  bgez        $s5, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B657Cu;
    {
        const bool branch_taken_0x2b657c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x2B6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B657Cu;
        // 0x2b6580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b657c) {
            ctx->pc = 0x2B6540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6540;
        }
    }
    ctx->pc = 0x2B6584u;
    // 0x2b6584: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b6584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b6588: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b658c: 0x4601c036  c.le.s      $f24, $f1
    ctx->pc = 0x2b658cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6590: 0x0  nop
    ctx->pc = 0x2b6590u;
    // NOP
    // 0x2b6594: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6594u;
    {
        const bool branch_taken_0x2b6594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6594u;
        // 0x2b6598: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6594) {
            ctx->pc = 0x2B65A0u;
            goto label_2b65a0;
        }
    }
    ctx->pc = 0x2B659Cu;
    // 0x2b659c: 0x4600c086  mov.s       $f2, $f24
    ctx->pc = 0x2b659cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[24]);
label_2b65a0:
    // 0x2b65a0: 0x4601c836  c.le.s      $f25, $f1
    ctx->pc = 0x2b65a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b65a4: 0x0  nop
    ctx->pc = 0x2b65a4u;
    // NOP
    // 0x2b65a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B65A8u;
    {
        const bool branch_taken_0x2b65a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b65a8) {
            ctx->pc = 0x2B65ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B65A8u;
            // 0x2b65ac: 0x4600c846  mov.s       $f1, $f25 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65B0u;
            goto label_2b65b0;
        }
    }
    ctx->pc = 0x2B65B0u;
label_2b65b0:
    // 0x2b65b0: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x2b65b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x2b65b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b65b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b65b8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2b65b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b65bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b65bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b65c0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x2b65c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b65c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b65c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b65c8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2b65c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b65cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b65ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b65d0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b65d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b65d4: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x2b65d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b65d8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b65d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b65dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b65dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b65e0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b65e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b65e4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b65e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b65e8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b65e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b65ec: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x2b65ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2b65f0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b65f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b65f4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2b65f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b65f8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b65f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b65fc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b65fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6600: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b6600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6604: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b6604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6608: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b6608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b660c: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x2b660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b6610: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x2b6610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b6614: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2b6614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b6618: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b6618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b661c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6620: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b6620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6624: 0x80ae108  j           func_2B8420
    ctx->pc = 0x2B6624u;
    ctx->pc = 0x2B6628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6624u;
    // 0x2b6628: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x2B662Cu;
}
