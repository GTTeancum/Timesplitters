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

// Function: specialfxIsSpace
// Address: 0x2ae2e8 - 0x2ae3fc
void specialfxIsSpace_0x2ae2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxIsSpace_0x2ae2e8");
#endif

    switch (ctx->pc) {
        case 0x2ae32cu: goto label_2ae32c;
        case 0x2ae374u: goto label_2ae374;
        case 0x2ae3a4u: goto label_2ae3a4;
        default: break;
    }

    ctx->pc = 0x2ae2e8u;

    // 0x2ae2e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ae2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ae2ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ae2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ae2f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ae2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae2f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ae2f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae2fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ae2fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae304: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ae304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae308: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ae308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ae30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae310: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2AE310u;
    {
        const bool branch_taken_0x2ae310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE310u;
        // 0x2ae314: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae310) {
            ctx->pc = 0x2AE394u;
            goto label_2ae394;
        }
    }
    ctx->pc = 0x2AE318u;
    // 0x2ae318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae31c: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2AE31Cu;
    {
        const bool branch_taken_0x2ae31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE31Cu;
        // 0x2ae320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae31c) {
            ctx->pc = 0x2AE39Cu;
            goto label_2ae39c;
        }
    }
    ctx->pc = 0x2AE324u;
    // 0x2ae324: 0xc0ab890  jal         func_2AE240
    ctx->pc = 0x2AE324u;
    SET_GPR_U32(ctx, 31, 0x2AE32Cu);
    ctx->pc = 0x2AE328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE324u;
    // 0x2ae328: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE240u, 0x2AE324u, 0x2AE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE32Cu;
label_2ae32c:
    // 0x2ae32c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2ae32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ae330: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE330u;
    {
        const bool branch_taken_0x2ae330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE330u;
        // 0x2ae334: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae330) {
            ctx->pc = 0x2AE34Cu;
            goto label_2ae34c;
        }
    }
    ctx->pc = 0x2AE338u;
    // 0x2ae338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae33c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AE33Cu;
    {
        const bool branch_taken_0x2ae33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE33Cu;
        // 0x2ae340: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae33c) {
            ctx->pc = 0x2AE368u;
            goto label_2ae368;
        }
    }
    ctx->pc = 0x2AE344u;
    // 0x2ae344: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2AE344u;
    {
        const bool branch_taken_0x2ae344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE344u;
        // 0x2ae348: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae344) {
            ctx->pc = 0x2AE3E0u;
            goto label_2ae3e0;
        }
    }
    ctx->pc = 0x2AE34Cu;
label_2ae34c:
    // 0x2ae34c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ae34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae350: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AE350u;
    {
        const bool branch_taken_0x2ae350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE350u;
        // 0x2ae354: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae350) {
            ctx->pc = 0x2AE3ACu;
            goto label_2ae3ac;
        }
    }
    ctx->pc = 0x2AE358u;
    // 0x2ae358: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AE358u;
    {
        const bool branch_taken_0x2ae358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE358u;
        // 0x2ae35c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae358) {
            ctx->pc = 0x2AE3BCu;
            goto label_2ae3bc;
        }
    }
    ctx->pc = 0x2AE360u;
    // 0x2ae360: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2AE360u;
    {
        const bool branch_taken_0x2ae360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE360u;
        // 0x2ae364: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae360) {
            ctx->pc = 0x2AE3E0u;
            goto label_2ae3e0;
        }
    }
    ctx->pc = 0x2AE368u;
label_2ae368:
    // 0x2ae368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae36c: 0xc0ab876  jal         func_2AE1D8
    ctx->pc = 0x2AE36Cu;
    SET_GPR_U32(ctx, 31, 0x2AE374u);
    ctx->pc = 0x2AE370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE36Cu;
    // 0x2ae370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1D8u, 0x2AE36Cu, 0x2AE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE374u;
label_2ae374:
    // 0x2ae374: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AE374u;
    {
        const bool branch_taken_0x2ae374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE374u;
        // 0x2ae378: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae374) {
            ctx->pc = 0x2AE3DCu;
            goto label_2ae3dc;
        }
    }
    ctx->pc = 0x2AE37Cu;
    // 0x2ae37c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ae380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae384: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ae384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae388: 0x0  nop
    ctx->pc = 0x2ae388u;
    // NOP
    // 0x2ae38c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2AE38Cu;
    {
        const bool branch_taken_0x2ae38c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE38Cu;
        // 0x2ae390: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae38c) {
            ctx->pc = 0x2AE3E0u;
            goto label_2ae3e0;
        }
    }
    ctx->pc = 0x2AE394u;
label_2ae394:
    // 0x2ae394: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AE394u;
    {
        const bool branch_taken_0x2ae394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE394u;
        // 0x2ae398: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae394) {
            ctx->pc = 0x2AE3D8u;
            goto label_2ae3d8;
        }
    }
    ctx->pc = 0x2AE39Cu;
label_2ae39c:
    // 0x2ae39c: 0xc0ab876  jal         func_2AE1D8
    ctx->pc = 0x2AE39Cu;
    SET_GPR_U32(ctx, 31, 0x2AE3A4u);
    ctx->pc = 0x2AE3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE39Cu;
    // 0x2ae3a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1D8u, 0x2AE39Cu, 0x2AE3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE3A4u;
label_2ae3a4:
    // 0x2ae3a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AE3A4u;
    {
        const bool branch_taken_0x2ae3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3A4u;
        // 0x2ae3a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3a4) {
            ctx->pc = 0x2AE3D8u;
            goto label_2ae3d8;
        }
    }
    ctx->pc = 0x2AE3ACu;
label_2ae3ac:
    // 0x2ae3ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ae3b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae3b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE3B4u;
    {
        const bool branch_taken_0x2ae3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3B4u;
        // 0x2ae3b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3b4) {
            ctx->pc = 0x2AE3C8u;
            goto label_2ae3c8;
        }
    }
    ctx->pc = 0x2AE3BCu;
label_2ae3bc:
    // 0x2ae3bc: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2ae3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x2ae3c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae3c4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ae3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae3c8:
    // 0x2ae3c8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ae3c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae3cc: 0x0  nop
    ctx->pc = 0x2ae3ccu;
    // NOP
    // 0x2ae3d0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE3D0u;
    {
        const bool branch_taken_0x2ae3d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae3d0) {
            ctx->pc = 0x2AE3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE3D0u;
            // 0x2ae3d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE3D8u;
            goto label_2ae3d8;
        }
    }
    ctx->pc = 0x2AE3D8u;
label_2ae3d8:
    // 0x2ae3d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ae3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ae3dc:
    // 0x2ae3dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ae3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ae3e0:
    // 0x2ae3e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ae3e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae3e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ae3e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae3e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae3ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae3f0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ae3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3F4u;
        // 0x2ae3f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE3FCu;
}
