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

// Function: chrLineTestChr
// Address: 0x286700 - 0x2872a8
void chrLineTestChr_0x286700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrLineTestChr_0x286700");
#endif

    switch (ctx->pc) {
        case 0x286788u: goto label_286788;
        case 0x28680cu: goto label_28680c;
        case 0x286960u: goto label_286960;
        case 0x2869e8u: goto label_2869e8;
        case 0x2869f8u: goto label_2869f8;
        case 0x286a0cu: goto label_286a0c;
        case 0x286a20u: goto label_286a20;
        case 0x286a48u: goto label_286a48;
        case 0x286b0cu: goto label_286b0c;
        case 0x286b28u: goto label_286b28;
        case 0x286b74u: goto label_286b74;
        case 0x286b8cu: goto label_286b8c;
        case 0x286bacu: goto label_286bac;
        case 0x286bd8u: goto label_286bd8;
        case 0x286c48u: goto label_286c48;
        case 0x286cdcu: goto label_286cdc;
        case 0x286cf8u: goto label_286cf8;
        case 0x286d94u: goto label_286d94;
        case 0x286db4u: goto label_286db4;
        case 0x286df0u: goto label_286df0;
        case 0x286e98u: goto label_286e98;
        case 0x286eb4u: goto label_286eb4;
        case 0x286f48u: goto label_286f48;
        case 0x287194u: goto label_287194;
        case 0x287214u: goto label_287214;
        case 0x287260u: goto label_287260;
        default: break;
    }

    ctx->pc = 0x286700u;

    // 0x286700: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x286700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x286704: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x286704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x286708: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x286708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x28670c: 0xffb30240  sd          $s3, 0x240($sp)
    ctx->pc = 0x28670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 19));
    // 0x286710: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x286710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x286714: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x286714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286718: 0xffb10220  sd          $s1, 0x220($sp)
    ctx->pc = 0x286718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 17));
    // 0x28671c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28671cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286720: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x286720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x286724: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x286724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286728: 0xe7b402b0  swc1        $f20, 0x2B0($sp)
    ctx->pc = 0x286728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x28672c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28672cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286730: 0xffbf02a0  sd          $ra, 0x2A0($sp)
    ctx->pc = 0x286730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 31));
    // 0x286734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286738: 0xffb70280  sd          $s7, 0x280($sp)
    ctx->pc = 0x286738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 23));
    // 0x28673c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x28673cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x286740: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x286740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x286744: 0xffb50260  sd          $s5, 0x260($sp)
    ctx->pc = 0x286744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 21));
    // 0x286748: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x286748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x28674c: 0xffbe0290  sd          $fp, 0x290($sp)
    ctx->pc = 0x28674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 30));
    // 0x286750: 0x8c9e0020  lw          $fp, 0x20($a0)
    ctx->pc = 0x286750u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x286754: 0xafab019c  sw          $t3, 0x19C($sp)
    ctx->pc = 0x286754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 11));
    // 0x286758: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x286758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28675c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x28675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x286760: 0xafa90194  sw          $t1, 0x194($sp)
    ctx->pc = 0x286760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 9));
    // 0x286764: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x286764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x286768: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x286768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28676c: 0xafaa0198  sw          $t2, 0x198($sp)
    ctx->pc = 0x28676cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 10));
    // 0x286770: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x286770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286774: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x286774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
    // 0x286778: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x286778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x28677c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x28677cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286780: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x286780u;
    SET_GPR_U32(ctx, 31, 0x286788u);
    ctx->pc = 0x286784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286780u;
    // 0x286784: 0xafa201a4  sw          $v0, 0x1A4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x286780u, 0x286788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286788u;
label_286788:
    // 0x286788: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x286788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x28678c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x28678cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x286790: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x286790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x286794: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x286794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x286798: 0x8c840160  lw          $a0, 0x160($a0)
    ctx->pc = 0x286798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x28679c: 0xc4b4fa50  lwc1        $f20, -0x5B0($a1)
    ctx->pc = 0x28679cu;
    { uint32_t bits = FAST_READ32(0x3AFA50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2867a0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2867a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2867a4: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x2867a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x2867a8: 0x24668870  addiu       $a2, $v1, -0x7790
    ctx->pc = 0x2867a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936688));
    // 0x2867ac: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x2867acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2867b0: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x2867b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2867b4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2867b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8878u));
    // 0x2867b8: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x2867b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2867bc: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x2867bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2867c0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2867c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2867c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2867C4u;
    {
        const bool branch_taken_0x2867c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867C4u;
        // 0x2867c8: 0x8fa70190  lw          $a3, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867c4) {
            ctx->pc = 0x286814u;
            goto label_286814;
        }
    }
    ctx->pc = 0x2867CCu;
    // 0x2867cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2867ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2867d0: 0xc78189b0  lwc1        $f1, -0x7650($gp)
    ctx->pc = 0x2867d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2867d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2867d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2867d8: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x2867d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2867dc: 0x24e60030  addiu       $a2, $a3, 0x30
    ctx->pc = 0x2867dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2867e0: 0xc4e20030  lwc1        $f2, 0x30($a3)
    ctx->pc = 0x2867e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2867e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2867e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2867e8: 0xc4e30038  lwc1        $f3, 0x38($a3)
    ctx->pc = 0x2867e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2867ec: 0xc78c89b4  lwc1        $f12, -0x764C($gp)
    ctx->pc = 0x2867ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2867f0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x2867f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2867f4: 0x8fa80194  lw          $t0, 0x194($sp)
    ctx->pc = 0x2867f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2867f8: 0x8fa90198  lw          $t1, 0x198($sp)
    ctx->pc = 0x2867f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2867fc: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x2867fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x286800: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x286800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x286804: 0xc082820  jal         func_20A080
    ctx->pc = 0x286804u;
    SET_GPR_U32(ctx, 31, 0x28680Cu);
    ctx->pc = 0x286808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286804u;
    // 0x286808: 0xe7a300e8  swc1        $f3, 0xE8($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A080u, 0x286804u, 0x28680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28680Cu;
label_28680c:
    // 0x28680c: 0x1000029a  b           . + 4 + (0x29A << 2)
    ctx->pc = 0x28680Cu;
    {
        const bool branch_taken_0x28680c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28680Cu;
        // 0x286810: 0xdfbf02a0  ld          $ra, 0x2A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28680c) {
            ctx->pc = 0x287278u;
            goto label_287278;
        }
    }
    ctx->pc = 0x286814u;
label_286814:
    // 0x286814: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x286814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x286818: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x286818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x28681c: 0xc4400bdc  lwc1        $f0, 0xBDC($v0)
    ctx->pc = 0x28681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286820: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x286820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286824: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x286824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286828: 0x46000940  add.s       $f5, $f1, $f0
    ctx->pc = 0x286828u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28682c: 0xc4630038  lwc1        $f3, 0x38($v1)
    ctx->pc = 0x28682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x286830: 0xe7a500c0  swc1        $f5, 0xC0($sp)
    ctx->pc = 0x286830u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x286834: 0xc4400be0  lwc1        $f0, 0xBE0($v0)
    ctx->pc = 0x286834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286838: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x286838u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28683c: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x28683cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x286840: 0xc4400be4  lwc1        $f0, 0xBE4($v0)
    ctx->pc = 0x286840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286844: 0x460019c0  add.s       $f7, $f3, $f0
    ctx->pc = 0x286844u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x286848: 0xe7a700c8  swc1        $f7, 0xC8($sp)
    ctx->pc = 0x286848u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x28684c: 0xc4400be8  lwc1        $f0, 0xBE8($v0)
    ctx->pc = 0x28684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286850: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x286850u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286854: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x286854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x286858: 0xc4400bec  lwc1        $f0, 0xBEC($v0)
    ctx->pc = 0x286858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28685c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28685cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x286860: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x286860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x286864: 0xc4400bf0  lwc1        $f0, 0xBF0($v0)
    ctx->pc = 0x286864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286868: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x286868u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x28686c: 0x16600037  bnez        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x28686Cu;
    {
        const bool branch_taken_0x28686c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x286870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28686Cu;
        // 0x286870: 0xe7a300d8  swc1        $f3, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28686c) {
            ctx->pc = 0x28694Cu;
            goto label_28694c;
        }
    }
    ctx->pc = 0x286874u;
    // 0x286874: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x286874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x286878: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x286878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28687c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28687Cu;
    {
        const bool branch_taken_0x28687c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28687c) {
            ctx->pc = 0x286898u;
            goto label_286898;
        }
    }
    ctx->pc = 0x286884u;
    // 0x286884: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x286884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286888: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x286888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28688c: 0x0  nop
    ctx->pc = 0x28688cu;
    // NOP
    // 0x286890: 0x45010278  bc1t        . + 4 + (0x278 << 2)
    ctx->pc = 0x286890u;
    {
        const bool branch_taken_0x286890 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x286894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286890u;
        // 0x286894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286890) {
            ctx->pc = 0x287274u;
            goto label_287274;
        }
    }
    ctx->pc = 0x286898u;
label_286898:
    // 0x286898: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x286898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28689c: 0x0  nop
    ctx->pc = 0x28689cu;
    // NOP
    // 0x2868a0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2868A0u;
    {
        const bool branch_taken_0x2868a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2868a0) {
            ctx->pc = 0x2868A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2868A0u;
            // 0x2868a4: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2868C0u;
            goto label_2868c0;
        }
    }
    ctx->pc = 0x2868A8u;
    // 0x2868a8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2868a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2868ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2868acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2868b0: 0x0  nop
    ctx->pc = 0x2868b0u;
    // NOP
    // 0x2868b4: 0x4501026f  bc1t        . + 4 + (0x26F << 2)
    ctx->pc = 0x2868B4u;
    {
        const bool branch_taken_0x2868b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2868B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868B4u;
        // 0x2868b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868b4) {
            ctx->pc = 0x287274u;
            goto label_287274;
        }
    }
    ctx->pc = 0x2868BCu;
    // 0x2868bc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2868bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2868c0:
    // 0x2868c0: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x2868c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2868c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2868C4u;
    {
        const bool branch_taken_0x2868c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2868c4) {
            ctx->pc = 0x2868E0u;
            goto label_2868e0;
        }
    }
    ctx->pc = 0x2868CCu;
    // 0x2868cc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2868ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2868d0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2868d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2868d4: 0x0  nop
    ctx->pc = 0x2868d4u;
    // NOP
    // 0x2868d8: 0x45010266  bc1t        . + 4 + (0x266 << 2)
    ctx->pc = 0x2868D8u;
    {
        const bool branch_taken_0x2868d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2868DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868D8u;
        // 0x2868dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868d8) {
            ctx->pc = 0x287274u;
            goto label_287274;
        }
    }
    ctx->pc = 0x2868E0u;
label_2868e0:
    // 0x2868e0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2868e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2868e4: 0x0  nop
    ctx->pc = 0x2868e4u;
    // NOP
    // 0x2868e8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2868E8u;
    {
        const bool branch_taken_0x2868e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2868e8) {
            ctx->pc = 0x2868ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2868E8u;
            // 0x2868ec: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x286908u;
            goto label_286908;
        }
    }
    ctx->pc = 0x2868F0u;
    // 0x2868f0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2868f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2868f4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2868f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2868f8: 0x0  nop
    ctx->pc = 0x2868f8u;
    // NOP
    // 0x2868fc: 0x4501025d  bc1t        . + 4 + (0x25D << 2)
    ctx->pc = 0x2868FCu;
    {
        const bool branch_taken_0x2868fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x286900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868FCu;
        // 0x286900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868fc) {
            ctx->pc = 0x287274u;
            goto label_287274;
        }
    }
    ctx->pc = 0x286904u;
    // 0x286904: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x286904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286908:
    // 0x286908: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x286908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28690c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28690Cu;
    {
        const bool branch_taken_0x28690c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28690c) {
            ctx->pc = 0x286928u;
            goto label_286928;
        }
    }
    ctx->pc = 0x286914u;
    // 0x286914: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x286914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286918: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x286918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28691c: 0x0  nop
    ctx->pc = 0x28691cu;
    // NOP
    // 0x286920: 0x45010254  bc1t        . + 4 + (0x254 << 2)
    ctx->pc = 0x286920u;
    {
        const bool branch_taken_0x286920 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x286924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286920u;
        // 0x286924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286920) {
            ctx->pc = 0x287274u;
            goto label_287274;
        }
    }
    ctx->pc = 0x286928u;
label_286928:
    // 0x286928: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x286928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28692c: 0x0  nop
    ctx->pc = 0x28692cu;
    // NOP
    // 0x286930: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x286930u;
    {
        const bool branch_taken_0x286930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286930u;
        // 0x286934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286930) {
            ctx->pc = 0x286950u;
            goto label_286950;
        }
    }
    ctx->pc = 0x286938u;
    // 0x286938: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x286938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28693c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x28693cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286940: 0x0  nop
    ctx->pc = 0x286940u;
    // NOP
    // 0x286944: 0x4501024b  bc1t        . + 4 + (0x24B << 2)
    ctx->pc = 0x286944u;
    {
        const bool branch_taken_0x286944 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x286948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286944u;
        // 0x286948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286944) {
            ctx->pc = 0x287274u;
            goto label_287274;
        }
    }
    ctx->pc = 0x28694Cu;
label_28694c:
    // 0x28694c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28694cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286950:
    // 0x286950: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286954: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x286954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x286958: 0xc082590  jal         func_209640
    ctx->pc = 0x286958u;
    SET_GPR_U32(ctx, 31, 0x286960u);
    ctx->pc = 0x28695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286958u;
    // 0x28695c: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209640u, 0x286958u, 0x286960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286960u;
label_286960:
    // 0x286960: 0x10400243  beqz        $v0, . + 4 + (0x243 << 2)
    ctx->pc = 0x286960u;
    {
        const bool branch_taken_0x286960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286960u;
        // 0x286964: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286960) {
            ctx->pc = 0x287270u;
            goto label_287270;
        }
    }
    ctx->pc = 0x286968u;
    // 0x286968: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x286968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28696c: 0xc78089b8  lwc1        $f0, -0x7648($gp)
    ctx->pc = 0x28696cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286970: 0xc48c004c  lwc1        $f12, 0x4C($a0)
    ctx->pc = 0x286970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x286974: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x286974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x286978: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x286978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28697c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286980: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x286980u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x286984: 0xafa501b4  sw          $a1, 0x1B4($sp)
    ctx->pc = 0x286984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 5));
    // 0x286988: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x286988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
    // 0x28698c: 0x8fa60190  lw          $a2, 0x190($sp)
    ctx->pc = 0x28698cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x286990: 0x0  nop
    ctx->pc = 0x286990u;
    // NOP
    // 0x286994: 0x0  nop
    ctx->pc = 0x286994u;
    // NOP
    // 0x286998: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x286998u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x28699c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x28699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2869a0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2869a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2869a4: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x2869a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2869a8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2869a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2869ac: 0xc4c20034  lwc1        $f2, 0x34($a2)
    ctx->pc = 0x2869acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2869b0: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2869b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2869b4: 0xc4c30038  lwc1        $f3, 0x38($a2)
    ctx->pc = 0x2869b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2869b8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2869b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2869bc: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x2869bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2869c0: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2869c0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2869c4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2869c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2869c8: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2869c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2869cc: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2869ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2869d0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2869d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2869d4: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x2869d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2869d8: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x2869d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2869dc: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x2869dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2869e0: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2869E0u;
    SET_GPR_U32(ctx, 31, 0x2869E8u);
    ctx->pc = 0x2869E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869E0u;
    // 0x2869e4: 0xe7a500b8  swc1        $f5, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2869E0u, 0x2869E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869E8u;
label_2869e8:
    // 0x2869e8: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2869e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2869ec: 0x8fa501b4  lw          $a1, 0x1B4($sp)
    ctx->pc = 0x2869ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2869f0: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x2869F0u;
    SET_GPR_U32(ctx, 31, 0x2869F8u);
    ctx->pc = 0x2869F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869F0u;
    // 0x2869f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x2869F0u, 0x2869F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869F8u;
label_2869f8:
    // 0x2869f8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2869f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2869fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2869fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a00: 0xafa701b8  sw          $a3, 0x1B8($sp)
    ctx->pc = 0x286a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 7));
    // 0x286a04: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x286A04u;
    SET_GPR_U32(ctx, 31, 0x286A0Cu);
    ctx->pc = 0x286A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A04u;
    // 0x286a08: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x286A04u, 0x286A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A0Cu;
label_286a0c:
    // 0x286a0c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x286a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x286a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a14: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x286a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x286a18: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x286A18u;
    SET_GPR_U32(ctx, 31, 0x286A20u);
    ctx->pc = 0x286A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A18u;
    // 0x286a1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x286A18u, 0x286A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A20u;
label_286a20:
    // 0x286a20: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x286a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x286a24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x286a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286a28: 0x186001ca  blez        $v1, . + 4 + (0x1CA << 2)
    ctx->pc = 0x286A28u;
    {
        const bool branch_taken_0x286a28 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x286A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A28u;
        // 0x286a2c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a28) {
            ctx->pc = 0x287154u;
            goto label_287154;
        }
    }
    ctx->pc = 0x286A30u;
    // 0x286a30: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x286a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x286a34: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x286a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x286a38: 0xafa501cc  sw          $a1, 0x1CC($sp)
    ctx->pc = 0x286a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 5));
    // 0x286a3c: 0xafa601d0  sw          $a2, 0x1D0($sp)
    ctx->pc = 0x286a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 6));
    // 0x286a40: 0xafa701d4  sw          $a3, 0x1D4($sp)
    ctx->pc = 0x286a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 7));
    // 0x286a44: 0x0  nop
    ctx->pc = 0x286a44u;
    // NOP
label_286a48:
    // 0x286a48: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x286a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x286a4c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x286a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x286a50: 0x400013  mtlo        $v0
    ctx->pc = 0x286a50u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x286a54: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x286a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x286a58: 0x7044a800  madd        $s5, $v0, $a0
    ctx->pc = 0x286a58u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x286a5c: 0x82a20002  lb          $v0, 0x2($s5)
    ctx->pc = 0x286a5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x286a60: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286A60u;
    {
        const bool branch_taken_0x286a60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A60u;
        // 0x286a64: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a60) {
            ctx->pc = 0x286A80u;
            goto label_286a80;
        }
    }
    ctx->pc = 0x286A68u;
    // 0x286a68: 0x800013  mtlo        $a0
    ctx->pc = 0x286a68u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x286a6c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x286a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x286a70: 0x70440000  madd        $zero, $v0, $a0
    ctx->pc = 0x286a70u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x286a74: 0x2812  mflo        $a1
    ctx->pc = 0x286a74u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x286a78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286A78u;
    {
        const bool branch_taken_0x286a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A78u;
        // 0x286a7c: 0xafa501c0  sw          $a1, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a78) {
            ctx->pc = 0x286A84u;
            goto label_286a84;
        }
    }
    ctx->pc = 0x286A80u;
label_286a80:
    // 0x286a80: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x286a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
label_286a84:
    // 0x286a84: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x286a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x286a88: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286A88u;
    {
        const bool branch_taken_0x286a88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A88u;
        // 0x286a8c: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a88) {
            ctx->pc = 0x286AA8u;
            goto label_286aa8;
        }
    }
    ctx->pc = 0x286A90u;
    // 0x286a90: 0x800013  mtlo        $a0
    ctx->pc = 0x286a90u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x286a94: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x286a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x286a98: 0x70440000  madd        $zero, $v0, $a0
    ctx->pc = 0x286a98u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x286a9c: 0x2012  mflo        $a0
    ctx->pc = 0x286a9cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x286aa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286AA0u;
    {
        const bool branch_taken_0x286aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AA0u;
        // 0x286aa4: 0xafa401c4  sw          $a0, 0x1C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286aa0) {
            ctx->pc = 0x286AACu;
            goto label_286aac;
        }
    }
    ctx->pc = 0x286AA8u;
label_286aa8:
    // 0x286aa8: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x286aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
label_286aac:
    // 0x286aac: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x286aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x286ab0: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x286ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x286ab4: 0x8fa701b0  lw          $a3, 0x1B0($sp)
    ctx->pc = 0x286ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x286ab8: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x286ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x286abc: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x286abcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x286ac0: 0x24420bf4  addiu       $v0, $v0, 0xBF4
    ctx->pc = 0x286ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3060));
    // 0x286ac4: 0xafa601c8  sw          $a2, 0x1C8($sp)
    ctx->pc = 0x286ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 6));
    // 0x286ac8: 0x12200189  beqz        $s1, . + 4 + (0x189 << 2)
    ctx->pc = 0x286AC8u;
    {
        const bool branch_taken_0x286ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x286ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AC8u;
        // 0x286acc: 0xe28021  addu        $s0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ac8) {
            ctx->pc = 0x2870F0u;
            goto label_2870f0;
        }
    }
    ctx->pc = 0x286AD0u;
    // 0x286ad0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x286ad0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x286ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286ad8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x286AD8u;
    {
        const bool branch_taken_0x286ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AD8u;
        // 0x286adc: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ad8) {
            ctx->pc = 0x286B30u;
            goto label_286b30;
        }
    }
    ctx->pc = 0x286AE0u;
    // 0x286ae0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286ae4: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x286ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x286ae8: 0x8fa501cc  lw          $a1, 0x1CC($sp)
    ctx->pc = 0x286ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x286aec: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x286aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286af0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x286af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x286af4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x286af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286af8: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x286af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x286afc: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x286afcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286b00: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x286b04: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x286B04u;
    SET_GPR_U32(ctx, 31, 0x286B0Cu);
    ctx->pc = 0x286B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B04u;
    // 0x286b08: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x286B04u, 0x286B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B0Cu;
label_286b0c:
    // 0x286b0c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x286b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x286b10: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x286b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x286b14: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x286b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x286b18: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x286b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x286b1c: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x286b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x286b20: 0xc082a36  jal         func_20A8D8
    ctx->pc = 0x286B20u;
    SET_GPR_U32(ctx, 31, 0x286B28u);
    ctx->pc = 0x286B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B20u;
    // 0x286b24: 0x8fa601cc  lw          $a2, 0x1CC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A8D8u, 0x286B20u, 0x286B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B28u;
label_286b28:
    // 0x286b28: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x286B28u;
    {
        const bool branch_taken_0x286b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b28) {
            ctx->pc = 0x286BACu;
            goto label_286bac;
        }
    }
    ctx->pc = 0x286B30u;
label_286b30:
    // 0x286b30: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286b34: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x286b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x286b38: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x286b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x286b3c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x286b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286b40: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x286b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x286b44: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x286b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286b48: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x286b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x286b4c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x286b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286b50: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x286b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x286b54: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x286b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286b58: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x286b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x286b5c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x286b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286b60: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x286b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x286b64: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x286b64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286b68: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x286b6c: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x286B6Cu;
    SET_GPR_U32(ctx, 31, 0x286B74u);
    ctx->pc = 0x286B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B6Cu;
    // 0x286b70: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x286B6Cu, 0x286B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B74u;
label_286b74:
    // 0x286b74: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x286b74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286b78: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286b7c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x286b80: 0x8fa501d4  lw          $a1, 0x1D4($sp)
    ctx->pc = 0x286b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x286b84: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x286B84u;
    SET_GPR_U32(ctx, 31, 0x286B8Cu);
    ctx->pc = 0x286B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B84u;
    // 0x286b88: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x286B84u, 0x286B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B8Cu;
label_286b8c:
    // 0x286b8c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x286b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x286b90: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x286b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x286b94: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x286b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x286b98: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x286b98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x286b9c: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x286b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x286ba0: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x286ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x286ba4: 0xc082820  jal         func_20A080
    ctx->pc = 0x286BA4u;
    SET_GPR_U32(ctx, 31, 0x286BACu);
    ctx->pc = 0x286BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286BA4u;
    // 0x286ba8: 0x8fa701d4  lw          $a3, 0x1D4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A080u, 0x286BA4u, 0x286BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286BACu;
label_286bac:
    // 0x286bac: 0x10400154  beqz        $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x286BACu;
    {
        const bool branch_taken_0x286bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BACu;
        // 0x286bb0: 0x8fa3019c  lw          $v1, 0x19C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bac) {
            ctx->pc = 0x287100u;
            goto label_287100;
        }
    }
    ctx->pc = 0x286BB4u;
    // 0x286bb4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x286bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x286bb8: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x286BB8u;
    {
        const bool branch_taken_0x286bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BB8u;
        // 0x286bbc: 0xc7a700e0  lwc1        $f7, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bb8) {
            ctx->pc = 0x287060u;
            goto label_287060;
        }
    }
    ctx->pc = 0x286BC0u;
    // 0x286bc0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x286bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x286bc4: 0x4400154  bltz        $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x286BC4u;
    {
        const bool branch_taken_0x286bc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BC4u;
        // 0x286bc8: 0x8fa401ac  lw          $a0, 0x1AC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bc4) {
            ctx->pc = 0x287118u;
            goto label_287118;
        }
    }
    ctx->pc = 0x286BCCu;
    // 0x286bcc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x286bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x286bd0: 0xafa40204  sw          $a0, 0x204($sp)
    ctx->pc = 0x286bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 4));
    // 0x286bd4: 0x8fa601c8  lw          $a2, 0x1C8($sp)
    ctx->pc = 0x286bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_286bd8:
    // 0x286bd8: 0x26270018  addiu       $a3, $s1, 0x18
    ctx->pc = 0x286bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x286bdc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x286bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286be0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x286be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x286be4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x286be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x286be8: 0xafa701f0  sw          $a3, 0x1F0($sp)
    ctx->pc = 0x286be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 7));
    // 0x286bec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x286becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x286bf0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x286bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286bf4: 0x8fa701c8  lw          $a3, 0x1C8($sp)
    ctx->pc = 0x286bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x286bf8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x286bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x286bfc: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x286bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
    // 0x286c00: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x286c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x286c04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286c08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x286c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x286c0c: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x286c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x286c10: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x286c10u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x286c14: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x286c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x286c18: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x286c18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x286c1c: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x286c1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x286c20: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x286c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x286c24: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x286c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x286c28: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x286c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x286c2c: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x286c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
    // 0x286c30: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x286c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
    // 0x286c34: 0xc59021  addu        $s2, $a2, $a1
    ctx->pc = 0x286c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x286c38: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x286c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
    // 0x286c3c: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x286c3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x286c40: 0xafa401e8  sw          $a0, 0x1E8($sp)
    ctx->pc = 0x286c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 4));
    // 0x286c44: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x286c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286c48:
    // 0x286c48: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x286c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x286c4c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x286c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286c50: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x286c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x286c54: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x286c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286c58: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x286c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x286c5c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x286c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x286c60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286C60u;
    {
        const bool branch_taken_0x286c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C60u;
        // 0x286c64: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c60) {
            ctx->pc = 0x286C7Cu;
            goto label_286c7c;
        }
    }
    ctx->pc = 0x286C68u;
    // 0x286c68: 0x82a40001  lb          $a0, 0x1($s5)
    ctx->pc = 0x286c68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x286c6c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286c70: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x286c74: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x286C74u;
    {
        const bool branch_taken_0x286c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C74u;
        // 0x286c78: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c74) {
            ctx->pc = 0x286CD4u;
            goto label_286cd4;
        }
    }
    ctx->pc = 0x286C7Cu;
label_286c7c:
    // 0x286c7c: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x286c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x286c80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x286c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286c84: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x286C84u;
    {
        const bool branch_taken_0x286c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x286C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C84u;
        // 0x286c88: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c84) {
            ctx->pc = 0x286CC0u;
            goto label_286cc0;
        }
    }
    ctx->pc = 0x286C8Cu;
    // 0x286c8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286C8Cu;
    {
        const bool branch_taken_0x286c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286c8c) {
            ctx->pc = 0x286CA4u;
            goto label_286ca4;
        }
    }
    ctx->pc = 0x286C94u;
    // 0x286c94: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x286C94u;
    {
        const bool branch_taken_0x286c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C94u;
        // 0x286c98: 0x8fa601c0  lw          $a2, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c94) {
            ctx->pc = 0x286CB4u;
            goto label_286cb4;
        }
    }
    ctx->pc = 0x286C9Cu;
    // 0x286c9c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x286C9Cu;
    {
        const bool branch_taken_0x286c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C9Cu;
        // 0x286ca0: 0xc641000c  lwc1        $f1, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c9c) {
            ctx->pc = 0x286CFCu;
            goto label_286cfc;
        }
    }
    ctx->pc = 0x286CA4u;
label_286ca4:
    // 0x286ca4: 0x5071000f  beql        $v1, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x286CA4u;
    {
        const bool branch_taken_0x286ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x286ca4) {
            ctx->pc = 0x286CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286CA4u;
            // 0x286ca8: 0x82a40001  lb          $a0, 0x1($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286CE4u;
            goto label_286ce4;
        }
    }
    ctx->pc = 0x286CACu;
    // 0x286cac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x286CACu;
    {
        const bool branch_taken_0x286cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CACu;
        // 0x286cb0: 0xc641000c  lwc1        $f1, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cac) {
            ctx->pc = 0x286CFCu;
            goto label_286cfc;
        }
    }
    ctx->pc = 0x286CB4u;
label_286cb4:
    // 0x286cb4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286cb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286CB8u;
    {
        const bool branch_taken_0x286cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CB8u;
        // 0x286cbc: 0x80c40001  lb          $a0, 0x1($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cb8) {
            ctx->pc = 0x286CCCu;
            goto label_286ccc;
        }
    }
    ctx->pc = 0x286CC0u;
label_286cc0:
    // 0x286cc0: 0x8fa701c4  lw          $a3, 0x1C4($sp)
    ctx->pc = 0x286cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x286cc4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286cc8: 0x80e40001  lb          $a0, 0x1($a3)
    ctx->pc = 0x286cc8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_286ccc:
    // 0x286ccc: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x286cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x286cd0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_286cd4:
    // 0x286cd4: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x286CD4u;
    SET_GPR_U32(ctx, 31, 0x286CDCu);
    ctx->pc = 0x286CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CD4u;
    // 0x286cd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x286CD4u, 0x286CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CDCu;
label_286cdc:
    // 0x286cdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286CDCu;
    {
        const bool branch_taken_0x286cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CDCu;
        // 0x286ce0: 0xc641000c  lwc1        $f1, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cdc) {
            ctx->pc = 0x286CFCu;
            goto label_286cfc;
        }
    }
    ctx->pc = 0x286CE4u;
label_286ce4:
    // 0x286ce4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286ce8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x286cec: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x286cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x286cf0: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x286CF0u;
    SET_GPR_U32(ctx, 31, 0x286CF8u);
    ctx->pc = 0x286CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CF0u;
    // 0x286cf4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x286CF0u, 0x286CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CF8u;
label_286cf8:
    // 0x286cf8: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x286cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286cfc:
    // 0x286cfc: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x286cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x286d00: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x286d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286d04: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x286d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x286d08: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x286d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286d0c: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x286d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x286d10: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x286d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x286d14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286D14u;
    {
        const bool branch_taken_0x286d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D14u;
        // 0x286d18: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d14) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286D1Cu;
    // 0x286d1c: 0x82a40001  lb          $a0, 0x1($s5)
    ctx->pc = 0x286d1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x286d20: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x286d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x286d24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x286D24u;
    {
        const bool branch_taken_0x286d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D24u;
        // 0x286d28: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d24) {
            ctx->pc = 0x286D88u;
            goto label_286d88;
        }
    }
    ctx->pc = 0x286D2Cu;
label_286d2c:
    // 0x286d2c: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x286d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x286d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286d34: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x286D34u;
    {
        const bool branch_taken_0x286d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D34u;
        // 0x286d38: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d34) {
            ctx->pc = 0x286D78u;
            goto label_286d78;
        }
    }
    ctx->pc = 0x286D3Cu;
    // 0x286d3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286D3Cu;
    {
        const bool branch_taken_0x286d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D3Cu;
        // 0x286d40: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d3c) {
            ctx->pc = 0x286D54u;
            goto label_286d54;
        }
    }
    ctx->pc = 0x286D44u;
    // 0x286d44: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x286D44u;
    {
        const bool branch_taken_0x286d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D44u;
        // 0x286d48: 0x8fa701e0  lw          $a3, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d44) {
            ctx->pc = 0x286D64u;
            goto label_286d64;
        }
    }
    ctx->pc = 0x286D4Cu;
    // 0x286d4c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x286D4Cu;
    {
        const bool branch_taken_0x286d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D4Cu;
        // 0x286d50: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d4c) {
            ctx->pc = 0x286DBCu;
            goto label_286dbc;
        }
    }
    ctx->pc = 0x286D54u;
label_286d54:
    // 0x286d54: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x286D54u;
    {
        const bool branch_taken_0x286d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x286D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D54u;
        // 0x286d58: 0x8fa701e0  lw          $a3, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d54) {
            ctx->pc = 0x286D9Cu;
            goto label_286d9c;
        }
    }
    ctx->pc = 0x286D5Cu;
    // 0x286d5c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x286D5Cu;
    {
        const bool branch_taken_0x286d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D5Cu;
        // 0x286d60: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d5c) {
            ctx->pc = 0x286DBCu;
            goto label_286dbc;
        }
    }
    ctx->pc = 0x286D64u;
label_286d64:
    // 0x286d64: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x286d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x286d68: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286d6c: 0x80a40001  lb          $a0, 0x1($a1)
    ctx->pc = 0x286d6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x286d70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x286D70u;
    {
        const bool branch_taken_0x286d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D70u;
        // 0x286d74: 0x27a5013c  addiu       $a1, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d70) {
            ctx->pc = 0x286D88u;
            goto label_286d88;
        }
    }
    ctx->pc = 0x286D78u;
label_286d78:
    // 0x286d78: 0x8fa601c4  lw          $a2, 0x1C4($sp)
    ctx->pc = 0x286d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x286d7c: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x286d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x286d80: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286d84: 0x80c40001  lb          $a0, 0x1($a2)
    ctx->pc = 0x286d84u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_286d88:
    // 0x286d88: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286d88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x286d8c: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x286D8Cu;
    SET_GPR_U32(ctx, 31, 0x286D94u);
    ctx->pc = 0x286D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D8Cu;
    // 0x286d90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x286D8Cu, 0x286D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D94u;
label_286d94:
    // 0x286d94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286D94u;
    {
        const bool branch_taken_0x286d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D94u;
        // 0x286d98: 0x8fa701e0  lw          $a3, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d94) {
            ctx->pc = 0x286DB8u;
            goto label_286db8;
        }
    }
    ctx->pc = 0x286D9Cu;
label_286d9c:
    // 0x286d9c: 0x82a40001  lb          $a0, 0x1($s5)
    ctx->pc = 0x286d9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x286da0: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x286da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x286da4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286da8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x286dac: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x286DACu;
    SET_GPR_U32(ctx, 31, 0x286DB4u);
    ctx->pc = 0x286DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286DACu;
    // 0x286db0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x286DACu, 0x286DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DB4u;
label_286db4:
    // 0x286db4: 0x8fa701e0  lw          $a3, 0x1E0($sp)
    ctx->pc = 0x286db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_286db8:
    // 0x286db8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x286db8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_286dbc:
    // 0x286dbc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x286dbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dc0: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x286dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x286dc4: 0x18e0008b  blez        $a3, . + 4 + (0x8B << 2)
    ctx->pc = 0x286DC4u;
    {
        const bool branch_taken_0x286dc4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x286DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DC4u;
        // 0x286dc8: 0xafa701ec  sw          $a3, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dc4) {
            ctx->pc = 0x286FF4u;
            goto label_286ff4;
        }
    }
    ctx->pc = 0x286DCCu;
    // 0x286dcc: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x286dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x286dd0: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x286dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x286dd4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x286dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x286dd8: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x286dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x286ddc: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x286ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x286de0: 0x27b60130  addiu       $s6, $sp, 0x130
    ctx->pc = 0x286de0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x286de4: 0xafa301f8  sw          $v1, 0x1F8($sp)
    ctx->pc = 0x286de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 3));
    // 0x286de8: 0xafa401fc  sw          $a0, 0x1FC($sp)
    ctx->pc = 0x286de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 4));
    // 0x286dec: 0xafa50200  sw          $a1, 0x200($sp)
    ctx->pc = 0x286decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 5));
label_286df0:
    // 0x286df0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x286df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x286df4: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x286df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286df8: 0x2261818  mult        $v1, $s1, $a2
    ctx->pc = 0x286df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x286dfc: 0x8fa701f4  lw          $a3, 0x1F4($sp)
    ctx->pc = 0x286dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x286e00: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x286e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x286e04: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x286e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x286e08: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x286e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x286e0c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x286e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286e10: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x286e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x286e14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x286e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x286e18: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x286e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x286e1c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x286e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286e20: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x286e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x286e24: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x286e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x286e28: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x286E28u;
    {
        const bool branch_taken_0x286e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286e28) {
            ctx->pc = 0x286E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286E28u;
            // 0x286e2c: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286E3Cu;
            goto label_286e3c;
        }
    }
    ctx->pc = 0x286E30u;
    // 0x286e30: 0x82a40001  lb          $a0, 0x1($s5)
    ctx->pc = 0x286e30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x286e34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x286E34u;
    {
        const bool branch_taken_0x286e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E34u;
        // 0x286e38: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e34) {
            ctx->pc = 0x286E8Cu;
            goto label_286e8c;
        }
    }
    ctx->pc = 0x286E3Cu;
label_286e3c:
    // 0x286e3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x286e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286e40: 0x1066000f  beq         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x286E40u;
    {
        const bool branch_taken_0x286e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x286E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E40u;
        // 0x286e44: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e40) {
            ctx->pc = 0x286E80u;
            goto label_286e80;
        }
    }
    ctx->pc = 0x286E48u;
    // 0x286e48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286E48u;
    {
        const bool branch_taken_0x286e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E48u;
        // 0x286e4c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e48) {
            ctx->pc = 0x286E60u;
            goto label_286e60;
        }
    }
    ctx->pc = 0x286E50u;
    // 0x286e50: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x286E50u;
    {
        const bool branch_taken_0x286e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E50u;
        // 0x286e54: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e50) {
            ctx->pc = 0x286E70u;
            goto label_286e70;
        }
    }
    ctx->pc = 0x286E58u;
    // 0x286e58: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x286E58u;
    {
        const bool branch_taken_0x286e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E58u;
        // 0x286e5c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e58) {
            ctx->pc = 0x286EBCu;
            goto label_286ebc;
        }
    }
    ctx->pc = 0x286E60u;
label_286e60:
    // 0x286e60: 0x1067000f  beq         $v1, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x286E60u;
    {
        const bool branch_taken_0x286e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x286E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E60u;
        // 0x286e64: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e60) {
            ctx->pc = 0x286EA0u;
            goto label_286ea0;
        }
    }
    ctx->pc = 0x286E68u;
    // 0x286e68: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x286E68u;
    {
        const bool branch_taken_0x286e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E68u;
        // 0x286e6c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e68) {
            ctx->pc = 0x286EBCu;
            goto label_286ebc;
        }
    }
    ctx->pc = 0x286E70u;
label_286e70:
    // 0x286e70: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x286e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x286e74: 0x80440001  lb          $a0, 0x1($v0)
    ctx->pc = 0x286e74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x286e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286E78u;
    {
        const bool branch_taken_0x286e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E78u;
        // 0x286e7c: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e78) {
            ctx->pc = 0x286E8Cu;
            goto label_286e8c;
        }
    }
    ctx->pc = 0x286E80u;
label_286e80:
    // 0x286e80: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x286e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x286e84: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286e88: 0x80640001  lb          $a0, 0x1($v1)
    ctx->pc = 0x286e88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_286e8c:
    // 0x286e8c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x286e90: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x286E90u;
    SET_GPR_U32(ctx, 31, 0x286E98u);
    ctx->pc = 0x286E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E90u;
    // 0x286e94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x286E90u, 0x286E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E98u;
label_286e98:
    // 0x286e98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286E98u;
    {
        const bool branch_taken_0x286e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E98u;
        // 0x286e9c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e98) {
            ctx->pc = 0x286EB8u;
            goto label_286eb8;
        }
    }
    ctx->pc = 0x286EA0u;
label_286ea0:
    // 0x286ea0: 0x82a40001  lb          $a0, 0x1($s5)
    ctx->pc = 0x286ea0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x286ea4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x286ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x286ea8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x286ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x286eac: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x286EACu;
    SET_GPR_U32(ctx, 31, 0x286EB4u);
    ctx->pc = 0x286EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EACu;
    // 0x286eb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x286EACu, 0x286EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EB4u;
label_286eb4:
    // 0x286eb4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x286eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286eb8:
    // 0x286eb8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x286eb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_286ebc:
    // 0x286ebc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x286ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286ec0: 0x12240006  beq         $s1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286EC0u;
    {
        const bool branch_taken_0x286ec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x286EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EC0u;
        // 0x286ec4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ec0) {
            ctx->pc = 0x286EDCu;
            goto label_286edc;
        }
    }
    ctx->pc = 0x286EC8u;
    // 0x286ec8: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x286ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x286ecc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x286eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x286ed0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x286ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286ed4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286ED4u;
    {
        const bool branch_taken_0x286ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286ED4u;
        // 0x286ed8: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ed4) {
            ctx->pc = 0x286EE0u;
            goto label_286ee0;
        }
    }
    ctx->pc = 0x286EDCu;
label_286edc:
    // 0x286edc: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x286edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_286ee0:
    // 0x286ee0: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x286EE0u;
    {
        const bool branch_taken_0x286ee0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EE0u;
        // 0x286ee4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ee0) {
            ctx->pc = 0x286F14u;
            goto label_286f14;
        }
    }
    ctx->pc = 0x286EE8u;
    // 0x286ee8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x286EE8u;
    {
        const bool branch_taken_0x286ee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EE8u;
        // 0x286eec: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ee8) {
            ctx->pc = 0x286F00u;
            goto label_286f00;
        }
    }
    ctx->pc = 0x286EF0u;
    // 0x286ef0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x286ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x286ef4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x286ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x286ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286EF8u;
    {
        const bool branch_taken_0x286ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EF8u;
        // 0x286efc: 0x653821  addu        $a3, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ef8) {
            ctx->pc = 0x286F04u;
            goto label_286f04;
        }
    }
    ctx->pc = 0x286F00u;
label_286f00:
    // 0x286f00: 0x27a70148  addiu       $a3, $sp, 0x148
    ctx->pc = 0x286f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_286f04:
    // 0x286f04: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x286f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x286f08: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x286f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286f0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x286F0Cu;
    {
        const bool branch_taken_0x286f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F0Cu;
        // 0x286f10: 0x564021  addu        $t0, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f0c) {
            ctx->pc = 0x286F34u;
            goto label_286f34;
        }
    }
    ctx->pc = 0x286F14u;
label_286f14:
    // 0x286f14: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x286f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286f18: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x286F18u;
    {
        const bool branch_taken_0x286f18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F18u;
        // 0x286f1c: 0x453821  addu        $a3, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f18) {
            ctx->pc = 0x286F30u;
            goto label_286f30;
        }
    }
    ctx->pc = 0x286F20u;
    // 0x286f20: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x286f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x286f24: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x286f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x286f28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286F28u;
    {
        const bool branch_taken_0x286f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F28u;
        // 0x286f2c: 0x854021  addu        $t0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f28) {
            ctx->pc = 0x286F34u;
            goto label_286f34;
        }
    }
    ctx->pc = 0x286F30u;
label_286f30:
    // 0x286f30: 0x27a80148  addiu       $t0, $sp, 0x148
    ctx->pc = 0x286f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_286f34:
    // 0x286f34: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x286f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x286f38: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x286f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x286f3c: 0x8fa901fc  lw          $t1, 0x1FC($sp)
    ctx->pc = 0x286f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x286f40: 0xc082606  jal         func_209818
    ctx->pc = 0x286F40u;
    SET_GPR_U32(ctx, 31, 0x286F48u);
    ctx->pc = 0x286F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F40u;
    // 0x286f44: 0x8faa0200  lw          $t2, 0x200($sp) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209818u, 0x286F40u, 0x286F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F48u;
label_286f48:
    // 0x286f48: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x286F48u;
    {
        const bool branch_taken_0x286f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F48u;
        // 0x286f4c: 0xc7a70160  lwc1        $f7, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f48) {
            ctx->pc = 0x286FCCu;
            goto label_286fcc;
        }
    }
    ctx->pc = 0x286F50u;
    // 0x286f50: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x286f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286f54: 0xc7a60164  lwc1        $f6, 0x164($sp)
    ctx->pc = 0x286f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x286f58: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x286f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286f5c: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x286f5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x286f60: 0xc7a50168  lwc1        $f5, 0x168($sp)
    ctx->pc = 0x286f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x286f64: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x286f64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x286f68: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x286f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286f6c: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x286f6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x286f70: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x286f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x286f74: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x286f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x286f78: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x286f78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x286f7c: 0xe7a20184  swc1        $f2, 0x184($sp)
    ctx->pc = 0x286f7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x286f80: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x286f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x286f84: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x286f84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x286f88: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x286f88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x286f8c: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x286f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286f90: 0x0  nop
    ctx->pc = 0x286f90u;
    // NOP
    // 0x286f94: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x286F94u;
    {
        const bool branch_taken_0x286f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F94u;
        // 0x286f98: 0xe7a00188  swc1        $f0, 0x188($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f94) {
            ctx->pc = 0x286FCCu;
            goto label_286fcc;
        }
    }
    ctx->pc = 0x286F9Cu;
    // 0x286f9c: 0xc7a20170  lwc1        $f2, 0x170($sp)
    ctx->pc = 0x286f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286fa0: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x286fa0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x286fa4: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x286fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286fa8: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x286fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x286fac: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x286facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286fb0: 0xafa501a8  sw          $a1, 0x1A8($sp)
    ctx->pc = 0x286fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 5));
    // 0x286fb4: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x286fb4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x286fb8: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x286fb8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x286fbc: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x286fbcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x286fc0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x286fc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x286fc4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x286fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x286fc8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x286fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_286fcc:
    // 0x286fcc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x286fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fd0: 0x8fa701ec  lw          $a3, 0x1EC($sp)
    ctx->pc = 0x286fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x286fd4: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x286fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x286fd8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x286fd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x286fdc: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x286fdcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x286fe0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x286fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286fe4: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x286fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x286fe8: 0x2e7102a  slt         $v0, $s7, $a3
    ctx->pc = 0x286fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x286fec: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x286FECu;
    {
        const bool branch_taken_0x286fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FECu;
        // 0x286ff0: 0xd39823  subu        $s3, $a2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fec) {
            ctx->pc = 0x286DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286df0;
        }
    }
    ctx->pc = 0x286FF4u;
label_286ff4:
    // 0x286ff4: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x286ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x286ff8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x286FF8u;
    {
        const bool branch_taken_0x286ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FF8u;
        // 0x286ffc: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ff8) {
            ctx->pc = 0x287030u;
            goto label_287030;
        }
    }
    ctx->pc = 0x287000u;
    // 0x287000: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x287000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x287004: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x287004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x287008: 0xafa301d8  sw          $v1, 0x1D8($sp)
    ctx->pc = 0x287008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 3));
    // 0x28700c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287010: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x287010u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x287014: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x287014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x287018: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x287018u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x28701c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x28701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x287020: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x287020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x287024: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x287024u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x287028: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x287028u;
    {
        const bool branch_taken_0x287028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287028u;
        // 0x28702c: 0xafa201e4  sw          $v0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287028) {
            ctx->pc = 0x287038u;
            goto label_287038;
        }
    }
    ctx->pc = 0x287030u;
label_287030:
    // 0x287030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x287030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287034: 0xafa501dc  sw          $a1, 0x1DC($sp)
    ctx->pc = 0x287034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 5));
label_287038:
    // 0x287038: 0x8fa601dc  lw          $a2, 0x1DC($sp)
    ctx->pc = 0x287038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x28703c: 0x50c0ff02  beql        $a2, $zero, . + 4 + (-0xFE << 2)
    ctx->pc = 0x28703Cu;
    {
        const bool branch_taken_0x28703c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28703c) {
            ctx->pc = 0x287040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28703Cu;
            // 0x287040: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x286C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286c48;
        }
    }
    ctx->pc = 0x287044u;
    // 0x287044: 0x8fb101f0  lw          $s1, 0x1F0($sp)
    ctx->pc = 0x287044u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x287048: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x287048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x28704c: 0x441fee2  bgez        $v0, . + 4 + (-0x11E << 2)
    ctx->pc = 0x28704Cu;
    {
        const bool branch_taken_0x28704c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x287050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28704Cu;
        // 0x287050: 0x8fa601c8  lw          $a2, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28704c) {
            ctx->pc = 0x286BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286bd8;
        }
    }
    ctx->pc = 0x287054u;
    // 0x287054: 0x8fa701a0  lw          $a3, 0x1A0($sp)
    ctx->pc = 0x287054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x287058: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x287058u;
    {
        const bool branch_taken_0x287058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287058u;
        // 0x28705c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287058) {
            ctx->pc = 0x287144u;
            goto label_287144;
        }
    }
    ctx->pc = 0x287060u;
label_287060:
    // 0x287060: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x287060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287064: 0xc7a600e4  lwc1        $f6, 0xE4($sp)
    ctx->pc = 0x287064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x287068: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x287068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28706c: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x28706cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x287070: 0xc7a500e8  lwc1        $f5, 0xE8($sp)
    ctx->pc = 0x287070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x287074: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x287074u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x287078: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x287078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28707c: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x28707cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x287080: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x287080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x287084: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x287084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x287088: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x287088u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28708c: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x28708cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x287090: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x287090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287094: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x287094u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x287098: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x287098u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x28709c: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x28709cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2870a0: 0x0  nop
    ctx->pc = 0x2870a0u;
    // NOP
    // 0x2870a4: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2870A4u;
    {
        const bool branch_taken_0x2870a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2870A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870A4u;
        // 0x2870a8: 0xe7a00138  swc1        $f0, 0x138($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870a4) {
            ctx->pc = 0x287130u;
            goto label_287130;
        }
    }
    ctx->pc = 0x2870ACu;
    // 0x2870ac: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x2870acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2870b0: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2870b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2870b4: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x2870b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2870b8: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2870b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2870bc: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2870bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2870c0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2870c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2870c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2870c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2870c8: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x2870c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2870cc: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x2870ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2870d0: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2870d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2870d4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2870d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2870d8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2870d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2870dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2870dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2870e0: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x2870e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2870e4: 0xafa30204  sw          $v1, 0x204($sp)
    ctx->pc = 0x2870e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 3));
    // 0x2870e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2870E8u;
    {
        const bool branch_taken_0x2870e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870E8u;
        // 0x2870ec: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870e8) {
            ctx->pc = 0x287144u;
            goto label_287144;
        }
    }
    ctx->pc = 0x2870F0u;
label_2870f0:
    // 0x2870f0: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x2870f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2870f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2870f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2870f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2870F8u;
    {
        const bool branch_taken_0x2870f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870F8u;
        // 0x2870fc: 0xafa50204  sw          $a1, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870f8) {
            ctx->pc = 0x287144u;
            goto label_287144;
        }
    }
    ctx->pc = 0x287100u;
label_287100:
    // 0x287100: 0x8fa601ac  lw          $a2, 0x1AC($sp)
    ctx->pc = 0x287100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x287104: 0x8fa701a0  lw          $a3, 0x1A0($sp)
    ctx->pc = 0x287104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x287108: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x287108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28710c: 0xafa60204  sw          $a2, 0x204($sp)
    ctx->pc = 0x28710cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 6));
    // 0x287110: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x287110u;
    {
        const bool branch_taken_0x287110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287110u;
        // 0x287114: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287110) {
            ctx->pc = 0x287144u;
            goto label_287144;
        }
    }
    ctx->pc = 0x287118u;
label_287118:
    // 0x287118: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x287118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x28711c: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x28711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x287120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287124: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x287124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x287128: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x287128u;
    {
        const bool branch_taken_0x287128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287128u;
        // 0x28712c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287128) {
            ctx->pc = 0x287144u;
            goto label_287144;
        }
    }
    ctx->pc = 0x287130u;
label_287130:
    // 0x287130: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x287130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x287134: 0x8fa601ac  lw          $a2, 0x1AC($sp)
    ctx->pc = 0x287134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x287138: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x287138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28713c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28713cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x287140: 0xafa60204  sw          $a2, 0x204($sp)
    ctx->pc = 0x287140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 6));
label_287144:
    // 0x287144: 0x8fa70204  lw          $a3, 0x204($sp)
    ctx->pc = 0x287144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x287148: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x287148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28714c: 0x1440fe3e  bnez        $v0, . + 4 + (-0x1C2 << 2)
    ctx->pc = 0x28714Cu;
    {
        const bool branch_taken_0x28714c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28714Cu;
        // 0x287150: 0xafa701ac  sw          $a3, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28714c) {
            ctx->pc = 0x286A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286a48;
        }
    }
    ctx->pc = 0x287154u;
label_287154:
    // 0x287154: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x287154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x287158: 0xc440fa50  lwc1        $f0, -0x5B0($v0)
    ctx->pc = 0x287158u;
    { uint32_t bits = FAST_READ32(0x3AFA50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28715c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28715cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287160: 0x0  nop
    ctx->pc = 0x287160u;
    // NOP
    // 0x287164: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x287164u;
    {
        const bool branch_taken_0x287164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287164u;
        // 0x287168: 0x8fa30194  lw          $v1, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287164) {
            ctx->pc = 0x287270u;
            goto label_287270;
        }
    }
    ctx->pc = 0x28716Cu;
    // 0x28716c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28716Cu;
    {
        const bool branch_taken_0x28716c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28716Cu;
        // 0x287170: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28716c) {
            ctx->pc = 0x2871CCu;
            goto label_2871cc;
        }
    }
    ctx->pc = 0x287174u;
    // 0x287174: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x287174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287178: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x287178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28717c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x28717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287180: 0x8fa401b4  lw          $a0, 0x1B4($sp)
    ctx->pc = 0x287180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x287184: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x287184u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x287188: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x287188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28718c: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x28718Cu;
    SET_GPR_U32(ctx, 31, 0x287194u);
    ctx->pc = 0x287190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28718Cu;
    // 0x287190: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28718Cu, 0x287194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287194u;
label_287194:
    // 0x287194: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x287194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x287198: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x287198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x28719c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x28719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2871a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2871a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2871a4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2871a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2871a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2871a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2871ac: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2871acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2871b0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2871b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2871b4: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x2871b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2871b8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2871b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2871bc: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x2871bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2871c0: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2871c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2871c4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2871c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2871c8: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x2871c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2871cc:
    // 0x2871cc: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x2871ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2871d0: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2871D0u;
    {
        const bool branch_taken_0x2871d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871D0u;
        // 0x2871d4: 0xc7a50010  lwc1        $f5, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871d0) {
            ctx->pc = 0x287260u;
            goto label_287260;
        }
    }
    ctx->pc = 0x2871D8u;
    // 0x2871d8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2871d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2871dc: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2871dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2871e0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2871e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2871e4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2871e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2871e8: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2871e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2871ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2871ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2871f0: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2871f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2871f4: 0x0  nop
    ctx->pc = 0x2871f4u;
    // NOP
    // 0x2871f8: 0x0  nop
    ctx->pc = 0x2871f8u;
    // NOP
    // 0x2871fc: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2871fcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x287200: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x287200u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287204: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x287204u;
    {
        const bool branch_taken_0x287204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x287204) {
            ctx->pc = 0x287224u;
            goto label_287224;
        }
    }
    ctx->pc = 0x28720Cu;
    // 0x28720c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x28720Cu;
    SET_GPR_U32(ctx, 31, 0x287214u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28720Cu, 0x287214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287214u;
label_287214:
    // 0x287214: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x287214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x287218: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x287218u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x28721c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x28721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x287220: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x287220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_287224:
    // 0x287224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28722c: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x287230: 0x0  nop
    ctx->pc = 0x287230u;
    // NOP
    // 0x287234: 0x0  nop
    ctx->pc = 0x287234u;
    // NOP
    // 0x287238: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x287238u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x28723c: 0x8fa401b4  lw          $a0, 0x1B4($sp)
    ctx->pc = 0x28723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x287240: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x287240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x287244: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x287244u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x287248: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x287248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28724c: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x28724cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x287250: 0x8fa70198  lw          $a3, 0x198($sp)
    ctx->pc = 0x287250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x287254: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x287254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x287258: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x287258u;
    SET_GPR_U32(ctx, 31, 0x287260u);
    ctx->pc = 0x28725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287258u;
    // 0x28725c: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x287258u, 0x287260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287260u;
label_287260:
    // 0x287260: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x287260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x287264: 0xaf82b240  sw          $v0, -0x4DC0($gp)
    ctx->pc = 0x287264u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947392), GPR_U32(ctx, 2));
    // 0x287268: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287268u;
    {
        const bool branch_taken_0x287268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287268u;
        // 0x28726c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287268) {
            ctx->pc = 0x287274u;
            goto label_287274;
        }
    }
    ctx->pc = 0x287270u;
label_287270:
    // 0x287270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287274:
    // 0x287274: 0xdfbf02a0  ld          $ra, 0x2A0($sp)
    ctx->pc = 0x287274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_287278:
    // 0x287278: 0xdfbe0290  ld          $fp, 0x290($sp)
    ctx->pc = 0x287278u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x28727c: 0xdfb70280  ld          $s7, 0x280($sp)
    ctx->pc = 0x28727cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x287280: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x287280u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x287284: 0xdfb50260  ld          $s5, 0x260($sp)
    ctx->pc = 0x287284u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x287288: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x287288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x28728c: 0xdfb30240  ld          $s3, 0x240($sp)
    ctx->pc = 0x28728cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x287290: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x287290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x287294: 0xdfb10220  ld          $s1, 0x220($sp)
    ctx->pc = 0x287294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x287298: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x287298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x28729c: 0xc7b402b0  lwc1        $f20, 0x2B0($sp)
    ctx->pc = 0x28729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2872a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2872A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2872A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872A0u;
        // 0x2872a4: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2872A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2872A8u;
}
