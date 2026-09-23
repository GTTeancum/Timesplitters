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

// Function: timeTickStart
// Address: 0x2b66e8 - 0x2b6818
void timeTickStart_0x2b66e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("timeTickStart_0x2b66e8");
#endif

    switch (ctx->pc) {
        case 0x2b6704u: goto label_2b6704;
        case 0x2b6720u: goto label_2b6720;
        case 0x2b6740u: goto label_2b6740;
        case 0x2b67e8u: goto label_2b67e8;
        case 0x2b67f8u: goto label_2b67f8;
        default: break;
    }

    ctx->pc = 0x2b66e8u;

    // 0x2b66e8: 0xc780b474  lwc1        $f0, -0x4B8C($gp)
    ctx->pc = 0x2b66e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b66ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b66ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b66f0: 0xc781b478  lwc1        $f1, -0x4B88($gp)
    ctx->pc = 0x2b66f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b66f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b66f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b66f8: 0xe780b46c  swc1        $f0, -0x4B94($gp)
    ctx->pc = 0x2b66f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947948), bits); }
    // 0x2b66fc: 0xc0ad9a2  jal         func_2B6688
    ctx->pc = 0x2B66FCu;
    SET_GPR_U32(ctx, 31, 0x2B6704u);
    ctx->pc = 0x2B6700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66FCu;
    // 0x2b6700: 0xe781b470  swc1        $f1, -0x4B90($gp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947952), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6688u, 0x2B66FCu, 0x2B6704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6704u;
label_2b6704:
    // 0x2b6704: 0xc78cb46c  lwc1        $f12, -0x4B94($gp)
    ctx->pc = 0x2b6704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b6708: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b6708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b670c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b670cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6710: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x2b6710u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2b6714: 0xe780b474  swc1        $f0, -0x4B8C($gp)
    ctx->pc = 0x2b6714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947956), bits); }
    // 0x2b6718: 0xc0b5cac  jal         func_2D72B0
    ctx->pc = 0x2B6718u;
    SET_GPR_U32(ctx, 31, 0x2B6720u);
    ctx->pc = 0x2B671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6718u;
    // 0x2b671c: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D72B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D72B0u, 0x2B6718u, 0x2B6720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6720u;
label_2b6720:
    // 0x2b6720: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6720u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6724: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6728: 0x0  nop
    ctx->pc = 0x2b6728u;
    // NOP
    // 0x2b672c: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B672Cu;
    {
        const bool branch_taken_0x2b672c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2B6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B672Cu;
        // 0x2b6730: 0xaf83b458  sw          $v1, -0x4BA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b672c) {
            ctx->pc = 0x2B6764u;
            goto label_2b6764;
        }
    }
    ctx->pc = 0x2B6734u;
    // 0x2b6734: 0x8f84b47c  lw          $a0, -0x4B84($gp)
    ctx->pc = 0x2b6734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947964)));
    // 0x2b6738: 0x8f85b45c  lw          $a1, -0x4BA4($gp)
    ctx->pc = 0x2b6738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2b673c: 0x0  nop
    ctx->pc = 0x2b673cu;
    // NOP
label_2b6740:
    // 0x2b6740: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2b6740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2b6744: 0xaf83b458  sw          $v1, -0x4BA8($gp)
    ctx->pc = 0x2b6744u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947928), GPR_U32(ctx, 3));
    // 0x2b6748: 0x0  nop
    ctx->pc = 0x2b6748u;
    // NOP
    // 0x2b674c: 0x0  nop
    ctx->pc = 0x2b674cu;
    // NOP
    // 0x2b6750: 0x0  nop
    ctx->pc = 0x2b6750u;
    // NOP
    // 0x2b6754: 0x460fffa  bltz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B6754u;
    {
        const bool branch_taken_0x2b6754 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2b6754) {
            ctx->pc = 0x2B6740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6740;
        }
    }
    ctx->pc = 0x2B675Cu;
    // 0x2b675c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B675Cu;
    {
        const bool branch_taken_0x2b675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B675Cu;
        // 0x2b6760: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b675c) {
            ctx->pc = 0x2B6770u;
            goto label_2b6770;
        }
    }
    ctx->pc = 0x2B6764u;
label_2b6764:
    // 0x2b6764: 0x8f84b47c  lw          $a0, -0x4B84($gp)
    ctx->pc = 0x2b6764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947964)));
    // 0x2b6768: 0x8f85b45c  lw          $a1, -0x4BA4($gp)
    ctx->pc = 0x2b6768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2b676c: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x2b676cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_2b6770:
    // 0x2b6770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6770u;
    {
        const bool branch_taken_0x2b6770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6770) {
            ctx->pc = 0x2B6780u;
            goto label_2b6780;
        }
    }
    ctx->pc = 0x2B6778u;
    // 0x2b6778: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b6778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b677c: 0xaf83b458  sw          $v1, -0x4BA8($gp)
    ctx->pc = 0x2b677cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947928), GPR_U32(ctx, 3));
label_2b6780:
    // 0x2b6780: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6780u;
    {
        const bool branch_taken_0x2b6780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6780u;
        // 0x2b6784: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6780) {
            ctx->pc = 0x2B6790u;
            goto label_2b6790;
        }
    }
    ctx->pc = 0x2B6788u;
    // 0x2b6788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b678c: 0xaf83b458  sw          $v1, -0x4BA8($gp)
    ctx->pc = 0x2b678cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947928), GPR_U32(ctx, 3));
label_2b6790:
    // 0x2b6790: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6790u;
    {
        const bool branch_taken_0x2b6790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b6790) {
            ctx->pc = 0x2B6794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6790u;
            // 0x2b6794: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B67A8u;
            goto label_2b67a8;
        }
    }
    ctx->pc = 0x2B6798u;
    // 0x2b6798: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6798u;
    {
        const bool branch_taken_0x2b6798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6798u;
        // 0x2b679c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6798) {
            ctx->pc = 0x2B67BCu;
            goto label_2b67bc;
        }
    }
    ctx->pc = 0x2B67A0u;
    // 0x2b67a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B67A0u;
    {
        const bool branch_taken_0x2b67a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67A0u;
        // 0x2b67a4: 0xaf80b460  sw          $zero, -0x4BA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67a0) {
            ctx->pc = 0x2B67C4u;
            goto label_2b67c4;
        }
    }
    ctx->pc = 0x2B67A8u;
label_2b67a8:
    // 0x2b67a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b67ac: 0xaf83b458  sw          $v1, -0x4BA8($gp)
    ctx->pc = 0x2b67acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947928), GPR_U32(ctx, 3));
    // 0x2b67b0: 0xaf82b460  sw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2b67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947936), GPR_U32(ctx, 2));
    // 0x2b67b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B67B4u;
    {
        const bool branch_taken_0x2b67b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67B4u;
        // 0x2b67b8: 0xaf80b47c  sw          $zero, -0x4B84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67b4) {
            ctx->pc = 0x2B67C4u;
            goto label_2b67c4;
        }
    }
    ctx->pc = 0x2B67BCu;
label_2b67bc:
    // 0x2b67bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2b67bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67c0: 0xaf82b460  sw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2b67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947936), GPR_U32(ctx, 2));
label_2b67c4:
    // 0x2b67c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b67c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b67c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b67c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b67cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2b67ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b67d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b67d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b67d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b67d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b67d8: 0xaf85b45c  sw          $a1, -0x4BA4($gp)
    ctx->pc = 0x2b67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947932), GPR_U32(ctx, 5));
    // 0x2b67dc: 0xe781b468  swc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2b67dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947944), bits); }
    // 0x2b67e0: 0xc0b377e  jal         func_2CDDF8
    ctx->pc = 0x2B67E0u;
    SET_GPR_U32(ctx, 31, 0x2B67E8u);
    ctx->pc = 0x2B67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67E0u;
    // 0x2b67e4: 0xe780b464  swc1        $f0, -0x4B9C($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947940), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDF8u, 0x2B67E0u, 0x2B67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67E8u;
label_2b67e8:
    // 0x2b67e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B67E8u;
    {
        const bool branch_taken_0x2b67e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67E8u;
        // 0x2b67ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67e8) {
            ctx->pc = 0x2B6810u;
            goto label_2b6810;
        }
    }
    ctx->pc = 0x2B67F0u;
    // 0x2b67f0: 0xc0b3780  jal         func_2CDE00
    ctx->pc = 0x2B67F0u;
    SET_GPR_U32(ctx, 31, 0x2B67F8u);
    ctx->pc = 0x2B67F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67F0u;
    // 0x2b67f4: 0x8f84b460  lw          $a0, -0x4BA0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDE00u, 0x2B67F0u, 0x2B67F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67F8u;
label_2b67f8:
    // 0x2b67f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b67f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b67fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b67fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6804: 0xaf82b460  sw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2b6804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947936), GPR_U32(ctx, 2));
    // 0x2b6808: 0xe780b468  swc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2b6808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947944), bits); }
    // 0x2b680c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b680cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6810:
    // 0x2b6810: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6810u;
        // 0x2b6814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6818u;
}
