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

// Function: specialfxTimesplitterRadiusTick
// Address: 0x2ad520 - 0x2ad784
void specialfxTimesplitterRadiusTick_0x2ad520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxTimesplitterRadiusTick_0x2ad520");
#endif

    switch (ctx->pc) {
        case 0x2ad5d8u: goto label_2ad5d8;
        case 0x2ad5fcu: goto label_2ad5fc;
        case 0x2ad650u: goto label_2ad650;
        case 0x2ad67cu: goto label_2ad67c;
        case 0x2ad6ccu: goto label_2ad6cc;
        case 0x2ad6f8u: goto label_2ad6f8;
        case 0x2ad70cu: goto label_2ad70c;
        default: break;
    }

    ctx->pc = 0x2ad520u;

    // 0x2ad520: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ad520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ad524: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ad524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ad528: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2ad528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2ad52c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2ad52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2ad530: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ad530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad534: 0x2828818  mult        $s1, $s4, $v0
    ctx->pc = 0x2ad534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2ad538: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2ad538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2ad53c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2ad53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2ad540: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x2ad540u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x2ad544: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ad544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ad548: 0x26b3c268  addiu       $s3, $s5, -0x3D98
    ctx->pc = 0x2ad548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ad54c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2ad54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2ad550: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ad550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ad554: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2ad554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2ad558: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2ad558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ad55c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ad55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2ad560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad564: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2ad564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad568: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ad568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad56c: 0x0  nop
    ctx->pc = 0x2ad56cu;
    // NOP
    // 0x2ad570: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2AD570u;
    {
        const bool branch_taken_0x2ad570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD570u;
        // 0x2ad574: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad570) {
            ctx->pc = 0x2AD604u;
            goto label_2ad604;
        }
    }
    ctx->pc = 0x2AD578u;
    // 0x2ad578: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ad578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ad57c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad584: 0x0  nop
    ctx->pc = 0x2ad584u;
    // NOP
    // 0x2ad588: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x2AD588u;
    {
        const bool branch_taken_0x2ad588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD588u;
        // 0x2ad58c: 0x26620048  addiu       $v0, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad588) {
            ctx->pc = 0x2AD604u;
            goto label_2ad604;
        }
    }
    ctx->pc = 0x2AD590u;
    // 0x2ad590: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2ad590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ad594: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad598: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AD598u;
    {
        const bool branch_taken_0x2ad598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD598u;
        // 0x2ad59c: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad598) {
            ctx->pc = 0x2AD604u;
            goto label_2ad604;
        }
    }
    ctx->pc = 0x2AD5A0u;
    // 0x2ad5a0: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x2ad5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x2ad5a4: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x2ad5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ad5a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ad5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad5ac: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AD5ACu;
    {
        const bool branch_taken_0x2ad5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5ACu;
        // 0x2ad5b0: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5ac) {
            ctx->pc = 0x2AD604u;
            goto label_2ad604;
        }
    }
    ctx->pc = 0x2AD5B4u;
    // 0x2ad5b4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ad5b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ad5b8: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x2ad5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2ad5bc: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2ad5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2ad5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5c4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2ad5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2ad5c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad5ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad5d0: 0xc0a61de  jal         func_298778
    ctx->pc = 0x2AD5D0u;
    SET_GPR_U32(ctx, 31, 0x2AD5D8u);
    ctx->pc = 0x2AD5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD5D0u;
    // 0x2ad5d4: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298778u, 0x2AD5D0u, 0x2AD5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD5D8u;
label_2ad5d8:
    // 0x2ad5d8: 0x26660024  addiu       $a2, $s3, 0x24
    ctx->pc = 0x2ad5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x2ad5dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ad5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ad5e0: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2ad5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2ad5e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad5e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad5e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5ec: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2ad5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2ad5f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5f4: 0xc0a61de  jal         func_298778
    ctx->pc = 0x2AD5F4u;
    SET_GPR_U32(ctx, 31, 0x2AD5FCu);
    ctx->pc = 0x2AD5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD5F4u;
    // 0x2ad5f8: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298778u, 0x2AD5F4u, 0x2AD5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD5FCu;
label_2ad5fc:
    // 0x2ad5fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2ad5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2ad600: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ad600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ad604:
    // 0x2ad604: 0x26b1c268  addiu       $s1, $s5, -0x3D98
    ctx->pc = 0x2ad604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ad608: 0x2838018  mult        $s0, $s4, $v1
    ctx->pc = 0x2ad608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ad60c: 0x26220048  addiu       $v0, $s1, 0x48
    ctx->pc = 0x2ad60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2ad610: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x2ad610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ad614: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ad614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad618: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AD618u;
    {
        const bool branch_taken_0x2ad618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD618u;
        // 0x2ad61c: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad618) {
            ctx->pc = 0x2AD67Cu;
            goto label_2ad67c;
        }
    }
    ctx->pc = 0x2AD620u;
    // 0x2ad620: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ad620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2ad624: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ad624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ad628: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2ad628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad62c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ad62cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad630: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2ad630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad634: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ad634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad638: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ad638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ad63c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x2ad63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad640: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2ad640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ad644: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2ad644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ad648: 0xc0a5ba2  jal         func_296E88
    ctx->pc = 0x2AD648u;
    SET_GPR_U32(ctx, 31, 0x2AD650u);
    ctx->pc = 0x2AD64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD648u;
    // 0x2ad64c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E88u, 0x2AD648u, 0x2AD650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD650u;
label_2ad650:
    // 0x2ad650: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2ad650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2ad654: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2ad654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2ad658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad65c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ad65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad664: 0x0  nop
    ctx->pc = 0x2ad664u;
    // NOP
    // 0x2ad668: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD668u;
    {
        const bool branch_taken_0x2ad668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD668u;
        // 0x2ad66c: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad668) {
            ctx->pc = 0x2AD680u;
            goto label_2ad680;
        }
    }
    ctx->pc = 0x2AD670u;
    // 0x2ad670: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ad670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad674: 0xc0a5b94  jal         func_296E50
    ctx->pc = 0x2AD674u;
    SET_GPR_U32(ctx, 31, 0x2AD67Cu);
    ctx->pc = 0x2AD678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD674u;
    // 0x2ad678: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x2AD674u, 0x2AD67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD67Cu;
label_2ad67c:
    // 0x2ad67c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ad67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ad680:
    // 0x2ad680: 0x26b1c268  addiu       $s1, $s5, -0x3D98
    ctx->pc = 0x2ad680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ad684: 0x2838018  mult        $s0, $s4, $v1
    ctx->pc = 0x2ad684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ad688: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x2ad688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x2ad68c: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x2ad68cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ad690: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ad690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad694: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AD694u;
    {
        const bool branch_taken_0x2ad694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD694u;
        // 0x2ad698: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad694) {
            ctx->pc = 0x2AD6F8u;
            goto label_2ad6f8;
        }
    }
    ctx->pc = 0x2AD69Cu;
    // 0x2ad69c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ad69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2ad6a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ad6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ad6a4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2ad6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad6a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ad6a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad6ac: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2ad6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad6b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ad6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad6b4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ad6b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ad6b8: 0xc442002c  lwc1        $f2, 0x2C($v0)
    ctx->pc = 0x2ad6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad6bc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2ad6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ad6c0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2ad6c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ad6c4: 0xc0a5ba2  jal         func_296E88
    ctx->pc = 0x2AD6C4u;
    SET_GPR_U32(ctx, 31, 0x2AD6CCu);
    ctx->pc = 0x2AD6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD6C4u;
    // 0x2ad6c8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E88u, 0x2AD6C4u, 0x2AD6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD6CCu;
label_2ad6cc:
    // 0x2ad6cc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2ad6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2ad6d0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2ad6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2ad6d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad6d8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ad6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad6dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad6dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad6e0: 0x0  nop
    ctx->pc = 0x2ad6e0u;
    // NOP
    // 0x2ad6e4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD6E4u;
    {
        const bool branch_taken_0x2ad6e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6E4u;
        // 0x2ad6e8: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6e4) {
            ctx->pc = 0x2AD6FCu;
            goto label_2ad6fc;
        }
    }
    ctx->pc = 0x2AD6ECu;
    // 0x2ad6ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ad6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad6f0: 0xc0a5b94  jal         func_296E50
    ctx->pc = 0x2AD6F0u;
    SET_GPR_U32(ctx, 31, 0x2AD6F8u);
    ctx->pc = 0x2AD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD6F0u;
    // 0x2ad6f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x2AD6F0u, 0x2AD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD6F8u;
label_2ad6f8:
    // 0x2ad6f8: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2ad6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_2ad6fc:
    // 0x2ad6fc: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AD6FCu;
    {
        const bool branch_taken_0x2ad6fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6FCu;
        // 0x2ad700: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6fc) {
            ctx->pc = 0x2AD760u;
            goto label_2ad760;
        }
    }
    ctx->pc = 0x2AD704u;
    // 0x2ad704: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AD704u;
    SET_GPR_U32(ctx, 31, 0x2AD70Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AD704u, 0x2AD70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD70Cu;
label_2ad70c:
    // 0x2ad70c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ad70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ad710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ad710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad714: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x2ad714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ad718: 0x26a2c268  addiu       $v0, $s5, -0x3D98
    ctx->pc = 0x2ad718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ad71c: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x2ad71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2ad720: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD720u;
    {
        const bool branch_taken_0x2ad720 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2AD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD720u;
        // 0x2ad724: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad720) {
            ctx->pc = 0x2AD734u;
            goto label_2ad734;
        }
    }
    ctx->pc = 0x2AD728u;
    // 0x2ad728: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ad728u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad72c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD72Cu;
    {
        const bool branch_taken_0x2ad72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD72Cu;
        // 0x2ad730: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad72c) {
            ctx->pc = 0x2AD74Cu;
            goto label_2ad74c;
        }
    }
    ctx->pc = 0x2AD734u;
label_2ad734:
    // 0x2ad734: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2ad734u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2ad738: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2ad738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2ad73c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ad73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ad740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ad740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad744: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ad744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ad748: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ad748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ad74c:
    // 0x2ad74c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ad74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ad750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad754: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ad754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ad758: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2ad758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2ad75c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ad75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ad760:
    // 0x2ad760: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2ad760u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ad764: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2ad764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad768: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2ad768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad76c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ad76cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad770: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2ad770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad774: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ad774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad778: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2ad778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad77c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD77Cu;
        // 0x2ad780: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD784u;
}
