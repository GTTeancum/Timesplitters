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

// Function: __ieee754_powf
// Address: 0x2da2d0 - 0x2dab5c
void ps2___ieee754_powf_0x2da2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_powf_0x2da2d0");
#endif

    switch (ctx->pc) {
        case 0x2da44cu: goto label_2da44c;
        case 0x2da45cu: goto label_2da45c;
        case 0x2da528u: goto label_2da528;
        case 0x2dab1cu: goto label_2dab1c;
        default: break;
    }

    ctx->pc = 0x2da2d0u;

    // 0x2da2d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2da2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2da2d4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2da2d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2da2d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2da2d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2da2dc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2da2dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2da2e0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2da2e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2da2e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2da2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2da2e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2da2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2da2ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2da2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2da2f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2da2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2da2f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2da2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2da2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2da2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da2fc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x2da2fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2da300: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da304: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x2da304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2da308: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2da308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da30c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2da30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2da310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2da310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2da314: 0x2428824  and         $s1, $s2, $v0
    ctx->pc = 0x2da314u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2da318: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA318u;
    {
        const bool branch_taken_0x2da318 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA318u;
        // 0x2da31c: 0x2628024  and         $s0, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da318) {
            ctx->pc = 0x2DA330u;
            goto label_2da330;
        }
    }
    ctx->pc = 0x2DA320u;
    // 0x2da320: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da328: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x2DA328u;
    {
        const bool branch_taken_0x2da328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA328u;
        // 0x2da32c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da328) {
            ctx->pc = 0x2DAB38u;
            goto label_2dab38;
        }
    }
    ctx->pc = 0x2DA330u;
label_2da330:
    // 0x2da330: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x2da330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x2da334: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2da334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2da338: 0x544001fe  bnel        $v0, $zero, . + 4 + (0x1FE << 2)
    ctx->pc = 0x2DA338u;
    {
        const bool branch_taken_0x2da338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da338) {
            ctx->pc = 0x2DA33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA338u;
            // 0x2da33c: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA340u;
    // 0x2da340: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x2da340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2da344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA344u;
    {
        const bool branch_taken_0x2da344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da344) {
            ctx->pc = 0x2DA354u;
            goto label_2da354;
        }
    }
    ctx->pc = 0x2DA34Cu;
    // 0x2da34c: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x2DA34Cu;
    {
        const bool branch_taken_0x2da34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA34Cu;
        // 0x2da350: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da34c) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA354u;
label_2da354:
    // 0x2da354: 0x6610015  bgez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DA354u;
    {
        const bool branch_taken_0x2da354 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2DA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA354u;
        // 0x2da358: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da354) {
            ctx->pc = 0x2DA3ACu;
            goto label_2da3ac;
        }
    }
    ctx->pc = 0x2DA35Cu;
    // 0x2da35c: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x2da35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x2da360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2da360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2da364: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2da364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2da368: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA368u;
    {
        const bool branch_taken_0x2da368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA368u;
        // 0x2da36c: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da368) {
            ctx->pc = 0x2DA378u;
            goto label_2da378;
        }
    }
    ctx->pc = 0x2DA370u;
    // 0x2da370: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DA370u;
    {
        const bool branch_taken_0x2da370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA370u;
        // 0x2da374: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da370) {
            ctx->pc = 0x2DA3ACu;
            goto label_2da3ac;
        }
    }
    ctx->pc = 0x2DA378u;
label_2da378:
    // 0x2da378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2da378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2da37c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2da37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2da380: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA380u;
    {
        const bool branch_taken_0x2da380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA380u;
        // 0x2da384: 0x111dc3  sra         $v1, $s1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da380) {
            ctx->pc = 0x2DA3ACu;
            goto label_2da3ac;
        }
    }
    ctx->pc = 0x2DA388u;
    // 0x2da388: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2da388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2da38c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2da38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da390: 0x512807  srav        $a1, $s1, $v0
    ctx->pc = 0x2da390u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x2da394: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x2da394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x2da398: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA398u;
    {
        const bool branch_taken_0x2da398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2DA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA398u;
        // 0x2da39c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da398) {
            ctx->pc = 0x2DA3B0u;
            goto label_2da3b0;
        }
    }
    ctx->pc = 0x2DA3A0u;
    // 0x2da3a0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2da3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2da3a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2da3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da3a8: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x2da3a8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da3ac:
    // 0x2da3ac: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x2da3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
label_2da3b0:
    // 0x2da3b0: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DA3B0u;
    {
        const bool branch_taken_0x2da3b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3B0u;
        // 0x2da3b4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3b0) {
            ctx->pc = 0x2DA3F8u;
            goto label_2da3f8;
        }
    }
    ctx->pc = 0x2DA3B8u;
    // 0x2da3b8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA3B8u;
    {
        const bool branch_taken_0x2da3b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3B8u;
        // 0x2da3bc: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3b8) {
            ctx->pc = 0x2DA3C8u;
            goto label_2da3c8;
        }
    }
    ctx->pc = 0x2DA3C0u;
    // 0x2da3c0: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x2DA3C0u;
    {
        const bool branch_taken_0x2da3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3C0u;
        // 0x2da3c4: 0x4615a801  sub.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3c0) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA3C8u;
label_2da3c8:
    // 0x2da3c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA3C8u;
    {
        const bool branch_taken_0x2da3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da3c8) {
            ctx->pc = 0x2DA3E4u;
            goto label_2da3e4;
        }
    }
    ctx->pc = 0x2DA3D0u;
    // 0x2da3d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3d4: 0x64301d7  bgezl       $s2, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x2DA3D4u;
    {
        const bool branch_taken_0x2da3d4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2da3d4) {
            ctx->pc = 0x2DA3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA3D4u;
            // 0x2da3d8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA3DCu;
    // 0x2da3dc: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x2DA3DCu;
    {
        const bool branch_taken_0x2da3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3DCu;
        // 0x2da3e0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3dc) {
            ctx->pc = 0x2DAB38u;
            goto label_2dab38;
        }
    }
    ctx->pc = 0x2DA3E4u;
label_2da3e4:
    // 0x2da3e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3e8: 0x64201d2  bltzl       $s2, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x2DA3E8u;
    {
        const bool branch_taken_0x2da3e8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2da3e8) {
            ctx->pc = 0x2DA3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA3E8u;
            // 0x2da3ec: 0x4600a807  neg.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA3F0u;
    // 0x2da3f0: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x2DA3F0u;
    {
        const bool branch_taken_0x2da3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3F0u;
        // 0x2da3f4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3f0) {
            ctx->pc = 0x2DAB38u;
            goto label_2dab38;
        }
    }
    ctx->pc = 0x2DA3F8u;
label_2da3f8:
    // 0x2da3f8: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA3F8u;
    {
        const bool branch_taken_0x2da3f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2da3f8) {
            ctx->pc = 0x2DA3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA3F8u;
            // 0x2da3fc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA424u;
            goto label_2da424;
        }
    }
    ctx->pc = 0x2DA400u;
    // 0x2da400: 0x64101cc  bgez        $s2, . + 4 + (0x1CC << 2)
    ctx->pc = 0x2DA400u;
    {
        const bool branch_taken_0x2da400 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2DA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA400u;
        // 0x2da404: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da400) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA408u;
    // 0x2da408: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da40c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da410: 0x0  nop
    ctx->pc = 0x2da410u;
    // NOP
    // 0x2da414: 0x0  nop
    ctx->pc = 0x2da414u;
    // NOP
    // 0x2da418: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2da418u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2da41c: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x2DA41Cu;
    {
        const bool branch_taken_0x2da41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA41Cu;
        // 0x2da420: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da41c) {
            ctx->pc = 0x2DAB38u;
            goto label_2dab38;
        }
    }
    ctx->pc = 0x2DA424u;
label_2da424:
    // 0x2da424: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA424u;
    {
        const bool branch_taken_0x2da424 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA424u;
        // 0x2da428: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da424) {
            ctx->pc = 0x2DA434u;
            goto label_2da434;
        }
    }
    ctx->pc = 0x2DA42Cu;
    // 0x2da42c: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x2DA42Cu;
    {
        const bool branch_taken_0x2da42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA42Cu;
        // 0x2da430: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da42c) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA434u;
label_2da434:
    // 0x2da434: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA434u;
    {
        const bool branch_taken_0x2da434 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2da434) {
            ctx->pc = 0x2DA454u;
            goto label_2da454;
        }
    }
    ctx->pc = 0x2DA43Cu;
    // 0x2da43c: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA43Cu;
    {
        const bool branch_taken_0x2da43c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x2da43c) {
            ctx->pc = 0x2DA454u;
            goto label_2da454;
        }
    }
    ctx->pc = 0x2DA444u;
    // 0x2da444: 0xc0b6bd0  jal         func_2DAF40
    ctx->pc = 0x2DA444u;
    SET_GPR_U32(ctx, 31, 0x2DA44Cu);
    ctx->pc = 0x2DA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA444u;
    // 0x2da448: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAF40u, 0x2DA444u, 0x2DA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA44Cu;
label_2da44c:
    // 0x2da44c: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x2DA44Cu;
    {
        const bool branch_taken_0x2da44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA44Cu;
        // 0x2da450: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da44c) {
            ctx->pc = 0x2DAB38u;
            goto label_2dab38;
        }
    }
    ctx->pc = 0x2DA454u;
label_2da454:
    // 0x2da454: 0xc0b7168  jal         func_2DC5A0
    ctx->pc = 0x2DA454u;
    SET_GPR_U32(ctx, 31, 0x2DA45Cu);
    ctx->pc = 0x2DA458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA454u;
    // 0x2da458: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5A0u, 0x2DA454u, 0x2DA45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA45Cu;
label_2da45c:
    // 0x2da45c: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x2da45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
    // 0x2da460: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA460u;
    {
        const bool branch_taken_0x2da460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA460u;
        // 0x2da464: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da460) {
            ctx->pc = 0x2DA47Cu;
            goto label_2da47c;
        }
    }
    ctx->pc = 0x2DA468u;
    // 0x2da468: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA468u;
    {
        const bool branch_taken_0x2da468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da468) {
            ctx->pc = 0x2DA47Cu;
            goto label_2da47c;
        }
    }
    ctx->pc = 0x2DA470u;
    // 0x2da470: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2da470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2da474: 0x16060019  bne         $s0, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DA474u;
    {
        const bool branch_taken_0x2da474 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x2DA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA474u;
        // 0x2da478: 0x1357c2  srl         $t2, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da474) {
            ctx->pc = 0x2DA4DCu;
            goto label_2da4dc;
        }
    }
    ctx->pc = 0x2DA47Cu;
label_2da47c:
    // 0x2da47c: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA47Cu;
    {
        const bool branch_taken_0x2da47c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2DA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA47Cu;
        // 0x2da480: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da47c) {
            ctx->pc = 0x2DA498u;
            goto label_2da498;
        }
    }
    ctx->pc = 0x2DA484u;
    // 0x2da484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da48c: 0x0  nop
    ctx->pc = 0x2da48cu;
    // NOP
    // 0x2da490: 0x0  nop
    ctx->pc = 0x2da490u;
    // NOP
    // 0x2da494: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x2da494u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[13];
label_2da498:
    // 0x2da498: 0x66101a6  bgez        $s3, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x2DA498u;
    {
        const bool branch_taken_0x2da498 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2DA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA498u;
        // 0x2da49c: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da498) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA4A0u;
    // 0x2da4a0: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x2da4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x2da4a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2da4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2da4a8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x2da4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x2da4ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA4ACu;
    {
        const bool branch_taken_0x2da4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4ACu;
        // 0x2da4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4ac) {
            ctx->pc = 0x2DA4CCu;
            goto label_2da4cc;
        }
    }
    ctx->pc = 0x2DA4B4u;
    // 0x2da4b4: 0x460d6801  sub.s       $f0, $f13, $f13
    ctx->pc = 0x2da4b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[13]);
    // 0x2da4b8: 0x0  nop
    ctx->pc = 0x2da4b8u;
    // NOP
    // 0x2da4bc: 0x0  nop
    ctx->pc = 0x2da4bcu;
    // NOP
    // 0x2da4c0: 0x46000343  div.s       $f13, $f0, $f0
    ctx->pc = 0x2da4c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[0];
    // 0x2da4c4: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x2DA4C4u;
    {
        const bool branch_taken_0x2da4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4C4u;
        // 0x2da4c8: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4c4) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA4CCu;
label_2da4cc:
    // 0x2da4cc: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DA4CCu;
    {
        const bool branch_taken_0x2da4cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da4cc) {
            ctx->pc = 0x2DA4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA4CCu;
            // 0x2da4d0: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
            ctx->f[13] = FPU_NEG_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA4D4u;
            goto label_2da4d4;
        }
    }
    ctx->pc = 0x2DA4D4u;
label_2da4d4:
    // 0x2da4d4: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x2DA4D4u;
    {
        const bool branch_taken_0x2da4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4D4u;
        // 0x2da4d8: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4d4) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA4DCu;
label_2da4dc:
    // 0x2da4dc: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x2da4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2da4e0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x2da4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x2da4e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA4E4u;
    {
        const bool branch_taken_0x2da4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4E4u;
        // 0x2da4e8: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4e4) {
            ctx->pc = 0x2DA504u;
            goto label_2da504;
        }
    }
    ctx->pc = 0x2DA4ECu;
    // 0x2da4ec: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x2da4ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x2da4f0: 0x0  nop
    ctx->pc = 0x2da4f0u;
    // NOP
    // 0x2da4f4: 0x0  nop
    ctx->pc = 0x2da4f4u;
    // NOP
    // 0x2da4f8: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x2da4f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x2da4fc: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x2DA4FCu;
    {
        const bool branch_taken_0x2da4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4FCu;
        // 0x2da500: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4fc) {
            ctx->pc = 0x2DAB38u;
            goto label_2dab38;
        }
    }
    ctx->pc = 0x2DA504u;
label_2da504:
    // 0x2da504: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2da504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2da508: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2DA508u;
    {
        const bool branch_taken_0x2da508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA508u;
        // 0x2da50c: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da508) {
            ctx->pc = 0x2DA5F0u;
            goto label_2da5f0;
        }
    }
    ctx->pc = 0x2DA510u;
    // 0x2da510: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x2da510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x2da514: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2da514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2da518: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA518u;
    {
        const bool branch_taken_0x2da518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA518u;
        // 0x2da51c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da518) {
            ctx->pc = 0x2DA530u;
            goto label_2da530;
        }
    }
    ctx->pc = 0x2DA520u;
    // 0x2da520: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA520u;
    {
        const bool branch_taken_0x2da520 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2DA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA520u;
        // 0x2da524: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da520) {
            ctx->pc = 0x2DA548u;
            goto label_2da548;
        }
    }
    ctx->pc = 0x2DA528u;
label_2da528:
    // 0x2da528: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x2DA528u;
    {
        const bool branch_taken_0x2da528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA528u;
        // 0x2da52c: 0xc440ac74  lwc1        $f0, -0x538C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da528) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA530u;
label_2da530:
    // 0x2da530: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x2da530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2da534: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2da534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2da538: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA538u;
    {
        const bool branch_taken_0x2da538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da538) {
            ctx->pc = 0x2DA554u;
            goto label_2da554;
        }
    }
    ctx->pc = 0x2DA540u;
    // 0x2da540: 0x1e40fff9  bgtz        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DA540u;
    {
        const bool branch_taken_0x2da540 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2DA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA540u;
        // 0x2da544: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da540) {
            ctx->pc = 0x2DA528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da528;
        }
    }
    ctx->pc = 0x2DA548u;
label_2da548:
    // 0x2da548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da54c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x2DA54Cu;
    {
        const bool branch_taken_0x2da54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA54Cu;
        // 0x2da550: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da54c) {
            ctx->pc = 0x2DAB38u;
            goto label_2dab38;
        }
    }
    ctx->pc = 0x2DA554u;
label_2da554:
    // 0x2da554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da55c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2da55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2da560: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2da560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2da564: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x2da564u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2da568: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x2da568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x2da56c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2da56cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2da570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da574: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2da574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2da578: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2da578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2da57c: 0x3c0136ec  lui         $at, 0x36EC
    ctx->pc = 0x2da57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14060 << 16));
    // 0x2da580: 0x3421a570  ori         $at, $at, 0xA570
    ctx->pc = 0x2da580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42352);
    // 0x2da584: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2da584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2da588: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2da588u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2da58c: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x2da58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x2da590: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x2da590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x2da594: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da598: 0x460c6182  mul.s       $f6, $f12, $f12
    ctx->pc = 0x2da598u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2da59c: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x2da59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x2da5a0: 0x3421aa00  ori         $at, $at, 0xAA00
    ctx->pc = 0x2da5a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43520);
    // 0x2da5a4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2da5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2da5a8: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x2da5a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2da5ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2da5acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2da5b0: 0x460563c2  mul.s       $f15, $f12, $f5
    ctx->pc = 0x2da5b0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x2da5b4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2da5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2da5b8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2da5b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2da5bc: 0x46033242  mul.s       $f9, $f6, $f3
    ctx->pc = 0x2da5bcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2da5c0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2da5c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2da5c4: 0x46012381  sub.s       $f14, $f4, $f1
    ctx->pc = 0x2da5c4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2da5c8: 0x460e7800  add.s       $f0, $f15, $f14
    ctx->pc = 0x2da5c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x2da5cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2da5ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2da5d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2da5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2da5d4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2da5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2da5d8: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2da5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2da5dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2da5dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da5e0: 0x460f0801  sub.s       $f0, $f1, $f15
    ctx->pc = 0x2da5e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[15]);
    // 0x2da5e4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2DA5E4u;
    {
        const bool branch_taken_0x2da5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5E4u;
        // 0x2da5e8: 0x46007041  sub.s       $f1, $f14, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5e4) {
            ctx->pc = 0x2DA860u;
            goto label_2da860;
        }
    }
    ctx->pc = 0x2DA5ECu;
    // 0x2da5ec: 0x0  nop
    ctx->pc = 0x2da5ecu;
    // NOP
label_2da5f0:
    // 0x2da5f0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2da5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2da5f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2da5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2da5f8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2da5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2da5fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA5FCu;
    {
        const bool branch_taken_0x2da5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5FCu;
        // 0x2da600: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5fc) {
            ctx->pc = 0x2DA618u;
            goto label_2da618;
        }
    }
    ctx->pc = 0x2DA604u;
    // 0x2da604: 0x3c014b80  lui         $at, 0x4B80
    ctx->pc = 0x2da604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19328 << 16));
    // 0x2da608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da60c: 0x2409ffe8  addiu       $t1, $zero, -0x18
    ctx->pc = 0x2da60cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x2da610: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2da610u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2da614: 0x44106000  mfc1        $s0, $f12
    ctx->pc = 0x2da614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2da618:
    // 0x2da618: 0x2032824  and         $a1, $s0, $v1
    ctx->pc = 0x2da618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2da61c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x2da61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x2da620: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x2da620u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x2da624: 0x2524ff81  addiu       $a0, $t1, -0x7F
    ctx->pc = 0x2da624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967169));
    // 0x2da628: 0x3442c471  ori         $v0, $v0, 0xC471
    ctx->pc = 0x2da628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50289);
    // 0x2da62c: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x2da62cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2da630: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2da630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2da634: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA634u;
    {
        const bool branch_taken_0x2da634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA634u;
        // 0x2da638: 0xa68025  or          $s0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da634) {
            ctx->pc = 0x2DA644u;
            goto label_2da644;
        }
    }
    ctx->pc = 0x2DA63Cu;
    // 0x2da63c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA63Cu;
    {
        const bool branch_taken_0x2da63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA63Cu;
        // 0x2da640: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da63c) {
            ctx->pc = 0x2DA668u;
            goto label_2da668;
        }
    }
    ctx->pc = 0x2DA644u;
label_2da644:
    // 0x2da644: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2da644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2da648: 0x3442b3d6  ori         $v0, $v0, 0xB3D6
    ctx->pc = 0x2da648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46038);
    // 0x2da64c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2da64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2da650: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA650u;
    {
        const bool branch_taken_0x2da650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA650u;
        // 0x2da654: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da650) {
            ctx->pc = 0x2DA668u;
            goto label_2da668;
        }
    }
    ctx->pc = 0x2DA658u;
    // 0x2da658: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x2da658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x2da65c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2da65cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da660: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2da660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2da664: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2da664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2da668:
    // 0x2da668: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x2da668u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da66c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2da66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2da670: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x2da670u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2da674: 0x2442abf0  addiu       $v0, $v0, -0x5410
    ctx->pc = 0x2da674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945776));
    // 0x2da678: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2da678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2da67c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da680: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da684: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2da684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da688: 0x46026000  add.s       $f0, $f12, $f2
    ctx->pc = 0x2da688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2da68c: 0x460263c1  sub.s       $f15, $f12, $f2
    ctx->pc = 0x2da68cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2da690: 0x0  nop
    ctx->pc = 0x2da690u;
    // NOP
    // 0x2da694: 0x0  nop
    ctx->pc = 0x2da694u;
    // NOP
    // 0x2da698: 0x46000b83  div.s       $f14, $f1, $f0
    ctx->pc = 0x2da698u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[14] = ctx->f[1] / ctx->f[0];
    // 0x2da69c: 0x460e7d02  mul.s       $f20, $f15, $f14
    ctx->pc = 0x2da69cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[15], ctx->f[14]);
    // 0x2da6a0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x2da6a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2da6a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2da6a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6a8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2da6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2da6ac: 0x34c6f000  ori         $a2, $a2, 0xF000
    ctx->pc = 0x2da6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
    // 0x2da6b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2da6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2da6b4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2da6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2da6b8: 0x101843  sra         $v1, $s0, 1
    ctx->pc = 0x2da6b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2da6bc: 0x81540  sll         $v0, $t0, 21
    ctx->pc = 0x2da6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 21));
    // 0x2da6c0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2da6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2da6c4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2da6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x2da6c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2da6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2da6cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2da6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2da6d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2da6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2da6d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da6d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da6d8: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2da6d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2da6dc: 0x3c013e53  lui         $at, 0x3E53
    ctx->pc = 0x2da6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15955 << 16));
    // 0x2da6e0: 0x3421f142  ori         $at, $at, 0xF142
    ctx->pc = 0x2da6e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61762);
    // 0x2da6e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da6e8: 0x3c013e6c  lui         $at, 0x3E6C
    ctx->pc = 0x2da6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15980 << 16));
    // 0x2da6ec: 0x34213255  ori         $at, $at, 0x3255
    ctx->pc = 0x2da6ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12885);
    // 0x2da6f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2da6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2da6f4: 0x4614a2c2  mul.s       $f11, $f20, $f20
    ctx->pc = 0x2da6f4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2da6f8: 0x3c013e8b  lui         $at, 0x3E8B
    ctx->pc = 0x2da6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16011 << 16));
    // 0x2da6fc: 0x3421a305  ori         $at, $at, 0xA305
    ctx->pc = 0x2da6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41733);
    // 0x2da700: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2da700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2da704: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x2da704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x2da708: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2da708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2da70c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2da70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2da710: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x2da710u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2da714: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2da714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2da718: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2da718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2da71c: 0x3c013edb  lui         $at, 0x3EDB
    ctx->pc = 0x2da71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16091 << 16));
    // 0x2da720: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x2da720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x2da724: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2da724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2da728: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x2da728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2da72c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2da72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2da730: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2da730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2da734: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2da734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2da738: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2da738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2da73c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2da73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2da740: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2da740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2da744: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2da744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2da748: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x2da748u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x2da74c: 0x460b5982  mul.s       $f6, $f11, $f11
    ctx->pc = 0x2da74cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2da750: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2da750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2da754: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2da754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2da758: 0x461428c0  add.s       $f3, $f5, $f20
    ctx->pc = 0x2da758u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x2da75c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2da75cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2da760: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x2da760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x2da764: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2da764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2da768: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2da768u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2da76c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2da76cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2da770: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2da770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2da774: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2da774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2da778: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2da778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2da77c: 0x46052ac2  mul.s       $f11, $f5, $f5
    ctx->pc = 0x2da77cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2da780: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x2da780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2da784: 0x46045880  add.s       $f2, $f11, $f4
    ctx->pc = 0x2da784u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x2da788: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2da788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2da78c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2da78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2da790: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2da790u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2da794: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2da794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2da798: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2da798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2da79c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2da79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2da7a0: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x2da7a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2da7a4: 0x460b2101  sub.s       $f4, $f4, $f11
    ctx->pc = 0x2da7a4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x2da7a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2da7a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2da7ac: 0x46022bc2  mul.s       $f15, $f5, $f2
    ctx->pc = 0x2da7acu;
    ctx->f[15] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2da7b0: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x2da7b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2da7b4: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x2da7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2da7b8: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x2da7b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da7bc: 0x460e78c0  add.s       $f3, $f15, $f14
    ctx->pc = 0x2da7bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x2da7c0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2da7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2da7c4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2da7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2da7c8: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x2da7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2da7cc: 0x460f3881  sub.s       $f2, $f7, $f15
    ctx->pc = 0x2da7ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
    // 0x2da7d0: 0x3c01369d  lui         $at, 0x369D
    ctx->pc = 0x2da7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13981 << 16));
    // 0x2da7d4: 0x3421c3a0  ori         $at, $at, 0xC3A0
    ctx->pc = 0x2da7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50080);
    // 0x2da7d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da7dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2da7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2da7e0: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x2da7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x2da7e4: 0x3421384f  ori         $at, $at, 0x384F
    ctx->pc = 0x2da7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14415);
    // 0x2da7e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da7ec: 0x2442ac00  addiu       $v0, $v0, -0x5400
    ctx->pc = 0x2da7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945792));
    // 0x2da7f0: 0x46027181  sub.s       $f6, $f14, $f2
    ctx->pc = 0x2da7f0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x2da7f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2da7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2da7f8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2da7f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2da7fc: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2da7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2da800: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x2da800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x2da804: 0x34213800  ori         $at, $at, 0x3800
    ctx->pc = 0x2da804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14336);
    // 0x2da808: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2da808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2da80c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2da80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2da810: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2da810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2da814: 0x2442abf8  addiu       $v0, $v0, -0x5408
    ctx->pc = 0x2da814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945784));
    // 0x2da818: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2da818u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2da81c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2da81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2da820: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x2da820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2da824: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x2da824u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da828: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2da828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2da82c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2da82cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da830: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2da830u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2da834: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2da834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2da838: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2da838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2da83c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2da83cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2da840: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2da840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2da844: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x2da844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2da848: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2da848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2da84c: 0x460c2001  sub.s       $f0, $f4, $f12
    ctx->pc = 0x2da84cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x2da850: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2da850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2da854: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2da854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2da858: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2da858u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da85c: 0x0  nop
    ctx->pc = 0x2da85cu;
    // NOP
label_2da860:
    // 0x2da860: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x2da860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2da864: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x2da864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2da868: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2da868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2da86c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da870: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2da870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2da874: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA874u;
    {
        const bool branch_taken_0x2da874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da874) {
            ctx->pc = 0x2DA884u;
            goto label_2da884;
        }
    }
    ctx->pc = 0x2DA87Cu;
    // 0x2da87c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2da87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2da880: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2da880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2da884:
    // 0x2da884: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x2da884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2da888: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2da888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da88c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2da88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2da890: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2da890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2da894: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2da894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2da898: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2da898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2da89c: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x2da89cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2da8a0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2da8a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2da8a4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2da8a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2da8a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2da8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2da8ac: 0x460311c2  mul.s       $f7, $f2, $f3
    ctx->pc = 0x2da8acu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2da8b0: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x2da8b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2da8b4: 0x46073340  add.s       $f13, $f6, $f7
    ctx->pc = 0x2da8b4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2da8b8: 0x44076800  mfc1        $a3, $f13
    ctx->pc = 0x2da8b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2da8bc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2da8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da8c0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2da8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2da8c4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2da8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2da8c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA8C8u;
    {
        const bool branch_taken_0x2da8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da8c8) {
            ctx->pc = 0x2DA8E8u;
            goto label_2da8e8;
        }
    }
    ctx->pc = 0x2DA8D0u;
    // 0x2da8d0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2da8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2da8d4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x2da8d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x2da8d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da8dc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DA8DCu;
    {
        const bool branch_taken_0x2da8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8DCu;
        // 0x2da8e0: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8dc) {
            ctx->pc = 0x2DA970u;
            goto label_2da970;
        }
    }
    ctx->pc = 0x2DA8E4u;
    // 0x2da8e4: 0x0  nop
    ctx->pc = 0x2da8e4u;
    // NOP
label_2da8e8:
    // 0x2da8e8: 0x14a3000f  bne         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DA8E8u;
    {
        const bool branch_taken_0x2da8e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8E8u;
        // 0x2da8ec: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8e8) {
            ctx->pc = 0x2DA928u;
            goto label_2da928;
        }
    }
    ctx->pc = 0x2DA8F0u;
    // 0x2da8f0: 0x3c013338  lui         $at, 0x3338
    ctx->pc = 0x2da8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13112 << 16));
    // 0x2da8f4: 0x3421aa3c  ori         $at, $at, 0xAA3C
    ctx->pc = 0x2da8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43580);
    // 0x2da8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da8fc: 0x46076841  sub.s       $f1, $f13, $f7
    ctx->pc = 0x2da8fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x2da900: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2da900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2da904: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da908: 0x0  nop
    ctx->pc = 0x2da908u;
    // NOP
    // 0x2da90c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2DA90Cu;
    {
        const bool branch_taken_0x2da90c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA90Cu;
        // 0x2da910: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da90c) {
            ctx->pc = 0x2DA978u;
            goto label_2da978;
        }
    }
    ctx->pc = 0x2DA914u;
    // 0x2da914: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2da914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2da918: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x2da918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x2da91c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da920: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2DA920u;
    {
        const bool branch_taken_0x2da920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA920u;
        // 0x2da924: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da920) {
            ctx->pc = 0x2DA970u;
            goto label_2da970;
        }
    }
    ctx->pc = 0x2DA928u;
label_2da928:
    // 0x2da928: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2da928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2da92c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2da92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2da930: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2da930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2da934: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2da934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2da938: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA938u;
    {
        const bool branch_taken_0x2da938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da938) {
            ctx->pc = 0x2DA960u;
            goto label_2da960;
        }
    }
    ctx->pc = 0x2DA940u;
    // 0x2da940: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2da940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2da944: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DA944u;
    {
        const bool branch_taken_0x2da944 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA944u;
        // 0x2da948: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da944) {
            ctx->pc = 0x2DA978u;
            goto label_2da978;
        }
    }
    ctx->pc = 0x2DA94Cu;
    // 0x2da94c: 0x46076801  sub.s       $f0, $f13, $f7
    ctx->pc = 0x2da94cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x2da950: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x2da950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da954: 0x0  nop
    ctx->pc = 0x2da954u;
    // NOP
    // 0x2da958: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA958u;
    {
        const bool branch_taken_0x2da958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA958u;
        // 0x2da95c: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da958) {
            ctx->pc = 0x2DA97Cu;
            goto label_2da97c;
        }
    }
    ctx->pc = 0x2DA960u;
label_2da960:
    // 0x2da960: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x2da960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x2da964: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x2da964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x2da968: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da96c: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x2da96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2da970:
    // 0x2da970: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2DA970u;
    {
        const bool branch_taken_0x2da970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA970u;
        // 0x2da974: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da970) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DA978u;
label_2da978:
    // 0x2da978: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2da978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2da97c:
    // 0x2da97c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2da97cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2da980: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2da980u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da984: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x2da984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2da988: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2da988u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2da98c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DA98Cu;
    {
        const bool branch_taken_0x2da98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA98Cu;
        // 0x2da990: 0x225c3  sra         $a0, $v0, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da98c) {
            ctx->pc = 0x2DA9F8u;
            goto label_2da9f8;
        }
    }
    ctx->pc = 0x2DA994u;
    // 0x2da994: 0x2483ff82  addiu       $v1, $a0, -0x7E
    ctx->pc = 0x2da994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967170));
    // 0x2da998: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x2da998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x2da99c: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x2da99cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2da9a0: 0xa34821  addu        $t1, $a1, $v1
    ctx->pc = 0x2da9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2da9a4: 0x1261024  and         $v0, $t1, $a2
    ctx->pc = 0x2da9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x2da9a8: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x2da9a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x2da9ac: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x2da9acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x2da9b0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2da9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2da9b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2da9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2da9b8: 0x1031007  srav        $v0, $v1, $t0
    ctx->pc = 0x2da9b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x2da9bc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2da9bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2da9c0: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x2da9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x2da9c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2da9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da9c8: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x2da9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2da9cc: 0x460c39c1  sub.s       $f7, $f7, $f12
    ctx->pc = 0x2da9ccu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x2da9d0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2da9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2da9d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2da9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2da9d8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2da9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2da9dc: 0x434807  srav        $t1, $v1, $v0
    ctx->pc = 0x2da9dcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2da9e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2da9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da9e4: 0x46073100  add.s       $f4, $f6, $f7
    ctx->pc = 0x2da9e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2da9e8: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x2da9e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2da9ec: 0x91023  negu        $v0, $t1
    ctx->pc = 0x2da9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x2da9f0: 0x44480a  movz        $t1, $v0, $a0
    ctx->pc = 0x2da9f0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x2da9f4: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x2da9f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_2da9f8:
    // 0x2da9f8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2da9f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da9fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2da9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2daa00: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2daa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2daa04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2daa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2daa08: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2daa08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2daa0c: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x2daa0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x2daa10: 0x34217200  ori         $at, $at, 0x7200
    ctx->pc = 0x2daa10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29184);
    // 0x2daa14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2daa14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2daa18: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x2daa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x2daa1c: 0x34217218  ori         $at, $at, 0x7218
    ctx->pc = 0x2daa1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29208);
    // 0x2daa20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2daa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2daa24: 0x46076041  sub.s       $f1, $f12, $f7
    ctx->pc = 0x2daa24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x2daa28: 0x3c0135bf  lui         $at, 0x35BF
    ctx->pc = 0x2daa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13759 << 16));
    // 0x2daa2c: 0x3421be8c  ori         $at, $at, 0xBE8C
    ctx->pc = 0x2daa2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48780);
    // 0x2daa30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2daa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2daa34: 0x460363c2  mul.s       $f15, $f12, $f3
    ctx->pc = 0x2daa34u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2daa38: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x2daa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x2daa3c: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x2daa3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x2daa40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2daa40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa44: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2daa44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2daa48: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x2daa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x2daa4c: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x2daa4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x2daa50: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2daa50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2daa54: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x2daa54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x2daa58: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x2daa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x2daa5c: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x2daa5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x2daa60: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2daa60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2daa64: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x2daa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x2daa68: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x2daa68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x2daa6c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2daa6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2daa70: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2daa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x2daa74: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2daa74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2daa78: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2daa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2daa7c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2daa7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2daa80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2daa80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2daa84: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2daa84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2daa88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2daa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2daa8c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2daa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2daa90: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x2daa90u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2daa94: 0x460e7b40  add.s       $f13, $f15, $f14
    ctx->pc = 0x2daa94u;
    ctx->f[13] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x2daa98: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x2daa98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2daa9c: 0x460f6841  sub.s       $f1, $f13, $f15
    ctx->pc = 0x2daa9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x2daaa0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2daaa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2daaa4: 0x46017241  sub.s       $f9, $f14, $f1
    ctx->pc = 0x2daaa4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x2daaa8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2daaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2daaac: 0x46096882  mul.s       $f2, $f13, $f9
    ctx->pc = 0x2daaacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x2daab0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2daab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2daab4: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x2daab4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x2daab8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2daab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2daabc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2daabcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2daac0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2daac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2daac4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2daac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2daac8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2daac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2daacc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2daaccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2daad0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x2daad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2daad4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2daad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2daad8: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x2daad8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2daadc: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2daadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2daae0: 0x0  nop
    ctx->pc = 0x2daae0u;
    // NOP
    // 0x2daae4: 0x0  nop
    ctx->pc = 0x2daae4u;
    // NOP
    // 0x2daae8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2daae8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x2daaec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2daaecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2daaf0: 0x460d0041  sub.s       $f1, $f0, $f13
    ctx->pc = 0x2daaf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2daaf4: 0x46012341  sub.s       $f13, $f4, $f1
    ctx->pc = 0x2daaf4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2daaf8: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x2daaf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2daafc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2daafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab00: 0x915c0  sll         $v0, $t1, 23
    ctx->pc = 0x2dab00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
    // 0x2dab04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2dab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2dab08: 0x51dc3  sra         $v1, $a1, 23
    ctx->pc = 0x2dab08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 23));
    // 0x2dab0c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAB0Cu;
    {
        const bool branch_taken_0x2dab0c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2DAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB0Cu;
        // 0x2dab10: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab0c) {
            ctx->pc = 0x2DAB28u;
            goto label_2dab28;
        }
    }
    ctx->pc = 0x2DAB14u;
    // 0x2dab14: 0xc0b7184  jal         func_2DC610
    ctx->pc = 0x2DAB14u;
    SET_GPR_U32(ctx, 31, 0x2DAB1Cu);
    ctx->pc = 0x2DAB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB14u;
    // 0x2dab18: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC610u, 0x2DAB14u, 0x2DAB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB1Cu;
label_2dab1c:
    // 0x2dab1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAB1Cu;
    {
        const bool branch_taken_0x2dab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB1Cu;
        // 0x2dab20: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab1c) {
            ctx->pc = 0x2DAB30u;
            goto label_2dab30;
        }
    }
    ctx->pc = 0x2DAB24u;
    // 0x2dab24: 0x0  nop
    ctx->pc = 0x2dab24u;
    // NOP
label_2dab28:
    // 0x2dab28: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2dab28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dab2c: 0x0  nop
    ctx->pc = 0x2dab2cu;
    // NOP
label_2dab30:
    // 0x2dab30: 0x460da002  mul.s       $f0, $f20, $f13
    ctx->pc = 0x2dab30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
label_2dab34:
    // 0x2dab34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dab34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2dab38:
    // 0x2dab38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2dab38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dab3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2dab3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dab40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2dab40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dab44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2dab44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dab48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dab48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dab4c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2dab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dab50: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2dab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dab54: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB54u;
        // 0x2dab58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAB5Cu;
}
