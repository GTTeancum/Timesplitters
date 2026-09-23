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

// Function: awareOfTarget
// Address: 0x2c66a0 - 0x2c6804
void awareOfTarget_0x2c66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("awareOfTarget_0x2c66a0");
#endif

    switch (ctx->pc) {
        case 0x2c66dcu: goto label_2c66dc;
        case 0x2c6728u: goto label_2c6728;
        default: break;
    }

    ctx->pc = 0x2c66a0u;

    // 0x2c66a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c66a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c66a4: 0x8f829cec  lw          $v0, -0x6314($gp)
    ctx->pc = 0x2c66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941932)));
    // 0x2c66a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c66ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c66acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c66b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c66b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c66b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c66b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C66B8u;
    {
        const bool branch_taken_0x2c66b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66B8u;
        // 0x2c66bc: 0x8e110160  lw          $s1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66b8) {
            ctx->pc = 0x2C66C8u;
            goto label_2c66c8;
        }
    }
    ctx->pc = 0x2C66C0u;
    // 0x2c66c0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2C66C0u;
    {
        const bool branch_taken_0x2c66c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66C0u;
        // 0x2c66c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66c0) {
            ctx->pc = 0x2C67F0u;
            goto label_2c67f0;
        }
    }
    ctx->pc = 0x2C66C8u;
label_2c66c8:
    // 0x2c66c8: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2c66c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c66cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c66ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66d0: 0xc62c0a8c  lwc1        $f12, 0xA8C($s1)
    ctx->pc = 0x2c66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c66d4: 0xc0b1a02  jal         func_2C6808
    ctx->pc = 0x2C66D4u;
    SET_GPR_U32(ctx, 31, 0x2C66DCu);
    ctx->pc = 0x2C66D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C66D4u;
    // 0x2c66d8: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6808u, 0x2C66D4u, 0x2C66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66DCu;
label_2c66dc:
    // 0x2c66dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C66DCu;
    {
        const bool branch_taken_0x2c66dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c66dc) {
            ctx->pc = 0x2C66E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C66DCu;
            // 0x2c66e0: 0x8e220a90  lw          $v0, 0xA90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C66F4u;
            goto label_2c66f4;
        }
    }
    ctx->pc = 0x2C66E4u;
    // 0x2c66e4: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2c66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c66e8: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2C66E8u;
    {
        const bool branch_taken_0x2c66e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66E8u;
        // 0x2c66ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66e8) {
            ctx->pc = 0x2C67F0u;
            goto label_2c67f0;
        }
    }
    ctx->pc = 0x2C66F0u;
    // 0x2c66f0: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
label_2c66f4:
    // 0x2c66f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2c66f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2c66f8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C66F8u;
    {
        const bool branch_taken_0x2c66f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66F8u;
        // 0x2c66fc: 0x8f879f74  lw          $a3, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66f8) {
            ctx->pc = 0x2C6798u;
            goto label_2c6798;
        }
    }
    ctx->pc = 0x2C6700u;
    // 0x2c6700: 0x18e00025  blez        $a3, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C6700u;
    {
        const bool branch_taken_0x2c6700 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2C6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6700u;
        // 0x2c6704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6700) {
            ctx->pc = 0x2C6798u;
            goto label_2c6798;
        }
    }
    ctx->pc = 0x2C6708u;
    // 0x2c6708: 0xc6070038  lwc1        $f7, 0x38($s0)
    ctx->pc = 0x2c6708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c670c: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x2c670cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x2c6710: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x2c6710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c6714: 0xc6060030  lwc1        $f6, 0x30($s0)
    ctx->pc = 0x2c6714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c6718: 0xc6050034  lwc1        $f5, 0x34($s0)
    ctx->pc = 0x2c6718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c671c: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2c6720: 0x25041fa8  addiu       $a0, $t0, 0x1FA8
    ctx->pc = 0x2c6720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8104));
    // 0x2c6724: 0x0  nop
    ctx->pc = 0x2c6724u;
    // NOP
label_2c6728:
    // 0x2c6728: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2c6728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c672c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2c672cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c6730: 0xc4410b78  lwc1        $f1, 0xB78($v0)
    ctx->pc = 0x2c6730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6734: 0xc4400b74  lwc1        $f0, 0xB74($v0)
    ctx->pc = 0x2c6734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6738: 0x46050901  sub.s       $f4, $f1, $f5
    ctx->pc = 0x2c6738u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2c673c: 0xc4420b7c  lwc1        $f2, 0xB7C($v0)
    ctx->pc = 0x2c673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6740: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2c6740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2c6744: 0x8c430b80  lw          $v1, 0xB80($v0)
    ctx->pc = 0x2c6744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2944)));
    // 0x2c6748: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x2c6748u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x2c674c: 0x460420c2  mul.s       $f3, $f4, $f4
    ctx->pc = 0x2c674cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c6750: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c6750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c6754: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c6758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c675c: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x2c675cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c6760: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c6760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6764: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c6764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c6768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c676c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c676cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6770: 0x0  nop
    ctx->pc = 0x2c6770u;
    // NOP
    // 0x2c6774: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6774u;
    {
        const bool branch_taken_0x2c6774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6774u;
        // 0x2c6778: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6774) {
            ctx->pc = 0x2C6790u;
            goto label_2c6790;
        }
    }
    ctx->pc = 0x2C677Cu;
    // 0x2c677c: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x2c677cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c6780: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2C6780u;
    {
        const bool branch_taken_0x2c6780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6780u;
        // 0x2c6784: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6780) {
            ctx->pc = 0x2C6728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6728;
        }
    }
    ctx->pc = 0x2C6788u;
    // 0x2c6788: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6788u;
    {
        const bool branch_taken_0x2c6788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6788u;
        // 0x2c678c: 0x8e230ae4  lw          $v1, 0xAE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6788) {
            ctx->pc = 0x2C67A8u;
            goto label_2c67a8;
        }
    }
    ctx->pc = 0x2C6790u;
label_2c6790:
    // 0x2c6790: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C6790u;
    {
        const bool branch_taken_0x2c6790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6790u;
        // 0x2c6794: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6790) {
            ctx->pc = 0x2C67F0u;
            goto label_2c67f0;
        }
    }
    ctx->pc = 0x2C6798u;
label_2c6798:
    // 0x2c6798: 0xc6070038  lwc1        $f7, 0x38($s0)
    ctx->pc = 0x2c6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c679c: 0xc6060030  lwc1        $f6, 0x30($s0)
    ctx->pc = 0x2c679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c67a0: 0xc6050034  lwc1        $f5, 0x34($s0)
    ctx->pc = 0x2c67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c67a4: 0x8e230ae4  lw          $v1, 0xAE4($s1)
    ctx->pc = 0x2c67a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
label_2c67a8:
    // 0x2c67a8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c67a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2c67ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c67acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c67b0: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x2c67b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c67b4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2c67b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c67b8: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x2c67b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c67bc: 0x46051101  sub.s       $f4, $f2, $f5
    ctx->pc = 0x2c67bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c67c0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2c67c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2c67c4: 0x46070881  sub.s       $f2, $f1, $f7
    ctx->pc = 0x2c67c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2c67c8: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2c67c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c67cc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c67ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c67d0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c67d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c67d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c67d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c67d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c67d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c67dc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2c67dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c67e0: 0x0  nop
    ctx->pc = 0x2c67e0u;
    // NOP
    // 0x2c67e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C67E4u;
    {
        const bool branch_taken_0x2c67e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67E4u;
        // 0x2c67e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67e4) {
            ctx->pc = 0x2C67F0u;
            goto label_2c67f0;
        }
    }
    ctx->pc = 0x2C67ECu;
    // 0x2c67ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c67f0:
    // 0x2c67f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c67f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c67f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c67f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c67f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c67f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c67fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C67FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67FCu;
        // 0x2c6800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C67FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6804u;
}
