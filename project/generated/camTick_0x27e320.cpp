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

// Function: camTick
// Address: 0x27e320 - 0x27efa8
void camTick_0x27e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camTick_0x27e320");
#endif

    switch (ctx->pc) {
        case 0x27e388u: goto label_27e388;
        case 0x27e3fcu: goto label_27e3fc;
        case 0x27e410u: goto label_27e410;
        case 0x27e46cu: goto label_27e46c;
        case 0x27e498u: goto label_27e498;
        case 0x27e4ccu: goto label_27e4cc;
        case 0x27e540u: goto label_27e540;
        case 0x27e54cu: goto label_27e54c;
        case 0x27e55cu: goto label_27e55c;
        case 0x27e568u: goto label_27e568;
        case 0x27e570u: goto label_27e570;
        case 0x27e57cu: goto label_27e57c;
        case 0x27e594u: goto label_27e594;
        case 0x27e5a4u: goto label_27e5a4;
        case 0x27e5d8u: goto label_27e5d8;
        case 0x27e5f8u: goto label_27e5f8;
        case 0x27e60cu: goto label_27e60c;
        case 0x27e638u: goto label_27e638;
        case 0x27e660u: goto label_27e660;
        case 0x27e6a8u: goto label_27e6a8;
        case 0x27e6b0u: goto label_27e6b0;
        case 0x27e6c0u: goto label_27e6c0;
        case 0x27e6c8u: goto label_27e6c8;
        case 0x27e718u: goto label_27e718;
        case 0x27e720u: goto label_27e720;
        case 0x27e730u: goto label_27e730;
        case 0x27e738u: goto label_27e738;
        case 0x27e75cu: goto label_27e75c;
        case 0x27e7a0u: goto label_27e7a0;
        case 0x27e7a8u: goto label_27e7a8;
        case 0x27e7b8u: goto label_27e7b8;
        case 0x27e7c0u: goto label_27e7c0;
        case 0x27e808u: goto label_27e808;
        case 0x27e810u: goto label_27e810;
        case 0x27e820u: goto label_27e820;
        case 0x27e828u: goto label_27e828;
        case 0x27e864u: goto label_27e864;
        case 0x27e880u: goto label_27e880;
        case 0x27e89cu: goto label_27e89c;
        case 0x27e8b8u: goto label_27e8b8;
        case 0x27e9dcu: goto label_27e9dc;
        case 0x27e9ecu: goto label_27e9ec;
        case 0x27e9f4u: goto label_27e9f4;
        case 0x27ea18u: goto label_27ea18;
        case 0x27ea20u: goto label_27ea20;
        case 0x27ea30u: goto label_27ea30;
        case 0x27ea38u: goto label_27ea38;
        case 0x27ea80u: goto label_27ea80;
        case 0x27ea88u: goto label_27ea88;
        case 0x27ea98u: goto label_27ea98;
        case 0x27eaa0u: goto label_27eaa0;
        case 0x27ead8u: goto label_27ead8;
        case 0x27eaf4u: goto label_27eaf4;
        case 0x27eb10u: goto label_27eb10;
        case 0x27eb2cu: goto label_27eb2c;
        case 0x27ebb8u: goto label_27ebb8;
        case 0x27ebd0u: goto label_27ebd0;
        case 0x27ec50u: goto label_27ec50;
        case 0x27ec5cu: goto label_27ec5c;
        case 0x27ec6cu: goto label_27ec6c;
        case 0x27ec78u: goto label_27ec78;
        case 0x27ec80u: goto label_27ec80;
        case 0x27ec94u: goto label_27ec94;
        case 0x27eca0u: goto label_27eca0;
        case 0x27ecb0u: goto label_27ecb0;
        case 0x27ecbcu: goto label_27ecbc;
        case 0x27ecc4u: goto label_27ecc4;
        case 0x27ece8u: goto label_27ece8;
        case 0x27ed00u: goto label_27ed00;
        case 0x27ed10u: goto label_27ed10;
        case 0x27ed2cu: goto label_27ed2c;
        case 0x27ed48u: goto label_27ed48;
        case 0x27edf0u: goto label_27edf0;
        case 0x27ee3cu: goto label_27ee3c;
        case 0x27ee68u: goto label_27ee68;
        case 0x27ee90u: goto label_27ee90;
        case 0x27eec0u: goto label_27eec0;
        case 0x27ef08u: goto label_27ef08;
        case 0x27ef50u: goto label_27ef50;
        case 0x27ef64u: goto label_27ef64;
        case 0x27ef74u: goto label_27ef74;
        default: break;
    }

    ctx->pc = 0x27e320u;

    // 0x27e320: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x27e324: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27e328: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x27e328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x27e32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e330: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x27e330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x27e334: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x27e334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e338: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x27e338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x27e33c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27e33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e340: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x27e340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x27e344: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x27e344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x27e348: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x27e348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x27e34c: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x27e34cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x27e350: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x27e350u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x27e354: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x27e354u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x27e358: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x27e358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x27e35c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x27e35cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x27e360: 0x8f92b234  lw          $s2, -0x4DCC($gp)
    ctx->pc = 0x27e360u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27e364: 0x24498770  addiu       $t1, $v0, -0x7890
    ctx->pc = 0x27e364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936432));
    // 0x27e368: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x27e368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27e36c: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x27e36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x27e370: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x27e370u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3A8778u));
    // 0x27e374: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x27e374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e378: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x27e378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27e37c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x27e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x27e380: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x27E380u;
    SET_GPR_U32(ctx, 31, 0x27E388u);
    ctx->pc = 0x27E384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E380u;
    // 0x27e384: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x27E380u, 0x27E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E388u;
label_27e388:
    // 0x27e388: 0x8f89b234  lw          $t1, -0x4DCC($gp)
    ctx->pc = 0x27e388u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27e38c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x27e38cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x27e390: 0x8f8ab1e8  lw          $t2, -0x4E18($gp)
    ctx->pc = 0x27e390u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947304)));
    // 0x27e394: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x27e394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x27e398: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x27e398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27e39c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x27e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x27e3a0: 0xa1980  sll         $v1, $t2, 6
    ctx->pc = 0x27e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x27e3a4: 0x24c637f0  addiu       $a2, $a2, 0x37F0
    ctx->pc = 0x27e3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14320));
    // 0x27e3a8: 0x24a539f0  addiu       $a1, $a1, 0x39F0
    ctx->pc = 0x27e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14832));
    // 0x27e3ac: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x27e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
    // 0x27e3b0: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x27e3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x27e3b4: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x27e3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x27e3b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e3bc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x27e3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27e3c0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x27e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27e3c4: 0x25083bf0  addiu       $t0, $t0, 0x3BF0
    ctx->pc = 0x27e3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15344));
    // 0x27e3c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27e3cc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x27e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x27e3d0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x27e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27e3d4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x27e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x27e3d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27e3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e3dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27e3e0: 0xea3823  subu        $a3, $a3, $t2
    ctx->pc = 0x27e3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x27e3e4: 0xad2206ec  sw          $v0, 0x6EC($t1)
    ctx->pc = 0x27e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1772), GPR_U32(ctx, 2));
    // 0x27e3e8: 0xad2606e0  sw          $a2, 0x6E0($t1)
    ctx->pc = 0x27e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1760), GPR_U32(ctx, 6));
    // 0x27e3ec: 0xad2506e4  sw          $a1, 0x6E4($t1)
    ctx->pc = 0x27e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1764), GPR_U32(ctx, 5));
    // 0x27e3f0: 0xad2406e8  sw          $a0, 0x6E8($t1)
    ctx->pc = 0x27e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1768), GPR_U32(ctx, 4));
    // 0x27e3f4: 0xc0836ca  jal         func_20DB28
    ctx->pc = 0x27E3F4u;
    SET_GPR_U32(ctx, 31, 0x27E3FCu);
    ctx->pc = 0x27E3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3F4u;
    // 0x27e3f8: 0xaf87b1e8  sw          $a3, -0x4E18($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947304), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB28u, 0x27E3F4u, 0x27E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3FCu;
label_27e3fc:
    // 0x27e3fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e400: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E400u;
    {
        const bool branch_taken_0x27e400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E400u;
        // 0x27e404: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e400) {
            ctx->pc = 0x27E410u;
            goto label_27e410;
        }
    }
    ctx->pc = 0x27E408u;
    // 0x27e408: 0xc083040  jal         func_20C100
    ctx->pc = 0x27E408u;
    SET_GPR_U32(ctx, 31, 0x27E410u);
    ctx->pc = 0x20C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C100u, 0x27E408u, 0x27E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E410u;
label_27e410:
    // 0x27e410: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27e414: 0x261099f0  addiu       $s0, $s0, -0x6610
    ctx->pc = 0x27e414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x27e418: 0xc79487d8  lwc1        $f20, -0x7828($gp)
    ctx->pc = 0x27e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e41c: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x27e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e420: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27e420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27e424: 0xc44d0104  lwc1        $f13, 0x104($v0)
    ctx->pc = 0x27e424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27e428: 0xc79687dc  lwc1        $f22, -0x7824($gp)
    ctx->pc = 0x27e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27e42c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x27e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e434: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27e434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27e438: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27e438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27e43c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x27e43cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x27e440: 0x8c4406e0  lw          $a0, 0x6E0($v0)
    ctx->pc = 0x27e440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    // 0x27e444: 0x46166b42  mul.s       $f13, $f13, $f22
    ctx->pc = 0x27e444u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x27e448: 0xc78eb1ec  lwc1        $f14, -0x4E14($gp)
    ctx->pc = 0x27e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27e44c: 0x0  nop
    ctx->pc = 0x27e44cu;
    // NOP
    // 0x27e450: 0x0  nop
    ctx->pc = 0x27e450u;
    // NOP
    // 0x27e454: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x27e454u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x27e458: 0x0  nop
    ctx->pc = 0x27e458u;
    // NOP
    // 0x27e45c: 0x0  nop
    ctx->pc = 0x27e45cu;
    // NOP
    // 0x27e460: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x27e460u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x27e464: 0xc0ad496  jal         func_2B5258
    ctx->pc = 0x27E464u;
    SET_GPR_U32(ctx, 31, 0x27E46Cu);
    ctx->pc = 0x27E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E464u;
    // 0x27e468: 0xc78fb1f0  lwc1        $f15, -0x4E10($gp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5258u, 0x27E464u, 0x27E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E46Cu;
label_27e46c:
    // 0x27e46c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27e470: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27e470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27e474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e478: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x27e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e47c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x27e47cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27e480: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x27e480u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x27e484: 0x0  nop
    ctx->pc = 0x27e484u;
    // NOP
    // 0x27e488: 0x0  nop
    ctx->pc = 0x27e488u;
    // NOP
    // 0x27e48c: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x27e48cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x27e490: 0xc0b5d22  jal         func_2D7488
    ctx->pc = 0x27E490u;
    SET_GPR_U32(ctx, 31, 0x27E498u);
    ctx->pc = 0x2D7488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7488u, 0x27E490u, 0x27E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E498u;
label_27e498:
    // 0x27e498: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x27e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e49c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27e49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27e4a0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27e4a4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x27e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e4a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27e4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27e4ac: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x27e4acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x27e4b0: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x27e4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x27e4b4: 0x0  nop
    ctx->pc = 0x27e4b4u;
    // NOP
    // 0x27e4b8: 0x0  nop
    ctx->pc = 0x27e4b8u;
    // NOP
    // 0x27e4bc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x27e4bcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x27e4c0: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x27e4c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x27e4c4: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x27E4C4u;
    SET_GPR_U32(ctx, 31, 0x27E4CCu);
    ctx->pc = 0x27E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4C4u;
    // 0x27e4c8: 0xe4540100  swc1        $f20, 0x100($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x27E4C4u, 0x27E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4CCu;
label_27e4cc:
    // 0x27e4cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27e4ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e4d0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x27e4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x27e4d4: 0x1040028e  beqz        $v0, . + 4 + (0x28E << 2)
    ctx->pc = 0x27E4D4u;
    {
        const bool branch_taken_0x27e4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4D4u;
        // 0x27e4d8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4d4) {
            ctx->pc = 0x27EF10u;
            goto label_27ef10;
        }
    }
    ctx->pc = 0x27E4DCu;
    // 0x27e4dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e4e0: 0x24428780  addiu       $v0, $v0, -0x7880
    ctx->pc = 0x27e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936448));
    // 0x27e4e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e4e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27e4ec: 0x800008  jr          $a0
    ctx->pc = 0x27E4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E4F4u: goto label_27e4f4;
            case 0x27E574u: goto label_27e574;
            case 0x27E9A4u: goto label_27e9a4;
            case 0x27EBD8u: goto label_27ebd8;
            case 0x27ED50u: goto label_27ed50;
            case 0x27ED68u: goto label_27ed68;
            case 0x27EE98u: goto label_27ee98;
            case 0x27EEC8u: goto label_27eec8;
            case 0x27EF10u: goto label_27ef10;
            case 0x27EF50u: goto label_27ef50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E4ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27E4F4u;
label_27e4f4:
    // 0x27e4f4: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x27e4f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x27e4f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27e4fc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x27e4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x27e500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e504: 0x8e430388  lw          $v1, 0x388($s2)
    ctx->pc = 0x27e504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
    // 0x27e508: 0xe780b938  swc1        $f0, -0x46C8($gp)
    ctx->pc = 0x27e508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949176), bits); }
    // 0x27e50c: 0xaf82b1e4  sw          $v0, -0x4E1C($gp)
    ctx->pc = 0x27e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947300), GPR_U32(ctx, 2));
    // 0x27e510: 0xaf80b1f4  sw          $zero, -0x4E0C($gp)
    ctx->pc = 0x27e510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947316), GPR_U32(ctx, 0));
    // 0x27e514: 0xe797b930  swc1        $f23, -0x46D0($gp)
    ctx->pc = 0x27e514u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949168), bits); }
    // 0x27e518: 0xe797b934  swc1        $f23, -0x46CC($gp)
    ctx->pc = 0x27e518u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949172), bits); }
    // 0x27e51c: 0xe797b940  swc1        $f23, -0x46C0($gp)
    ctx->pc = 0x27e51cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949184), bits); }
    // 0x27e520: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x27E520u;
    {
        const bool branch_taken_0x27e520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E520u;
        // 0x27e524: 0xe797b93c  swc1        $f23, -0x46C4($gp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e520) {
            ctx->pc = 0x27E574u;
            goto label_27e574;
        }
    }
    ctx->pc = 0x27E528u;
    // 0x27e528: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x27e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27e52c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27e530: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27E530u;
    {
        const bool branch_taken_0x27e530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e530) {
            ctx->pc = 0x27E574u;
            goto label_27e574;
        }
    }
    ctx->pc = 0x27E538u;
    // 0x27e538: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27E538u;
    SET_GPR_U32(ctx, 31, 0x27E540u);
    ctx->pc = 0x27E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E538u;
    // 0x27e53c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27E538u, 0x27E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E540u;
label_27e540:
    // 0x27e540: 0xc64c0074  lwc1        $f12, 0x74($s2)
    ctx->pc = 0x27e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e544: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27E544u;
    SET_GPR_U32(ctx, 31, 0x27E54Cu);
    ctx->pc = 0x27E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E544u;
    // 0x27e548: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27E544u, 0x27E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E54Cu;
label_27e54c:
    // 0x27e54c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x27e54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x27e550: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x27e550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x27e554: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x27E554u;
    SET_GPR_U32(ctx, 31, 0x27E55Cu);
    ctx->pc = 0x27E558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E554u;
    // 0x27e558: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x27E554u, 0x27E55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E55Cu;
label_27e55c:
    // 0x27e55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e560: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x27E560u;
    SET_GPR_U32(ctx, 31, 0x27E568u);
    ctx->pc = 0x27E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E560u;
    // 0x27e564: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x27E560u, 0x27E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E568u;
label_27e568:
    // 0x27e568: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27E568u;
    SET_GPR_U32(ctx, 31, 0x27E570u);
    ctx->pc = 0x27E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E568u;
    // 0x27e56c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27E568u, 0x27E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E570u;
label_27e570:
    // 0x27e570: 0xe780b940  swc1        $f0, -0x46C0($gp)
    ctx->pc = 0x27e570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949184), bits); }
label_27e574:
    // 0x27e574: 0xc080f9c  jal         func_203E70
    ctx->pc = 0x27E574u;
    SET_GPR_U32(ctx, 31, 0x27E57Cu);
    ctx->pc = 0x27E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E574u;
    // 0x27e578: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E70u, 0x27E574u, 0x27E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E57Cu;
label_27e57c:
    // 0x27e57c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x27e57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x27e580: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E580u;
    {
        const bool branch_taken_0x27e580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e580) {
            ctx->pc = 0x27E584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E580u;
            // 0x27e584: 0x8e510388  lw          $s1, 0x388($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E59Cu;
            goto label_27e59c;
        }
    }
    ctx->pc = 0x27E588u;
    // 0x27e588: 0x8e440388  lw          $a0, 0x388($s2)
    ctx->pc = 0x27e588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
    // 0x27e58c: 0xc09c0d6  jal         func_270358
    ctx->pc = 0x27E58Cu;
    SET_GPR_U32(ctx, 31, 0x27E594u);
    ctx->pc = 0x27E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E58Cu;
    // 0x27e590: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270358u, 0x27E58Cu, 0x27E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E594u;
label_27e594:
    // 0x27e594: 0xae420388  sw          $v0, 0x388($s2)
    ctx->pc = 0x27e594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 904), GPR_U32(ctx, 2));
    // 0x27e598: 0x8e510388  lw          $s1, 0x388($s2)
    ctx->pc = 0x27e598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
label_27e59c:
    // 0x27e59c: 0xc080f9c  jal         func_203E70
    ctx->pc = 0x27E59Cu;
    SET_GPR_U32(ctx, 31, 0x27E5A4u);
    ctx->pc = 0x27E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E59Cu;
    // 0x27e5a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E70u, 0x27E59Cu, 0x27E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5A4u;
label_27e5a4:
    // 0x27e5a4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27e5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27e5a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E5A8u;
    {
        const bool branch_taken_0x27e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5A8u;
        // 0x27e5ac: 0x8f82b1f4  lw          $v0, -0x4E0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5a8) {
            ctx->pc = 0x27E5C4u;
            goto label_27e5c4;
        }
    }
    ctx->pc = 0x27E5B0u;
    // 0x27e5b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27e5b4: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x27e5b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27e5b8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27E5B8u;
    {
        const bool branch_taken_0x27e5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5B8u;
        // 0x27e5bc: 0xaf82b1f4  sw          $v0, -0x4E0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5b8) {
            ctx->pc = 0x27E5C4u;
            goto label_27e5c4;
        }
    }
    ctx->pc = 0x27E5C0u;
    // 0x27e5c0: 0xaf80b1f4  sw          $zero, -0x4E0C($gp)
    ctx->pc = 0x27e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947316), GPR_U32(ctx, 0));
label_27e5c4:
    // 0x27e5c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e5c8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x27e5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x27e5cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27e5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27e5d0: 0xc080fb8  jal         func_203EE0
    ctx->pc = 0x27E5D0u;
    SET_GPR_U32(ctx, 31, 0x27E5D8u);
    ctx->pc = 0x27E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5D0u;
    // 0x27e5d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EE0u, 0x27E5D0u, 0x27E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5D8u;
label_27e5d8:
    // 0x27e5d8: 0xc781b938  lwc1        $f1, -0x46C8($gp)
    ctx->pc = 0x27e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e5dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e5e0: 0x0  nop
    ctx->pc = 0x27e5e0u;
    // NOP
    // 0x27e5e4: 0x0  nop
    ctx->pc = 0x27e5e4u;
    // NOP
    // 0x27e5e8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x27e5e8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x27e5ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27e5ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27e5f0: 0xc080fa8  jal         func_203EA0
    ctx->pc = 0x27E5F0u;
    SET_GPR_U32(ctx, 31, 0x27E5F8u);
    ctx->pc = 0x27E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5F0u;
    // 0x27e5f4: 0xe781b938  swc1        $f1, -0x46C8($gp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x203EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EA0u, 0x27E5F0u, 0x27E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5F8u;
label_27e5f8:
    // 0x27e5f8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x27e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x27e5fc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27E5FCu;
    {
        const bool branch_taken_0x27e5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5FCu;
        // 0x27e600: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5fc) {
            ctx->pc = 0x27E658u;
            goto label_27e658;
        }
    }
    ctx->pc = 0x27E604u;
    // 0x27e604: 0xc080fb8  jal         func_203EE0
    ctx->pc = 0x27E604u;
    SET_GPR_U32(ctx, 31, 0x27E60Cu);
    ctx->pc = 0x27E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E604u;
    // 0x27e608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EE0u, 0x27E604u, 0x27E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E60Cu;
label_27e60c:
    // 0x27e60c: 0x3c1301ff  lui         $s3, 0x1FF
    ctx->pc = 0x27e60cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)511 << 16));
    // 0x27e610: 0x0  nop
    ctx->pc = 0x27e610u;
    // NOP
    // 0x27e614: 0x0  nop
    ctx->pc = 0x27e614u;
    // NOP
    // 0x27e618: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x27e618u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x27e61c: 0xc781b940  lwc1        $f1, -0x46C0($gp)
    ctx->pc = 0x27e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e628: 0x26500374  addiu       $s0, $s2, 0x374
    ctx->pc = 0x27e628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 884));
    // 0x27e62c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27e62cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27e630: 0xc080fb8  jal         func_203EE0
    ctx->pc = 0x27E630u;
    SET_GPR_U32(ctx, 31, 0x27E638u);
    ctx->pc = 0x27E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E630u;
    // 0x27e634: 0xe781b940  swc1        $f1, -0x46C0($gp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x203EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EE0u, 0x27E630u, 0x27E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E638u;
label_27e638:
    // 0x27e638: 0x0  nop
    ctx->pc = 0x27e638u;
    // NOP
    // 0x27e63c: 0x0  nop
    ctx->pc = 0x27e63cu;
    // NOP
    // 0x27e640: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x27e640u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x27e644: 0xc781b93c  lwc1        $f1, -0x46C4($gp)
    ctx->pc = 0x27e644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e648: 0xc797b930  lwc1        $f23, -0x46D0($gp)
    ctx->pc = 0x27e648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27e64c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27e64cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27e650: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x27E650u;
    {
        const bool branch_taken_0x27e650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E650u;
        // 0x27e654: 0xe781b93c  swc1        $f1, -0x46C4($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e650) {
            ctx->pc = 0x27E840u;
            goto label_27e840;
        }
    }
    ctx->pc = 0x27E658u;
label_27e658:
    // 0x27e658: 0xc080fb8  jal         func_203EE0
    ctx->pc = 0x27E658u;
    SET_GPR_U32(ctx, 31, 0x27E660u);
    ctx->pc = 0x27E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E658u;
    // 0x27e65c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EE0u, 0x27E658u, 0x27E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E660u;
label_27e660:
    // 0x27e660: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27e660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27e664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e668: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x27e668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x27e66c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27e66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27e670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27e670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27e674: 0xc797b930  lwc1        $f23, -0x46D0($gp)
    ctx->pc = 0x27e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27e678: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27e678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27e67c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e680: 0x0  nop
    ctx->pc = 0x27e680u;
    // NOP
    // 0x27e684: 0x0  nop
    ctx->pc = 0x27e684u;
    // NOP
    // 0x27e688: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x27e688u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x27e68c: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x27e68cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x27e690: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x27e690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e694: 0x0  nop
    ctx->pc = 0x27e694u;
    // NOP
    // 0x27e698: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x27E698u;
    {
        const bool branch_taken_0x27e698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E698u;
        // 0x27e69c: 0xe797b930  swc1        $f23, -0x46D0($gp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e698) {
            ctx->pc = 0x27E6ECu;
            goto label_27e6ec;
        }
    }
    ctx->pc = 0x27E6A0u;
    // 0x27e6a0: 0x3c1301ff  lui         $s3, 0x1FF
    ctx->pc = 0x27e6a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)511 << 16));
    // 0x27e6a4: 0x26500374  addiu       $s0, $s2, 0x374
    ctx->pc = 0x27e6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 884));
label_27e6a8:
    // 0x27e6a8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27E6A8u;
    SET_GPR_U32(ctx, 31, 0x27E6B0u);
    ctx->pc = 0x27E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6A8u;
    // 0x27e6ac: 0xc78cb930  lwc1        $f12, -0x46D0($gp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27E6A8u, 0x27E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6B0u;
label_27e6b0:
    // 0x27e6b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27e6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27e6b4: 0xdc2587a8  ld          $a1, -0x7858($at)
    ctx->pc = 0x27e6b4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A87A8u));
    // 0x27e6b8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x27E6B8u;
    SET_GPR_U32(ctx, 31, 0x27E6C0u);
    ctx->pc = 0x27E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6B8u;
    // 0x27e6bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x27E6B8u, 0x27E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6C0u;
label_27e6c0:
    // 0x27e6c0: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27E6C0u;
    SET_GPR_U32(ctx, 31, 0x27E6C8u);
    ctx->pc = 0x27E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6C0u;
    // 0x27e6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27E6C0u, 0x27E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6C8u;
label_27e6c8:
    // 0x27e6c8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27e6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27e6cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e6d0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x27e6d0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x27e6d4: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x27e6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e6d8: 0x0  nop
    ctx->pc = 0x27e6d8u;
    // NOP
    // 0x27e6dc: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
    ctx->pc = 0x27E6DCu;
    {
        const bool branch_taken_0x27e6dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6DCu;
        // 0x27e6e0: 0xe797b930  swc1        $f23, -0x46D0($gp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6dc) {
            ctx->pc = 0x27E6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e6a8;
        }
    }
    ctx->pc = 0x27E6E4u;
    // 0x27e6e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27E6E4u;
    {
        const bool branch_taken_0x27e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e6e4) {
            ctx->pc = 0x27E6F4u;
            goto label_27e6f4;
        }
    }
    ctx->pc = 0x27E6ECu;
label_27e6ec:
    // 0x27e6ec: 0x3c1301ff  lui         $s3, 0x1FF
    ctx->pc = 0x27e6ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)511 << 16));
    // 0x27e6f0: 0x26500374  addiu       $s0, $s2, 0x374
    ctx->pc = 0x27e6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 884));
label_27e6f4:
    // 0x27e6f4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27e6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27e6f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e6fc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x27e6fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27e700: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x27e700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e704: 0x0  nop
    ctx->pc = 0x27e704u;
    // NOP
    // 0x27e708: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x27E708u;
    {
        const bool branch_taken_0x27e708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E708u;
        // 0x27e70c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e708) {
            ctx->pc = 0x27E754u;
            goto label_27e754;
        }
    }
    ctx->pc = 0x27E710u;
    // 0x27e710: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27e710u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27e714: 0x0  nop
    ctx->pc = 0x27e714u;
    // NOP
label_27e718:
    // 0x27e718: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27E718u;
    SET_GPR_U32(ctx, 31, 0x27E720u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27E718u, 0x27E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E720u;
label_27e720:
    // 0x27e720: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27e720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27e724: 0xdc2587b0  ld          $a1, -0x7850($at)
    ctx->pc = 0x27e724u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A87B0u));
    // 0x27e728: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x27E728u;
    SET_GPR_U32(ctx, 31, 0x27E730u);
    ctx->pc = 0x27E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E728u;
    // 0x27e72c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x27E728u, 0x27E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E730u;
label_27e730:
    // 0x27e730: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27E730u;
    SET_GPR_U32(ctx, 31, 0x27E738u);
    ctx->pc = 0x27E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E730u;
    // 0x27e734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27E730u, 0x27E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E738u;
label_27e738:
    // 0x27e738: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x27e738u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x27e73c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x27e73cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27e740: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x27e740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e744: 0x0  nop
    ctx->pc = 0x27e744u;
    // NOP
    // 0x27e748: 0x4501fff3  bc1t        . + 4 + (-0xD << 2)
    ctx->pc = 0x27E748u;
    {
        const bool branch_taken_0x27e748 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E748u;
        // 0x27e74c: 0xe797b930  swc1        $f23, -0x46D0($gp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e748) {
            ctx->pc = 0x27E718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e718;
        }
    }
    ctx->pc = 0x27E750u;
    // 0x27e750: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e754:
    // 0x27e754: 0xc080fb8  jal         func_203EE0
    ctx->pc = 0x27E754u;
    SET_GPR_U32(ctx, 31, 0x27E75Cu);
    ctx->pc = 0x27E758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E754u;
    // 0x27e758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EE0u, 0x27E754u, 0x27E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E75Cu;
label_27e75c:
    // 0x27e75c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27e75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27e760: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e764: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x27e764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x27e768: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27e768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27e76c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27e76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27e770: 0xc783b934  lwc1        $f3, -0x46CC($gp)
    ctx->pc = 0x27e770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27e774: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27e774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27e778: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e77c: 0x0  nop
    ctx->pc = 0x27e77cu;
    // NOP
    // 0x27e780: 0x0  nop
    ctx->pc = 0x27e780u;
    // NOP
    // 0x27e784: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x27e784u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x27e788: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27e788u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27e78c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x27e78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e790: 0x0  nop
    ctx->pc = 0x27e790u;
    // NOP
    // 0x27e794: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x27E794u;
    {
        const bool branch_taken_0x27e794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E794u;
        // 0x27e798: 0xe783b934  swc1        $f3, -0x46CC($gp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e794) {
            ctx->pc = 0x27E7E4u;
            goto label_27e7e4;
        }
    }
    ctx->pc = 0x27E79Cu;
    // 0x27e79c: 0xc797b930  lwc1        $f23, -0x46D0($gp)
    ctx->pc = 0x27e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_27e7a0:
    // 0x27e7a0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27E7A0u;
    SET_GPR_U32(ctx, 31, 0x27E7A8u);
    ctx->pc = 0x27E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7A0u;
    // 0x27e7a4: 0xc78cb934  lwc1        $f12, -0x46CC($gp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27E7A0u, 0x27E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7A8u;
label_27e7a8:
    // 0x27e7a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27e7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27e7ac: 0xdc2587b8  ld          $a1, -0x7848($at)
    ctx->pc = 0x27e7acu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A87B8u));
    // 0x27e7b0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x27E7B0u;
    SET_GPR_U32(ctx, 31, 0x27E7B8u);
    ctx->pc = 0x27E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7B0u;
    // 0x27e7b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x27E7B0u, 0x27E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7B8u;
label_27e7b8:
    // 0x27e7b8: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27E7B8u;
    SET_GPR_U32(ctx, 31, 0x27E7C0u);
    ctx->pc = 0x27E7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7B8u;
    // 0x27e7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27E7B8u, 0x27E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7C0u;
label_27e7c0:
    // 0x27e7c0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27e7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27e7c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e7c8: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x27e7c8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x27e7cc: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x27e7ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e7d0: 0x0  nop
    ctx->pc = 0x27e7d0u;
    // NOP
    // 0x27e7d4: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
    ctx->pc = 0x27E7D4u;
    {
        const bool branch_taken_0x27e7d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7D4u;
        // 0x27e7d8: 0xe783b934  swc1        $f3, -0x46CC($gp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7d4) {
            ctx->pc = 0x27E7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e7a0;
        }
    }
    ctx->pc = 0x27E7DCu;
    // 0x27e7dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E7DCu;
    {
        const bool branch_taken_0x27e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7dc) {
            ctx->pc = 0x27E7E8u;
            goto label_27e7e8;
        }
    }
    ctx->pc = 0x27E7E4u;
label_27e7e4:
    // 0x27e7e4: 0xc797b930  lwc1        $f23, -0x46D0($gp)
    ctx->pc = 0x27e7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_27e7e8:
    // 0x27e7e8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27e7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27e7ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e7f0: 0x46001b06  mov.s       $f12, $f3
    ctx->pc = 0x27e7f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
    // 0x27e7f4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x27e7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e7f8: 0x0  nop
    ctx->pc = 0x27e7f8u;
    // NOP
    // 0x27e7fc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x27E7FCu;
    {
        const bool branch_taken_0x27e7fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7FCu;
        // 0x27e800: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7fc) {
            ctx->pc = 0x27E840u;
            goto label_27e840;
        }
    }
    ctx->pc = 0x27E804u;
    // 0x27e804: 0x0  nop
    ctx->pc = 0x27e804u;
    // NOP
label_27e808:
    // 0x27e808: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27E808u;
    SET_GPR_U32(ctx, 31, 0x27E810u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27E808u, 0x27E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E810u;
label_27e810:
    // 0x27e810: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27e810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27e814: 0xdc2587c0  ld          $a1, -0x7840($at)
    ctx->pc = 0x27e814u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A87C0u));
    // 0x27e818: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x27E818u;
    SET_GPR_U32(ctx, 31, 0x27E820u);
    ctx->pc = 0x27E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E818u;
    // 0x27e81c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x27E818u, 0x27E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E820u;
label_27e820:
    // 0x27e820: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27E820u;
    SET_GPR_U32(ctx, 31, 0x27E828u);
    ctx->pc = 0x27E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E820u;
    // 0x27e824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27E820u, 0x27E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E828u;
label_27e828:
    // 0x27e828: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x27e828u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x27e82c: 0x46001b06  mov.s       $f12, $f3
    ctx->pc = 0x27e82cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
    // 0x27e830: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x27e830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e834: 0x0  nop
    ctx->pc = 0x27e834u;
    // NOP
    // 0x27e838: 0x4501fff3  bc1t        . + 4 + (-0xD << 2)
    ctx->pc = 0x27E838u;
    {
        const bool branch_taken_0x27e838 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E838u;
        // 0x27e83c: 0xe783b934  swc1        $f3, -0x46CC($gp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e838) {
            ctx->pc = 0x27E808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e808;
        }
    }
    ctx->pc = 0x27E840u;
label_27e840:
    // 0x27e840: 0xc79487e0  lwc1        $f20, -0x7820($gp)
    ctx->pc = 0x27e840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e844: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27e844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27e848: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27e848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27e84c: 0x4614bb02  mul.s       $f12, $f23, $f20
    ctx->pc = 0x27e84cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x27e850: 0x0  nop
    ctx->pc = 0x27e850u;
    // NOP
    // 0x27e854: 0x0  nop
    ctx->pc = 0x27e854u;
    // NOP
    // 0x27e858: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x27e858u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x27e85c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x27E85Cu;
    SET_GPR_U32(ctx, 31, 0x27E864u);
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x27E85Cu, 0x27E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E864u;
label_27e864:
    // 0x27e864: 0xc78cb930  lwc1        $f12, -0x46D0($gp)
    ctx->pc = 0x27e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e868: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x27e868u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x27e86c: 0x0  nop
    ctx->pc = 0x27e86cu;
    // NOP
    // 0x27e870: 0x0  nop
    ctx->pc = 0x27e870u;
    // NOP
    // 0x27e874: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x27e874u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x27e878: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x27E878u;
    SET_GPR_U32(ctx, 31, 0x27E880u);
    ctx->pc = 0x27E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E878u;
    // 0x27e87c: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x27E878u, 0x27E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E880u;
label_27e880:
    // 0x27e880: 0xc78cb934  lwc1        $f12, -0x46CC($gp)
    ctx->pc = 0x27e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e884: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x27e884u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x27e888: 0x0  nop
    ctx->pc = 0x27e888u;
    // NOP
    // 0x27e88c: 0x0  nop
    ctx->pc = 0x27e88cu;
    // NOP
    // 0x27e890: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x27e890u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x27e894: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x27E894u;
    SET_GPR_U32(ctx, 31, 0x27E89Cu);
    ctx->pc = 0x27E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E894u;
    // 0x27e898: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x27E894u, 0x27E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E89Cu;
label_27e89c:
    // 0x27e89c: 0xc78cb934  lwc1        $f12, -0x46CC($gp)
    ctx->pc = 0x27e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e8a0: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x27e8a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x27e8a4: 0x0  nop
    ctx->pc = 0x27e8a4u;
    // NOP
    // 0x27e8a8: 0x0  nop
    ctx->pc = 0x27e8a8u;
    // NOP
    // 0x27e8ac: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x27e8acu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x27e8b0: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x27E8B0u;
    SET_GPR_U32(ctx, 31, 0x27E8B8u);
    ctx->pc = 0x27E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E8B0u;
    // 0x27e8b4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x27E8B0u, 0x27E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8B8u;
label_27e8b8:
    // 0x27e8b8: 0x4618b142  mul.s       $f5, $f22, $f24
    ctx->pc = 0x27e8b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x27e8bc: 0x8f83b1f4  lw          $v1, -0x4E0C($gp)
    ctx->pc = 0x27e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947316)));
    // 0x27e8c0: 0x4617b582  mul.s       $f22, $f22, $f23
    ctx->pc = 0x27e8c0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x27e8c4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27e8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27e8c8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x27e8c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27e8cc: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x27e8ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27e8d0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x27E8D0u;
    {
        const bool branch_taken_0x27e8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8D0u;
        // 0x27e8d4: 0xe7b60030  swc1        $f22, 0x30($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8d0) {
            ctx->pc = 0x27E980u;
            goto label_27e980;
        }
    }
    ctx->pc = 0x27E8D8u;
    // 0x27e8d8: 0xc6240030  lwc1        $f4, 0x30($s1)
    ctx->pc = 0x27e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27e8dc: 0x26629940  addiu       $v0, $s3, -0x66C0
    ctx->pc = 0x27e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940992));
    // 0x27e8e0: 0xc783b940  lwc1        $f3, -0x46C0($gp)
    ctx->pc = 0x27e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27e8e4: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x27e8e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27e8e8: 0xc781b93c  lwc1        $f1, -0x46C4($gp)
    ctx->pc = 0x27e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e8ec: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x27e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e8f0: 0x46050802  mul.s       $f0, $f1, $f5
    ctx->pc = 0x27e8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x27e8f4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x27e8f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x27e8f8: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x27e8f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x27e8fc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x27e8fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x27e900: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x27e900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27e904: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x27e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e908: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x27e908u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27e90c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27e90cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27e910: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x27e910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27e914: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27e914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27e918: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27e918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27e91c: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x27E91Cu;
    {
        const bool branch_taken_0x27e91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E91Cu;
        // 0x27e920: 0xe6649940  swc1        $f4, -0x66C0($s3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294940992), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e91c) {
            ctx->pc = 0x27E99Cu;
            goto label_27e99c;
        }
    }
    ctx->pc = 0x27E924u;
    // 0x27e924: 0xc782b938  lwc1        $f2, -0x46C8($gp)
    ctx->pc = 0x27e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e928: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x27e928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x27e92c: 0x24439930  addiu       $v1, $v0, -0x66D0
    ctx->pc = 0x27e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940976));
    // 0x27e930: 0x46161002  mul.s       $f0, $f2, $f22
    ctx->pc = 0x27e930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x27e934: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x27e934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x27e938: 0xe6400374  swc1        $f0, 0x374($s2)
    ctx->pc = 0x27e938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 884), bits); }
    // 0x27e93c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x27e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e940: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e944: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27e944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27e948: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27e948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27e94c: 0xe6400378  swc1        $f0, 0x378($s2)
    ctx->pc = 0x27e94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    // 0x27e950: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x27e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e954: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e958: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x27e958u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27e95c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27e95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27e960: 0xe640037c  swc1        $f0, 0x37C($s2)
    ctx->pc = 0x27e960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
    // 0x27e964: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x27e964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e968: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x27e968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e96c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27e96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e970: 0xe4419930  swc1        $f1, -0x66D0($v0)
    ctx->pc = 0x27e970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FE9930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FE9930u, _value); } while (0); }
    // 0x27e974: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27e974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1FE9938u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FE9938u, _value); } while (0); }
    // 0x27e978: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27E978u;
    {
        const bool branch_taken_0x27e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E978u;
        // 0x27e97c: 0xe4620004  swc1        $f2, 0x4($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e978) {
            ctx->pc = 0x27E99Cu;
            goto label_27e99c;
        }
    }
    ctx->pc = 0x27E980u;
label_27e980:
    // 0x27e980: 0x26629940  addiu       $v0, $s3, -0x66C0
    ctx->pc = 0x27e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940992));
    // 0x27e984: 0xc6619940  lwc1        $f1, -0x66C0($s3)
    ctx->pc = 0x27e984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294940992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e988: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x27e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e98c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e990: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x27e990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27e994: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27e994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27e998: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x27e998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_27e99c:
    // 0x27e99c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x27E99Cu;
    {
        const bool branch_taken_0x27e99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E99Cu;
        // 0x27e9a0: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e99c) {
            ctx->pc = 0x27EB9Cu;
            goto label_27eb9c;
        }
    }
    ctx->pc = 0x27E9A4u;
label_27e9a4:
    // 0x27e9a4: 0x8e510180  lw          $s1, 0x180($s2)
    ctx->pc = 0x27e9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x27e9a8: 0x12200169  beqz        $s1, . + 4 + (0x169 << 2)
    ctx->pc = 0x27E9A8u;
    {
        const bool branch_taken_0x27e9a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9A8u;
        // 0x27e9ac: 0xc781b930  lwc1        $f1, -0x46D0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9a8) {
            ctx->pc = 0x27EF50u;
            goto label_27ef50;
        }
    }
    ctx->pc = 0x27E9B0u;
    // 0x27e9b0: 0xc78087e4  lwc1        $f0, -0x781C($gp)
    ctx->pc = 0x27e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27e9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27e9b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27e9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27e9bc: 0x46000dc0  add.s       $f23, $f1, $f0
    ctx->pc = 0x27e9bcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27e9c0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x27e9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x27e9c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27e9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27e9c8: 0xc64c0074  lwc1        $f12, 0x74($s2)
    ctx->pc = 0x27e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e9cc: 0xe782b938  swc1        $f2, -0x46C8($gp)
    ctx->pc = 0x27e9ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949176), bits); }
    // 0x27e9d0: 0xe797b930  swc1        $f23, -0x46D0($gp)
    ctx->pc = 0x27e9d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949168), bits); }
    // 0x27e9d4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27E9D4u;
    SET_GPR_U32(ctx, 31, 0x27E9DCu);
    ctx->pc = 0x27E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9D4u;
    // 0x27e9d8: 0xe783b934  swc1        $f3, -0x46CC($gp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27E9D4u, 0x27E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9DCu;
label_27e9dc:
    // 0x27e9dc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x27e9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x27e9e0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x27e9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x27e9e4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x27E9E4u;
    SET_GPR_U32(ctx, 31, 0x27E9ECu);
    ctx->pc = 0x27E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9E4u;
    // 0x27e9e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x27E9E4u, 0x27E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9ECu;
label_27e9ec:
    // 0x27e9ec: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27E9ECu;
    SET_GPR_U32(ctx, 31, 0x27E9F4u);
    ctx->pc = 0x27E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9ECu;
    // 0x27e9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27E9ECu, 0x27E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9F4u;
label_27e9f4:
    // 0x27e9f4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27e9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27e9f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e9fc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x27e9fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27ea00: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x27ea00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ea04: 0x0  nop
    ctx->pc = 0x27ea04u;
    // NOP
    // 0x27ea08: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x27EA08u;
    {
        const bool branch_taken_0x27ea08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA08u;
        // 0x27ea0c: 0xe780b940  swc1        $f0, -0x46C0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea08) {
            ctx->pc = 0x27EA60u;
            goto label_27ea60;
        }
    }
    ctx->pc = 0x27EA10u;
    // 0x27ea10: 0x26500374  addiu       $s0, $s2, 0x374
    ctx->pc = 0x27ea10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 884));
    // 0x27ea14: 0x0  nop
    ctx->pc = 0x27ea14u;
    // NOP
label_27ea18:
    // 0x27ea18: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27EA18u;
    SET_GPR_U32(ctx, 31, 0x27EA20u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27EA18u, 0x27EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA20u;
label_27ea20:
    // 0x27ea20: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27ea20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27ea24: 0xdc2587c8  ld          $a1, -0x7838($at)
    ctx->pc = 0x27ea24u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A87C8u));
    // 0x27ea28: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x27EA28u;
    SET_GPR_U32(ctx, 31, 0x27EA30u);
    ctx->pc = 0x27EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA28u;
    // 0x27ea2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x27EA28u, 0x27EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA30u;
label_27ea30:
    // 0x27ea30: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27EA30u;
    SET_GPR_U32(ctx, 31, 0x27EA38u);
    ctx->pc = 0x27EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA30u;
    // 0x27ea34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27EA30u, 0x27EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA38u;
label_27ea38:
    // 0x27ea38: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27ea38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27ea3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27ea3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ea40: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x27ea40u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x27ea44: 0xe797b930  swc1        $f23, -0x46D0($gp)
    ctx->pc = 0x27ea44u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949168), bits); }
    // 0x27ea48: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x27ea48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ea4c: 0x0  nop
    ctx->pc = 0x27ea4cu;
    // NOP
    // 0x27ea50: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
    ctx->pc = 0x27EA50u;
    {
        const bool branch_taken_0x27ea50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA50u;
        // 0x27ea54: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea50) {
            ctx->pc = 0x27EA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ea18;
        }
    }
    ctx->pc = 0x27EA58u;
    // 0x27ea58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27EA58u;
    {
        const bool branch_taken_0x27ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea58) {
            ctx->pc = 0x27EA64u;
            goto label_27ea64;
        }
    }
    ctx->pc = 0x27EA60u;
label_27ea60:
    // 0x27ea60: 0x26500374  addiu       $s0, $s2, 0x374
    ctx->pc = 0x27ea60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 884));
label_27ea64:
    // 0x27ea64: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27ea64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27ea68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ea68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ea6c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x27ea6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ea70: 0x0  nop
    ctx->pc = 0x27ea70u;
    // NOP
    // 0x27ea74: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x27EA74u;
    {
        const bool branch_taken_0x27ea74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA74u;
        // 0x27ea78: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea74) {
            ctx->pc = 0x27EAB4u;
            goto label_27eab4;
        }
    }
    ctx->pc = 0x27EA7Cu;
    // 0x27ea7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27ea7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27ea80:
    // 0x27ea80: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27EA80u;
    SET_GPR_U32(ctx, 31, 0x27EA88u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27EA80u, 0x27EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA88u;
label_27ea88:
    // 0x27ea88: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27ea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27ea8c: 0xdc2587d0  ld          $a1, -0x7830($at)
    ctx->pc = 0x27ea8cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A87D0u));
    // 0x27ea90: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x27EA90u;
    SET_GPR_U32(ctx, 31, 0x27EA98u);
    ctx->pc = 0x27EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA90u;
    // 0x27ea94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x27EA90u, 0x27EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA98u;
label_27ea98:
    // 0x27ea98: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27EA98u;
    SET_GPR_U32(ctx, 31, 0x27EAA0u);
    ctx->pc = 0x27EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA98u;
    // 0x27ea9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27EA98u, 0x27EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAA0u;
label_27eaa0:
    // 0x27eaa0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x27eaa0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x27eaa4: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x27eaa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eaa8: 0xe797b930  swc1        $f23, -0x46D0($gp)
    ctx->pc = 0x27eaa8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949168), bits); }
    // 0x27eaac: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x27EAACu;
    {
        const bool branch_taken_0x27eaac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAACu;
        // 0x27eab0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eaac) {
            ctx->pc = 0x27EA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ea80;
        }
    }
    ctx->pc = 0x27EAB4u;
label_27eab4:
    // 0x27eab4: 0xc79587e8  lwc1        $f21, -0x7818($gp)
    ctx->pc = 0x27eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27eab8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27eab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27eabc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27eabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27eac0: 0x4615bb02  mul.s       $f12, $f23, $f21
    ctx->pc = 0x27eac0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x27eac4: 0x0  nop
    ctx->pc = 0x27eac4u;
    // NOP
    // 0x27eac8: 0x0  nop
    ctx->pc = 0x27eac8u;
    // NOP
    // 0x27eacc: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x27eaccu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x27ead0: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x27EAD0u;
    SET_GPR_U32(ctx, 31, 0x27EAD8u);
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x27EAD0u, 0x27EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAD8u;
label_27ead8:
    // 0x27ead8: 0xc78cb930  lwc1        $f12, -0x46D0($gp)
    ctx->pc = 0x27ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27eadc: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x27eadcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x27eae0: 0x0  nop
    ctx->pc = 0x27eae0u;
    // NOP
    // 0x27eae4: 0x0  nop
    ctx->pc = 0x27eae4u;
    // NOP
    // 0x27eae8: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x27eae8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x27eaec: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x27EAECu;
    SET_GPR_U32(ctx, 31, 0x27EAF4u);
    ctx->pc = 0x27EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EAECu;
    // 0x27eaf0: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x27EAECu, 0x27EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAF4u;
label_27eaf4:
    // 0x27eaf4: 0xc78cb934  lwc1        $f12, -0x46CC($gp)
    ctx->pc = 0x27eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27eaf8: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x27eaf8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x27eafc: 0x0  nop
    ctx->pc = 0x27eafcu;
    // NOP
    // 0x27eb00: 0x0  nop
    ctx->pc = 0x27eb00u;
    // NOP
    // 0x27eb04: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x27eb04u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x27eb08: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x27EB08u;
    SET_GPR_U32(ctx, 31, 0x27EB10u);
    ctx->pc = 0x27EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB08u;
    // 0x27eb0c: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x27EB08u, 0x27EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB10u;
label_27eb10:
    // 0x27eb10: 0xc78cb934  lwc1        $f12, -0x46CC($gp)
    ctx->pc = 0x27eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27eb14: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x27eb14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x27eb18: 0x0  nop
    ctx->pc = 0x27eb18u;
    // NOP
    // 0x27eb1c: 0x0  nop
    ctx->pc = 0x27eb1cu;
    // NOP
    // 0x27eb20: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x27eb20u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x27eb24: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x27EB24u;
    SET_GPR_U32(ctx, 31, 0x27EB2Cu);
    ctx->pc = 0x27EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB24u;
    // 0x27eb28: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x27EB24u, 0x27EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB2Cu;
label_27eb2c:
    // 0x27eb2c: 0x4617a5c2  mul.s       $f23, $f20, $f23
    ctx->pc = 0x27eb2cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x27eb30: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x27eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x27eb34: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x27eb34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x27eb38: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27eb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27eb3c: 0xc781b940  lwc1        $f1, -0x46C0($gp)
    ctx->pc = 0x27eb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27eb40: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x27eb40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27eb44: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x27eb44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27eb48: 0xc783b938  lwc1        $f3, -0x46C8($gp)
    ctx->pc = 0x27eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27eb4c: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x27eb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27eb50: 0x46141d02  mul.s       $f20, $f3, $f20
    ctx->pc = 0x27eb50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x27eb54: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x27eb54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27eb58: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x27eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb5c: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x27eb5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x27eb60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27eb60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27eb64: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27eb68: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x27eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27eb6c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x27eb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27eb70: 0xe6420374  swc1        $f2, 0x374($s2)
    ctx->pc = 0x27eb70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 884), bits); }
    // 0x27eb74: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x27eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb78: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27eb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27eb7c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x27eb7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27eb80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27eb80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27eb84: 0xe6410378  swc1        $f1, 0x378($s2)
    ctx->pc = 0x27eb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    // 0x27eb88: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x27eb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27eb8c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27eb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb90: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x27eb90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x27eb94: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27eb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x27eb98: 0xe640037c  swc1        $f0, 0x37C($s2)
    ctx->pc = 0x27eb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
label_27eb9c:
    // 0x27eb9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27EB9Cu;
    {
        const bool branch_taken_0x27eb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27eb9c) {
            ctx->pc = 0x27EBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EB9Cu;
            // 0x27eba0: 0xae420384  sw          $v0, 0x384($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 900), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EBA4u;
            goto label_27eba4;
        }
    }
    ctx->pc = 0x27EBA4u;
label_27eba4:
    // 0x27eba4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27eba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27eba8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27eba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ebac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebb0: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x27EBB0u;
    SET_GPR_U32(ctx, 31, 0x27EBB8u);
    ctx->pc = 0x27EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EBB0u;
    // 0x27ebb4: 0xc64d0084  lwc1        $f13, 0x84($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x27EBB0u, 0x27EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBB8u;
label_27ebb8:
    // 0x27ebb8: 0x8e4406e4  lw          $a0, 0x6E4($s2)
    ctx->pc = 0x27ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1764)));
    // 0x27ebbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ebbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebc0: 0xae420380  sw          $v0, 0x380($s2)
    ctx->pc = 0x27ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 896), GPR_U32(ctx, 2));
    // 0x27ebc4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27ebc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebc8: 0xc0ad482  jal         func_2B5208
    ctx->pc = 0x27EBC8u;
    SET_GPR_U32(ctx, 31, 0x27EBD0u);
    ctx->pc = 0x27EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EBC8u;
    // 0x27ebcc: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5208u, 0x27EBC8u, 0x27EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBD0u;
label_27ebd0:
    // 0x27ebd0: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x27EBD0u;
    {
        const bool branch_taken_0x27ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBD0u;
        // 0x27ebd4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebd0) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27EBD8u;
label_27ebd8:
    // 0x27ebd8: 0x8e530388  lw          $s3, 0x388($s2)
    ctx->pc = 0x27ebd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
    // 0x27ebdc: 0x126000dd  beqz        $s3, . + 4 + (0xDD << 2)
    ctx->pc = 0x27EBDCu;
    {
        const bool branch_taken_0x27ebdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBDCu;
        // 0x27ebe0: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebdc) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27EBE4u;
    // 0x27ebe4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x27ebe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x27ebe8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27ebe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27ebec: 0xc64000bc  lwc1        $f0, 0xBC($s2)
    ctx->pc = 0x27ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ebf0: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x27ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ebf4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27ebf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27ebf8: 0xc64200c0  lwc1        $f2, 0xC0($s2)
    ctx->pc = 0x27ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ebfc: 0xc64400c4  lwc1        $f4, 0xC4($s2)
    ctx->pc = 0x27ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ec00: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x27ec00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x27ec04: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x27ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x27ec08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27ec08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27ec0c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x27ec0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x27ec10: 0xe6410374  swc1        $f1, 0x374($s2)
    ctx->pc = 0x27ec10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 884), bits); }
    // 0x27ec14: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x27ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ec18: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27ec18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27ec1c: 0xe6400378  swc1        $f0, 0x378($s2)
    ctx->pc = 0x27ec1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    // 0x27ec20: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x27ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ec24: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x27ec24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x27ec28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27EC28u;
    {
        const bool branch_taken_0x27ec28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC28u;
        // 0x27ec2c: 0xe641037c  swc1        $f1, 0x37C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec28) {
            ctx->pc = 0x27EC34u;
            goto label_27ec34;
        }
    }
    ctx->pc = 0x27EC30u;
    // 0x27ec30: 0xae420384  sw          $v0, 0x384($s2)
    ctx->pc = 0x27ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 900), GPR_U32(ctx, 2));
label_27ec34:
    // 0x27ec34: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x27ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x27ec38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27ec3c: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x27EC3Cu;
    {
        const bool branch_taken_0x27ec3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC3Cu;
        // 0x27ec40: 0x26500374  addiu       $s0, $s2, 0x374 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 884));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec3c) {
            ctx->pc = 0x27ED18u;
            goto label_27ed18;
        }
    }
    ctx->pc = 0x27EC44u;
    // 0x27ec44: 0xc64c0378  lwc1        $f12, 0x378($s2)
    ctx->pc = 0x27ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ec48: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27EC48u;
    SET_GPR_U32(ctx, 31, 0x27EC50u);
    ctx->pc = 0x27EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC48u;
    // 0x27ec4c: 0x26510374  addiu       $s1, $s2, 0x374 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27EC48u, 0x27EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC50u;
label_27ec50:
    // 0x27ec50: 0xc64c0074  lwc1        $f12, 0x74($s2)
    ctx->pc = 0x27ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ec54: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27EC54u;
    SET_GPR_U32(ctx, 31, 0x27EC5Cu);
    ctx->pc = 0x27EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC54u;
    // 0x27ec58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27EC54u, 0x27EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC5Cu;
label_27ec5c:
    // 0x27ec5c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27ec5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27ec60: 0xdc2587d8  ld          $a1, -0x7828($at)
    ctx->pc = 0x27ec60u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A87D8u));
    // 0x27ec64: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x27EC64u;
    SET_GPR_U32(ctx, 31, 0x27EC6Cu);
    ctx->pc = 0x27EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC64u;
    // 0x27ec68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x27EC64u, 0x27EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC6Cu;
label_27ec6c:
    // 0x27ec6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ec6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec70: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x27EC70u;
    SET_GPR_U32(ctx, 31, 0x27EC78u);
    ctx->pc = 0x27EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC70u;
    // 0x27ec74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x27EC70u, 0x27EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC78u;
label_27ec78:
    // 0x27ec78: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27EC78u;
    SET_GPR_U32(ctx, 31, 0x27EC80u);
    ctx->pc = 0x27EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC78u;
    // 0x27ec7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27EC78u, 0x27EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC80u;
label_27ec80:
    // 0x27ec80: 0xe6400378  swc1        $f0, 0x378($s2)
    ctx->pc = 0x27ec80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    // 0x27ec84: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x27ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ec88: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27ec88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27ec8c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27EC8Cu;
    SET_GPR_U32(ctx, 31, 0x27EC94u);
    ctx->pc = 0x27EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC8Cu;
    // 0x27ec90: 0xc66c0034  lwc1        $f12, 0x34($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27EC8Cu, 0x27EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC94u;
label_27ec94:
    // 0x27ec94: 0xc64c0074  lwc1        $f12, 0x74($s2)
    ctx->pc = 0x27ec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ec98: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27EC98u;
    SET_GPR_U32(ctx, 31, 0x27ECA0u);
    ctx->pc = 0x27EC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC98u;
    // 0x27ec9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27EC98u, 0x27ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECA0u;
label_27eca0:
    // 0x27eca0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x27eca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x27eca4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x27eca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x27eca8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x27ECA8u;
    SET_GPR_U32(ctx, 31, 0x27ECB0u);
    ctx->pc = 0x27ECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECA8u;
    // 0x27ecac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x27ECA8u, 0x27ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECB0u;
label_27ecb0:
    // 0x27ecb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ecb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecb4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x27ECB4u;
    SET_GPR_U32(ctx, 31, 0x27ECBCu);
    ctx->pc = 0x27ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECB4u;
    // 0x27ecb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x27ECB4u, 0x27ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECBCu;
label_27ecbc:
    // 0x27ecbc: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27ECBCu;
    SET_GPR_U32(ctx, 31, 0x27ECC4u);
    ctx->pc = 0x27ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECBCu;
    // 0x27ecc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27ECBCu, 0x27ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECC4u;
label_27ecc4:
    // 0x27ecc4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27ecc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27ecc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eccc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ecccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27ecd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27ecd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ecd4: 0x8e420388  lw          $v0, 0x388($s2)
    ctx->pc = 0x27ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
    // 0x27ecd8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x27ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ecdc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27ecdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27ece0: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x27ECE0u;
    SET_GPR_U32(ctx, 31, 0x27ECE8u);
    ctx->pc = 0x27ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECE0u;
    // 0x27ece4: 0xc64d0084  lwc1        $f13, 0x84($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x27ECE0u, 0x27ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECE8u;
label_27ece8:
    // 0x27ece8: 0x8e4406e4  lw          $a0, 0x6E4($s2)
    ctx->pc = 0x27ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1764)));
    // 0x27ecec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ececu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecf0: 0xae420380  sw          $v0, 0x380($s2)
    ctx->pc = 0x27ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 896), GPR_U32(ctx, 2));
    // 0x27ecf4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27ecf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecf8: 0xc0ad482  jal         func_2B5208
    ctx->pc = 0x27ECF8u;
    SET_GPR_U32(ctx, 31, 0x27ED00u);
    ctx->pc = 0x27ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECF8u;
    // 0x27ecfc: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5208u, 0x27ECF8u, 0x27ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED00u;
label_27ed00:
    // 0x27ed00: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27ed04: 0x8c4506e4  lw          $a1, 0x6E4($v0)
    ctx->pc = 0x27ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x27ed08: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x27ED08u;
    SET_GPR_U32(ctx, 31, 0x27ED10u);
    ctx->pc = 0x27ED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED08u;
    // 0x27ed0c: 0x8c4406ec  lw          $a0, 0x6EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x27ED08u, 0x27ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED10u;
label_27ed10:
    // 0x27ed10: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x27ED10u;
    {
        const bool branch_taken_0x27ed10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED10u;
        // 0x27ed14: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed10) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27ED18u;
label_27ed18:
    // 0x27ed18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ed18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27ed1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27ed1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ed20: 0xc64d0084  lwc1        $f13, 0x84($s2)
    ctx->pc = 0x27ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27ed24: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x27ED24u;
    SET_GPR_U32(ctx, 31, 0x27ED2Cu);
    ctx->pc = 0x27ED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED24u;
    // 0x27ed28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x27ED24u, 0x27ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED2Cu;
label_27ed2c:
    // 0x27ed2c: 0x8e460388  lw          $a2, 0x388($s2)
    ctx->pc = 0x27ed2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
    // 0x27ed30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ed30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed34: 0x8e4406e4  lw          $a0, 0x6E4($s2)
    ctx->pc = 0x27ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1764)));
    // 0x27ed38: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x27ed38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27ed3c: 0xae420380  sw          $v0, 0x380($s2)
    ctx->pc = 0x27ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 896), GPR_U32(ctx, 2));
    // 0x27ed40: 0xc0ad482  jal         func_2B5208
    ctx->pc = 0x27ED40u;
    SET_GPR_U32(ctx, 31, 0x27ED48u);
    ctx->pc = 0x27ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED40u;
    // 0x27ed44: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5208u, 0x27ED40u, 0x27ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED48u;
label_27ed48:
    // 0x27ed48: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x27ED48u;
    {
        const bool branch_taken_0x27ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED48u;
        // 0x27ed4c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed48) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27ED50u;
label_27ed50:
    // 0x27ed50: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x27ed50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x27ed54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ed54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ed58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ed5c: 0xaf82b1e4  sw          $v0, -0x4E1C($gp)
    ctx->pc = 0x27ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947300), GPR_U32(ctx, 2));
    // 0x27ed60: 0xe780b940  swc1        $f0, -0x46C0($gp)
    ctx->pc = 0x27ed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949184), bits); }
    // 0x27ed64: 0xe780b938  swc1        $f0, -0x46C8($gp)
    ctx->pc = 0x27ed64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949176), bits); }
label_27ed68:
    // 0x27ed68: 0xc782b938  lwc1        $f2, -0x46C8($gp)
    ctx->pc = 0x27ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ed6c: 0xc64400bc  lwc1        $f4, 0xBC($s2)
    ctx->pc = 0x27ed6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ed70: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x27ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x27ed74: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x27ed74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x27ed78: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x27ed78u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x27ed7c: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x27ed7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27ed80: 0xc64000c0  lwc1        $f0, 0xC0($s2)
    ctx->pc = 0x27ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ed84: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27ed84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27ed88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27ed88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27ed8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27ed8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27ed90: 0xc64100c4  lwc1        $f1, 0xC4($s2)
    ctx->pc = 0x27ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ed94: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x27ed94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27ed98: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x27ed98u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x27ed9c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x27ed9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27eda0: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x27eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eda4: 0xc642009c  lwc1        $f2, 0x9C($s2)
    ctx->pc = 0x27eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27eda8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x27eda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x27edac: 0xc64300a0  lwc1        $f3, 0xA0($s2)
    ctx->pc = 0x27edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27edb0: 0xe6400374  swc1        $f0, 0x374($s2)
    ctx->pc = 0x27edb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 884), bits); }
    // 0x27edb4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x27edb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27edb8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x27edb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x27edbc: 0xe6420378  swc1        $f2, 0x378($s2)
    ctx->pc = 0x27edbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    // 0x27edc0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27edc4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27edc4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27edc8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27EDC8u;
    {
        const bool branch_taken_0x27edc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDC8u;
        // 0x27edcc: 0xe643037c  swc1        $f3, 0x37C($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edc8) {
            ctx->pc = 0x27EDD4u;
            goto label_27edd4;
        }
    }
    ctx->pc = 0x27EDD0u;
    // 0x27edd0: 0xae420384  sw          $v0, 0x384($s2)
    ctx->pc = 0x27edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 900), GPR_U32(ctx, 2));
label_27edd4:
    // 0x27edd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27edd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27edd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27edd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27eddc: 0x26500374  addiu       $s0, $s2, 0x374
    ctx->pc = 0x27eddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 884));
    // 0x27ede0: 0xc64d0084  lwc1        $f13, 0x84($s2)
    ctx->pc = 0x27ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27ede4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ede8: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x27EDE8u;
    SET_GPR_U32(ctx, 31, 0x27EDF0u);
    ctx->pc = 0x27EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDE8u;
    // 0x27edec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x27EDE8u, 0x27EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDF0u;
label_27edf0:
    // 0x27edf0: 0x8e430180  lw          $v1, 0x180($s2)
    ctx->pc = 0x27edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x27edf4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x27edf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x27edf8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x27edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x27edfc: 0x34e7ffdf  ori         $a3, $a3, 0xFFDF
    ctx->pc = 0x27edfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65503);
    // 0x27ee00: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27ee00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ee04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ee04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee08: 0x8c710010  lw          $s1, 0x10($v1)
    ctx->pc = 0x27ee08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27ee0c: 0x26450098  addiu       $a1, $s2, 0x98
    ctx->pc = 0x27ee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x27ee10: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27ee10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ee14: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x27ee14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27ee18: 0x2273824  and         $a3, $s1, $a3
    ctx->pc = 0x27ee18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 7));
    // 0x27ee1c: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x27ee1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27ee20: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x27ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x27ee24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x27ee24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee28: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x27ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x27ee2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27ee2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee30: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x27ee30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ee34: 0xc09640e  jal         func_259038
    ctx->pc = 0x27EE34u;
    SET_GPR_U32(ctx, 31, 0x27EE3Cu);
    ctx->pc = 0x27EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE34u;
    // 0x27ee38: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x27EE34u, 0x27EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE3Cu;
label_27ee3c:
    // 0x27ee3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27EE3Cu;
    {
        const bool branch_taken_0x27ee3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE3Cu;
        // 0x27ee40: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee3c) {
            ctx->pc = 0x27EE6Cu;
            goto label_27ee6c;
        }
    }
    ctx->pc = 0x27EE44u;
    // 0x27ee44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27ee44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27ee48: 0xc64d0084  lwc1        $f13, 0x84($s2)
    ctx->pc = 0x27ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27ee4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ee4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee50: 0xe6400374  swc1        $f0, 0x374($s2)
    ctx->pc = 0x27ee50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 884), bits); }
    // 0x27ee54: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x27ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ee58: 0xe6410378  swc1        $f1, 0x378($s2)
    ctx->pc = 0x27ee58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    // 0x27ee5c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x27ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ee60: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x27EE60u;
    SET_GPR_U32(ctx, 31, 0x27EE68u);
    ctx->pc = 0x27EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE60u;
    // 0x27ee64: 0xe640037c  swc1        $f0, 0x37C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x27EE60u, 0x27EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE68u;
label_27ee68:
    // 0x27ee68: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x27ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_27ee6c:
    // 0x27ee6c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x27ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27ee70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ee70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee74: 0x8e430180  lw          $v1, 0x180($s2)
    ctx->pc = 0x27ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x27ee78: 0x264700a4  addiu       $a3, $s2, 0xA4
    ctx->pc = 0x27ee78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    // 0x27ee7c: 0xae420380  sw          $v0, 0x380($s2)
    ctx->pc = 0x27ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 896), GPR_U32(ctx, 2));
    // 0x27ee80: 0x264600b0  addiu       $a2, $s2, 0xB0
    ctx->pc = 0x27ee80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x27ee84: 0x8e4406e4  lw          $a0, 0x6E4($s2)
    ctx->pc = 0x27ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1764)));
    // 0x27ee88: 0xc0ad482  jal         func_2B5208
    ctx->pc = 0x27EE88u;
    SET_GPR_U32(ctx, 31, 0x27EE90u);
    ctx->pc = 0x27EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE88u;
    // 0x27ee8c: 0xac710010  sw          $s1, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5208u, 0x27EE88u, 0x27EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE90u;
label_27ee90:
    // 0x27ee90: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27EE90u;
    {
        const bool branch_taken_0x27ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE90u;
        // 0x27ee94: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee90) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27EE98u;
label_27ee98:
    // 0x27ee98: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x27ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x27ee9c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x27ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x27eea0: 0x8e43031c  lw          $v1, 0x31C($s2)
    ctx->pc = 0x27eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
    // 0x27eea4: 0x24a53ff0  addiu       $a1, $a1, 0x3FF0
    ctx->pc = 0x27eea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16368));
    // 0x27eea8: 0x8e4406e4  lw          $a0, 0x6E4($s2)
    ctx->pc = 0x27eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1764)));
    // 0x27eeac: 0x264700a4  addiu       $a3, $s2, 0xA4
    ctx->pc = 0x27eeacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    // 0x27eeb0: 0xae420384  sw          $v0, 0x384($s2)
    ctx->pc = 0x27eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 900), GPR_U32(ctx, 2));
    // 0x27eeb4: 0x24a6000c  addiu       $a2, $a1, 0xC
    ctx->pc = 0x27eeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x27eeb8: 0xc0ad482  jal         func_2B5208
    ctx->pc = 0x27EEB8u;
    SET_GPR_U32(ctx, 31, 0x27EEC0u);
    ctx->pc = 0x27EEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EEB8u;
    // 0x27eebc: 0xae430380  sw          $v1, 0x380($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5208u, 0x27EEB8u, 0x27EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEC0u;
label_27eec0:
    // 0x27eec0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27EEC0u;
    {
        const bool branch_taken_0x27eec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEC0u;
        // 0x27eec4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eec0) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27EEC8u;
label_27eec8:
    // 0x27eec8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27eecc: 0x8e480380  lw          $t0, 0x380($s2)
    ctx->pc = 0x27eeccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x27eed0: 0xc6420098  lwc1        $f2, 0x98($s2)
    ctx->pc = 0x27eed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27eed4: 0x244700a4  addiu       $a3, $v0, 0xA4
    ctx->pc = 0x27eed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x27eed8: 0xc641009c  lwc1        $f1, 0x9C($s2)
    ctx->pc = 0x27eed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27eedc: 0x24450098  addiu       $a1, $v0, 0x98
    ctx->pc = 0x27eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x27eee0: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x27eee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eee4: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x27eee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x27eee8: 0x8e43031c  lw          $v1, 0x31C($s2)
    ctx->pc = 0x27eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
    // 0x27eeec: 0x8c4406e4  lw          $a0, 0x6E4($v0)
    ctx->pc = 0x27eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x27eef0: 0xae430380  sw          $v1, 0x380($s2)
    ctx->pc = 0x27eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 896), GPR_U32(ctx, 3));
    // 0x27eef4: 0xe6420374  swc1        $f2, 0x374($s2)
    ctx->pc = 0x27eef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 884), bits); }
    // 0x27eef8: 0xe6410378  swc1        $f1, 0x378($s2)
    ctx->pc = 0x27eef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    // 0x27eefc: 0xe640037c  swc1        $f0, 0x37C($s2)
    ctx->pc = 0x27eefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
    // 0x27ef00: 0xc0ad482  jal         func_2B5208
    ctx->pc = 0x27EF00u;
    SET_GPR_U32(ctx, 31, 0x27EF08u);
    ctx->pc = 0x27EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF00u;
    // 0x27ef04: 0xae480384  sw          $t0, 0x384($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 900), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5208u, 0x27EF00u, 0x27EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF08u;
label_27ef08:
    // 0x27ef08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27EF08u;
    {
        const bool branch_taken_0x27ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF08u;
        // 0x27ef0c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef08) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27EF10u;
label_27ef10:
    // 0x27ef10: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27ef14: 0x8e480380  lw          $t0, 0x380($s2)
    ctx->pc = 0x27ef14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x27ef18: 0xc6420098  lwc1        $f2, 0x98($s2)
    ctx->pc = 0x27ef18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ef1c: 0x244700a4  addiu       $a3, $v0, 0xA4
    ctx->pc = 0x27ef1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x27ef20: 0xc641009c  lwc1        $f1, 0x9C($s2)
    ctx->pc = 0x27ef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ef24: 0x24450098  addiu       $a1, $v0, 0x98
    ctx->pc = 0x27ef24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x27ef28: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x27ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ef2c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x27ef2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x27ef30: 0x8e43031c  lw          $v1, 0x31C($s2)
    ctx->pc = 0x27ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
    // 0x27ef34: 0x8c4406e4  lw          $a0, 0x6E4($v0)
    ctx->pc = 0x27ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x27ef38: 0xae430380  sw          $v1, 0x380($s2)
    ctx->pc = 0x27ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 896), GPR_U32(ctx, 3));
    // 0x27ef3c: 0xe6420374  swc1        $f2, 0x374($s2)
    ctx->pc = 0x27ef3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 884), bits); }
    // 0x27ef40: 0xe6410378  swc1        $f1, 0x378($s2)
    ctx->pc = 0x27ef40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    // 0x27ef44: 0xe640037c  swc1        $f0, 0x37C($s2)
    ctx->pc = 0x27ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
    // 0x27ef48: 0xc0ad482  jal         func_2B5208
    ctx->pc = 0x27EF48u;
    SET_GPR_U32(ctx, 31, 0x27EF50u);
    ctx->pc = 0x27EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF48u;
    // 0x27ef4c: 0xae480384  sw          $t0, 0x384($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 900), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5208u, 0x27EF48u, 0x27EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF50u;
label_27ef50:
    // 0x27ef50: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_27ef54:
    // 0x27ef54: 0x8c4606e4  lw          $a2, 0x6E4($v0)
    ctx->pc = 0x27ef54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x27ef58: 0x8c4406e8  lw          $a0, 0x6E8($v0)
    ctx->pc = 0x27ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
    // 0x27ef5c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x27EF5Cu;
    SET_GPR_U32(ctx, 31, 0x27EF64u);
    ctx->pc = 0x27EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF5Cu;
    // 0x27ef60: 0x8c4506e0  lw          $a1, 0x6E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x27EF5Cu, 0x27EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF64u;
label_27ef64:
    // 0x27ef64: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x27ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27ef68: 0x8c4506e4  lw          $a1, 0x6E4($v0)
    ctx->pc = 0x27ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x27ef6c: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x27EF6Cu;
    SET_GPR_U32(ctx, 31, 0x27EF74u);
    ctx->pc = 0x27EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF6Cu;
    // 0x27ef70: 0x8c4406ec  lw          $a0, 0x6EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x27EF6Cu, 0x27EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF74u;
label_27ef74:
    // 0x27ef74: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x27ef74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27ef78: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x27ef78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27ef7c: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x27ef7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27ef80: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x27ef80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27ef84: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x27ef84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27ef88: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x27ef88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27ef8c: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x27ef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27ef90: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x27ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27ef94: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x27ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27ef98: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x27ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ef9c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x27ef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27efa0: 0x3e00008  jr          $ra
    ctx->pc = 0x27EFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFA0u;
        // 0x27efa4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EFA8u;
}
