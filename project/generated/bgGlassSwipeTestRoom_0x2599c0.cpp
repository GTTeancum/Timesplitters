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

// Function: bgGlassSwipeTestRoom
// Address: 0x2599c0 - 0x259bec
void bgGlassSwipeTestRoom_0x2599c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGlassSwipeTestRoom_0x2599c0");
#endif

    switch (ctx->pc) {
        case 0x259a68u: goto label_259a68;
        case 0x259ab0u: goto label_259ab0;
        case 0x259b24u: goto label_259b24;
        case 0x259b74u: goto label_259b74;
        case 0x259b94u: goto label_259b94;
        default: break;
    }

    ctx->pc = 0x2599c0u;

    // 0x2599c0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2599c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2599c4: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2599c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2599c8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2599c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2599cc: 0x8f83a240  lw          $v1, -0x5DC0($gp)
    ctx->pc = 0x2599ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x2599d0: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2599d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2599d4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2599d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2599d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2599d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599dc: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2599dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2599e0: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x2599e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x2599e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2599e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2599e8: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x2599e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2599ec: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2599ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2599f0: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2599f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2599f4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2599f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2599f8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2599f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2599fc: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2599fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x259a00: 0x8c960010  lw          $s6, 0x10($a0)
    ctx->pc = 0x259a00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x259a04: 0x12c0006d  beqz        $s6, . + 4 + (0x6D << 2)
    ctx->pc = 0x259A04u;
    {
        const bool branch_taken_0x259a04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A04u;
        // 0x259a08: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a04) {
            ctx->pc = 0x259BBCu;
            goto label_259bbc;
        }
    }
    ctx->pc = 0x259A0Cu;
    // 0x259a0c: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x259a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259a10: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x259a10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a14: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x259a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x259a18: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x259a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259a1c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x259a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259a20: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x259a20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x259a24: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x259a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259a28: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x259a28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x259a2c: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x259a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x259a30: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x259a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x259a34: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x259a34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x259a38: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x259a38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x259a3c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x259a3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x259a40: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x259a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x259a44: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x259a44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x259a48: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x259a48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x259a4c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x259a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x259a50: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x259a50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x259a54: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x259A54u;
    {
        const bool branch_taken_0x259a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A54u;
        // 0x259a58: 0x46021d00  add.s       $f20, $f3, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a54) {
            ctx->pc = 0x259BBCu;
            goto label_259bbc;
        }
    }
    ctx->pc = 0x259A5Cu;
    // 0x259a5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x259a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a60: 0x961021  addu        $v0, $a0, $s6
    ctx->pc = 0x259a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x259a64: 0x0  nop
    ctx->pc = 0x259a64u;
    // NOP
label_259a68:
    // 0x259a68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x259a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259a6c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x259a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259a70: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x259a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259a74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x259a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259a78: 0x0  nop
    ctx->pc = 0x259a78u;
    // NOP
    // 0x259a7c: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x259A7Cu;
    {
        const bool branch_taken_0x259a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A7Cu;
        // 0x259a80: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a7c) {
            ctx->pc = 0x259BA0u;
            goto label_259ba0;
        }
    }
    ctx->pc = 0x259A84u;
    // 0x259a84: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x259a84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259a88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x259a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x259a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x259a90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x259a90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x259a94: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x259a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x259a98: 0x26070038  addiu       $a3, $s0, 0x38
    ctx->pc = 0x259a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x259a9c: 0x26080060  addiu       $t0, $s0, 0x60
    ctx->pc = 0x259a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x259aa0: 0x26090088  addiu       $t1, $s0, 0x88
    ctx->pc = 0x259aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x259aa4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x259aa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259aa8: 0xc0964ca  jal         func_259328
    ctx->pc = 0x259AA8u;
    SET_GPR_U32(ctx, 31, 0x259AB0u);
    ctx->pc = 0x259AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259AA8u;
    // 0x259aac: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259328u, 0x259AA8u, 0x259AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AB0u;
label_259ab0:
    // 0x259ab0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x259AB0u;
    {
        const bool branch_taken_0x259ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AB0u;
        // 0x259ab4: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ab0) {
            ctx->pc = 0x259BA0u;
            goto label_259ba0;
        }
    }
    ctx->pc = 0x259AB8u;
    // 0x259ab8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x259ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259abc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x259abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x259ac0: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x259ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x259ac4: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x259ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259ac8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x259ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259acc: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x259accu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x259ad0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x259ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259ad4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x259ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259ad8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x259ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x259adc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x259adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259ae0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x259ae0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x259ae4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x259ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x259ae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x259ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259aec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x259aecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x259af0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x259af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x259af4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x259af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x259af8: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x259af8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x259afc: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x259afcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x259b00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b04: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x259b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x259b08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b0c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x259b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x259b10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x259b10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x259b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x259b18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x259b18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b1c: 0xc09640e  jal         func_259038
    ctx->pc = 0x259B1Cu;
    SET_GPR_U32(ctx, 31, 0x259B24u);
    ctx->pc = 0x259B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B1Cu;
    // 0x259b20: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x259B1Cu, 0x259B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B24u;
label_259b24:
    // 0x259b24: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x259B24u;
    {
        const bool branch_taken_0x259b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b24) {
            ctx->pc = 0x259B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B24u;
            // 0x259b28: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B98u;
            goto label_259b98;
        }
    }
    ctx->pc = 0x259B2Cu;
    // 0x259b2c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x259b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x259b30: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x259b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x259b34: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x259b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x259b38: 0x24482670  addiu       $t0, $v0, 0x2670
    ctx->pc = 0x259b38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
    // 0x259b3c: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x259b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x259b40: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x259b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x259b44: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x259b44u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A2678u));
    // 0x259b48: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x259b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x259b4c: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x259b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x259b50: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x259b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x259b54: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x259B54u;
    {
        const bool branch_taken_0x259b54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x259B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B54u;
        // 0x259b58: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b54) {
            ctx->pc = 0x259B74u;
            goto label_259b74;
        }
    }
    ctx->pc = 0x259B5Cu;
    // 0x259b5c: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x259b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x259b60: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x259b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x259b64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259b68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259b6c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x259B6Cu;
    SET_GPR_U32(ctx, 31, 0x259B74u);
    ctx->pc = 0x259B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B6Cu;
    // 0x259b70: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x259B6Cu, 0x259B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B74u;
label_259b74:
    // 0x259b74: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x259b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x259b78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b80: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x259b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b84: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x259b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b88: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x259b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b8c: 0xc0965e0  jal         func_259780
    ctx->pc = 0x259B8Cu;
    SET_GPR_U32(ctx, 31, 0x259B94u);
    ctx->pc = 0x259B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B8Cu;
    // 0x259b90: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259780u, 0x259B8Cu, 0x259B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B94u;
label_259b94:
    // 0x259b94: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x259b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_259b98:
    // 0x259b98: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x259b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x259b9c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x259b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_259ba0:
    // 0x259ba0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x259ba0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x259ba4: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x259ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x259ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x259ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259bac: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x259bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x259bb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x259bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259bb4: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x259BB4u;
    {
        const bool branch_taken_0x259bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BB4u;
        // 0x259bb8: 0x961021  addu        $v0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bb4) {
            ctx->pc = 0x259A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259a68;
        }
    }
    ctx->pc = 0x259BBCu;
label_259bbc:
    // 0x259bbc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x259bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x259bc0: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x259bc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x259bc4: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x259bc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259bc8: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x259bc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259bcc: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x259bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x259bd0: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x259bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259bd4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x259bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259bd8: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x259bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259bdc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x259bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259be0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x259be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259be4: 0x3e00008  jr          $ra
    ctx->pc = 0x259BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BE4u;
        // 0x259be8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259BECu;
}
