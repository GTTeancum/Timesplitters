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

// Function: mapmakercolour_pageTick
// Address: 0x2518a8 - 0x251bdc
void mapmakercolour_pageTick_0x2518a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakercolour_pageTick_0x2518a8");
#endif

    switch (ctx->pc) {
        case 0x2518d4u: goto label_2518d4;
        case 0x251900u: goto label_251900;
        case 0x251938u: goto label_251938;
        case 0x251980u: goto label_251980;
        case 0x251a04u: goto label_251a04;
        case 0x251aecu: goto label_251aec;
        case 0x251b4cu: goto label_251b4c;
        case 0x251bb4u: goto label_251bb4;
        default: break;
    }

    ctx->pc = 0x2518a8u;

    // 0x2518a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2518a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2518ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2518acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2518b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2518b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2518b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2518b8: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x2518b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2518bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2518bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518c0: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2518c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2518c4: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2518c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2518c8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2518c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2518cc: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2518CCu;
    SET_GPR_U32(ctx, 31, 0x2518D4u);
    ctx->pc = 0x2518D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2518CCu;
    // 0x2518d0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2518CCu, 0x2518D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2518D4u;
label_2518d4:
    // 0x2518d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2518d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2518d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2518D8u;
    {
        const bool branch_taken_0x2518d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518D8u;
        // 0x2518dc: 0x8f83a0d8  lw          $v1, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518d8) {
            ctx->pc = 0x251930u;
            goto label_251930;
        }
    }
    ctx->pc = 0x2518E0u;
    // 0x2518e0: 0x3c02fff3  lui         $v0, 0xFFF3
    ctx->pc = 0x2518e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65523 << 16));
    // 0x2518e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2518e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2518e8: 0xc78ca1fc  lwc1        $f12, -0x5E04($gp)
    ctx->pc = 0x2518e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2518ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2518ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2518f0: 0xc78da200  lwc1        $f13, -0x5E00($gp)
    ctx->pc = 0x2518f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2518f4: 0xc78ea204  lwc1        $f14, -0x5DFC($gp)
    ctx->pc = 0x2518f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2518f8: 0xc08b984  jal         func_22E610
    ctx->pc = 0x2518F8u;
    SET_GPR_U32(ctx, 31, 0x251900u);
    ctx->pc = 0x2518FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2518F8u;
    // 0x2518fc: 0xaf83a0d8  sw          $v1, -0x5F28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E610u, 0x2518F8u, 0x251900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251900u;
label_251900:
    // 0x251900: 0x8f83a224  lw          $v1, -0x5DDC($gp)
    ctx->pc = 0x251900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943268)));
    // 0x251904: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x251904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x251908: 0x24844040  addiu       $a0, $a0, 0x4040
    ctx->pc = 0x251908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x25190c: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x25190cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x251910: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x251910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x251914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x251914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x251918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x251918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25191c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25191cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x251920: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x251920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x251924: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x251924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251928: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x251928u;
    {
        const bool branch_taken_0x251928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251928u;
        // 0x25192c: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251928) {
            ctx->pc = 0x251BB8u;
            goto label_251bb8;
        }
    }
    ctx->pc = 0x251930u;
label_251930:
    // 0x251930: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x251930u;
    SET_GPR_U32(ctx, 31, 0x251938u);
    ctx->pc = 0x251934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251930u;
    // 0x251934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x251930u, 0x251938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251938u;
label_251938:
    // 0x251938: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x251938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x25193c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25193Cu;
    {
        const bool branch_taken_0x25193c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25193Cu;
        // 0x251940: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25193c) {
            ctx->pc = 0x251978u;
            goto label_251978;
        }
    }
    ctx->pc = 0x251944u;
    // 0x251944: 0x3c03fff3  lui         $v1, 0xFFF3
    ctx->pc = 0x251944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65523 << 16));
    // 0x251948: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x251948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x25194c: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x25194cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251950: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x251950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x251954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251958: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x251958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    // 0x25195c: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25195Cu;
    {
        const bool branch_taken_0x25195c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x251960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25195Cu;
        // 0x251960: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25195c) {
            ctx->pc = 0x251970u;
            goto label_251970;
        }
    }
    ctx->pc = 0x251964u;
    // 0x251964: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x251964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x251968: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251968u;
    {
        const bool branch_taken_0x251968 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x25196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251968u;
        // 0x25196c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251968) {
            ctx->pc = 0x251978u;
            goto label_251978;
        }
    }
    ctx->pc = 0x251970u;
label_251970:
    // 0x251970: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x251970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x251974: 0xaf82a0d8  sw          $v0, -0x5F28($gp)
    ctx->pc = 0x251974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
label_251978:
    // 0x251978: 0xc080e18  jal         func_203860
    ctx->pc = 0x251978u;
    SET_GPR_U32(ctx, 31, 0x251980u);
    ctx->pc = 0x25197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251978u;
    // 0x25197c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x251978u, 0x251980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251980u;
label_251980:
    // 0x251980: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x251980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x251984: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x251984u;
    {
        const bool branch_taken_0x251984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251984u;
        // 0x251988: 0x8f83a0d8  lw          $v1, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251984) {
            ctx->pc = 0x251BACu;
            goto label_251bac;
        }
    }
    ctx->pc = 0x25198Cu;
    // 0x25198c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x25198cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x251990: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251994: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x251994u;
    {
        const bool branch_taken_0x251994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251994u;
        // 0x251998: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251994) {
            ctx->pc = 0x251B18u;
            goto label_251b18;
        }
    }
    ctx->pc = 0x25199Cu;
    // 0x25199c: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x25199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x2519a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2519a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2519a4: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2519a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2519a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2519a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2519ac: 0x3c0142ce  lui         $at, 0x42CE
    ctx->pc = 0x2519acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17102 << 16));
    // 0x2519b0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2519b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2519b4: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2519b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2519b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2519b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2519bc: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x2519bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x2519c0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2519c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2519c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2519c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2519c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2519c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2519cc: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x2519ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x2519d0: 0x46170d41  sub.s       $f21, $f1, $f23
    ctx->pc = 0x2519d0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x2519d4: 0x46000580  add.s       $f22, $f0, $f0
    ctx->pc = 0x2519d4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2519d8: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2519d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2519dc: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x2519dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2519e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2519e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2519e4: 0x0  nop
    ctx->pc = 0x2519e4u;
    // NOP
    // 0x2519e8: 0x0  nop
    ctx->pc = 0x2519e8u;
    // NOP
    // 0x2519ec: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2519ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2519f0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2519f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2519f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2519F4u;
    {
        const bool branch_taken_0x2519f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2519f4) {
            ctx->pc = 0x251A04u;
            goto label_251a04;
        }
    }
    ctx->pc = 0x2519FCu;
    // 0x2519fc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2519FCu;
    SET_GPR_U32(ctx, 31, 0x251A04u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2519FCu, 0x251A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A04u;
label_251a04:
    // 0x251a04: 0x3c0142b8  lui         $at, 0x42B8
    ctx->pc = 0x251a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17080 << 16));
    // 0x251a08: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x251a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x251a0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251a10: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251a14: 0x0  nop
    ctx->pc = 0x251a14u;
    // NOP
    // 0x251a18: 0x0  nop
    ctx->pc = 0x251a18u;
    // NOP
    // 0x251a1c: 0x46060503  div.s       $f20, $f0, $f6
    ctx->pc = 0x251a1cu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[6];
    // 0x251a20: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x251a20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251a24: 0x0  nop
    ctx->pc = 0x251a24u;
    // NOP
    // 0x251a28: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x251A28u;
    {
        const bool branch_taken_0x251a28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A28u;
        // 0x251a2c: 0xc780a1fc  lwc1        $f0, -0x5E04($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a28) {
            ctx->pc = 0x251AE0u;
            goto label_251ae0;
        }
    }
    ctx->pc = 0x251A30u;
    // 0x251a30: 0xc781829c  lwc1        $f1, -0x7D64($gp)
    ctx->pc = 0x251a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251a34: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x251a34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x251a38: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x251a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x251a3c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x251a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x251a40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251a44: 0x24845c60  addiu       $a0, $a0, 0x5C60
    ctx->pc = 0x251a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23648));
    // 0x251a48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251a4c: 0xc78382a0  lwc1        $f3, -0x7D60($gp)
    ctx->pc = 0x251a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x251a50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x251a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x251a54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251a58: 0xc78482a4  lwc1        $f4, -0x7D5C($gp)
    ctx->pc = 0x251a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x251a5c: 0x0  nop
    ctx->pc = 0x251a5cu;
    // NOP
    // 0x251a60: 0x0  nop
    ctx->pc = 0x251a60u;
    // NOP
    // 0x251a64: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x251a64u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x251a68: 0x3c014238  lui         $at, 0x4238
    ctx->pc = 0x251a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16952 << 16));
    // 0x251a6c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x251a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x251a70: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x251a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x251a74: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x251a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x251a78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x251a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x251a7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251a7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251a80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x251a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251a84: 0x24430200  addiu       $v1, $v0, 0x200
    ctx->pc = 0x251a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x251a88: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x251a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x251a8c: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x251a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x251a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x251a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x251a94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x251a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x251a98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x251a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x251a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x251a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x251aa0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x251aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251aa4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251aa8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x251aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x251aac: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x251aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x251ab0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x251ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x251ab4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x251ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x251ab8: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x251ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x251abc: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x251abcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x251ac0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251ac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x251ac4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x251ac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251ac8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x251acc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x251accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251ad0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x251ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x251ad4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x251ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x251ad8: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x251ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x251adc: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x251adcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_251ae0:
    // 0x251ae0: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x251ae0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
    // 0x251ae4: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x251AE4u;
    SET_GPR_U32(ctx, 31, 0x251AECu);
    ctx->pc = 0x251AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AE4u;
    // 0x251ae8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x251AE4u, 0x251AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AECu;
label_251aec:
    // 0x251aec: 0xc78282a8  lwc1        $f2, -0x7D58($gp)
    ctx->pc = 0x251aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251af0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x251af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x251af4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251af8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x251af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x251afc: 0xe794a200  swc1        $f20, -0x5E00($gp)
    ctx->pc = 0x251afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943232), bits); }
    // 0x251b00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251b04: 0x0  nop
    ctx->pc = 0x251b04u;
    // NOP
    // 0x251b08: 0x0  nop
    ctx->pc = 0x251b08u;
    // NOP
    // 0x251b0c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x251b0cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x251b10: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x251B10u;
    {
        const bool branch_taken_0x251b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B10u;
        // 0x251b14: 0xe780a1fc  swc1        $f0, -0x5E04($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b10) {
            ctx->pc = 0x251BACu;
            goto label_251bac;
        }
    }
    ctx->pc = 0x251B18u;
label_251b18:
    // 0x251b18: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x251b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x251b1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251b20: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x251B20u;
    {
        const bool branch_taken_0x251b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B20u;
        // 0x251b24: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b20) {
            ctx->pc = 0x251BACu;
            goto label_251bac;
        }
    }
    ctx->pc = 0x251B28u;
    // 0x251b28: 0x3c030097  lui         $v1, 0x97
    ctx->pc = 0x251b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)151 << 16));
    // 0x251b2c: 0x3c05010a  lui         $a1, 0x10A
    ctx->pc = 0x251b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)266 << 16));
    // 0x251b30: 0x3c060128  lui         $a2, 0x128
    ctx->pc = 0x251b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)296 << 16));
    // 0x251b34: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x251b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x251b38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x251b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251b3c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x251b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x251b40: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x251b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x251b44: 0xc091a48  jal         func_246920
    ctx->pc = 0x251B44u;
    SET_GPR_U32(ctx, 31, 0x251B4Cu);
    ctx->pc = 0x251B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251B44u;
    // 0x251b48: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246920u, 0x251B44u, 0x251B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B4Cu;
label_251b4c:
    // 0x251b4c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x251b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x251b50: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x251b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x251b54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251b58: 0x84620026  lh          $v0, 0x26($v1)
    ctx->pc = 0x251b58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x251b5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251b60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251b64: 0x2442ffc8  addiu       $v0, $v0, -0x38
    ctx->pc = 0x251b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
    // 0x251b68: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x251b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251b70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x251b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x251b74: 0x0  nop
    ctx->pc = 0x251b74u;
    // NOP
    // 0x251b78: 0x0  nop
    ctx->pc = 0x251b78u;
    // NOP
    // 0x251b7c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x251b7cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x251b80: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x251b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x251b84: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x251b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251b88: 0x0  nop
    ctx->pc = 0x251b88u;
    // NOP
    // 0x251b8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x251B8Cu;
    {
        const bool branch_taken_0x251b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B8Cu;
        // 0x251b90: 0xe780a204  swc1        $f0, -0x5DFC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b8c) {
            ctx->pc = 0x251B98u;
            goto label_251b98;
        }
    }
    ctx->pc = 0x251B94u;
    // 0x251b94: 0xe783a204  swc1        $f3, -0x5DFC($gp)
    ctx->pc = 0x251b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943236), bits); }
label_251b98:
    // 0x251b98: 0xc780a204  lwc1        $f0, -0x5DFC($gp)
    ctx->pc = 0x251b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251b9c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x251b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251ba0: 0x0  nop
    ctx->pc = 0x251ba0u;
    // NOP
    // 0x251ba4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x251BA4u;
    {
        const bool branch_taken_0x251ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251ba4) {
            ctx->pc = 0x251BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251BA4u;
            // 0x251ba8: 0xe782a204  swc1        $f2, -0x5DFC($gp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943236), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x251BACu;
            goto label_251bac;
        }
    }
    ctx->pc = 0x251BACu;
label_251bac:
    // 0x251bac: 0xc0945da  jal         func_251768
    ctx->pc = 0x251BACu;
    SET_GPR_U32(ctx, 31, 0x251BB4u);
    ctx->pc = 0x251BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251BACu;
    // 0x251bb0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251768u, 0x251BACu, 0x251BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251BB4u;
label_251bb4:
    // 0x251bb4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x251bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_251bb8:
    // 0x251bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x251bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251bbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x251bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251bc0: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x251bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x251bc4: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x251bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x251bc8: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x251bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x251bcc: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x251bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x251bd0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x251bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x251bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x251BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BD4u;
        // 0x251bd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251BDCu;
}
